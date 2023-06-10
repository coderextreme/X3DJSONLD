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
meta2->setContent("NancyPrototypes.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Cindy Ballreich");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("translators");
meta4->setContent("Tom Miller and Don Brutzman, NPS");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("9 July 2000");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("4 July 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces.");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("NancyNativeTags.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem.");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CProtoDeclare ProtoDeclare15 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare15->setName("Displacer");
ProtoDeclare15->setAppinfo("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.");
ProtoDeclare15->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html");
CProtoInterface* ProtoInterface16 = new CProtoInterface();
Cfield* field17 = new Cfield();
field17->setName("name");
field17->setAccessType("inputOutput");
field17->setType("SFString");
ProtoInterface16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("coordIndex");
field18->setAccessType("inputOutput");
field18->setType("MFInt32");
ProtoInterface16->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("displacements");
field19->setAccessType("inputOutput");
field19->setType("MFVec3f");
ProtoInterface16->addField(*field19);

ProtoDeclare15->setProtoInterface(*ProtoInterface16);

CProtoBody* ProtoBody20 = new CProtoBody();
CWorldInfo* WorldInfo21 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo21->setInfo(new CString[1]{"null body node"}, 1);
ProtoBody20->addChildren(*WorldInfo21);

ProtoDeclare15->setProtoBody(*ProtoBody20);

group->addChildren(*ProtoDeclare15);

CProtoDeclare ProtoDeclare22 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Humanoid" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><!--HAnim v1.1 field definitions--><field name="name" accessType="inputOutput" type="SFString"></field>
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
<field name="humanoidBody" accessType="inputOutput" appinfo="HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton" documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid" type="MFNode"></field>
<field name="skeleton" accessType="inputOutput" appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" type="MFNode"></field>
<field name="joints" accessType="inputOutput" appinfo="Container field for Joint nodes" type="MFNode"></field>
<field name="segments" accessType="inputOutput" appinfo="Container field for Segment nodes" type="MFNode"></field>
<field name="sites" accessType="inputOutput" appinfo="Container field for Site nodes" type="MFNode"></field>
<field name="viewpoints" accessType="inputOutput" appinfo="Container field for Viewpoint nodes" type="MFNode"></field>
<field name="skinCoord" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL node--></field>
<field name="skinNormal" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL node--></field>
</ProtoInterface>
<ProtoBody><Transform DEF="HumanoidTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
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
ProtoDeclare22->setName("Humanoid");
ProtoDeclare22->setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.");
ProtoDeclare22->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html");
CProtoInterface* ProtoInterface23 = new CProtoInterface();
//HAnim v1.1 field definitions
Cfield* field24 = new Cfield();
field24->setName("name");
field24->setAccessType("inputOutput");
field24->setType("SFString");
ProtoInterface23->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("version");
field25->setAccessType("inputOutput");
field25->setAppinfo("legal values: 1.1 or 2.0");
field25->setType("SFString");
field25->setValue("1.1");
ProtoInterface23->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("humanoidVersion");
field26->setAccessType("inputOutput");
field26->setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0");
field26->setType("SFString");
ProtoInterface23->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("info");
field27->setAccessType("inputOutput");
field27->setType("MFString");
ProtoInterface23->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("translation");
field28->setAccessType("inputOutput");
field28->setType("SFVec3f");
field28->setValue("0 0 0");
ProtoInterface23->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("rotation");
field29->setAccessType("inputOutput");
field29->setType("SFRotation");
field29->setValue("0 0 1 0");
ProtoInterface23->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("center");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0 0 0");
ProtoInterface23->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("scale");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("1 1 1");
ProtoInterface23->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("scaleOrientation");
field32->setAccessType("inputOutput");
field32->setType("SFRotation");
field32->setValue("0 0 1 0");
ProtoInterface23->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("bboxCenter");
field33->setAccessType("initializeOnly");
field33->setType("SFVec3f");
field33->setValue("0 0 0");
ProtoInterface23->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("bboxSize");
field34->setAccessType("initializeOnly");
field34->setType("SFVec3f");
field34->setValue("-1 -1 -1");
ProtoInterface23->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("humanoidBody");
field35->setAccessType("inputOutput");
field35->setAppinfo("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton");
field35->setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid");
field35->setType("MFNode");
ProtoInterface23->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("skeleton");
field36->setAccessType("inputOutput");
field36->setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody");
field36->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html");
field36->setType("MFNode");
ProtoInterface23->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("joints");
field37->setAccessType("inputOutput");
field37->setAppinfo("Container field for Joint nodes");
field37->setType("MFNode");
ProtoInterface23->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("segments");
field38->setAccessType("inputOutput");
field38->setAppinfo("Container field for Segment nodes");
field38->setType("MFNode");
ProtoInterface23->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("sites");
field39->setAccessType("inputOutput");
field39->setAppinfo("Container field for Site nodes");
field39->setType("MFNode");
ProtoInterface23->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("viewpoints");
field40->setAccessType("inputOutput");
field40->setAppinfo("Container field for Viewpoint nodes");
field40->setType("MFNode");
ProtoInterface23->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("skinCoord");
field41->setAccessType("inputOutput");
field41->setAppinfo("Hint: HAnim version 2.0");
field41->setType("SFNode");
//NULL node
ProtoInterface23->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("skinNormal");
field42->setAccessType("inputOutput");
field42->setAppinfo("Hint: HAnim version 2.0");
field42->setType("SFNode");
//NULL node
ProtoInterface23->addField(*field42);

ProtoDeclare22->setProtoInterface(*ProtoInterface23);

CProtoBody* ProtoBody43 = new CProtoBody();
CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setDEF("HumanoidTransform");
CIS* IS45 = new CIS();
Cconnect* connect46 = new Cconnect();
connect46->setNodeField("translation");
connect46->setProtoField("translation");
IS45->addConnect(*connect46);

Cconnect* connect47 = new Cconnect();
connect47->setNodeField("rotation");
connect47->setProtoField("rotation");
IS45->addConnect(*connect47);

Cconnect* connect48 = new Cconnect();
connect48->setNodeField("scale");
connect48->setProtoField("scale");
IS45->addConnect(*connect48);

Cconnect* connect49 = new Cconnect();
connect49->setNodeField("scaleOrientation");
connect49->setProtoField("scaleOrientation");
IS45->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("center");
connect50->setProtoField("center");
IS45->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("bboxCenter");
connect51->setProtoField("bboxCenter");
IS45->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("bboxSize");
connect52->setProtoField("bboxSize");
IS45->addConnect(*connect52);

Transform44->setIS(*IS45);

CGroup* Group53 = (CGroup *)(m_pScene.createNode("Group"));
Group53->setDEF("HumanoidGroup1");
CIS* IS54 = new CIS();
Cconnect* connect55 = new Cconnect();
connect55->setNodeField("children");
connect55->setProtoField("humanoidBody");
IS54->addConnect(*connect55);

Group53->setIS(*IS54);

Transform44->addChildren(*Group53);

CGroup* Group56 = (CGroup *)(m_pScene.createNode("Group"));
Group56->setDEF("HumanoidGroup2");
CIS* IS57 = new CIS();
Cconnect* connect58 = new Cconnect();
connect58->setNodeField("children");
connect58->setProtoField("skeleton");
IS57->addConnect(*connect58);

Group56->setIS(*IS57);

Transform44->addChildren(*Group56);

CGroup* Group59 = (CGroup *)(m_pScene.createNode("Group"));
Group59->setDEF("HumanoidGroup3");
CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("children");
connect61->setProtoField("viewpoints");
IS60->addConnect(*connect61);

Group59->setIS(*IS60);

Transform44->addChildren(*Group59);

ProtoBody43->addChildren(*Transform44);

ProtoDeclare22->setProtoBody(*ProtoBody43);

group->addChildren(*ProtoDeclare22);

CProtoDeclare ProtoDeclare62 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare62->setName("Joint");
ProtoDeclare62->setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.");
ProtoDeclare62->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html");
CProtoInterface* ProtoInterface63 = new CProtoInterface();
Cfield* field64 = new Cfield();
field64->setName("name");
field64->setAccessType("inputOutput");
field64->setType("SFString");
ProtoInterface63->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("ulimit");
field65->setAccessType("inputOutput");
field65->setType("MFFloat");
ProtoInterface63->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("llimit");
field66->setAccessType("inputOutput");
field66->setType("MFFloat");
ProtoInterface63->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("limitOrientation");
field67->setAccessType("inputOutput");
field67->setType("SFRotation");
field67->setValue("0 0 1 0");
ProtoInterface63->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("skinCoordIndex");
field68->setAccessType("inputOutput");
field68->setType("MFInt32");
ProtoInterface63->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("skinCoordWeight");
field69->setAccessType("inputOutput");
field69->setType("MFFloat");
ProtoInterface63->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("stiffness");
field70->setAccessType("inputOutput");
field70->setType("MFFloat");
field70->setValue("0 0 0");
ProtoInterface63->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("translation");
field71->setAccessType("inputOutput");
field71->setType("SFVec3f");
field71->setValue("0 0 0");
ProtoInterface63->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("rotation");
field72->setAccessType("inputOutput");
field72->setType("SFRotation");
field72->setValue("0 0 1 0");
ProtoInterface63->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("scale");
field73->setAccessType("inputOutput");
field73->setType("SFVec3f");
field73->setValue("1 1 1");
ProtoInterface63->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("scaleOrientation");
field74->setAccessType("inputOutput");
field74->setType("SFRotation");
field74->setValue("0 0 1 0");
ProtoInterface63->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("center");
field75->setAccessType("inputOutput");
field75->setType("SFVec3f");
field75->setValue("0 0 0");
ProtoInterface63->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("bboxCenter");
field76->setAccessType("initializeOnly");
field76->setType("SFVec3f");
field76->setValue("0 0 0");
ProtoInterface63->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("bboxSize");
field77->setAccessType("initializeOnly");
field77->setType("SFVec3f");
field77->setValue("-1 -1 -1");
ProtoInterface63->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("children");
field78->setAccessType("inputOutput");
field78->setType("MFNode");
ProtoInterface63->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("addChildren");
field79->setAccessType("inputOnly");
field79->setType("MFNode");
ProtoInterface63->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("removeChildren");
field80->setAccessType("inputOnly");
field80->setType("MFNode");
ProtoInterface63->addField(*field80);

ProtoDeclare62->setProtoInterface(*ProtoInterface63);

CProtoBody* ProtoBody81 = new CProtoBody();
CTransform* Transform82 = (CTransform *)(m_pScene.createNode("Transform"));
Transform82->setDEF("JointTransform");
CIS* IS83 = new CIS();
Cconnect* connect84 = new Cconnect();
connect84->setNodeField("translation");
connect84->setProtoField("translation");
IS83->addConnect(*connect84);

Cconnect* connect85 = new Cconnect();
connect85->setNodeField("rotation");
connect85->setProtoField("rotation");
IS83->addConnect(*connect85);

Cconnect* connect86 = new Cconnect();
connect86->setNodeField("scale");
connect86->setProtoField("scale");
IS83->addConnect(*connect86);

Cconnect* connect87 = new Cconnect();
connect87->setNodeField("scaleOrientation");
connect87->setProtoField("scaleOrientation");
IS83->addConnect(*connect87);

Cconnect* connect88 = new Cconnect();
connect88->setNodeField("center");
connect88->setProtoField("center");
IS83->addConnect(*connect88);

Cconnect* connect89 = new Cconnect();
connect89->setNodeField("bboxCenter");
connect89->setProtoField("bboxCenter");
IS83->addConnect(*connect89);

Cconnect* connect90 = new Cconnect();
connect90->setNodeField("bboxSize");
connect90->setProtoField("bboxSize");
IS83->addConnect(*connect90);

Cconnect* connect91 = new Cconnect();
connect91->setNodeField("children");
connect91->setProtoField("children");
IS83->addConnect(*connect91);

Cconnect* connect92 = new Cconnect();
connect92->setNodeField("addChildren");
connect92->setProtoField("addChildren");
IS83->addConnect(*connect92);

Cconnect* connect93 = new Cconnect();
connect93->setNodeField("removeChildren");
connect93->setProtoField("removeChildren");
IS83->addConnect(*connect93);

Transform82->setIS(*IS83);

ProtoBody81->addChildren(*Transform82);

ProtoDeclare62->setProtoBody(*ProtoBody81);

group->addChildren(*ProtoDeclare62);

CProtoDeclare ProtoDeclare94 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="MFFloat" value="0 0 0 0 0 0 0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="coord" accessType="inputOutput" appinfo="contains Coordinate nodes" type="SFNode"><!--NULL node--></field>
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
ProtoDeclare94->setName("Segment");
ProtoDeclare94->setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.");
ProtoDeclare94->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html");
CProtoInterface* ProtoInterface95 = new CProtoInterface();
Cfield* field96 = new Cfield();
field96->setName("name");
field96->setAccessType("inputOutput");
field96->setType("SFString");
ProtoInterface95->addField(*field96);

Cfield* field97 = new Cfield();
field97->setName("mass");
field97->setAccessType("inputOutput");
field97->setType("SFFloat");
field97->setValue("0");
ProtoInterface95->addField(*field97);

Cfield* field98 = new Cfield();
field98->setName("centerOfMass");
field98->setAccessType("inputOutput");
field98->setType("SFVec3f");
field98->setValue("0 0 0");
ProtoInterface95->addField(*field98);

Cfield* field99 = new Cfield();
field99->setName("momentsOfInertia");
field99->setAccessType("inputOutput");
field99->setType("MFFloat");
field99->setValue("0 0 0 0 0 0 0 0 0");
ProtoInterface95->addField(*field99);

Cfield* field100 = new Cfield();
field100->setName("bboxCenter");
field100->setAccessType("initializeOnly");
field100->setType("SFVec3f");
field100->setValue("0 0 0");
ProtoInterface95->addField(*field100);

Cfield* field101 = new Cfield();
field101->setName("bboxSize");
field101->setAccessType("initializeOnly");
field101->setType("SFVec3f");
field101->setValue("-1 -1 -1");
ProtoInterface95->addField(*field101);

Cfield* field102 = new Cfield();
field102->setName("children");
field102->setAccessType("inputOutput");
field102->setType("MFNode");
ProtoInterface95->addField(*field102);

Cfield* field103 = new Cfield();
field103->setName("addChildren");
field103->setAccessType("inputOnly");
field103->setType("MFNode");
ProtoInterface95->addField(*field103);

Cfield* field104 = new Cfield();
field104->setName("removeChildren");
field104->setAccessType("inputOnly");
field104->setType("MFNode");
ProtoInterface95->addField(*field104);

Cfield* field105 = new Cfield();
field105->setName("coord");
field105->setAccessType("inputOutput");
field105->setAppinfo("contains Coordinate nodes");
field105->setType("SFNode");
//NULL node
ProtoInterface95->addField(*field105);

Cfield* field106 = new Cfield();
field106->setName("displacers");
field106->setAccessType("inputOutput");
field106->setAppinfo("contains Displacer nodes");
field106->setType("MFNode");
ProtoInterface95->addField(*field106);

ProtoDeclare94->setProtoInterface(*ProtoInterface95);

CProtoBody* ProtoBody107 = new CProtoBody();
CGroup* Group108 = (CGroup *)(m_pScene.createNode("Group"));
Group108->setDEF("SegmentGroup");
CIS* IS109 = new CIS();
Cconnect* connect110 = new Cconnect();
connect110->setNodeField("bboxCenter");
connect110->setProtoField("bboxCenter");
IS109->addConnect(*connect110);

Cconnect* connect111 = new Cconnect();
connect111->setNodeField("bboxSize");
connect111->setProtoField("bboxSize");
IS109->addConnect(*connect111);

Cconnect* connect112 = new Cconnect();
connect112->setNodeField("children");
connect112->setProtoField("children");
IS109->addConnect(*connect112);

Cconnect* connect113 = new Cconnect();
connect113->setNodeField("addChildren");
connect113->setProtoField("addChildren");
IS109->addConnect(*connect113);

Cconnect* connect114 = new Cconnect();
connect114->setNodeField("removeChildren");
connect114->setProtoField("removeChildren");
IS109->addConnect(*connect114);

Group108->setIS(*IS109);

ProtoBody107->addChildren(*Group108);

ProtoDeclare94->setProtoBody(*ProtoBody107);

group->addChildren(*ProtoDeclare94);

CProtoDeclare ProtoDeclare115 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare115->setName("Site");
ProtoDeclare115->setAppinfo("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).");
ProtoDeclare115->setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Site.html");
CProtoInterface* ProtoInterface116 = new CProtoInterface();
Cfield* field117 = new Cfield();
field117->setName("name");
field117->setAccessType("inputOutput");
field117->setType("SFString");
ProtoInterface116->addField(*field117);

Cfield* field118 = new Cfield();
field118->setName("translation");
field118->setAccessType("inputOutput");
field118->setType("SFVec3f");
field118->setValue("0 0 0");
ProtoInterface116->addField(*field118);

Cfield* field119 = new Cfield();
field119->setName("rotation");
field119->setAccessType("inputOutput");
field119->setType("SFRotation");
field119->setValue("0 0 1 0");
ProtoInterface116->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("scale");
field120->setAccessType("inputOutput");
field120->setType("SFVec3f");
field120->setValue("1 1 1");
ProtoInterface116->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("scaleOrientation");
field121->setAccessType("inputOutput");
field121->setType("SFRotation");
field121->setValue("0 0 1 0");
ProtoInterface116->addField(*field121);

Cfield* field122 = new Cfield();
field122->setName("center");
field122->setAccessType("inputOutput");
field122->setType("SFVec3f");
field122->setValue("0 0 0");
ProtoInterface116->addField(*field122);

Cfield* field123 = new Cfield();
field123->setName("bboxCenter");
field123->setAccessType("initializeOnly");
field123->setType("SFVec3f");
field123->setValue("0 0 0");
ProtoInterface116->addField(*field123);

Cfield* field124 = new Cfield();
field124->setName("bboxSize");
field124->setAccessType("initializeOnly");
field124->setType("SFVec3f");
field124->setValue("-1 -1 -1");
ProtoInterface116->addField(*field124);

Cfield* field125 = new Cfield();
field125->setName("children");
field125->setAccessType("inputOutput");
field125->setType("MFNode");
ProtoInterface116->addField(*field125);

Cfield* field126 = new Cfield();
field126->setName("addChildren");
field126->setAccessType("inputOnly");
field126->setType("MFNode");
ProtoInterface116->addField(*field126);

Cfield* field127 = new Cfield();
field127->setName("removeChildren");
field127->setAccessType("inputOnly");
field127->setType("MFNode");
ProtoInterface116->addField(*field127);

ProtoDeclare115->setProtoInterface(*ProtoInterface116);

CProtoBody* ProtoBody128 = new CProtoBody();
CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform129->setDEF("SiteTransform");
CIS* IS130 = new CIS();
Cconnect* connect131 = new Cconnect();
connect131->setNodeField("translation");
connect131->setProtoField("translation");
IS130->addConnect(*connect131);

Cconnect* connect132 = new Cconnect();
connect132->setNodeField("rotation");
connect132->setProtoField("rotation");
IS130->addConnect(*connect132);

Cconnect* connect133 = new Cconnect();
connect133->setNodeField("scale");
connect133->setProtoField("scale");
IS130->addConnect(*connect133);

