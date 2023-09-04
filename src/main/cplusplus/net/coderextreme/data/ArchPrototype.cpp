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
meta2->setContent("ArchPrototype.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Michele Foti, Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("15 December 2014");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("27 November 2015");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("ArchModelingDiagrams.pdf");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://en.wikipedia.org/wiki/Arch");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("identifier");
meta10->setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CProtoDeclare ProtoDeclare13 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArchPrototype" ><ProtoInterface><field accessType="inputOutput" type="SFColor" name="diffuseColor" value="0.2 0.8 0.8"></field>
<field accessType="inputOutput" type="SFColor" name="emissiveColor" value="0.2 0.8 0.8"></field>
<field accessType="initializeOnly" type="SFFloat" name="clearSpanWidth" value="4"></field>
<field accessType="initializeOnly" type="SFFloat" name="riseHeight" value="2"></field>
<field accessType="initializeOnly" type="SFFloat" name="depth" value="3"></field>
<field accessType="initializeOnly" type="SFFloat" name="topAbutmentHeight" value="0.5"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierWidth" value="0.5"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierHeight" value="1"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalf"></field>
<field accessType="initializeOnly" type="SFFloat" name="archHalfExtensionWidth"></field>
<field accessType="initializeOnly" type="SFBool" name="onlyIntrados"></field>
<field accessType="initializeOnly" type="SFBool" name="archFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalfFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="lintel"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="ArchTransform"><Shape DEF="Arch"><Appearance><Material DEF="MaterialNode"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
</IS>
</Material>
</Appearance>
<IndexedFaceSet DEF="ArchIndex" solid="false" convex="false"><Coordinate containerField="coord" DEF="ArchChord"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Script DEF="ArchPrototypeScript" url="&quot;../node/ArchPrototypeScript.js&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js&quot;"><field accessType="initializeOnly" type="SFFloat" name="clearSpanWidth"></field>
<field accessType="initializeOnly" type="SFFloat" name="riseHeight"></field>
<field accessType="initializeOnly" type="SFFloat" name="depth"></field>
<field accessType="initializeOnly" type="SFFloat" name="topAbutmentHeight"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierWidth"></field>
<field accessType="initializeOnly" type="SFFloat" name="pierHeight"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalf"></field>
<field accessType="initializeOnly" type="SFFloat" name="archHalfExtensionWidth"></field>
<field accessType="initializeOnly" type="SFBool" name="onlyIntrados"></field>
<field accessType="initializeOnly" type="SFBool" name="archFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="archHalfFilled"></field>
<field accessType="initializeOnly" type="SFBool" name="lintel"></field>
<field accessType="outputOnly" type="SFVec3f" name="computedScale"></field>
<field accessType="outputOnly" type="MFVec3f" name="pointOut"></field>
<field accessType="outputOnly" type="MFInt32" name="indexOut"></field>
<IS><connect nodeField="clearSpanWidth" protoField="clearSpanWidth"></connect>
<connect nodeField="riseHeight" protoField="riseHeight"></connect>
<connect nodeField="depth" protoField="depth"></connect>
<connect nodeField="topAbutmentHeight" protoField="topAbutmentHeight"></connect>
<connect nodeField="pierWidth" protoField="pierWidth"></connect>
<connect nodeField="pierHeight" protoField="pierHeight"></connect>
<connect nodeField="archHalf" protoField="archHalf"></connect>
<connect nodeField="archHalfExtensionWidth" protoField="archHalfExtensionWidth"></connect>
<connect nodeField="onlyIntrados" protoField="onlyIntrados"></connect>
<connect nodeField="archFilled" protoField="archFilled"></connect>
<connect nodeField="archHalfFilled" protoField="archHalfFilled"></connect>
<connect nodeField="lintel" protoField="lintel"></connect>
</IS>
</Script>
<ROUTE fromNode="ArchPrototypeScript" fromField="computedScale" toNode="ArchTransform" toField="scale"></ROUTE>
<ROUTE fromNode="ArchPrototypeScript" fromField="pointOut" toNode="ArchChord" toField="point"></ROUTE>
<ROUTE fromNode="ArchPrototypeScript" fromField="indexOut" toNode="ArchIndex" toField="set_coordIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare13->setName("ArchPrototype");
CProtoInterface* ProtoInterface14 = new CProtoInterface();
Cfield* field15 = new Cfield();
field15->setAccessType("inputOutput");
field15->setType("SFColor");
field15->setName("diffuseColor");
field15->setValue("0.2 0.8 0.8");
ProtoInterface14->addField(*field15);

