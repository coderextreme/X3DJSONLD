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
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John W Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("December 13 2015");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("title");
meta5->setContent("force.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/force.x3d");
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
CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="node" ><ProtoInterface><field name="position" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="transform"><IS><connect nodeField="translation" protoField="position"></connect>
</IS>
<Shape><Sphere containerField="geometry"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<Transform translation="1 0 0"><Shape><Text containerField="geometry" string="&quot;Node&quot;"><FontStyle justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;" size="5"></FontStyle>
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
CGroup* Group14 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform15 = (CTransform *)(m_pScene.createNode("Transform"));
Transform15->setDEF("transform");
CIS* IS16 = new CIS();
Cconnect* connect17 = new Cconnect();
connect17->setNodeField("translation");
connect17->setProtoField("position");
IS16->addConnect(*connect17);

Transform15->setIS(*IS16);

CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere19 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape18->setGeometry(Sphere19);

CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{1,0,0});
Appearance20->setMaterial(*Material21);

Shape18->setAppearance(*Appearance20);

Transform15->addChildren(*Shape18);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{1,0,0});
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text24 = (CText *)(m_pScene.createNode("Text"));
Text24->setString(new CString[1]{"Node"}, 1);
CFontStyle* FontStyle25 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle25->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle25->setSize(5);
Text24->setFontStyle(*FontStyle25);

Shape23->setGeometry(Text24);

CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material27 = (CMaterial *)(m_pScene.createNode("Material"));
Material27->setDiffuseColor(new float[3]{0,0,1});
Appearance26->setMaterial(*Material27);

Shape23->setAppearance(*Appearance26);

Transform22->addChildren(*Shape23);

Transform15->addChildren(*Transform22);

Group14->addChildren(*Transform15);

CPositionInterpolator* PositionInterpolator28 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator28->setDEF("NodePosition");
PositionInterpolator28->setKey(new float[2]{0,1}, 2);
PositionInterpolator28->setKeyValue(new float[6]{0,0,0,0,5,0});
Group14->addChildren(*PositionInterpolator28);

CScript* Script29 = (CScript *)(m_pScene.createNode("Script"));
Script29->setDEF("MoveBall");
Cfield* field30 = new Cfield();
field30->setName("translation");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("50 50 0");
Script29->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("old");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0 0 0");
Script29->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("set_cycle");
field32->setAccessType("inputOnly");
field32->setType("SFTime");
Script29->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("keyValue");
field33->setAccessType("outputOnly");
field33->setType("MFVec3f");
Script29->addField(*field33);


Script29.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
Group14->addChildren(*Script29);

CTimeSensor* TimeSensor34 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor34->setDEF("nodeClock");
TimeSensor34->setCycleInterval(3);
TimeSensor34->setLoop(True);
Group14->addChildren(*TimeSensor34);

CROUTE* ROUTE35 = new CROUTE();
ROUTE35->setFromNode("nodeClock");
ROUTE35->setFromField("cycleTime");
ROUTE35->setToNode("MoveBall");
ROUTE35->setToField("set_cycle");
Group14->addChildren(*ROUTE35);

CROUTE* ROUTE36 = new CROUTE();
ROUTE36->setFromNode("nodeClock");
ROUTE36->setFromField("fraction_changed");
ROUTE36->setToNode("NodePosition");
ROUTE36->setToField("set_fraction");
Group14->addChildren(*ROUTE36);

CROUTE* ROUTE37 = new CROUTE();
ROUTE37->setFromNode("MoveBall");
ROUTE37->setFromField("keyValue");
ROUTE37->setToNode("NodePosition");
ROUTE37->setToField("keyValue");
Group14->addChildren(*ROUTE37);

CROUTE* ROUTE38 = new CROUTE();
ROUTE38->setFromNode("NodePosition");
ROUTE38->setFromField("value_changed");
ROUTE38->setToNode("transform");
ROUTE38->setToField("set_translation");
Group14->addChildren(*ROUTE38);