Cconnect* connect134 = new Cconnect();
connect134->setNodeField("scaleOrientation");
connect134->setProtoField("scaleOrientation");
IS130->addConnect(*connect134);

Cconnect* connect135 = new Cconnect();
connect135->setNodeField("center");
connect135->setProtoField("center");
IS130->addConnect(*connect135);

Cconnect* connect136 = new Cconnect();
connect136->setNodeField("bboxCenter");
connect136->setProtoField("bboxCenter");
IS130->addConnect(*connect136);

Cconnect* connect137 = new Cconnect();
connect137->setNodeField("bboxSize");
connect137->setProtoField("bboxSize");
IS130->addConnect(*connect137);

Cconnect* connect138 = new Cconnect();
connect138->setNodeField("children");
connect138->setProtoField("children");
IS130->addConnect(*connect138);

Cconnect* connect139 = new Cconnect();
connect139->setNodeField("addChildren");
connect139->setProtoField("addChildren");
IS130->addConnect(*connect139);

Cconnect* connect140 = new Cconnect();
connect140->setNodeField("removeChildren");
connect140->setProtoField("removeChildren");
IS130->addConnect(*connect140);

Transform129->setIS(*IS130);

ProtoBody128->addChildren(*Transform129);

ProtoDeclare115->setProtoBody(*ProtoBody128);

group->addChildren(*ProtoDeclare115);

//Start scene graph.
CProtoInstance* ProtoInstance141 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance141->setName("Humanoid");
ProtoInstance141->setDEF("Humanoid");
CfieldValue* fieldValue142 = new CfieldValue();
fieldValue142->setName("name");
fieldValue142->setValue("nancy");
ProtoInstance141->addFieldValue(*fieldValue142);

CfieldValue* fieldValue143 = new CfieldValue();
fieldValue143->setName("version");
fieldValue143->setValue("1.1");
ProtoInstance141->addFieldValue(*fieldValue143);

CfieldValue* fieldValue144 = new CfieldValue();
fieldValue144->setName("info");
fieldValue144->setValue("\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"");
ProtoInstance141->addFieldValue(*fieldValue144);

CfieldValue* fieldValue145 = new CfieldValue();
fieldValue145->setName("humanoidBody");
CProtoInstance* ProtoInstance146 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance146->setName("Joint");
ProtoInstance146->setDEF("hanim_humanoid_root");
CfieldValue* fieldValue147 = new CfieldValue();
fieldValue147->setName("name");
fieldValue147->setValue("humanoid_root");
ProtoInstance146->addFieldValue(*fieldValue147);

CfieldValue* fieldValue148 = new CfieldValue();
fieldValue148->setName("center");
fieldValue148->setValue("-0.00405 0.855 -0.000113");
ProtoInstance146->addFieldValue(*fieldValue148);

CfieldValue* fieldValue149 = new CfieldValue();
fieldValue149->setName("children");
CProtoInstance* ProtoInstance150 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance150->setName("Joint");
ProtoInstance150->setDEF("hanim_sacroiliac");
CfieldValue* fieldValue151 = new CfieldValue();
fieldValue151->setName("name");
fieldValue151->setValue("sacroiliac");
ProtoInstance150->addFieldValue(*fieldValue151);

CfieldValue* fieldValue152 = new CfieldValue();
fieldValue152->setName("center");
fieldValue152->setValue("0 1.01 -0.0204");
ProtoInstance150->addFieldValue(*fieldValue152);

CfieldValue* fieldValue153 = new CfieldValue();
fieldValue153->setName("children");
CProtoInstance* ProtoInstance154 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance154->setName("Segment");
ProtoInstance154->setDEF("hanim_pelvis");
CfieldValue* fieldValue155 = new CfieldValue();
fieldValue155->setName("name");
fieldValue155->setValue("pelvis");
ProtoInstance154->addFieldValue(*fieldValue155);

CfieldValue* fieldValue156 = new CfieldValue();
fieldValue156->setName("children");
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance158 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material159 = (CMaterial *)(m_pScene.createNode("Material"));
Material159->setDEF("Pants_Color");
Material159->setAmbientIntensity(0.25);
Material159->setDiffuseColor(new float[3]{0.054,0.233,0.39});
Appearance158->setMaterial(*Material159);

Shape157->setAppearance(*Appearance158);

CIndexedFaceSet* IndexedFaceSet160 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet160->setCoordIndex(new int[712]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1});
IndexedFaceSet160->setCreaseAngle(1.14);
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[273]{0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545});
IndexedFaceSet160->setCoord(*Coordinate161);

Shape157->setGeometry(IndexedFaceSet160);

fieldValue156->addChildren(*Shape157);

ProtoInstance154->addFieldValue(*fieldValue156);

fieldValue153->addChildren(*ProtoInstance154);

CProtoInstance* ProtoInstance162 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance162->setName("Joint");
ProtoInstance162->setDEF("hanim_l_hip");
CfieldValue* fieldValue163 = new CfieldValue();
fieldValue163->setName("name");
fieldValue163->setValue("l_hip");
ProtoInstance162->addFieldValue(*fieldValue163);

CfieldValue* fieldValue164 = new CfieldValue();
fieldValue164->setName("center");
fieldValue164->setValue("0.122 0.888271 -0.0693267");
ProtoInstance162->addFieldValue(*fieldValue164);

CfieldValue* fieldValue165 = new CfieldValue();
fieldValue165->setName("children");
CProtoInstance* ProtoInstance166 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance166->setName("Segment");
ProtoInstance166->setDEF("hanim_l_thigh");
CfieldValue* fieldValue167 = new CfieldValue();
fieldValue167->setName("name");
fieldValue167->setValue("l_thigh");
ProtoInstance166->addFieldValue(*fieldValue167);

CfieldValue* fieldValue168 = new CfieldValue();
fieldValue168->setName("children");
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material171 = (CMaterial *)(m_pScene.createNode("Material"));
Material171->setUSE("Pants_Color");
Appearance170->setMaterial(*Material171);

Shape169->setAppearance(*Appearance170);

CIndexedFaceSet* IndexedFaceSet172 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet172->setCoordIndex(new int[248]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1});
IndexedFaceSet172->setCreaseAngle(1.32);
CCoordinate* Coordinate173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate173->setPoint(new float[99]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108});
IndexedFaceSet172->setCoord(*Coordinate173);

Shape169->setGeometry(IndexedFaceSet172);

fieldValue168->addChildren(*Shape169);

ProtoInstance166->addFieldValue(*fieldValue168);

fieldValue165->addChildren(*ProtoInstance166);

CProtoInstance* ProtoInstance174 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance174->setName("Joint");
ProtoInstance174->setDEF("hanim_l_knee");
CfieldValue* fieldValue175 = new CfieldValue();
fieldValue175->setName("name");
fieldValue175->setValue("l_knee");
ProtoInstance174->addFieldValue(*fieldValue175);

CfieldValue* fieldValue176 = new CfieldValue();
fieldValue176->setName("center");
fieldValue176->setValue("0.0738 0.517 -0.0284");
ProtoInstance174->addFieldValue(*fieldValue176);

CfieldValue* fieldValue177 = new CfieldValue();
fieldValue177->setName("children");
CProtoInstance* ProtoInstance178 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance178->setName("Segment");
ProtoInstance178->setDEF("hanim_l_calf");
CfieldValue* fieldValue179 = new CfieldValue();
fieldValue179->setName("name");
fieldValue179->setValue("l_calf");
ProtoInstance178->addFieldValue(*fieldValue179);

CfieldValue* fieldValue180 = new CfieldValue();
fieldValue180->setName("children");
CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance182 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material183 = (CMaterial *)(m_pScene.createNode("Material"));
Material183->setUSE("Pants_Color");
Appearance182->setMaterial(*Material183);

Shape181->setAppearance(*Appearance182);

CIndexedFaceSet* IndexedFaceSet184 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet184->setCoordIndex(new int[368]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1});
IndexedFaceSet184->setCreaseAngle(1.57);
CCoordinate* Coordinate185 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate185->setPoint(new float[144]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835});
IndexedFaceSet184->setCoord(*Coordinate185);

Shape181->setGeometry(IndexedFaceSet184);

fieldValue180->addChildren(*Shape181);

ProtoInstance178->addFieldValue(*fieldValue180);

fieldValue177->addChildren(*ProtoInstance178);

CProtoInstance* ProtoInstance186 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance186->setName("Joint");
ProtoInstance186->setDEF("hanim_l_ankle");
CfieldValue* fieldValue187 = new CfieldValue();
fieldValue187->setName("name");
fieldValue187->setValue("l_ankle");
ProtoInstance186->addFieldValue(*fieldValue187);

CfieldValue* fieldValue188 = new CfieldValue();
fieldValue188->setName("center");
fieldValue188->setValue("0.0645 0.0719 -0.048");
ProtoInstance186->addFieldValue(*fieldValue188);

CfieldValue* fieldValue189 = new CfieldValue();
fieldValue189->setName("children");
CProtoInstance* ProtoInstance190 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance190->setName("Segment");
ProtoInstance190->setDEF("hanim_l_hindfoot");
CfieldValue* fieldValue191 = new CfieldValue();
fieldValue191->setName("name");
fieldValue191->setValue("l_hindfoot");
ProtoInstance190->addFieldValue(*fieldValue191);

CfieldValue* fieldValue192 = new CfieldValue();
fieldValue192->setName("children");
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance194 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material195 = (CMaterial *)(m_pScene.createNode("Material"));
Material195->setDEF("Shoe_Color");
Material195->setAmbientIntensity(0.25);
Appearance194->setMaterial(*Material195);

Shape193->setAppearance(*Appearance194);

CIndexedFaceSet* IndexedFaceSet196 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet196->setCoordIndex(new int[392]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1});
IndexedFaceSet196->setCreaseAngle(1.57);
CCoordinate* Coordinate197 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate197->setPoint(new float[153]{0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608});
IndexedFaceSet196->setCoord(*Coordinate197);

Shape193->setGeometry(IndexedFaceSet196);

fieldValue192->addChildren(*Shape193);

ProtoInstance190->addFieldValue(*fieldValue192);

fieldValue189->addChildren(*ProtoInstance190);

ProtoInstance186->addFieldValue(*fieldValue189);

fieldValue177->addChildren(*ProtoInstance186);

ProtoInstance174->addFieldValue(*fieldValue177);

fieldValue165->addChildren(*ProtoInstance174);

ProtoInstance162->addFieldValue(*fieldValue165);

fieldValue153->addChildren(*ProtoInstance162);

CProtoInstance* ProtoInstance198 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance198->setName("Joint");
ProtoInstance198->setDEF("hanim_r_hip");
CfieldValue* fieldValue199 = new CfieldValue();
fieldValue199->setName("name");
fieldValue199->setValue("r_hip");
ProtoInstance198->addFieldValue(*fieldValue199);

CfieldValue* fieldValue200 = new CfieldValue();
fieldValue200->setName("center");
fieldValue200->setValue("-0.11 0.892362 -0.0732533");
ProtoInstance198->addFieldValue(*fieldValue200);

CfieldValue* fieldValue201 = new CfieldValue();
fieldValue201->setName("children");
CProtoInstance* ProtoInstance202 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance202->setName("Segment");
ProtoInstance202->setDEF("hanim_r_thigh");
CfieldValue* fieldValue203 = new CfieldValue();
fieldValue203->setName("name");
fieldValue203->setValue("r_thigh");
ProtoInstance202->addFieldValue(*fieldValue203);

CfieldValue* fieldValue204 = new CfieldValue();
fieldValue204->setName("children");
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance206 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material207 = (CMaterial *)(m_pScene.createNode("Material"));
Material207->setUSE("Pants_Color");
Appearance206->setMaterial(*Material207);

Shape205->setAppearance(*Appearance206);

CIndexedFaceSet* IndexedFaceSet208 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet208->setCoordIndex(new int[240]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1});
IndexedFaceSet208->setCreaseAngle(1.61);
CCoordinate* Coordinate209 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate209->setPoint(new float[96]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018});
IndexedFaceSet208->setCoord(*Coordinate209);

Shape205->setGeometry(IndexedFaceSet208);

fieldValue204->addChildren(*Shape205);

ProtoInstance202->addFieldValue(*fieldValue204);

fieldValue201->addChildren(*ProtoInstance202);

CProtoInstance* ProtoInstance210 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance210->setName("Joint");
ProtoInstance210->setDEF("hanim_r_knee");
CfieldValue* fieldValue211 = new CfieldValue();
fieldValue211->setName("name");
fieldValue211->setValue("r_knee");
ProtoInstance210->addFieldValue(*fieldValue211);

CfieldValue* fieldValue212 = new CfieldValue();
fieldValue212->setName("center");
fieldValue212->setValue("-0.0699 0.51 -0.0166");
ProtoInstance210->addFieldValue(*fieldValue212);

CfieldValue* fieldValue213 = new CfieldValue();
fieldValue213->setName("children");
CProtoInstance* ProtoInstance214 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance214->setName("Segment");
ProtoInstance214->setDEF("hanim_r_calf");
CfieldValue* fieldValue215 = new CfieldValue();
fieldValue215->setName("name");
fieldValue215->setValue("r_calf");
ProtoInstance214->addFieldValue(*fieldValue215);

CfieldValue* fieldValue216 = new CfieldValue();
fieldValue216->setName("children");
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance218 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material219 = (CMaterial *)(m_pScene.createNode("Material"));
Material219->setUSE("Pants_Color");
Appearance218->setMaterial(*Material219);

Shape217->setAppearance(*Appearance218);

CIndexedFaceSet* IndexedFaceSet220 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet220->setCoordIndex(new int[368]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1});
IndexedFaceSet220->setCreaseAngle(1.57);
CCoordinate* Coordinate221 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate221->setPoint(new float[144]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375});
IndexedFaceSet220->setCoord(*Coordinate221);

Shape217->setGeometry(IndexedFaceSet220);

fieldValue216->addChildren(*Shape217);

ProtoInstance214->addFieldValue(*fieldValue216);

fieldValue213->addChildren(*ProtoInstance214);

CProtoInstance* ProtoInstance222 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance222->setName("Joint");
ProtoInstance222->setDEF("hanim_r_ankle");
CfieldValue* fieldValue223 = new CfieldValue();
fieldValue223->setName("name");
fieldValue223->setValue("r_ankle");
ProtoInstance222->addFieldValue(*fieldValue223);

CfieldValue* fieldValue224 = new CfieldValue();
fieldValue224->setName("center");
fieldValue224->setValue("-0.064 0.0753 -0.0412");
ProtoInstance222->addFieldValue(*fieldValue224);

CfieldValue* fieldValue225 = new CfieldValue();
fieldValue225->setName("children");
CProtoInstance* ProtoInstance226 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance226->setName("Segment");
ProtoInstance226->setDEF("hanim_r_hindfoot");
CfieldValue* fieldValue227 = new CfieldValue();
fieldValue227->setName("name");
fieldValue227->setValue("r_hindfoot");
ProtoInstance226->addFieldValue(*fieldValue227);

CfieldValue* fieldValue228 = new CfieldValue();
fieldValue228->setName("children");
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance230 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material231 = (CMaterial *)(m_pScene.createNode("Material"));
Material231->setUSE("Shoe_Color");
Appearance230->setMaterial(*Material231);

Shape229->setAppearance(*Appearance230);

CIndexedFaceSet* IndexedFaceSet232 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet232->setCoordIndex(new int[392]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1});
IndexedFaceSet232->setCreaseAngle(1.57);
CCoordinate* Coordinate233 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate233->setPoint(new float[153]{-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862});
IndexedFaceSet232->setCoord(*Coordinate233);

Shape229->setGeometry(IndexedFaceSet232);

fieldValue228->addChildren(*Shape229);

ProtoInstance226->addFieldValue(*fieldValue228);

fieldValue225->addChildren(*ProtoInstance226);

ProtoInstance222->addFieldValue(*fieldValue225);

fieldValue213->addChildren(*ProtoInstance222);

ProtoInstance210->addFieldValue(*fieldValue213);

fieldValue201->addChildren(*ProtoInstance210);

ProtoInstance198->addFieldValue(*fieldValue201);

fieldValue153->addChildren(*ProtoInstance198);

ProtoInstance150->addFieldValue(*fieldValue153);

fieldValue149->addChildren(*ProtoInstance150);

CProtoInstance* ProtoInstance234 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance234->setName("Joint");
ProtoInstance234->setDEF("hanim_vl1");
CfieldValue* fieldValue235 = new CfieldValue();
fieldValue235->setName("name");
fieldValue235->setValue("vl1");
ProtoInstance234->addFieldValue(*fieldValue235);

CfieldValue* fieldValue236 = new CfieldValue();
fieldValue236->setName("center");
fieldValue236->setValue("-0.00405 1.07 -0.0275");
ProtoInstance234->addFieldValue(*fieldValue236);

CfieldValue* fieldValue237 = new CfieldValue();
fieldValue237->setName("children");
CProtoInstance* ProtoInstance238 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance238->setName("Segment");
ProtoInstance238->setDEF("hanim_c7");
CfieldValue* fieldValue239 = new CfieldValue();
fieldValue239->setName("name");
fieldValue239->setValue("l1");
ProtoInstance238->addFieldValue(*fieldValue239);

CfieldValue* fieldValue240 = new CfieldValue();
fieldValue240->setName("children");
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance242 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material243 = (CMaterial *)(m_pScene.createNode("Material"));
Material243->setDEF("Shirt_Color");
Material243->setAmbientIntensity(0.25);
Material243->setDiffuseColor(new float[3]{0.6,0.0745,0.1137});
Appearance242->setMaterial(*Material243);

CImageTexture* ImageTexture244 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture244->setDEF("small_logo_Tex");
ImageTexture244->setUrl(new CString[2]{"small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"}, 2);
Appearance242->setTexture(*ImageTexture244);

Shape241->setAppearance(*Appearance242);

CIndexedFaceSet* IndexedFaceSet245 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet245->setCoordIndex(new int[1234]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1});
IndexedFaceSet245->setCreaseAngle(1.59);
CCoordinate* Coordinate246 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate246->setPoint(new float[534]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168});
IndexedFaceSet245->setCoord(*Coordinate246);

