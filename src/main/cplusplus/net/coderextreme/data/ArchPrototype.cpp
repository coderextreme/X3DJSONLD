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

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CProtoDeclare ProtoDeclare14 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArchPrototype" appinfo="Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js." ><ProtoInterface><!--COLOR OF ARCH--><!--INPUT PARAMETERS--><!--General parameters: measures in meters--><!--Parameters to create to create shapes related to arch: put true to apply--><field name="diffuseColor" accessType="inputOutput" appinfo="color of arch" type="SFColor" value="0.2 0.8 0.8"></field>
<field name="emissiveColor" accessType="inputOutput" appinfo="color of arch" type="SFColor" value="0.2 0.8 0.8"></field>
<field name="clearSpanWidth" accessType="initializeOnly" appinfo="clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference" type="SFFloat" value="4"></field>
<field name="riseHeight" accessType="initializeOnly" appinfo="riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference" type="SFFloat" value="2"></field>
<field name="depth" accessType="initializeOnly" appinfo="depth" type="SFFloat" value="3"></field>
<field name="topAbutmentHeight" accessType="initializeOnly" appinfo="topAbutmentHeight:topAbutmentHeight=0 means no topAbutment" type="SFFloat" value="0.5"></field>
<field name="pierWidth" accessType="initializeOnly" appinfo="pierWidth:pierWidtht=0 means no pierWidth" type="SFFloat" value="0.5"></field>
<field name="pierHeight" accessType="initializeOnly" appinfo="pierHeight: pierHeight=0 means no pierHeight" type="SFFloat" value="1"></field>
<field name="archHalf" accessType="initializeOnly" appinfo="archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width" type="SFBool" value="false"></field>
<field name="archHalfExtensionWidth" accessType="initializeOnly" appinfo="archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information." type="SFFloat" value="0"></field>
<field name="onlyIntrados" accessType="initializeOnly" appinfo="onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true." type="SFBool" value="false"></field>
<field name="archFilled" accessType="initializeOnly" appinfo="archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose." type="SFBool" value="false"></field>
<field name="archHalfFilled" accessType="initializeOnly" appinfo="archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width." type="SFBool" value="false"></field>
<field name="lintel" accessType="initializeOnly" appinfo="lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true." type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--IndexedFaceset creates arch--><Transform DEF="ArchTransform"><Shape DEF="Arch"><!--note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly--><IndexedFaceSet containerField="geometry" DEF="ArchIndex" convex="false" solid="false"><Coordinate containerField="coord" DEF="ArchChord"></Coordinate>
</IndexedFaceSet>
<Appearance><Material DEF="MaterialNode"><IS><connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
<!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><!--This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs--><Script DEF="ArchPrototypeScript" url="&quot;../node/ArchPrototypeScript.js&quot; &quot;https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js&quot;"><!--INPUT PARAMETERS--><!--General parameters--><!--Parameters to create to create shapes related to arch: put true to apply--><!--OUTPUT PARAMETERS--><field name="clearSpanWidth" accessType="initializeOnly" appinfo="user or default input for clearSpanWidth parameter" type="SFFloat"></field>
<field name="riseHeight" accessType="initializeOnly" appinfo="user or default input for riseHeight parameter" type="SFFloat"></field>
<field name="depth" accessType="initializeOnly" appinfo="user or default input for depth parameter" type="SFFloat"></field>
<field name="topAbutmentHeight" accessType="initializeOnly" appinfo="user or default input for topAbutmentHeight parameter" type="SFFloat"></field>
<field name="pierWidth" accessType="initializeOnly" appinfo="user or default input for pierWidth parameter" type="SFFloat"></field>
<field name="pierHeight" accessType="initializeOnly" appinfo="user or default input for pierHeight parameter" type="SFFloat"></field>
<field name="archHalf" accessType="initializeOnly" appinfo="user or default input for archHalf parameter" type="SFBool"></field>
<field name="archHalfExtensionWidth" accessType="initializeOnly" appinfo="user or default input for archHalfExtensionWidth parameter" type="SFFloat"></field>
<field name="onlyIntrados" accessType="initializeOnly" appinfo="user or default input for onlyIntrados parameter" type="SFBool"></field>
<field name="archFilled" accessType="initializeOnly" appinfo="user or default input for archFilled parameter" type="SFBool"></field>
<field name="archHalfFilled" accessType="initializeOnly" appinfo="user or default input for archHalfFilled parameter" type="SFBool"></field>
<field name="lintel" accessType="initializeOnly" appinfo="user or default input for lintel parameter" type="SFBool"></field>
<field name="computedScale" accessType="outputOnly" appinfo="computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth" type="SFVec3f"></field>
<field name="pointOut" accessType="outputOnly" appinfo="send computed points to the Coordinate node" type="MFVec3f"></field>
<field name="indexOut" accessType="outputOnly" appinfo="send computed indices to the IndexedFaceSet node" type="MFInt32"></field>
<IS><connect nodeField="clearSpanWidth" protoField="clearSpanWidth"></connect>
<connect nodeField="riseHeight" protoField="riseHeight"></connect>
<connect nodeField="depth" protoField="depth"></connect>
<connect nodeField="pierWidth" protoField="pierWidth"></connect>
<connect nodeField="topAbutmentHeight" protoField="topAbutmentHeight"></connect>
<connect nodeField="pierHeight" protoField="pierHeight"></connect>
<connect nodeField="archHalf" protoField="archHalf"></connect>
<connect nodeField="archHalfExtensionWidth" protoField="archHalfExtensionWidth"></connect>
<connect nodeField="onlyIntrados" protoField="onlyIntrados"></connect>
<connect nodeField="archFilled" protoField="archFilled"></connect>
<connect nodeField="archHalfFilled" protoField="archHalfFilled"></connect>
<connect nodeField="lintel" protoField="lintel"></connect>
</IS>
</Script>
<ROUTE fromField="computedScale" fromNode="ArchPrototypeScript" toField="scale" toNode="ArchTransform"></ROUTE>
<ROUTE fromField="pointOut" fromNode="ArchPrototypeScript" toField="point" toNode="ArchChord"></ROUTE>
<ROUTE fromField="indexOut" fromNode="ArchPrototypeScript" toField="set_coordIndex" toNode="ArchIndex"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare14->setName("ArchPrototype");
ProtoDeclare14->setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.");
CProtoInterface* ProtoInterface15 = new CProtoInterface();
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
Cfield* field16 = new Cfield();
field16->setName("diffuseColor");
field16->setAccessType("inputOutput");
field16->setAppinfo("color of arch");
field16->setType("SFColor");
field16->setValue("0.2 0.8 0.8");
ProtoInterface15->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("emissiveColor");
field17->setAccessType("inputOutput");
field17->setAppinfo("color of arch");
field17->setType("SFColor");
field17->setValue("0.2 0.8 0.8");
ProtoInterface15->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("clearSpanWidth");
field18->setAccessType("initializeOnly");
field18->setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference");
field18->setType("SFFloat");
field18->setValue("4");
ProtoInterface15->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("riseHeight");
field19->setAccessType("initializeOnly");
field19->setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference");
field19->setType("SFFloat");
field19->setValue("2");
ProtoInterface15->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("depth");
field20->setAccessType("initializeOnly");
field20->setAppinfo("depth");
field20->setType("SFFloat");
field20->setValue("3");
ProtoInterface15->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("topAbutmentHeight");
field21->setAccessType("initializeOnly");
field21->setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment");
field21->setType("SFFloat");
field21->setValue("0.5");
ProtoInterface15->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("pierWidth");
field22->setAccessType("initializeOnly");
field22->setAppinfo("pierWidth:pierWidtht=0 means no pierWidth");
field22->setType("SFFloat");
field22->setValue("0.5");
ProtoInterface15->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("pierHeight");
field23->setAccessType("initializeOnly");
field23->setAppinfo("pierHeight: pierHeight=0 means no pierHeight");
field23->setType("SFFloat");
field23->setValue("1");
ProtoInterface15->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("archHalf");
field24->setAccessType("initializeOnly");
field24->setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width");
field24->setType("SFBool");
field24->setValue("false");
ProtoInterface15->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("archHalfExtensionWidth");
field25->setAccessType("initializeOnly");
field25->setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.");
field25->setType("SFFloat");
field25->setValue("0");
ProtoInterface15->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("onlyIntrados");
field26->setAccessType("initializeOnly");
field26->setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.");
field26->setType("SFBool");
field26->setValue("false");
ProtoInterface15->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("archFilled");
field27->setAccessType("initializeOnly");
field27->setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.");
field27->setType("SFBool");
field27->setValue("false");
ProtoInterface15->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("archHalfFilled");
field28->setAccessType("initializeOnly");
field28->setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.");
field28->setType("SFBool");
field28->setValue("false");
ProtoInterface15->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("lintel");
field29->setAccessType("initializeOnly");
field29->setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.");
field29->setType("SFBool");
field29->setValue("false");
ProtoInterface15->addField(*field29);

