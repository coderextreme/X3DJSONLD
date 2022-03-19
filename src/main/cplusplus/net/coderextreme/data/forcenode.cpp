/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta4->setContent("forcenode.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/force.x3d");
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
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 1"><Shape><Text containerField="geometry" string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
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
</Group>
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
CGroup* Group13 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("transform");
CIS* IS15 = new CIS();
Cconnect* connect16 = new Cconnect();
connect16->setNodeField("translation");
connect16->setProtoField("position");
IS15->addConnect(*connect16);

Transform14->setIS(*IS15);

CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape17->setGeometry(Sphere18);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,0,0});
Appearance19->setMaterial(*Material20);

Shape17->setAppearance(*Appearance19);

Transform14->addChildren(*Shape17);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setTranslation(new float[3]{1,0,1});
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text23 = (CText *)(m_pScene.createNode("Text"));
Text23->setString(new CString[1]{"Node"}, 1);
CFontStyle* FontStyle24 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle24->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle24->setSize(5);
Text23->setFontStyle(*FontStyle24);

Shape22->setGeometry(Text23);

CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDiffuseColor(new float[3]{0,0,1});
Appearance25->setMaterial(*Material26);

Shape22->setAppearance(*Appearance25);

Transform21->addChildren(*Shape22);

Transform14->addChildren(*Transform21);

Group13->addChildren(*Transform14);

CPositionInterpolator* PositionInterpolator27 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator27->setDEF("NodePosition");
PositionInterpolator27->setKey(new float[2]{0,1}, 2);
PositionInterpolator27->setKeyValue(new float[6]{0,0,0,0,5,0});
Group13->addChildren(*PositionInterpolator27);

CScript* Script28 = (CScript *)(m_pScene.createNode("Script"));
Script28->setDEF("MoveBall");
Cfield* field29 = new Cfield();
field29->setName("translation");
field29->setAccessType("inputOutput");
field29->setType("SFVec3f");
field29->setValue("50 50 0");
Script28->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("old");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0 0 0");
Script28->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("set_cycle");
field31->setAccessType("inputOnly");
field31->setType("SFTime");
Script28->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("keyValue");
field32->setAccessType("outputOnly");
field32->setType("MFVec3f");
Script28->addField(*field32);


Script28.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group13->addChildren(*Script28);

CTimeSensor* TimeSensor33 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor33->setDEF("nodeClock");
TimeSensor33->setCycleInterval(3);
TimeSensor33->setLoop(True);
Group13->addChildren(*TimeSensor33);

CROUTE* ROUTE34 = new CROUTE();
ROUTE34->setFromNode("nodeClock");
ROUTE34->setFromField("cycleTime");
ROUTE34->setToNode("MoveBall");
ROUTE34->setToField("set_cycle");
Group13->addChildren(*ROUTE34);

CROUTE* ROUTE35 = new CROUTE();
ROUTE35->setFromNode("nodeClock");
ROUTE35->setFromField("fraction_changed");
ROUTE35->setToNode("NodePosition");
ROUTE35->setToField("set_fraction");
Group13->addChildren(*ROUTE35);

CROUTE* ROUTE36 = new CROUTE();
ROUTE36->setFromNode("MoveBall");
ROUTE36->setFromField("keyValue");
ROUTE36->setToNode("NodePosition");
ROUTE36->setToField("keyValue");
Group13->addChildren(*ROUTE36);

CROUTE* ROUTE37 = new CROUTE();
ROUTE37->setFromNode("NodePosition");
ROUTE37->setFromField("value_changed");
ROUTE37->setToNode("transform");
ROUTE37->setToField("set_translation");
Group13->addChildren(*ROUTE37);

ProtoBody12->addChildren(*Group13);

ProtoDeclare9->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare9);

CProtoDeclare ProtoDeclare38 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="cylinder" ><ProtoInterface><field name="set_positionA" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_positionB" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Shape><Extrusion containerField="geometry" DEF="extrusion" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="0 -50 0 0 50 0"></Extrusion>
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
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare38->setName("cylinder");
CProtoInterface* ProtoInterface39 = new CProtoInterface();
Cfield* field40 = new Cfield();
field40->setName("set_positionA");
field40->setAccessType("inputOnly");
field40->setType("SFVec3f");
ProtoInterface39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("set_positionB");
field41->setAccessType("inputOnly");
field41->setType("SFVec3f");
ProtoInterface39->addField(*field41);

ProtoDeclare38->setProtoInterface(*ProtoInterface39);

CProtoBody* ProtoBody42 = new CProtoBody();
CGroup* Group43 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion45 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion45->setDEF("extrusion");
Extrusion45->setCreaseAngle(0.785);
Extrusion45->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion45->setSpine(new float[6]{0,-50,0,0,50,0});
Shape44->setGeometry(Extrusion45);

CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setDiffuseColor(new float[3]{0,1,0});
Appearance46->setMaterial(*Material47);

Shape44->setAppearance(*Appearance46);

Group43->addChildren(*Shape44);

CScript* Script48 = (CScript *)(m_pScene.createNode("Script"));
Script48->setDEF("MoveCylinder");
Cfield* field49 = new Cfield();
field49->setName("spine");
field49->setAccessType("inputOutput");
field49->setType("MFVec3f");
field49->setValue("0 -50 0 0 50 0");
Script48->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("set_endA");
field50->setAccessType("inputOnly");
field50->setType("SFVec3f");
Script48->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("set_endB");
field51->setAccessType("inputOnly");
field51->setType("SFVec3f");
Script48->addField(*field51);

CIS* IS52 = new CIS();
Cconnect* connect53 = new Cconnect();
connect53->setNodeField("set_endA");
connect53->setProtoField("set_positionA");
IS52->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("set_endB");
connect54->setProtoField("set_positionB");
IS52->addConnect(*connect54);