CTextureCoordinate* TextureCoordinate247 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate247->setPoint(new float[356]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
IndexedFaceSet245->setTexCoord(*TextureCoordinate247);

Shape241->setGeometry(IndexedFaceSet245);

fieldValue240->addChildren(*Shape241);

ProtoInstance238->addFieldValue(*fieldValue240);

fieldValue237->addChildren(*ProtoInstance238);

CProtoInstance* ProtoInstance248 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance248->setName("Joint");
ProtoInstance248->setDEF("hanim_l_shoulder");
CfieldValue* fieldValue249 = new CfieldValue();
fieldValue249->setName("name");
fieldValue249->setValue("l_shoulder");
ProtoInstance248->addFieldValue(*fieldValue249);

CfieldValue* fieldValue250 = new CfieldValue();
fieldValue250->setName("center");
fieldValue250->setValue("0.167 1.36 -0.0518");
ProtoInstance248->addFieldValue(*fieldValue250);

CfieldValue* fieldValue251 = new CfieldValue();
fieldValue251->setName("children");
CProtoInstance* ProtoInstance252 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance252->setName("Segment");
ProtoInstance252->setDEF("hanim_l_upperarm");
CfieldValue* fieldValue253 = new CfieldValue();
fieldValue253->setName("name");
fieldValue253->setValue("l_upperarm");
ProtoInstance252->addFieldValue(*fieldValue253);

CfieldValue* fieldValue254 = new CfieldValue();
fieldValue254->setName("children");
CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setDEF("l_upperarm_adjust");
Transform255->setCenter(new float[3]{0.182,1.22,-0.047});
Transform255->setRotation(new float[4]{1,0,0,0.119});
Transform255->setTranslation(new float[3]{0,0.0004203,-0.01665});
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance257 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material258 = (CMaterial *)(m_pScene.createNode("Material"));
Material258->setDEF("Skin_Color");
Material258->setAmbientIntensity(0.25);
Material258->setDiffuseColor(new float[3]{0.749,0.601,0.462});
Appearance257->setMaterial(*Material258);

Shape256->setAppearance(*Appearance257);

CIndexedFaceSet* IndexedFaceSet259 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet259->setCoordIndex(new int[160]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1});
IndexedFaceSet259->setCreaseAngle(1.65);
CCoordinate* Coordinate260 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate260->setPoint(new float[66]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352});
IndexedFaceSet259->setCoord(*Coordinate260);

Shape256->setGeometry(IndexedFaceSet259);

Transform255->addChildren(*Shape256);

fieldValue254->addChildren(*Transform255);

ProtoInstance252->addFieldValue(*fieldValue254);

fieldValue251->addChildren(*ProtoInstance252);

CProtoInstance* ProtoInstance261 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance261->setName("Joint");
ProtoInstance261->setDEF("hanim_l_elbow");
CfieldValue* fieldValue262 = new CfieldValue();
fieldValue262->setName("name");
fieldValue262->setValue("l_elbow");
ProtoInstance261->addFieldValue(*fieldValue262);

CfieldValue* fieldValue263 = new CfieldValue();
fieldValue263->setName("center");
fieldValue263->setValue("0.196 1.07 -0.0518");
ProtoInstance261->addFieldValue(*fieldValue263);

CfieldValue* fieldValue264 = new CfieldValue();
fieldValue264->setName("children");
CProtoInstance* ProtoInstance265 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance265->setName("Segment");
ProtoInstance265->setDEF("hanim_l_forearm");
CfieldValue* fieldValue266 = new CfieldValue();
fieldValue266->setName("name");
fieldValue266->setValue("l_forearm");
ProtoInstance265->addFieldValue(*fieldValue266);

CfieldValue* fieldValue267 = new CfieldValue();
fieldValue267->setName("children");
CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
Transform268->setDEF("l_forearm_adjust");
Transform268->setCenter(new float[3]{0.198,0.961,-0.0405});
Transform268->setRotation(new float[4]{-1,0,0,0.1});
Transform268->setTranslation(new float[3]{0,0.003724,-0.0236});
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance270 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material271 = (CMaterial *)(m_pScene.createNode("Material"));
Material271->setUSE("Skin_Color");
Appearance270->setMaterial(*Material271);

Shape269->setAppearance(*Appearance270);

CIndexedFaceSet* IndexedFaceSet272 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet272->setCoordIndex(new int[136]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1});
IndexedFaceSet272->setCreaseAngle(1.75);
CCoordinate* Coordinate273 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate273->setPoint(new float[57]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609});
IndexedFaceSet272->setCoord(*Coordinate273);

Shape269->setGeometry(IndexedFaceSet272);

Transform268->addChildren(*Shape269);

fieldValue267->addChildren(*Transform268);

ProtoInstance265->addFieldValue(*fieldValue267);

fieldValue264->addChildren(*ProtoInstance265);

CProtoInstance* ProtoInstance274 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance274->setName("Joint");
ProtoInstance274->setDEF("hanim_l_wrist");
CfieldValue* fieldValue275 = new CfieldValue();
fieldValue275->setName("name");
fieldValue275->setValue("l_wrist");
ProtoInstance274->addFieldValue(*fieldValue275);

CfieldValue* fieldValue276 = new CfieldValue();
fieldValue276->setName("center");
fieldValue276->setValue("0.213 0.811 -0.0338");
ProtoInstance274->addFieldValue(*fieldValue276);

CfieldValue* fieldValue277 = new CfieldValue();
fieldValue277->setName("children");
CProtoInstance* ProtoInstance278 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance278->setName("Segment");
ProtoInstance278->setDEF("hanim_l_hand");
CfieldValue* fieldValue279 = new CfieldValue();
fieldValue279->setName("name");
fieldValue279->setValue("l_hand");
ProtoInstance278->addFieldValue(*fieldValue279);

CfieldValue* fieldValue280 = new CfieldValue();
fieldValue280->setName("children");
CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform281->setDEF("l_hand_adjust");
Transform281->setCenter(new float[3]{0.213,0.811,-0.0338});
Transform281->setRotation(new float[4]{-0.06361,-0.9967,0.04988,1.333});
Transform281->setTranslation(new float[3]{0,0.005142,-0.008662});
CShape* Shape282 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance283 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material284 = (CMaterial *)(m_pScene.createNode("Material"));
Material284->setUSE("Skin_Color");
Appearance283->setMaterial(*Material284);

Shape282->setAppearance(*Appearance283);

CIndexedFaceSet* IndexedFaceSet285 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet285->setCoordIndex(new int[368]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1});
IndexedFaceSet285->setCreaseAngle(1.48);
CCoordinate* Coordinate286 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate286->setPoint(new float[144]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453});
IndexedFaceSet285->setCoord(*Coordinate286);

Shape282->setGeometry(IndexedFaceSet285);

Transform281->addChildren(*Shape282);

fieldValue280->addChildren(*Transform281);

ProtoInstance278->addFieldValue(*fieldValue280);

fieldValue277->addChildren(*ProtoInstance278);

ProtoInstance274->addFieldValue(*fieldValue277);

fieldValue264->addChildren(*ProtoInstance274);

ProtoInstance261->addFieldValue(*fieldValue264);

fieldValue251->addChildren(*ProtoInstance261);

ProtoInstance248->addFieldValue(*fieldValue251);

fieldValue237->addChildren(*ProtoInstance248);

CProtoInstance* ProtoInstance287 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance287->setName("Joint");
ProtoInstance287->setDEF("hanim_r_shoulder");
CfieldValue* fieldValue288 = new CfieldValue();
fieldValue288->setName("name");
fieldValue288->setValue("r_shoulder");
ProtoInstance287->addFieldValue(*fieldValue288);

CfieldValue* fieldValue289 = new CfieldValue();
fieldValue289->setName("center");
fieldValue289->setValue("-0.167 1.36 -0.0458");
ProtoInstance287->addFieldValue(*fieldValue289);

CfieldValue* fieldValue290 = new CfieldValue();
fieldValue290->setName("children");
CProtoInstance* ProtoInstance291 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance291->setName("Segment");
ProtoInstance291->setDEF("hanim_r_upperarm");
CfieldValue* fieldValue292 = new CfieldValue();
fieldValue292->setName("name");
fieldValue292->setValue("r_upperarm");
ProtoInstance291->addFieldValue(*fieldValue292);

CfieldValue* fieldValue293 = new CfieldValue();
fieldValue293->setName("children");
CTransform* Transform294 = (CTransform *)(m_pScene.createNode("Transform"));
Transform294->setDEF("r_upperarm_adjust");
Transform294->setCenter(new float[3]{-0.182,1.22,-0.047});
Transform294->setRotation(new float[4]{1,0,0,0.0836});
Transform294->setTranslation(new float[3]{0,0.000589,-0.01169});
CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance296 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material297 = (CMaterial *)(m_pScene.createNode("Material"));
Material297->setUSE("Skin_Color");
Appearance296->setMaterial(*Material297);

Shape295->setAppearance(*Appearance296);

CIndexedFaceSet* IndexedFaceSet298 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet298->setCoordIndex(new int[208]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1});
IndexedFaceSet298->setCreaseAngle(1.53);
CCoordinate* Coordinate299 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate299->setPoint(new float[84]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421});
IndexedFaceSet298->setCoord(*Coordinate299);

Shape295->setGeometry(IndexedFaceSet298);

Transform294->addChildren(*Shape295);

fieldValue293->addChildren(*Transform294);

ProtoInstance291->addFieldValue(*fieldValue293);

fieldValue290->addChildren(*ProtoInstance291);

CProtoInstance* ProtoInstance300 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance300->setName("Joint");
ProtoInstance300->setDEF("hanim_r_elbow");
CfieldValue* fieldValue301 = new CfieldValue();
fieldValue301->setName("name");
fieldValue301->setValue("r_elbow");
ProtoInstance300->addFieldValue(*fieldValue301);

CfieldValue* fieldValue302 = new CfieldValue();
fieldValue302->setName("center");
fieldValue302->setValue("-0.192 1.07 -0.0498");
ProtoInstance300->addFieldValue(*fieldValue302);

CfieldValue* fieldValue303 = new CfieldValue();
fieldValue303->setName("children");
CProtoInstance* ProtoInstance304 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance304->setName("Segment");
ProtoInstance304->setDEF("hanim_r_forearm");
CfieldValue* fieldValue305 = new CfieldValue();
fieldValue305->setName("name");
fieldValue305->setValue("r_forearm");
ProtoInstance304->addFieldValue(*fieldValue305);

CfieldValue* fieldValue306 = new CfieldValue();
fieldValue306->setName("children");
CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
Transform307->setDEF("r_forearm_adjust");
Transform307->setCenter(new float[3]{-0.198,0.961,-0.0397});
Transform307->setRotation(new float[4]{-1,0,0,0.1254});
Transform307->setTranslation(new float[3]{0,0.003466,-0.01065});
CShape* Shape308 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance309 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material310 = (CMaterial *)(m_pScene.createNode("Material"));
Material310->setUSE("Skin_Color");
Appearance309->setMaterial(*Material310);

Shape308->setAppearance(*Appearance309);

CIndexedFaceSet* IndexedFaceSet311 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet311->setCoordIndex(new int[184]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1});
IndexedFaceSet311->setCreaseAngle(1.73);
CCoordinate* Coordinate312 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate312->setPoint(new float[75]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373});
IndexedFaceSet311->setCoord(*Coordinate312);

Shape308->setGeometry(IndexedFaceSet311);

Transform307->addChildren(*Shape308);

fieldValue306->addChildren(*Transform307);

ProtoInstance304->addFieldValue(*fieldValue306);

fieldValue303->addChildren(*ProtoInstance304);

CProtoInstance* ProtoInstance313 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance313->setName("Joint");
ProtoInstance313->setDEF("hanim_r_wrist");
CfieldValue* fieldValue314 = new CfieldValue();
fieldValue314->setName("name");
fieldValue314->setValue("r_wrist");
ProtoInstance313->addFieldValue(*fieldValue314);

CfieldValue* fieldValue315 = new CfieldValue();
fieldValue315->setName("center");
fieldValue315->setValue("-0.217 0.811 -0.0338");
ProtoInstance313->addFieldValue(*fieldValue315);

CfieldValue* fieldValue316 = new CfieldValue();
fieldValue316->setName("children");
CProtoInstance* ProtoInstance317 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance317->setName("Segment");
ProtoInstance317->setDEF("hanim_r_hand");
CfieldValue* fieldValue318 = new CfieldValue();
fieldValue318->setName("name");
fieldValue318->setValue("r_hand");
ProtoInstance317->addFieldValue(*fieldValue318);

CfieldValue* fieldValue319 = new CfieldValue();
fieldValue319->setName("children");
CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setDEF("r_hand_adjust");
Transform320->setCenter(new float[3]{-0.217,0.811,-0.0338});
Transform320->setRotation(new float[4]{-0.09024,0.994,-0.0624,1.216});
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance322 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material323 = (CMaterial *)(m_pScene.createNode("Material"));
Material323->setUSE("Skin_Color");
Appearance322->setMaterial(*Material323);

Shape321->setAppearance(*Appearance322);

CIndexedFaceSet* IndexedFaceSet324 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet324->setCoordIndex(new int[368]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1});
IndexedFaceSet324->setCreaseAngle(1.57);
CCoordinate* Coordinate325 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate325->setPoint(new float[144]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454});
IndexedFaceSet324->setCoord(*Coordinate325);

Shape321->setGeometry(IndexedFaceSet324);

Transform320->addChildren(*Shape321);

fieldValue319->addChildren(*Transform320);

ProtoInstance317->addFieldValue(*fieldValue319);

fieldValue316->addChildren(*ProtoInstance317);

ProtoInstance313->addFieldValue(*fieldValue316);

fieldValue303->addChildren(*ProtoInstance313);

ProtoInstance300->addFieldValue(*fieldValue303);

fieldValue290->addChildren(*ProtoInstance300);

ProtoInstance287->addFieldValue(*fieldValue290);

fieldValue237->addChildren(*ProtoInstance287);

CProtoInstance* ProtoInstance326 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance326->setName("Joint");
ProtoInstance326->setDEF("hanim_vc4");
CfieldValue* fieldValue327 = new CfieldValue();
fieldValue327->setName("name");
fieldValue327->setValue("vc4");
ProtoInstance326->addFieldValue(*fieldValue327);

CfieldValue* fieldValue328 = new CfieldValue();
fieldValue328->setName("center");
fieldValue328->setValue("0 1.43 -0.0458");
ProtoInstance326->addFieldValue(*fieldValue328);

CfieldValue* fieldValue329 = new CfieldValue();
fieldValue329->setName("children");
CProtoInstance* ProtoInstance330 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance330->setName("Segment");
ProtoInstance330->setDEF("hanim_c4");
CfieldValue* fieldValue331 = new CfieldValue();
fieldValue331->setName("name");
fieldValue331->setValue("c4");
ProtoInstance330->addFieldValue(*fieldValue331);

CfieldValue* fieldValue332 = new CfieldValue();
fieldValue332->setName("children");
CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance334 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material335 = (CMaterial *)(m_pScene.createNode("Material"));
Material335->setUSE("Skin_Color");
Appearance334->setMaterial(*Material335);

Shape333->setAppearance(*Appearance334);

CIndexedFaceSet* IndexedFaceSet336 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet336->setDEF("neck");
IndexedFaceSet336->setCoordIndex(new int[112]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1});
IndexedFaceSet336->setCreaseAngle(1.91);
CCoordinate* Coordinate337 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate337->setPoint(new float[48]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1});
IndexedFaceSet336->setCoord(*Coordinate337);

Shape333->setGeometry(IndexedFaceSet336);

fieldValue332->addChildren(*Shape333);

ProtoInstance330->addFieldValue(*fieldValue332);

fieldValue329->addChildren(*ProtoInstance330);

CProtoInstance* ProtoInstance338 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance338->setName("Joint");
ProtoInstance338->setDEF("hanim_skullbase");
CfieldValue* fieldValue339 = new CfieldValue();
fieldValue339->setName("name");
fieldValue339->setValue("skullbase");
ProtoInstance338->addFieldValue(*fieldValue339);

CfieldValue* fieldValue340 = new CfieldValue();
fieldValue340->setName("center");
fieldValue340->setValue("0 1.54 -0.0409");
ProtoInstance338->addFieldValue(*fieldValue340);

CfieldValue* fieldValue341 = new CfieldValue();
fieldValue341->setName("children");
CProtoInstance* ProtoInstance342 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance342->setName("Segment");
ProtoInstance342->setDEF("hanim_skull");
CfieldValue* fieldValue343 = new CfieldValue();
fieldValue343->setName("name");
fieldValue343->setValue("skull");
ProtoInstance342->addFieldValue(*fieldValue343);

CfieldValue* fieldValue344 = new CfieldValue();
fieldValue344->setName("children");
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance346 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material347 = (CMaterial *)(m_pScene.createNode("Material"));
Material347->setUSE("Skin_Color");
Appearance346->setMaterial(*Material347);

Shape345->setAppearance(*Appearance346);

CIndexedFaceSet* IndexedFaceSet348 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet348->setDEF("headIFS");
IndexedFaceSet348->setColorIndex(new int[1640]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1});
IndexedFaceSet348->setCoordIndex(new int[1640]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1});
IndexedFaceSet348->setCreaseAngle(0.7854);
CCoordinate* Coordinate349 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate349->setDEF("Face");
Coordinate349->setPoint(new float[774]{0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102});
IndexedFaceSet348->setCoord(*Coordinate349);

CColor* Color350 = (CColor *)(m_pScene.createNode("Color"));
Color350->setColor(new float[12]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902});
IndexedFaceSet348->setColor(*Color350);

Shape345->setGeometry(IndexedFaceSet348);

fieldValue344->addChildren(*Shape345);

ProtoInstance342->addFieldValue(*fieldValue344);

fieldValue341->addChildren(*ProtoInstance342);

ProtoInstance338->addFieldValue(*fieldValue341);

fieldValue329->addChildren(*ProtoInstance338);

ProtoInstance326->addFieldValue(*fieldValue329);

fieldValue237->addChildren(*ProtoInstance326);

ProtoInstance234->addFieldValue(*fieldValue237);

fieldValue149->addChildren(*ProtoInstance234);

ProtoInstance146->addFieldValue(*fieldValue149);

fieldValue145->addChildren(*ProtoInstance146);

CGroup* Group351 = (CGroup *)(m_pScene.createNode("Group"));
fieldValue145->addChildren(*Group351);

ProtoInstance141->addFieldValue(*fieldValue145);

CfieldValue* fieldValue352 = new CfieldValue();
fieldValue352->setName("joints");
CProtoInstance* ProtoInstance353 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance353->setUSE("hanim_humanoid_root");
fieldValue352->addChildren(*ProtoInstance353);

CProtoInstance* ProtoInstance354 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance354->setUSE("hanim_sacroiliac");
fieldValue352->addChildren(*ProtoInstance354);

CProtoInstance* ProtoInstance355 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance355->setUSE("hanim_l_hip");
fieldValue352->addChildren(*ProtoInstance355);

CProtoInstance* ProtoInstance356 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance356->setUSE("hanim_l_knee");
fieldValue352->addChildren(*ProtoInstance356);

CProtoInstance* ProtoInstance357 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance357->setUSE("hanim_l_ankle");
fieldValue352->addChildren(*ProtoInstance357);

CProtoInstance* ProtoInstance358 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance358->setUSE("hanim_r_hip");
fieldValue352->addChildren(*ProtoInstance358);

CProtoInstance* ProtoInstance359 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance359->setUSE("hanim_r_knee");
fieldValue352->addChildren(*ProtoInstance359);

CProtoInstance* ProtoInstance360 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance360->setUSE("hanim_r_ankle");
fieldValue352->addChildren(*ProtoInstance360);

CProtoInstance* ProtoInstance361 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance361->setUSE("hanim_vl1");
fieldValue352->addChildren(*ProtoInstance361);

CProtoInstance* ProtoInstance362 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance362->setUSE("hanim_l_shoulder");
fieldValue352->addChildren(*ProtoInstance362);

CProtoInstance* ProtoInstance363 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance363->setUSE("hanim_l_elbow");
fieldValue352->addChildren(*ProtoInstance363);

CProtoInstance* ProtoInstance364 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance364->setUSE("hanim_l_wrist");
fieldValue352->addChildren(*ProtoInstance364);

