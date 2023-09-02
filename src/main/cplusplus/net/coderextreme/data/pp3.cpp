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
meta2->setContent("pp3.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("translator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("5 May 2015");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 Dec 2022");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("A process pipeline between three spheres (try typing on spheres and blue");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("identifier");
meta8->setContent("https://coderextreme.net/x3d/pp3.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("generator");
meta9->setContent("manual");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CProtoDeclare ProtoDeclare11 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="-2.5 0 0 -1.5 0 0"></Extrusion>
</Shape>
<!--<Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'></Text> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"></StringSensor> <TouchSensor DEF="LeftTouch" enabled="true"></TouchSensor>--></Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="1.5 0 0 2.5 0 0"></Extrusion>
</Shape>
<Transform translation="2 0 0"><Shape><Appearance><Material DEF="MaterialLightBlue" diffuseColor="1 1 1"></Material>
</Appearance>
<Text DEF="RightString" string="&quot;r&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="RightSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="RightTouch"></TouchSensor>
</Transform>
<!--up--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0 0.7 1" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 1.5 0 0 2.5 0"></Extrusion>
</Shape>
<Transform translation="-0.5 2 0"><Shape><Appearance><Material USE="MaterialLightBlue"></Material>
</Appearance>
<Text DEF="UpString" string="&quot;u&quot;"></Text>
</Shape>
</Transform>
<StringSensor DEF="UpSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="UpTouch"></TouchSensor>
</Transform>
<!--down--><Transform scale="0.5 0.5 0.5"><Shape><Appearance><Material diffuseColor="0.7 1 0" transparency="0.5"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -2.5 0 0 -1.5 0"></Extrusion>
</Shape>
<!--<Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'></Text> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"></StringSensor> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"></TouchSensor>--></Transform>
<!--center--><Transform><Shape><Appearance><Material diffuseColor="1 0 0.7"></Material>
</Appearance>
<Sphere></Sphere>
</Shape>
<Transform scale="0.5 0.5 0.5" translation="-0.5 0 1"><Shape><Appearance><Material USE="MaterialLightBlue"></Material>
</Appearance>
<Text DEF="CenterString"></Text>
</Shape>
</Transform>
<StringSensor DEF="CenterSensor" enabled="false"></StringSensor>
<TouchSensor description="touch to activate" DEF="CenterTouch"></TouchSensor>
</Transform>
</Group>
<Script DEF="RightSingleToMultiString"><field name="set_rightstring" accessType="inputOnly" type="SFString"></field>
<field name="rightlines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	rightlines = new MFString("");
}

function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
}]]></Script>
<Script DEF="UpSingleToMultiString"><field name="set_upstring" accessType="inputOnly" type="SFString"></field>
<field name="uplines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	uplines = new MFString("");
}

function set_upstring(upstr) {
	uplines = new MFString(upstr);
}]]></Script>
<Script DEF="CenterSingleToMultiString"><field name="set_centerstring" accessType="inputOnly" type="SFString"></field>
<field name="centerlines" accessType="outputOnly" type="MFString"></field>
<![CDATA[ecmascript:

function initialize() {
	centerlines = new MFString("");
}

function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
}]]></Script>
<ROUTE fromField="enteredText" fromNode="CenterSensor" toField="set_centerstring" toNode="CenterSingleToMultiString"></ROUTE>
<ROUTE fromField="centerlines" fromNode="CenterSingleToMultiString" toField="set_string" toNode="CenterString"></ROUTE>
<ROUTE fromField="isOver" fromNode="CenterTouch" toField="set_enabled" toNode="CenterSensor"></ROUTE>
<ROUTE fromField="enteredText" fromNode="RightSensor" toField="set_rightstring" toNode="RightSingleToMultiString"></ROUTE>
<ROUTE fromField="rightlines" fromNode="RightSingleToMultiString" toField="set_string" toNode="RightString"></ROUTE>
<ROUTE fromField="isOver" fromNode="RightTouch" toField="set_enabled" toNode="RightSensor"></ROUTE>
<ROUTE fromField="enteredText" fromNode="UpSensor" toField="set_upstring" toNode="UpSingleToMultiString"></ROUTE>
<ROUTE fromField="uplines" fromNode="UpSingleToMultiString" toField="set_string" toNode="UpString"></ROUTE>
<ROUTE fromField="isOver" fromNode="UpTouch" toField="set_enabled" toNode="UpSensor"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare11->setName("Process");
CProtoBody* ProtoBody12 = new CProtoBody();
CGroup* Group13 = (CGroup *)(m_pScene.createNode("Group"));
//left
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setDiffuseColor(new float[3]{0.7,1,0});
Material17->setTransparency(0.5);
Appearance16->setMaterial(*Material17);

