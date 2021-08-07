/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)m_pScene.createNode("Group");
group->addChildren(X3D0);
X3D0->setProfile("Interchange");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("generator");
meta2->setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting");
head1->addMeta(meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("source");
meta3->setContent("LOA0ExampleSourceInVRML.wrl");
head1->addMeta(meta3);

X3D0->setHead(head1);

CScene* Scene4 = new CScene();
CProtoDeclare ProtoDeclare5 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid" ><ProtoInterface><field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="humanoidBody" accessType="inputOutput" type="MFNode"></field>
<field name="info" accessType="inputOutput" type="MFString"></field>
<field name="joints" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="segments" accessType="inputOutput" type="MFNode"></field>
<field name="sites" accessType="inputOutput" type="MFNode"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="version" accessType="inputOutput" type="SFString" value="200x"></field>
<field name="viewpoints" accessType="inputOutput" type="MFNode"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
</ProtoInterface>
<ProtoBody><Transform><Group><IS><connect nodeField="children" protoField="humanoidBody"></connect>
</IS>
</Group>
<Group><IS><connect nodeField="children" protoField="viewpoints"></connect>
</IS>
</Group>
<IS><connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare5->setName("Humanoid");
CProtoInterface* ProtoInterface6 = new CProtoInterface();
Cfield* field7 = new Cfield();
field7->setName("center");
field7->setAccessType("inputOutput");
field7->setType("SFVec3f");
field7->setValue("0 0 0");
ProtoInterface6->addField(field7);

Cfield* field8 = new Cfield();
field8->setName("humanoidBody");
field8->setAccessType("inputOutput");
field8->setType("MFNode");
ProtoInterface6->addField(field8);

Cfield* field9 = new Cfield();
field9->setName("info");
field9->setAccessType("inputOutput");
field9->setType("MFString");
ProtoInterface6->addField(field9);

Cfield* field10 = new Cfield();
field10->setName("joints");
field10->setAccessType("inputOutput");
field10->setType("MFNode");
ProtoInterface6->addField(field10);

Cfield* field11 = new Cfield();
field11->setName("name");
field11->setAccessType("inputOutput");
field11->setType("SFString");
ProtoInterface6->addField(field11);

Cfield* field12 = new Cfield();
field12->setName("rotation");
field12->setAccessType("inputOutput");
field12->setType("SFRotation");
field12->setValue("0 0 1 0");
ProtoInterface6->addField(field12);

Cfield* field13 = new Cfield();
field13->setName("scale");
field13->setAccessType("inputOutput");
field13->setType("SFVec3f");
field13->setValue("1 1 1");
ProtoInterface6->addField(field13);

Cfield* field14 = new Cfield();
field14->setName("scaleOrientation");
field14->setAccessType("inputOutput");
field14->setType("SFRotation");
field14->setValue("0 0 1 0");
ProtoInterface6->addField(field14);

Cfield* field15 = new Cfield();
field15->setName("segments");
field15->setAccessType("inputOutput");
field15->setType("MFNode");
ProtoInterface6->addField(field15);

Cfield* field16 = new Cfield();
field16->setName("sites");
field16->setAccessType("inputOutput");
field16->setType("MFNode");
ProtoInterface6->addField(field16);

Cfield* field17 = new Cfield();
field17->setName("translation");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
ProtoInterface6->addField(field17);

Cfield* field18 = new Cfield();
field18->setName("version");
field18->setAccessType("inputOutput");
field18->setType("SFString");
field18->setValue("200x");
ProtoInterface6->addField(field18);

Cfield* field19 = new Cfield();
field19->setName("viewpoints");
field19->setAccessType("inputOutput");
field19->setType("MFNode");
ProtoInterface6->addField(field19);

Cfield* field20 = new Cfield();
field20->setName("bboxCenter");
field20->setAccessType("initializeOnly");
field20->setType("SFVec3f");
field20->setValue("0 0 0");
ProtoInterface6->addField(field20);

Cfield* field21 = new Cfield();
field21->setName("bboxSize");
field21->setAccessType("initializeOnly");
field21->setType("SFVec3f");
field21->setValue("-1 -1 -1");
ProtoInterface6->addField(field21);

ProtoDeclare5->setProtoInterface(ProtoInterface6);

CProtoBody* ProtoBody22 = new CProtoBody();
CTransform* Transform23 = (CTransform *)m_pScene.createNode("Transform");
CGroup* Group24 = (CGroup *)m_pScene.createNode("Group");
CIS* IS25 = new CIS();
Cconnect* connect26 = new Cconnect();
connect26->setNodeField("children");
connect26->setProtoField("humanoidBody");
IS25->addConnect(connect26);

Group24->setIS(IS25);

Transform23->addChildren(Group24);

CGroup* Group27 = (CGroup *)m_pScene.createNode("Group");
CIS* IS28 = new CIS();
Cconnect* connect29 = new Cconnect();
connect29->setNodeField("children");
connect29->setProtoField("viewpoints");
IS28->addConnect(connect29);

Group27->setIS(IS28);

Transform23->addChildren(Group27);

CIS* IS30 = new CIS();
Cconnect* connect31 = new Cconnect();
connect31->setNodeField("center");
connect31->setProtoField("center");
IS30->addConnect(connect31);

Cconnect* connect32 = new Cconnect();
connect32->setNodeField("rotation");
connect32->setProtoField("rotation");
IS30->addConnect(connect32);

Cconnect* connect33 = new Cconnect();
connect33->setNodeField("scale");
connect33->setProtoField("scale");
IS30->addConnect(connect33);

Cconnect* connect34 = new Cconnect();
connect34->setNodeField("scaleOrientation");
connect34->setProtoField("scaleOrientation");
IS30->addConnect(connect34);

Cconnect* connect35 = new Cconnect();
connect35->setNodeField("translation");
connect35->setProtoField("translation");
IS30->addConnect(connect35);

Transform23->setIS(IS30);

ProtoBody22->addChildren(Transform23);

ProtoDeclare5->setProtoBody(ProtoBody22);

group->addChildren(ProtoDeclare5);

CProtoDeclare ProtoDeclare36 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" ><ProtoInterface><field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="limitOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="llimit" accessType="inputOutput" type="MFFloat"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="stiffness" accessType="inputOutput" type="MFFloat" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="ulimit" accessType="inputOutput" type="MFFloat"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare36->setName("Joint");
CProtoInterface* ProtoInterface37 = new CProtoInterface();
Cfield* field38 = new Cfield();
field38->setName("center");
field38->setAccessType("inputOutput");
field38->setType("SFVec3f");
field38->setValue("0 0 0");
ProtoInterface37->addField(field38);

Cfield* field39 = new Cfield();
field39->setName("children");
field39->setAccessType("inputOutput");
field39->setType("MFNode");
ProtoInterface37->addField(field39);

Cfield* field40 = new Cfield();
field40->setName("limitOrientation");
field40->setAccessType("inputOutput");
field40->setType("SFRotation");
field40->setValue("0 0 1 0");
ProtoInterface37->addField(field40);

Cfield* field41 = new Cfield();
field41->setName("llimit");
field41->setAccessType("inputOutput");
field41->setType("MFFloat");
ProtoInterface37->addField(field41);

Cfield* field42 = new Cfield();
field42->setName("name");
field42->setAccessType("inputOutput");
field42->setType("SFString");
ProtoInterface37->addField(field42);

Cfield* field43 = new Cfield();
field43->setName("rotation");
field43->setAccessType("inputOutput");
field43->setType("SFRotation");
field43->setValue("0 0 1 0");
ProtoInterface37->addField(field43);

Cfield* field44 = new Cfield();
field44->setName("scale");
field44->setAccessType("inputOutput");
field44->setType("SFVec3f");
field44->setValue("1 1 1");
ProtoInterface37->addField(field44);

Cfield* field45 = new Cfield();
field45->setName("scaleOrientation");
field45->setAccessType("inputOutput");
field45->setType("SFRotation");
field45->setValue("0 0 1 0");
ProtoInterface37->addField(field45);

Cfield* field46 = new Cfield();
field46->setName("stiffness");
field46->setAccessType("inputOutput");
field46->setType("MFFloat");
field46->setValue("1 1 1");
ProtoInterface37->addField(field46);

Cfield* field47 = new Cfield();
field47->setName("translation");
field47->setAccessType("inputOutput");
field47->setType("SFVec3f");
field47->setValue("0 0 0");
ProtoInterface37->addField(field47);

Cfield* field48 = new Cfield();
field48->setName("ulimit");
field48->setAccessType("inputOutput");
field48->setType("MFFloat");
ProtoInterface37->addField(field48);

ProtoDeclare36->setProtoInterface(ProtoInterface37);

CProtoBody* ProtoBody49 = new CProtoBody();
CTransform* Transform50 = (CTransform *)m_pScene.createNode("Transform");
CIS* IS51 = new CIS();
Cconnect* connect52 = new Cconnect();
connect52->setNodeField("children");
connect52->setProtoField("children");
IS51->addConnect(connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("center");
connect53->setProtoField("center");
IS51->addConnect(connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("rotation");
connect54->setProtoField("rotation");
IS51->addConnect(connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("scale");
connect55->setProtoField("scale");
IS51->addConnect(connect55);

Cconnect* connect56 = new Cconnect();
connect56->setNodeField("scaleOrientation");
connect56->setProtoField("scaleOrientation");
IS51->addConnect(connect56);

Cconnect* connect57 = new Cconnect();
connect57->setNodeField("translation");
connect57->setProtoField("translation");
IS51->addConnect(connect57);

Transform50->setIS(IS51);

ProtoBody49->addChildren(Transform50);

ProtoDeclare36->setProtoBody(ProtoBody49);

group->addChildren(ProtoDeclare36);

CProtoDeclare ProtoDeclare58 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="coord" accessType="inputOutput" type="SFNode" value="NULL"></field>
<field name="displacers" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare58->setName("Segment");
CProtoInterface* ProtoInterface59 = new CProtoInterface();
Cfield* field60 = new Cfield();
field60->setName("addChildren");
field60->setAccessType("inputOnly");
field60->setType("MFNode");
ProtoInterface59->addField(field60);

Cfield* field61 = new Cfield();
field61->setName("removeChildren");
field61->setAccessType("inputOnly");
field61->setType("MFNode");
ProtoInterface59->addField(field61);

Cfield* field62 = new Cfield();
field62->setName("centerOfMass");
field62->setAccessType("inputOutput");
field62->setType("SFVec3f");
field62->setValue("0 0 0");
ProtoInterface59->addField(field62);

Cfield* field63 = new Cfield();
field63->setName("children");
field63->setAccessType("inputOutput");
field63->setType("MFNode");
ProtoInterface59->addField(field63);

Cfield* field64 = new Cfield();
field64->setName("coord");
field64->setAccessType("inputOutput");
field64->setType("SFNode");
field64->setValue();
ProtoInterface59->addField(field64);

Cfield* field65 = new Cfield();
field65->setName("displacers");
field65->setAccessType("inputOutput");
field65->setType("MFNode");
ProtoInterface59->addField(field65);

Cfield* field66 = new Cfield();
field66->setName("name");
field66->setAccessType("inputOutput");
field66->setType("SFString");
ProtoInterface59->addField(field66);

Cfield* field67 = new Cfield();
field67->setName("mass");
field67->setAccessType("inputOutput");
field67->setType("SFFloat");
field67->setValue("0");
ProtoInterface59->addField(field67);

Cfield* field68 = new Cfield();
field68->setName("momentsOfInertia");
field68->setAccessType("inputOutput");
field68->setType("SFVec3f");
field68->setValue("1 1 1");
ProtoInterface59->addField(field68);

Cfield* field69 = new Cfield();
field69->setName("bboxCenter");
field69->setAccessType("initializeOnly");
field69->setType("SFVec3f");
field69->setValue("0 0 0");
ProtoInterface59->addField(field69);

Cfield* field70 = new Cfield();
field70->setName("bboxSize");
field70->setAccessType("initializeOnly");
field70->setType("SFVec3f");
field70->setValue("-1 -1 -1");
ProtoInterface59->addField(field70);

ProtoDeclare58->setProtoInterface(ProtoInterface59);

CProtoBody* ProtoBody71 = new CProtoBody();
CGroup* Group72 = (CGroup *)m_pScene.createNode("Group");
CIS* IS73 = new CIS();
Cconnect* connect74 = new Cconnect();
connect74->setNodeField("children");
connect74->setProtoField("children");
IS73->addConnect(connect74);

Cconnect* connect75 = new Cconnect();
connect75->setNodeField("bboxCenter");
connect75->setProtoField("bboxCenter");
IS73->addConnect(connect75);

Cconnect* connect76 = new Cconnect();
connect76->setNodeField("bboxSize");
connect76->setProtoField("bboxSize");
IS73->addConnect(connect76);

Cconnect* connect77 = new Cconnect();
connect77->setNodeField("addChildren");
connect77->setProtoField("addChildren");
IS73->addConnect(connect77);

Cconnect* connect78 = new Cconnect();
connect78->setNodeField("removeChildren");
connect78->setProtoField("removeChildren");
IS73->addConnect(connect78);

Group72->setIS(IS73);

ProtoBody71->addChildren(Group72);

ProtoDeclare58->setProtoBody(ProtoBody71);

group->addChildren(ProtoDeclare58);

CProtoDeclare ProtoDeclare79 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare79->setName("Site");
CProtoInterface* ProtoInterface80 = new CProtoInterface();
Cfield* field81 = new Cfield();
field81->setName("addChildren");
field81->setAccessType("inputOnly");
field81->setType("MFNode");
ProtoInterface80->addField(field81);

Cfield* field82 = new Cfield();
field82->setName("removeChildren");
field82->setAccessType("inputOnly");
field82->setType("MFNode");
ProtoInterface80->addField(field82);

Cfield* field83 = new Cfield();
field83->setName("center");
field83->setAccessType("inputOutput");
field83->setType("SFVec3f");
field83->setValue("0 0 0");
ProtoInterface80->addField(field83);

Cfield* field84 = new Cfield();
field84->setName("children");
field84->setAccessType("inputOutput");
field84->setType("MFNode");
ProtoInterface80->addField(field84);

Cfield* field85 = new Cfield();
field85->setName("name");
field85->setAccessType("inputOutput");
field85->setType("SFString");
ProtoInterface80->addField(field85);

Cfield* field86 = new Cfield();
field86->setName("rotation");
field86->setAccessType("inputOutput");
field86->setType("SFRotation");
field86->setValue("0 0 1 0");
ProtoInterface80->addField(field86);

Cfield* field87 = new Cfield();
field87->setName("scale");
field87->setAccessType("inputOutput");
field87->setType("SFVec3f");
field87->setValue("1 1 1");
ProtoInterface80->addField(field87);

Cfield* field88 = new Cfield();
field88->setName("scaleOrientation");
field88->setAccessType("inputOutput");
field88->setType("SFRotation");
field88->setValue("0 0 1 0");
ProtoInterface80->addField(field88);

Cfield* field89 = new Cfield();
field89->setName("translation");
field89->setAccessType("inputOutput");
field89->setType("SFVec3f");
field89->setValue("0 0 0");
ProtoInterface80->addField(field89);

ProtoDeclare79->setProtoInterface(ProtoInterface80);

CProtoBody* ProtoBody90 = new CProtoBody();
CTransform* Transform91 = (CTransform *)m_pScene.createNode("Transform");
CIS* IS92 = new CIS();
Cconnect* connect93 = new Cconnect();
connect93->setNodeField("children");
connect93->setProtoField("children");
IS92->addConnect(connect93);

Cconnect* connect94 = new Cconnect();
connect94->setNodeField("center");
connect94->setProtoField("center");
IS92->addConnect(connect94);

Cconnect* connect95 = new Cconnect();
connect95->setNodeField("rotation");
connect95->setProtoField("rotation");
IS92->addConnect(connect95);

Cconnect* connect96 = new Cconnect();
connect96->setNodeField("scale");
connect96->setProtoField("scale");
IS92->addConnect(connect96);

Cconnect* connect97 = new Cconnect();
connect97->setNodeField("scaleOrientation");
connect97->setProtoField("scaleOrientation");
IS92->addConnect(connect97);

Cconnect* connect98 = new Cconnect();
connect98->setNodeField("translation");
connect98->setProtoField("translation");
IS92->addConnect(connect98);

Cconnect* connect99 = new Cconnect();
connect99->setNodeField("addChildren");
connect99->setProtoField("addChildren");
IS92->addConnect(connect99);

Cconnect* connect100 = new Cconnect();
connect100->setNodeField("removeChildren");
connect100->setProtoField("removeChildren");
IS92->addConnect(connect100);

Transform91->setIS(IS92);

ProtoBody90->addChildren(Transform91);

ProtoDeclare79->setProtoBody(ProtoBody90);

group->addChildren(ProtoDeclare79);

CProtoInstance* ProtoInstance101 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance101->setName("Humanoid");
ProtoInstance101->setDEF("humanoid");
CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("humanoidBody");
CProtoInstance* ProtoInstance103 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance103->setName("Joint");
ProtoInstance103->setDEF("hanim_humanoid_root");
CfieldValue* fieldValue104 = new CfieldValue();
fieldValue104->setName("stiffness");
fieldValue104->setValue("1 1 1");
ProtoInstance103->addFieldValue(fieldValue104);

CfieldValue* fieldValue105 = new CfieldValue();
fieldValue105->setName("name");
fieldValue105->setValue("humanoid_root");
ProtoInstance103->addFieldValue(fieldValue105);

CfieldValue* fieldValue106 = new CfieldValue();
fieldValue106->setName("center");
fieldValue106->setValue("0 0.8240000009536743 0.027699999511241913");
ProtoInstance103->addFieldValue(fieldValue106);

CfieldValue* fieldValue107 = new CfieldValue();
fieldValue107->setName("children");
CProtoInstance* ProtoInstance108 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance108->setName("Segment");
ProtoInstance108->setDEF("hanim_sacrum");
CfieldValue* fieldValue109 = new CfieldValue();
fieldValue109->setName("name");
fieldValue109->setValue("sacrum");
ProtoInstance108->addFieldValue(fieldValue109);

CfieldValue* fieldValue110 = new CfieldValue();
fieldValue110->setName("children");
CProtoInstance* ProtoInstance111 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance111->setName("Site");
ProtoInstance111->setDEF("hanim_skull_tip");
CfieldValue* fieldValue112 = new CfieldValue();
fieldValue112->setName("name");
fieldValue112->setValue("skull_tip");
ProtoInstance111->addFieldValue(fieldValue112);

CfieldValue* fieldValue113 = new CfieldValue();
fieldValue113->setName("translation");
fieldValue113->setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678");
ProtoInstance111->addFieldValue(fieldValue113);

fieldValue110->addChildren(ProtoInstance111);

CProtoInstance* ProtoInstance114 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance114->setName("Site");
ProtoInstance114->setDEF("hanim_sellion");
CfieldValue* fieldValue115 = new CfieldValue();
fieldValue115->setName("name");
fieldValue115->setValue("sellion");
ProtoInstance114->addFieldValue(fieldValue115);

CfieldValue* fieldValue116 = new CfieldValue();
fieldValue116->setName("translation");
fieldValue116->setValue("0.005799999926239252 1.631600022315979 0.0851999968290329");
ProtoInstance114->addFieldValue(fieldValue116);

fieldValue110->addChildren(ProtoInstance114);

CProtoInstance* ProtoInstance117 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance117->setName("Site");
ProtoInstance117->setDEF("hanim_r_infraorbitale");
CfieldValue* fieldValue118 = new CfieldValue();
fieldValue118->setName("name");
fieldValue118->setValue("r_infraorbitale");
ProtoInstance117->addFieldValue(fieldValue118);

CfieldValue* fieldValue119 = new CfieldValue();
fieldValue119->setName("translation");
fieldValue119->setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547");
ProtoInstance117->addFieldValue(fieldValue119);

fieldValue110->addChildren(ProtoInstance117);

CProtoInstance* ProtoInstance120 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance120->setName("Site");
ProtoInstance120->setDEF("hanim_l_infraorbitale");
CfieldValue* fieldValue121 = new CfieldValue();
fieldValue121->setName("name");
fieldValue121->setValue("l_infraorbitale");
ProtoInstance120->addFieldValue(fieldValue121);

CfieldValue* fieldValue122 = new CfieldValue();
fieldValue122->setName("translation");
fieldValue122->setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547");
ProtoInstance120->addFieldValue(fieldValue122);

fieldValue110->addChildren(ProtoInstance120);

CProtoInstance* ProtoInstance123 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance123->setName("Site");
ProtoInstance123->setDEF("hanim_supramenton");
CfieldValue* fieldValue124 = new CfieldValue();
fieldValue124->setName("name");
fieldValue124->setValue("supramenton");
ProtoInstance123->addFieldValue(fieldValue124);

CfieldValue* fieldValue125 = new CfieldValue();
fieldValue125->setName("translation");
fieldValue125->setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962");
ProtoInstance123->addFieldValue(fieldValue125);

fieldValue110->addChildren(ProtoInstance123);

CProtoInstance* ProtoInstance126 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance126->setName("Site");
ProtoInstance126->setDEF("hanim_r_tragion");
CfieldValue* fieldValue127 = new CfieldValue();
fieldValue127->setName("name");
fieldValue127->setValue("r_tragion");
ProtoInstance126->addFieldValue(fieldValue127);

CfieldValue* fieldValue128 = new CfieldValue();
fieldValue128->setName("translation");
fieldValue128->setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642");
ProtoInstance126->addFieldValue(fieldValue128);

fieldValue110->addChildren(ProtoInstance126);

CProtoInstance* ProtoInstance129 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance129->setName("Site");
ProtoInstance129->setDEF("hanim_r_gonion");
CfieldValue* fieldValue130 = new CfieldValue();
fieldValue130->setName("name");
fieldValue130->setValue("r_gonion");
ProtoInstance129->addFieldValue(fieldValue130);

CfieldValue* fieldValue131 = new CfieldValue();
fieldValue131->setName("translation");
fieldValue131->setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176");
ProtoInstance129->addFieldValue(fieldValue131);

fieldValue110->addChildren(ProtoInstance129);

CProtoInstance* ProtoInstance132 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance132->setName("Site");
ProtoInstance132->setDEF("hanim_l_tragion");
CfieldValue* fieldValue133 = new CfieldValue();
fieldValue133->setName("name");
fieldValue133->setValue("l_tragion");
ProtoInstance132->addFieldValue(fieldValue133);

CfieldValue* fieldValue134 = new CfieldValue();
fieldValue134->setName("translation");
fieldValue134->setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874");
ProtoInstance132->addFieldValue(fieldValue134);

fieldValue110->addChildren(ProtoInstance132);

CProtoInstance* ProtoInstance135 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance135->setName("Site");
ProtoInstance135->setDEF("hanim_l_gonion");
CfieldValue* fieldValue136 = new CfieldValue();
fieldValue136->setName("name");
fieldValue136->setValue("l_gonion");
ProtoInstance135->addFieldValue(fieldValue136);

CfieldValue* fieldValue137 = new CfieldValue();
fieldValue137->setName("translation");
fieldValue137->setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066");
ProtoInstance135->addFieldValue(fieldValue137);

fieldValue110->addChildren(ProtoInstance135);

CProtoInstance* ProtoInstance138 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance138->setName("Site");
ProtoInstance138->setDEF("hanim_nuchale");
CfieldValue* fieldValue139 = new CfieldValue();
fieldValue139->setName("name");
fieldValue139->setValue("nuchale");
ProtoInstance138->addFieldValue(fieldValue139);

CfieldValue* fieldValue140 = new CfieldValue();
fieldValue140->setName("translation");
fieldValue140->setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361");
ProtoInstance138->addFieldValue(fieldValue140);

fieldValue110->addChildren(ProtoInstance138);

CProtoInstance* ProtoInstance141 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance141->setName("Site");
ProtoInstance141->setDEF("hanim_r_clavicale");
CfieldValue* fieldValue142 = new CfieldValue();
fieldValue142->setName("name");
fieldValue142->setValue("r_clavicale");
ProtoInstance141->addFieldValue(fieldValue142);

CfieldValue* fieldValue143 = new CfieldValue();
fieldValue143->setName("translation");
fieldValue143->setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033");
ProtoInstance141->addFieldValue(fieldValue143);

fieldValue110->addChildren(ProtoInstance141);

CProtoInstance* ProtoInstance144 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance144->setName("Site");
ProtoInstance144->setDEF("hanim_suprasternale");
CfieldValue* fieldValue145 = new CfieldValue();
fieldValue145->setName("name");
fieldValue145->setValue("suprasternale");
ProtoInstance144->addFieldValue(fieldValue145);

CfieldValue* fieldValue146 = new CfieldValue();
fieldValue146->setName("translation");
fieldValue146->setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869");
ProtoInstance144->addFieldValue(fieldValue146);

fieldValue110->addChildren(ProtoInstance144);

CProtoInstance* ProtoInstance147 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance147->setName("Site");
ProtoInstance147->setDEF("hanim_l_clavicale");
CfieldValue* fieldValue148 = new CfieldValue();
fieldValue148->setName("name");
fieldValue148->setValue("l_clavicale");
ProtoInstance147->addFieldValue(fieldValue148);

CfieldValue* fieldValue149 = new CfieldValue();
fieldValue149->setName("translation");
fieldValue149->setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754");
ProtoInstance147->addFieldValue(fieldValue149);

fieldValue110->addChildren(ProtoInstance147);

CProtoInstance* ProtoInstance150 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance150->setName("Site");
ProtoInstance150->setDEF("hanim_r_thelion");
CfieldValue* fieldValue151 = new CfieldValue();
fieldValue151->setName("name");
fieldValue151->setValue("r_thelion");
ProtoInstance150->addFieldValue(fieldValue151);

CfieldValue* fieldValue152 = new CfieldValue();
fieldValue152->setName("translation");
fieldValue152->setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911");
ProtoInstance150->addFieldValue(fieldValue152);

fieldValue110->addChildren(ProtoInstance150);

CProtoInstance* ProtoInstance153 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance153->setName("Site");
ProtoInstance153->setDEF("hanim_l_thelion");
CfieldValue* fieldValue154 = new CfieldValue();
fieldValue154->setName("name");
fieldValue154->setValue("l_thelion");
ProtoInstance153->addFieldValue(fieldValue154);

CfieldValue* fieldValue155 = new CfieldValue();
fieldValue155->setName("translation");
fieldValue155->setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689");
ProtoInstance153->addFieldValue(fieldValue155);

fieldValue110->addChildren(ProtoInstance153);

CProtoInstance* ProtoInstance156 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance156->setName("Site");
ProtoInstance156->setDEF("hanim_substernale");
CfieldValue* fieldValue157 = new CfieldValue();
fieldValue157->setName("name");
fieldValue157->setValue("substernale");
ProtoInstance156->addFieldValue(fieldValue157);

CfieldValue* fieldValue158 = new CfieldValue();
fieldValue158->setName("translation");
fieldValue158->setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683");
ProtoInstance156->addFieldValue(fieldValue158);

fieldValue110->addChildren(ProtoInstance156);

CProtoInstance* ProtoInstance159 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance159->setName("Site");
ProtoInstance159->setDEF("hanim_r_rib10");
CfieldValue* fieldValue160 = new CfieldValue();
fieldValue160->setName("name");
fieldValue160->setValue("r_rib10");
ProtoInstance159->addFieldValue(fieldValue160);

CfieldValue* fieldValue161 = new CfieldValue();
fieldValue161->setName("translation");
fieldValue161->setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432");
ProtoInstance159->addFieldValue(fieldValue161);

fieldValue110->addChildren(ProtoInstance159);

CProtoInstance* ProtoInstance162 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance162->setName("Site");
ProtoInstance162->setDEF("hanim_r_asis");
CfieldValue* fieldValue163 = new CfieldValue();
fieldValue163->setName("name");
fieldValue163->setValue("r_asis");
ProtoInstance162->addFieldValue(fieldValue163);

CfieldValue* fieldValue164 = new CfieldValue();
fieldValue164->setName("translation");
fieldValue164->setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747");
ProtoInstance162->addFieldValue(fieldValue164);

fieldValue110->addChildren(ProtoInstance162);

CProtoInstance* ProtoInstance165 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance165->setName("Site");
ProtoInstance165->setDEF("hanim_l_rib10");
CfieldValue* fieldValue166 = new CfieldValue();
fieldValue166->setName("name");
fieldValue166->setValue("l_rib10");
ProtoInstance165->addFieldValue(fieldValue166);

CfieldValue* fieldValue167 = new CfieldValue();
fieldValue167->setName("translation");
fieldValue167->setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202");
ProtoInstance165->addFieldValue(fieldValue167);

fieldValue110->addChildren(ProtoInstance165);

CProtoInstance* ProtoInstance168 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance168->setName("Site");
ProtoInstance168->setDEF("hanim_l_asis");
CfieldValue* fieldValue169 = new CfieldValue();
fieldValue169->setName("name");
fieldValue169->setValue("l_asis");
ProtoInstance168->addFieldValue(fieldValue169);

CfieldValue* fieldValue170 = new CfieldValue();
fieldValue170->setName("translation");
fieldValue170->setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836");
ProtoInstance168->addFieldValue(fieldValue170);

fieldValue110->addChildren(ProtoInstance168);

CProtoInstance* ProtoInstance171 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance171->setName("Site");
ProtoInstance171->setDEF("hanim_r_iliocristale");
CfieldValue* fieldValue172 = new CfieldValue();
fieldValue172->setName("name");
fieldValue172->setValue("r_iliocristale");
ProtoInstance171->addFieldValue(fieldValue172);

CfieldValue* fieldValue173 = new CfieldValue();
fieldValue173->setName("translation");
fieldValue173->setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187");
ProtoInstance171->addFieldValue(fieldValue173);

fieldValue110->addChildren(ProtoInstance171);

CProtoInstance* ProtoInstance174 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance174->setName("Site");
ProtoInstance174->setDEF("hanim_r_trochanterion");
CfieldValue* fieldValue175 = new CfieldValue();
fieldValue175->setName("name");
fieldValue175->setValue("r_trochanterion");
ProtoInstance174->addFieldValue(fieldValue175);

CfieldValue* fieldValue176 = new CfieldValue();
fieldValue176->setName("translation");
fieldValue176->setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514");
ProtoInstance174->addFieldValue(fieldValue176);

fieldValue110->addChildren(ProtoInstance174);

CProtoInstance* ProtoInstance177 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance177->setName("Site");
ProtoInstance177->setDEF("hanim_l_iliocristale");
CfieldValue* fieldValue178 = new CfieldValue();
fieldValue178->setName("name");
fieldValue178->setValue("l_iliocristale");
ProtoInstance177->addFieldValue(fieldValue178);

CfieldValue* fieldValue179 = new CfieldValue();
fieldValue179->setName("translation");
fieldValue179->setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001");
ProtoInstance177->addFieldValue(fieldValue179);

fieldValue110->addChildren(ProtoInstance177);

CProtoInstance* ProtoInstance180 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance180->setName("Site");
ProtoInstance180->setDEF("hanim_l_trochanterion");
CfieldValue* fieldValue181 = new CfieldValue();
fieldValue181->setName("name");
fieldValue181->setValue("l_trochanterion");
ProtoInstance180->addFieldValue(fieldValue181);

CfieldValue* fieldValue182 = new CfieldValue();
fieldValue182->setName("translation");
fieldValue182->setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183");
ProtoInstance180->addFieldValue(fieldValue182);

fieldValue110->addChildren(ProtoInstance180);

CProtoInstance* ProtoInstance183 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance183->setName("Site");
ProtoInstance183->setDEF("hanim_cervicale");
CfieldValue* fieldValue184 = new CfieldValue();
fieldValue184->setName("name");
fieldValue184->setValue("cervicale");
ProtoInstance183->addFieldValue(fieldValue184);

CfieldValue* fieldValue185 = new CfieldValue();
fieldValue185->setName("translation");
fieldValue185->setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754");
ProtoInstance183->addFieldValue(fieldValue185);

fieldValue110->addChildren(ProtoInstance183);

CProtoInstance* ProtoInstance186 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance186->setName("Site");
ProtoInstance186->setDEF("hanim_spine_2_lower_back");
CfieldValue* fieldValue187 = new CfieldValue();
fieldValue187->setName("name");
fieldValue187->setValue("spine_2_lower_back");
ProtoInstance186->addFieldValue(fieldValue187);

CfieldValue* fieldValue188 = new CfieldValue();
fieldValue188->setName("translation");
fieldValue188->setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661");
ProtoInstance186->addFieldValue(fieldValue188);

fieldValue110->addChildren(ProtoInstance186);

CProtoInstance* ProtoInstance189 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance189->setName("Site");
ProtoInstance189->setDEF("hanim_r_psis");
CfieldValue* fieldValue190 = new CfieldValue();
fieldValue190->setName("name");
fieldValue190->setValue("r_psis");
ProtoInstance189->addFieldValue(fieldValue190);

CfieldValue* fieldValue191 = new CfieldValue();
fieldValue191->setName("translation");
fieldValue191->setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082");
ProtoInstance189->addFieldValue(fieldValue191);

fieldValue110->addChildren(ProtoInstance189);

CProtoInstance* ProtoInstance192 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance192->setName("Site");
ProtoInstance192->setDEF("hanim_l_psis");
CfieldValue* fieldValue193 = new CfieldValue();
fieldValue193->setName("name");
fieldValue193->setValue("l_psis");
ProtoInstance192->addFieldValue(fieldValue193);

CfieldValue* fieldValue194 = new CfieldValue();
fieldValue194->setName("translation");
fieldValue194->setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388");
ProtoInstance192->addFieldValue(fieldValue194);

fieldValue110->addChildren(ProtoInstance192);

CProtoInstance* ProtoInstance195 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance195->setName("Site");
ProtoInstance195->setDEF("hanim_waist_preferred_posterior");
CfieldValue* fieldValue196 = new CfieldValue();
fieldValue196->setName("name");
fieldValue196->setValue("waist_preferred_posterior");
ProtoInstance195->addFieldValue(fieldValue196);

CfieldValue* fieldValue197 = new CfieldValue();
fieldValue197->setName("translation");
fieldValue197->setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754");
ProtoInstance195->addFieldValue(fieldValue197);

fieldValue110->addChildren(ProtoInstance195);

CProtoInstance* ProtoInstance198 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance198->setName("Site");
ProtoInstance198->setDEF("hanim_r_acromion");
CfieldValue* fieldValue199 = new CfieldValue();
fieldValue199->setName("name");
fieldValue199->setValue("r_acromion");
ProtoInstance198->addFieldValue(fieldValue199);

CfieldValue* fieldValue200 = new CfieldValue();
fieldValue200->setName("translation");
fieldValue200->setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541");
ProtoInstance198->addFieldValue(fieldValue200);

fieldValue110->addChildren(ProtoInstance198);

CProtoInstance* ProtoInstance201 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance201->setName("Site");
ProtoInstance201->setDEF("hanim_r_axilla_proximal");
CfieldValue* fieldValue202 = new CfieldValue();
fieldValue202->setName("name");
fieldValue202->setValue("r_axilla_proximal");
ProtoInstance201->addFieldValue(fieldValue202);

CfieldValue* fieldValue203 = new CfieldValue();
fieldValue203->setName("translation");
fieldValue203->setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438");
ProtoInstance201->addFieldValue(fieldValue203);

fieldValue110->addChildren(ProtoInstance201);

CProtoInstance* ProtoInstance204 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance204->setName("Site");
ProtoInstance204->setDEF("hanim_r_radial_styloid");
CfieldValue* fieldValue205 = new CfieldValue();
fieldValue205->setName("name");
fieldValue205->setValue("r_radial_styloid");
ProtoInstance204->addFieldValue(fieldValue205);

CfieldValue* fieldValue206 = new CfieldValue();
fieldValue206->setName("translation");
fieldValue206->setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236");
ProtoInstance204->addFieldValue(fieldValue206);

fieldValue110->addChildren(ProtoInstance204);

CProtoInstance* ProtoInstance207 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance207->setName("Site");
ProtoInstance207->setDEF("hanim_r_axilla_distal");
CfieldValue* fieldValue208 = new CfieldValue();
fieldValue208->setName("name");
fieldValue208->setValue("r_axilla_distal");
ProtoInstance207->addFieldValue(fieldValue208);

CfieldValue* fieldValue209 = new CfieldValue();
fieldValue209->setName("translation");
fieldValue209->setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678");
ProtoInstance207->addFieldValue(fieldValue209);

fieldValue110->addChildren(ProtoInstance207);

CProtoInstance* ProtoInstance210 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance210->setName("Site");
ProtoInstance210->setDEF("hanim_r_olecranon");
CfieldValue* fieldValue211 = new CfieldValue();
fieldValue211->setName("name");
fieldValue211->setValue("r_olecranon");
ProtoInstance210->addFieldValue(fieldValue211);

CfieldValue* fieldValue212 = new CfieldValue();
fieldValue212->setName("translation");
fieldValue212->setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142");
ProtoInstance210->addFieldValue(fieldValue212);

fieldValue110->addChildren(ProtoInstance210);

CProtoInstance* ProtoInstance213 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance213->setName("Site");
ProtoInstance213->setDEF("hanim_r_humeral_lateral_epicondyles");
CfieldValue* fieldValue214 = new CfieldValue();
fieldValue214->setName("name");
fieldValue214->setValue("r_humeral_lateral_epicondyles");
ProtoInstance213->addFieldValue(fieldValue214);

CfieldValue* fieldValue215 = new CfieldValue();
fieldValue215->setName("translation");
fieldValue215->setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443");
ProtoInstance213->addFieldValue(fieldValue215);

fieldValue110->addChildren(ProtoInstance213);

CProtoInstance* ProtoInstance216 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance216->setName("Site");
ProtoInstance216->setDEF("hanim_r_humeral_medial_epicondyles");
CfieldValue* fieldValue217 = new CfieldValue();
fieldValue217->setName("name");
fieldValue217->setValue("r_humeral_medial_epicondyles");
ProtoInstance216->addFieldValue(fieldValue217);

CfieldValue* fieldValue218 = new CfieldValue();
fieldValue218->setName("translation");
fieldValue218->setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628");
ProtoInstance216->addFieldValue(fieldValue218);

fieldValue110->addChildren(ProtoInstance216);

CProtoInstance* ProtoInstance219 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance219->setName("Site");
ProtoInstance219->setDEF("hanim_r_radiale");
CfieldValue* fieldValue220 = new CfieldValue();
fieldValue220->setName("name");
fieldValue220->setValue("r_radiale");
ProtoInstance219->addFieldValue(fieldValue220);

CfieldValue* fieldValue221 = new CfieldValue();
fieldValue221->setName("translation");
fieldValue221->setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754");
ProtoInstance219->addFieldValue(fieldValue221);

fieldValue110->addChildren(ProtoInstance219);

CProtoInstance* ProtoInstance222 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance222->setName("Site");
ProtoInstance222->setDEF("hanim_r_metacarpal_phalanx_2");
CfieldValue* fieldValue223 = new CfieldValue();
fieldValue223->setName("name");
fieldValue223->setValue("r_metacarpal_phalanx_2");
ProtoInstance222->addFieldValue(fieldValue223);

CfieldValue* fieldValue224 = new CfieldValue();
fieldValue224->setName("translation");
fieldValue224->setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933");
ProtoInstance222->addFieldValue(fieldValue224);

fieldValue110->addChildren(ProtoInstance222);

CProtoInstance* ProtoInstance225 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance225->setName("Site");
ProtoInstance225->setDEF("hanim_r_dactylion");
CfieldValue* fieldValue226 = new CfieldValue();
fieldValue226->setName("name");
fieldValue226->setValue("r_dactylion");
ProtoInstance225->addFieldValue(fieldValue226);

CfieldValue* fieldValue227 = new CfieldValue();
fieldValue227->setName("translation");
fieldValue227->setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131");
ProtoInstance225->addFieldValue(fieldValue227);

fieldValue110->addChildren(ProtoInstance225);

CProtoInstance* ProtoInstance228 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance228->setName("Site");
ProtoInstance228->setDEF("hanim_r_ulnar_styloid");
CfieldValue* fieldValue229 = new CfieldValue();
fieldValue229->setName("name");
fieldValue229->setValue("r_ulnar_styloid");
ProtoInstance228->addFieldValue(fieldValue229);

CfieldValue* fieldValue230 = new CfieldValue();
fieldValue230->setName("translation");
fieldValue230->setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294");
ProtoInstance228->addFieldValue(fieldValue230);

fieldValue110->addChildren(ProtoInstance228);

CProtoInstance* ProtoInstance231 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance231->setName("Site");
ProtoInstance231->setDEF("hanim_r_metacarpal_phalanx_5");
CfieldValue* fieldValue232 = new CfieldValue();
fieldValue232->setName("name");
fieldValue232->setValue("r_metacarpal_phalanx_5");
ProtoInstance231->addFieldValue(fieldValue232);

CfieldValue* fieldValue233 = new CfieldValue();
fieldValue233->setName("translation");
fieldValue233->setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951");
ProtoInstance231->addFieldValue(fieldValue233);

fieldValue110->addChildren(ProtoInstance231);

CProtoInstance* ProtoInstance234 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance234->setName("Site");
ProtoInstance234->setDEF("hanim_l_acromion");
CfieldValue* fieldValue235 = new CfieldValue();
fieldValue235->setName("name");
fieldValue235->setValue("l_acromion");
ProtoInstance234->addFieldValue(fieldValue235);

CfieldValue* fieldValue236 = new CfieldValue();
fieldValue236->setName("translation");
fieldValue236->setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014");
ProtoInstance234->addFieldValue(fieldValue236);

fieldValue110->addChildren(ProtoInstance234);

CProtoInstance* ProtoInstance237 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance237->setName("Site");
ProtoInstance237->setDEF("hanim_l_axilla_proximal");
CfieldValue* fieldValue238 = new CfieldValue();
fieldValue238->setName("name");
fieldValue238->setValue("l_axilla_proximal");
ProtoInstance237->addFieldValue(fieldValue238);

CfieldValue* fieldValue239 = new CfieldValue();
fieldValue239->setName("translation");
fieldValue239->setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937");
ProtoInstance237->addFieldValue(fieldValue239);

fieldValue110->addChildren(ProtoInstance237);

CProtoInstance* ProtoInstance240 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance240->setName("Site");
ProtoInstance240->setDEF("hanim_l_radial_styloid");
CfieldValue* fieldValue241 = new CfieldValue();
fieldValue241->setName("name");
fieldValue241->setValue("l_radial_styloid");
ProtoInstance240->addFieldValue(fieldValue241);

CfieldValue* fieldValue242 = new CfieldValue();
fieldValue242->setName("translation");
fieldValue242->setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691");
ProtoInstance240->addFieldValue(fieldValue242);

fieldValue110->addChildren(ProtoInstance240);

CProtoInstance* ProtoInstance243 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance243->setName("Site");
ProtoInstance243->setDEF("hanim_l_axilla_distal");
CfieldValue* fieldValue244 = new CfieldValue();
fieldValue244->setName("name");
fieldValue244->setValue("l_axilla_distal");
ProtoInstance243->addFieldValue(fieldValue244);

CfieldValue* fieldValue245 = new CfieldValue();
fieldValue245->setName("translation");
fieldValue245->setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388");
ProtoInstance243->addFieldValue(fieldValue245);

fieldValue110->addChildren(ProtoInstance243);

CProtoInstance* ProtoInstance246 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance246->setName("Site");
ProtoInstance246->setDEF("hanim_l_olecranon");
CfieldValue* fieldValue247 = new CfieldValue();
fieldValue247->setName("name");
fieldValue247->setValue("l_olecranon");
ProtoInstance246->addFieldValue(fieldValue247);

CfieldValue* fieldValue248 = new CfieldValue();
fieldValue248->setName("translation");
fieldValue248->setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453");
ProtoInstance246->addFieldValue(fieldValue248);

fieldValue110->addChildren(ProtoInstance246);

CProtoInstance* ProtoInstance249 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance249->setName("Site");
ProtoInstance249->setDEF("hanim_l_humeral_lateral_epicondyles");
CfieldValue* fieldValue250 = new CfieldValue();
fieldValue250->setName("name");
fieldValue250->setValue("l_humeral_lateral_epicondyles");
ProtoInstance249->addFieldValue(fieldValue250);

CfieldValue* fieldValue251 = new CfieldValue();
fieldValue251->setName("translation");
fieldValue251->setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355");
ProtoInstance249->addFieldValue(fieldValue251);

fieldValue110->addChildren(ProtoInstance249);

CProtoInstance* ProtoInstance252 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance252->setName("Site");
ProtoInstance252->setDEF("hanim_l_humeral_medial_epicondyles");
CfieldValue* fieldValue253 = new CfieldValue();
fieldValue253->setName("name");
fieldValue253->setValue("l_humeral_medial_epicondyles");
ProtoInstance252->addFieldValue(fieldValue253);

CfieldValue* fieldValue254 = new CfieldValue();
fieldValue254->setName("translation");
fieldValue254->setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661");
ProtoInstance252->addFieldValue(fieldValue254);

fieldValue110->addChildren(ProtoInstance252);

CProtoInstance* ProtoInstance255 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance255->setName("Site");
ProtoInstance255->setDEF("hanim_l_radiale");
CfieldValue* fieldValue256 = new CfieldValue();
fieldValue256->setName("name");
fieldValue256->setValue("l_radiale");
ProtoInstance255->addFieldValue(fieldValue256);

CfieldValue* fieldValue257 = new CfieldValue();
fieldValue257->setName("translation");
fieldValue257->setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268");
ProtoInstance255->addFieldValue(fieldValue257);

fieldValue110->addChildren(ProtoInstance255);

CProtoInstance* ProtoInstance258 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance258->setName("Site");
ProtoInstance258->setDEF("hanim_l_metacarpal_phalanx_2");
CfieldValue* fieldValue259 = new CfieldValue();
fieldValue259->setName("name");
fieldValue259->setValue("l_metacarpal_phalanx_2");
ProtoInstance258->addFieldValue(fieldValue259);

CfieldValue* fieldValue260 = new CfieldValue();
fieldValue260->setName("translation");
fieldValue260->setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597");
ProtoInstance258->addFieldValue(fieldValue260);

fieldValue110->addChildren(ProtoInstance258);

CProtoInstance* ProtoInstance261 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance261->setName("Site");
ProtoInstance261->setDEF("hanim_l_dactylion");
CfieldValue* fieldValue262 = new CfieldValue();
fieldValue262->setName("name");
fieldValue262->setValue("l_dactylion");
ProtoInstance261->addFieldValue(fieldValue262);

CfieldValue* fieldValue263 = new CfieldValue();
fieldValue263->setName("translation");
fieldValue263->setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604");
ProtoInstance261->addFieldValue(fieldValue263);

fieldValue110->addChildren(ProtoInstance261);

CProtoInstance* ProtoInstance264 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance264->setName("Site");
ProtoInstance264->setDEF("hanim_l_ulnar_styloid");
CfieldValue* fieldValue265 = new CfieldValue();
fieldValue265->setName("name");
fieldValue265->setValue("l_ulnar_styloid");
ProtoInstance264->addFieldValue(fieldValue265);

CfieldValue* fieldValue266 = new CfieldValue();
fieldValue266->setName("translation");
fieldValue266->setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098");
ProtoInstance264->addFieldValue(fieldValue266);

fieldValue110->addChildren(ProtoInstance264);

CProtoInstance* ProtoInstance267 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance267->setName("Site");
ProtoInstance267->setDEF("hanim_l_metacarpal_phalanx_5");
CfieldValue* fieldValue268 = new CfieldValue();
fieldValue268->setName("name");
fieldValue268->setValue("l_metacarpal_phalanx_5");
ProtoInstance267->addFieldValue(fieldValue268);

CfieldValue* fieldValue269 = new CfieldValue();
fieldValue269->setName("translation");
fieldValue269->setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262");
ProtoInstance267->addFieldValue(fieldValue269);

fieldValue110->addChildren(ProtoInstance267);

CProtoInstance* ProtoInstance270 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance270->setName("Site");
ProtoInstance270->setDEF("hanim_r_knee_crease");
CfieldValue* fieldValue271 = new CfieldValue();
fieldValue271->setName("name");
fieldValue271->setValue("r_knee_crease");
ProtoInstance270->addFieldValue(fieldValue271);

CfieldValue* fieldValue272 = new CfieldValue();
fieldValue272->setName("translation");
fieldValue272->setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016");
ProtoInstance270->addFieldValue(fieldValue272);

fieldValue110->addChildren(ProtoInstance270);

CProtoInstance* ProtoInstance273 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance273->setName("Site");
ProtoInstance273->setDEF("hanim_r_femoral_lateral_epicondyles");
CfieldValue* fieldValue274 = new CfieldValue();
fieldValue274->setName("name");
fieldValue274->setValue("r_femoral_lateral_epicondyles");
ProtoInstance273->addFieldValue(fieldValue274);

CfieldValue* fieldValue275 = new CfieldValue();
fieldValue275->setName("translation");
fieldValue275->setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052");
ProtoInstance273->addFieldValue(fieldValue275);

fieldValue110->addChildren(ProtoInstance273);

CProtoInstance* ProtoInstance276 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance276->setName("Site");
ProtoInstance276->setDEF("hanim_r_femoral_medial_epicondyles");
CfieldValue* fieldValue277 = new CfieldValue();
fieldValue277->setName("name");
fieldValue277->setValue("r_femoral_lateral_epicondyles");
ProtoInstance276->addFieldValue(fieldValue277);

CfieldValue* fieldValue278 = new CfieldValue();
fieldValue278->setName("translation");
fieldValue278->setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821");
ProtoInstance276->addFieldValue(fieldValue278);

fieldValue110->addChildren(ProtoInstance276);

CProtoInstance* ProtoInstance279 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance279->setName("Site");
ProtoInstance279->setDEF("hanim_r_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue280 = new CfieldValue();
fieldValue280->setName("name");
fieldValue280->setValue("r_tarsal_interphalangeal_phalanx_5");
ProtoInstance279->addFieldValue(fieldValue280);

CfieldValue* fieldValue281 = new CfieldValue();
fieldValue281->setName("translation");
fieldValue281->setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973");
ProtoInstance279->addFieldValue(fieldValue281);

fieldValue110->addChildren(ProtoInstance279);

CProtoInstance* ProtoInstance282 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance282->setName("Site");
ProtoInstance282->setDEF("hanim_r_lateral_malleolus");
CfieldValue* fieldValue283 = new CfieldValue();
fieldValue283->setName("name");
fieldValue283->setValue("r_lateral_malleolus");
ProtoInstance282->addFieldValue(fieldValue283);

CfieldValue* fieldValue284 = new CfieldValue();
fieldValue284->setName("translation");
fieldValue284->setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934");
ProtoInstance282->addFieldValue(fieldValue284);

fieldValue110->addChildren(ProtoInstance282);

CProtoInstance* ProtoInstance285 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance285->setName("Site");
ProtoInstance285->setDEF("hanim_r_medial_malleolus");
CfieldValue* fieldValue286 = new CfieldValue();
fieldValue286->setName("name");
fieldValue286->setValue("r_medial_malleolus");
ProtoInstance285->addFieldValue(fieldValue286);

CfieldValue* fieldValue287 = new CfieldValue();
fieldValue287->setName("translation");
fieldValue287->setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803");
ProtoInstance285->addFieldValue(fieldValue287);

fieldValue110->addChildren(ProtoInstance285);

CProtoInstance* ProtoInstance288 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance288->setName("Site");
ProtoInstance288->setDEF("hanim_r_sphyrion");
CfieldValue* fieldValue289 = new CfieldValue();
fieldValue289->setName("name");
fieldValue289->setValue("r_sphyrion");
ProtoInstance288->addFieldValue(fieldValue289);

CfieldValue* fieldValue290 = new CfieldValue();
fieldValue290->setName("translation");
fieldValue290->setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935");
ProtoInstance288->addFieldValue(fieldValue290);

fieldValue110->addChildren(ProtoInstance288);

CProtoInstance* ProtoInstance291 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance291->setName("Site");
ProtoInstance291->setDEF("hanim_r_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue292 = new CfieldValue();
fieldValue292->setName("name");
fieldValue292->setValue("r_tarsal_interphalangeal_phalanx_1");
ProtoInstance291->addFieldValue(fieldValue292);

CfieldValue* fieldValue293 = new CfieldValue();
fieldValue293->setName("translation");
fieldValue293->setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804");
ProtoInstance291->addFieldValue(fieldValue293);

fieldValue110->addChildren(ProtoInstance291);

CProtoInstance* ProtoInstance294 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance294->setName("Site");
ProtoInstance294->setDEF("hanim_r_calcaneus_posterior");
CfieldValue* fieldValue295 = new CfieldValue();
fieldValue295->setName("name");
fieldValue295->setValue("r_calcaneus_posterior");
ProtoInstance294->addFieldValue(fieldValue295);

CfieldValue* fieldValue296 = new CfieldValue();
fieldValue296->setName("translation");
fieldValue296->setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874");
ProtoInstance294->addFieldValue(fieldValue296);

fieldValue110->addChildren(ProtoInstance294);

CProtoInstance* ProtoInstance297 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance297->setName("Site");
ProtoInstance297->setDEF("hanim_r_tarsal_distal_phalanx_2");
CfieldValue* fieldValue298 = new CfieldValue();
fieldValue298->setName("name");
fieldValue298->setValue("r_tarsal_distal_phalanx_2");
ProtoInstance297->addFieldValue(fieldValue298);

CfieldValue* fieldValue299 = new CfieldValue();
fieldValue299->setName("translation");
fieldValue299->setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634");
ProtoInstance297->addFieldValue(fieldValue299);

fieldValue110->addChildren(ProtoInstance297);

CProtoInstance* ProtoInstance300 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance300->setName("Site");
ProtoInstance300->setDEF("hanim_l_knee_crease");
CfieldValue* fieldValue301 = new CfieldValue();
fieldValue301->setName("name");
fieldValue301->setValue("l_knee_crease");
ProtoInstance300->addFieldValue(fieldValue301);

CfieldValue* fieldValue302 = new CfieldValue();
fieldValue302->setName("translation");
fieldValue302->setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757");
ProtoInstance300->addFieldValue(fieldValue302);

fieldValue110->addChildren(ProtoInstance300);

CProtoInstance* ProtoInstance303 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance303->setName("Site");
ProtoInstance303->setDEF("hanim_l_femoral_lateral_epicondyles");
CfieldValue* fieldValue304 = new CfieldValue();
fieldValue304->setName("name");
fieldValue304->setValue("l_femoral_lateral_epicondyles");
ProtoInstance303->addFieldValue(fieldValue304);

CfieldValue* fieldValue305 = new CfieldValue();
fieldValue305->setName("translation");
fieldValue305->setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746");
ProtoInstance303->addFieldValue(fieldValue305);

fieldValue110->addChildren(ProtoInstance303);

CProtoInstance* ProtoInstance306 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance306->setName("Site");
ProtoInstance306->setDEF("hanim_l_femoral_medial_epicondyles");
CfieldValue* fieldValue307 = new CfieldValue();
fieldValue307->setName("name");
fieldValue307->setValue("l_femoral_lateral_epicondyles");
ProtoInstance306->addFieldValue(fieldValue307);

CfieldValue* fieldValue308 = new CfieldValue();
fieldValue308->setName("translation");
fieldValue308->setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183");
ProtoInstance306->addFieldValue(fieldValue308);

fieldValue110->addChildren(ProtoInstance306);

CProtoInstance* ProtoInstance309 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance309->setName("Site");
ProtoInstance309->setDEF("hanim_l_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue310 = new CfieldValue();
fieldValue310->setName("name");
fieldValue310->setValue("l_tarsal_interphalangeal_phalanx_5");
ProtoInstance309->addFieldValue(fieldValue310);

CfieldValue* fieldValue311 = new CfieldValue();
fieldValue311->setName("translation");
fieldValue311->setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803");
ProtoInstance309->addFieldValue(fieldValue311);

fieldValue110->addChildren(ProtoInstance309);

CProtoInstance* ProtoInstance312 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance312->setName("Site");
ProtoInstance312->setDEF("hanim_l_lateral_malleolus");
CfieldValue* fieldValue313 = new CfieldValue();
fieldValue313->setName("name");
fieldValue313->setValue("l_lateral_malleolus");
ProtoInstance312->addFieldValue(fieldValue313);

CfieldValue* fieldValue314 = new CfieldValue();
fieldValue314->setName("translation");
fieldValue314->setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311");
ProtoInstance312->addFieldValue(fieldValue314);

fieldValue110->addChildren(ProtoInstance312);

CProtoInstance* ProtoInstance315 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance315->setName("Site");
ProtoInstance315->setDEF("hanim_l_medial_malleolus");
CfieldValue* fieldValue316 = new CfieldValue();
fieldValue316->setName("name");
fieldValue316->setValue("l_medial_malleolus");
ProtoInstance315->addFieldValue(fieldValue316);

CfieldValue* fieldValue317 = new CfieldValue();
fieldValue317->setName("translation");
fieldValue317->setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475");
ProtoInstance315->addFieldValue(fieldValue317);

fieldValue110->addChildren(ProtoInstance315);

CProtoInstance* ProtoInstance318 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance318->setName("Site");
ProtoInstance318->setDEF("hanim_l_sphyrion");
CfieldValue* fieldValue319 = new CfieldValue();
fieldValue319->setName("name");
fieldValue319->setValue("l_sphyrion");
ProtoInstance318->addFieldValue(fieldValue319);

CfieldValue* fieldValue320 = new CfieldValue();
fieldValue320->setName("translation");
fieldValue320->setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492");
ProtoInstance318->addFieldValue(fieldValue320);

fieldValue110->addChildren(ProtoInstance318);

CProtoInstance* ProtoInstance321 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance321->setName("Site");
ProtoInstance321->setDEF("hanim_l_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue322 = new CfieldValue();
fieldValue322->setName("name");
fieldValue322->setValue("l_tarsal_interphalangeal_phalanx_1");
ProtoInstance321->addFieldValue(fieldValue322);

CfieldValue* fieldValue323 = new CfieldValue();
fieldValue323->setName("translation");
fieldValue323->setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731");
ProtoInstance321->addFieldValue(fieldValue323);

fieldValue110->addChildren(ProtoInstance321);

CProtoInstance* ProtoInstance324 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance324->setName("Site");
ProtoInstance324->setDEF("hanim_l_calcaneus_posterior");
CfieldValue* fieldValue325 = new CfieldValue();
fieldValue325->setName("name");
fieldValue325->setValue("l_calcaneus_posterior");
ProtoInstance324->addFieldValue(fieldValue325);

CfieldValue* fieldValue326 = new CfieldValue();
fieldValue326->setName("translation");
fieldValue326->setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973");
ProtoInstance324->addFieldValue(fieldValue326);

fieldValue110->addChildren(ProtoInstance324);

CProtoInstance* ProtoInstance327 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance327->setName("Site");
ProtoInstance327->setDEF("hanim_l_tarsal_distal_phalanx_2");
CfieldValue* fieldValue328 = new CfieldValue();
fieldValue328->setName("name");
fieldValue328->setValue("l_tarsal_distal_phalanx_2");
ProtoInstance327->addFieldValue(fieldValue328);

CfieldValue* fieldValue329 = new CfieldValue();
fieldValue329->setName("translation");
fieldValue329->setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476");
ProtoInstance327->addFieldValue(fieldValue329);

fieldValue110->addChildren(ProtoInstance327);

CProtoInstance* ProtoInstance330 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance330->setName("Site");
ProtoInstance330->setDEF("hanim_crotch");
CfieldValue* fieldValue331 = new CfieldValue();
fieldValue331->setName("name");
fieldValue331->setValue("crotch");
ProtoInstance330->addFieldValue(fieldValue331);

CfieldValue* fieldValue332 = new CfieldValue();
fieldValue332->setName("translation");
fieldValue332->setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367");
ProtoInstance330->addFieldValue(fieldValue332);

fieldValue110->addChildren(ProtoInstance330);

CProtoInstance* ProtoInstance333 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance333->setName("Site");
ProtoInstance333->setDEF("hanim_r_neck_base");
CfieldValue* fieldValue334 = new CfieldValue();
fieldValue334->setName("name");
fieldValue334->setValue("r_neck_base");
ProtoInstance333->addFieldValue(fieldValue334);

CfieldValue* fieldValue335 = new CfieldValue();
fieldValue335->setName("translation");
fieldValue335->setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071");
ProtoInstance333->addFieldValue(fieldValue335);

fieldValue110->addChildren(ProtoInstance333);

CProtoInstance* ProtoInstance336 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance336->setName("Site");
ProtoInstance336->setDEF("hanim_l_neck_base");
CfieldValue* fieldValue337 = new CfieldValue();
fieldValue337->setName("name");
fieldValue337->setValue("l_neck_base");
ProtoInstance336->addFieldValue(fieldValue337);

CfieldValue* fieldValue338 = new CfieldValue();
fieldValue338->setName("translation");
fieldValue338->setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478");
ProtoInstance336->addFieldValue(fieldValue338);

fieldValue110->addChildren(ProtoInstance336);

CProtoInstance* ProtoInstance339 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance339->setName("Site");
ProtoInstance339->setDEF("hanim_navel");
CfieldValue* fieldValue340 = new CfieldValue();
fieldValue340->setName("name");
fieldValue340->setValue("navel");
ProtoInstance339->addFieldValue(fieldValue340);

CfieldValue* fieldValue341 = new CfieldValue();
fieldValue341->setName("translation");
fieldValue341->setValue("0.006899999920278788 1.09660005569458 0.10170000046491623");
ProtoInstance339->addFieldValue(fieldValue341);

fieldValue110->addChildren(ProtoInstance339);

ProtoInstance108->addFieldValue(fieldValue110);

fieldValue107->addChildren(ProtoInstance108);

ProtoInstance103->addFieldValue(fieldValue107);

fieldValue102->addChildren(ProtoInstance103);

ProtoInstance101->addFieldValue(fieldValue102);

CfieldValue* fieldValue342 = new CfieldValue();
fieldValue342->setName("joints");
CProtoInstance* ProtoInstance343 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance343->setName("Joint");
ProtoInstance343->setDEF("hanim_humanoid_root");
CfieldValue* fieldValue344 = new CfieldValue();
fieldValue344->setName("stiffness");
fieldValue344->setValue("1 1 1");
ProtoInstance343->addFieldValue(fieldValue344);

CfieldValue* fieldValue345 = new CfieldValue();
fieldValue345->setName("name");
fieldValue345->setValue("humanoid_root");
ProtoInstance343->addFieldValue(fieldValue345);

CfieldValue* fieldValue346 = new CfieldValue();
fieldValue346->setName("center");
fieldValue346->setValue("0 0.8240000009536743 0.027699999511241913");
ProtoInstance343->addFieldValue(fieldValue346);

CfieldValue* fieldValue347 = new CfieldValue();
fieldValue347->setName("children");
CProtoInstance* ProtoInstance348 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance348->setName("Segment");
ProtoInstance348->setDEF("hanim_sacrum");
CfieldValue* fieldValue349 = new CfieldValue();
fieldValue349->setName("name");
fieldValue349->setValue("sacrum");
ProtoInstance348->addFieldValue(fieldValue349);

CfieldValue* fieldValue350 = new CfieldValue();
fieldValue350->setName("children");
CProtoInstance* ProtoInstance351 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance351->setName("Site");
ProtoInstance351->setDEF("hanim_skull_tip");
CfieldValue* fieldValue352 = new CfieldValue();
fieldValue352->setName("name");
fieldValue352->setValue("skull_tip");
ProtoInstance351->addFieldValue(fieldValue352);

CfieldValue* fieldValue353 = new CfieldValue();
fieldValue353->setName("translation");
fieldValue353->setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678");
ProtoInstance351->addFieldValue(fieldValue353);

fieldValue350->addChildren(ProtoInstance351);

CProtoInstance* ProtoInstance354 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance354->setName("Site");
ProtoInstance354->setDEF("hanim_sellion");
CfieldValue* fieldValue355 = new CfieldValue();
fieldValue355->setName("name");
fieldValue355->setValue("sellion");
ProtoInstance354->addFieldValue(fieldValue355);

CfieldValue* fieldValue356 = new CfieldValue();
fieldValue356->setName("translation");
fieldValue356->setValue("0.005799999926239252 1.631600022315979 0.0851999968290329");
ProtoInstance354->addFieldValue(fieldValue356);

fieldValue350->addChildren(ProtoInstance354);

CProtoInstance* ProtoInstance357 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance357->setName("Site");
ProtoInstance357->setDEF("hanim_r_infraorbitale");
CfieldValue* fieldValue358 = new CfieldValue();
fieldValue358->setName("name");
fieldValue358->setValue("r_infraorbitale");
ProtoInstance357->addFieldValue(fieldValue358);

CfieldValue* fieldValue359 = new CfieldValue();
fieldValue359->setName("translation");
fieldValue359->setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547");
ProtoInstance357->addFieldValue(fieldValue359);

fieldValue350->addChildren(ProtoInstance357);

CProtoInstance* ProtoInstance360 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance360->setName("Site");
ProtoInstance360->setDEF("hanim_l_infraorbitale");
CfieldValue* fieldValue361 = new CfieldValue();
fieldValue361->setName("name");
fieldValue361->setValue("l_infraorbitale");
ProtoInstance360->addFieldValue(fieldValue361);

CfieldValue* fieldValue362 = new CfieldValue();
fieldValue362->setName("translation");
fieldValue362->setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547");
ProtoInstance360->addFieldValue(fieldValue362);

fieldValue350->addChildren(ProtoInstance360);

CProtoInstance* ProtoInstance363 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance363->setName("Site");
ProtoInstance363->setDEF("hanim_supramenton");
CfieldValue* fieldValue364 = new CfieldValue();
fieldValue364->setName("name");
fieldValue364->setValue("supramenton");
ProtoInstance363->addFieldValue(fieldValue364);

CfieldValue* fieldValue365 = new CfieldValue();
fieldValue365->setName("translation");
fieldValue365->setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962");
ProtoInstance363->addFieldValue(fieldValue365);

fieldValue350->addChildren(ProtoInstance363);

CProtoInstance* ProtoInstance366 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance366->setName("Site");
ProtoInstance366->setDEF("hanim_r_tragion");
CfieldValue* fieldValue367 = new CfieldValue();
fieldValue367->setName("name");
fieldValue367->setValue("r_tragion");
ProtoInstance366->addFieldValue(fieldValue367);

CfieldValue* fieldValue368 = new CfieldValue();
fieldValue368->setName("translation");
fieldValue368->setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642");
ProtoInstance366->addFieldValue(fieldValue368);

fieldValue350->addChildren(ProtoInstance366);

CProtoInstance* ProtoInstance369 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance369->setName("Site");
ProtoInstance369->setDEF("hanim_r_gonion");
CfieldValue* fieldValue370 = new CfieldValue();
fieldValue370->setName("name");
fieldValue370->setValue("r_gonion");
ProtoInstance369->addFieldValue(fieldValue370);

CfieldValue* fieldValue371 = new CfieldValue();
fieldValue371->setName("translation");
fieldValue371->setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176");
ProtoInstance369->addFieldValue(fieldValue371);

fieldValue350->addChildren(ProtoInstance369);

CProtoInstance* ProtoInstance372 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance372->setName("Site");
ProtoInstance372->setDEF("hanim_l_tragion");
CfieldValue* fieldValue373 = new CfieldValue();
fieldValue373->setName("name");
fieldValue373->setValue("l_tragion");
ProtoInstance372->addFieldValue(fieldValue373);

CfieldValue* fieldValue374 = new CfieldValue();
fieldValue374->setName("translation");
fieldValue374->setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874");
ProtoInstance372->addFieldValue(fieldValue374);

fieldValue350->addChildren(ProtoInstance372);

CProtoInstance* ProtoInstance375 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance375->setName("Site");
ProtoInstance375->setDEF("hanim_l_gonion");
CfieldValue* fieldValue376 = new CfieldValue();
fieldValue376->setName("name");
fieldValue376->setValue("l_gonion");
ProtoInstance375->addFieldValue(fieldValue376);

CfieldValue* fieldValue377 = new CfieldValue();
fieldValue377->setName("translation");
fieldValue377->setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066");
ProtoInstance375->addFieldValue(fieldValue377);

fieldValue350->addChildren(ProtoInstance375);

CProtoInstance* ProtoInstance378 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance378->setName("Site");
ProtoInstance378->setDEF("hanim_nuchale");
CfieldValue* fieldValue379 = new CfieldValue();
fieldValue379->setName("name");
fieldValue379->setValue("nuchale");
ProtoInstance378->addFieldValue(fieldValue379);

CfieldValue* fieldValue380 = new CfieldValue();
fieldValue380->setName("translation");
fieldValue380->setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361");
ProtoInstance378->addFieldValue(fieldValue380);

fieldValue350->addChildren(ProtoInstance378);

CProtoInstance* ProtoInstance381 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance381->setName("Site");
ProtoInstance381->setDEF("hanim_r_clavicale");
CfieldValue* fieldValue382 = new CfieldValue();
fieldValue382->setName("name");
fieldValue382->setValue("r_clavicale");
ProtoInstance381->addFieldValue(fieldValue382);

CfieldValue* fieldValue383 = new CfieldValue();
fieldValue383->setName("translation");
fieldValue383->setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033");
ProtoInstance381->addFieldValue(fieldValue383);

fieldValue350->addChildren(ProtoInstance381);

CProtoInstance* ProtoInstance384 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance384->setName("Site");
ProtoInstance384->setDEF("hanim_suprasternale");
CfieldValue* fieldValue385 = new CfieldValue();
fieldValue385->setName("name");
fieldValue385->setValue("suprasternale");
ProtoInstance384->addFieldValue(fieldValue385);

CfieldValue* fieldValue386 = new CfieldValue();
fieldValue386->setName("translation");
fieldValue386->setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869");
ProtoInstance384->addFieldValue(fieldValue386);

fieldValue350->addChildren(ProtoInstance384);

CProtoInstance* ProtoInstance387 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance387->setName("Site");
ProtoInstance387->setDEF("hanim_l_clavicale");
CfieldValue* fieldValue388 = new CfieldValue();
fieldValue388->setName("name");
fieldValue388->setValue("l_clavicale");
ProtoInstance387->addFieldValue(fieldValue388);

CfieldValue* fieldValue389 = new CfieldValue();
fieldValue389->setName("translation");
fieldValue389->setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754");
ProtoInstance387->addFieldValue(fieldValue389);

fieldValue350->addChildren(ProtoInstance387);

CProtoInstance* ProtoInstance390 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance390->setName("Site");
ProtoInstance390->setDEF("hanim_r_thelion");
CfieldValue* fieldValue391 = new CfieldValue();
fieldValue391->setName("name");
fieldValue391->setValue("r_thelion");
ProtoInstance390->addFieldValue(fieldValue391);

CfieldValue* fieldValue392 = new CfieldValue();
fieldValue392->setName("translation");
fieldValue392->setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911");
ProtoInstance390->addFieldValue(fieldValue392);

fieldValue350->addChildren(ProtoInstance390);

CProtoInstance* ProtoInstance393 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance393->setName("Site");
ProtoInstance393->setDEF("hanim_l_thelion");
CfieldValue* fieldValue394 = new CfieldValue();
fieldValue394->setName("name");
fieldValue394->setValue("l_thelion");
ProtoInstance393->addFieldValue(fieldValue394);

CfieldValue* fieldValue395 = new CfieldValue();
fieldValue395->setName("translation");
fieldValue395->setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689");
ProtoInstance393->addFieldValue(fieldValue395);

fieldValue350->addChildren(ProtoInstance393);

CProtoInstance* ProtoInstance396 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance396->setName("Site");
ProtoInstance396->setDEF("hanim_substernale");
CfieldValue* fieldValue397 = new CfieldValue();
fieldValue397->setName("name");
fieldValue397->setValue("substernale");
ProtoInstance396->addFieldValue(fieldValue397);

CfieldValue* fieldValue398 = new CfieldValue();
fieldValue398->setName("translation");
fieldValue398->setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683");
ProtoInstance396->addFieldValue(fieldValue398);

fieldValue350->addChildren(ProtoInstance396);

CProtoInstance* ProtoInstance399 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance399->setName("Site");
ProtoInstance399->setDEF("hanim_r_rib10");
CfieldValue* fieldValue400 = new CfieldValue();
fieldValue400->setName("name");
fieldValue400->setValue("r_rib10");
ProtoInstance399->addFieldValue(fieldValue400);

CfieldValue* fieldValue401 = new CfieldValue();
fieldValue401->setName("translation");
fieldValue401->setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432");
ProtoInstance399->addFieldValue(fieldValue401);

fieldValue350->addChildren(ProtoInstance399);

CProtoInstance* ProtoInstance402 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance402->setName("Site");
ProtoInstance402->setDEF("hanim_r_asis");
CfieldValue* fieldValue403 = new CfieldValue();
fieldValue403->setName("name");
fieldValue403->setValue("r_asis");
ProtoInstance402->addFieldValue(fieldValue403);

CfieldValue* fieldValue404 = new CfieldValue();
fieldValue404->setName("translation");
fieldValue404->setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747");
ProtoInstance402->addFieldValue(fieldValue404);

fieldValue350->addChildren(ProtoInstance402);

CProtoInstance* ProtoInstance405 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance405->setName("Site");
ProtoInstance405->setDEF("hanim_l_rib10");
CfieldValue* fieldValue406 = new CfieldValue();
fieldValue406->setName("name");
fieldValue406->setValue("l_rib10");
ProtoInstance405->addFieldValue(fieldValue406);

CfieldValue* fieldValue407 = new CfieldValue();
fieldValue407->setName("translation");
fieldValue407->setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202");
ProtoInstance405->addFieldValue(fieldValue407);

fieldValue350->addChildren(ProtoInstance405);

CProtoInstance* ProtoInstance408 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance408->setName("Site");
ProtoInstance408->setDEF("hanim_l_asis");
CfieldValue* fieldValue409 = new CfieldValue();
fieldValue409->setName("name");
fieldValue409->setValue("l_asis");
ProtoInstance408->addFieldValue(fieldValue409);

CfieldValue* fieldValue410 = new CfieldValue();
fieldValue410->setName("translation");
fieldValue410->setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836");
ProtoInstance408->addFieldValue(fieldValue410);

fieldValue350->addChildren(ProtoInstance408);

CProtoInstance* ProtoInstance411 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance411->setName("Site");
ProtoInstance411->setDEF("hanim_r_iliocristale");
CfieldValue* fieldValue412 = new CfieldValue();
fieldValue412->setName("name");
fieldValue412->setValue("r_iliocristale");
ProtoInstance411->addFieldValue(fieldValue412);

CfieldValue* fieldValue413 = new CfieldValue();
fieldValue413->setName("translation");
fieldValue413->setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187");
ProtoInstance411->addFieldValue(fieldValue413);

fieldValue350->addChildren(ProtoInstance411);

CProtoInstance* ProtoInstance414 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance414->setName("Site");
ProtoInstance414->setDEF("hanim_r_trochanterion");
CfieldValue* fieldValue415 = new CfieldValue();
fieldValue415->setName("name");
fieldValue415->setValue("r_trochanterion");
ProtoInstance414->addFieldValue(fieldValue415);

CfieldValue* fieldValue416 = new CfieldValue();
fieldValue416->setName("translation");
fieldValue416->setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514");
ProtoInstance414->addFieldValue(fieldValue416);

fieldValue350->addChildren(ProtoInstance414);

CProtoInstance* ProtoInstance417 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance417->setName("Site");
ProtoInstance417->setDEF("hanim_l_iliocristale");
CfieldValue* fieldValue418 = new CfieldValue();
fieldValue418->setName("name");
fieldValue418->setValue("l_iliocristale");
ProtoInstance417->addFieldValue(fieldValue418);

CfieldValue* fieldValue419 = new CfieldValue();
fieldValue419->setName("translation");
fieldValue419->setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001");
ProtoInstance417->addFieldValue(fieldValue419);

fieldValue350->addChildren(ProtoInstance417);

CProtoInstance* ProtoInstance420 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance420->setName("Site");
ProtoInstance420->setDEF("hanim_l_trochanterion");
CfieldValue* fieldValue421 = new CfieldValue();
fieldValue421->setName("name");
fieldValue421->setValue("l_trochanterion");
ProtoInstance420->addFieldValue(fieldValue421);

CfieldValue* fieldValue422 = new CfieldValue();
fieldValue422->setName("translation");
fieldValue422->setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183");
ProtoInstance420->addFieldValue(fieldValue422);

fieldValue350->addChildren(ProtoInstance420);

CProtoInstance* ProtoInstance423 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance423->setName("Site");
ProtoInstance423->setDEF("hanim_cervicale");
CfieldValue* fieldValue424 = new CfieldValue();
fieldValue424->setName("name");
fieldValue424->setValue("cervicale");
ProtoInstance423->addFieldValue(fieldValue424);

CfieldValue* fieldValue425 = new CfieldValue();
fieldValue425->setName("translation");
fieldValue425->setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754");
ProtoInstance423->addFieldValue(fieldValue425);

fieldValue350->addChildren(ProtoInstance423);

CProtoInstance* ProtoInstance426 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance426->setName("Site");
ProtoInstance426->setDEF("hanim_spine_2_lower_back");
CfieldValue* fieldValue427 = new CfieldValue();
fieldValue427->setName("name");
fieldValue427->setValue("spine_2_lower_back");
ProtoInstance426->addFieldValue(fieldValue427);

CfieldValue* fieldValue428 = new CfieldValue();
fieldValue428->setName("translation");
fieldValue428->setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661");
ProtoInstance426->addFieldValue(fieldValue428);

fieldValue350->addChildren(ProtoInstance426);

CProtoInstance* ProtoInstance429 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance429->setName("Site");
ProtoInstance429->setDEF("hanim_r_psis");
CfieldValue* fieldValue430 = new CfieldValue();
fieldValue430->setName("name");
fieldValue430->setValue("r_psis");
ProtoInstance429->addFieldValue(fieldValue430);

CfieldValue* fieldValue431 = new CfieldValue();
fieldValue431->setName("translation");
fieldValue431->setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082");
ProtoInstance429->addFieldValue(fieldValue431);

fieldValue350->addChildren(ProtoInstance429);

CProtoInstance* ProtoInstance432 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance432->setName("Site");
ProtoInstance432->setDEF("hanim_l_psis");
CfieldValue* fieldValue433 = new CfieldValue();
fieldValue433->setName("name");
fieldValue433->setValue("l_psis");
ProtoInstance432->addFieldValue(fieldValue433);

CfieldValue* fieldValue434 = new CfieldValue();
fieldValue434->setName("translation");
fieldValue434->setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388");
ProtoInstance432->addFieldValue(fieldValue434);

fieldValue350->addChildren(ProtoInstance432);

CProtoInstance* ProtoInstance435 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance435->setName("Site");
ProtoInstance435->setDEF("hanim_waist_preferred_posterior");
CfieldValue* fieldValue436 = new CfieldValue();
fieldValue436->setName("name");
fieldValue436->setValue("waist_preferred_posterior");
ProtoInstance435->addFieldValue(fieldValue436);

CfieldValue* fieldValue437 = new CfieldValue();
fieldValue437->setName("translation");
fieldValue437->setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754");
ProtoInstance435->addFieldValue(fieldValue437);

fieldValue350->addChildren(ProtoInstance435);

CProtoInstance* ProtoInstance438 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance438->setName("Site");
ProtoInstance438->setDEF("hanim_r_acromion");
CfieldValue* fieldValue439 = new CfieldValue();
fieldValue439->setName("name");
fieldValue439->setValue("r_acromion");
ProtoInstance438->addFieldValue(fieldValue439);

CfieldValue* fieldValue440 = new CfieldValue();
fieldValue440->setName("translation");
fieldValue440->setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541");
ProtoInstance438->addFieldValue(fieldValue440);

fieldValue350->addChildren(ProtoInstance438);

CProtoInstance* ProtoInstance441 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance441->setName("Site");
ProtoInstance441->setDEF("hanim_r_axilla_proximal");
CfieldValue* fieldValue442 = new CfieldValue();
fieldValue442->setName("name");
fieldValue442->setValue("r_axilla_proximal");
ProtoInstance441->addFieldValue(fieldValue442);

CfieldValue* fieldValue443 = new CfieldValue();
fieldValue443->setName("translation");
fieldValue443->setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438");
ProtoInstance441->addFieldValue(fieldValue443);

fieldValue350->addChildren(ProtoInstance441);

CProtoInstance* ProtoInstance444 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance444->setName("Site");
ProtoInstance444->setDEF("hanim_r_radial_styloid");
CfieldValue* fieldValue445 = new CfieldValue();
fieldValue445->setName("name");
fieldValue445->setValue("r_radial_styloid");
ProtoInstance444->addFieldValue(fieldValue445);

CfieldValue* fieldValue446 = new CfieldValue();
fieldValue446->setName("translation");
fieldValue446->setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236");
ProtoInstance444->addFieldValue(fieldValue446);

fieldValue350->addChildren(ProtoInstance444);

CProtoInstance* ProtoInstance447 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance447->setName("Site");
ProtoInstance447->setDEF("hanim_r_axilla_distal");
CfieldValue* fieldValue448 = new CfieldValue();
fieldValue448->setName("name");
fieldValue448->setValue("r_axilla_distal");
ProtoInstance447->addFieldValue(fieldValue448);

CfieldValue* fieldValue449 = new CfieldValue();
fieldValue449->setName("translation");
fieldValue449->setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678");
ProtoInstance447->addFieldValue(fieldValue449);

fieldValue350->addChildren(ProtoInstance447);

CProtoInstance* ProtoInstance450 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance450->setName("Site");
ProtoInstance450->setDEF("hanim_r_olecranon");
CfieldValue* fieldValue451 = new CfieldValue();
fieldValue451->setName("name");
fieldValue451->setValue("r_olecranon");
ProtoInstance450->addFieldValue(fieldValue451);

CfieldValue* fieldValue452 = new CfieldValue();
fieldValue452->setName("translation");
fieldValue452->setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142");
ProtoInstance450->addFieldValue(fieldValue452);

fieldValue350->addChildren(ProtoInstance450);

CProtoInstance* ProtoInstance453 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance453->setName("Site");
ProtoInstance453->setDEF("hanim_r_humeral_lateral_epicondyles");
CfieldValue* fieldValue454 = new CfieldValue();
fieldValue454->setName("name");
fieldValue454->setValue("r_humeral_lateral_epicondyles");
ProtoInstance453->addFieldValue(fieldValue454);

CfieldValue* fieldValue455 = new CfieldValue();
fieldValue455->setName("translation");
fieldValue455->setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443");
ProtoInstance453->addFieldValue(fieldValue455);

fieldValue350->addChildren(ProtoInstance453);

CProtoInstance* ProtoInstance456 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance456->setName("Site");
ProtoInstance456->setDEF("hanim_r_humeral_medial_epicondyles");
CfieldValue* fieldValue457 = new CfieldValue();
fieldValue457->setName("name");
fieldValue457->setValue("r_humeral_medial_epicondyles");
ProtoInstance456->addFieldValue(fieldValue457);

CfieldValue* fieldValue458 = new CfieldValue();
fieldValue458->setName("translation");
fieldValue458->setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628");
ProtoInstance456->addFieldValue(fieldValue458);

fieldValue350->addChildren(ProtoInstance456);

CProtoInstance* ProtoInstance459 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance459->setName("Site");
ProtoInstance459->setDEF("hanim_r_radiale");
CfieldValue* fieldValue460 = new CfieldValue();
fieldValue460->setName("name");
fieldValue460->setValue("r_radiale");
ProtoInstance459->addFieldValue(fieldValue460);

CfieldValue* fieldValue461 = new CfieldValue();
fieldValue461->setName("translation");
fieldValue461->setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754");
ProtoInstance459->addFieldValue(fieldValue461);

fieldValue350->addChildren(ProtoInstance459);

CProtoInstance* ProtoInstance462 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance462->setName("Site");
ProtoInstance462->setDEF("hanim_r_metacarpal_phalanx_2");
CfieldValue* fieldValue463 = new CfieldValue();
fieldValue463->setName("name");
fieldValue463->setValue("r_metacarpal_phalanx_2");
ProtoInstance462->addFieldValue(fieldValue463);

CfieldValue* fieldValue464 = new CfieldValue();
fieldValue464->setName("translation");
fieldValue464->setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933");
ProtoInstance462->addFieldValue(fieldValue464);

fieldValue350->addChildren(ProtoInstance462);

CProtoInstance* ProtoInstance465 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance465->setName("Site");
ProtoInstance465->setDEF("hanim_r_dactylion");
CfieldValue* fieldValue466 = new CfieldValue();
fieldValue466->setName("name");
fieldValue466->setValue("r_dactylion");
ProtoInstance465->addFieldValue(fieldValue466);

CfieldValue* fieldValue467 = new CfieldValue();
fieldValue467->setName("translation");
fieldValue467->setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131");
ProtoInstance465->addFieldValue(fieldValue467);

fieldValue350->addChildren(ProtoInstance465);

CProtoInstance* ProtoInstance468 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance468->setName("Site");
ProtoInstance468->setDEF("hanim_r_ulnar_styloid");
CfieldValue* fieldValue469 = new CfieldValue();
fieldValue469->setName("name");
fieldValue469->setValue("r_ulnar_styloid");
ProtoInstance468->addFieldValue(fieldValue469);

CfieldValue* fieldValue470 = new CfieldValue();
fieldValue470->setName("translation");
fieldValue470->setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294");
ProtoInstance468->addFieldValue(fieldValue470);

fieldValue350->addChildren(ProtoInstance468);

CProtoInstance* ProtoInstance471 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance471->setName("Site");
ProtoInstance471->setDEF("hanim_r_metacarpal_phalanx_5");
CfieldValue* fieldValue472 = new CfieldValue();
fieldValue472->setName("name");
fieldValue472->setValue("r_metacarpal_phalanx_5");
ProtoInstance471->addFieldValue(fieldValue472);

CfieldValue* fieldValue473 = new CfieldValue();
fieldValue473->setName("translation");
fieldValue473->setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951");
ProtoInstance471->addFieldValue(fieldValue473);

fieldValue350->addChildren(ProtoInstance471);

CProtoInstance* ProtoInstance474 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance474->setName("Site");
ProtoInstance474->setDEF("hanim_l_acromion");
CfieldValue* fieldValue475 = new CfieldValue();
fieldValue475->setName("name");
fieldValue475->setValue("l_acromion");
ProtoInstance474->addFieldValue(fieldValue475);

CfieldValue* fieldValue476 = new CfieldValue();
fieldValue476->setName("translation");
fieldValue476->setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014");
ProtoInstance474->addFieldValue(fieldValue476);

fieldValue350->addChildren(ProtoInstance474);

CProtoInstance* ProtoInstance477 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance477->setName("Site");
ProtoInstance477->setDEF("hanim_l_axilla_proximal");
CfieldValue* fieldValue478 = new CfieldValue();
fieldValue478->setName("name");
fieldValue478->setValue("l_axilla_proximal");
ProtoInstance477->addFieldValue(fieldValue478);

CfieldValue* fieldValue479 = new CfieldValue();
fieldValue479->setName("translation");
fieldValue479->setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937");
ProtoInstance477->addFieldValue(fieldValue479);

fieldValue350->addChildren(ProtoInstance477);

CProtoInstance* ProtoInstance480 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance480->setName("Site");
ProtoInstance480->setDEF("hanim_l_radial_styloid");
CfieldValue* fieldValue481 = new CfieldValue();
fieldValue481->setName("name");
fieldValue481->setValue("l_radial_styloid");
ProtoInstance480->addFieldValue(fieldValue481);

CfieldValue* fieldValue482 = new CfieldValue();
fieldValue482->setName("translation");
fieldValue482->setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691");
ProtoInstance480->addFieldValue(fieldValue482);

fieldValue350->addChildren(ProtoInstance480);

CProtoInstance* ProtoInstance483 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance483->setName("Site");
ProtoInstance483->setDEF("hanim_l_axilla_distal");
CfieldValue* fieldValue484 = new CfieldValue();
fieldValue484->setName("name");
fieldValue484->setValue("l_axilla_distal");
ProtoInstance483->addFieldValue(fieldValue484);

CfieldValue* fieldValue485 = new CfieldValue();
fieldValue485->setName("translation");
fieldValue485->setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388");
ProtoInstance483->addFieldValue(fieldValue485);

fieldValue350->addChildren(ProtoInstance483);

CProtoInstance* ProtoInstance486 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance486->setName("Site");
ProtoInstance486->setDEF("hanim_l_olecranon");
CfieldValue* fieldValue487 = new CfieldValue();
fieldValue487->setName("name");
fieldValue487->setValue("l_olecranon");
ProtoInstance486->addFieldValue(fieldValue487);

CfieldValue* fieldValue488 = new CfieldValue();
fieldValue488->setName("translation");
fieldValue488->setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453");
ProtoInstance486->addFieldValue(fieldValue488);

fieldValue350->addChildren(ProtoInstance486);

CProtoInstance* ProtoInstance489 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance489->setName("Site");
ProtoInstance489->setDEF("hanim_l_humeral_lateral_epicondyles");
CfieldValue* fieldValue490 = new CfieldValue();
fieldValue490->setName("name");
fieldValue490->setValue("l_humeral_lateral_epicondyles");
ProtoInstance489->addFieldValue(fieldValue490);

CfieldValue* fieldValue491 = new CfieldValue();
fieldValue491->setName("translation");
fieldValue491->setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355");
ProtoInstance489->addFieldValue(fieldValue491);

fieldValue350->addChildren(ProtoInstance489);

CProtoInstance* ProtoInstance492 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance492->setName("Site");
ProtoInstance492->setDEF("hanim_l_humeral_medial_epicondyles");
CfieldValue* fieldValue493 = new CfieldValue();
fieldValue493->setName("name");
fieldValue493->setValue("l_humeral_medial_epicondyles");
ProtoInstance492->addFieldValue(fieldValue493);

CfieldValue* fieldValue494 = new CfieldValue();
fieldValue494->setName("translation");
fieldValue494->setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661");
ProtoInstance492->addFieldValue(fieldValue494);

fieldValue350->addChildren(ProtoInstance492);

CProtoInstance* ProtoInstance495 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance495->setName("Site");
ProtoInstance495->setDEF("hanim_l_radiale");
CfieldValue* fieldValue496 = new CfieldValue();
fieldValue496->setName("name");
fieldValue496->setValue("l_radiale");
ProtoInstance495->addFieldValue(fieldValue496);

CfieldValue* fieldValue497 = new CfieldValue();
fieldValue497->setName("translation");
fieldValue497->setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268");
ProtoInstance495->addFieldValue(fieldValue497);

fieldValue350->addChildren(ProtoInstance495);

CProtoInstance* ProtoInstance498 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance498->setName("Site");
ProtoInstance498->setDEF("hanim_l_metacarpal_phalanx_2");
CfieldValue* fieldValue499 = new CfieldValue();
fieldValue499->setName("name");
fieldValue499->setValue("l_metacarpal_phalanx_2");
ProtoInstance498->addFieldValue(fieldValue499);

CfieldValue* fieldValue500 = new CfieldValue();
fieldValue500->setName("translation");
fieldValue500->setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597");
ProtoInstance498->addFieldValue(fieldValue500);

fieldValue350->addChildren(ProtoInstance498);

CProtoInstance* ProtoInstance501 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance501->setName("Site");
ProtoInstance501->setDEF("hanim_l_dactylion");
CfieldValue* fieldValue502 = new CfieldValue();
fieldValue502->setName("name");
fieldValue502->setValue("l_dactylion");
ProtoInstance501->addFieldValue(fieldValue502);

CfieldValue* fieldValue503 = new CfieldValue();
fieldValue503->setName("translation");
fieldValue503->setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604");
ProtoInstance501->addFieldValue(fieldValue503);

fieldValue350->addChildren(ProtoInstance501);

CProtoInstance* ProtoInstance504 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance504->setName("Site");
ProtoInstance504->setDEF("hanim_l_ulnar_styloid");
CfieldValue* fieldValue505 = new CfieldValue();
fieldValue505->setName("name");
fieldValue505->setValue("l_ulnar_styloid");
ProtoInstance504->addFieldValue(fieldValue505);

CfieldValue* fieldValue506 = new CfieldValue();
fieldValue506->setName("translation");
fieldValue506->setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098");
ProtoInstance504->addFieldValue(fieldValue506);

fieldValue350->addChildren(ProtoInstance504);

CProtoInstance* ProtoInstance507 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance507->setName("Site");
ProtoInstance507->setDEF("hanim_l_metacarpal_phalanx_5");
CfieldValue* fieldValue508 = new CfieldValue();
fieldValue508->setName("name");
fieldValue508->setValue("l_metacarpal_phalanx_5");
ProtoInstance507->addFieldValue(fieldValue508);

CfieldValue* fieldValue509 = new CfieldValue();
fieldValue509->setName("translation");
fieldValue509->setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262");
ProtoInstance507->addFieldValue(fieldValue509);

fieldValue350->addChildren(ProtoInstance507);

CProtoInstance* ProtoInstance510 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance510->setName("Site");
ProtoInstance510->setDEF("hanim_r_knee_crease");
CfieldValue* fieldValue511 = new CfieldValue();
fieldValue511->setName("name");
fieldValue511->setValue("r_knee_crease");
ProtoInstance510->addFieldValue(fieldValue511);

CfieldValue* fieldValue512 = new CfieldValue();
fieldValue512->setName("translation");
fieldValue512->setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016");
ProtoInstance510->addFieldValue(fieldValue512);

fieldValue350->addChildren(ProtoInstance510);

CProtoInstance* ProtoInstance513 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance513->setName("Site");
ProtoInstance513->setDEF("hanim_r_femoral_lateral_epicondyles");
CfieldValue* fieldValue514 = new CfieldValue();
fieldValue514->setName("name");
fieldValue514->setValue("r_femoral_lateral_epicondyles");
ProtoInstance513->addFieldValue(fieldValue514);

CfieldValue* fieldValue515 = new CfieldValue();
fieldValue515->setName("translation");
fieldValue515->setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052");
ProtoInstance513->addFieldValue(fieldValue515);

fieldValue350->addChildren(ProtoInstance513);

CProtoInstance* ProtoInstance516 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance516->setName("Site");
ProtoInstance516->setDEF("hanim_r_femoral_medial_epicondyles");
CfieldValue* fieldValue517 = new CfieldValue();
fieldValue517->setName("name");
fieldValue517->setValue("r_femoral_lateral_epicondyles");
ProtoInstance516->addFieldValue(fieldValue517);

CfieldValue* fieldValue518 = new CfieldValue();
fieldValue518->setName("translation");
fieldValue518->setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821");
ProtoInstance516->addFieldValue(fieldValue518);

fieldValue350->addChildren(ProtoInstance516);

CProtoInstance* ProtoInstance519 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance519->setName("Site");
ProtoInstance519->setDEF("hanim_r_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue520 = new CfieldValue();
fieldValue520->setName("name");
fieldValue520->setValue("r_tarsal_interphalangeal_phalanx_5");
ProtoInstance519->addFieldValue(fieldValue520);

CfieldValue* fieldValue521 = new CfieldValue();
fieldValue521->setName("translation");
fieldValue521->setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973");
ProtoInstance519->addFieldValue(fieldValue521);

fieldValue350->addChildren(ProtoInstance519);

CProtoInstance* ProtoInstance522 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance522->setName("Site");
ProtoInstance522->setDEF("hanim_r_lateral_malleolus");
CfieldValue* fieldValue523 = new CfieldValue();
fieldValue523->setName("name");
fieldValue523->setValue("r_lateral_malleolus");
ProtoInstance522->addFieldValue(fieldValue523);

CfieldValue* fieldValue524 = new CfieldValue();
fieldValue524->setName("translation");
fieldValue524->setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934");
ProtoInstance522->addFieldValue(fieldValue524);

fieldValue350->addChildren(ProtoInstance522);

CProtoInstance* ProtoInstance525 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance525->setName("Site");
ProtoInstance525->setDEF("hanim_r_medial_malleolus");
CfieldValue* fieldValue526 = new CfieldValue();
fieldValue526->setName("name");
fieldValue526->setValue("r_medial_malleolus");
ProtoInstance525->addFieldValue(fieldValue526);

CfieldValue* fieldValue527 = new CfieldValue();
fieldValue527->setName("translation");
fieldValue527->setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803");
ProtoInstance525->addFieldValue(fieldValue527);

fieldValue350->addChildren(ProtoInstance525);

CProtoInstance* ProtoInstance528 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance528->setName("Site");
ProtoInstance528->setDEF("hanim_r_sphyrion");
CfieldValue* fieldValue529 = new CfieldValue();
fieldValue529->setName("name");
fieldValue529->setValue("r_sphyrion");
ProtoInstance528->addFieldValue(fieldValue529);

CfieldValue* fieldValue530 = new CfieldValue();
fieldValue530->setName("translation");
fieldValue530->setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935");
ProtoInstance528->addFieldValue(fieldValue530);

fieldValue350->addChildren(ProtoInstance528);

CProtoInstance* ProtoInstance531 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance531->setName("Site");
ProtoInstance531->setDEF("hanim_r_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue532 = new CfieldValue();
fieldValue532->setName("name");
fieldValue532->setValue("r_tarsal_interphalangeal_phalanx_1");
ProtoInstance531->addFieldValue(fieldValue532);

CfieldValue* fieldValue533 = new CfieldValue();
fieldValue533->setName("translation");
fieldValue533->setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804");
ProtoInstance531->addFieldValue(fieldValue533);

fieldValue350->addChildren(ProtoInstance531);

CProtoInstance* ProtoInstance534 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance534->setName("Site");
ProtoInstance534->setDEF("hanim_r_calcaneus_posterior");
CfieldValue* fieldValue535 = new CfieldValue();
fieldValue535->setName("name");
fieldValue535->setValue("r_calcaneus_posterior");
ProtoInstance534->addFieldValue(fieldValue535);

CfieldValue* fieldValue536 = new CfieldValue();
fieldValue536->setName("translation");
fieldValue536->setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874");
ProtoInstance534->addFieldValue(fieldValue536);

fieldValue350->addChildren(ProtoInstance534);

CProtoInstance* ProtoInstance537 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance537->setName("Site");
ProtoInstance537->setDEF("hanim_r_tarsal_distal_phalanx_2");
CfieldValue* fieldValue538 = new CfieldValue();
fieldValue538->setName("name");
fieldValue538->setValue("r_tarsal_distal_phalanx_2");
ProtoInstance537->addFieldValue(fieldValue538);

CfieldValue* fieldValue539 = new CfieldValue();
fieldValue539->setName("translation");
fieldValue539->setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634");
ProtoInstance537->addFieldValue(fieldValue539);

fieldValue350->addChildren(ProtoInstance537);

CProtoInstance* ProtoInstance540 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance540->setName("Site");
ProtoInstance540->setDEF("hanim_l_knee_crease");
CfieldValue* fieldValue541 = new CfieldValue();
fieldValue541->setName("name");
fieldValue541->setValue("l_knee_crease");
ProtoInstance540->addFieldValue(fieldValue541);

CfieldValue* fieldValue542 = new CfieldValue();
fieldValue542->setName("translation");
fieldValue542->setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757");
ProtoInstance540->addFieldValue(fieldValue542);

fieldValue350->addChildren(ProtoInstance540);

CProtoInstance* ProtoInstance543 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance543->setName("Site");
ProtoInstance543->setDEF("hanim_l_femoral_lateral_epicondyles");
CfieldValue* fieldValue544 = new CfieldValue();
fieldValue544->setName("name");
fieldValue544->setValue("l_femoral_lateral_epicondyles");
ProtoInstance543->addFieldValue(fieldValue544);

CfieldValue* fieldValue545 = new CfieldValue();
fieldValue545->setName("translation");
fieldValue545->setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746");
ProtoInstance543->addFieldValue(fieldValue545);

fieldValue350->addChildren(ProtoInstance543);

CProtoInstance* ProtoInstance546 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance546->setName("Site");
ProtoInstance546->setDEF("hanim_l_femoral_medial_epicondyles");
CfieldValue* fieldValue547 = new CfieldValue();
fieldValue547->setName("name");
fieldValue547->setValue("l_femoral_lateral_epicondyles");
ProtoInstance546->addFieldValue(fieldValue547);

CfieldValue* fieldValue548 = new CfieldValue();
fieldValue548->setName("translation");
fieldValue548->setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183");
ProtoInstance546->addFieldValue(fieldValue548);

fieldValue350->addChildren(ProtoInstance546);

CProtoInstance* ProtoInstance549 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance549->setName("Site");
ProtoInstance549->setDEF("hanim_l_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue550 = new CfieldValue();
fieldValue550->setName("name");
fieldValue550->setValue("l_tarsal_interphalangeal_phalanx_5");
ProtoInstance549->addFieldValue(fieldValue550);

CfieldValue* fieldValue551 = new CfieldValue();
fieldValue551->setName("translation");
fieldValue551->setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803");
ProtoInstance549->addFieldValue(fieldValue551);

fieldValue350->addChildren(ProtoInstance549);

CProtoInstance* ProtoInstance552 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance552->setName("Site");
ProtoInstance552->setDEF("hanim_l_lateral_malleolus");
CfieldValue* fieldValue553 = new CfieldValue();
fieldValue553->setName("name");
fieldValue553->setValue("l_lateral_malleolus");
ProtoInstance552->addFieldValue(fieldValue553);

CfieldValue* fieldValue554 = new CfieldValue();
fieldValue554->setName("translation");
fieldValue554->setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311");
ProtoInstance552->addFieldValue(fieldValue554);

fieldValue350->addChildren(ProtoInstance552);

CProtoInstance* ProtoInstance555 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance555->setName("Site");
ProtoInstance555->setDEF("hanim_l_medial_malleolus");
CfieldValue* fieldValue556 = new CfieldValue();
fieldValue556->setName("name");
fieldValue556->setValue("l_medial_malleolus");
ProtoInstance555->addFieldValue(fieldValue556);

CfieldValue* fieldValue557 = new CfieldValue();
fieldValue557->setName("translation");
fieldValue557->setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475");
ProtoInstance555->addFieldValue(fieldValue557);

fieldValue350->addChildren(ProtoInstance555);

CProtoInstance* ProtoInstance558 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance558->setName("Site");
ProtoInstance558->setDEF("hanim_l_sphyrion");
CfieldValue* fieldValue559 = new CfieldValue();
fieldValue559->setName("name");
fieldValue559->setValue("l_sphyrion");
ProtoInstance558->addFieldValue(fieldValue559);

CfieldValue* fieldValue560 = new CfieldValue();
fieldValue560->setName("translation");
fieldValue560->setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492");
ProtoInstance558->addFieldValue(fieldValue560);

fieldValue350->addChildren(ProtoInstance558);

CProtoInstance* ProtoInstance561 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance561->setName("Site");
ProtoInstance561->setDEF("hanim_l_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue562 = new CfieldValue();
fieldValue562->setName("name");
fieldValue562->setValue("l_tarsal_interphalangeal_phalanx_1");
ProtoInstance561->addFieldValue(fieldValue562);

CfieldValue* fieldValue563 = new CfieldValue();
fieldValue563->setName("translation");
fieldValue563->setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731");
ProtoInstance561->addFieldValue(fieldValue563);

fieldValue350->addChildren(ProtoInstance561);

CProtoInstance* ProtoInstance564 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance564->setName("Site");
ProtoInstance564->setDEF("hanim_l_calcaneus_posterior");
CfieldValue* fieldValue565 = new CfieldValue();
fieldValue565->setName("name");
fieldValue565->setValue("l_calcaneus_posterior");
ProtoInstance564->addFieldValue(fieldValue565);

CfieldValue* fieldValue566 = new CfieldValue();
fieldValue566->setName("translation");
fieldValue566->setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973");
ProtoInstance564->addFieldValue(fieldValue566);

fieldValue350->addChildren(ProtoInstance564);

CProtoInstance* ProtoInstance567 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance567->setName("Site");
ProtoInstance567->setDEF("hanim_l_tarsal_distal_phalanx_2");
CfieldValue* fieldValue568 = new CfieldValue();
fieldValue568->setName("name");
fieldValue568->setValue("l_tarsal_distal_phalanx_2");
ProtoInstance567->addFieldValue(fieldValue568);

CfieldValue* fieldValue569 = new CfieldValue();
fieldValue569->setName("translation");
fieldValue569->setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476");
ProtoInstance567->addFieldValue(fieldValue569);

fieldValue350->addChildren(ProtoInstance567);

CProtoInstance* ProtoInstance570 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance570->setName("Site");
ProtoInstance570->setDEF("hanim_crotch");
CfieldValue* fieldValue571 = new CfieldValue();
fieldValue571->setName("name");
fieldValue571->setValue("crotch");
ProtoInstance570->addFieldValue(fieldValue571);

CfieldValue* fieldValue572 = new CfieldValue();
fieldValue572->setName("translation");
fieldValue572->setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367");
ProtoInstance570->addFieldValue(fieldValue572);

fieldValue350->addChildren(ProtoInstance570);

CProtoInstance* ProtoInstance573 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance573->setName("Site");
ProtoInstance573->setDEF("hanim_r_neck_base");
CfieldValue* fieldValue574 = new CfieldValue();
fieldValue574->setName("name");
fieldValue574->setValue("r_neck_base");
ProtoInstance573->addFieldValue(fieldValue574);

CfieldValue* fieldValue575 = new CfieldValue();
fieldValue575->setName("translation");
fieldValue575->setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071");
ProtoInstance573->addFieldValue(fieldValue575);

fieldValue350->addChildren(ProtoInstance573);

CProtoInstance* ProtoInstance576 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance576->setName("Site");
ProtoInstance576->setDEF("hanim_l_neck_base");
CfieldValue* fieldValue577 = new CfieldValue();
fieldValue577->setName("name");
fieldValue577->setValue("l_neck_base");
ProtoInstance576->addFieldValue(fieldValue577);

CfieldValue* fieldValue578 = new CfieldValue();
fieldValue578->setName("translation");
fieldValue578->setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478");
ProtoInstance576->addFieldValue(fieldValue578);

fieldValue350->addChildren(ProtoInstance576);

CProtoInstance* ProtoInstance579 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance579->setName("Site");
ProtoInstance579->setDEF("hanim_navel");
CfieldValue* fieldValue580 = new CfieldValue();
fieldValue580->setName("name");
fieldValue580->setValue("navel");
ProtoInstance579->addFieldValue(fieldValue580);

CfieldValue* fieldValue581 = new CfieldValue();
fieldValue581->setName("translation");
fieldValue581->setValue("0.006899999920278788 1.09660005569458 0.10170000046491623");
ProtoInstance579->addFieldValue(fieldValue581);

fieldValue350->addChildren(ProtoInstance579);

ProtoInstance348->addFieldValue(fieldValue350);

fieldValue347->addChildren(ProtoInstance348);

ProtoInstance343->addFieldValue(fieldValue347);

fieldValue342->addChildren(ProtoInstance343);

ProtoInstance101->addFieldValue(fieldValue342);

CfieldValue* fieldValue582 = new CfieldValue();
fieldValue582->setName("segments");
CProtoInstance* ProtoInstance583 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance583->setName("Segment");
ProtoInstance583->setDEF("hanim_sacrum");
CfieldValue* fieldValue584 = new CfieldValue();
fieldValue584->setName("name");
fieldValue584->setValue("sacrum");
ProtoInstance583->addFieldValue(fieldValue584);

CfieldValue* fieldValue585 = new CfieldValue();
fieldValue585->setName("children");
CProtoInstance* ProtoInstance586 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance586->setName("Site");
ProtoInstance586->setDEF("hanim_skull_tip");
CfieldValue* fieldValue587 = new CfieldValue();
fieldValue587->setName("name");
fieldValue587->setValue("skull_tip");
ProtoInstance586->addFieldValue(fieldValue587);

CfieldValue* fieldValue588 = new CfieldValue();
fieldValue588->setName("translation");
fieldValue588->setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678");
ProtoInstance586->addFieldValue(fieldValue588);

fieldValue585->addChildren(ProtoInstance586);

CProtoInstance* ProtoInstance589 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance589->setName("Site");
ProtoInstance589->setDEF("hanim_sellion");
CfieldValue* fieldValue590 = new CfieldValue();
fieldValue590->setName("name");
fieldValue590->setValue("sellion");
ProtoInstance589->addFieldValue(fieldValue590);

CfieldValue* fieldValue591 = new CfieldValue();
fieldValue591->setName("translation");
fieldValue591->setValue("0.005799999926239252 1.631600022315979 0.0851999968290329");
ProtoInstance589->addFieldValue(fieldValue591);

fieldValue585->addChildren(ProtoInstance589);

CProtoInstance* ProtoInstance592 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance592->setName("Site");
ProtoInstance592->setDEF("hanim_r_infraorbitale");
CfieldValue* fieldValue593 = new CfieldValue();
fieldValue593->setName("name");
fieldValue593->setValue("r_infraorbitale");
ProtoInstance592->addFieldValue(fieldValue593);

CfieldValue* fieldValue594 = new CfieldValue();
fieldValue594->setName("translation");
fieldValue594->setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547");
ProtoInstance592->addFieldValue(fieldValue594);

fieldValue585->addChildren(ProtoInstance592);

CProtoInstance* ProtoInstance595 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance595->setName("Site");
ProtoInstance595->setDEF("hanim_l_infraorbitale");
CfieldValue* fieldValue596 = new CfieldValue();
fieldValue596->setName("name");
fieldValue596->setValue("l_infraorbitale");
ProtoInstance595->addFieldValue(fieldValue596);

CfieldValue* fieldValue597 = new CfieldValue();
fieldValue597->setName("translation");
fieldValue597->setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547");
ProtoInstance595->addFieldValue(fieldValue597);

fieldValue585->addChildren(ProtoInstance595);

CProtoInstance* ProtoInstance598 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance598->setName("Site");
ProtoInstance598->setDEF("hanim_supramenton");
CfieldValue* fieldValue599 = new CfieldValue();
fieldValue599->setName("name");
fieldValue599->setValue("supramenton");
ProtoInstance598->addFieldValue(fieldValue599);

CfieldValue* fieldValue600 = new CfieldValue();
fieldValue600->setName("translation");
fieldValue600->setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962");
ProtoInstance598->addFieldValue(fieldValue600);

fieldValue585->addChildren(ProtoInstance598);

CProtoInstance* ProtoInstance601 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance601->setName("Site");
ProtoInstance601->setDEF("hanim_r_tragion");
CfieldValue* fieldValue602 = new CfieldValue();
fieldValue602->setName("name");
fieldValue602->setValue("r_tragion");
ProtoInstance601->addFieldValue(fieldValue602);

CfieldValue* fieldValue603 = new CfieldValue();
fieldValue603->setName("translation");
fieldValue603->setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642");
ProtoInstance601->addFieldValue(fieldValue603);

fieldValue585->addChildren(ProtoInstance601);

CProtoInstance* ProtoInstance604 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance604->setName("Site");
ProtoInstance604->setDEF("hanim_r_gonion");
CfieldValue* fieldValue605 = new CfieldValue();
fieldValue605->setName("name");
fieldValue605->setValue("r_gonion");
ProtoInstance604->addFieldValue(fieldValue605);

CfieldValue* fieldValue606 = new CfieldValue();
fieldValue606->setName("translation");
fieldValue606->setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176");
ProtoInstance604->addFieldValue(fieldValue606);

fieldValue585->addChildren(ProtoInstance604);

CProtoInstance* ProtoInstance607 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance607->setName("Site");
ProtoInstance607->setDEF("hanim_l_tragion");
CfieldValue* fieldValue608 = new CfieldValue();
fieldValue608->setName("name");
fieldValue608->setValue("l_tragion");
ProtoInstance607->addFieldValue(fieldValue608);

CfieldValue* fieldValue609 = new CfieldValue();
fieldValue609->setName("translation");
fieldValue609->setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874");
ProtoInstance607->addFieldValue(fieldValue609);

fieldValue585->addChildren(ProtoInstance607);

CProtoInstance* ProtoInstance610 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance610->setName("Site");
ProtoInstance610->setDEF("hanim_l_gonion");
CfieldValue* fieldValue611 = new CfieldValue();
fieldValue611->setName("name");
fieldValue611->setValue("l_gonion");
ProtoInstance610->addFieldValue(fieldValue611);

CfieldValue* fieldValue612 = new CfieldValue();
fieldValue612->setName("translation");
fieldValue612->setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066");
ProtoInstance610->addFieldValue(fieldValue612);

fieldValue585->addChildren(ProtoInstance610);

CProtoInstance* ProtoInstance613 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance613->setName("Site");
ProtoInstance613->setDEF("hanim_nuchale");
CfieldValue* fieldValue614 = new CfieldValue();
fieldValue614->setName("name");
fieldValue614->setValue("nuchale");
ProtoInstance613->addFieldValue(fieldValue614);

CfieldValue* fieldValue615 = new CfieldValue();
fieldValue615->setName("translation");
fieldValue615->setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361");
ProtoInstance613->addFieldValue(fieldValue615);

fieldValue585->addChildren(ProtoInstance613);

CProtoInstance* ProtoInstance616 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance616->setName("Site");
ProtoInstance616->setDEF("hanim_r_clavicale");
CfieldValue* fieldValue617 = new CfieldValue();
fieldValue617->setName("name");
fieldValue617->setValue("r_clavicale");
ProtoInstance616->addFieldValue(fieldValue617);

CfieldValue* fieldValue618 = new CfieldValue();
fieldValue618->setName("translation");
fieldValue618->setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033");
ProtoInstance616->addFieldValue(fieldValue618);

fieldValue585->addChildren(ProtoInstance616);

CProtoInstance* ProtoInstance619 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance619->setName("Site");
ProtoInstance619->setDEF("hanim_suprasternale");
CfieldValue* fieldValue620 = new CfieldValue();
fieldValue620->setName("name");
fieldValue620->setValue("suprasternale");
ProtoInstance619->addFieldValue(fieldValue620);

CfieldValue* fieldValue621 = new CfieldValue();
fieldValue621->setName("translation");
fieldValue621->setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869");
ProtoInstance619->addFieldValue(fieldValue621);

fieldValue585->addChildren(ProtoInstance619);

CProtoInstance* ProtoInstance622 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance622->setName("Site");
ProtoInstance622->setDEF("hanim_l_clavicale");
CfieldValue* fieldValue623 = new CfieldValue();
fieldValue623->setName("name");
fieldValue623->setValue("l_clavicale");
ProtoInstance622->addFieldValue(fieldValue623);

CfieldValue* fieldValue624 = new CfieldValue();
fieldValue624->setName("translation");
fieldValue624->setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754");
ProtoInstance622->addFieldValue(fieldValue624);

fieldValue585->addChildren(ProtoInstance622);

CProtoInstance* ProtoInstance625 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance625->setName("Site");
ProtoInstance625->setDEF("hanim_r_thelion");
CfieldValue* fieldValue626 = new CfieldValue();
fieldValue626->setName("name");
fieldValue626->setValue("r_thelion");
ProtoInstance625->addFieldValue(fieldValue626);

CfieldValue* fieldValue627 = new CfieldValue();
fieldValue627->setName("translation");
fieldValue627->setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911");
ProtoInstance625->addFieldValue(fieldValue627);

fieldValue585->addChildren(ProtoInstance625);

CProtoInstance* ProtoInstance628 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance628->setName("Site");
ProtoInstance628->setDEF("hanim_l_thelion");
CfieldValue* fieldValue629 = new CfieldValue();
fieldValue629->setName("name");
fieldValue629->setValue("l_thelion");
ProtoInstance628->addFieldValue(fieldValue629);

CfieldValue* fieldValue630 = new CfieldValue();
fieldValue630->setName("translation");
fieldValue630->setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689");
ProtoInstance628->addFieldValue(fieldValue630);

fieldValue585->addChildren(ProtoInstance628);

CProtoInstance* ProtoInstance631 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance631->setName("Site");
ProtoInstance631->setDEF("hanim_substernale");
CfieldValue* fieldValue632 = new CfieldValue();
fieldValue632->setName("name");
fieldValue632->setValue("substernale");
ProtoInstance631->addFieldValue(fieldValue632);

CfieldValue* fieldValue633 = new CfieldValue();
fieldValue633->setName("translation");
fieldValue633->setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683");
ProtoInstance631->addFieldValue(fieldValue633);

fieldValue585->addChildren(ProtoInstance631);

CProtoInstance* ProtoInstance634 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance634->setName("Site");
ProtoInstance634->setDEF("hanim_r_rib10");
CfieldValue* fieldValue635 = new CfieldValue();
fieldValue635->setName("name");
fieldValue635->setValue("r_rib10");
ProtoInstance634->addFieldValue(fieldValue635);

CfieldValue* fieldValue636 = new CfieldValue();
fieldValue636->setName("translation");
fieldValue636->setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432");
ProtoInstance634->addFieldValue(fieldValue636);

fieldValue585->addChildren(ProtoInstance634);

CProtoInstance* ProtoInstance637 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance637->setName("Site");
ProtoInstance637->setDEF("hanim_r_asis");
CfieldValue* fieldValue638 = new CfieldValue();
fieldValue638->setName("name");
fieldValue638->setValue("r_asis");
ProtoInstance637->addFieldValue(fieldValue638);

CfieldValue* fieldValue639 = new CfieldValue();
fieldValue639->setName("translation");
fieldValue639->setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747");
ProtoInstance637->addFieldValue(fieldValue639);

fieldValue585->addChildren(ProtoInstance637);

CProtoInstance* ProtoInstance640 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance640->setName("Site");
ProtoInstance640->setDEF("hanim_l_rib10");
CfieldValue* fieldValue641 = new CfieldValue();
fieldValue641->setName("name");
fieldValue641->setValue("l_rib10");
ProtoInstance640->addFieldValue(fieldValue641);

CfieldValue* fieldValue642 = new CfieldValue();
fieldValue642->setName("translation");
fieldValue642->setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202");
ProtoInstance640->addFieldValue(fieldValue642);

fieldValue585->addChildren(ProtoInstance640);

CProtoInstance* ProtoInstance643 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance643->setName("Site");
ProtoInstance643->setDEF("hanim_l_asis");
CfieldValue* fieldValue644 = new CfieldValue();
fieldValue644->setName("name");
fieldValue644->setValue("l_asis");
ProtoInstance643->addFieldValue(fieldValue644);

CfieldValue* fieldValue645 = new CfieldValue();
fieldValue645->setName("translation");
fieldValue645->setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836");
ProtoInstance643->addFieldValue(fieldValue645);

fieldValue585->addChildren(ProtoInstance643);

CProtoInstance* ProtoInstance646 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance646->setName("Site");
ProtoInstance646->setDEF("hanim_r_iliocristale");
CfieldValue* fieldValue647 = new CfieldValue();
fieldValue647->setName("name");
fieldValue647->setValue("r_iliocristale");
ProtoInstance646->addFieldValue(fieldValue647);

CfieldValue* fieldValue648 = new CfieldValue();
fieldValue648->setName("translation");
fieldValue648->setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187");
ProtoInstance646->addFieldValue(fieldValue648);

fieldValue585->addChildren(ProtoInstance646);

CProtoInstance* ProtoInstance649 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance649->setName("Site");
ProtoInstance649->setDEF("hanim_r_trochanterion");
CfieldValue* fieldValue650 = new CfieldValue();
fieldValue650->setName("name");
fieldValue650->setValue("r_trochanterion");
ProtoInstance649->addFieldValue(fieldValue650);

CfieldValue* fieldValue651 = new CfieldValue();
fieldValue651->setName("translation");
fieldValue651->setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514");
ProtoInstance649->addFieldValue(fieldValue651);

fieldValue585->addChildren(ProtoInstance649);

CProtoInstance* ProtoInstance652 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance652->setName("Site");
ProtoInstance652->setDEF("hanim_l_iliocristale");
CfieldValue* fieldValue653 = new CfieldValue();
fieldValue653->setName("name");
fieldValue653->setValue("l_iliocristale");
ProtoInstance652->addFieldValue(fieldValue653);

CfieldValue* fieldValue654 = new CfieldValue();
fieldValue654->setName("translation");
fieldValue654->setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001");
ProtoInstance652->addFieldValue(fieldValue654);

fieldValue585->addChildren(ProtoInstance652);

CProtoInstance* ProtoInstance655 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance655->setName("Site");
ProtoInstance655->setDEF("hanim_l_trochanterion");
CfieldValue* fieldValue656 = new CfieldValue();
fieldValue656->setName("name");
fieldValue656->setValue("l_trochanterion");
ProtoInstance655->addFieldValue(fieldValue656);

CfieldValue* fieldValue657 = new CfieldValue();
fieldValue657->setName("translation");
fieldValue657->setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183");
ProtoInstance655->addFieldValue(fieldValue657);

fieldValue585->addChildren(ProtoInstance655);

CProtoInstance* ProtoInstance658 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance658->setName("Site");
ProtoInstance658->setDEF("hanim_cervicale");
CfieldValue* fieldValue659 = new CfieldValue();
fieldValue659->setName("name");
fieldValue659->setValue("cervicale");
ProtoInstance658->addFieldValue(fieldValue659);

CfieldValue* fieldValue660 = new CfieldValue();
fieldValue660->setName("translation");
fieldValue660->setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754");
ProtoInstance658->addFieldValue(fieldValue660);

fieldValue585->addChildren(ProtoInstance658);

CProtoInstance* ProtoInstance661 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance661->setName("Site");
ProtoInstance661->setDEF("hanim_spine_2_lower_back");
CfieldValue* fieldValue662 = new CfieldValue();
fieldValue662->setName("name");
fieldValue662->setValue("spine_2_lower_back");
ProtoInstance661->addFieldValue(fieldValue662);

CfieldValue* fieldValue663 = new CfieldValue();
fieldValue663->setName("translation");
fieldValue663->setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661");
ProtoInstance661->addFieldValue(fieldValue663);

fieldValue585->addChildren(ProtoInstance661);

CProtoInstance* ProtoInstance664 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance664->setName("Site");
ProtoInstance664->setDEF("hanim_r_psis");
CfieldValue* fieldValue665 = new CfieldValue();
fieldValue665->setName("name");
fieldValue665->setValue("r_psis");
ProtoInstance664->addFieldValue(fieldValue665);

CfieldValue* fieldValue666 = new CfieldValue();
fieldValue666->setName("translation");
fieldValue666->setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082");
ProtoInstance664->addFieldValue(fieldValue666);

fieldValue585->addChildren(ProtoInstance664);

CProtoInstance* ProtoInstance667 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance667->setName("Site");
ProtoInstance667->setDEF("hanim_l_psis");
CfieldValue* fieldValue668 = new CfieldValue();
fieldValue668->setName("name");
fieldValue668->setValue("l_psis");
ProtoInstance667->addFieldValue(fieldValue668);

CfieldValue* fieldValue669 = new CfieldValue();
fieldValue669->setName("translation");
fieldValue669->setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388");
ProtoInstance667->addFieldValue(fieldValue669);

fieldValue585->addChildren(ProtoInstance667);

CProtoInstance* ProtoInstance670 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance670->setName("Site");
ProtoInstance670->setDEF("hanim_waist_preferred_posterior");
CfieldValue* fieldValue671 = new CfieldValue();
fieldValue671->setName("name");
fieldValue671->setValue("waist_preferred_posterior");
ProtoInstance670->addFieldValue(fieldValue671);

CfieldValue* fieldValue672 = new CfieldValue();
fieldValue672->setName("translation");
fieldValue672->setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754");
ProtoInstance670->addFieldValue(fieldValue672);

fieldValue585->addChildren(ProtoInstance670);

CProtoInstance* ProtoInstance673 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance673->setName("Site");
ProtoInstance673->setDEF("hanim_r_acromion");
CfieldValue* fieldValue674 = new CfieldValue();
fieldValue674->setName("name");
fieldValue674->setValue("r_acromion");
ProtoInstance673->addFieldValue(fieldValue674);

CfieldValue* fieldValue675 = new CfieldValue();
fieldValue675->setName("translation");
fieldValue675->setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541");
ProtoInstance673->addFieldValue(fieldValue675);

fieldValue585->addChildren(ProtoInstance673);

CProtoInstance* ProtoInstance676 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance676->setName("Site");
ProtoInstance676->setDEF("hanim_r_axilla_proximal");
CfieldValue* fieldValue677 = new CfieldValue();
fieldValue677->setName("name");
fieldValue677->setValue("r_axilla_proximal");
ProtoInstance676->addFieldValue(fieldValue677);

CfieldValue* fieldValue678 = new CfieldValue();
fieldValue678->setName("translation");
fieldValue678->setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438");
ProtoInstance676->addFieldValue(fieldValue678);

fieldValue585->addChildren(ProtoInstance676);

CProtoInstance* ProtoInstance679 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance679->setName("Site");
ProtoInstance679->setDEF("hanim_r_radial_styloid");
CfieldValue* fieldValue680 = new CfieldValue();
fieldValue680->setName("name");
fieldValue680->setValue("r_radial_styloid");
ProtoInstance679->addFieldValue(fieldValue680);

CfieldValue* fieldValue681 = new CfieldValue();
fieldValue681->setName("translation");
fieldValue681->setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236");
ProtoInstance679->addFieldValue(fieldValue681);

fieldValue585->addChildren(ProtoInstance679);

CProtoInstance* ProtoInstance682 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance682->setName("Site");
ProtoInstance682->setDEF("hanim_r_axilla_distal");
CfieldValue* fieldValue683 = new CfieldValue();
fieldValue683->setName("name");
fieldValue683->setValue("r_axilla_distal");
ProtoInstance682->addFieldValue(fieldValue683);

CfieldValue* fieldValue684 = new CfieldValue();
fieldValue684->setName("translation");
fieldValue684->setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678");
ProtoInstance682->addFieldValue(fieldValue684);

fieldValue585->addChildren(ProtoInstance682);

CProtoInstance* ProtoInstance685 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance685->setName("Site");
ProtoInstance685->setDEF("hanim_r_olecranon");
CfieldValue* fieldValue686 = new CfieldValue();
fieldValue686->setName("name");
fieldValue686->setValue("r_olecranon");
ProtoInstance685->addFieldValue(fieldValue686);

CfieldValue* fieldValue687 = new CfieldValue();
fieldValue687->setName("translation");
fieldValue687->setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142");
ProtoInstance685->addFieldValue(fieldValue687);

fieldValue585->addChildren(ProtoInstance685);

CProtoInstance* ProtoInstance688 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance688->setName("Site");
ProtoInstance688->setDEF("hanim_r_humeral_lateral_epicondyles");
CfieldValue* fieldValue689 = new CfieldValue();
fieldValue689->setName("name");
fieldValue689->setValue("r_humeral_lateral_epicondyles");
ProtoInstance688->addFieldValue(fieldValue689);

CfieldValue* fieldValue690 = new CfieldValue();
fieldValue690->setName("translation");
fieldValue690->setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443");
ProtoInstance688->addFieldValue(fieldValue690);

fieldValue585->addChildren(ProtoInstance688);

CProtoInstance* ProtoInstance691 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance691->setName("Site");
ProtoInstance691->setDEF("hanim_r_humeral_medial_epicondyles");
CfieldValue* fieldValue692 = new CfieldValue();
fieldValue692->setName("name");
fieldValue692->setValue("r_humeral_medial_epicondyles");
ProtoInstance691->addFieldValue(fieldValue692);

CfieldValue* fieldValue693 = new CfieldValue();
fieldValue693->setName("translation");
fieldValue693->setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628");
ProtoInstance691->addFieldValue(fieldValue693);

fieldValue585->addChildren(ProtoInstance691);

CProtoInstance* ProtoInstance694 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance694->setName("Site");
ProtoInstance694->setDEF("hanim_r_radiale");
CfieldValue* fieldValue695 = new CfieldValue();
fieldValue695->setName("name");
fieldValue695->setValue("r_radiale");
ProtoInstance694->addFieldValue(fieldValue695);

CfieldValue* fieldValue696 = new CfieldValue();
fieldValue696->setName("translation");
fieldValue696->setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754");
ProtoInstance694->addFieldValue(fieldValue696);

fieldValue585->addChildren(ProtoInstance694);

CProtoInstance* ProtoInstance697 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance697->setName("Site");
ProtoInstance697->setDEF("hanim_r_metacarpal_phalanx_2");
CfieldValue* fieldValue698 = new CfieldValue();
fieldValue698->setName("name");
fieldValue698->setValue("r_metacarpal_phalanx_2");
ProtoInstance697->addFieldValue(fieldValue698);

CfieldValue* fieldValue699 = new CfieldValue();
fieldValue699->setName("translation");
fieldValue699->setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933");
ProtoInstance697->addFieldValue(fieldValue699);

fieldValue585->addChildren(ProtoInstance697);

CProtoInstance* ProtoInstance700 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance700->setName("Site");
ProtoInstance700->setDEF("hanim_r_dactylion");
CfieldValue* fieldValue701 = new CfieldValue();
fieldValue701->setName("name");
fieldValue701->setValue("r_dactylion");
ProtoInstance700->addFieldValue(fieldValue701);

CfieldValue* fieldValue702 = new CfieldValue();
fieldValue702->setName("translation");
fieldValue702->setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131");
ProtoInstance700->addFieldValue(fieldValue702);

fieldValue585->addChildren(ProtoInstance700);

CProtoInstance* ProtoInstance703 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance703->setName("Site");
ProtoInstance703->setDEF("hanim_r_ulnar_styloid");
CfieldValue* fieldValue704 = new CfieldValue();
fieldValue704->setName("name");
fieldValue704->setValue("r_ulnar_styloid");
ProtoInstance703->addFieldValue(fieldValue704);

CfieldValue* fieldValue705 = new CfieldValue();
fieldValue705->setName("translation");
fieldValue705->setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294");
ProtoInstance703->addFieldValue(fieldValue705);

fieldValue585->addChildren(ProtoInstance703);

CProtoInstance* ProtoInstance706 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance706->setName("Site");
ProtoInstance706->setDEF("hanim_r_metacarpal_phalanx_5");
CfieldValue* fieldValue707 = new CfieldValue();
fieldValue707->setName("name");
fieldValue707->setValue("r_metacarpal_phalanx_5");
ProtoInstance706->addFieldValue(fieldValue707);

CfieldValue* fieldValue708 = new CfieldValue();
fieldValue708->setName("translation");
fieldValue708->setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951");
ProtoInstance706->addFieldValue(fieldValue708);

fieldValue585->addChildren(ProtoInstance706);

CProtoInstance* ProtoInstance709 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance709->setName("Site");
ProtoInstance709->setDEF("hanim_l_acromion");
CfieldValue* fieldValue710 = new CfieldValue();
fieldValue710->setName("name");
fieldValue710->setValue("l_acromion");
ProtoInstance709->addFieldValue(fieldValue710);

CfieldValue* fieldValue711 = new CfieldValue();
fieldValue711->setName("translation");
fieldValue711->setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014");
ProtoInstance709->addFieldValue(fieldValue711);

fieldValue585->addChildren(ProtoInstance709);

CProtoInstance* ProtoInstance712 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance712->setName("Site");
ProtoInstance712->setDEF("hanim_l_axilla_proximal");
CfieldValue* fieldValue713 = new CfieldValue();
fieldValue713->setName("name");
fieldValue713->setValue("l_axilla_proximal");
ProtoInstance712->addFieldValue(fieldValue713);

CfieldValue* fieldValue714 = new CfieldValue();
fieldValue714->setName("translation");
fieldValue714->setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937");
ProtoInstance712->addFieldValue(fieldValue714);

fieldValue585->addChildren(ProtoInstance712);

CProtoInstance* ProtoInstance715 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance715->setName("Site");
ProtoInstance715->setDEF("hanim_l_radial_styloid");
CfieldValue* fieldValue716 = new CfieldValue();
fieldValue716->setName("name");
fieldValue716->setValue("l_radial_styloid");
ProtoInstance715->addFieldValue(fieldValue716);

CfieldValue* fieldValue717 = new CfieldValue();
fieldValue717->setName("translation");
fieldValue717->setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691");
ProtoInstance715->addFieldValue(fieldValue717);

fieldValue585->addChildren(ProtoInstance715);

CProtoInstance* ProtoInstance718 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance718->setName("Site");
ProtoInstance718->setDEF("hanim_l_axilla_distal");
CfieldValue* fieldValue719 = new CfieldValue();
fieldValue719->setName("name");
fieldValue719->setValue("l_axilla_distal");
ProtoInstance718->addFieldValue(fieldValue719);

CfieldValue* fieldValue720 = new CfieldValue();
fieldValue720->setName("translation");
fieldValue720->setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388");
ProtoInstance718->addFieldValue(fieldValue720);

fieldValue585->addChildren(ProtoInstance718);

CProtoInstance* ProtoInstance721 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance721->setName("Site");
ProtoInstance721->setDEF("hanim_l_olecranon");
CfieldValue* fieldValue722 = new CfieldValue();
fieldValue722->setName("name");
fieldValue722->setValue("l_olecranon");
ProtoInstance721->addFieldValue(fieldValue722);

CfieldValue* fieldValue723 = new CfieldValue();
fieldValue723->setName("translation");
fieldValue723->setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453");
ProtoInstance721->addFieldValue(fieldValue723);

fieldValue585->addChildren(ProtoInstance721);

CProtoInstance* ProtoInstance724 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance724->setName("Site");
ProtoInstance724->setDEF("hanim_l_humeral_lateral_epicondyles");
CfieldValue* fieldValue725 = new CfieldValue();
fieldValue725->setName("name");
fieldValue725->setValue("l_humeral_lateral_epicondyles");
ProtoInstance724->addFieldValue(fieldValue725);

CfieldValue* fieldValue726 = new CfieldValue();
fieldValue726->setName("translation");
fieldValue726->setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355");
ProtoInstance724->addFieldValue(fieldValue726);

fieldValue585->addChildren(ProtoInstance724);

CProtoInstance* ProtoInstance727 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance727->setName("Site");
ProtoInstance727->setDEF("hanim_l_humeral_medial_epicondyles");
CfieldValue* fieldValue728 = new CfieldValue();
fieldValue728->setName("name");
fieldValue728->setValue("l_humeral_medial_epicondyles");
ProtoInstance727->addFieldValue(fieldValue728);

CfieldValue* fieldValue729 = new CfieldValue();
fieldValue729->setName("translation");
fieldValue729->setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661");
ProtoInstance727->addFieldValue(fieldValue729);

fieldValue585->addChildren(ProtoInstance727);

CProtoInstance* ProtoInstance730 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance730->setName("Site");
ProtoInstance730->setDEF("hanim_l_radiale");
CfieldValue* fieldValue731 = new CfieldValue();
fieldValue731->setName("name");
fieldValue731->setValue("l_radiale");
ProtoInstance730->addFieldValue(fieldValue731);

CfieldValue* fieldValue732 = new CfieldValue();
fieldValue732->setName("translation");
fieldValue732->setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268");
ProtoInstance730->addFieldValue(fieldValue732);

fieldValue585->addChildren(ProtoInstance730);

CProtoInstance* ProtoInstance733 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance733->setName("Site");
ProtoInstance733->setDEF("hanim_l_metacarpal_phalanx_2");
CfieldValue* fieldValue734 = new CfieldValue();
fieldValue734->setName("name");
fieldValue734->setValue("l_metacarpal_phalanx_2");
ProtoInstance733->addFieldValue(fieldValue734);

CfieldValue* fieldValue735 = new CfieldValue();
fieldValue735->setName("translation");
fieldValue735->setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597");
ProtoInstance733->addFieldValue(fieldValue735);

fieldValue585->addChildren(ProtoInstance733);

CProtoInstance* ProtoInstance736 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance736->setName("Site");
ProtoInstance736->setDEF("hanim_l_dactylion");
CfieldValue* fieldValue737 = new CfieldValue();
fieldValue737->setName("name");
fieldValue737->setValue("l_dactylion");
ProtoInstance736->addFieldValue(fieldValue737);

CfieldValue* fieldValue738 = new CfieldValue();
fieldValue738->setName("translation");
fieldValue738->setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604");
ProtoInstance736->addFieldValue(fieldValue738);

fieldValue585->addChildren(ProtoInstance736);

CProtoInstance* ProtoInstance739 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance739->setName("Site");
ProtoInstance739->setDEF("hanim_l_ulnar_styloid");
CfieldValue* fieldValue740 = new CfieldValue();
fieldValue740->setName("name");
fieldValue740->setValue("l_ulnar_styloid");
ProtoInstance739->addFieldValue(fieldValue740);

CfieldValue* fieldValue741 = new CfieldValue();
fieldValue741->setName("translation");
fieldValue741->setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098");
ProtoInstance739->addFieldValue(fieldValue741);

fieldValue585->addChildren(ProtoInstance739);

CProtoInstance* ProtoInstance742 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance742->setName("Site");
ProtoInstance742->setDEF("hanim_l_metacarpal_phalanx_5");
CfieldValue* fieldValue743 = new CfieldValue();
fieldValue743->setName("name");
fieldValue743->setValue("l_metacarpal_phalanx_5");
ProtoInstance742->addFieldValue(fieldValue743);

CfieldValue* fieldValue744 = new CfieldValue();
fieldValue744->setName("translation");
fieldValue744->setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262");
ProtoInstance742->addFieldValue(fieldValue744);

fieldValue585->addChildren(ProtoInstance742);

CProtoInstance* ProtoInstance745 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance745->setName("Site");
ProtoInstance745->setDEF("hanim_r_knee_crease");
CfieldValue* fieldValue746 = new CfieldValue();
fieldValue746->setName("name");
fieldValue746->setValue("r_knee_crease");
ProtoInstance745->addFieldValue(fieldValue746);

CfieldValue* fieldValue747 = new CfieldValue();
fieldValue747->setName("translation");
fieldValue747->setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016");
ProtoInstance745->addFieldValue(fieldValue747);

fieldValue585->addChildren(ProtoInstance745);

CProtoInstance* ProtoInstance748 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance748->setName("Site");
ProtoInstance748->setDEF("hanim_r_femoral_lateral_epicondyles");
CfieldValue* fieldValue749 = new CfieldValue();
fieldValue749->setName("name");
fieldValue749->setValue("r_femoral_lateral_epicondyles");
ProtoInstance748->addFieldValue(fieldValue749);

CfieldValue* fieldValue750 = new CfieldValue();
fieldValue750->setName("translation");
fieldValue750->setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052");
ProtoInstance748->addFieldValue(fieldValue750);

fieldValue585->addChildren(ProtoInstance748);

CProtoInstance* ProtoInstance751 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance751->setName("Site");
ProtoInstance751->setDEF("hanim_r_femoral_medial_epicondyles");
CfieldValue* fieldValue752 = new CfieldValue();
fieldValue752->setName("name");
fieldValue752->setValue("r_femoral_lateral_epicondyles");
ProtoInstance751->addFieldValue(fieldValue752);

CfieldValue* fieldValue753 = new CfieldValue();
fieldValue753->setName("translation");
fieldValue753->setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821");
ProtoInstance751->addFieldValue(fieldValue753);

fieldValue585->addChildren(ProtoInstance751);

CProtoInstance* ProtoInstance754 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance754->setName("Site");
ProtoInstance754->setDEF("hanim_r_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue755 = new CfieldValue();
fieldValue755->setName("name");
fieldValue755->setValue("r_tarsal_interphalangeal_phalanx_5");
ProtoInstance754->addFieldValue(fieldValue755);

CfieldValue* fieldValue756 = new CfieldValue();
fieldValue756->setName("translation");
fieldValue756->setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973");
ProtoInstance754->addFieldValue(fieldValue756);

fieldValue585->addChildren(ProtoInstance754);

CProtoInstance* ProtoInstance757 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance757->setName("Site");
ProtoInstance757->setDEF("hanim_r_lateral_malleolus");
CfieldValue* fieldValue758 = new CfieldValue();
fieldValue758->setName("name");
fieldValue758->setValue("r_lateral_malleolus");
ProtoInstance757->addFieldValue(fieldValue758);

CfieldValue* fieldValue759 = new CfieldValue();
fieldValue759->setName("translation");
fieldValue759->setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934");
ProtoInstance757->addFieldValue(fieldValue759);

fieldValue585->addChildren(ProtoInstance757);

CProtoInstance* ProtoInstance760 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance760->setName("Site");
ProtoInstance760->setDEF("hanim_r_medial_malleolus");
CfieldValue* fieldValue761 = new CfieldValue();
fieldValue761->setName("name");
fieldValue761->setValue("r_medial_malleolus");
ProtoInstance760->addFieldValue(fieldValue761);

CfieldValue* fieldValue762 = new CfieldValue();
fieldValue762->setName("translation");
fieldValue762->setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803");
ProtoInstance760->addFieldValue(fieldValue762);

fieldValue585->addChildren(ProtoInstance760);

CProtoInstance* ProtoInstance763 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance763->setName("Site");
ProtoInstance763->setDEF("hanim_r_sphyrion");
CfieldValue* fieldValue764 = new CfieldValue();
fieldValue764->setName("name");
fieldValue764->setValue("r_sphyrion");
ProtoInstance763->addFieldValue(fieldValue764);

CfieldValue* fieldValue765 = new CfieldValue();
fieldValue765->setName("translation");
fieldValue765->setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935");
ProtoInstance763->addFieldValue(fieldValue765);

fieldValue585->addChildren(ProtoInstance763);

CProtoInstance* ProtoInstance766 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance766->setName("Site");
ProtoInstance766->setDEF("hanim_r_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue767 = new CfieldValue();
fieldValue767->setName("name");
fieldValue767->setValue("r_tarsal_interphalangeal_phalanx_1");
ProtoInstance766->addFieldValue(fieldValue767);

CfieldValue* fieldValue768 = new CfieldValue();
fieldValue768->setName("translation");
fieldValue768->setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804");
ProtoInstance766->addFieldValue(fieldValue768);

fieldValue585->addChildren(ProtoInstance766);

CProtoInstance* ProtoInstance769 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance769->setName("Site");
ProtoInstance769->setDEF("hanim_r_calcaneus_posterior");
CfieldValue* fieldValue770 = new CfieldValue();
fieldValue770->setName("name");
fieldValue770->setValue("r_calcaneus_posterior");
ProtoInstance769->addFieldValue(fieldValue770);

CfieldValue* fieldValue771 = new CfieldValue();
fieldValue771->setName("translation");
fieldValue771->setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874");
ProtoInstance769->addFieldValue(fieldValue771);

fieldValue585->addChildren(ProtoInstance769);

CProtoInstance* ProtoInstance772 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance772->setName("Site");
ProtoInstance772->setDEF("hanim_r_tarsal_distal_phalanx_2");
CfieldValue* fieldValue773 = new CfieldValue();
fieldValue773->setName("name");
fieldValue773->setValue("r_tarsal_distal_phalanx_2");
ProtoInstance772->addFieldValue(fieldValue773);

CfieldValue* fieldValue774 = new CfieldValue();
fieldValue774->setName("translation");
fieldValue774->setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634");
ProtoInstance772->addFieldValue(fieldValue774);

fieldValue585->addChildren(ProtoInstance772);

CProtoInstance* ProtoInstance775 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance775->setName("Site");
ProtoInstance775->setDEF("hanim_l_knee_crease");
CfieldValue* fieldValue776 = new CfieldValue();
fieldValue776->setName("name");
fieldValue776->setValue("l_knee_crease");
ProtoInstance775->addFieldValue(fieldValue776);

CfieldValue* fieldValue777 = new CfieldValue();
fieldValue777->setName("translation");
fieldValue777->setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757");
ProtoInstance775->addFieldValue(fieldValue777);

fieldValue585->addChildren(ProtoInstance775);

CProtoInstance* ProtoInstance778 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance778->setName("Site");
ProtoInstance778->setDEF("hanim_l_femoral_lateral_epicondyles");
CfieldValue* fieldValue779 = new CfieldValue();
fieldValue779->setName("name");
fieldValue779->setValue("l_femoral_lateral_epicondyles");
ProtoInstance778->addFieldValue(fieldValue779);

CfieldValue* fieldValue780 = new CfieldValue();
fieldValue780->setName("translation");
fieldValue780->setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746");
ProtoInstance778->addFieldValue(fieldValue780);

fieldValue585->addChildren(ProtoInstance778);

CProtoInstance* ProtoInstance781 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance781->setName("Site");
ProtoInstance781->setDEF("hanim_l_femoral_medial_epicondyles");
CfieldValue* fieldValue782 = new CfieldValue();
fieldValue782->setName("name");
fieldValue782->setValue("l_femoral_lateral_epicondyles");
ProtoInstance781->addFieldValue(fieldValue782);

CfieldValue* fieldValue783 = new CfieldValue();
fieldValue783->setName("translation");
fieldValue783->setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183");
ProtoInstance781->addFieldValue(fieldValue783);

fieldValue585->addChildren(ProtoInstance781);

CProtoInstance* ProtoInstance784 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance784->setName("Site");
ProtoInstance784->setDEF("hanim_l_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue785 = new CfieldValue();
fieldValue785->setName("name");
fieldValue785->setValue("l_tarsal_interphalangeal_phalanx_5");
ProtoInstance784->addFieldValue(fieldValue785);

CfieldValue* fieldValue786 = new CfieldValue();
fieldValue786->setName("translation");
fieldValue786->setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803");
ProtoInstance784->addFieldValue(fieldValue786);

fieldValue585->addChildren(ProtoInstance784);

CProtoInstance* ProtoInstance787 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance787->setName("Site");
ProtoInstance787->setDEF("hanim_l_lateral_malleolus");
CfieldValue* fieldValue788 = new CfieldValue();
fieldValue788->setName("name");
fieldValue788->setValue("l_lateral_malleolus");
ProtoInstance787->addFieldValue(fieldValue788);

CfieldValue* fieldValue789 = new CfieldValue();
fieldValue789->setName("translation");
fieldValue789->setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311");
ProtoInstance787->addFieldValue(fieldValue789);

fieldValue585->addChildren(ProtoInstance787);

CProtoInstance* ProtoInstance790 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance790->setName("Site");
ProtoInstance790->setDEF("hanim_l_medial_malleolus");
CfieldValue* fieldValue791 = new CfieldValue();
fieldValue791->setName("name");
fieldValue791->setValue("l_medial_malleolus");
ProtoInstance790->addFieldValue(fieldValue791);

CfieldValue* fieldValue792 = new CfieldValue();
fieldValue792->setName("translation");
fieldValue792->setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475");
ProtoInstance790->addFieldValue(fieldValue792);

fieldValue585->addChildren(ProtoInstance790);

CProtoInstance* ProtoInstance793 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance793->setName("Site");
ProtoInstance793->setDEF("hanim_l_sphyrion");
CfieldValue* fieldValue794 = new CfieldValue();
fieldValue794->setName("name");
fieldValue794->setValue("l_sphyrion");
ProtoInstance793->addFieldValue(fieldValue794);

CfieldValue* fieldValue795 = new CfieldValue();
fieldValue795->setName("translation");
fieldValue795->setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492");
ProtoInstance793->addFieldValue(fieldValue795);

fieldValue585->addChildren(ProtoInstance793);

CProtoInstance* ProtoInstance796 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance796->setName("Site");
ProtoInstance796->setDEF("hanim_l_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue797 = new CfieldValue();
fieldValue797->setName("name");
fieldValue797->setValue("l_tarsal_interphalangeal_phalanx_1");
ProtoInstance796->addFieldValue(fieldValue797);

CfieldValue* fieldValue798 = new CfieldValue();
fieldValue798->setName("translation");
fieldValue798->setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731");
ProtoInstance796->addFieldValue(fieldValue798);

fieldValue585->addChildren(ProtoInstance796);

CProtoInstance* ProtoInstance799 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance799->setName("Site");
ProtoInstance799->setDEF("hanim_l_calcaneus_posterior");
CfieldValue* fieldValue800 = new CfieldValue();
fieldValue800->setName("name");
fieldValue800->setValue("l_calcaneus_posterior");
ProtoInstance799->addFieldValue(fieldValue800);

CfieldValue* fieldValue801 = new CfieldValue();
fieldValue801->setName("translation");
fieldValue801->setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973");
ProtoInstance799->addFieldValue(fieldValue801);

fieldValue585->addChildren(ProtoInstance799);

CProtoInstance* ProtoInstance802 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance802->setName("Site");
ProtoInstance802->setDEF("hanim_l_tarsal_distal_phalanx_2");
CfieldValue* fieldValue803 = new CfieldValue();
fieldValue803->setName("name");
fieldValue803->setValue("l_tarsal_distal_phalanx_2");
ProtoInstance802->addFieldValue(fieldValue803);

CfieldValue* fieldValue804 = new CfieldValue();
fieldValue804->setName("translation");
fieldValue804->setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476");
ProtoInstance802->addFieldValue(fieldValue804);

fieldValue585->addChildren(ProtoInstance802);

CProtoInstance* ProtoInstance805 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance805->setName("Site");
ProtoInstance805->setDEF("hanim_crotch");
CfieldValue* fieldValue806 = new CfieldValue();
fieldValue806->setName("name");
fieldValue806->setValue("crotch");
ProtoInstance805->addFieldValue(fieldValue806);

CfieldValue* fieldValue807 = new CfieldValue();
fieldValue807->setName("translation");
fieldValue807->setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367");
ProtoInstance805->addFieldValue(fieldValue807);

fieldValue585->addChildren(ProtoInstance805);

CProtoInstance* ProtoInstance808 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance808->setName("Site");
ProtoInstance808->setDEF("hanim_r_neck_base");
CfieldValue* fieldValue809 = new CfieldValue();
fieldValue809->setName("name");
fieldValue809->setValue("r_neck_base");
ProtoInstance808->addFieldValue(fieldValue809);

CfieldValue* fieldValue810 = new CfieldValue();
fieldValue810->setName("translation");
fieldValue810->setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071");
ProtoInstance808->addFieldValue(fieldValue810);

fieldValue585->addChildren(ProtoInstance808);

CProtoInstance* ProtoInstance811 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance811->setName("Site");
ProtoInstance811->setDEF("hanim_l_neck_base");
CfieldValue* fieldValue812 = new CfieldValue();
fieldValue812->setName("name");
fieldValue812->setValue("l_neck_base");
ProtoInstance811->addFieldValue(fieldValue812);

CfieldValue* fieldValue813 = new CfieldValue();
fieldValue813->setName("translation");
fieldValue813->setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478");
ProtoInstance811->addFieldValue(fieldValue813);

fieldValue585->addChildren(ProtoInstance811);

CProtoInstance* ProtoInstance814 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance814->setName("Site");
ProtoInstance814->setDEF("hanim_navel");
CfieldValue* fieldValue815 = new CfieldValue();
fieldValue815->setName("name");
fieldValue815->setValue("navel");
ProtoInstance814->addFieldValue(fieldValue815);

CfieldValue* fieldValue816 = new CfieldValue();
fieldValue816->setName("translation");
fieldValue816->setValue("0.006899999920278788 1.09660005569458 0.10170000046491623");
ProtoInstance814->addFieldValue(fieldValue816);

fieldValue585->addChildren(ProtoInstance814);

ProtoInstance583->addFieldValue(fieldValue585);

fieldValue582->addChildren(ProtoInstance583);

ProtoInstance101->addFieldValue(fieldValue582);

CfieldValue* fieldValue817 = new CfieldValue();
fieldValue817->setName("sites");
CProtoInstance* ProtoInstance818 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance818->setName("Site");
ProtoInstance818->setDEF("hanim_skull_tip");
CfieldValue* fieldValue819 = new CfieldValue();
fieldValue819->setName("name");
fieldValue819->setValue("skull_tip");
ProtoInstance818->addFieldValue(fieldValue819);

CfieldValue* fieldValue820 = new CfieldValue();
fieldValue820->setName("translation");
fieldValue820->setValue("0.004999999888241291 1.7503999471664429 0.005499999970197678");
ProtoInstance818->addFieldValue(fieldValue820);

fieldValue817->addChildren(ProtoInstance818);

CProtoInstance* ProtoInstance821 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance821->setName("Site");
ProtoInstance821->setDEF("hanim_sellion");
CfieldValue* fieldValue822 = new CfieldValue();
fieldValue822->setName("name");
fieldValue822->setValue("sellion");
ProtoInstance821->addFieldValue(fieldValue822);

CfieldValue* fieldValue823 = new CfieldValue();
fieldValue823->setName("translation");
fieldValue823->setValue("0.005799999926239252 1.631600022315979 0.0851999968290329");
ProtoInstance821->addFieldValue(fieldValue823);

fieldValue817->addChildren(ProtoInstance821);

CProtoInstance* ProtoInstance824 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance824->setName("Site");
ProtoInstance824->setDEF("hanim_r_infraorbitale");
CfieldValue* fieldValue825 = new CfieldValue();
fieldValue825->setName("name");
fieldValue825->setValue("r_infraorbitale");
ProtoInstance824->addFieldValue(fieldValue825);

CfieldValue* fieldValue826 = new CfieldValue();
fieldValue826->setName("translation");
fieldValue826->setValue("-0.02370000071823597 1.6171000003814697 0.07519999891519547");
ProtoInstance824->addFieldValue(fieldValue826);

fieldValue817->addChildren(ProtoInstance824);

CProtoInstance* ProtoInstance827 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance827->setName("Site");
ProtoInstance827->setDEF("hanim_l_infraorbitale");
CfieldValue* fieldValue828 = new CfieldValue();
fieldValue828->setName("name");
fieldValue828->setValue("l_infraorbitale");
ProtoInstance827->addFieldValue(fieldValue828);

CfieldValue* fieldValue829 = new CfieldValue();
fieldValue829->setName("translation");
fieldValue829->setValue("0.0340999998152256 1.6171000003814697 0.07519999891519547");
ProtoInstance827->addFieldValue(fieldValue829);

fieldValue817->addChildren(ProtoInstance827);

CProtoInstance* ProtoInstance830 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance830->setName("Site");
ProtoInstance830->setDEF("hanim_supramenton");
CfieldValue* fieldValue831 = new CfieldValue();
fieldValue831->setName("name");
fieldValue831->setValue("supramenton");
ProtoInstance830->addFieldValue(fieldValue831);

CfieldValue* fieldValue832 = new CfieldValue();
fieldValue832->setName("translation");
fieldValue832->setValue("0.006099999882280827 1.5410000085830688 0.08049999922513962");
ProtoInstance830->addFieldValue(fieldValue832);

fieldValue817->addChildren(ProtoInstance830);

CProtoInstance* ProtoInstance833 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance833->setName("Site");
ProtoInstance833->setDEF("hanim_r_tragion");
CfieldValue* fieldValue834 = new CfieldValue();
fieldValue834->setName("name");
fieldValue834->setValue("r_tragion");
ProtoInstance833->addFieldValue(fieldValue834);

CfieldValue* fieldValue835 = new CfieldValue();
fieldValue835->setName("translation");
fieldValue835->setValue("-0.06459999829530716 1.6346999406814575 0.03020000085234642");
ProtoInstance833->addFieldValue(fieldValue835);

fieldValue817->addChildren(ProtoInstance833);

CProtoInstance* ProtoInstance836 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance836->setName("Site");
ProtoInstance836->setDEF("hanim_r_gonion");
CfieldValue* fieldValue837 = new CfieldValue();
fieldValue837->setName("name");
fieldValue837->setValue("r_gonion");
ProtoInstance836->addFieldValue(fieldValue837);

CfieldValue* fieldValue838 = new CfieldValue();
fieldValue838->setName("translation");
fieldValue838->setValue("-0.052000001072883606 1.552899956703186 0.034699998795986176");
ProtoInstance836->addFieldValue(fieldValue838);

fieldValue817->addChildren(ProtoInstance836);

CProtoInstance* ProtoInstance839 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance839->setName("Site");
ProtoInstance839->setDEF("hanim_l_tragion");
CfieldValue* fieldValue840 = new CfieldValue();
fieldValue840->setName("name");
fieldValue840->setValue("l_tragion");
ProtoInstance839->addFieldValue(fieldValue840);

CfieldValue* fieldValue841 = new CfieldValue();
fieldValue841->setName("translation");
fieldValue841->setValue("0.0738999992609024 1.6347999572753906 0.028200000524520874");
ProtoInstance839->addFieldValue(fieldValue841);

fieldValue817->addChildren(ProtoInstance839);

CProtoInstance* ProtoInstance842 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance842->setName("Site");
ProtoInstance842->setDEF("hanim_l_gonion");
CfieldValue* fieldValue843 = new CfieldValue();
fieldValue843->setName("name");
fieldValue843->setValue("l_gonion");
ProtoInstance842->addFieldValue(fieldValue843);

CfieldValue* fieldValue844 = new CfieldValue();
fieldValue844->setName("translation");
fieldValue844->setValue("0.06310000270605087 1.5529999732971191 0.032999999821186066");
ProtoInstance842->addFieldValue(fieldValue844);

fieldValue817->addChildren(ProtoInstance842);

CProtoInstance* ProtoInstance845 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance845->setName("Site");
ProtoInstance845->setDEF("hanim_nuchale");
CfieldValue* fieldValue846 = new CfieldValue();
fieldValue846->setName("name");
fieldValue846->setValue("nuchale");
ProtoInstance845->addFieldValue(fieldValue846);

CfieldValue* fieldValue847 = new CfieldValue();
fieldValue847->setName("translation");
fieldValue847->setValue("0.0038999998942017555 1.5972000360488892 -0.07959999889135361");
ProtoInstance845->addFieldValue(fieldValue847);

fieldValue817->addChildren(ProtoInstance845);

CProtoInstance* ProtoInstance848 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance848->setName("Site");
ProtoInstance848->setDEF("hanim_r_clavicale");
CfieldValue* fieldValue849 = new CfieldValue();
fieldValue849->setName("name");
fieldValue849->setValue("r_clavicale");
ProtoInstance848->addFieldValue(fieldValue849);

CfieldValue* fieldValue850 = new CfieldValue();
fieldValue850->setName("translation");
fieldValue850->setValue("-0.011500000022351742 1.4943000078201294 0.03999999910593033");
ProtoInstance848->addFieldValue(fieldValue850);

fieldValue817->addChildren(ProtoInstance848);

CProtoInstance* ProtoInstance851 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance851->setName("Site");
ProtoInstance851->setDEF("hanim_suprasternale");
CfieldValue* fieldValue852 = new CfieldValue();
fieldValue852->setName("name");
fieldValue852->setValue("suprasternale");
ProtoInstance851->addFieldValue(fieldValue852);

CfieldValue* fieldValue853 = new CfieldValue();
fieldValue853->setName("translation");
fieldValue853->setValue("0.00839999970048666 1.4714000225067139 0.05510000139474869");
ProtoInstance851->addFieldValue(fieldValue853);

fieldValue817->addChildren(ProtoInstance851);

CProtoInstance* ProtoInstance854 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance854->setName("Site");
ProtoInstance854->setDEF("hanim_l_clavicale");
CfieldValue* fieldValue855 = new CfieldValue();
fieldValue855->setName("name");
fieldValue855->setValue("l_clavicale");
ProtoInstance854->addFieldValue(fieldValue855);

CfieldValue* fieldValue856 = new CfieldValue();
fieldValue856->setName("translation");
fieldValue856->setValue("0.02710000053048134 1.4943000078201294 0.039400000125169754");
ProtoInstance854->addFieldValue(fieldValue856);

fieldValue817->addChildren(ProtoInstance854);

CProtoInstance* ProtoInstance857 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance857->setName("Site");
ProtoInstance857->setDEF("hanim_r_thelion");
CfieldValue* fieldValue858 = new CfieldValue();
fieldValue858->setName("name");
fieldValue858->setValue("r_thelion");
ProtoInstance857->addFieldValue(fieldValue858);

CfieldValue* fieldValue859 = new CfieldValue();
fieldValue859->setName("translation");
fieldValue859->setValue("-0.07360000163316727 1.3385000228881836 0.1216999962925911");
ProtoInstance857->addFieldValue(fieldValue859);

fieldValue817->addChildren(ProtoInstance857);

CProtoInstance* ProtoInstance860 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance860->setName("Site");
ProtoInstance860->setDEF("hanim_l_thelion");
CfieldValue* fieldValue861 = new CfieldValue();
fieldValue861->setName("name");
fieldValue861->setValue("l_thelion");
ProtoInstance860->addFieldValue(fieldValue861);

CfieldValue* fieldValue862 = new CfieldValue();
fieldValue862->setName("translation");
fieldValue862->setValue("0.09179999679327011 1.3381999731063843 0.11919999867677689");
ProtoInstance860->addFieldValue(fieldValue862);

fieldValue817->addChildren(ProtoInstance860);

CProtoInstance* ProtoInstance863 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance863->setName("Site");
ProtoInstance863->setDEF("hanim_substernale");
CfieldValue* fieldValue864 = new CfieldValue();
fieldValue864->setName("name");
fieldValue864->setValue("substernale");
ProtoInstance863->addFieldValue(fieldValue864);

CfieldValue* fieldValue865 = new CfieldValue();
fieldValue865->setName("translation");
fieldValue865->setValue("0.008500000461935997 1.2994999885559082 0.11469999700784683");
ProtoInstance863->addFieldValue(fieldValue865);

fieldValue817->addChildren(ProtoInstance863);

CProtoInstance* ProtoInstance866 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance866->setName("Site");
ProtoInstance866->setDEF("hanim_r_rib10");
CfieldValue* fieldValue867 = new CfieldValue();
fieldValue867->setName("name");
fieldValue867->setValue("r_rib10");
ProtoInstance866->addFieldValue(fieldValue867);

CfieldValue* fieldValue868 = new CfieldValue();
fieldValue868->setName("translation");
fieldValue868->setValue("-0.07109999656677246 1.194100022315979 0.10159999877214432");
ProtoInstance866->addFieldValue(fieldValue868);

fieldValue817->addChildren(ProtoInstance866);

CProtoInstance* ProtoInstance869 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance869->setName("Site");
ProtoInstance869->setDEF("hanim_r_asis");
CfieldValue* fieldValue870 = new CfieldValue();
fieldValue870->setName("name");
fieldValue870->setValue("r_asis");
ProtoInstance869->addFieldValue(fieldValue870);

CfieldValue* fieldValue871 = new CfieldValue();
fieldValue871->setName("translation");
fieldValue871->setValue("-0.08869999647140503 1.0020999908447266 0.1111999973654747");
ProtoInstance869->addFieldValue(fieldValue871);

fieldValue817->addChildren(ProtoInstance869);

CProtoInstance* ProtoInstance872 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance872->setName("Site");
ProtoInstance872->setDEF("hanim_l_rib10");
CfieldValue* fieldValue873 = new CfieldValue();
fieldValue873->setName("name");
fieldValue873->setValue("l_rib10");
ProtoInstance872->addFieldValue(fieldValue873);

CfieldValue* fieldValue874 = new CfieldValue();
fieldValue874->setName("translation");
fieldValue874->setValue("0.08709999918937683 1.1924999952316284 0.09920000284910202");
ProtoInstance872->addFieldValue(fieldValue874);

fieldValue817->addChildren(ProtoInstance872);

CProtoInstance* ProtoInstance875 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance875->setName("Site");
ProtoInstance875->setDEF("hanim_l_asis");
CfieldValue* fieldValue876 = new CfieldValue();
fieldValue876->setName("name");
fieldValue876->setValue("l_asis");
ProtoInstance875->addFieldValue(fieldValue876);

CfieldValue* fieldValue877 = new CfieldValue();
fieldValue877->setName("translation");
fieldValue877->setValue("0.0925000011920929 0.9983000159263611 0.10520000010728836");
ProtoInstance875->addFieldValue(fieldValue877);

fieldValue817->addChildren(ProtoInstance875);

CProtoInstance* ProtoInstance878 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance878->setName("Site");
ProtoInstance878->setDEF("hanim_r_iliocristale");
CfieldValue* fieldValue879 = new CfieldValue();
fieldValue879->setName("name");
fieldValue879->setValue("r_iliocristale");
ProtoInstance878->addFieldValue(fieldValue879);

CfieldValue* fieldValue880 = new CfieldValue();
fieldValue880->setName("translation");
fieldValue880->setValue("-0.1525000035762787 1.0628000497817993 0.0035000001080334187");
ProtoInstance878->addFieldValue(fieldValue880);

fieldValue817->addChildren(ProtoInstance878);

CProtoInstance* ProtoInstance881 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance881->setName("Site");
ProtoInstance881->setDEF("hanim_r_trochanterion");
CfieldValue* fieldValue882 = new CfieldValue();
fieldValue882->setName("name");
fieldValue882->setValue("r_trochanterion");
ProtoInstance881->addFieldValue(fieldValue882);

CfieldValue* fieldValue883 = new CfieldValue();
fieldValue883->setName("translation");
fieldValue883->setValue("-0.1688999980688095 0.8418999910354614 0.03519999980926514");
ProtoInstance881->addFieldValue(fieldValue883);

fieldValue817->addChildren(ProtoInstance881);

CProtoInstance* ProtoInstance884 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance884->setName("Site");
ProtoInstance884->setDEF("hanim_l_iliocristale");
CfieldValue* fieldValue885 = new CfieldValue();
fieldValue885->setName("name");
fieldValue885->setValue("l_iliocristale");
ProtoInstance884->addFieldValue(fieldValue885);

CfieldValue* fieldValue886 = new CfieldValue();
fieldValue886->setName("translation");
fieldValue886->setValue("0.16120000183582306 1.0536999702453613 0.0007999999797903001");
ProtoInstance884->addFieldValue(fieldValue886);

fieldValue817->addChildren(ProtoInstance884);

CProtoInstance* ProtoInstance887 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance887->setName("Site");
ProtoInstance887->setDEF("hanim_l_trochanterion");
CfieldValue* fieldValue888 = new CfieldValue();
fieldValue888->setName("name");
fieldValue888->setValue("l_trochanterion");
ProtoInstance887->addFieldValue(fieldValue888);

CfieldValue* fieldValue889 = new CfieldValue();
fieldValue889->setName("translation");
fieldValue889->setValue("0.16769999265670776 0.8335999846458435 0.030300000682473183");
ProtoInstance887->addFieldValue(fieldValue889);

fieldValue817->addChildren(ProtoInstance887);

CProtoInstance* ProtoInstance890 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance890->setName("Site");
ProtoInstance890->setDEF("hanim_cervicale");
CfieldValue* fieldValue891 = new CfieldValue();
fieldValue891->setName("name");
fieldValue891->setValue("cervicale");
ProtoInstance890->addFieldValue(fieldValue891);

CfieldValue* fieldValue892 = new CfieldValue();
fieldValue892->setName("translation");
fieldValue892->setValue("0.006399999838322401 1.5199999809265137 -0.08150000125169754");
ProtoInstance890->addFieldValue(fieldValue892);

fieldValue817->addChildren(ProtoInstance890);

CProtoInstance* ProtoInstance893 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance893->setName("Site");
ProtoInstance893->setDEF("hanim_spine_2_lower_back");
CfieldValue* fieldValue894 = new CfieldValue();
fieldValue894->setName("name");
fieldValue894->setValue("spine_2_lower_back");
ProtoInstance893->addFieldValue(fieldValue894);

CfieldValue* fieldValue895 = new CfieldValue();
fieldValue895->setName("translation");
fieldValue895->setValue("0.004900000058114529 1.1907999515533447 -0.11129999905824661");
ProtoInstance893->addFieldValue(fieldValue895);

fieldValue817->addChildren(ProtoInstance893);

CProtoInstance* ProtoInstance896 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance896->setName("Site");
ProtoInstance896->setDEF("hanim_r_psis");
CfieldValue* fieldValue897 = new CfieldValue();
fieldValue897->setName("name");
fieldValue897->setValue("r_psis");
ProtoInstance896->addFieldValue(fieldValue897);

CfieldValue* fieldValue898 = new CfieldValue();
fieldValue898->setName("translation");
fieldValue898->setValue("-0.07159999758005142 1.0190000534057617 -0.11379999667406082");
ProtoInstance896->addFieldValue(fieldValue898);

fieldValue817->addChildren(ProtoInstance896);

CProtoInstance* ProtoInstance899 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance899->setName("Site");
ProtoInstance899->setDEF("hanim_l_psis");
CfieldValue* fieldValue900 = new CfieldValue();
fieldValue900->setName("name");
fieldValue900->setValue("l_psis");
ProtoInstance899->addFieldValue(fieldValue900);

CfieldValue* fieldValue901 = new CfieldValue();
fieldValue901->setName("translation");
fieldValue901->setValue("0.07739999890327454 1.0190000534057617 -0.11509999632835388");
ProtoInstance899->addFieldValue(fieldValue901);

fieldValue817->addChildren(ProtoInstance899);

CProtoInstance* ProtoInstance902 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance902->setName("Site");
ProtoInstance902->setDEF("hanim_waist_preferred_posterior");
CfieldValue* fieldValue903 = new CfieldValue();
fieldValue903->setName("name");
fieldValue903->setValue("waist_preferred_posterior");
ProtoInstance902->addFieldValue(fieldValue903);

CfieldValue* fieldValue904 = new CfieldValue();
fieldValue904->setName("translation");
fieldValue904->setValue("0.28999999165534973 1.0915000438690186 -0.10909999907016754");
ProtoInstance902->addFieldValue(fieldValue904);

fieldValue817->addChildren(ProtoInstance902);

CProtoInstance* ProtoInstance905 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance905->setName("Site");
ProtoInstance905->setDEF("hanim_r_acromion");
CfieldValue* fieldValue906 = new CfieldValue();
fieldValue906->setName("name");
fieldValue906->setValue("r_acromion");
ProtoInstance905->addFieldValue(fieldValue906);

CfieldValue* fieldValue907 = new CfieldValue();
fieldValue907->setName("translation");
fieldValue907->setValue("-0.19050000607967377 1.479099988937378 -0.04309999942779541");
ProtoInstance905->addFieldValue(fieldValue907);

fieldValue817->addChildren(ProtoInstance905);

CProtoInstance* ProtoInstance908 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance908->setName("Site");
ProtoInstance908->setDEF("hanim_r_axilla_proximal");
CfieldValue* fieldValue909 = new CfieldValue();
fieldValue909->setName("name");
fieldValue909->setValue("r_axilla_proximal");
ProtoInstance908->addFieldValue(fieldValue909);

CfieldValue* fieldValue910 = new CfieldValue();
fieldValue910->setName("translation");
fieldValue910->setValue("-0.16259999573230743 1.4071999788284302 -0.003100000089034438");
ProtoInstance908->addFieldValue(fieldValue910);

fieldValue817->addChildren(ProtoInstance908);

CProtoInstance* ProtoInstance911 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance911->setName("Site");
ProtoInstance911->setDEF("hanim_r_radial_styloid");
CfieldValue* fieldValue912 = new CfieldValue();
fieldValue912->setName("name");
fieldValue912->setValue("r_radial_styloid");
ProtoInstance911->addFieldValue(fieldValue912);

CfieldValue* fieldValue913 = new CfieldValue();
fieldValue913->setName("translation");
fieldValue913->setValue("-0.188400000333786 0.8676000237464905 -0.035999998450279236");
ProtoInstance911->addFieldValue(fieldValue913);

fieldValue817->addChildren(ProtoInstance911);

CProtoInstance* ProtoInstance914 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance914->setName("Site");
ProtoInstance914->setDEF("hanim_r_axilla_distal");
CfieldValue* fieldValue915 = new CfieldValue();
fieldValue915->setName("name");
fieldValue915->setValue("r_axilla_distal");
ProtoInstance914->addFieldValue(fieldValue915);

CfieldValue* fieldValue916 = new CfieldValue();
fieldValue916->setName("translation");
fieldValue916->setValue("-0.16030000150203705 1.4098000526428223 -0.08259999752044678");
ProtoInstance914->addFieldValue(fieldValue916);

fieldValue817->addChildren(ProtoInstance914);

CProtoInstance* ProtoInstance917 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance917->setName("Site");
ProtoInstance917->setDEF("hanim_r_olecranon");
CfieldValue* fieldValue918 = new CfieldValue();
fieldValue918->setName("name");
fieldValue918->setValue("r_olecranon");
ProtoInstance917->addFieldValue(fieldValue918);

CfieldValue* fieldValue919 = new CfieldValue();
fieldValue919->setName("translation");
fieldValue919->setValue("-0.1906999945640564 1.1404999494552612 -0.10649999976158142");
ProtoInstance917->addFieldValue(fieldValue919);

fieldValue817->addChildren(ProtoInstance917);

CProtoInstance* ProtoInstance920 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance920->setName("Site");
ProtoInstance920->setDEF("hanim_r_humeral_lateral_epicondyles");
CfieldValue* fieldValue921 = new CfieldValue();
fieldValue921->setName("name");
fieldValue921->setValue("r_humeral_lateral_epicondyles");
ProtoInstance920->addFieldValue(fieldValue921);

CfieldValue* fieldValue922 = new CfieldValue();
fieldValue922->setName("translation");
fieldValue922->setValue("-0.2223999947309494 1.1517000198364258 -0.10329999774694443");
ProtoInstance920->addFieldValue(fieldValue922);

fieldValue817->addChildren(ProtoInstance920);

CProtoInstance* ProtoInstance923 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance923->setName("Site");
ProtoInstance923->setDEF("hanim_r_humeral_medial_epicondyles");
CfieldValue* fieldValue924 = new CfieldValue();
fieldValue924->setName("name");
fieldValue924->setValue("r_humeral_medial_epicondyles");
ProtoInstance923->addFieldValue(fieldValue924);

CfieldValue* fieldValue925 = new CfieldValue();
fieldValue925->setName("translation");
fieldValue925->setValue("-0.1679999977350235 1.1297999620437622 -0.10620000213384628");
ProtoInstance923->addFieldValue(fieldValue925);

fieldValue817->addChildren(ProtoInstance923);

CProtoInstance* ProtoInstance926 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance926->setName("Site");
ProtoInstance926->setDEF("hanim_r_radiale");
CfieldValue* fieldValue927 = new CfieldValue();
fieldValue927->setName("name");
fieldValue927->setValue("r_radiale");
ProtoInstance926->addFieldValue(fieldValue927);

CfieldValue* fieldValue928 = new CfieldValue();
fieldValue928->setName("translation");
fieldValue928->setValue("-0.21299999952316284 1.1304999589920044 -0.10909999907016754");
ProtoInstance926->addFieldValue(fieldValue928);

fieldValue817->addChildren(ProtoInstance926);

CProtoInstance* ProtoInstance929 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance929->setName("Site");
ProtoInstance929->setDEF("hanim_r_metacarpal_phalanx_2");
CfieldValue* fieldValue930 = new CfieldValue();
fieldValue930->setName("name");
fieldValue930->setValue("r_metacarpal_phalanx_2");
ProtoInstance929->addFieldValue(fieldValue930);

CfieldValue* fieldValue931 = new CfieldValue();
fieldValue931->setName("translation");
fieldValue931->setValue("-0.19769999384880066 0.8169000148773193 -0.01769999973475933");
ProtoInstance929->addFieldValue(fieldValue931);

fieldValue817->addChildren(ProtoInstance929);

CProtoInstance* ProtoInstance932 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance932->setName("Site");
ProtoInstance932->setDEF("hanim_r_dactylion");
CfieldValue* fieldValue933 = new CfieldValue();
fieldValue933->setName("name");
fieldValue933->setValue("r_dactylion");
ProtoInstance932->addFieldValue(fieldValue933);

CfieldValue* fieldValue934 = new CfieldValue();
fieldValue934->setName("translation");
fieldValue934->setValue("-0.1941000074148178 0.6772000193595886 -0.04230000078678131");
ProtoInstance932->addFieldValue(fieldValue934);

fieldValue817->addChildren(ProtoInstance932);

CProtoInstance* ProtoInstance935 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance935->setName("Site");
ProtoInstance935->setDEF("hanim_r_ulnar_styloid");
CfieldValue* fieldValue936 = new CfieldValue();
fieldValue936->setName("name");
fieldValue936->setValue("r_ulnar_styloid");
ProtoInstance935->addFieldValue(fieldValue936);

CfieldValue* fieldValue937 = new CfieldValue();
fieldValue937->setName("translation");
fieldValue937->setValue("-0.21170000731945038 0.8561999797821045 -0.058400001376867294");
ProtoInstance935->addFieldValue(fieldValue937);

fieldValue817->addChildren(ProtoInstance935);

CProtoInstance* ProtoInstance938 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance938->setName("Site");
ProtoInstance938->setDEF("hanim_r_metacarpal_phalanx_5");
CfieldValue* fieldValue939 = new CfieldValue();
fieldValue939->setName("name");
fieldValue939->setValue("r_metacarpal_phalanx_5");
ProtoInstance938->addFieldValue(fieldValue939);

CfieldValue* fieldValue940 = new CfieldValue();
fieldValue940->setName("translation");
fieldValue940->setValue("-0.19290000200271606 0.7889999747276306 -0.10639999806880951");
ProtoInstance938->addFieldValue(fieldValue940);

fieldValue817->addChildren(ProtoInstance938);

CProtoInstance* ProtoInstance941 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance941->setName("Site");
ProtoInstance941->setDEF("hanim_l_acromion");
CfieldValue* fieldValue942 = new CfieldValue();
fieldValue942->setName("name");
fieldValue942->setValue("l_acromion");
ProtoInstance941->addFieldValue(fieldValue942);

CfieldValue* fieldValue943 = new CfieldValue();
fieldValue943->setName("translation");
fieldValue943->setValue("0.20319999754428864 1.4759999513626099 -0.04899999871850014");
ProtoInstance941->addFieldValue(fieldValue943);

fieldValue817->addChildren(ProtoInstance941);

CProtoInstance* ProtoInstance944 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance944->setName("Site");
ProtoInstance944->setDEF("hanim_l_axilla_proximal");
CfieldValue* fieldValue945 = new CfieldValue();
fieldValue945->setName("name");
fieldValue945->setValue("l_axilla_proximal");
ProtoInstance944->addFieldValue(fieldValue945);

CfieldValue* fieldValue946 = new CfieldValue();
fieldValue946->setName("translation");
fieldValue946->setValue("0.1776999980211258 1.406499981880188 -0.007499999832361937");
ProtoInstance944->addFieldValue(fieldValue946);

fieldValue817->addChildren(ProtoInstance944);

CProtoInstance* ProtoInstance947 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance947->setName("Site");
ProtoInstance947->setDEF("hanim_l_radial_styloid");
CfieldValue* fieldValue948 = new CfieldValue();
fieldValue948->setName("name");
fieldValue948->setValue("l_radial_styloid");
ProtoInstance947->addFieldValue(fieldValue948);

CfieldValue* fieldValue949 = new CfieldValue();
fieldValue949->setName("translation");
fieldValue949->setValue("0.19009999930858612 0.8644999861717224 -0.04149999842047691");
ProtoInstance947->addFieldValue(fieldValue949);

fieldValue817->addChildren(ProtoInstance947);

CProtoInstance* ProtoInstance950 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance950->setName("Site");
ProtoInstance950->setDEF("hanim_l_axilla_distal");
CfieldValue* fieldValue951 = new CfieldValue();
fieldValue951->setName("name");
fieldValue951->setValue("l_axilla_distal");
ProtoInstance950->addFieldValue(fieldValue951);

CfieldValue* fieldValue952 = new CfieldValue();
fieldValue952->setName("translation");
fieldValue952->setValue("0.17059999704360962 1.4071999788284302 -0.08749999850988388");
ProtoInstance950->addFieldValue(fieldValue952);

fieldValue817->addChildren(ProtoInstance950);

CProtoInstance* ProtoInstance953 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance953->setName("Site");
ProtoInstance953->setDEF("hanim_l_olecranon");
CfieldValue* fieldValue954 = new CfieldValue();
fieldValue954->setName("name");
fieldValue954->setValue("l_olecranon");
ProtoInstance953->addFieldValue(fieldValue954);

CfieldValue* fieldValue955 = new CfieldValue();
fieldValue955->setName("translation");
fieldValue955->setValue("-0.19619999825954437 1.1375000476837158 -0.11230000108480453");
ProtoInstance953->addFieldValue(fieldValue955);

fieldValue817->addChildren(ProtoInstance953);

CProtoInstance* ProtoInstance956 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance956->setName("Site");
ProtoInstance956->setDEF("hanim_l_humeral_lateral_epicondyles");
CfieldValue* fieldValue957 = new CfieldValue();
fieldValue957->setName("name");
fieldValue957->setValue("l_humeral_lateral_epicondyles");
ProtoInstance956->addFieldValue(fieldValue957);

CfieldValue* fieldValue958 = new CfieldValue();
fieldValue958->setName("translation");
fieldValue958->setValue("0.2280000001192093 1.1482000350952148 -0.10999999940395355");
ProtoInstance956->addFieldValue(fieldValue958);

fieldValue817->addChildren(ProtoInstance956);

CProtoInstance* ProtoInstance959 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance959->setName("Site");
ProtoInstance959->setDEF("hanim_l_humeral_medial_epicondyles");
CfieldValue* fieldValue960 = new CfieldValue();
fieldValue960->setName("name");
fieldValue960->setValue("l_humeral_medial_epicondyles");
ProtoInstance959->addFieldValue(fieldValue960);

CfieldValue* fieldValue961 = new CfieldValue();
fieldValue961->setName("translation");
fieldValue961->setValue("0.17350000143051147 1.1272000074386597 -0.11129999905824661");
ProtoInstance959->addFieldValue(fieldValue961);

fieldValue817->addChildren(ProtoInstance959);

CProtoInstance* ProtoInstance962 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance962->setName("Site");
ProtoInstance962->setDEF("hanim_l_radiale");
CfieldValue* fieldValue963 = new CfieldValue();
fieldValue963->setName("name");
fieldValue963->setValue("l_radiale");
ProtoInstance962->addFieldValue(fieldValue963);

CfieldValue* fieldValue964 = new CfieldValue();
fieldValue964->setName("translation");
fieldValue964->setValue("0.21819999814033508 1.1211999654769897 -0.11670000106096268");
ProtoInstance962->addFieldValue(fieldValue964);

fieldValue817->addChildren(ProtoInstance962);

CProtoInstance* ProtoInstance965 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance965->setName("Site");
ProtoInstance965->setDEF("hanim_l_metacarpal_phalanx_2");
CfieldValue* fieldValue966 = new CfieldValue();
fieldValue966->setName("name");
fieldValue966->setValue("l_metacarpal_phalanx_2");
ProtoInstance965->addFieldValue(fieldValue966);

CfieldValue* fieldValue967 = new CfieldValue();
fieldValue967->setName("translation");
fieldValue967->setValue("0.20090000331401825 0.8138999938964844 -0.02370000071823597");
ProtoInstance965->addFieldValue(fieldValue967);

fieldValue817->addChildren(ProtoInstance965);

CProtoInstance* ProtoInstance968 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance968->setName("Site");
ProtoInstance968->setDEF("hanim_l_dactylion");
CfieldValue* fieldValue969 = new CfieldValue();
fieldValue969->setName("name");
fieldValue969->setValue("l_dactylion");
ProtoInstance968->addFieldValue(fieldValue969);

CfieldValue* fieldValue970 = new CfieldValue();
fieldValue970->setName("translation");
fieldValue970->setValue("0.20559999346733093 0.6743000149726868 -0.04820000007748604");
ProtoInstance968->addFieldValue(fieldValue970);

fieldValue817->addChildren(ProtoInstance968);

CProtoInstance* ProtoInstance971 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance971->setName("Site");
ProtoInstance971->setDEF("hanim_l_ulnar_styloid");
CfieldValue* fieldValue972 = new CfieldValue();
fieldValue972->setName("name");
fieldValue972->setValue("l_ulnar_styloid");
ProtoInstance971->addFieldValue(fieldValue972);

CfieldValue* fieldValue973 = new CfieldValue();
fieldValue973->setName("translation");
fieldValue973->setValue("-0.2142000049352646 0.8529000282287598 -0.06480000168085098");
ProtoInstance971->addFieldValue(fieldValue973);

fieldValue817->addChildren(ProtoInstance971);

CProtoInstance* ProtoInstance974 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance974->setName("Site");
ProtoInstance974->setDEF("hanim_l_metacarpal_phalanx_5");
CfieldValue* fieldValue975 = new CfieldValue();
fieldValue975->setName("name");
fieldValue975->setValue("l_metacarpal_phalanx_5");
ProtoInstance974->addFieldValue(fieldValue975);

CfieldValue* fieldValue976 = new CfieldValue();
fieldValue976->setName("translation");
fieldValue976->setValue("0.19290000200271606 0.7860000133514404 -0.11219999939203262");
ProtoInstance974->addFieldValue(fieldValue976);

fieldValue817->addChildren(ProtoInstance974);

CProtoInstance* ProtoInstance977 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance977->setName("Site");
ProtoInstance977->setDEF("hanim_r_knee_crease");
CfieldValue* fieldValue978 = new CfieldValue();
fieldValue978->setName("name");
fieldValue978->setValue("r_knee_crease");
ProtoInstance977->addFieldValue(fieldValue978);

CfieldValue* fieldValue979 = new CfieldValue();
fieldValue979->setName("translation");
fieldValue979->setValue("-0.08250000327825546 0.49320000410079956 -0.032600000500679016");
ProtoInstance977->addFieldValue(fieldValue979);

fieldValue817->addChildren(ProtoInstance977);

CProtoInstance* ProtoInstance980 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance980->setName("Site");
ProtoInstance980->setDEF("hanim_r_femoral_lateral_epicondyles");
CfieldValue* fieldValue981 = new CfieldValue();
fieldValue981->setName("name");
fieldValue981->setValue("r_femoral_lateral_epicondyles");
ProtoInstance980->addFieldValue(fieldValue981);

CfieldValue* fieldValue982 = new CfieldValue();
fieldValue982->setName("translation");
fieldValue982->setValue("-0.1421000063419342 0.4991999864578247 0.03099999949336052");
ProtoInstance980->addFieldValue(fieldValue982);

fieldValue817->addChildren(ProtoInstance980);

CProtoInstance* ProtoInstance983 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance983->setName("Site");
ProtoInstance983->setDEF("hanim_r_femoral_medial_epicondyles");
CfieldValue* fieldValue984 = new CfieldValue();
fieldValue984->setName("name");
fieldValue984->setValue("r_femoral_lateral_epicondyles");
ProtoInstance983->addFieldValue(fieldValue984);

CfieldValue* fieldValue985 = new CfieldValue();
fieldValue985->setName("translation");
fieldValue985->setValue("-0.022099999710917473 0.5013999938964844 0.02889999933540821");
ProtoInstance983->addFieldValue(fieldValue985);

fieldValue817->addChildren(ProtoInstance983);

CProtoInstance* ProtoInstance986 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance986->setName("Site");
ProtoInstance986->setDEF("hanim_r_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue987 = new CfieldValue();
fieldValue987->setName("name");
fieldValue987->setValue("r_tarsal_interphalangeal_phalanx_5");
ProtoInstance986->addFieldValue(fieldValue987);

CfieldValue* fieldValue988 = new CfieldValue();
fieldValue988->setName("translation");
fieldValue988->setValue("-0.15230000019073486 0.016599999740719795 0.08950000256299973");
ProtoInstance986->addFieldValue(fieldValue988);

fieldValue817->addChildren(ProtoInstance986);

CProtoInstance* ProtoInstance989 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance989->setName("Site");
ProtoInstance989->setDEF("hanim_r_lateral_malleolus");
CfieldValue* fieldValue990 = new CfieldValue();
fieldValue990->setName("name");
fieldValue990->setValue("r_lateral_malleolus");
ProtoInstance989->addFieldValue(fieldValue990);

CfieldValue* fieldValue991 = new CfieldValue();
fieldValue991->setName("translation");
fieldValue991->setValue("-0.1005999967455864 0.0658000037074089 -0.10750000178813934");
ProtoInstance989->addFieldValue(fieldValue991);

fieldValue817->addChildren(ProtoInstance989);

CProtoInstance* ProtoInstance992 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance992->setName("Site");
ProtoInstance992->setDEF("hanim_r_medial_malleolus");
CfieldValue* fieldValue993 = new CfieldValue();
fieldValue993->setName("name");
fieldValue993->setValue("r_medial_malleolus");
ProtoInstance992->addFieldValue(fieldValue993);

CfieldValue* fieldValue994 = new CfieldValue();
fieldValue994->setName("translation");
fieldValue994->setValue("-0.05909999832510948 0.07599999755620956 -0.09279999881982803");
ProtoInstance992->addFieldValue(fieldValue994);

fieldValue817->addChildren(ProtoInstance992);

CProtoInstance* ProtoInstance995 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance995->setName("Site");
ProtoInstance995->setDEF("hanim_r_sphyrion");
CfieldValue* fieldValue996 = new CfieldValue();
fieldValue996->setName("name");
fieldValue996->setValue("r_sphyrion");
ProtoInstance995->addFieldValue(fieldValue996);

CfieldValue* fieldValue997 = new CfieldValue();
fieldValue997->setName("translation");
fieldValue997->setValue("-0.06030000001192093 0.061000000685453415 -0.10019999742507935");
ProtoInstance995->addFieldValue(fieldValue997);

fieldValue817->addChildren(ProtoInstance995);

CProtoInstance* ProtoInstance998 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance998->setName("Site");
ProtoInstance998->setDEF("hanim_r_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue999 = new CfieldValue();
fieldValue999->setName("name");
fieldValue999->setValue("r_tarsal_interphalangeal_phalanx_1");
ProtoInstance998->addFieldValue(fieldValue999);

CfieldValue* fieldValue1000 = new CfieldValue();
fieldValue1000->setName("translation");
fieldValue1000->setValue("-0.05209999904036522 0.026000000536441803 0.01269999984651804");
ProtoInstance998->addFieldValue(fieldValue1000);

fieldValue817->addChildren(ProtoInstance998);

CProtoInstance* ProtoInstance1001 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1001->setName("Site");
ProtoInstance1001->setDEF("hanim_r_calcaneus_posterior");
CfieldValue* fieldValue1002 = new CfieldValue();
fieldValue1002->setName("name");
fieldValue1002->setValue("r_calcaneus_posterior");
ProtoInstance1001->addFieldValue(fieldValue1002);

CfieldValue* fieldValue1003 = new CfieldValue();
fieldValue1003->setName("translation");
fieldValue1003->setValue("-0.06920000165700912 0.02969999983906746 -0.12210000306367874");
ProtoInstance1001->addFieldValue(fieldValue1003);

fieldValue817->addChildren(ProtoInstance1001);

CProtoInstance* ProtoInstance1004 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1004->setName("Site");
ProtoInstance1004->setDEF("hanim_r_tarsal_distal_phalanx_2");
CfieldValue* fieldValue1005 = new CfieldValue();
fieldValue1005->setName("name");
fieldValue1005->setValue("r_tarsal_distal_phalanx_2");
ProtoInstance1004->addFieldValue(fieldValue1005);

CfieldValue* fieldValue1006 = new CfieldValue();
fieldValue1006->setName("translation");
fieldValue1006->setValue("-0.08829999715089798 0.013399999588727951 0.13830000162124634");
ProtoInstance1004->addFieldValue(fieldValue1006);

fieldValue817->addChildren(ProtoInstance1004);

CProtoInstance* ProtoInstance1007 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1007->setName("Site");
ProtoInstance1007->setDEF("hanim_l_knee_crease");
CfieldValue* fieldValue1008 = new CfieldValue();
fieldValue1008->setName("name");
fieldValue1008->setValue("l_knee_crease");
ProtoInstance1007->addFieldValue(fieldValue1008);

CfieldValue* fieldValue1009 = new CfieldValue();
fieldValue1009->setName("translation");
fieldValue1009->setValue("0.09929999709129333 0.48809999227523804 -0.030899999663233757");
ProtoInstance1007->addFieldValue(fieldValue1009);

fieldValue817->addChildren(ProtoInstance1007);

CProtoInstance* ProtoInstance1010 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1010->setName("Site");
ProtoInstance1010->setDEF("hanim_l_femoral_lateral_epicondyles");
CfieldValue* fieldValue1011 = new CfieldValue();
fieldValue1011->setName("name");
fieldValue1011->setValue("l_femoral_lateral_epicondyles");
ProtoInstance1010->addFieldValue(fieldValue1011);

CfieldValue* fieldValue1012 = new CfieldValue();
fieldValue1012->setName("translation");
fieldValue1012->setValue("0.1597999930381775 0.4966999888420105 0.02969999983906746");
ProtoInstance1010->addFieldValue(fieldValue1012);

fieldValue817->addChildren(ProtoInstance1010);

CProtoInstance* ProtoInstance1013 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1013->setName("Site");
ProtoInstance1013->setDEF("hanim_l_femoral_medial_epicondyles");
CfieldValue* fieldValue1014 = new CfieldValue();
fieldValue1014->setName("name");
fieldValue1014->setValue("l_femoral_lateral_epicondyles");
ProtoInstance1013->addFieldValue(fieldValue1014);

CfieldValue* fieldValue1015 = new CfieldValue();
fieldValue1015->setName("translation");
fieldValue1015->setValue("0.039799999445676804 0.49459999799728394 0.030300000682473183");
ProtoInstance1013->addFieldValue(fieldValue1015);

fieldValue817->addChildren(ProtoInstance1013);

CProtoInstance* ProtoInstance1016 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1016->setName("Site");
ProtoInstance1016->setDEF("hanim_l_tarsal_interphalangeal_phalanx_5");
CfieldValue* fieldValue1017 = new CfieldValue();
fieldValue1017->setName("name");
fieldValue1017->setValue("l_tarsal_interphalangeal_phalanx_5");
ProtoInstance1016->addFieldValue(fieldValue1017);

CfieldValue* fieldValue1018 = new CfieldValue();
fieldValue1018->setName("translation");
fieldValue1018->setValue("0.18250000476837158 0.007000000216066837 0.09279999881982803");
ProtoInstance1016->addFieldValue(fieldValue1018);

fieldValue817->addChildren(ProtoInstance1016);

CProtoInstance* ProtoInstance1019 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1019->setName("Site");
ProtoInstance1019->setDEF("hanim_l_lateral_malleolus");
CfieldValue* fieldValue1020 = new CfieldValue();
fieldValue1020->setName("name");
fieldValue1020->setValue("l_lateral_malleolus");
ProtoInstance1019->addFieldValue(fieldValue1020);

CfieldValue* fieldValue1021 = new CfieldValue();
fieldValue1021->setName("translation");
fieldValue1021->setValue("0.13079999387264252 0.059700001031160355 -0.10320000350475311");
ProtoInstance1019->addFieldValue(fieldValue1021);

fieldValue817->addChildren(ProtoInstance1019);

CProtoInstance* ProtoInstance1022 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1022->setName("Site");
ProtoInstance1022->setDEF("hanim_l_medial_malleolus");
CfieldValue* fieldValue1023 = new CfieldValue();
fieldValue1023->setName("name");
fieldValue1023->setValue("l_medial_malleolus");
ProtoInstance1022->addFieldValue(fieldValue1023);

CfieldValue* fieldValue1024 = new CfieldValue();
fieldValue1024->setName("translation");
fieldValue1024->setValue("0.08900000154972076 0.07159999758005142 -0.08810000121593475");
ProtoInstance1022->addFieldValue(fieldValue1024);

fieldValue817->addChildren(ProtoInstance1022);

CProtoInstance* ProtoInstance1025 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1025->setName("Site");
ProtoInstance1025->setDEF("hanim_l_sphyrion");
CfieldValue* fieldValue1026 = new CfieldValue();
fieldValue1026->setName("name");
fieldValue1026->setValue("l_sphyrion");
ProtoInstance1025->addFieldValue(fieldValue1026);

CfieldValue* fieldValue1027 = new CfieldValue();
fieldValue1027->setName("translation");
fieldValue1027->setValue("0.08900000154972076 0.057500001043081284 -0.09430000185966492");
ProtoInstance1025->addFieldValue(fieldValue1027);

fieldValue817->addChildren(ProtoInstance1025);

CProtoInstance* ProtoInstance1028 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1028->setName("Site");
ProtoInstance1028->setDEF("hanim_l_tarsal_interphalangeal_phalanx_1");
CfieldValue* fieldValue1029 = new CfieldValue();
fieldValue1029->setName("name");
fieldValue1029->setValue("l_tarsal_interphalangeal_phalanx_1");
ProtoInstance1028->addFieldValue(fieldValue1029);

CfieldValue* fieldValue1030 = new CfieldValue();
fieldValue1030->setName("translation");
fieldValue1030->setValue("0.08160000294446945 0.02319999970495701 0.010599999688565731");
ProtoInstance1028->addFieldValue(fieldValue1030);

fieldValue817->addChildren(ProtoInstance1028);

CProtoInstance* ProtoInstance1031 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1031->setName("Site");
ProtoInstance1031->setDEF("hanim_l_calcaneus_posterior");
CfieldValue* fieldValue1032 = new CfieldValue();
fieldValue1032->setName("name");
fieldValue1032->setValue("l_calcaneus_posterior");
ProtoInstance1031->addFieldValue(fieldValue1032);

CfieldValue* fieldValue1033 = new CfieldValue();
fieldValue1033->setName("translation");
fieldValue1033->setValue("0.09740000218153 0.02590000070631504 -0.11710000038146973");
ProtoInstance1031->addFieldValue(fieldValue1033);

fieldValue817->addChildren(ProtoInstance1031);

CProtoInstance* ProtoInstance1034 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1034->setName("Site");
ProtoInstance1034->setDEF("hanim_l_tarsal_distal_phalanx_2");
CfieldValue* fieldValue1035 = new CfieldValue();
fieldValue1035->setName("name");
fieldValue1035->setValue("l_tarsal_distal_phalanx_2");
ProtoInstance1034->addFieldValue(fieldValue1035);

CfieldValue* fieldValue1036 = new CfieldValue();
fieldValue1036->setName("translation");
fieldValue1036->setValue("0.11949999630451202 0.007899999618530273 0.14329999685287476");
ProtoInstance1034->addFieldValue(fieldValue1036);

fieldValue817->addChildren(ProtoInstance1034);

CProtoInstance* ProtoInstance1037 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1037->setName("Site");
ProtoInstance1037->setDEF("hanim_crotch");
CfieldValue* fieldValue1038 = new CfieldValue();
fieldValue1038->setName("name");
fieldValue1038->setValue("crotch");
ProtoInstance1037->addFieldValue(fieldValue1038);

CfieldValue* fieldValue1039 = new CfieldValue();
fieldValue1039->setName("translation");
fieldValue1039->setValue("0.0034000000450760126 0.8266000151634216 0.025699999183416367");
ProtoInstance1037->addFieldValue(fieldValue1039);

fieldValue817->addChildren(ProtoInstance1037);

CProtoInstance* ProtoInstance1040 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1040->setName("Site");
ProtoInstance1040->setDEF("hanim_r_neck_base");
CfieldValue* fieldValue1041 = new CfieldValue();
fieldValue1041->setName("name");
fieldValue1041->setValue("r_neck_base");
ProtoInstance1040->addFieldValue(fieldValue1041);

CfieldValue* fieldValue1042 = new CfieldValue();
fieldValue1042->setName("translation");
fieldValue1042->setValue("-0.04190000146627426 1.5148999691009521 -0.02199999988079071");
ProtoInstance1040->addFieldValue(fieldValue1042);

fieldValue817->addChildren(ProtoInstance1040);

CProtoInstance* ProtoInstance1043 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1043->setName("Site");
ProtoInstance1043->setDEF("hanim_l_neck_base");
CfieldValue* fieldValue1044 = new CfieldValue();
fieldValue1044->setName("name");
fieldValue1044->setValue("l_neck_base");
ProtoInstance1043->addFieldValue(fieldValue1044);

CfieldValue* fieldValue1045 = new CfieldValue();
fieldValue1045->setName("translation");
fieldValue1045->setValue("0.06459999829530716 1.5140999555587769 -0.03799999877810478");
ProtoInstance1043->addFieldValue(fieldValue1045);

fieldValue817->addChildren(ProtoInstance1043);

CProtoInstance* ProtoInstance1046 = (CProtoInstance *)m_pScene.createNode("ProtoInstance");
ProtoInstance1046->setName("Site");
ProtoInstance1046->setDEF("hanim_navel");
CfieldValue* fieldValue1047 = new CfieldValue();
fieldValue1047->setName("name");
fieldValue1047->setValue("navel");
ProtoInstance1046->addFieldValue(fieldValue1047);

CfieldValue* fieldValue1048 = new CfieldValue();
fieldValue1048->setName("translation");
fieldValue1048->setValue("0.006899999920278788 1.09660005569458 0.10170000046491623");
ProtoInstance1046->addFieldValue(fieldValue1048);

fieldValue817->addChildren(ProtoInstance1046);

ProtoInstance101->addFieldValue(fieldValue817);

CfieldValue* fieldValue1049 = new CfieldValue();
fieldValue1049->setName("name");
fieldValue1049->setValue("humanoid");
ProtoInstance101->addFieldValue(fieldValue1049);

CfieldValue* fieldValue1050 = new CfieldValue();
fieldValue1050->setName("info");
fieldValue1050->setValue("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@graphics.cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"");
ProtoInstance101->addFieldValue(fieldValue1050);

group->addChildren(ProtoInstance101);

CGroup* Group1051 = (CGroup *)m_pScene.createNode("Group");
Group1051->setDEF("JointCenters_WorldInfo");
CWorldInfo* WorldInfo1052 = (CWorldInfo *)m_pScene.createNode("WorldInfo");
WorldInfo1052->setTitle("HANIM 200x Default Joint Centers, LOA&#8209;0");
WorldInfo1052->setInfo(new CString[1]{" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "}, 1);
Group1051->addChildren(WorldInfo1052);

group->addChildren(Group1051);

CNavigationInfo* NavigationInfo1053 = (CNavigationInfo *)m_pScene.createNode("NavigationInfo");
NavigationInfo1053->setAvatarSize(new float[3]{0.25,1.600000023841858,0.75});
NavigationInfo1053->setSpeed(1.5);
group->addChildren(NavigationInfo1053);

X3D0->setScene(Scene4);

m_pScene.addRootNode(group);
}