ProtoBody13->addChildren(*Group14);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare39 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare39->setName("cylinder");
CProtoInterface* ProtoInterface40 = new CProtoInterface();
Cfield* field41 = new Cfield();
field41->setName("set_positionA");
field41->setAccessType("inputOnly");
field41->setType("SFVec3f");
ProtoInterface40->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("set_positionB");
field42->setAccessType("inputOnly");
field42->setType("SFVec3f");
ProtoInterface40->addField(*field42);

ProtoDeclare39->setProtoInterface(*ProtoInterface40);

CProtoBody* ProtoBody43 = new CProtoBody();
CGroup* Group44 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion46 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion46->setDEF("extrusion");
Extrusion46->setCreaseAngle(0.785);
Extrusion46->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion46->setSpine(new float[6]{0,-50,0,0,50,0});
Shape45->setGeometry(Extrusion46);

CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setDiffuseColor(new float[3]{0,1,0});
Appearance47->setMaterial(*Material48);

Shape45->setAppearance(*Appearance47);

Group44->addChildren(*Shape45);

CScript* Script49 = (CScript *)(m_pScene.createNode("Script"));
Script49->setDEF("MoveCylinder");
Cfield* field50 = new Cfield();
field50->setName("spine");
field50->setAccessType("inputOutput");
field50->setType("MFVec3f");
field50->setValue("0 -50 0 0 50 0");
Script49->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("set_endA");
field51->setAccessType("inputOnly");
field51->setType("SFVec3f");
Script49->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("set_endB");
field52->setAccessType("inputOnly");
field52->setType("SFVec3f");
Script49->addField(*field52);

CIS* IS53 = new CIS();
Cconnect* connect54 = new Cconnect();
connect54->setNodeField("set_endA");
connect54->setProtoField("set_positionA");
IS53->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("set_endB");
connect55->setProtoField("set_positionB");
IS53->addConnect(*connect55);

Script49->setIS(*IS53);