ProtoDeclare14->setProtoInterface(*ProtoInterface15);

CProtoBody* ProtoBody30 = new CProtoBody();
//First node determines node type of this prototype
//IndexedFaceset creates arch
CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setDEF("ArchTransform");
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
Shape32->setDEF("Arch");
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
CIndexedFaceSet* IndexedFaceSet33 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet33->setDEF("ArchIndex");
IndexedFaceSet33->setConvex(False);
IndexedFaceSet33->setSolid(False);
CCoordinate* Coordinate34 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate34->setDEF("ArchChord");
IndexedFaceSet33->setCoord(*Coordinate34);

Shape32->setGeometry(IndexedFaceSet33);

CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDEF("MaterialNode");
CIS* IS37 = new CIS();
Cconnect* connect38 = new Cconnect();
connect38->setNodeField("emissiveColor");
connect38->setProtoField("emissiveColor");
IS37->addConnect(*connect38);

Cconnect* connect39 = new Cconnect();
connect39->setNodeField("diffuseColor");
connect39->setProtoField("diffuseColor");
IS37->addConnect(*connect39);

Material36->setIS(*IS37);

Appearance35->setMaterial(*Material36);

Shape32->setAppearance(*Appearance35);

Transform31->addChildren(*Shape32);

ProtoBody30->addChildren(*Transform31);

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
CScript* Script40 = (CScript *)(m_pScene.createNode("Script"));
Script40->setDEF("ArchPrototypeScript");
Script40->setUrl(new CString[2]{"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"}, 2);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
Cfield* field41 = new Cfield();
field41->setName("clearSpanWidth");
field41->setAccessType("initializeOnly");
field41->setAppinfo("user or default input for clearSpanWidth parameter");
field41->setType("SFFloat");
Script40->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("riseHeight");
field42->setAccessType("initializeOnly");
field42->setAppinfo("user or default input for riseHeight parameter");
field42->setType("SFFloat");
Script40->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("depth");
field43->setAccessType("initializeOnly");
field43->setAppinfo("user or default input for depth parameter");
field43->setType("SFFloat");
Script40->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("topAbutmentHeight");
field44->setAccessType("initializeOnly");
field44->setAppinfo("user or default input for topAbutmentHeight parameter");
field44->setType("SFFloat");
Script40->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("pierWidth");
field45->setAccessType("initializeOnly");
field45->setAppinfo("user or default input for pierWidth parameter");
field45->setType("SFFloat");
Script40->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("pierHeight");
field46->setAccessType("initializeOnly");
field46->setAppinfo("user or default input for pierHeight parameter");
field46->setType("SFFloat");
Script40->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("archHalf");
field47->setAccessType("initializeOnly");
field47->setAppinfo("user or default input for archHalf parameter");
field47->setType("SFBool");
Script40->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("archHalfExtensionWidth");
field48->setAccessType("initializeOnly");
field48->setAppinfo("user or default input for archHalfExtensionWidth parameter");
field48->setType("SFFloat");
Script40->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("onlyIntrados");
field49->setAccessType("initializeOnly");
field49->setAppinfo("user or default input for onlyIntrados parameter");
field49->setType("SFBool");
Script40->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("archFilled");
field50->setAccessType("initializeOnly");
field50->setAppinfo("user or default input for archFilled parameter");
field50->setType("SFBool");
Script40->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("archHalfFilled");
field51->setAccessType("initializeOnly");
field51->setAppinfo("user or default input for archHalfFilled parameter");
field51->setType("SFBool");
Script40->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("lintel");
field52->setAccessType("initializeOnly");
field52->setAppinfo("user or default input for lintel parameter");
field52->setType("SFBool");
Script40->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("computedScale");
field53->setAccessType("outputOnly");
field53->setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth");
field53->setType("SFVec3f");
Script40->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("pointOut");
field54->setAccessType("outputOnly");
field54->setAppinfo("send computed points to the Coordinate node");
field54->setType("MFVec3f");
Script40->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("indexOut");
field55->setAccessType("outputOnly");
field55->setAppinfo("send computed indices to the IndexedFaceSet node");
field55->setType("MFInt32");
Script40->addField(*field55);