Script48->setIS(*IS52);


Script48.setSourceCode(`ecmascript:\n"+
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
Group43->addChildren(*Script48);

CROUTE* ROUTE55 = new CROUTE();
ROUTE55->setFromNode("MoveCylinder");
ROUTE55->setFromField("spine");
ROUTE55->setToNode("extrusion");
ROUTE55->setToField("set_spine");
Group43->addChildren(*ROUTE55);

ProtoBody42->addChildren(*Group43);

ProtoDeclare38->setProtoBody(*ProtoBody42);

group->addChildren(*ProtoDeclare38);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setDEF("HoldsContent");
Transform56->setScale(new float[3]{0.1,0.1,0.1});
CPlaneSensor* PlaneSensor57 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor57->setDEF("clickGenerator");
PlaneSensor57->setMinPosition(new float[2]{-50,-50});
PlaneSensor57->setMaxPosition(new float[2]{50,50});
PlaneSensor57->setDescription("click on background to add nodes, click on nodes to add links");
Transform56->addChildren(*PlaneSensor57);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("node");
ProtoInstance58->setDEF("nodeA");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("position");
fieldValue59->setValue("0 0 0");
ProtoInstance58->addFieldValue(*fieldValue59);

Transform56->addChildren(*ProtoInstance58);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("node");
ProtoInstance60->setDEF("nodeB");
CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("position");
fieldValue61->setValue("50 50 50");
ProtoInstance60->addFieldValue(*fieldValue61);

Transform56->addChildren(*ProtoInstance60);

CProtoInstance* ProtoInstance62 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance62->setName("node");
ProtoInstance62->setDEF("nodeC");
CfieldValue* fieldValue63 = new CfieldValue();
fieldValue63->setName("position");
fieldValue63->setValue("-50 -50 -50");
ProtoInstance62->addFieldValue(*fieldValue63);

Transform56->addChildren(*ProtoInstance62);

CProtoInstance* ProtoInstance64 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance64->setName("node");
ProtoInstance64->setDEF("nodeD");
CfieldValue* fieldValue65 = new CfieldValue();
fieldValue65->setName("position");
fieldValue65->setValue("50 50 -50");
ProtoInstance64->addFieldValue(*fieldValue65);

Transform56->addChildren(*ProtoInstance64);

CProtoInstance* ProtoInstance66 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance66->setName("cylinder");
ProtoInstance66->setDEF("linkA");
CfieldValue* fieldValue67 = new CfieldValue();
fieldValue67->setName("set_positionA");
fieldValue67->setValue("0 0 0");
ProtoInstance66->addFieldValue(*fieldValue67);

CfieldValue* fieldValue68 = new CfieldValue();
fieldValue68->setName("set_positionB");
fieldValue68->setValue("50 50 50");
ProtoInstance66->addFieldValue(*fieldValue68);

Transform56->addChildren(*ProtoInstance66);

CProtoInstance* ProtoInstance69 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance69->setName("cylinder");
ProtoInstance69->setDEF("linkB");
CfieldValue* fieldValue70 = new CfieldValue();
fieldValue70->setName("set_positionA");
fieldValue70->setValue("0 0 0");
ProtoInstance69->addFieldValue(*fieldValue70);

CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("set_positionB");
fieldValue71->setValue("-50 -50 -50");
ProtoInstance69->addFieldValue(*fieldValue71);

Transform56->addChildren(*ProtoInstance69);

CProtoInstance* ProtoInstance72 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance72->setName("cylinder");
ProtoInstance72->setDEF("linkC");
CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("set_positionA");
fieldValue73->setValue("50 50 50");
ProtoInstance72->addFieldValue(*fieldValue73);

CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("set_positionB");
fieldValue74->setValue("50 50 -50");
ProtoInstance72->addFieldValue(*fieldValue74);

Transform56->addChildren(*ProtoInstance72);

group->addChildren(*Transform56);

CScript* Script75 = (CScript *)(m_pScene.createNode("Script"));
Script75->setDEF("clickHandler");
Cfield* field76 = new Cfield();
field76->setName("counter");
field76->setAccessType("inputOutput");
field76->setValue("0");
field76->setType("SFInt32");
Script75->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("node_changed");
field77->setAccessType("outputOnly");
field77->setType("SFNode");
Script75->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("add_node");
field78->setAccessType("inputOnly");
field78->setValue("false");
field78->setType("SFBool");
Script75->addField(*field78);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script75.setSourceCode(`ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }`)
group->addChildren(*Script75);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("clickGenerator");
ROUTE79->setFromField("isActive");
ROUTE79->setToNode("clickHandler");
ROUTE79->setToField("add_node");
group->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("nodeA");
ROUTE80->setFromField("position");
ROUTE80->setToNode("linkA");
ROUTE80->setToField("set_positionA");
group->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("nodeB");
ROUTE81->setFromField("position");
ROUTE81->setToNode("linkA");
ROUTE81->setToField("set_positionB");
group->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("nodeA");
ROUTE82->setFromField("position");
ROUTE82->setToNode("linkB");
ROUTE82->setToField("set_positionA");
group->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("nodeC");
ROUTE83->setFromField("position");
ROUTE83->setToNode("linkB");
ROUTE83->setToField("set_positionB");
group->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("nodeA");
ROUTE84->setFromField("position");
ROUTE84->setToNode("linkC");
ROUTE84->setToField("set_positionA");
group->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("nodeD");
ROUTE85->setFromField("position");
ROUTE85->setToNode("linkC");
ROUTE85->setToField("set_positionB");
group->addChildren(*ROUTE85);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