Script49.setSourceCode(`ecmascript:\n"+
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
Group44->addChildren(*Script49);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromNode("MoveCylinder");
ROUTE56->setFromField("spine");
ROUTE56->setToNode("extrusion");
ROUTE56->setToField("set_spine");
Group44->addChildren(*ROUTE56);

ProtoBody43->addChildren(*Group44);

ProtoDeclare39->setProtoBody(*ProtoBody43);

group->addChildren(*ProtoDeclare39);

CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setDEF("HoldsContent");
Transform57->setScale(new float[3]{0.1,0.1,0.1});
CPlaneSensor* PlaneSensor58 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor58->setDEF("clickGenerator");
PlaneSensor58->setMinPosition(new float[2]{-50,-50});
PlaneSensor58->setMaxPosition(new float[2]{50,50});
PlaneSensor58->setDescription("click on background to add nodes, click on nodes to add links");
Transform57->addChildren(*PlaneSensor58);

CProtoInstance* ProtoInstance59 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance59->setName("node");
ProtoInstance59->setDEF("nodeA");
CfieldValue* fieldValue60 = new CfieldValue();
fieldValue60->setName("position");
fieldValue60->setValue("0 0 0");
ProtoInstance59->addFieldValue(*fieldValue60);

Transform57->addChildren(*ProtoInstance59);

CProtoInstance* ProtoInstance61 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance61->setName("node");
ProtoInstance61->setDEF("nodeB");
CfieldValue* fieldValue62 = new CfieldValue();
fieldValue62->setName("position");
fieldValue62->setValue("50 50 50");
ProtoInstance61->addFieldValue(*fieldValue62);

Transform57->addChildren(*ProtoInstance61);

CProtoInstance* ProtoInstance63 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance63->setName("node");
ProtoInstance63->setDEF("nodeC");
CfieldValue* fieldValue64 = new CfieldValue();
fieldValue64->setName("position");
fieldValue64->setValue("-50 -50 -50");
ProtoInstance63->addFieldValue(*fieldValue64);

Transform57->addChildren(*ProtoInstance63);

CProtoInstance* ProtoInstance65 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance65->setName("node");
ProtoInstance65->setDEF("nodeD");
CfieldValue* fieldValue66 = new CfieldValue();
fieldValue66->setName("position");
fieldValue66->setValue("50 50 -50");
ProtoInstance65->addFieldValue(*fieldValue66);

Transform57->addChildren(*ProtoInstance65);

CProtoInstance* ProtoInstance67 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance67->setName("cylinder");
ProtoInstance67->setDEF("linkA");
CfieldValue* fieldValue68 = new CfieldValue();
fieldValue68->setName("set_positionA");
fieldValue68->setValue("0 0 0");
ProtoInstance67->addFieldValue(*fieldValue68);

CfieldValue* fieldValue69 = new CfieldValue();
fieldValue69->setName("set_positionB");
fieldValue69->setValue("50 50 50");
ProtoInstance67->addFieldValue(*fieldValue69);

Transform57->addChildren(*ProtoInstance67);

CProtoInstance* ProtoInstance70 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance70->setName("cylinder");
ProtoInstance70->setDEF("linkB");
CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("set_positionA");
fieldValue71->setValue("0 0 0");
ProtoInstance70->addFieldValue(*fieldValue71);

CfieldValue* fieldValue72 = new CfieldValue();
fieldValue72->setName("set_positionB");
fieldValue72->setValue("-50 -50 -50");
ProtoInstance70->addFieldValue(*fieldValue72);

Transform57->addChildren(*ProtoInstance70);

CProtoInstance* ProtoInstance73 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance73->setName("cylinder");
ProtoInstance73->setDEF("linkC");
CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("set_positionA");
fieldValue74->setValue("50 50 50");
ProtoInstance73->addFieldValue(*fieldValue74);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("set_positionB");
fieldValue75->setValue("50 50 -50");
ProtoInstance73->addFieldValue(*fieldValue75);

Transform57->addChildren(*ProtoInstance73);

group->addChildren(*Transform57);

CScript* Script76 = (CScript *)(m_pScene.createNode("Script"));
Script76->setDEF("clickHandler");
Cfield* field77 = new Cfield();
field77->setName("counter");
field77->setAccessType("inputOutput");
field77->setValue("0");
field77->setType("SFInt32");
Script76->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("node_changed");
field78->setAccessType("outputOnly");
field78->setType("SFNode");
Script76->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("add_node");
field79->setAccessType("inputOnly");
field79->setValue("false");
field79->setType("SFBool");
Script76->addField(*field79);

//<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>

Script76.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script76);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("clickGenerator");
ROUTE80->setFromField("isActive");
ROUTE80->setToNode("clickHandler");
ROUTE80->setToField("add_node");
group->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("nodeA");
ROUTE81->setFromField("position");
ROUTE81->setToNode("linkA");
ROUTE81->setToField("set_positionA");
group->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("nodeB");
ROUTE82->setFromField("position");
ROUTE82->setToNode("linkA");
ROUTE82->setToField("set_positionB");
group->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("nodeA");
ROUTE83->setFromField("position");
ROUTE83->setToNode("linkB");
ROUTE83->setToField("set_positionA");
group->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("nodeC");
ROUTE84->setFromField("position");
ROUTE84->setToNode("linkB");
ROUTE84->setToField("set_positionB");
group->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("nodeA");
ROUTE85->setFromField("position");
ROUTE85->setToNode("linkC");
ROUTE85->setToField("set_positionA");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("nodeD");
ROUTE86->setFromField("position");
ROUTE86->setToNode("linkC");
ROUTE86->setToField("set_positionB");
group->addChildren(*ROUTE86);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
