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
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("fors.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CProtoDeclare ProtoDeclare9 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Text string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
</Text>
<Appearance><Material diffuseColor="0 0 1"></Material>
</Appearance>
</Shape>
</Transform>
</Transform>
<PositionInterpolator DEF="NodePosition" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MoveBall"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_cycle" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
<![CDATA[ecmascript:
					function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					}]]></Script>
<TimeSensor DEF="nodeClock" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="nodeClock" fromField="cycleTime" toNode="MoveBall" toField="set_cycle"></ROUTE>
<ROUTE fromNode="nodeClock" fromField="fraction_changed" toNode="NodePosition" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MoveBall" fromField="keyValue" toNode="NodePosition" toField="keyValue"></ROUTE>
<ROUTE fromNode="NodePosition" fromField="value_changed" toNode="transform" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare9->setName("node");
CProtoInterface* ProtoInterface10 = new CProtoInterface();
Cfield* field11 = new Cfield();
field11->setName("position");
field11->setAccessType("inputOutput");
field11->setType("SFVec3f");
field11->setValue("0 0 0");
ProtoInterface10->addField(*field11);

ProtoDeclare9->setProtoInterface(*ProtoInterface10);

CProtoBody* ProtoBody12 = new CProtoBody();
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
Transform13->setDEF("transform");
CIS* IS14 = new CIS();
Cconnect* connect15 = new Cconnect();
connect15->setNodeField("translation");
connect15->setProtoField("position");
IS14->addConnect(*connect15);

Transform13->setIS(*IS14);

CShape* Shape16 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere17 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape16->setGeometry(Sphere17);

CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{1,0,0});
Appearance18->setMaterial(*Material19);

Shape16->setAppearance(*Appearance18);

Transform13->addChild(*Shape16);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setTranslation(new float[3]{1,0,0});
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text22 = (CText *)(m_pScene.createNode("Text"));
Text22->setString(new CString[1]{"Node"}, 1);
CFontStyle* FontStyle23 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle23->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle23->setSize(5);
Text22->setFontStyle(*FontStyle23);

Shape21->setGeometry(Text22);

CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Material25->setDiffuseColor(new float[3]{0,0,1});
Appearance24->setMaterial(*Material25);

Shape21->setAppearance(*Appearance24);

Transform20->addChild(*Shape21);

Transform13->addChildren(*Transform20);

ProtoBody12->addChildren(*Transform13);

CPositionInterpolator* PositionInterpolator26 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator26->setDEF("NodePosition");
PositionInterpolator26->setKey(new float[2]{0,1}, 2);
PositionInterpolator26->setKeyValue(new float[6]{0,0,0,0,5,0});
ProtoBody12->addChildren(*PositionInterpolator26);

CScript* Script27 = (CScript *)(m_pScene.createNode("Script"));
Script27->setDEF("MoveBall");
Cfield* field28 = new Cfield();
field28->setName("translation");
field28->setAccessType("inputOutput");
field28->setType("SFVec3f");
field28->setValue("50 50 0");
Script27->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("old");
field29->setAccessType("inputOutput");
field29->setType("SFVec3f");
field29->setValue("0 0 0");
Script27->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("set_cycle");
field30->setAccessType("inputOnly");
field30->setType("SFTime");
Script27->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("keyValue");
field31->setAccessType("outputOnly");
field31->setType("MFVec3f");
Script27->addField(*field31);


Script27.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody12->addChildren(*Script27);

CTimeSensor* TimeSensor32 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor32->setDEF("nodeClock");
TimeSensor32->setCycleInterval(3);
TimeSensor32->setLoop(True);
ProtoBody12->addChildren(*TimeSensor32);

CROUTE* ROUTE33 = new CROUTE();
ROUTE33->setFromNode("nodeClock");
ROUTE33->setFromField("cycleTime");
ROUTE33->setToNode("MoveBall");
ROUTE33->setToField("set_cycle");
ProtoBody12->addChildren(*ROUTE33);

CROUTE* ROUTE34 = new CROUTE();
ROUTE34->setFromNode("nodeClock");
ROUTE34->setFromField("fraction_changed");
ROUTE34->setToNode("NodePosition");
ROUTE34->setToField("set_fraction");
ProtoBody12->addChildren(*ROUTE34);

CROUTE* ROUTE35 = new CROUTE();
ROUTE35->setFromNode("MoveBall");
ROUTE35->setFromField("keyValue");
ROUTE35->setToNode("NodePosition");
ROUTE35->setToField("keyValue");
ProtoBody12->addChildren(*ROUTE35);

