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
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("HeadsUpDisplayPrototype.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Generic Heads Up Display (HUD) prototype to keep children on screen.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("9 November 2003");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("14 January 2014");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("subject");
meta7->setContent("HUD Heads Up Display");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("identifier");
meta8->setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("generator");
meta9->setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("../../license.html");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CProtoDeclare ProtoDeclare12 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="HeadsUpDisplay" appinfo="HeadsUpDisplay positions child geometry in screen space, movable by the user" ><ProtoInterface><field name="children" accessType="inputOutput" appinfo="Displayed subscene positioned as a HUD." type="MFNode"><!--default is null array of nodes--></field>
<field name="dragChildren" accessType="inputOutput" appinfo="Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position." type="MFNode"><!--default is null array of nodes--></field>
<field name="locationOffset" accessType="initializeOnly" appinfo="Modified screen location and distance (for size)." type="SFVec3f" value="-2 -2 0"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="Enable/disable console output for troubleshooting." type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Group><ProximitySensor DEF="WhereSensor" size="1000000000 1000000000 1000000000"><IS><connect nodeField="center" protoField="locationOffset"></connect>
</IS>
</ProximitySensor>
<Transform DEF="FixedLocation"><Transform DEF="MovableLocation"><Transform DEF="LocationOffset"><IS><connect nodeField="translation" protoField="locationOffset"></connect>
</IS>
<Transform translation="0 0 -10"><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
<Group DEF="PlaneMovementSensorGroup"><Group DEF="DragGeometry"><IS><connect nodeField="children" protoField="dragChildren"></connect>
</IS>
</Group>
<PlaneSensor DEF="PlaneMovementSensor" description="click and drag to move interface"><IS><connect nodeField="offset" protoField="locationOffset"></connect>
</IS>
</PlaneSensor>
<VisibilitySensor DEF="MovementVisibilitySensor"></VisibilitySensor>
<Script DEF="VisibilityControlScript"><field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<field name="isVisible" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="planeSensorTranslation" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="setIsVisible" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorIsActive" accessType="inputOnly" type="SFBool"></field>
<field name="setPlaneSensorTranslation" accessType="inputOnly" type="SFVec3f"></field>
<field name="translationChanged" accessType="outputOnly" type="SFVec3f"></field>
<field name="translationOffsetChanged" accessType="outputOnly" type="SFVec3f"></field>
<IS><connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:

function tracePrint (text)
{
	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);
}
function setIsVisible (value, timeStamp)
{
	isVisible = value;
	tracePrint('isVisible=' + value);
}
function setPlaneSensorIsActive (value, timeStamp)
{
	tracePrint('PlaneSensor isActive=' + value);

	if (value == false)
	{
		tracePrint('planeSensorTranslation=' + planeSensorTranslation);
		if (isVisible)
		{
			translationChanged = planeSensorTranslation;
		}
		else
		{
			// fell off screen, reset to center
			translationChanged = new SFVec3f(0, 0, 0);
			translationOffsetChanged  = new SFVec3f(0, 0, 0);
		}
	}
}
function setPlaneSensorTranslation (value, timeStamp)
{
	planeSensorTranslation = value;
	tracePrint('planeSensorTranslation=' + value);
}]]></Script>
<ROUTE fromField="isActive" fromNode="PlaneMovementSensor" toField="setPlaneSensorIsActive" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="translation_changed" fromNode="PlaneMovementSensor" toField="setPlaneSensorTranslation" toNode="VisibilityControlScript"></ROUTE>
<ROUTE fromField="isActive" fromNode="MovementVisibilitySensor" toField="setIsVisible" toNode="VisibilityControlScript"></ROUTE>
</Group>
</Transform>
</Transform>
<ROUTE fromField="translation_changed" fromNode="PlaneMovementSensor" toField="set_translation" toNode="MovableLocation"></ROUTE>
<ROUTE fromField="translationChanged" fromNode="VisibilityControlScript" toField="set_translation" toNode="MovableLocation"></ROUTE>
<ROUTE fromField="translationOffsetChanged" fromNode="VisibilityControlScript" toField="set_offset" toNode="PlaneMovementSensor"></ROUTE>
</Transform>
</Transform>
<ROUTE fromField="position_changed" fromNode="WhereSensor" toField="set_translation" toNode="FixedLocation"></ROUTE>
<ROUTE fromField="orientation_changed" fromNode="WhereSensor" toField="set_rotation" toNode="FixedLocation"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare12->setName("HeadsUpDisplay");
ProtoDeclare12->setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user");
CProtoInterface* ProtoInterface13 = new CProtoInterface();
Cfield* field14 = new Cfield();
field14->setName("children");
field14->setAccessType("inputOutput");
field14->setAppinfo("Displayed subscene positioned as a HUD.");
field14->setType("MFNode");
//default is null array of nodes
ProtoInterface13->addField(*field14);