CProtoInstance* ProtoInstance365 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance365->setUSE("hanim_r_shoulder");
fieldValue352->addChildren(*ProtoInstance365);

CProtoInstance* ProtoInstance366 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance366->setUSE("hanim_r_elbow");
fieldValue352->addChildren(*ProtoInstance366);

CProtoInstance* ProtoInstance367 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance367->setUSE("hanim_r_wrist");
fieldValue352->addChildren(*ProtoInstance367);

CProtoInstance* ProtoInstance368 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance368->setUSE("hanim_vc4");
fieldValue352->addChildren(*ProtoInstance368);

CProtoInstance* ProtoInstance369 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance369->setUSE("hanim_skullbase");
fieldValue352->addChildren(*ProtoInstance369);

ProtoInstance141->addFieldValue(*fieldValue352);

CfieldValue* fieldValue370 = new CfieldValue();
fieldValue370->setName("segments");
CProtoInstance* ProtoInstance371 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance371->setUSE("hanim_pelvis");
fieldValue370->addChildren(*ProtoInstance371);

CProtoInstance* ProtoInstance372 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance372->setUSE("hanim_l_thigh");
fieldValue370->addChildren(*ProtoInstance372);

CProtoInstance* ProtoInstance373 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance373->setUSE("hanim_l_calf");
fieldValue370->addChildren(*ProtoInstance373);

CProtoInstance* ProtoInstance374 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance374->setUSE("hanim_l_hindfoot");
fieldValue370->addChildren(*ProtoInstance374);

CProtoInstance* ProtoInstance375 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance375->setUSE("hanim_r_thigh");
fieldValue370->addChildren(*ProtoInstance375);

CProtoInstance* ProtoInstance376 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance376->setUSE("hanim_r_calf");
fieldValue370->addChildren(*ProtoInstance376);

CProtoInstance* ProtoInstance377 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance377->setUSE("hanim_r_hindfoot");
fieldValue370->addChildren(*ProtoInstance377);

CProtoInstance* ProtoInstance378 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance378->setUSE("hanim_c7");
fieldValue370->addChildren(*ProtoInstance378);

CProtoInstance* ProtoInstance379 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance379->setUSE("hanim_l_upperarm");
fieldValue370->addChildren(*ProtoInstance379);

CProtoInstance* ProtoInstance380 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance380->setUSE("hanim_l_forearm");
fieldValue370->addChildren(*ProtoInstance380);

CProtoInstance* ProtoInstance381 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance381->setUSE("hanim_l_hand");
fieldValue370->addChildren(*ProtoInstance381);

CProtoInstance* ProtoInstance382 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance382->setUSE("hanim_r_upperarm");
fieldValue370->addChildren(*ProtoInstance382);

CProtoInstance* ProtoInstance383 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance383->setUSE("hanim_r_forearm");
fieldValue370->addChildren(*ProtoInstance383);

CProtoInstance* ProtoInstance384 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance384->setUSE("hanim_r_hand");
fieldValue370->addChildren(*ProtoInstance384);

CProtoInstance* ProtoInstance385 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance385->setUSE("hanim_c4");
fieldValue370->addChildren(*ProtoInstance385);

CProtoInstance* ProtoInstance386 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance386->setUSE("hanim_skull");
fieldValue370->addChildren(*ProtoInstance386);

ProtoInstance141->addFieldValue(*fieldValue370);

CfieldValue* fieldValue387 = new CfieldValue();
fieldValue387->setName("viewpoints");
CViewpoint* Viewpoint388 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint388->setDEF("InclinedView");
Viewpoint388->setDescription("Inclined View");
Viewpoint388->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint388->setPosition(new float[3]{1.62,1.05,2.06});
fieldValue387->addChildren(*Viewpoint388);

CViewpoint* Viewpoint389 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint389->setDEF("FrontView");
Viewpoint389->setDescription("Front View");
Viewpoint389->setPosition(new float[3]{0,0.854,2.57665});
fieldValue387->addChildren(*Viewpoint389);

CViewpoint* Viewpoint390 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint390->setDEF("SideView");
Viewpoint390->setDescription("Side View");
Viewpoint390->setOrientation(new float[4]{0,1,0,1.57079});
Viewpoint390->setPosition(new float[3]{2.5929,0.854,0});
fieldValue387->addChildren(*Viewpoint390);

CViewpoint* Viewpoint391 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint391->setDEF("TopView");
Viewpoint391->setDescription("Top View");
Viewpoint391->setOrientation(new float[4]{1,0,0,-1.57079});
Viewpoint391->setPosition(new float[3]{0,3.4495,0});
fieldValue387->addChildren(*Viewpoint391);

ProtoInstance141->addFieldValue(*fieldValue387);

group->addChildren(*ProtoInstance141);

CWorldInfo* WorldInfo392 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo392->setInfo(new CString[1]{"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."}, 1);
WorldInfo392->setTitle("Nancy - an HAnim compliant avatar by 3Name3D");
group->addChildren(*WorldInfo392);

CNavigationInfo* NavigationInfo393 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo393->setAvatarSize(new float[3]{0.15,1.53,0.75}, 3);
NavigationInfo393->setSpeed(0.5);
NavigationInfo393->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo393);

CGroup* Group394 = (CGroup *)(m_pScene.createNode("Group"));
Group394->setDEF("Interface");
CTransform* Transform395 = (CTransform *)(m_pScene.createNode("Transform"));
CProximitySensor* ProximitySensor396 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor396->setDEF("HudProx");
ProximitySensor396->setCenter(new float[3]{0,20,0});
ProximitySensor396->setSize(new float[3]{500,100,500});
Transform395->addChildren(*ProximitySensor396);

Group394->addChildren(*Transform395);

CCollision* Collision397 = (CCollision *)(m_pScene.createNode("Collision"));
Collision397->setDEF("HUD");
Collision397->setEnabled(False);
CTransform* Transform398 = (CTransform *)(m_pScene.createNode("Transform"));
Transform398->setDEF("HudXform");
CTransform* Transform399 = (CTransform *)(m_pScene.createNode("Transform"));
Transform399->setScale(new float[3]{0.012,0.012,0.012});
Transform399->setTranslation(new float[3]{0.01107,-0.025,-0.08});
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform400->setDEF("Stand_Text");
CTouchSensor* TouchSensor401 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor401->setDEF("Stand_Touch");
TouchSensor401->setDescription("click for behavior");
Transform400->addChildren(*TouchSensor401);

CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setDEF("Stand");
CIndexedFaceSet* IndexedFaceSet403 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet403->setCoordIndex(new int[448]{1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1});
CCoordinate* Coordinate404 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate404->setPoint(new float[531]{-3.21,-0.0154,0,-3.15,-0.0154,0,-3.14,-0.0467,0,-3.1,-0.0601,0,-3.05,-0.051,0,-3.04,-0.0254,0,-3.05,-0.00248,0,-3.1,0.0122,0,-3.16,0.03,0,-3.2,0.0684,0,-3.2,0.133,0,-3.16,0.17,0,-3.1,0.182,0,-3.04,0.171,0,-3.01,0.136,0,-3,0.095,0,-3.05,0.095,0,-3.06,0.125,0,-3.1,0.136,0,-3.14,0.126,0,-3.15,0.103,0,-3.14,0.0815,0,-3.1,0.0689,0,-3.04,0.0512,0,-3,0.0249,0,-2.99,-0.0195,0,-3,-0.0708,0,-3.05,-0.104,0,-3.1,-0.108,0,-3.16,-0.0947,0,-3.2,-0.0586,0,-2.86,-0.102,0,-2.9,-0.102,0,-2.94,-0.0832,0,-2.94,-0.0457,0,-2.94,0.0645,0,-2.97,0.0645,0,-2.97,0.103,0,-2.94,0.103,0,-2.94,0.158,0,-2.89,0.158,0,-2.89,0.103,0,-2.86,0.103,0,-2.86,0.0645,0,-2.89,0.0645,0,-2.89,-0.0483,0,-2.88,-0.0608,0,-2.86,-0.0612,0,-2.71,-0.000798,0,-2.71,-0.0373,0,-2.74,-0.0637,0,-2.77,-0.0624,0,-2.78,-0.0416,0,-2.77,-0.0195,0,-2.71,-0.0754,0,-2.74,-0.103,0,-2.79,-0.106,0,-2.82,-0.0865,0,-2.84,-0.0431,0,-2.82,0.000177,0,-2.78,0.0201,0,-2.73,0.0275,0,-2.71,0.0446,0,-2.72,0.0614,0,-2.74,0.0675,0,-2.77,0.0573,0,-2.78,0.039,0,-2.83,0.039,0,-2.82,0.0765,0,-2.78,0.105,0,-2.74,0.11,0,-2.71,0.107,0,-2.67,0.0849,0,-2.66,0.0526,0,-2.66,-0.0763,0,-2.65,-0.101,0,-2.7,-0.101,0,-2.61,-0.101,0,-2.61,0.103,0,-2.56,0.103,0,-2.56,0.0787,0,-2.52,0.104,0,-2.47,0.105,0,-2.43,0.0743,0,-2.43,0.038,0,-2.43,-0.101,0,-2.48,-0.101,0,-2.48,0.0224,0,-2.49,0.0514,0,-2.52,0.0627,0,-2.54,0.0505,0,-2.55,0.02,0,-2.55,-0.101,0,-2.33,0.0279,0,-2.31,0.0587,0,-2.27,0.0589,0,-2.25,0.0281,0,-2.25,-0.0232,0,-2.27,-0.0563,0,-2.31,-0.057,0,-2.33,-0.0245,0,-2.19,0.175,0,-2.19,-0.101,0,-2.25,-0.101,0,-2.25,-0.073,0,-2.26,-0.0913,0,-2.31,-0.108,0,-2.35,-0.0915,0,-2.38,-0.0424,0,-2.39,0.0243,0,-2.37,0.0809,0,-2.32,0.108,0,-2.28,0.106,0,-2.25,0.0776,0,-2.25,0.175,0,-2.48,0.0224,0,-2.43,0.038,0,-2.49,0.0514,0,-2.43,0.0743,0,-2.49,0.0514,0,-2.47,0.105,0,-2.52,0.0627,0,-2.52,0.104,0,-2.54,0.0505,0,-2.56,0.0787,0,-2.55,0.02,0,-2.56,0.0787,0,-2.61,-0.101,0,-2.55,0.02,0,-2.61,-0.101,0,-2.56,0.0787,0,-2.89,0.103,0,-2.94,0.103,0,-2.89,0.0645,0,-2.89,0.103,0,-2.94,0.103,0,-2.94,0.0645,0,-2.89,0.0645,0,-2.94,0.0645,0,-2.89,-0.0483,0,-2.94,-0.0457,0,-2.89,-0.0483,0,-2.94,-0.0832,0,-2.88,-0.0608,0,-2.9,-0.102,0,-3.06,0.125,0,-3.01,0.136,0,-3.06,0.125,0,-3.04,0.171,0,-3.1,0.136,0,-3.1,0.182,0,-3.14,0.126,0,-3.16,0.17,0,-3.15,0.103,0,-3.2,0.133,0,-3.14,0.0815,0,-3.2,0.0684,0,-3.14,0.0815,0,-3.16,0.03,0,-3.1,0.0689,0,-3.1,0.0122,0,-3.04,0.0512,0,-3.05,-0.00248,0,-3,0.0249,0,-3.05,-0.00248,0,-2.99,-0.0195,0,-3.04,-0.0254,0,-3,-0.0708,0,-3.05,-0.051,0,-3.05,-0.104,0,-3.05,-0.051,0,-3.1,-0.108,0,-3.1,-0.0601,0,-3.16,-0.0947,0,-3.14,-0.0467,0,-3.15,-0.0154,0,-3.2,-0.0586,0});
IndexedFaceSet403->setCoord(*Coordinate404);

Shape402->setGeometry(IndexedFaceSet403);

CAppearance* Appearance405 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material406 = (CMaterial *)(m_pScene.createNode("Material"));
Material406->setDEF("text_color");
Material406->setAmbientIntensity(0);
Material406->setDiffuseColor(new float[3]{0,0,0});
Material406->setEmissiveColor(new float[3]{0.819,0.521,0.169});
Appearance405->setMaterial(*Material406);

Shape402->setAppearance(*Appearance405);

Transform400->addChildren(*Shape402);

CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setScale(new float[3]{84.89,77.52,77.52});
Transform407->setTranslation(new float[3]{0.04092,1.843,3.826});
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setDEF("Stand_Back");
CIndexedFaceSet* IndexedFaceSet409 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet409->setCoordIndex(new int[8]{0,2,3,-1,2,0,1,-1});
CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setPoint(new float[12]{-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05});
IndexedFaceSet409->setCoord(*Coordinate410);

Shape408->setGeometry(IndexedFaceSet409);

CAppearance* Appearance411 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material412 = (CMaterial *)(m_pScene.createNode("Material"));
Material412->setDEF("Clear");
Material412->setAmbientIntensity(0);
Material412->setDiffuseColor(new float[3]{0,0,0});
Material412->setTransparency(1);
Appearance411->setMaterial(*Material412);

Shape408->setAppearance(*Appearance411);

Transform407->addChildren(*Shape408);

Transform400->addChildren(*Transform407);

Transform399->addChildren(*Transform400);

CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform413->setDEF("Walk_Text");
CTouchSensor* TouchSensor414 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor414->setDEF("Walk_Touch");
TouchSensor414->setDescription("click for behavior");
Transform413->addChildren(*TouchSensor414);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
Shape415->setDEF("WALK");
CIndexedFaceSet* IndexedFaceSet416 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet416->setCoordIndex(new int[212]{0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1});
CCoordinate* Coordinate417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate417->setPoint(new float[174]{-1.88,-0.101,0,-1.96,0.175,0,-1.91,0.175,0,-1.86,-0.0195,0,-1.82,0.175,0,-1.76,0.175,0,-1.72,-0.0195,0,-1.67,0.175,0,-1.61,0.175,0,-1.69,-0.101,0,-1.75,-0.101,0,-1.79,0.111,0,-1.83,-0.101,0,-1.38,-0.101,0,-1.38,0.175,0,-1.32,0.175,0,-1.32,-0.101,0,-1.27,-0.101,0,-1.27,0.175,0,-1.22,0.175,0,-1.22,0.0304,0,-1.16,0.103,0,-1.09,0.103,0,-1.16,0.0272,0,-1.09,-0.101,0,-1.15,-0.101,0,-1.2,-0.0141,0,-1.22,-0.0363,0,-1.22,-0.101,0,-1.48,-0.0754,0,-1.48,-0.0373,0,-1.51,-0.0637,0,-1.51,-0.103,0,-1.47,-0.101,0,-1.42,-0.101,0,-1.43,-0.0763,0,-1.43,0.0526,0,-1.48,-0.000798,0,-1.48,0.0446,0,-1.5,0.0275,0,-1.55,0.0201,0,-1.54,-0.0195,0,-1.59,0.000177,0,-1.61,-0.0431,0,-1.55,-0.0416,0,-1.59,-0.0865,0,-1.54,-0.0624,0,-1.56,-0.106,0,-1.44,0.0849,0,-1.49,0.0614,0,-1.48,0.107,0,-1.51,0.0675,0,-1.52,0.11,0,-1.55,0.105,0,-1.54,0.0573,0,-1.59,0.0765,0,-1.6,0.039,0,-1.55,0.039,0});
IndexedFaceSet416->setCoord(*Coordinate417);

Shape415->setGeometry(IndexedFaceSet416);

CAppearance* Appearance418 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material419 = (CMaterial *)(m_pScene.createNode("Material"));
Material419->setUSE("text_color");
Appearance418->setMaterial(*Material419);

Shape415->setAppearance(*Appearance418);

Transform413->addChildren(*Shape415);

CTransform* Transform420 = (CTransform *)(m_pScene.createNode("Transform"));
Transform420->setScale(new float[3]{81.3,81.3,81.31});
Transform420->setTranslation(new float[3]{-0.0414,1.941,4.015});
CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
Shape421->setDEF("Walk_Back");
CIndexedFaceSet* IndexedFaceSet422 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet422->setCoordIndex(new int[8]{1,3,0,-1,3,1,2,-1});
CCoordinate* Coordinate423 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate423->setPoint(new float[12]{-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05});
IndexedFaceSet422->setCoord(*Coordinate423);

Shape421->setGeometry(IndexedFaceSet422);

CAppearance* Appearance424 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material425 = (CMaterial *)(m_pScene.createNode("Material"));
Material425->setUSE("Clear");
Appearance424->setMaterial(*Material425);

Shape421->setAppearance(*Appearance424);

Transform420->addChildren(*Shape421);

Transform413->addChildren(*Transform420);

Transform399->addChildren(*Transform413);

CTransform* Transform426 = (CTransform *)(m_pScene.createNode("Transform"));
Transform426->setDEF("Run_Text");
CTouchSensor* TouchSensor427 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor427->setDEF("Run_Touch");
TouchSensor427->setDescription("click for behavior");
Transform426->addChildren(*TouchSensor427);

CShape* Shape428 = (CShape *)(m_pScene.createNode("Shape"));
Shape428->setDEF("Run");
CIndexedFaceSet* IndexedFaceSet429 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet429->setCoordIndex(new int[204]{24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1});
CCoordinate* Coordinate430 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate430->setPoint(new float[273]{-0.829,-0.101,0,-0.829,0.175,0,-0.662,0.172,0,-0.622,0.148,0,-0.607,0.103,0,-0.62,0.0501,0,-0.648,0.0316,0,-0.615,-0.0063,0,-0.611,-0.0764,0,-0.601,-0.101,0,-0.664,-0.101,0,-0.671,-0.0373,0,-0.68,-0.00372,0,-0.712,0.00648,0,-0.772,0.00648,0,-0.772,-0.101,0,-0.772,0.0546,0,-0.772,0.127,0,-0.703,0.127,0,-0.673,0.118,0,-0.663,0.091,0,-0.674,0.063,0,-0.705,0.0546,0,-0.379,0.103,0,-0.379,-0.101,0,-0.432,-0.101,0,-0.432,-0.0764,0,-0.466,-0.101,0,-0.518,-0.102,0,-0.555,-0.072,0,-0.56,-0.0357,0,-0.56,0.103,0,-0.506,0.103,0,-0.506,-0.0201,0,-0.5,-0.0491,0,-0.472,-0.0604,0,-0.443,-0.0482,0,-0.433,-0.0177,0,-0.433,0.103,0,-0.331,-0.101,0,-0.331,0.103,0,-0.278,0.103,0,-0.278,0.0787,0,-0.244,0.104,0,-0.192,0.105,0,-0.154,0.0743,0,-0.149,0.038,0,-0.149,-0.101,0,-0.203,-0.101,0,-0.203,0.0224,0,-0.209,0.0514,0,-0.238,0.0627,0,-0.266,0.0505,0,-0.277,0.02,0,-0.277,-0.101,0,-0.506,-0.0201,0,-0.56,-0.0357,0,-0.5,-0.0491,0,-0.555,-0.072,0,-0.5,-0.0491,0,-0.518,-0.102,0,-0.472,-0.0604,0,-0.466,-0.101,0,-0.443,-0.0482,0,-0.432,-0.0764,0,-0.433,-0.0177,0,-0.432,-0.0764,0,-0.379,0.103,0,-0.433,-0.0177,0,-0.379,0.103,0,-0.432,-0.0764,0,-0.379,-0.101,0,-0.432,-0.0764,0,-0.203,0.0224,0,-0.149,0.038,0,-0.209,0.0514,0,-0.154,0.0743,0,-0.209,0.0514,0,-0.192,0.105,0,-0.238,0.0627,0,-0.244,0.104,0,-0.266,0.0505,0,-0.278,0.0787,0,-0.278,0.0787,0,-0.331,0.103,0,-0.277,0.02,0,-0.331,-0.101,0,-0.277,0.02,0,-0.278,0.0787,0,-0.277,0.02,0,-0.331,0.103,0});
IndexedFaceSet429->setCoord(*Coordinate430);

