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
meta4->setName("modified");
meta4->setContent("April 18 2017");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("title");
meta5->setContent("fors2.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><!--comment before Sphere--><!--comment after Sphere--><!--comment after Appearance--><Sphere containerField="geometry"></Sphere>
<Appearance><!--comment before Material--><!--comment after Material--><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
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
ProtoDeclare10->setName("node");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("position");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("transform");
CIS* IS15 = new CIS();
Cconnect* connect16 = new Cconnect();
connect16->setNodeField("translation");
connect16->setProtoField("position");
IS15->addConnect(*connect16);

Transform14->setIS(*IS15);

CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
//comment before Sphere
//comment after Sphere
//comment after Appearance
CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape17->setGeometry(Sphere18);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
//comment before Material
//comment after Material
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,0,0});
Appearance19->setMaterial(*Material20);

Shape17->setAppearance(*Appearance19);

Transform14->addChildren(*Shape17);

ProtoBody13->addChildren(*Transform14);

CPositionInterpolator* PositionInterpolator21 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator21->setDEF("NodePosition");
PositionInterpolator21->setKey(new float[2]{0,1}, 2);
PositionInterpolator21->setKeyValue(new float[6]{0,0,0,0,5,0});
ProtoBody13->addChildren(*PositionInterpolator21);

CScript* Script22 = (CScript *)(m_pScene.createNode("Script"));
Script22->setDEF("MoveBall");
Cfield* field23 = new Cfield();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("50 50 0");
Script22->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("old");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script22->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("set_cycle");
field25->setAccessType("inputOnly");
field25->setType("SFTime");
Script22->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("keyValue");
field26->setAccessType("outputOnly");
field26->setType("MFVec3f");
Script22->addField(*field26);


Script22.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody13->addChildren(*Script22);

CTimeSensor* TimeSensor27 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor27->setDEF("nodeClock");
TimeSensor27->setCycleInterval(3);
TimeSensor27->setLoop(True);
ProtoBody13->addChildren(*TimeSensor27);

CROUTE* ROUTE28 = new CROUTE();
ROUTE28->setFromNode("nodeClock");
ROUTE28->setFromField("cycleTime");
ROUTE28->setToNode("MoveBall");
ROUTE28->setToField("set_cycle");
ProtoBody13->addChildren(*ROUTE28);

CROUTE* ROUTE29 = new CROUTE();
ROUTE29->setFromNode("nodeClock");
ROUTE29->setFromField("fraction_changed");
ROUTE29->setToNode("NodePosition");
ROUTE29->setToField("set_fraction");
ProtoBody13->addChildren(*ROUTE29);

CROUTE* ROUTE30 = new CROUTE();
ROUTE30->setFromNode("MoveBall");
ROUTE30->setFromField("keyValue");
ROUTE30->setToNode("NodePosition");
ROUTE30->setToField("keyValue");
ProtoBody13->addChildren(*ROUTE30);