Cfield* field15 = new Cfield();
field15->setName("dragChildren");
field15->setAccessType("inputOutput");
field15->setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.");
field15->setType("MFNode");
//default is null array of nodes
ProtoInterface13->addField(*field15);

Cfield* field16 = new Cfield();
field16->setName("locationOffset");
field16->setAccessType("initializeOnly");
field16->setAppinfo("Modified screen location and distance (for size).");
field16->setType("SFVec3f");
field16->setValue("-2 -2 0");
ProtoInterface13->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("traceEnabled");
field17->setAccessType("initializeOnly");
field17->setAppinfo("Enable/disable console output for troubleshooting.");
field17->setType("SFBool");
field17->setValue("false");
ProtoInterface13->addField(*field17);

ProtoDeclare12->setProtoInterface(*ProtoInterface13);

CProtoBody* ProtoBody18 = new CProtoBody();
CGroup* Group19 = (CGroup *)(m_pScene.createNode("Group"));
CProximitySensor* ProximitySensor20 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor20->setDEF("WhereSensor");
ProximitySensor20->setSize(new float[3]{1000000000,1000000000,1000000000});
CIS* IS21 = new CIS();
Cconnect* connect22 = new Cconnect();
connect22->setNodeField("center");
connect22->setProtoField("locationOffset");
IS21->addConnect(*connect22);

ProximitySensor20->setIS(*IS21);

Group19->addChildren(*ProximitySensor20);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setDEF("FixedLocation");
CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("MovableLocation");
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setDEF("LocationOffset");
CIS* IS26 = new CIS();
Cconnect* connect27 = new Cconnect();
connect27->setNodeField("translation");
connect27->setProtoField("locationOffset");
IS26->addConnect(*connect27);

Transform25->setIS(*IS26);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{0,0,-10});
CGroup* Group29 = (CGroup *)(m_pScene.createNode("Group"));
CIS* IS30 = new CIS();
Cconnect* connect31 = new Cconnect();
connect31->setNodeField("children");
connect31->setProtoField("children");
IS30->addConnect(*connect31);

Group29->setIS(*IS30);

Transform28->addChildren(*Group29);

CGroup* Group32 = (CGroup *)(m_pScene.createNode("Group"));
Group32->setDEF("PlaneMovementSensorGroup");
CGroup* Group33 = (CGroup *)(m_pScene.createNode("Group"));
Group33->setDEF("DragGeometry");
CIS* IS34 = new CIS();
Cconnect* connect35 = new Cconnect();
connect35->setNodeField("children");
connect35->setProtoField("dragChildren");
IS34->addConnect(*connect35);

Group33->setIS(*IS34);

Group32->addChildren(*Group33);

CPlaneSensor* PlaneSensor36 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor36->setDEF("PlaneMovementSensor");
PlaneSensor36->setDescription("click and drag to move interface");
CIS* IS37 = new CIS();
Cconnect* connect38 = new Cconnect();
connect38->setNodeField("offset");
connect38->setProtoField("locationOffset");
IS37->addConnect(*connect38);

PlaneSensor36->setIS(*IS37);

Group32->addChildren(*PlaneSensor36);

CVisibilitySensor* VisibilitySensor39 = (CVisibilitySensor *)(m_pScene.createNode("VisibilitySensor"));
VisibilitySensor39->setDEF("MovementVisibilitySensor");
Group32->addChildren(*VisibilitySensor39);

CScript* Script40 = (CScript *)(m_pScene.createNode("Script"));
Script40->setDEF("VisibilityControlScript");
Cfield* field41 = new Cfield();
field41->setName("traceEnabled");
field41->setAccessType("initializeOnly");
field41->setType("SFBool");
Script40->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("isVisible");
field42->setAccessType("initializeOnly");
field42->setType("SFBool");
field42->setValue("true");
Script40->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("planeSensorTranslation");
field43->setAccessType("initializeOnly");
field43->setType("SFVec3f");
field43->setValue("0 0 0");
Script40->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("setIsVisible");
field44->setAccessType("inputOnly");
field44->setType("SFBool");
Script40->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("setPlaneSensorIsActive");
field45->setAccessType("inputOnly");
field45->setType("SFBool");
Script40->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("setPlaneSensorTranslation");
field46->setAccessType("inputOnly");
field46->setType("SFVec3f");
Script40->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("translationChanged");
field47->setAccessType("outputOnly");
field47->setType("SFVec3f");
Script40->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("translationOffsetChanged");
field48->setAccessType("outputOnly");
field48->setType("SFVec3f");
Script40->addField(*field48);

CIS* IS49 = new CIS();
Cconnect* connect50 = new Cconnect();
connect50->setNodeField("traceEnabled");
connect50->setProtoField("traceEnabled");
IS49->addConnect(*connect50);

Script40->setIS(*IS49);


