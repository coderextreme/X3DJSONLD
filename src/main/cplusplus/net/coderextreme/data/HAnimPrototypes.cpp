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
//Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("HAnimPrototypes.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("warning");
meta4->setContent("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("warning");
meta5->setContent("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("warning");
meta6->setContent("Need support for skin");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("creator");
meta7->setContent("Ozan APAYDIN, Don Brutzman");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translator");
meta8->setContent("Ozan APAYDIN, Don Brutzman");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("created");
meta9->setContent("15 November 2001");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("modified");
meta10->setContent("23 May 2020");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("TODO");
meta11->setContent("upgrade to match support requirements for HAnim 2.2");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("http://HAnim.org/Specifications/HAnim2001");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://www.HAnim.org");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("http://HAnim.org/Models");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://HAnim.org/Specifications");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("InterchangableActorsViaDynamicRoutingPrototypes.x3d");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("identifier");
meta20->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("license");
meta22->setContent("../license.html");
head1->addMeta(*meta22);

X3D0->setHead(*head1);

CScene* Scene23 = new CScene();
//**********Human Model Protypes*********
CProtoDeclare ProtoDeclare24 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid1_1" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><!--HAnim v1.1 field definitions--><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="version" accessType="inputOutput" appinfo="legal values: 1.1 or 2.0" type="SFString" value="1.1"></field>
<field name="humanoidVersion" accessType="inputOutput" appinfo="Version of the humanoid being modeled. Hint: HAnim version 2.0" type="SFString"></field>
<field name="info" accessType="inputOutput" type="MFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="humanoidBody" accessType="inputOutput" appinfo="HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton." documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid" type="MFNode"></field>
<field name="skeleton" accessType="inputOutput" appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" type="MFNode"></field>
<field name="joints" accessType="inputOutput" appinfo="Container field for Joint nodes" type="MFNode"></field>
<field name="segments" accessType="inputOutput" appinfo="Container field for Segment nodes" type="MFNode"></field>
<field name="sites" accessType="inputOutput" appinfo="Container field for Site nodes" type="MFNode"></field>
<field name="viewpoints" accessType="inputOutput" appinfo="Container field for Viewpoint nodes" type="MFNode"></field>
<field name="skinCoord" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL--></field>
<field name="skinNormal" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL--></field>
</ProtoInterface>
<ProtoBody><Transform DEF="HumanoidTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
<Group DEF="HumanoidGroup1"><IS><connect nodeField="children" protoField="humanoidBody"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup2"><IS><connect nodeField="children" protoField="skeleton"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup3"><IS><connect nodeField="children" protoField="viewpoints"></connect>
</IS>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare24->setName("Humanoid1_1");
ProtoDeclare24->setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.");
ProtoDeclare24->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html");
CProtoInterface* ProtoInterface25 = new CProtoInterface();
//HAnim v1.1 field definitions
Cfield* field26 = new Cfield();
field26->setName("name");
field26->setAccessType("inputOutput");
field26->setType("SFString");
ProtoInterface25->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("version");
field27->setAccessType("inputOutput");
field27->setAppinfo("legal values: 1.1 or 2.0");
field27->setType("SFString");
field27->setValue("1.1");
ProtoInterface25->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("humanoidVersion");
field28->setAccessType("inputOutput");
field28->setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0");
field28->setType("SFString");
ProtoInterface25->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("info");
field29->setAccessType("inputOutput");
field29->setType("MFString");
ProtoInterface25->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("translation");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0 0 0");
ProtoInterface25->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("rotation");
field31->setAccessType("inputOutput");
field31->setType("SFRotation");
field31->setValue("0 0 1 0");
ProtoInterface25->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("center");
field32->setAccessType("inputOutput");
field32->setType("SFVec3f");
field32->setValue("0 0 0");
ProtoInterface25->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("scale");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("1 1 1");
ProtoInterface25->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("scaleOrientation");
field34->setAccessType("inputOutput");
field34->setType("SFRotation");
field34->setValue("0 0 1 0");
ProtoInterface25->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("bboxCenter");
field35->setAccessType("initializeOnly");
field35->setType("SFVec3f");
field35->setValue("0 0 0");
ProtoInterface25->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("bboxSize");
field36->setAccessType("initializeOnly");
field36->setType("SFVec3f");
field36->setValue("-1 -1 -1");
ProtoInterface25->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("humanoidBody");
field37->setAccessType("inputOutput");
field37->setAppinfo("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.");
field37->setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid");
field37->setType("MFNode");
ProtoInterface25->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("skeleton");
field38->setAccessType("inputOutput");
field38->setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody");
field38->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html");
field38->setType("MFNode");
ProtoInterface25->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("joints");
field39->setAccessType("inputOutput");
field39->setAppinfo("Container field for Joint nodes");
field39->setType("MFNode");
ProtoInterface25->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("segments");
field40->setAccessType("inputOutput");
field40->setAppinfo("Container field for Segment nodes");
field40->setType("MFNode");
ProtoInterface25->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("sites");
field41->setAccessType("inputOutput");
field41->setAppinfo("Container field for Site nodes");
field41->setType("MFNode");
ProtoInterface25->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("viewpoints");
field42->setAccessType("inputOutput");
field42->setAppinfo("Container field for Viewpoint nodes");
field42->setType("MFNode");
ProtoInterface25->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("skinCoord");
field43->setAccessType("inputOutput");
field43->setAppinfo("Hint: HAnim version 2.0");
field43->setType("SFNode");
//NULL
ProtoInterface25->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("skinNormal");
field44->setAccessType("inputOutput");
field44->setAppinfo("Hint: HAnim version 2.0");
field44->setType("SFNode");
//NULL
ProtoInterface25->addField(*field44);

ProtoDeclare24->setProtoInterface(*ProtoInterface25);

CProtoBody* ProtoBody45 = new CProtoBody();
CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("HumanoidTransform");
CIS* IS47 = new CIS();
Cconnect* connect48 = new Cconnect();
connect48->setNodeField("translation");
connect48->setProtoField("translation");
IS47->addConnect(*connect48);

Cconnect* connect49 = new Cconnect();
connect49->setNodeField("rotation");
connect49->setProtoField("rotation");
IS47->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("center");
connect50->setProtoField("center");
IS47->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("scale");
connect51->setProtoField("scale");
IS47->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("scaleOrientation");
connect52->setProtoField("scaleOrientation");
IS47->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("bboxCenter");
connect53->setProtoField("bboxCenter");
IS47->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("bboxSize");
connect54->setProtoField("bboxSize");
IS47->addConnect(*connect54);

Transform46->setIS(*IS47);

CGroup* Group55 = (CGroup *)(m_pScene.createNode("Group"));
Group55->setDEF("HumanoidGroup1");
CIS* IS56 = new CIS();
Cconnect* connect57 = new Cconnect();
connect57->setNodeField("children");
connect57->setProtoField("humanoidBody");
IS56->addConnect(*connect57);

Group55->setIS(*IS56);

Transform46->addChildren(*Group55);

CGroup* Group58 = (CGroup *)(m_pScene.createNode("Group"));
Group58->setDEF("HumanoidGroup2");
CIS* IS59 = new CIS();
Cconnect* connect60 = new Cconnect();
connect60->setNodeField("children");
connect60->setProtoField("skeleton");
IS59->addConnect(*connect60);

Group58->setIS(*IS59);

Transform46->addChildren(*Group58);

CGroup* Group61 = (CGroup *)(m_pScene.createNode("Group"));
Group61->setDEF("HumanoidGroup3");
CIS* IS62 = new CIS();
Cconnect* connect63 = new Cconnect();
connect63->setNodeField("children");
connect63->setProtoField("viewpoints");
IS62->addConnect(*connect63);

Group61->setIS(*IS62);

Transform46->addChildren(*Group61);

ProtoBody45->addChildren(*Transform46);

ProtoDeclare24->setProtoBody(*ProtoBody45);

group->addChildren(*ProtoDeclare24);

CProtoDeclare ProtoDeclare64 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Joint.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="ulimit" accessType="inputOutput" type="MFFloat"></field>
<field name="llimit" accessType="inputOutput" type="MFFloat"></field>
<field name="limitOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="skinCoordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="skinCoordWeight" accessType="inputOutput" type="MFFloat"></field>
<field name="stiffness" accessType="inputOutput" type="MFFloat" value="0 0 0"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="JointTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare64->setName("Joint");
ProtoDeclare64->setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.");
ProtoDeclare64->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html");
CProtoInterface* ProtoInterface65 = new CProtoInterface();
Cfield* field66 = new Cfield();
field66->setName("name");
field66->setAccessType("inputOutput");
field66->setType("SFString");
ProtoInterface65->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("ulimit");
field67->setAccessType("inputOutput");
field67->setType("MFFloat");
ProtoInterface65->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("llimit");
field68->setAccessType("inputOutput");
field68->setType("MFFloat");
ProtoInterface65->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("limitOrientation");
field69->setAccessType("inputOutput");
field69->setType("SFRotation");
field69->setValue("0 0 1 0");
ProtoInterface65->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("skinCoordIndex");
field70->setAccessType("inputOutput");
field70->setType("MFInt32");
ProtoInterface65->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("skinCoordWeight");
field71->setAccessType("inputOutput");
field71->setType("MFFloat");
ProtoInterface65->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("stiffness");
field72->setAccessType("inputOutput");
field72->setType("MFFloat");
field72->setValue("0 0 0");
ProtoInterface65->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("translation");
field73->setAccessType("inputOutput");
field73->setType("SFVec3f");
field73->setValue("0 0 0");
ProtoInterface65->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("rotation");
field74->setAccessType("inputOutput");
field74->setType("SFRotation");
field74->setValue("0 0 1 0");
ProtoInterface65->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("scale");
field75->setAccessType("inputOutput");
field75->setType("SFVec3f");
field75->setValue("1 1 1");
ProtoInterface65->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("scaleOrientation");
field76->setAccessType("inputOutput");
field76->setType("SFRotation");
field76->setValue("0 0 1 0");
ProtoInterface65->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("center");
field77->setAccessType("inputOutput");
field77->setType("SFVec3f");
field77->setValue("0 0 0");
ProtoInterface65->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("bboxCenter");
field78->setAccessType("initializeOnly");
field78->setType("SFVec3f");
field78->setValue("0 0 0");
ProtoInterface65->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("bboxSize");
field79->setAccessType("initializeOnly");
field79->setType("SFVec3f");
field79->setValue("-1 -1 -1");
ProtoInterface65->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("children");
field80->setAccessType("inputOutput");
field80->setType("MFNode");
ProtoInterface65->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("addChildren");
field81->setAccessType("inputOnly");
field81->setType("MFNode");
ProtoInterface65->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("removeChildren");
field82->setAccessType("inputOnly");
field82->setType("MFNode");
ProtoInterface65->addField(*field82);

ProtoDeclare64->setProtoInterface(*ProtoInterface65);

CProtoBody* ProtoBody83 = new CProtoBody();
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setDEF("JointTransform");
CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("translation");
connect86->setProtoField("translation");
IS85->addConnect(*connect86);

Cconnect* connect87 = new Cconnect();
connect87->setNodeField("rotation");
connect87->setProtoField("rotation");
IS85->addConnect(*connect87);

Cconnect* connect88 = new Cconnect();
connect88->setNodeField("center");
connect88->setProtoField("center");
IS85->addConnect(*connect88);

Cconnect* connect89 = new Cconnect();
connect89->setNodeField("scale");
connect89->setProtoField("scale");
IS85->addConnect(*connect89);

Cconnect* connect90 = new Cconnect();
connect90->setNodeField("scaleOrientation");
connect90->setProtoField("scaleOrientation");
IS85->addConnect(*connect90);

Cconnect* connect91 = new Cconnect();
connect91->setNodeField("bboxCenter");
connect91->setProtoField("bboxCenter");
IS85->addConnect(*connect91);

Cconnect* connect92 = new Cconnect();
connect92->setNodeField("bboxSize");
connect92->setProtoField("bboxSize");
IS85->addConnect(*connect92);

Cconnect* connect93 = new Cconnect();
connect93->setNodeField("children");
connect93->setProtoField("children");
IS85->addConnect(*connect93);

Cconnect* connect94 = new Cconnect();
connect94->setNodeField("addChildren");
connect94->setProtoField("addChildren");
IS85->addConnect(*connect94);

Cconnect* connect95 = new Cconnect();
connect95->setNodeField("removeChildren");
connect95->setProtoField("removeChildren");
IS85->addConnect(*connect95);

Transform84->setIS(*IS85);

ProtoBody83->addChildren(*Transform84);

ProtoDeclare64->setProtoBody(*ProtoBody83);

group->addChildren(*ProtoDeclare64);

CProtoDeclare ProtoDeclare96 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="MFFloat" value="0 0 0 0 0 0 0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="coord" accessType="inputOutput" appinfo="contains Coordinate nodes" type="SFNode"><!--NULL--></field>
<field name="displacers" accessType="inputOutput" appinfo="contains Displacer nodes" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Group DEF="SegmentGroup"><IS><connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare96->setName("Segment");
ProtoDeclare96->setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.");
ProtoDeclare96->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html");
CProtoInterface* ProtoInterface97 = new CProtoInterface();
Cfield* field98 = new Cfield();
field98->setName("name");
field98->setAccessType("inputOutput");
field98->setType("SFString");
ProtoInterface97->addField(*field98);

Cfield* field99 = new Cfield();
field99->setName("mass");
field99->setAccessType("inputOutput");
field99->setType("SFFloat");
field99->setValue("0");
ProtoInterface97->addField(*field99);

Cfield* field100 = new Cfield();
field100->setName("centerOfMass");
field100->setAccessType("inputOutput");
field100->setType("SFVec3f");
field100->setValue("0 0 0");
ProtoInterface97->addField(*field100);

Cfield* field101 = new Cfield();
field101->setName("momentsOfInertia");
field101->setAccessType("inputOutput");
field101->setType("MFFloat");
field101->setValue("0 0 0 0 0 0 0 0 0");
ProtoInterface97->addField(*field101);

Cfield* field102 = new Cfield();
field102->setName("bboxCenter");
field102->setAccessType("initializeOnly");
field102->setType("SFVec3f");
field102->setValue("0 0 0");
ProtoInterface97->addField(*field102);

Cfield* field103 = new Cfield();
field103->setName("bboxSize");
field103->setAccessType("initializeOnly");
field103->setType("SFVec3f");
field103->setValue("-1 -1 -1");
ProtoInterface97->addField(*field103);

Cfield* field104 = new Cfield();
field104->setName("children");
field104->setAccessType("inputOutput");
field104->setType("MFNode");
ProtoInterface97->addField(*field104);

Cfield* field105 = new Cfield();
field105->setName("addChildren");
field105->setAccessType("inputOnly");
field105->setType("MFNode");
ProtoInterface97->addField(*field105);

Cfield* field106 = new Cfield();
field106->setName("removeChildren");
field106->setAccessType("inputOnly");
field106->setType("MFNode");
ProtoInterface97->addField(*field106);

Cfield* field107 = new Cfield();
field107->setName("coord");
field107->setAccessType("inputOutput");
field107->setAppinfo("contains Coordinate nodes");
field107->setType("SFNode");
//NULL
ProtoInterface97->addField(*field107);

Cfield* field108 = new Cfield();
field108->setName("displacers");
field108->setAccessType("inputOutput");
field108->setAppinfo("contains Displacer nodes");
field108->setType("MFNode");
ProtoInterface97->addField(*field108);

ProtoDeclare96->setProtoInterface(*ProtoInterface97);

CProtoBody* ProtoBody109 = new CProtoBody();
CGroup* Group110 = (CGroup *)(m_pScene.createNode("Group"));
Group110->setDEF("SegmentGroup");
CIS* IS111 = new CIS();
Cconnect* connect112 = new Cconnect();
connect112->setNodeField("bboxCenter");
connect112->setProtoField("bboxCenter");
IS111->addConnect(*connect112);

Cconnect* connect113 = new Cconnect();
connect113->setNodeField("bboxSize");
connect113->setProtoField("bboxSize");
IS111->addConnect(*connect113);

Cconnect* connect114 = new Cconnect();
connect114->setNodeField("children");
connect114->setProtoField("children");
IS111->addConnect(*connect114);

Cconnect* connect115 = new Cconnect();
connect115->setNodeField("addChildren");
connect115->setProtoField("addChildren");
IS111->addConnect(*connect115);

Cconnect* connect116 = new Cconnect();
connect116->setNodeField("removeChildren");
connect116->setProtoField("removeChildren");
IS111->addConnect(*connect116);

Group110->setIS(*IS111);

ProtoBody109->addChildren(*Group110);

ProtoDeclare96->setProtoBody(*ProtoBody109);

group->addChildren(*ProtoDeclare96);

CProtoDeclare ProtoDeclare117 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" appinfo="The Site node can be used for three purposes: (a) to define an &quot;end effector&quot; location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view &quot;through the eyes&quot; of the humanoid for use in multi-user worlds)." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Site.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SiteTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare117->setName("Site");
ProtoDeclare117->setAppinfo("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).");
ProtoDeclare117->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Site.html");
CProtoInterface* ProtoInterface118 = new CProtoInterface();
Cfield* field119 = new Cfield();
field119->setName("name");
field119->setAccessType("inputOutput");
field119->setType("SFString");
ProtoInterface118->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("translation");
field120->setAccessType("inputOutput");
field120->setType("SFVec3f");
field120->setValue("0 0 0");
ProtoInterface118->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("rotation");
field121->setAccessType("inputOutput");
field121->setType("SFRotation");
field121->setValue("0 0 1 0");
ProtoInterface118->addField(*field121);

Cfield* field122 = new Cfield();
field122->setName("scale");
field122->setAccessType("inputOutput");
field122->setType("SFVec3f");
field122->setValue("1 1 1");
ProtoInterface118->addField(*field122);

Cfield* field123 = new Cfield();
field123->setName("scaleOrientation");
field123->setAccessType("inputOutput");
field123->setType("SFRotation");
field123->setValue("0 0 1 0");
ProtoInterface118->addField(*field123);

Cfield* field124 = new Cfield();
field124->setName("center");
field124->setAccessType("inputOutput");
field124->setType("SFVec3f");
field124->setValue("0 0 0");
ProtoInterface118->addField(*field124);

Cfield* field125 = new Cfield();
field125->setName("bboxCenter");
field125->setAccessType("initializeOnly");
field125->setType("SFVec3f");
field125->setValue("0 0 0");
ProtoInterface118->addField(*field125);

Cfield* field126 = new Cfield();
field126->setName("bboxSize");
field126->setAccessType("initializeOnly");
field126->setType("SFVec3f");
field126->setValue("-1 -1 -1");
ProtoInterface118->addField(*field126);

Cfield* field127 = new Cfield();
field127->setName("children");
field127->setAccessType("inputOutput");
field127->setType("MFNode");
ProtoInterface118->addField(*field127);

Cfield* field128 = new Cfield();
field128->setName("addChildren");
field128->setAccessType("inputOnly");
field128->setType("MFNode");
ProtoInterface118->addField(*field128);

Cfield* field129 = new Cfield();
field129->setName("removeChildren");
field129->setAccessType("inputOnly");
field129->setType("MFNode");
ProtoInterface118->addField(*field129);

ProtoDeclare117->setProtoInterface(*ProtoInterface118);

CProtoBody* ProtoBody130 = new CProtoBody();
CTransform* Transform131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform131->setDEF("SiteTransform");
CIS* IS132 = new CIS();
Cconnect* connect133 = new Cconnect();
connect133->setNodeField("translation");
connect133->setProtoField("translation");
IS132->addConnect(*connect133);

Cconnect* connect134 = new Cconnect();
connect134->setNodeField("rotation");
connect134->setProtoField("rotation");
IS132->addConnect(*connect134);

Cconnect* connect135 = new Cconnect();
connect135->setNodeField("center");
connect135->setProtoField("center");
IS132->addConnect(*connect135);

Cconnect* connect136 = new Cconnect();
connect136->setNodeField("scale");
connect136->setProtoField("scale");
IS132->addConnect(*connect136);

Cconnect* connect137 = new Cconnect();
connect137->setNodeField("scaleOrientation");
connect137->setProtoField("scaleOrientation");
IS132->addConnect(*connect137);

Cconnect* connect138 = new Cconnect();
connect138->setNodeField("bboxCenter");
connect138->setProtoField("bboxCenter");
IS132->addConnect(*connect138);

Cconnect* connect139 = new Cconnect();
connect139->setNodeField("bboxSize");
connect139->setProtoField("bboxSize");
IS132->addConnect(*connect139);

Cconnect* connect140 = new Cconnect();
connect140->setNodeField("children");
connect140->setProtoField("children");
IS132->addConnect(*connect140);

Cconnect* connect141 = new Cconnect();
connect141->setNodeField("addChildren");
connect141->setProtoField("addChildren");
IS132->addConnect(*connect141);

Cconnect* connect142 = new Cconnect();
connect142->setNodeField("removeChildren");
connect142->setProtoField("removeChildren");
IS132->addConnect(*connect142);

Transform131->setIS(*IS132);

ProtoBody130->addChildren(*Transform131);

ProtoDeclare117->setProtoBody(*ProtoBody130);

group->addChildren(*ProtoDeclare117);

CProtoDeclare ProtoDeclare143 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare143->setName("Displacer");
ProtoDeclare143->setAppinfo("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.");
ProtoDeclare143->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html");
CProtoInterface* ProtoInterface144 = new CProtoInterface();
Cfield* field145 = new Cfield();
field145->setName("name");
field145->setAccessType("inputOutput");
field145->setType("SFString");
ProtoInterface144->addField(*field145);

Cfield* field146 = new Cfield();
field146->setName("coordIndex");
field146->setAccessType("inputOutput");
field146->setType("MFInt32");
ProtoInterface144->addField(*field146);

Cfield* field147 = new Cfield();
field147->setName("displacements");
field147->setAccessType("inputOutput");
field147->setType("MFVec3f");
ProtoInterface144->addField(*field147);

ProtoDeclare143->setProtoInterface(*ProtoInterface144);

CProtoBody* ProtoBody148 = new CProtoBody();
CWorldInfo* WorldInfo149 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo149->setInfo(new CString[1]{"null body node"}, 1);
ProtoBody148->addChildren(*WorldInfo149);

ProtoDeclare143->setProtoBody(*ProtoBody148);

group->addChildren(*ProtoDeclare143);

CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text151 = (CText *)(m_pScene.createNode("Text"));
Text151->setString(new CString[3]{"Humanoid Animation","(HAnim) prototype","implementations"}, 3);
CFontStyle* FontStyle152 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle152->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text151->setFontStyle(*FontStyle152);

Shape150->setGeometry(Text151);

CAppearance* Appearance153 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material154 = (CMaterial *)(m_pScene.createNode("Material"));
Material154->setAmbientIntensity(0.25);
Material154->setDiffuseColor(new float[3]{0.795918,0.505869,0.093315});
Material154->setShininess(0.39);
Material154->setSpecularColor(new float[3]{0.923469,0.428866,0.006369});
//Universal Media Library: Autumn 9
Appearance153->setMaterial(*Material154);

Shape150->setAppearance(*Appearance153);

group->addChildren(*Shape150);

X3D0->setScene(*Scene23);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