Shape428->setGeometry(IndexedFaceSet429);

CAppearance* Appearance431 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material432 = (CMaterial *)(m_pScene.createNode("Material"));
Material432->setUSE("text_color");
Appearance431->setMaterial(*Material432);

Shape428->setAppearance(*Appearance431);

Transform426->addChildren(*Shape428);

CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform433->setScale(new float[3]{82.47,82.47,82.48});
Transform433->setTranslation(new float[3]{-0.01579,1.968,4.074});
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
Shape434->setDEF("Run_Back");
CIndexedFaceSet* IndexedFaceSet435 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet435->setCoordIndex(new int[8]{0,2,3,-1,2,0,1,-1});
CCoordinate* Coordinate436 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate436->setPoint(new float[12]{-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05});
IndexedFaceSet435->setCoord(*Coordinate436);

Shape434->setGeometry(IndexedFaceSet435);

CAppearance* Appearance437 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material438 = (CMaterial *)(m_pScene.createNode("Material"));
Material438->setUSE("Clear");
Appearance437->setMaterial(*Material438);

Shape434->setAppearance(*Appearance437);

Transform433->addChildren(*Shape434);

Transform426->addChildren(*Transform433);

Transform399->addChildren(*Transform426);

CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setDEF("Jump_Text");
CTouchSensor* TouchSensor440 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor440->setDEF("Jump_Touch");
TouchSensor440->setDescription("click for behavior");
Transform439->addChildren(*TouchSensor440);

CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setDEF("Jump");
CIndexedFaceSet* IndexedFaceSet442 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet442->setCoordIndex(new int[296]{1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1});
CCoordinate* Coordinate443 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate443->setPoint(new float[420]{0.108,0.00195,0,0.163,0.00195,0,0.166,-0.0473,0,0.194,-0.0608,0,0.222,-0.0492,0,0.228,-0.017,0,0.228,0.175,0,0.284,0.175,0,0.284,-0.02,0,0.271,-0.0798,0,0.23,-0.104,0,0.193,-0.108,0,0.155,-0.102,0,0.117,-0.0714,0,0.108,-0.0357,0,0.563,-0.101,0,0.563,0.103,0,0.615,0.103,0,0.615,0.0803,0,0.649,0.105,0,0.696,0.105,0,0.728,0.0788,0,0.76,0.104,0,0.811,0.104,0,0.842,0.081,0,0.853,0.0416,0,0.853,-0.101,0,0.799,-0.101,0,0.799,0.0305,0,0.79,0.0544,0,0.767,0.0616,0,0.743,0.0507,0,0.734,0.0228,0,0.734,-0.101,0,0.681,-0.101,0,0.681,0.0301,0,0.673,0.0532,0,0.65,0.0611,0,0.626,0.0506,0,0.617,0.0224,0,0.617,-0.101,0,0.9,-0.182,0,0.9,0.103,0,0.952,0.103,0,0.952,0.0751,0,0.968,0.0934,0,1.01,0.11,0,1.05,0.103,0,1.07,0.0796,0,1.1,0.0251,0,1.1,-0.0222,0,1.07,-0.0788,0,1.03,-0.106,0,0.988,-0.103,0,0.953,-0.0755,0,0.953,-0.182,0,1.04,-0.000177,0,1.03,-0.0446,0,0.999,-0.0603,0,0.966,-0.0453,0,0.953,-0.000177,0,0.963,0.045,0,0.998,0.063,0,1.03,0.0462,0,0.515,-0.101,0,0.462,-0.0764,0,0.462,-0.101,0,0.388,-0.0201,0,0.388,0.103,0,0.334,0.103,0,0.334,-0.0357,0,0.394,-0.0491,0,0.388,-0.0201,0,0.334,-0.0357,0,0.339,-0.072,0,0.394,-0.0491,0,0.339,-0.072,0,0.376,-0.102,0,0.422,-0.0604,0,0.394,-0.0491,0,0.376,-0.102,0,0.428,-0.101,0,0.451,-0.0482,0,0.422,-0.0604,0,0.428,-0.101,0,0.462,-0.0764,0,0.461,-0.0177,0,0.451,-0.0482,0,0.462,-0.0764,0,0.515,0.103,0,0.461,0.103,0,0.461,-0.0177,0,0.515,0.103,0,0.461,-0.0177,0,0.462,-0.0764,0,0.515,-0.101,0,0.515,0.103,0,0.462,-0.0764,0,0.284,-0.02,0,0.228,-0.017,0,0.271,-0.0798,0,0.222,-0.0492,0,0.23,-0.104,0,0.194,-0.0608,0,0.193,-0.108,0,0.194,-0.0608,0,0.155,-0.102,0,0.166,-0.0473,0,0.117,-0.0714,0,0.166,-0.0473,0,0.108,-0.0357,0,0.166,-0.0473,0,0.799,0.0305,0,0.853,0.0416,0,0.79,0.0544,0,0.842,0.081,0,0.79,0.0544,0,0.811,0.104,0,0.767,0.0616,0,0.76,0.104,0,0.743,0.0507,0,0.728,0.0788,0,0.734,0.0228,0,0.728,0.0788,0,0.681,0.0301,0,0.734,0.0228,0,0.673,0.0532,0,0.728,0.0788,0,0.673,0.0532,0,0.696,0.105,0,0.65,0.0611,0,0.649,0.105,0,0.626,0.0506,0,0.615,0.0803,0,0.617,0.0224,0,0.615,0.0803,0,0.563,-0.101,0,0.617,0.0224,0,0.563,-0.101,0,0.615,0.0803,0});
IndexedFaceSet442->setCoord(*Coordinate443);

Shape441->setGeometry(IndexedFaceSet442);

CAppearance* Appearance444 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material445 = (CMaterial *)(m_pScene.createNode("Material"));
Material445->setUSE("text_color");
Appearance444->setMaterial(*Material445);

Shape441->setAppearance(*Appearance444);

Transform439->addChildren(*Shape441);

CTransform* Transform446 = (CTransform *)(m_pScene.createNode("Transform"));
Transform446->setScale(new float[3]{83.79,83.79,83.79});
Transform446->setTranslation(new float[3]{-0.008979,1.99,4.14});
CShape* Shape447 = (CShape *)(m_pScene.createNode("Shape"));
Shape447->setDEF("Jump_Back");
CIndexedFaceSet* IndexedFaceSet448 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet448->setCoordIndex(new int[8]{0,2,3,-1,2,0,1,-1});
CCoordinate* Coordinate449 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate449->setPoint(new float[12]{0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05});
IndexedFaceSet448->setCoord(*Coordinate449);

Shape447->setGeometry(IndexedFaceSet448);

CAppearance* Appearance450 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material451 = (CMaterial *)(m_pScene.createNode("Material"));
Material451->setUSE("Clear");
Appearance450->setMaterial(*Material451);

Shape447->setAppearance(*Appearance450);

Transform446->addChildren(*Shape447);

Transform439->addChildren(*Transform446);

Transform399->addChildren(*Transform439);

Transform398->addChildren(*Transform399);

Collision397->setProxy(*Transform398);

Group394->addChildren(*Collision397);

CTransform* Transform452 = (CTransform *)(m_pScene.createNode("Transform"));
Transform452->setDEF("Floor");
Transform452->setScale(new float[3]{1,0.0125,1});
Transform452->setTranslation(new float[3]{0,-0.0125,0});
CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box454 = (CBox *)(m_pScene.createNode("Box"));
Shape453->setGeometry(Box454);

CAppearance* Appearance455 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material456 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance455->setMaterial(*Material456);

Shape453->setAppearance(*Appearance455);

Transform452->addChildren(*Shape453);

Group394->addChildren(*Transform452);

group->addChildren(*Group394);

CGroup* Group457 = (CGroup *)(m_pScene.createNode("Group"));
Group457->setDEF("Animations");
CGroup* Group458 = (CGroup *)(m_pScene.createNode("Group"));
Group458->setDEF("Stand_Animation");
COrientationInterpolator* OrientationInterpolator459 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator459->setDEF("r_ankle_RotationInterpolator_Stand");
OrientationInterpolator459->setKey(new float[2]{0,1}, 2);
OrientationInterpolator459->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator459);

COrientationInterpolator* OrientationInterpolator460 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator460->setDEF("r_knee_RotationInterpolator_Stand");
OrientationInterpolator460->setKey(new float[2]{0,1}, 2);
OrientationInterpolator460->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator460);

COrientationInterpolator* OrientationInterpolator461 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator461->setDEF("r_hip_RotationInterpolator_Stand");
OrientationInterpolator461->setKey(new float[2]{0,1}, 2);
OrientationInterpolator461->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator461);

COrientationInterpolator* OrientationInterpolator462 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator462->setDEF("l_ankle_RotationInterpolator_Stand");
OrientationInterpolator462->setKey(new float[2]{0,1}, 2);
OrientationInterpolator462->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator462);

COrientationInterpolator* OrientationInterpolator463 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator463->setDEF("l_knee_RotationInterpolator_Stand");
OrientationInterpolator463->setKey(new float[2]{0,1}, 2);
OrientationInterpolator463->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator463);

COrientationInterpolator* OrientationInterpolator464 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator464->setDEF("l_hip_RotationInterpolator_Stand");
OrientationInterpolator464->setKey(new float[2]{0,1}, 2);
OrientationInterpolator464->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator464);

COrientationInterpolator* OrientationInterpolator465 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator465->setDEF("lower_body_RotationInterpolator_Stand");
OrientationInterpolator465->setKey(new float[2]{0,1}, 2);
OrientationInterpolator465->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator465);

COrientationInterpolator* OrientationInterpolator466 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator466->setDEF("r_wrist_RotationInterpolator_Stand");
OrientationInterpolator466->setKey(new float[2]{0,1}, 2);
OrientationInterpolator466->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator466);

COrientationInterpolator* OrientationInterpolator467 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator467->setDEF("r_elbow_RotationInterpolator_Stand");
OrientationInterpolator467->setKey(new float[2]{0,1}, 2);
OrientationInterpolator467->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator467);

COrientationInterpolator* OrientationInterpolator468 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator468->setDEF("r_shoulder_RotationInterpolator_Stand");
OrientationInterpolator468->setKey(new float[2]{0,1}, 2);
OrientationInterpolator468->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator468);

COrientationInterpolator* OrientationInterpolator469 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator469->setDEF("l_wrist_RotationInterpolator_Stand");
OrientationInterpolator469->setKey(new float[2]{0,1}, 2);
OrientationInterpolator469->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator469);

COrientationInterpolator* OrientationInterpolator470 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator470->setDEF("l_elbow_RotationInterpolator_Stand");
OrientationInterpolator470->setKey(new float[2]{0,1}, 2);
OrientationInterpolator470->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator470);

COrientationInterpolator* OrientationInterpolator471 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator471->setDEF("l_shoulder_RotationInterpolator_Stand");
OrientationInterpolator471->setKey(new float[2]{0,1}, 2);
OrientationInterpolator471->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator471);

COrientationInterpolator* OrientationInterpolator472 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator472->setDEF("head_RotationInterpolator_Stand");
OrientationInterpolator472->setKey(new float[2]{0,1}, 2);
OrientationInterpolator472->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator472);

COrientationInterpolator* OrientationInterpolator473 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator473->setDEF("neck_RotationInterpolator_Stand");
OrientationInterpolator473->setKey(new float[2]{0,1}, 2);
OrientationInterpolator473->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator473);

COrientationInterpolator* OrientationInterpolator474 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator474->setDEF("upper_body_RotationInterpolator_Stand");
OrientationInterpolator474->setKey(new float[2]{0,1}, 2);
OrientationInterpolator474->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator474);

COrientationInterpolator* OrientationInterpolator475 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator475->setDEF("whole_body_RotationInterpolator_Stand");
OrientationInterpolator475->setKey(new float[2]{0,1}, 2);
OrientationInterpolator475->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group458->addChildren(*OrientationInterpolator475);

CPositionInterpolator* PositionInterpolator476 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator476->setDEF("whole_body_TranslationInterpolator_Stand");
PositionInterpolator476->setKey(new float[2]{0,1}, 2);
PositionInterpolator476->setKeyValue(new float[6]{0,0,0,0,0,0});
Group458->addChildren(*PositionInterpolator476);

CTimeSensor* TimeSensor477 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor477->setDEF("Stand_Time");
TimeSensor477->setCycleInterval(0.009999999776482582);
Group458->addChildren(*TimeSensor477);

Group457->addChildren(*Group458);

CGroup* Group478 = (CGroup *)(m_pScene.createNode("Group"));
Group478->setDEF("Walk_Animation");
COrientationInterpolator* OrientationInterpolator479 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator479->setDEF("r_ankle_RotationInterpolator_BasicWalk");
OrientationInterpolator479->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator479->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
Group478->addChildren(*OrientationInterpolator479);

COrientationInterpolator* OrientationInterpolator480 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator480->setDEF("r_knee_RotationInterpolator_BasicWalk");
OrientationInterpolator480->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator480->setKeyValue(new float[40]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
Group478->addChildren(*OrientationInterpolator480);

COrientationInterpolator* OrientationInterpolator481 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator481->setDEF("r_hip_RotationInterpolator_BasicWalk");
OrientationInterpolator481->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator481->setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
Group478->addChildren(*OrientationInterpolator481);

COrientationInterpolator* OrientationInterpolator482 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator482->setDEF("l_ankle_RotationInterpolator_BasicWalk");
OrientationInterpolator482->setKey(new float[7]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator482->setKeyValue(new float[28]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
Group478->addChildren(*OrientationInterpolator482);

COrientationInterpolator* OrientationInterpolator483 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator483->setDEF("l_knee_RotationInterpolator_BasicWalk");
OrientationInterpolator483->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator483->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
Group478->addChildren(*OrientationInterpolator483);

COrientationInterpolator* OrientationInterpolator484 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator484->setDEF("l_hip_RotationInterpolator_BasicWalk");
OrientationInterpolator484->setKey(new float[8]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator484->setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
Group478->addChildren(*OrientationInterpolator484);

COrientationInterpolator* OrientationInterpolator485 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator485->setDEF("lower_body_RotationInterpolator_BasicWalk");
OrientationInterpolator485->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator485->setKeyValue(new float[12]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
Group478->addChildren(*OrientationInterpolator485);

COrientationInterpolator* OrientationInterpolator486 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator486->setDEF("r_wrist_RotationInterpolator_BasicWalk");
OrientationInterpolator486->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator486->setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
Group478->addChildren(*OrientationInterpolator486);

COrientationInterpolator* OrientationInterpolator487 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator487->setDEF("r_elbow_RotationInterpolator_BasicWalk");
OrientationInterpolator487->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator487->setKeyValue(new float[16]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508});
Group478->addChildren(*OrientationInterpolator487);

COrientationInterpolator* OrientationInterpolator488 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator488->setDEF("r_shoulder_RotationInterpolator_BasicWalk");
OrientationInterpolator488->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator488->setKeyValue(new float[16]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346});
Group478->addChildren(*OrientationInterpolator488);

COrientationInterpolator* OrientationInterpolator489 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator489->setDEF("l_wrist_RotationInterpolator_BasicWalk");
OrientationInterpolator489->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator489->setKeyValue(new float[16]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076});
Group478->addChildren(*OrientationInterpolator489);

COrientationInterpolator* OrientationInterpolator490 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator490->setDEF("l_elbow_RotationInterpolator_BasicWalk");
OrientationInterpolator490->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator490->setKeyValue(new float[16]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878});
Group478->addChildren(*OrientationInterpolator490);

COrientationInterpolator* OrientationInterpolator491 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator491->setDEF("l_shoulder_RotationInterpolator_BasicWalk");
OrientationInterpolator491->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator491->setKeyValue(new float[16]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189});
Group478->addChildren(*OrientationInterpolator491);

COrientationInterpolator* OrientationInterpolator492 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator492->setDEF("head_RotationInterpolator_BasicWalk");
OrientationInterpolator492->setKey(new float[10]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator492->setKeyValue(new float[40]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
Group478->addChildren(*OrientationInterpolator492);

COrientationInterpolator* OrientationInterpolator493 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator493->setDEF("neck_RotationInterpolator_BasicWalk");
OrientationInterpolator493->setKey(new float[2]{0,1}, 2);
OrientationInterpolator493->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group478->addChildren(*OrientationInterpolator493);

COrientationInterpolator* OrientationInterpolator494 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator494->setDEF("upper_body_RotationInterpolator_BasicWalk");
OrientationInterpolator494->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator494->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
Group478->addChildren(*OrientationInterpolator494);

COrientationInterpolator* OrientationInterpolator495 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator495->setDEF("whole_body_RotationInterpolator_BasicWalk");
OrientationInterpolator495->setKey(new float[2]{0,1}, 2);
OrientationInterpolator495->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group478->addChildren(*OrientationInterpolator495);

CPositionInterpolator* PositionInterpolator496 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator496->setDEF("whole_body_TranslationInterpolator_BasicWalk");
PositionInterpolator496->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator496->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
Group478->addChildren(*PositionInterpolator496);

CTimeSensor* TimeSensor497 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor497->setDEF("Walk_Time");
TimeSensor497->setCycleInterval(2);
TimeSensor497->setLoop(True);
TimeSensor497->setStartTime(-1);
Group478->addChildren(*TimeSensor497);

Group457->addChildren(*Group478);

CGroup* Group498 = (CGroup *)(m_pScene.createNode("Group"));
Group498->setDEF("Run_Animation");
COrientationInterpolator* OrientationInterpolator499 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator499->setDEF("r_ankle_RotationInterpolator_Run");
OrientationInterpolator499->setKey(new float[6]{0,0.4909,0.7091,0.8,0.8182,1}, 6);
OrientationInterpolator499->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323});
Group498->addChildren(*OrientationInterpolator499);

COrientationInterpolator* OrientationInterpolator500 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator500->setDEF("r_knee_RotationInterpolator_Run");
OrientationInterpolator500->setKey(new float[6]{0,0.03636,0.2182,0.4909,0.7455,1}, 6);
OrientationInterpolator500->setKeyValue(new float[24]{1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004});
Group498->addChildren(*OrientationInterpolator500);

COrientationInterpolator* OrientationInterpolator501 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator501->setDEF("r_hip_RotationInterpolator_Run");
OrientationInterpolator501->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator501->setKeyValue(new float[20]{0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402});
Group498->addChildren(*OrientationInterpolator501);