CROUTE* ROUTE31 = new CROUTE();
ROUTE31->setFromNode("NodePosition");
ROUTE31->setFromField("value_changed");
ROUTE31->setToNode("transform");
ROUTE31->setToField("set_translation");
ProtoBody13->addChildren(*ROUTE31);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare32 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Shape><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 0 0 0 50 0"></Extrusion>
<Appearance><Material diffuseColor="0 1 0"></Material>
</Appearance>
</Shape>
<Script DEF="MoveCylinder"><field name="spine" accessType="inputOutput" type="MFVec3f" value="0 -50 0 0 0 0 0 50 0"></field>
<field name="set_endA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endB" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="set_endA" protoField="positionA"></connect>
<connect nodeField="set_endB" protoField="positionB"></connect>
</IS>
<![CDATA[ecmascript:

                function set_endA(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                function set_endB(value) {
		    if (typeof spine === "undefined") {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                function set_spine(value) {
		    Browser.print('\n'+'"');
                    spine = value;
                }]]></Script>
<ROUTE fromNode="MoveCylinder" fromField="spine" toNode="extrusion" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare32->setName("cylinder");
CProtoInterface* ProtoInterface33 = new CProtoInterface();
Cfield* field34 = new Cfield();
field34->setName("positionA");
field34->setAccessType("inputOnly");
field34->setType("SFVec3f");
ProtoInterface33->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("positionB");
field35->setAccessType("inputOnly");
field35->setType("SFVec3f");
ProtoInterface33->addField(*field35);

ProtoDeclare32->setProtoInterface(*ProtoInterface33);

CProtoBody* ProtoBody36 = new CProtoBody();
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion38 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion38->setDEF("extrusion");
Extrusion38->setCreaseAngle(0.785);
Extrusion38->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion38->setSpine(new float[9]{0,-50,0,0,0,0,0,50,0});
Shape37->setGeometry(Extrusion38);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{0,1,0});
Appearance39->setMaterial(*Material40);

Shape37->setAppearance(*Appearance39);

ProtoBody36->addChildren(*Shape37);

CScript* Script41 = (CScript *)(m_pScene.createNode("Script"));
Script41->setDEF("MoveCylinder");
Cfield* field42 = new Cfield();
field42->setName("spine");
field42->setAccessType("inputOutput");
field42->setType("MFVec3f");
field42->setValue("0 -50 0 0 0 0 0 50 0");
Script41->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("set_endA");
field43->setAccessType("inputOnly");
field43->setType("SFVec3f");
Script41->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("set_endB");
field44->setAccessType("inputOnly");
field44->setType("SFVec3f");
Script41->addField(*field44);

CIS* IS45 = new CIS();
Cconnect* connect46 = new Cconnect();
connect46->setNodeField("set_endA");
connect46->setProtoField("positionA");
IS45->addConnect(*connect46);

Cconnect* connect47 = new Cconnect();
connect47->setNodeField("set_endB");
connect47->setProtoField("positionB");
IS45->addConnect(*connect47);

Script41->setIS(*IS45);


Script41.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody36->addChildren(*Script41);

CROUTE* ROUTE48 = new CROUTE();
ROUTE48->setFromNode("MoveCylinder");
ROUTE48->setFromField("spine");
ROUTE48->setToNode("extrusion");
ROUTE48->setToField("set_spine");
ProtoBody36->addChildren(*ROUTE48);

ProtoDeclare32->setProtoBody(*ProtoBody36);

group->addChildren(*ProtoDeclare32);

CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setScale(new float[3]{0.1,0.1,0.1});
CProtoInstance* ProtoInstance50 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance50->setName("node");
ProtoInstance50->setDEF("nodeA");
CfieldValue* fieldValue51 = new CfieldValue();
fieldValue51->setName("position");
fieldValue51->setValue("-50 -50 -50");
ProtoInstance50->addFieldValue(*fieldValue51);

Transform49->addChildren(*ProtoInstance50);

CProtoInstance* ProtoInstance52 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance52->setName("node");
ProtoInstance52->setDEF("nodeB");
CfieldValue* fieldValue53 = new CfieldValue();
fieldValue53->setName("position");
fieldValue53->setValue("50 50 50");
ProtoInstance52->addFieldValue(*fieldValue53);

Transform49->addChildren(*ProtoInstance52);

CProtoInstance* ProtoInstance54 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance54->setName("cylinder");
ProtoInstance54->setDEF("linkA");
CfieldValue* fieldValue55 = new CfieldValue();
fieldValue55->setName("positionA");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(*fieldValue55);

CfieldValue* fieldValue56 = new CfieldValue();
fieldValue56->setName("positionB");
fieldValue56->setValue("50 50 50");
ProtoInstance54->addFieldValue(*fieldValue56);

Transform49->addChildren(*ProtoInstance54);

group->addChildren(*Transform49);

CROUTE* ROUTE57 = new CROUTE();
ROUTE57->setFromNode("nodeA");
ROUTE57->setFromField("position");
ROUTE57->setToNode("linkA");
ROUTE57->setToField("positionA");
group->addChildren(*ROUTE57);

CROUTE* ROUTE58 = new CROUTE();
ROUTE58->setFromNode("nodeB");
ROUTE58->setFromField("position");
ROUTE58->setToNode("linkA");
ROUTE58->setToField("positionB");
group->addChildren(*ROUTE58);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