Cfield* field16 = new Cfield();
field16->setAccessType("inputOutput");
field16->setType("SFColor");
field16->setName("emissiveColor");
field16->setValue("0.2 0.8 0.8");
ProtoInterface14->addField(*field16);

Cfield* field17 = new Cfield();
field17->setAccessType("initializeOnly");
field17->setType("SFFloat");
field17->setName("clearSpanWidth");
field17->setValue("4");
ProtoInterface14->addField(*field17);

Cfield* field18 = new Cfield();
field18->setAccessType("initializeOnly");
field18->setType("SFFloat");
field18->setName("riseHeight");
field18->setValue("2");
ProtoInterface14->addField(*field18);

Cfield* field19 = new Cfield();
field19->setAccessType("initializeOnly");
field19->setType("SFFloat");
field19->setName("depth");
field19->setValue("3");
ProtoInterface14->addField(*field19);

Cfield* field20 = new Cfield();
field20->setAccessType("initializeOnly");
field20->setType("SFFloat");
field20->setName("topAbutmentHeight");
field20->setValue("0.5");
ProtoInterface14->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("initializeOnly");
field21->setType("SFFloat");
field21->setName("pierWidth");
field21->setValue("0.5");
ProtoInterface14->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("initializeOnly");
field22->setType("SFFloat");
field22->setName("pierHeight");
field22->setValue("1");
ProtoInterface14->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("initializeOnly");
field23->setType("SFBool");
field23->setName("archHalf");
ProtoInterface14->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("initializeOnly");
field24->setType("SFFloat");
field24->setName("archHalfExtensionWidth");
ProtoInterface14->addField(*field24);

Cfield* field25 = new Cfield();
field25->setAccessType("initializeOnly");
field25->setType("SFBool");
field25->setName("onlyIntrados");
ProtoInterface14->addField(*field25);

Cfield* field26 = new Cfield();
field26->setAccessType("initializeOnly");
field26->setType("SFBool");
field26->setName("archFilled");
ProtoInterface14->addField(*field26);

Cfield* field27 = new Cfield();
field27->setAccessType("initializeOnly");
field27->setType("SFBool");
field27->setName("archHalfFilled");
ProtoInterface14->addField(*field27);

Cfield* field28 = new Cfield();
field28->setAccessType("initializeOnly");
field28->setType("SFBool");
field28->setName("lintel");
ProtoInterface14->addField(*field28);

ProtoDeclare13->setProtoInterface(*ProtoInterface14);

CProtoBody* ProtoBody29 = new CProtoBody();
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setDEF("ArchTransform");
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
Shape31->setDEF("Arch");
CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDEF("MaterialNode");
CIS* IS34 = new CIS();
Cconnect* connect35 = new Cconnect();
connect35->setNodeField("diffuseColor");
connect35->setProtoField("diffuseColor");
IS34->addConnect(*connect35);

Cconnect* connect36 = new Cconnect();
connect36->setNodeField("emissiveColor");
connect36->setProtoField("emissiveColor");
IS34->addConnect(*connect36);

Material33->setIS(*IS34);

Appearance32->setMaterial(*Material33);

Shape31->setAppearance(*Appearance32);

CIndexedFaceSet* IndexedFaceSet37 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet37->setDEF("ArchIndex");
IndexedFaceSet37->setSolid(False);
IndexedFaceSet37->setConvex(False);
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setDEF("ArchChord");
IndexedFaceSet37->setCoord(*Coordinate38);