COrientationInterpolator* OrientationInterpolator502 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator502->setDEF("l_ankle_RotationInterpolator_Run");
OrientationInterpolator502->setKey(new float[5]{0,0.2182,0.3091,0.4909,1}, 5);
OrientationInterpolator502->setKeyValue(new float[20]{1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543});
Group498->addChildren(*OrientationInterpolator502);

COrientationInterpolator* OrientationInterpolator503 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator503->setDEF("l_knee_RotationInterpolator_Run");
OrientationInterpolator503->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator503->setKeyValue(new float[20]{1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108});
Group498->addChildren(*OrientationInterpolator503);

COrientationInterpolator* OrientationInterpolator504 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator504->setDEF("l_hip_RotationInterpolator_Run");
OrientationInterpolator504->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator504->setKeyValue(new float[20]{-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212});
Group498->addChildren(*OrientationInterpolator504);

COrientationInterpolator* OrientationInterpolator505 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator505->setDEF("lower_body_RotationInterpolator_Run");
OrientationInterpolator505->setKey(new float[2]{0,1}, 2);
OrientationInterpolator505->setKeyValue(new float[8]{0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687});
Group498->addChildren(*OrientationInterpolator505);

COrientationInterpolator* OrientationInterpolator506 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator506->setDEF("r_wrist_RotationInterpolator_Run");
OrientationInterpolator506->setKey(new float[2]{0,1}, 2);
OrientationInterpolator506->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
Group498->addChildren(*OrientationInterpolator506);

COrientationInterpolator* OrientationInterpolator507 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator507->setDEF("r_elbow_RotationInterpolator_Run");
OrientationInterpolator507->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator507->setKeyValue(new float[20]{0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222});
Group498->addChildren(*OrientationInterpolator507);

COrientationInterpolator* OrientationInterpolator508 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator508->setDEF("r_shoulder_RotationInterpolator_Run");
OrientationInterpolator508->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator508->setKeyValue(new float[20]{-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979});
Group498->addChildren(*OrientationInterpolator508);

COrientationInterpolator* OrientationInterpolator509 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator509->setDEF("l_wrist_RotationInterpolator_Run");
OrientationInterpolator509->setKey(new float[2]{0,1}, 2);
OrientationInterpolator509->setKeyValue(new float[8]{-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409});
Group498->addChildren(*OrientationInterpolator509);

COrientationInterpolator* OrientationInterpolator510 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator510->setDEF("l_elbow_RotationInterpolator_Run");
OrientationInterpolator510->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator510->setKeyValue(new float[20]{0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689});
Group498->addChildren(*OrientationInterpolator510);

COrientationInterpolator* OrientationInterpolator511 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator511->setDEF("l_shoulder_RotationInterpolator_Run");
OrientationInterpolator511->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator511->setKeyValue(new float[20]{0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135});
Group498->addChildren(*OrientationInterpolator511);

COrientationInterpolator* OrientationInterpolator512 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator512->setDEF("head_RotationInterpolator_Run");
OrientationInterpolator512->setKey(new float[3]{0,0.4909,1}, 3);
OrientationInterpolator512->setKeyValue(new float[12]{0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508});
Group498->addChildren(*OrientationInterpolator512);

COrientationInterpolator* OrientationInterpolator513 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator513->setDEF("neck_RotationInterpolator_Run");
OrientationInterpolator513->setKey(new float[2]{0,1}, 2);
OrientationInterpolator513->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group498->addChildren(*OrientationInterpolator513);

COrientationInterpolator* OrientationInterpolator514 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator514->setDEF("upper_body_RotationInterpolator_Run");
OrientationInterpolator514->setKey(new float[5]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator514->setKeyValue(new float[20]{0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712});
Group498->addChildren(*OrientationInterpolator514);

COrientationInterpolator* OrientationInterpolator515 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator515->setDEF("whole_body_RotationInterpolator_Run");
OrientationInterpolator515->setKey(new float[2]{0,1}, 2);
OrientationInterpolator515->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group498->addChildren(*OrientationInterpolator515);

CPositionInterpolator* PositionInterpolator516 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator516->setDEF("whole_body_TranslationInterpolator_Run");
PositionInterpolator516->setKey(new float[8]{0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1}, 8);
PositionInterpolator516->setKeyValue(new float[24]{0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0});
Group498->addChildren(*PositionInterpolator516);

CTimeSensor* TimeSensor517 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor517->setDEF("Run_Time");
TimeSensor517->setLoop(True);
TimeSensor517->setStartTime(-1);
Group498->addChildren(*TimeSensor517);

Group457->addChildren(*Group498);

CGroup* Group518 = (CGroup *)(m_pScene.createNode("Group"));
Group518->setDEF("Jump_Animation");
COrientationInterpolator* OrientationInterpolator519 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator519->setDEF("r_ankle_RotationInterpolator_Jump");
OrientationInterpolator519->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator519->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
Group518->addChildren(*OrientationInterpolator519);

COrientationInterpolator* OrientationInterpolator520 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator520->setDEF("r_knee_RotationInterpolator_Jump");
OrientationInterpolator520->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator520->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
Group518->addChildren(*OrientationInterpolator520);

COrientationInterpolator* OrientationInterpolator521 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator521->setDEF("r_hip_RotationInterpolator_Jump");
OrientationInterpolator521->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator521->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
Group518->addChildren(*OrientationInterpolator521);

COrientationInterpolator* OrientationInterpolator522 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator522->setDEF("l_ankle_RotationInterpolator_Jump");
OrientationInterpolator522->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator522->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
Group518->addChildren(*OrientationInterpolator522);

COrientationInterpolator* OrientationInterpolator523 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator523->setDEF("l_knee_RotationInterpolator_Jump");
OrientationInterpolator523->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator523->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
Group518->addChildren(*OrientationInterpolator523);

COrientationInterpolator* OrientationInterpolator524 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator524->setDEF("l_hip_RotationInterpolator_Jump");
OrientationInterpolator524->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator524->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
Group518->addChildren(*OrientationInterpolator524);

COrientationInterpolator* OrientationInterpolator525 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator525->setDEF("lower_body_RotationInterpolator_Jump");
OrientationInterpolator525->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator525->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
Group518->addChildren(*OrientationInterpolator525);

COrientationInterpolator* OrientationInterpolator526 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator526->setDEF("r_wrist_RotationInterpolator_Jump");
OrientationInterpolator526->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator526->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
Group518->addChildren(*OrientationInterpolator526);

COrientationInterpolator* OrientationInterpolator527 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator527->setDEF("r_elbow_RotationInterpolator_Jump");
OrientationInterpolator527->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator527->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
Group518->addChildren(*OrientationInterpolator527);

COrientationInterpolator* OrientationInterpolator528 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator528->setDEF("r_shoulder_RotationInterpolator_Jump");
OrientationInterpolator528->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator528->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
Group518->addChildren(*OrientationInterpolator528);

COrientationInterpolator* OrientationInterpolator529 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator529->setDEF("l_wrist_RotationInterpolator_Jump");
OrientationInterpolator529->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator529->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
Group518->addChildren(*OrientationInterpolator529);

COrientationInterpolator* OrientationInterpolator530 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator530->setDEF("l_elbow_RotationInterpolator_Jump");
OrientationInterpolator530->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator530->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0});
Group518->addChildren(*OrientationInterpolator530);

COrientationInterpolator* OrientationInterpolator531 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator531->setDEF("l_shoulder_RotationInterpolator_Jump");
OrientationInterpolator531->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator531->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
Group518->addChildren(*OrientationInterpolator531);

COrientationInterpolator* OrientationInterpolator532 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator532->setDEF("head_RotationInterpolator_Jump");
OrientationInterpolator532->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator532->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
Group518->addChildren(*OrientationInterpolator532);

COrientationInterpolator* OrientationInterpolator533 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator533->setDEF("neck_RotationInterpolator_Jump");
OrientationInterpolator533->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator533->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0});
Group518->addChildren(*OrientationInterpolator533);

COrientationInterpolator* OrientationInterpolator534 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator534->setDEF("upper_body_RotationInterpolator_Jump");
OrientationInterpolator534->setKey(new float[7]{0,0.28,0.32,0.48,0.76,0.88,1}, 7);
OrientationInterpolator534->setKeyValue(new float[28]{0,0,1,0,1,0,0,1.038,1,0,0,1.038,-1,0,0,0.1057,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0});
Group518->addChildren(*OrientationInterpolator534);

COrientationInterpolator* OrientationInterpolator535 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator535->setDEF("whole_body_RotationInterpolator_Jump");
OrientationInterpolator535->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator535->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group518->addChildren(*OrientationInterpolator535);

CPositionInterpolator* PositionInterpolator536 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator536->setDEF("whole_body_TranslationInterpolator_Jump");
PositionInterpolator536->setKey(new float[21]{0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1}, 21);
PositionInterpolator536->setKeyValue(new float[63]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
Group518->addChildren(*PositionInterpolator536);

CTimeSensor* TimeSensor537 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor537->setDEF("Jump_Time");
TimeSensor537->setCycleInterval(2);
TimeSensor537->setStartTime(-1);
Group518->addChildren(*TimeSensor537);

Group457->addChildren(*Group518);

group->addChildren(*Group457);

CROUTE* ROUTE538 = new CROUTE();
ROUTE538->setFromField("position_changed");
ROUTE538->setFromNode("HudProx");
ROUTE538->setToField("set_translation");
ROUTE538->setToNode("HudXform");
group->addChildren(*ROUTE538);

CROUTE* ROUTE539 = new CROUTE();
ROUTE539->setFromField("orientation_changed");
ROUTE539->setFromNode("HudProx");
ROUTE539->setToField("set_rotation");
ROUTE539->setToNode("HudXform");
group->addChildren(*ROUTE539);

CROUTE* ROUTE540 = new CROUTE();
ROUTE540->setFromField("touchTime");
ROUTE540->setFromNode("Stand_Touch");
ROUTE540->setToField("stopTime");
ROUTE540->setToNode("Walk_Time");
group->addChildren(*ROUTE540);

CROUTE* ROUTE541 = new CROUTE();
ROUTE541->setFromField("touchTime");
ROUTE541->setFromNode("Stand_Touch");
ROUTE541->setToField("stopTime");
ROUTE541->setToNode("Run_Time");
group->addChildren(*ROUTE541);

CROUTE* ROUTE542 = new CROUTE();
ROUTE542->setFromField("touchTime");
ROUTE542->setFromNode("Stand_Touch");
ROUTE542->setToField("stopTime");
ROUTE542->setToNode("Jump_Time");
group->addChildren(*ROUTE542);

CROUTE* ROUTE543 = new CROUTE();
ROUTE543->setFromField("touchTime");
ROUTE543->setFromNode("Stand_Touch");
ROUTE543->setToField("startTime");
ROUTE543->setToNode("Stand_Time");
group->addChildren(*ROUTE543);

CROUTE* ROUTE544 = new CROUTE();
ROUTE544->setFromField("touchTime");
ROUTE544->setFromNode("Walk_Touch");
ROUTE544->setToField("stopTime");
ROUTE544->setToNode("Stand_Time");
group->addChildren(*ROUTE544);

CROUTE* ROUTE545 = new CROUTE();
ROUTE545->setFromField("touchTime");
ROUTE545->setFromNode("Walk_Touch");
ROUTE545->setToField("stopTime");
ROUTE545->setToNode("Run_Time");
group->addChildren(*ROUTE545);

CROUTE* ROUTE546 = new CROUTE();
ROUTE546->setFromField("touchTime");
ROUTE546->setFromNode("Walk_Touch");
ROUTE546->setToField("stopTime");
ROUTE546->setToNode("Jump_Time");
group->addChildren(*ROUTE546);

CROUTE* ROUTE547 = new CROUTE();
ROUTE547->setFromField("touchTime");
ROUTE547->setFromNode("Walk_Touch");
ROUTE547->setToField("startTime");
ROUTE547->setToNode("Walk_Time");
group->addChildren(*ROUTE547);

CROUTE* ROUTE548 = new CROUTE();
ROUTE548->setFromField("touchTime");
ROUTE548->setFromNode("Run_Touch");
ROUTE548->setToField("stopTime");
ROUTE548->setToNode("Stand_Time");
group->addChildren(*ROUTE548);

CROUTE* ROUTE549 = new CROUTE();
ROUTE549->setFromField("touchTime");
ROUTE549->setFromNode("Run_Touch");
ROUTE549->setToField("stopTime");
ROUTE549->setToNode("Walk_Time");
group->addChildren(*ROUTE549);

CROUTE* ROUTE550 = new CROUTE();
ROUTE550->setFromField("touchTime");
ROUTE550->setFromNode("Run_Touch");
ROUTE550->setToField("stopTime");
ROUTE550->setToNode("Jump_Time");
group->addChildren(*ROUTE550);

CROUTE* ROUTE551 = new CROUTE();
ROUTE551->setFromField("touchTime");
ROUTE551->setFromNode("Run_Touch");
ROUTE551->setToField("startTime");
ROUTE551->setToNode("Run_Time");
group->addChildren(*ROUTE551);

CROUTE* ROUTE552 = new CROUTE();
ROUTE552->setFromField("touchTime");
ROUTE552->setFromNode("Jump_Touch");
ROUTE552->setToField("stopTime");
ROUTE552->setToNode("Stand_Time");
group->addChildren(*ROUTE552);

CROUTE* ROUTE553 = new CROUTE();
ROUTE553->setFromField("touchTime");
ROUTE553->setFromNode("Jump_Touch");
ROUTE553->setToField("stopTime");
ROUTE553->setToNode("Walk_Time");
group->addChildren(*ROUTE553);

CROUTE* ROUTE554 = new CROUTE();
ROUTE554->setFromField("touchTime");
ROUTE554->setFromNode("Jump_Touch");
ROUTE554->setToField("stopTime");
ROUTE554->setToNode("Run_Time");
group->addChildren(*ROUTE554);

CROUTE* ROUTE555 = new CROUTE();
ROUTE555->setFromField("touchTime");
ROUTE555->setFromNode("Jump_Touch");
ROUTE555->setToField("startTime");
ROUTE555->setToNode("Jump_Time");
group->addChildren(*ROUTE555);

CROUTE* ROUTE556 = new CROUTE();
ROUTE556->setFromField("fraction_changed");
ROUTE556->setFromNode("Stand_Time");
ROUTE556->setToField("set_fraction");
ROUTE556->setToNode("r_ankle_RotationInterpolator_Stand");
group->addChildren(*ROUTE556);

CROUTE* ROUTE557 = new CROUTE();
ROUTE557->setFromField("fraction_changed");
ROUTE557->setFromNode("Stand_Time");
ROUTE557->setToField("set_fraction");
ROUTE557->setToNode("r_knee_RotationInterpolator_Stand");
group->addChildren(*ROUTE557);

CROUTE* ROUTE558 = new CROUTE();
ROUTE558->setFromField("fraction_changed");
ROUTE558->setFromNode("Stand_Time");
ROUTE558->setToField("set_fraction");
ROUTE558->setToNode("r_hip_RotationInterpolator_Stand");
group->addChildren(*ROUTE558);

CROUTE* ROUTE559 = new CROUTE();
ROUTE559->setFromField("fraction_changed");
ROUTE559->setFromNode("Stand_Time");
ROUTE559->setToField("set_fraction");
ROUTE559->setToNode("l_ankle_RotationInterpolator_Stand");
group->addChildren(*ROUTE559);

CROUTE* ROUTE560 = new CROUTE();
ROUTE560->setFromField("fraction_changed");
ROUTE560->setFromNode("Stand_Time");
ROUTE560->setToField("set_fraction");
ROUTE560->setToNode("l_knee_RotationInterpolator_Stand");
group->addChildren(*ROUTE560);

CROUTE* ROUTE561 = new CROUTE();
ROUTE561->setFromField("fraction_changed");
ROUTE561->setFromNode("Stand_Time");
ROUTE561->setToField("set_fraction");
ROUTE561->setToNode("l_hip_RotationInterpolator_Stand");
group->addChildren(*ROUTE561);

CROUTE* ROUTE562 = new CROUTE();
ROUTE562->setFromField("fraction_changed");
ROUTE562->setFromNode("Stand_Time");
ROUTE562->setToField("set_fraction");
ROUTE562->setToNode("lower_body_RotationInterpolator_Stand");
group->addChildren(*ROUTE562);

CROUTE* ROUTE563 = new CROUTE();
ROUTE563->setFromField("fraction_changed");
ROUTE563->setFromNode("Stand_Time");
ROUTE563->setToField("set_fraction");
ROUTE563->setToNode("r_wrist_RotationInterpolator_Stand");
group->addChildren(*ROUTE563);

CROUTE* ROUTE564 = new CROUTE();
ROUTE564->setFromField("fraction_changed");
ROUTE564->setFromNode("Stand_Time");
ROUTE564->setToField("set_fraction");
ROUTE564->setToNode("r_elbow_RotationInterpolator_Stand");
group->addChildren(*ROUTE564);

CROUTE* ROUTE565 = new CROUTE();
ROUTE565->setFromField("fraction_changed");
ROUTE565->setFromNode("Stand_Time");
ROUTE565->setToField("set_fraction");
ROUTE565->setToNode("r_shoulder_RotationInterpolator_Stand");
group->addChildren(*ROUTE565);

CROUTE* ROUTE566 = new CROUTE();
ROUTE566->setFromField("fraction_changed");
ROUTE566->setFromNode("Stand_Time");
ROUTE566->setToField("set_fraction");
ROUTE566->setToNode("l_wrist_RotationInterpolator_Stand");
group->addChildren(*ROUTE566);

CROUTE* ROUTE567 = new CROUTE();
ROUTE567->setFromField("fraction_changed");
ROUTE567->setFromNode("Stand_Time");
ROUTE567->setToField("set_fraction");
ROUTE567->setToNode("l_elbow_RotationInterpolator_Stand");
group->addChildren(*ROUTE567);

CROUTE* ROUTE568 = new CROUTE();
ROUTE568->setFromField("fraction_changed");
ROUTE568->setFromNode("Stand_Time");
ROUTE568->setToField("set_fraction");
ROUTE568->setToNode("l_shoulder_RotationInterpolator_Stand");
group->addChildren(*ROUTE568);

CROUTE* ROUTE569 = new CROUTE();
ROUTE569->setFromField("fraction_changed");
ROUTE569->setFromNode("Stand_Time");
ROUTE569->setToField("set_fraction");
ROUTE569->setToNode("head_RotationInterpolator_Stand");
group->addChildren(*ROUTE569);

CROUTE* ROUTE570 = new CROUTE();
ROUTE570->setFromField("fraction_changed");
ROUTE570->setFromNode("Stand_Time");
ROUTE570->setToField("set_fraction");
ROUTE570->setToNode("neck_RotationInterpolator_Stand");
group->addChildren(*ROUTE570);

CROUTE* ROUTE571 = new CROUTE();
ROUTE571->setFromField("fraction_changed");
ROUTE571->setFromNode("Stand_Time");
ROUTE571->setToField("set_fraction");
ROUTE571->setToNode("upper_body_RotationInterpolator_Stand");
group->addChildren(*ROUTE571);

CROUTE* ROUTE572 = new CROUTE();
ROUTE572->setFromField("fraction_changed");
ROUTE572->setFromNode("Stand_Time");
ROUTE572->setToField("set_fraction");
ROUTE572->setToNode("whole_body_RotationInterpolator_Stand");
group->addChildren(*ROUTE572);

CROUTE* ROUTE573 = new CROUTE();
ROUTE573->setFromField("fraction_changed");
ROUTE573->setFromNode("Stand_Time");
ROUTE573->setToField("set_fraction");
ROUTE573->setToNode("whole_body_TranslationInterpolator_Stand");
group->addChildren(*ROUTE573);

CROUTE* ROUTE574 = new CROUTE();
ROUTE574->setFromField("value_changed");
ROUTE574->setFromNode("r_ankle_RotationInterpolator_Stand");
ROUTE574->setToField("set_rotation");
ROUTE574->setToNode("hanim_r_ankle");
group->addChildren(*ROUTE574);

CROUTE* ROUTE575 = new CROUTE();
ROUTE575->setFromField("value_changed");
ROUTE575->setFromNode("r_knee_RotationInterpolator_Stand");
ROUTE575->setToField("set_rotation");
ROUTE575->setToNode("hanim_r_knee");
group->addChildren(*ROUTE575);

CROUTE* ROUTE576 = new CROUTE();
ROUTE576->setFromField("value_changed");
ROUTE576->setFromNode("r_hip_RotationInterpolator_Stand");
ROUTE576->setToField("set_rotation");
ROUTE576->setToNode("hanim_r_hip");
group->addChildren(*ROUTE576);

CROUTE* ROUTE577 = new CROUTE();
ROUTE577->setFromField("value_changed");
ROUTE577->setFromNode("l_ankle_RotationInterpolator_Stand");
ROUTE577->setToField("set_rotation");
ROUTE577->setToNode("hanim_l_ankle");
group->addChildren(*ROUTE577);

CROUTE* ROUTE578 = new CROUTE();
ROUTE578->setFromField("value_changed");
ROUTE578->setFromNode("l_knee_RotationInterpolator_Stand");
ROUTE578->setToField("set_rotation");
ROUTE578->setToNode("hanim_l_knee");
group->addChildren(*ROUTE578);

CROUTE* ROUTE579 = new CROUTE();
ROUTE579->setFromField("value_changed");
ROUTE579->setFromNode("l_hip_RotationInterpolator_Stand");
ROUTE579->setToField("set_rotation");
ROUTE579->setToNode("hanim_l_hip");
group->addChildren(*ROUTE579);

CROUTE* ROUTE580 = new CROUTE();
ROUTE580->setFromField("value_changed");
ROUTE580->setFromNode("lower_body_RotationInterpolator_Stand");
ROUTE580->setToField("set_rotation");
ROUTE580->setToNode("hanim_sacroiliac");
group->addChildren(*ROUTE580);

CROUTE* ROUTE581 = new CROUTE();
ROUTE581->setFromField("value_changed");
ROUTE581->setFromNode("r_wrist_RotationInterpolator_Stand");
ROUTE581->setToField("set_rotation");
ROUTE581->setToNode("hanim_r_wrist");
group->addChildren(*ROUTE581);

CROUTE* ROUTE582 = new CROUTE();
ROUTE582->setFromField("value_changed");
ROUTE582->setFromNode("r_elbow_RotationInterpolator_Stand");
ROUTE582->setToField("set_rotation");
ROUTE582->setToNode("hanim_r_elbow");
group->addChildren(*ROUTE582);

CROUTE* ROUTE583 = new CROUTE();
ROUTE583->setFromField("value_changed");
ROUTE583->setFromNode("r_shoulder_RotationInterpolator_Stand");
ROUTE583->setToField("set_rotation");
ROUTE583->setToNode("hanim_r_shoulder");
group->addChildren(*ROUTE583);

CROUTE* ROUTE584 = new CROUTE();
ROUTE584->setFromField("value_changed");
ROUTE584->setFromNode("l_wrist_RotationInterpolator_Stand");
ROUTE584->setToField("set_rotation");
ROUTE584->setToNode("hanim_l_wrist");
group->addChildren(*ROUTE584);

CROUTE* ROUTE585 = new CROUTE();
ROUTE585->setFromField("value_changed");
ROUTE585->setFromNode("l_elbow_RotationInterpolator_Stand");
ROUTE585->setToField("set_rotation");
ROUTE585->setToNode("hanim_l_elbow");
group->addChildren(*ROUTE585);

CROUTE* ROUTE586 = new CROUTE();
ROUTE586->setFromField("value_changed");
ROUTE586->setFromNode("l_shoulder_RotationInterpolator_Stand");
ROUTE586->setToField("set_rotation");
ROUTE586->setToNode("hanim_l_shoulder");
group->addChildren(*ROUTE586);

CROUTE* ROUTE587 = new CROUTE();
ROUTE587->setFromField("value_changed");
ROUTE587->setFromNode("head_RotationInterpolator_Stand");
ROUTE587->setToField("set_rotation");
ROUTE587->setToNode("hanim_skullbase");
group->addChildren(*ROUTE587);

CROUTE* ROUTE588 = new CROUTE();
ROUTE588->setFromField("value_changed");
ROUTE588->setFromNode("neck_RotationInterpolator_Stand");
ROUTE588->setToField("set_rotation");
ROUTE588->setToNode("hanim_vc4");
group->addChildren(*ROUTE588);

CROUTE* ROUTE589 = new CROUTE();
ROUTE589->setFromField("value_changed");
ROUTE589->setFromNode("upper_body_RotationInterpolator_Stand");
ROUTE589->setToField("set_rotation");
ROUTE589->setToNode("hanim_vl1");
group->addChildren(*ROUTE589);

CROUTE* ROUTE590 = new CROUTE();
ROUTE590->setFromField("value_changed");
ROUTE590->setFromNode("whole_body_RotationInterpolator_Stand");
ROUTE590->setToField("set_rotation");
ROUTE590->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE590);