CIS* IS56 = new CIS();
Cconnect* connect57 = new Cconnect();
connect57->setNodeField("clearSpanWidth");
connect57->setProtoField("clearSpanWidth");
IS56->addConnect(*connect57);

Cconnect* connect58 = new Cconnect();
connect58->setNodeField("riseHeight");
connect58->setProtoField("riseHeight");
IS56->addConnect(*connect58);

Cconnect* connect59 = new Cconnect();
connect59->setNodeField("depth");
connect59->setProtoField("depth");
IS56->addConnect(*connect59);

Cconnect* connect60 = new Cconnect();
connect60->setNodeField("pierWidth");
connect60->setProtoField("pierWidth");
IS56->addConnect(*connect60);

Cconnect* connect61 = new Cconnect();
connect61->setNodeField("topAbutmentHeight");
connect61->setProtoField("topAbutmentHeight");
IS56->addConnect(*connect61);

Cconnect* connect62 = new Cconnect();
connect62->setNodeField("pierHeight");
connect62->setProtoField("pierHeight");
IS56->addConnect(*connect62);

Cconnect* connect63 = new Cconnect();
connect63->setNodeField("archHalf");
connect63->setProtoField("archHalf");
IS56->addConnect(*connect63);

Cconnect* connect64 = new Cconnect();
connect64->setNodeField("archHalfExtensionWidth");
connect64->setProtoField("archHalfExtensionWidth");
IS56->addConnect(*connect64);