Shape31->setGeometry(IndexedFaceSet37);

Transform30->addChild(*Shape31);

ProtoBody29->addChildren(*Transform30);

CScript* Script39 = (CScript *)(m_pScene.createNode("Script"));
Script39->setDEF("ArchPrototypeScript");
Script39->setUrl(new CString[2]{"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"}, 2);
Cfield* field40 = new Cfield();
field40->setAccessType("initializeOnly");
field40->setType("SFFloat");
field40->setName("clearSpanWidth");
Script39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("initializeOnly");
field41->setType("SFFloat");
field41->setName("riseHeight");
Script39->addField(*field41);

Cfield* field42 = new Cfield();
field42->setAccessType("initializeOnly");
field42->setType("SFFloat");
field42->setName("depth");
Script39->addField(*field42);

Cfield* field43 = new Cfield();
field43->setAccessType("initializeOnly");
field43->setType("SFFloat");
field43->setName("topAbutmentHeight");
Script39->addField(*field43);

Cfield* field44 = new Cfield();
field44->setAccessType("initializeOnly");
field44->setType("SFFloat");
field44->setName("pierWidth");
Script39->addField(*field44);

Cfield* field45 = new Cfield();
field45->setAccessType("initializeOnly");
field45->setType("SFFloat");
field45->setName("pierHeight");
Script39->addField(*field45);

Cfield* field46 = new Cfield();
field46->setAccessType("initializeOnly");
field46->setType("SFBool");
field46->setName("archHalf");
Script39->addField(*field46);

Cfield* field47 = new Cfield();
field47->setAccessType("initializeOnly");
field47->setType("SFFloat");
field47->setName("archHalfExtensionWidth");
Script39->addField(*field47);

Cfield* field48 = new Cfield();
field48->setAccessType("initializeOnly");
field48->setType("SFBool");
field48->setName("onlyIntrados");
Script39->addField(*field48);

Cfield* field49 = new Cfield();
field49->setAccessType("initializeOnly");
field49->setType("SFBool");
field49->setName("archFilled");
Script39->addField(*field49);

Cfield* field50 = new Cfield();
field50->setAccessType("initializeOnly");
field50->setType("SFBool");
field50->setName("archHalfFilled");
Script39->addField(*field50);

Cfield* field51 = new Cfield();
field51->setAccessType("initializeOnly");
field51->setType("SFBool");
field51->setName("lintel");
Script39->addField(*field51);

Cfield* field52 = new Cfield();
field52->setAccessType("outputOnly");
field52->setType("SFVec3f");
field52->setName("computedScale");
Script39->addField(*field52);

Cfield* field53 = new Cfield();
field53->setAccessType("outputOnly");
field53->setType("MFVec3f");
field53->setName("pointOut");
Script39->addField(*field53);

Cfield* field54 = new Cfield();
field54->setAccessType("outputOnly");
field54->setType("MFInt32");
field54->setName("indexOut");
Script39->addField(*field54);

CIS* IS55 = new CIS();
Cconnect* connect56 = new Cconnect();
connect56->setNodeField("clearSpanWidth");
connect56->setProtoField("clearSpanWidth");
IS55->addConnect(*connect56);

Cconnect* connect57 = new Cconnect();
connect57->setNodeField("riseHeight");
connect57->setProtoField("riseHeight");
IS55->addConnect(*connect57);

Cconnect* connect58 = new Cconnect();
connect58->setNodeField("depth");
connect58->setProtoField("depth");
IS55->addConnect(*connect58);

Cconnect* connect59 = new Cconnect();
connect59->setNodeField("topAbutmentHeight");
connect59->setProtoField("topAbutmentHeight");
IS55->addConnect(*connect59);

Cconnect* connect60 = new Cconnect();
connect60->setNodeField("pierWidth");
connect60->setProtoField("pierWidth");
IS55->addConnect(*connect60);