Script40.setSourceCode(`ecmascript:\n"+
"\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);\n"+
"}\n"+
"function setIsVisible (value, timeStamp)\n"+
"{\n"+
"	isVisible = value;\n"+
"	tracePrint('isVisible=' + value);\n"+
"}\n"+
"function setPlaneSensorIsActive (value, timeStamp)\n"+
"{\n"+
"	tracePrint('PlaneSensor isActive=' + value);\n"+
"\n"+
"	if (value == false)\n"+
"	{\n"+
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);\n"+
"		if (isVisible)\n"+
"		{\n"+
"			translationChanged = planeSensorTranslation;\n"+
"		}\n"+
"		else\n"+
"		{\n"+
"			// fell off screen, reset to center\n"+
"			translationChanged = new SFVec3f(0, 0, 0);\n"+
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);\n"+
"		}\n"+
"	}\n"+
"}\n"+
"function setPlaneSensorTranslation (value, timeStamp)\n"+
"{\n"+
"	planeSensorTranslation = value;\n"+
"	tracePrint('planeSensorTranslation=' + value);\n"+
"}`)
Group32->addChildren(*Script40);

CROUTE* ROUTE51 = new CROUTE();
ROUTE51->setFromField("isActive");
ROUTE51->setFromNode("PlaneMovementSensor");
ROUTE51->setToField("setPlaneSensorIsActive");
ROUTE51->setToNode("VisibilityControlScript");
Group32->addChildren(*ROUTE51);

CROUTE* ROUTE52 = new CROUTE();
ROUTE52->setFromField("translation_changed");
ROUTE52->setFromNode("PlaneMovementSensor");
ROUTE52->setToField("setPlaneSensorTranslation");
ROUTE52->setToNode("VisibilityControlScript");
Group32->addChildren(*ROUTE52);

CROUTE* ROUTE53 = new CROUTE();
ROUTE53->setFromField("isActive");
ROUTE53->setFromNode("MovementVisibilitySensor");
ROUTE53->setToField("setIsVisible");
ROUTE53->setToNode("VisibilityControlScript");
Group32->addChildren(*ROUTE53);

Transform28->addChildren(*Group32);

Transform25->addChildren(*Transform28);

Transform24->addChildren(*Transform25);

CROUTE* ROUTE54 = new CROUTE();
ROUTE54->setFromField("translation_changed");
ROUTE54->setFromNode("PlaneMovementSensor");
ROUTE54->setToField("set_translation");
ROUTE54->setToNode("MovableLocation");
Transform24->addChildren(*ROUTE54);

CROUTE* ROUTE55 = new CROUTE();
ROUTE55->setFromField("translationChanged");
ROUTE55->setFromNode("VisibilityControlScript");
ROUTE55->setToField("set_translation");
ROUTE55->setToNode("MovableLocation");
Transform24->addChildren(*ROUTE55);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromField("translationOffsetChanged");
ROUTE56->setFromNode("VisibilityControlScript");
ROUTE56->setToField("set_offset");
ROUTE56->setToNode("PlaneMovementSensor");
Transform24->addChildren(*ROUTE56);

Transform23->addChildren(*Transform24);

Group19->addChildren(*Transform23);

CROUTE* ROUTE57 = new CROUTE();
ROUTE57->setFromField("position_changed");
ROUTE57->setFromNode("WhereSensor");
ROUTE57->setToField("set_translation");
ROUTE57->setToNode("FixedLocation");
Group19->addChildren(*ROUTE57);

CROUTE* ROUTE58 = new CROUTE();
ROUTE58->setFromField("orientation_changed");
ROUTE58->setFromNode("WhereSensor");
ROUTE58->setToField("set_rotation");
ROUTE58->setToNode("FixedLocation");
Group19->addChildren(*ROUTE58);

ProtoBody18->addChildren(*Group19);

ProtoDeclare12->setProtoBody(*ProtoBody18);

group->addChildren(*ProtoDeclare12);

//====================
CBackground* Background59 = (CBackground *)(m_pScene.createNode("Background"));
Background59->setGroundColor(new float[3]{0.1,0.1,0.3});
Background59->setSkyColor(new float[3]{0.5,0.5,0.1});
group->addChildren(*Background59);

CAnchor* Anchor60 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor60->setDescription("HeadsUpDisplayExample");
Anchor60->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor60->setUrl(new CString[4]{"HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"}, 4);
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setDiffuseColor(new float[3]{0,1,1});
Material63->setEmissiveColor(new float[3]{0,1,1});
Appearance62->setMaterial(*Material63);

Shape61->setAppearance(*Appearance62);

CText* Text64 = (CText *)(m_pScene.createNode("Text"));
Text64->setString(new CString[6]{"HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"}, 6);
CFontStyle* FontStyle65 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle65->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle65->setSize(0.8);
Text64->setFontStyle(*FontStyle65);

Shape61->setGeometry(Text64);

Anchor60->addChildren(*Shape61);

group->addChildren(*Anchor60);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