CROUTE* ROUTE591 = new CROUTE();
ROUTE591->setFromField("value_changed");
ROUTE591->setFromNode("whole_body_TranslationInterpolator_Stand");
ROUTE591->setToField("set_translation");
ROUTE591->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE591);

CROUTE* ROUTE592 = new CROUTE();
ROUTE592->setFromField("fraction_changed");
ROUTE592->setFromNode("Walk_Time");
ROUTE592->setToField("set_fraction");
ROUTE592->setToNode("r_ankle_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE592);

CROUTE* ROUTE593 = new CROUTE();
ROUTE593->setFromField("fraction_changed");
ROUTE593->setFromNode("Walk_Time");
ROUTE593->setToField("set_fraction");
ROUTE593->setToNode("r_knee_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE593);

CROUTE* ROUTE594 = new CROUTE();
ROUTE594->setFromField("fraction_changed");
ROUTE594->setFromNode("Walk_Time");
ROUTE594->setToField("set_fraction");
ROUTE594->setToNode("r_hip_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE594);

CROUTE* ROUTE595 = new CROUTE();
ROUTE595->setFromField("fraction_changed");
ROUTE595->setFromNode("Walk_Time");
ROUTE595->setToField("set_fraction");
ROUTE595->setToNode("l_ankle_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE595);

CROUTE* ROUTE596 = new CROUTE();
ROUTE596->setFromField("fraction_changed");
ROUTE596->setFromNode("Walk_Time");
ROUTE596->setToField("set_fraction");
ROUTE596->setToNode("l_knee_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE596);

CROUTE* ROUTE597 = new CROUTE();
ROUTE597->setFromField("fraction_changed");
ROUTE597->setFromNode("Walk_Time");
ROUTE597->setToField("set_fraction");
ROUTE597->setToNode("l_hip_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE597);

CROUTE* ROUTE598 = new CROUTE();
ROUTE598->setFromField("fraction_changed");
ROUTE598->setFromNode("Walk_Time");
ROUTE598->setToField("set_fraction");
ROUTE598->setToNode("lower_body_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE598);

CROUTE* ROUTE599 = new CROUTE();
ROUTE599->setFromField("fraction_changed");
ROUTE599->setFromNode("Walk_Time");
ROUTE599->setToField("set_fraction");
ROUTE599->setToNode("r_wrist_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE599);

CROUTE* ROUTE600 = new CROUTE();
ROUTE600->setFromField("fraction_changed");
ROUTE600->setFromNode("Walk_Time");
ROUTE600->setToField("set_fraction");
ROUTE600->setToNode("r_elbow_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE600);

CROUTE* ROUTE601 = new CROUTE();
ROUTE601->setFromField("fraction_changed");
ROUTE601->setFromNode("Walk_Time");
ROUTE601->setToField("set_fraction");
ROUTE601->setToNode("r_shoulder_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE601);

CROUTE* ROUTE602 = new CROUTE();
ROUTE602->setFromField("fraction_changed");
ROUTE602->setFromNode("Walk_Time");
ROUTE602->setToField("set_fraction");
ROUTE602->setToNode("l_wrist_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE602);

CROUTE* ROUTE603 = new CROUTE();
ROUTE603->setFromField("fraction_changed");
ROUTE603->setFromNode("Walk_Time");
ROUTE603->setToField("set_fraction");
ROUTE603->setToNode("l_elbow_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE603);

CROUTE* ROUTE604 = new CROUTE();
ROUTE604->setFromField("fraction_changed");
ROUTE604->setFromNode("Walk_Time");
ROUTE604->setToField("set_fraction");
ROUTE604->setToNode("l_shoulder_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE604);

CROUTE* ROUTE605 = new CROUTE();
ROUTE605->setFromField("fraction_changed");
ROUTE605->setFromNode("Walk_Time");
ROUTE605->setToField("set_fraction");
ROUTE605->setToNode("head_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE605);

CROUTE* ROUTE606 = new CROUTE();
ROUTE606->setFromField("fraction_changed");
ROUTE606->setFromNode("Walk_Time");
ROUTE606->setToField("set_fraction");
ROUTE606->setToNode("neck_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE606);

CROUTE* ROUTE607 = new CROUTE();
ROUTE607->setFromField("fraction_changed");
ROUTE607->setFromNode("Walk_Time");
ROUTE607->setToField("set_fraction");
ROUTE607->setToNode("upper_body_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE607);

CROUTE* ROUTE608 = new CROUTE();
ROUTE608->setFromField("fraction_changed");
ROUTE608->setFromNode("Walk_Time");
ROUTE608->setToField("set_fraction");
ROUTE608->setToNode("whole_body_RotationInterpolator_BasicWalk");
group->addChildren(*ROUTE608);

CROUTE* ROUTE609 = new CROUTE();
ROUTE609->setFromField("fraction_changed");
ROUTE609->setFromNode("Walk_Time");
ROUTE609->setToField("set_fraction");
ROUTE609->setToNode("whole_body_TranslationInterpolator_BasicWalk");
group->addChildren(*ROUTE609);

CROUTE* ROUTE610 = new CROUTE();
ROUTE610->setFromField("value_changed");
ROUTE610->setFromNode("r_ankle_RotationInterpolator_BasicWalk");
ROUTE610->setToField("set_rotation");
ROUTE610->setToNode("hanim_r_ankle");
group->addChildren(*ROUTE610);

CROUTE* ROUTE611 = new CROUTE();
ROUTE611->setFromField("value_changed");
ROUTE611->setFromNode("r_knee_RotationInterpolator_BasicWalk");
ROUTE611->setToField("set_rotation");
ROUTE611->setToNode("hanim_r_knee");
group->addChildren(*ROUTE611);

CROUTE* ROUTE612 = new CROUTE();
ROUTE612->setFromField("value_changed");
ROUTE612->setFromNode("r_hip_RotationInterpolator_BasicWalk");
ROUTE612->setToField("set_rotation");
ROUTE612->setToNode("hanim_r_hip");
group->addChildren(*ROUTE612);

CROUTE* ROUTE613 = new CROUTE();
ROUTE613->setFromField("value_changed");
ROUTE613->setFromNode("l_ankle_RotationInterpolator_BasicWalk");
ROUTE613->setToField("set_rotation");
ROUTE613->setToNode("hanim_l_ankle");
group->addChildren(*ROUTE613);

CROUTE* ROUTE614 = new CROUTE();
ROUTE614->setFromField("value_changed");
ROUTE614->setFromNode("l_knee_RotationInterpolator_BasicWalk");
ROUTE614->setToField("set_rotation");
ROUTE614->setToNode("hanim_l_knee");
group->addChildren(*ROUTE614);

CROUTE* ROUTE615 = new CROUTE();
ROUTE615->setFromField("value_changed");
ROUTE615->setFromNode("l_hip_RotationInterpolator_BasicWalk");
ROUTE615->setToField("set_rotation");
ROUTE615->setToNode("hanim_l_hip");
group->addChildren(*ROUTE615);

CROUTE* ROUTE616 = new CROUTE();
ROUTE616->setFromField("value_changed");
ROUTE616->setFromNode("lower_body_RotationInterpolator_BasicWalk");
ROUTE616->setToField("set_rotation");
ROUTE616->setToNode("hanim_sacroiliac");
group->addChildren(*ROUTE616);

CROUTE* ROUTE617 = new CROUTE();
ROUTE617->setFromField("value_changed");
ROUTE617->setFromNode("r_wrist_RotationInterpolator_BasicWalk");
ROUTE617->setToField("set_rotation");
ROUTE617->setToNode("hanim_r_wrist");
group->addChildren(*ROUTE617);

CROUTE* ROUTE618 = new CROUTE();
ROUTE618->setFromField("value_changed");
ROUTE618->setFromNode("r_elbow_RotationInterpolator_BasicWalk");
ROUTE618->setToField("set_rotation");
ROUTE618->setToNode("hanim_r_elbow");
group->addChildren(*ROUTE618);

CROUTE* ROUTE619 = new CROUTE();
ROUTE619->setFromField("value_changed");
ROUTE619->setFromNode("r_shoulder_RotationInterpolator_BasicWalk");
ROUTE619->setToField("set_rotation");
ROUTE619->setToNode("hanim_r_shoulder");
group->addChildren(*ROUTE619);

CROUTE* ROUTE620 = new CROUTE();
ROUTE620->setFromField("value_changed");
ROUTE620->setFromNode("l_wrist_RotationInterpolator_BasicWalk");
ROUTE620->setToField("set_rotation");
ROUTE620->setToNode("hanim_l_wrist");
group->addChildren(*ROUTE620);

CROUTE* ROUTE621 = new CROUTE();
ROUTE621->setFromField("value_changed");
ROUTE621->setFromNode("l_elbow_RotationInterpolator_BasicWalk");
ROUTE621->setToField("set_rotation");
ROUTE621->setToNode("hanim_l_elbow");
group->addChildren(*ROUTE621);

CROUTE* ROUTE622 = new CROUTE();
ROUTE622->setFromField("value_changed");
ROUTE622->setFromNode("l_shoulder_RotationInterpolator_BasicWalk");
ROUTE622->setToField("set_rotation");
ROUTE622->setToNode("hanim_l_shoulder");
group->addChildren(*ROUTE622);

CROUTE* ROUTE623 = new CROUTE();
ROUTE623->setFromField("value_changed");
ROUTE623->setFromNode("head_RotationInterpolator_BasicWalk");
ROUTE623->setToField("set_rotation");
ROUTE623->setToNode("hanim_skullbase");
group->addChildren(*ROUTE623);

CROUTE* ROUTE624 = new CROUTE();
ROUTE624->setFromField("value_changed");
ROUTE624->setFromNode("neck_RotationInterpolator_BasicWalk");
ROUTE624->setToField("set_rotation");
ROUTE624->setToNode("hanim_vc4");
group->addChildren(*ROUTE624);

CROUTE* ROUTE625 = new CROUTE();
ROUTE625->setFromField("value_changed");
ROUTE625->setFromNode("upper_body_RotationInterpolator_BasicWalk");
ROUTE625->setToField("set_rotation");
ROUTE625->setToNode("hanim_vl1");
group->addChildren(*ROUTE625);

CROUTE* ROUTE626 = new CROUTE();
ROUTE626->setFromField("value_changed");
ROUTE626->setFromNode("whole_body_RotationInterpolator_BasicWalk");
ROUTE626->setToField("set_rotation");
ROUTE626->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE626);

CROUTE* ROUTE627 = new CROUTE();
ROUTE627->setFromField("value_changed");
ROUTE627->setFromNode("whole_body_TranslationInterpolator_BasicWalk");
ROUTE627->setToField("set_translation");
ROUTE627->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE627);

CROUTE* ROUTE628 = new CROUTE();
ROUTE628->setFromField("fraction_changed");
ROUTE628->setFromNode("Run_Time");
ROUTE628->setToField("set_fraction");
ROUTE628->setToNode("r_ankle_RotationInterpolator_Run");
group->addChildren(*ROUTE628);

CROUTE* ROUTE629 = new CROUTE();
ROUTE629->setFromField("fraction_changed");
ROUTE629->setFromNode("Run_Time");
ROUTE629->setToField("set_fraction");
ROUTE629->setToNode("r_knee_RotationInterpolator_Run");
group->addChildren(*ROUTE629);

CROUTE* ROUTE630 = new CROUTE();
ROUTE630->setFromField("fraction_changed");
ROUTE630->setFromNode("Run_Time");
ROUTE630->setToField("set_fraction");
ROUTE630->setToNode("r_hip_RotationInterpolator_Run");
group->addChildren(*ROUTE630);

CROUTE* ROUTE631 = new CROUTE();
ROUTE631->setFromField("fraction_changed");
ROUTE631->setFromNode("Run_Time");
ROUTE631->setToField("set_fraction");
ROUTE631->setToNode("l_ankle_RotationInterpolator_Run");
group->addChildren(*ROUTE631);

CROUTE* ROUTE632 = new CROUTE();
ROUTE632->setFromField("fraction_changed");
ROUTE632->setFromNode("Run_Time");
ROUTE632->setToField("set_fraction");
ROUTE632->setToNode("l_knee_RotationInterpolator_Run");
group->addChildren(*ROUTE632);

CROUTE* ROUTE633 = new CROUTE();
ROUTE633->setFromField("fraction_changed");
ROUTE633->setFromNode("Run_Time");
ROUTE633->setToField("set_fraction");
ROUTE633->setToNode("l_hip_RotationInterpolator_Run");
group->addChildren(*ROUTE633);

CROUTE* ROUTE634 = new CROUTE();
ROUTE634->setFromField("fraction_changed");
ROUTE634->setFromNode("Run_Time");
ROUTE634->setToField("set_fraction");
ROUTE634->setToNode("lower_body_RotationInterpolator_Run");
group->addChildren(*ROUTE634);

CROUTE* ROUTE635 = new CROUTE();
ROUTE635->setFromField("fraction_changed");
ROUTE635->setFromNode("Run_Time");
ROUTE635->setToField("set_fraction");
ROUTE635->setToNode("r_wrist_RotationInterpolator_Run");
group->addChildren(*ROUTE635);

CROUTE* ROUTE636 = new CROUTE();
ROUTE636->setFromField("fraction_changed");
ROUTE636->setFromNode("Run_Time");
ROUTE636->setToField("set_fraction");
ROUTE636->setToNode("r_elbow_RotationInterpolator_Run");
group->addChildren(*ROUTE636);

CROUTE* ROUTE637 = new CROUTE();
ROUTE637->setFromField("fraction_changed");
ROUTE637->setFromNode("Run_Time");
ROUTE637->setToField("set_fraction");
ROUTE637->setToNode("r_shoulder_RotationInterpolator_Run");
group->addChildren(*ROUTE637);

CROUTE* ROUTE638 = new CROUTE();
ROUTE638->setFromField("fraction_changed");
ROUTE638->setFromNode("Run_Time");
ROUTE638->setToField("set_fraction");
ROUTE638->setToNode("l_wrist_RotationInterpolator_Run");
group->addChildren(*ROUTE638);

CROUTE* ROUTE639 = new CROUTE();
ROUTE639->setFromField("fraction_changed");
ROUTE639->setFromNode("Run_Time");
ROUTE639->setToField("set_fraction");
ROUTE639->setToNode("l_elbow_RotationInterpolator_Run");
group->addChildren(*ROUTE639);

CROUTE* ROUTE640 = new CROUTE();
ROUTE640->setFromField("fraction_changed");
ROUTE640->setFromNode("Run_Time");
ROUTE640->setToField("set_fraction");
ROUTE640->setToNode("l_shoulder_RotationInterpolator_Run");
group->addChildren(*ROUTE640);

CROUTE* ROUTE641 = new CROUTE();
ROUTE641->setFromField("fraction_changed");
ROUTE641->setFromNode("Run_Time");
ROUTE641->setToField("set_fraction");
ROUTE641->setToNode("head_RotationInterpolator_Run");
group->addChildren(*ROUTE641);

CROUTE* ROUTE642 = new CROUTE();
ROUTE642->setFromField("fraction_changed");
ROUTE642->setFromNode("Run_Time");
ROUTE642->setToField("set_fraction");
ROUTE642->setToNode("neck_RotationInterpolator_Run");
group->addChildren(*ROUTE642);

CROUTE* ROUTE643 = new CROUTE();
ROUTE643->setFromField("fraction_changed");
ROUTE643->setFromNode("Run_Time");
ROUTE643->setToField("set_fraction");
ROUTE643->setToNode("upper_body_RotationInterpolator_Run");
group->addChildren(*ROUTE643);

CROUTE* ROUTE644 = new CROUTE();
ROUTE644->setFromField("fraction_changed");
ROUTE644->setFromNode("Run_Time");
ROUTE644->setToField("set_fraction");
ROUTE644->setToNode("whole_body_RotationInterpolator_Run");
group->addChildren(*ROUTE644);

CROUTE* ROUTE645 = new CROUTE();
ROUTE645->setFromField("fraction_changed");
ROUTE645->setFromNode("Run_Time");
ROUTE645->setToField("set_fraction");
ROUTE645->setToNode("whole_body_TranslationInterpolator_Run");
group->addChildren(*ROUTE645);

CROUTE* ROUTE646 = new CROUTE();
ROUTE646->setFromField("value_changed");
ROUTE646->setFromNode("r_ankle_RotationInterpolator_Run");
ROUTE646->setToField("set_rotation");
ROUTE646->setToNode("hanim_r_ankle");
group->addChildren(*ROUTE646);

CROUTE* ROUTE647 = new CROUTE();
ROUTE647->setFromField("value_changed");
ROUTE647->setFromNode("r_knee_RotationInterpolator_Run");
ROUTE647->setToField("set_rotation");
ROUTE647->setToNode("hanim_r_knee");
group->addChildren(*ROUTE647);

CROUTE* ROUTE648 = new CROUTE();
ROUTE648->setFromField("value_changed");
ROUTE648->setFromNode("r_hip_RotationInterpolator_Run");
ROUTE648->setToField("set_rotation");
ROUTE648->setToNode("hanim_r_hip");
group->addChildren(*ROUTE648);

CROUTE* ROUTE649 = new CROUTE();
ROUTE649->setFromField("value_changed");
ROUTE649->setFromNode("l_ankle_RotationInterpolator_Run");
ROUTE649->setToField("set_rotation");
ROUTE649->setToNode("hanim_l_ankle");
group->addChildren(*ROUTE649);

CROUTE* ROUTE650 = new CROUTE();
ROUTE650->setFromField("value_changed");
ROUTE650->setFromNode("l_knee_RotationInterpolator_Run");
ROUTE650->setToField("set_rotation");
ROUTE650->setToNode("hanim_l_knee");
group->addChildren(*ROUTE650);

CROUTE* ROUTE651 = new CROUTE();
ROUTE651->setFromField("value_changed");
ROUTE651->setFromNode("l_hip_RotationInterpolator_Run");
ROUTE651->setToField("set_rotation");
ROUTE651->setToNode("hanim_l_hip");
group->addChildren(*ROUTE651);

CROUTE* ROUTE652 = new CROUTE();
ROUTE652->setFromField("value_changed");
ROUTE652->setFromNode("lower_body_RotationInterpolator_Run");
ROUTE652->setToField("set_rotation");
ROUTE652->setToNode("hanim_sacroiliac");
group->addChildren(*ROUTE652);

CROUTE* ROUTE653 = new CROUTE();
ROUTE653->setFromField("value_changed");
ROUTE653->setFromNode("r_wrist_RotationInterpolator_Run");
ROUTE653->setToField("set_rotation");
ROUTE653->setToNode("hanim_r_wrist");
group->addChildren(*ROUTE653);

CROUTE* ROUTE654 = new CROUTE();
ROUTE654->setFromField("value_changed");
ROUTE654->setFromNode("r_elbow_RotationInterpolator_Run");
ROUTE654->setToField("set_rotation");
ROUTE654->setToNode("hanim_r_elbow");
group->addChildren(*ROUTE654);

CROUTE* ROUTE655 = new CROUTE();
ROUTE655->setFromField("value_changed");
ROUTE655->setFromNode("r_shoulder_RotationInterpolator_Run");
ROUTE655->setToField("set_rotation");
ROUTE655->setToNode("hanim_r_shoulder");
group->addChildren(*ROUTE655);

CROUTE* ROUTE656 = new CROUTE();
ROUTE656->setFromField("value_changed");
ROUTE656->setFromNode("l_wrist_RotationInterpolator_Run");
ROUTE656->setToField("set_rotation");
ROUTE656->setToNode("hanim_l_wrist");
group->addChildren(*ROUTE656);

CROUTE* ROUTE657 = new CROUTE();
ROUTE657->setFromField("value_changed");
ROUTE657->setFromNode("l_elbow_RotationInterpolator_Run");
ROUTE657->setToField("set_rotation");
ROUTE657->setToNode("hanim_l_elbow");
group->addChildren(*ROUTE657);

CROUTE* ROUTE658 = new CROUTE();
ROUTE658->setFromField("value_changed");
ROUTE658->setFromNode("l_shoulder_RotationInterpolator_Run");
ROUTE658->setToField("set_rotation");
ROUTE658->setToNode("hanim_l_shoulder");
group->addChildren(*ROUTE658);

CROUTE* ROUTE659 = new CROUTE();
ROUTE659->setFromField("value_changed");
ROUTE659->setFromNode("head_RotationInterpolator_Run");
ROUTE659->setToField("set_rotation");
ROUTE659->setToNode("hanim_skullbase");
group->addChildren(*ROUTE659);

CROUTE* ROUTE660 = new CROUTE();
ROUTE660->setFromField("value_changed");
ROUTE660->setFromNode("neck_RotationInterpolator_Run");
ROUTE660->setToField("set_rotation");
ROUTE660->setToNode("hanim_vc4");
group->addChildren(*ROUTE660);

CROUTE* ROUTE661 = new CROUTE();
ROUTE661->setFromField("value_changed");
ROUTE661->setFromNode("upper_body_RotationInterpolator_Run");
ROUTE661->setToField("set_rotation");
ROUTE661->setToNode("hanim_vl1");
group->addChildren(*ROUTE661);

CROUTE* ROUTE662 = new CROUTE();
ROUTE662->setFromField("value_changed");
ROUTE662->setFromNode("whole_body_RotationInterpolator_Run");
ROUTE662->setToField("set_rotation");
ROUTE662->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE662);

CROUTE* ROUTE663 = new CROUTE();
ROUTE663->setFromField("value_changed");
ROUTE663->setFromNode("whole_body_TranslationInterpolator_Run");
ROUTE663->setToField("set_translation");
ROUTE663->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE663);

CROUTE* ROUTE664 = new CROUTE();
ROUTE664->setFromField("fraction_changed");
ROUTE664->setFromNode("Jump_Time");
ROUTE664->setToField("set_fraction");
ROUTE664->setToNode("r_ankle_RotationInterpolator_Jump");
group->addChildren(*ROUTE664);

CROUTE* ROUTE665 = new CROUTE();
ROUTE665->setFromField("fraction_changed");
ROUTE665->setFromNode("Jump_Time");
ROUTE665->setToField("set_fraction");
ROUTE665->setToNode("r_knee_RotationInterpolator_Jump");
group->addChildren(*ROUTE665);

CROUTE* ROUTE666 = new CROUTE();
ROUTE666->setFromField("fraction_changed");
ROUTE666->setFromNode("Jump_Time");
ROUTE666->setToField("set_fraction");
ROUTE666->setToNode("r_hip_RotationInterpolator_Jump");
group->addChildren(*ROUTE666);

CROUTE* ROUTE667 = new CROUTE();
ROUTE667->setFromField("fraction_changed");
ROUTE667->setFromNode("Jump_Time");
ROUTE667->setToField("set_fraction");
ROUTE667->setToNode("l_ankle_RotationInterpolator_Jump");
group->addChildren(*ROUTE667);

CROUTE* ROUTE668 = new CROUTE();
ROUTE668->setFromField("fraction_changed");
ROUTE668->setFromNode("Jump_Time");
ROUTE668->setToField("set_fraction");
ROUTE668->setToNode("l_knee_RotationInterpolator_Jump");
group->addChildren(*ROUTE668);

CROUTE* ROUTE669 = new CROUTE();
ROUTE669->setFromField("fraction_changed");
ROUTE669->setFromNode("Jump_Time");
ROUTE669->setToField("set_fraction");
ROUTE669->setToNode("l_hip_RotationInterpolator_Jump");
group->addChildren(*ROUTE669);

CROUTE* ROUTE670 = new CROUTE();
ROUTE670->setFromField("fraction_changed");
ROUTE670->setFromNode("Jump_Time");
ROUTE670->setToField("set_fraction");
ROUTE670->setToNode("lower_body_RotationInterpolator_Jump");
group->addChildren(*ROUTE670);

CROUTE* ROUTE671 = new CROUTE();
ROUTE671->setFromField("fraction_changed");
ROUTE671->setFromNode("Jump_Time");
ROUTE671->setToField("set_fraction");
ROUTE671->setToNode("r_wrist_RotationInterpolator_Jump");
group->addChildren(*ROUTE671);

CROUTE* ROUTE672 = new CROUTE();
ROUTE672->setFromField("fraction_changed");
ROUTE672->setFromNode("Jump_Time");
ROUTE672->setToField("set_fraction");
ROUTE672->setToNode("r_elbow_RotationInterpolator_Jump");
group->addChildren(*ROUTE672);

CROUTE* ROUTE673 = new CROUTE();
ROUTE673->setFromField("fraction_changed");
ROUTE673->setFromNode("Jump_Time");
ROUTE673->setToField("set_fraction");
ROUTE673->setToNode("r_shoulder_RotationInterpolator_Jump");
group->addChildren(*ROUTE673);

CROUTE* ROUTE674 = new CROUTE();
ROUTE674->setFromField("fraction_changed");
ROUTE674->setFromNode("Jump_Time");
ROUTE674->setToField("set_fraction");
ROUTE674->setToNode("l_wrist_RotationInterpolator_Jump");
group->addChildren(*ROUTE674);

CROUTE* ROUTE675 = new CROUTE();
ROUTE675->setFromField("fraction_changed");
ROUTE675->setFromNode("Jump_Time");
ROUTE675->setToField("set_fraction");
ROUTE675->setToNode("l_elbow_RotationInterpolator_Jump");
group->addChildren(*ROUTE675);

CROUTE* ROUTE676 = new CROUTE();
ROUTE676->setFromField("fraction_changed");
ROUTE676->setFromNode("Jump_Time");
ROUTE676->setToField("set_fraction");
ROUTE676->setToNode("l_shoulder_RotationInterpolator_Jump");
group->addChildren(*ROUTE676);

CROUTE* ROUTE677 = new CROUTE();
ROUTE677->setFromField("fraction_changed");
ROUTE677->setFromNode("Jump_Time");
ROUTE677->setToField("set_fraction");
ROUTE677->setToNode("head_RotationInterpolator_Jump");
group->addChildren(*ROUTE677);

CROUTE* ROUTE678 = new CROUTE();
ROUTE678->setFromField("fraction_changed");
ROUTE678->setFromNode("Jump_Time");
ROUTE678->setToField("set_fraction");
ROUTE678->setToNode("neck_RotationInterpolator_Jump");
group->addChildren(*ROUTE678);

CROUTE* ROUTE679 = new CROUTE();
ROUTE679->setFromField("fraction_changed");
ROUTE679->setFromNode("Jump_Time");
ROUTE679->setToField("set_fraction");
ROUTE679->setToNode("upper_body_RotationInterpolator_Jump");
group->addChildren(*ROUTE679);

CROUTE* ROUTE680 = new CROUTE();
ROUTE680->setFromField("fraction_changed");
ROUTE680->setFromNode("Jump_Time");
ROUTE680->setToField("set_fraction");
ROUTE680->setToNode("whole_body_RotationInterpolator_Jump");
group->addChildren(*ROUTE680);

CROUTE* ROUTE681 = new CROUTE();
ROUTE681->setFromField("fraction_changed");
ROUTE681->setFromNode("Jump_Time");
ROUTE681->setToField("set_fraction");
ROUTE681->setToNode("whole_body_TranslationInterpolator_Jump");
group->addChildren(*ROUTE681);

CROUTE* ROUTE682 = new CROUTE();
ROUTE682->setFromField("value_changed");
ROUTE682->setFromNode("r_ankle_RotationInterpolator_Jump");
ROUTE682->setToField("set_rotation");
ROUTE682->setToNode("hanim_r_ankle");
group->addChildren(*ROUTE682);

CROUTE* ROUTE683 = new CROUTE();
ROUTE683->setFromField("value_changed");
ROUTE683->setFromNode("r_knee_RotationInterpolator_Jump");
ROUTE683->setToField("set_rotation");
ROUTE683->setToNode("hanim_r_knee");
group->addChildren(*ROUTE683);

CROUTE* ROUTE684 = new CROUTE();
ROUTE684->setFromField("value_changed");
ROUTE684->setFromNode("r_hip_RotationInterpolator_Jump");
ROUTE684->setToField("set_rotation");
ROUTE684->setToNode("hanim_r_hip");
group->addChildren(*ROUTE684);

CROUTE* ROUTE685 = new CROUTE();
ROUTE685->setFromField("value_changed");
ROUTE685->setFromNode("l_ankle_RotationInterpolator_Jump");
ROUTE685->setToField("set_rotation");
ROUTE685->setToNode("hanim_l_ankle");
group->addChildren(*ROUTE685);

CROUTE* ROUTE686 = new CROUTE();
ROUTE686->setFromField("value_changed");
ROUTE686->setFromNode("l_knee_RotationInterpolator_Jump");
ROUTE686->setToField("set_rotation");
ROUTE686->setToNode("hanim_l_knee");
group->addChildren(*ROUTE686);

CROUTE* ROUTE687 = new CROUTE();
ROUTE687->setFromField("value_changed");
ROUTE687->setFromNode("l_hip_RotationInterpolator_Jump");
ROUTE687->setToField("set_rotation");
ROUTE687->setToNode("hanim_l_hip");
group->addChildren(*ROUTE687);

CROUTE* ROUTE688 = new CROUTE();
ROUTE688->setFromField("value_changed");
ROUTE688->setFromNode("lower_body_RotationInterpolator_Jump");
ROUTE688->setToField("set_rotation");
ROUTE688->setToNode("hanim_sacroiliac");
group->addChildren(*ROUTE688);

CROUTE* ROUTE689 = new CROUTE();
ROUTE689->setFromField("value_changed");
ROUTE689->setFromNode("r_wrist_RotationInterpolator_Jump");
ROUTE689->setToField("set_rotation");
ROUTE689->setToNode("hanim_r_wrist");
group->addChildren(*ROUTE689);

CROUTE* ROUTE690 = new CROUTE();
ROUTE690->setFromField("value_changed");
ROUTE690->setFromNode("r_elbow_RotationInterpolator_Jump");
ROUTE690->setToField("set_rotation");
ROUTE690->setToNode("hanim_r_elbow");
group->addChildren(*ROUTE690);

CROUTE* ROUTE691 = new CROUTE();
ROUTE691->setFromField("value_changed");
ROUTE691->setFromNode("r_shoulder_RotationInterpolator_Jump");
ROUTE691->setToField("set_rotation");
ROUTE691->setToNode("hanim_r_shoulder");
group->addChildren(*ROUTE691);

CROUTE* ROUTE692 = new CROUTE();
ROUTE692->setFromField("value_changed");
ROUTE692->setFromNode("l_wrist_RotationInterpolator_Jump");
ROUTE692->setToField("set_rotation");
ROUTE692->setToNode("hanim_l_wrist");
group->addChildren(*ROUTE692);

CROUTE* ROUTE693 = new CROUTE();
ROUTE693->setFromField("value_changed");
ROUTE693->setFromNode("l_elbow_RotationInterpolator_Jump");
ROUTE693->setToField("set_rotation");
ROUTE693->setToNode("hanim_l_elbow");
group->addChildren(*ROUTE693);

CROUTE* ROUTE694 = new CROUTE();
ROUTE694->setFromField("value_changed");
ROUTE694->setFromNode("l_shoulder_RotationInterpolator_Jump");
ROUTE694->setToField("set_rotation");
ROUTE694->setToNode("hanim_l_shoulder");
group->addChildren(*ROUTE694);

CROUTE* ROUTE695 = new CROUTE();
ROUTE695->setFromField("value_changed");
ROUTE695->setFromNode("head_RotationInterpolator_Jump");
ROUTE695->setToField("set_rotation");
ROUTE695->setToNode("hanim_skullbase");
group->addChildren(*ROUTE695);

CROUTE* ROUTE696 = new CROUTE();
ROUTE696->setFromField("value_changed");
ROUTE696->setFromNode("neck_RotationInterpolator_Jump");
ROUTE696->setToField("set_rotation");
ROUTE696->setToNode("hanim_vc4");
group->addChildren(*ROUTE696);

CROUTE* ROUTE697 = new CROUTE();
ROUTE697->setFromField("value_changed");
ROUTE697->setFromNode("upper_body_RotationInterpolator_Jump");
ROUTE697->setToField("set_rotation");
ROUTE697->setToNode("hanim_vl1");
group->addChildren(*ROUTE697);

CROUTE* ROUTE698 = new CROUTE();
ROUTE698->setFromField("value_changed");
ROUTE698->setFromNode("whole_body_RotationInterpolator_Jump");
ROUTE698->setToField("set_rotation");
ROUTE698->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE698);

CROUTE* ROUTE699 = new CROUTE();
ROUTE699->setFromField("value_changed");
ROUTE699->setFromNode("whole_body_TranslationInterpolator_Jump");
ROUTE699->setToField("set_translation");
ROUTE699->setToNode("hanim_humanoid_root");
group->addChildren(*ROUTE699);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