Shape15->setAppearance(*Appearance16);

CExtrusion* Extrusion18 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion18->setCreaseAngle(0.785);
Extrusion18->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion18->setSpine(new float[6]{-2.5,0,0,-1.5,0,0});
Shape15->setGeometry(Extrusion18);

Transform14->addChild(*Shape15);

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13->addChildren(*Transform14);

//right
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0,0.7,1});
Material22->setTransparency(0.5);
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CExtrusion* Extrusion23 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion23->setCreaseAngle(0.785);
Extrusion23->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion23->setSpine(new float[6]{1.5,0,0,2.5,0,0});
Shape20->setGeometry(Extrusion23);

Transform19->addChild(*Shape20);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{2,0,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDEF("MaterialLightBlue");
Material27->setDiffuseColor(new float[3]{1,1,1});
Appearance26->setMaterial(*Material27);

Shape25->setAppearance(*Appearance26);

CText* Text28 = (CText *)(m_pScene.createNode("Text"));
Text28->setDEF("RightString");
Text28->setString(new CString[1]{"r"}, 1);
Shape25->setGeometry(Text28);

Transform24->addChild(*Shape25);

Transform19->addChildren(*Transform24);

CStringSensor* StringSensor29 = (CStringSensor *)(m_pScene.createNode("StringSensor"));
StringSensor29->setDEF("RightSensor");
StringSensor29->setEnabled(False);
Transform19->addChildren(*StringSensor29);

CTouchSensor* TouchSensor30 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor30->setDescription("touch to activate");
TouchSensor30->setDEF("RightTouch");
Transform19->addChildren(*TouchSensor30);

Group13->addChildren(*Transform19);

//up
CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0,0.7,1});
Material34->setTransparency(0.5);
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CExtrusion* Extrusion35 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion35->setCreaseAngle(0.785);
Extrusion35->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion35->setSpine(new float[6]{0,1.5,0,0,2.5,0});
Shape32->setGeometry(Extrusion35);

Transform31->addChild(*Shape32);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setTranslation(new float[3]{-0.5,2,0});
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material39 = (CMaterial *)(m_pScene.createNode("Material"));
Material39->setUSE("MaterialLightBlue");
Appearance38->setMaterial(*Material39);

Shape37->setAppearance(*Appearance38);

CText* Text40 = (CText *)(m_pScene.createNode("Text"));
Text40->setDEF("UpString");
Text40->setString(new CString[1]{"u"}, 1);
Shape37->setGeometry(Text40);

Transform36->addChild(*Shape37);

Transform31->addChildren(*Transform36);

CStringSensor* StringSensor41 = (CStringSensor *)(m_pScene.createNode("StringSensor"));
StringSensor41->setDEF("UpSensor");
StringSensor41->setEnabled(False);
Transform31->addChildren(*StringSensor41);

CTouchSensor* TouchSensor42 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor42->setDescription("touch to activate");
TouchSensor42->setDEF("UpTouch");
Transform31->addChildren(*TouchSensor42);

Group13->addChildren(*Transform31);

//down
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.7,1,0});
Material46->setTransparency(0.5);
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CExtrusion* Extrusion47 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion47->setCreaseAngle(0.785);
Extrusion47->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion47->setSpine(new float[6]{0,-2.5,0,0,-1.5,0});
Shape44->setGeometry(Extrusion47);

Transform43->addChild(*Shape44);

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13->addChildren(*Transform43);

//center
CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setDiffuseColor(new float[3]{1,0,0.7});
Appearance50->setMaterial(*Material51);

Shape49->setAppearance(*Appearance50);

CSphere* Sphere52 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape49->setGeometry(Sphere52);

Transform48->addChild(*Shape49);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setScale(new float[3]{0.5,0.5,0.5});
Transform53->setTranslation(new float[3]{-0.5,0,1});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setUSE("MaterialLightBlue");
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CText* Text57 = (CText *)(m_pScene.createNode("Text"));
Text57->setDEF("CenterString");
Shape54->setGeometry(Text57);

Transform53->addChild(*Shape54);

Transform48->addChildren(*Transform53);