Cconnect* connect65 = new Cconnect();
connect65->setNodeField("onlyIntrados");
connect65->setProtoField("onlyIntrados");
IS56->addConnect(*connect65);

Cconnect* connect66 = new Cconnect();
connect66->setNodeField("archFilled");
connect66->setProtoField("archFilled");
IS56->addConnect(*connect66);

Cconnect* connect67 = new Cconnect();
connect67->setNodeField("archHalfFilled");
connect67->setProtoField("archHalfFilled");
IS56->addConnect(*connect67);

Cconnect* connect68 = new Cconnect();
connect68->setNodeField("lintel");
connect68->setProtoField("lintel");
IS56->addConnect(*connect68);

Script40->setIS(*IS56);

ProtoBody30->addChildren(*Script40);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("computedScale");
ROUTE69->setFromNode("ArchPrototypeScript");
ROUTE69->setToField("scale");
ROUTE69->setToNode("ArchTransform");
ProtoBody30->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromField("pointOut");
ROUTE70->setFromNode("ArchPrototypeScript");
ROUTE70->setToField("point");
ROUTE70->setToNode("ArchChord");
ProtoBody30->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromField("indexOut");
ROUTE71->setFromNode("ArchPrototypeScript");
ROUTE71->setToField("set_coordIndex");
ROUTE71->setToNode("ArchIndex");
ProtoBody30->addChildren(*ROUTE71);

ProtoDeclare14->setProtoBody(*ProtoBody30);

group->addChildren(*ProtoDeclare14);

CProtoInstance* ProtoInstance72 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance72->setName("ArchPrototype");
ProtoInstance72->setDEF("ArchInstance");
CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("diffuseColor");
fieldValue73->setValue("0.5 0.3 0.6");
ProtoInstance72->addFieldValue(*fieldValue73);

CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("emissiveColor");
fieldValue74->setValue("0.5 0.3 0.6");
ProtoInstance72->addFieldValue(*fieldValue74);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("clearSpanWidth");
fieldValue75->setValue("5");
ProtoInstance72->addFieldValue(*fieldValue75);

CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("riseHeight");
fieldValue76->setValue("2.5");
ProtoInstance72->addFieldValue(*fieldValue76);

CfieldValue* fieldValue77 = new CfieldValue();
fieldValue77->setName("depth");
fieldValue77->setValue("2");
ProtoInstance72->addFieldValue(*fieldValue77);

CfieldValue* fieldValue78 = new CfieldValue();
fieldValue78->setName("topAbutmentHeight");
fieldValue78->setValue("0.6");
ProtoInstance72->addFieldValue(*fieldValue78);

CfieldValue* fieldValue79 = new CfieldValue();
fieldValue79->setName("pierWidth");
fieldValue79->setValue("1");
ProtoInstance72->addFieldValue(*fieldValue79);

CfieldValue* fieldValue80 = new CfieldValue();
fieldValue80->setName("pierHeight");
fieldValue80->setValue("2");
ProtoInstance72->addFieldValue(*fieldValue80);

group->addChildren(*ProtoInstance72);

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
CInline* Inline81 = (CInline *)(m_pScene.createNode("Inline"));
Inline81->setDEF("CoordinateAxes");
Inline81->setUrl(new CString[1]{"../data/CoordinateAxes.x3d"}, 1);
group->addChildren(*Inline81);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