CROUTE* ROUTE36 = new CROUTE();
ROUTE36->setFromNode("NodePosition");
ROUTE36->setFromField("value_changed");
ROUTE36->setToNode("transform");
ROUTE36->setToField("set_translation");
ProtoBody12->addChildren(*ROUTE36);

ProtoDeclare9->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare9);

CProtoDeclare ProtoDeclare37 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="set_positionA"></connect>
<connect nodeField="set_endB" protoField="set_positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare37->setName("cylinder");
CProtoInterface* ProtoInterface38 = new CProtoInterface();
Cfield* field39 = new Cfield();
field39->setName("set_positionA");
field39->setAccessType("inputOnly");
field39->setType("SFVec3f");
ProtoInterface38->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("set_positionB");
field40->setAccessType("inputOnly");
field40->setType("SFVec3f");
ProtoInterface38->addField(*field40);

ProtoDeclare37->setProtoInterface(*ProtoInterface38);

CProtoBody* ProtoBody41 = new CProtoBody();
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion43 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion43->setDEF("extrusion");
Extrusion43->setCreaseAngle(0.785);
Extrusion43->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion43->setSpine(new float[6]{0,-50,0,0,50,0});
Shape42->setGeometry(Extrusion43);

CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setDiffuseColor(new float[3]{0,1,0});
Appearance44->setMaterial(*Material45);

Shape42->setAppearance(*Appearance44);

ProtoBody41->addChildren(*Shape42);

CScript* Script46 = (CScript *)(m_pScene.createNode("Script"));
Script46->setDEF("MoveCylinder");
Cfield* field47 = new Cfield();
field47->setName("spine");
field47->setAccessType("inputOutput");
field47->setType("MFVec3f");
field47->setValue("0 -50 0 0 50 0");
Script46->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("set_endA");
field48->setAccessType("inputOnly");
field48->setType("SFVec3f");
Script46->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("set_endB");
field49->setAccessType("inputOnly");
field49->setType("SFVec3f");
Script46->addField(*field49);

CIS* IS50 = new CIS();
Cconnect* connect51 = new Cconnect();
connect51->setNodeField("set_endA");
connect51->setProtoField("set_positionA");
IS50->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("set_endB");
connect52->setProtoField("set_positionB");
IS50->addConnect(*connect52);

Script46->setIS(*IS50);


Script46.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody41->addChildren(*Script46);

CROUTE* ROUTE53 = new CROUTE();
ROUTE53->setFromNode("MoveCylinder");
ROUTE53->setFromField("spine");
ROUTE53->setToNode("extrusion");
ROUTE53->setToField("set_spine");
ProtoBody41->addChildren(*ROUTE53);

ProtoDeclare37->setProtoBody(*ProtoBody41);

group->addChildren(*ProtoDeclare37);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setDEF("HoldsContent");
Transform54->setScale(new float[3]{0.1,0.1,0.1});
CPlaneSensor* PlaneSensor55 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor55->setDEF("clickGenerator");
PlaneSensor55->setMinPosition(new float[2]{-50,-50});
PlaneSensor55->setMaxPosition(new float[2]{50,50});
PlaneSensor55->setDescription("click on background to add nodes, click on nodes to add links");
Transform54->addChildren(*PlaneSensor55);

CProtoInstance* ProtoInstance56 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance56->setName("node");
ProtoInstance56->setDEF("nodeA");
CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("position");
fieldValue57->setValue("0 0 0");
ProtoInstance56->addFieldValue(*fieldValue57);

Transform54->addChildren(*ProtoInstance56);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("node");
ProtoInstance58->setDEF("nodeB");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("position");
fieldValue59->setValue("50 50 50");
ProtoInstance58->addFieldValue(*fieldValue59);

Transform54->addChildren(*ProtoInstance58);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("cylinder");
ProtoInstance60->setDEF("linkA");
CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("set_positionA");
fieldValue61->setValue("0 0 0");
ProtoInstance60->addFieldValue(*fieldValue61);

CfieldValue* fieldValue62 = new CfieldValue();
fieldValue62->setName("set_positionB");
fieldValue62->setValue("50 50 50");
ProtoInstance60->addFieldValue(*fieldValue62);

Transform54->addChildren(*ProtoInstance60);

group->addChildren(*Transform54);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("nodeA");
ROUTE63->setFromField("position");
ROUTE63->setToNode("linkA");
ROUTE63->setToField("set_positionA");
group->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("nodeB");
ROUTE64->setFromField("position");
ROUTE64->setToNode("linkA");
ROUTE64->setToField("set_positionB");
group->addChildren(*ROUTE64);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