CStringSensor* StringSensor58 = (CStringSensor *)(m_pScene.createNode("StringSensor"));
StringSensor58->setDEF("CenterSensor");
StringSensor58->setEnabled(False);
Transform48->addChildren(*StringSensor58);

CTouchSensor* TouchSensor59 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor59->setDescription("touch to activate");
TouchSensor59->setDEF("CenterTouch");
Transform48->addChildren(*TouchSensor59);

Group13->addChildren(*Transform48);

ProtoBody12->addChildren(*Group13);

CScript* Script60 = (CScript *)(m_pScene.createNode("Script"));
Script60->setDEF("RightSingleToMultiString");
Cfield* field61 = new Cfield();
field61->setName("set_rightstring");
field61->setAccessType("inputOnly");
field61->setType("SFString");
Script60->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("rightlines");
field62->setAccessType("outputOnly");
field62->setType("MFString");
Script60->addField(*field62);


Script60.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}`)
ProtoBody12->addChildren(*Script60);

CScript* Script63 = (CScript *)(m_pScene.createNode("Script"));
Script63->setDEF("UpSingleToMultiString");
Cfield* field64 = new Cfield();
field64->setName("set_upstring");
field64->setAccessType("inputOnly");
field64->setType("SFString");
Script63->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("uplines");
field65->setAccessType("outputOnly");
field65->setType("MFString");
Script63->addField(*field65);


Script63.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}`)
ProtoBody12->addChildren(*Script63);

CScript* Script66 = (CScript *)(m_pScene.createNode("Script"));
Script66->setDEF("CenterSingleToMultiString");
Cfield* field67 = new Cfield();
field67->setName("set_centerstring");
field67->setAccessType("inputOnly");
field67->setType("SFString");
Script66->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("centerlines");
field68->setAccessType("outputOnly");
field68->setType("MFString");
Script66->addField(*field68);


Script66.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}`)
ProtoBody12->addChildren(*Script66);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("enteredText");
ROUTE69->setFromNode("CenterSensor");
ROUTE69->setToField("set_centerstring");
ROUTE69->setToNode("CenterSingleToMultiString");
ProtoBody12->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromField("centerlines");
ROUTE70->setFromNode("CenterSingleToMultiString");
ROUTE70->setToField("set_string");
ROUTE70->setToNode("CenterString");
ProtoBody12->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromField("isOver");
ROUTE71->setFromNode("CenterTouch");
ROUTE71->setToField("set_enabled");
ROUTE71->setToNode("CenterSensor");
ProtoBody12->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("enteredText");
ROUTE72->setFromNode("RightSensor");
ROUTE72->setToField("set_rightstring");
ROUTE72->setToNode("RightSingleToMultiString");
ProtoBody12->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromField("rightlines");
ROUTE73->setFromNode("RightSingleToMultiString");
ROUTE73->setToField("set_string");
ROUTE73->setToNode("RightString");
ProtoBody12->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromField("isOver");
ROUTE74->setFromNode("RightTouch");
ROUTE74->setToField("set_enabled");
ROUTE74->setToNode("RightSensor");
ProtoBody12->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("enteredText");
ROUTE75->setFromNode("UpSensor");
ROUTE75->setToField("set_upstring");
ROUTE75->setToNode("UpSingleToMultiString");
ProtoBody12->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("uplines");
ROUTE76->setFromNode("UpSingleToMultiString");
ROUTE76->setToField("set_string");
ROUTE76->setToNode("UpString");
ProtoBody12->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("isOver");
ROUTE77->setFromNode("UpTouch");
ROUTE77->setToField("set_enabled");
ROUTE77->setToNode("UpSensor");
ProtoBody12->addChildren(*ROUTE77);

ProtoDeclare11->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare11);

CNavigationInfo* NavigationInfo78 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo78);

CViewpoint* Viewpoint79 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint79->setDescription("Process pipes");
Viewpoint79->setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint79->setPosition(new float[3]{0,5,12});
group->addChildren(*Viewpoint79);

CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{0,-2.5,0});
CProtoInstance* ProtoInstance81 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance81->setName("Process");
Transform80->addChildren(*ProtoInstance81);

group->addChildren(*Transform80);

CTransform* Transform82 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("Process");
Transform82->addChildren(*ProtoInstance83);

group->addChildren(*Transform82);

CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setTranslation(new float[3]{0,2.5,0});
CProtoInstance* ProtoInstance85 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance85->setName("Process");
Transform84->addChildren(*ProtoInstance85);

group->addChildren(*Transform84);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