Cconnect* connect61 = new Cconnect();
connect61->setNodeField("pierHeight");
connect61->setProtoField("pierHeight");
IS55->addConnect(*connect61);

Cconnect* connect62 = new Cconnect();
connect62->setNodeField("archHalf");
connect62->setProtoField("archHalf");
IS55->addConnect(*connect62);

Cconnect* connect63 = new Cconnect();
connect63->setNodeField("archHalfExtensionWidth");
connect63->setProtoField("archHalfExtensionWidth");
IS55->addConnect(*connect63);

Cconnect* connect64 = new Cconnect();
connect64->setNodeField("onlyIntrados");
connect64->setProtoField("onlyIntrados");
IS55->addConnect(*connect64);

Cconnect* connect65 = new Cconnect();
connect65->setNodeField("archFilled");
connect65->setProtoField("archFilled");
IS55->addConnect(*connect65);

Cconnect* connect66 = new Cconnect();
connect66->setNodeField("archHalfFilled");
connect66->setProtoField("archHalfFilled");
IS55->addConnect(*connect66);

Cconnect* connect67 = new Cconnect();
connect67->setNodeField("lintel");
connect67->setProtoField("lintel");
IS55->addConnect(*connect67);

Script39->setIS(*IS55);

ProtoBody29->addChildren(*Script39);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("ArchPrototypeScript");
ROUTE68->setFromField("computedScale");
ROUTE68->setToNode("ArchTransform");
ROUTE68->setToField("scale");
ProtoBody29->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("ArchPrototypeScript");
ROUTE69->setFromField("pointOut");
ROUTE69->setToNode("ArchChord");
ROUTE69->setToField("point");
ProtoBody29->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("ArchPrototypeScript");
ROUTE70->setFromField("indexOut");
ROUTE70->setToNode("ArchIndex");
ROUTE70->setToField("set_coordIndex");
ProtoBody29->addChildren(*ROUTE70);

ProtoDeclare13->setProtoBody(*ProtoBody29);

group->addChildren(*ProtoDeclare13);

CProtoInstance* ProtoInstance71 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance71->setDEF("ArchInstance");
ProtoInstance71->setName("ArchPrototype");
CfieldValue* fieldValue72 = new CfieldValue();
fieldValue72->setName("diffuseColor");
fieldValue72->setValue("0.5 0.3 0.6");
ProtoInstance71->addFieldValue(*fieldValue72);

CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("emissiveColor");
fieldValue73->setValue("0.5 0.3 0.6");
ProtoInstance71->addFieldValue(*fieldValue73);

CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("clearSpanWidth");
fieldValue74->setValue("5");
ProtoInstance71->addFieldValue(*fieldValue74);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("riseHeight");
fieldValue75->setValue("2.5");
ProtoInstance71->addFieldValue(*fieldValue75);

CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("depth");
fieldValue76->setValue("2");
ProtoInstance71->addFieldValue(*fieldValue76);

CfieldValue* fieldValue77 = new CfieldValue();
fieldValue77->setName("topAbutmentHeight");
fieldValue77->setValue("0.6");
ProtoInstance71->addFieldValue(*fieldValue77);

CfieldValue* fieldValue78 = new CfieldValue();
fieldValue78->setName("pierWidth");
fieldValue78->setValue("1");
ProtoInstance71->addFieldValue(*fieldValue78);

CfieldValue* fieldValue79 = new CfieldValue();
fieldValue79->setName("pierHeight");
fieldValue79->setValue("2");
ProtoInstance71->addFieldValue(*fieldValue79);

group->addChildren(*ProtoInstance71);

CInline* Inline80 = (CInline *)(m_pScene.createNode("Inline"));
Inline80->setDEF("CoordinateAxes");
Inline80->setGlobal(True);
Inline80->setUrl(new CString[1]{"../data/CoordinateAxes.x3d"}, 1);
group->addChildren(*Inline80);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
