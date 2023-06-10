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
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("flowers2.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("transcriber");
meta5->setContent("John Carlson");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("23 January 2005");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("21 March 2018");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("identifier");
meta9->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("manually written");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("license");
meta11->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CNavigationInfo* NavigationInfo13 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo13);

CViewpoint* Viewpoint14 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint14->setDescription("Two mathematical orbitals");
Viewpoint14->setPosition(new float[3]{0,0,50});
group->addChildren(*Viewpoint14);

CGroup* Group15 = (CGroup *)(m_pScene.createNode("Group"));
CDirectionalLight* DirectionalLight16 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight16->setDirection(new float[3]{1,1,1});
Group15->addChildren(*DirectionalLight16);

CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="orbit" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="-8 0 0"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="1 0.5 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.75"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="Clock" cycleInterval="16" loop="true"></TimeSensor>
<OrientationInterpolator DEF="OrbitPath" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 3.14 1 0 0 6.28"></OrientationInterpolator>
<Transform DEF="OrbitTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Appearance><Material><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<!--<IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"></Coordinate> </IndexedFaceSet>--><IndexedFaceSet containerField="geometry" ccw="false" convex="false" coordIndex="0 1 2 -1" DEF="Orbit"><Coordinate containerField="coord" DEF="OrbitCoordinates" point="0 0 1 0 1 0 1 0 0"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Script DEF="OrbitScript"><field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<field name="coordinates" accessType="outputOnly" type="MFVec3f"></field>
<field name="coordIndexes" accessType="outputOnly" type="MFInt32"></field>
<field name="e" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="f" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="g" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="h" accessType="inputOutput" type="SFFloat" value="5"></field>
<field name="resolution" accessType="inputOutput" type="SFInt32" value="50"></field>
<![CDATA[ecmascript:

			var e = 5;
			var f = 5;
			var g = 5;
			var h = 5;
			var resolution = 100;

			function initialize() {
			     generateCoordinates();
			     var localci = [];
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     localci.push(i*resolution+j);
				     localci.push(i*resolution+j+1);
				     localci.push((i+1)*resolution+j+1);
				     localci.push((i+1)*resolution+j);
				     localci.push(-1);
				}
			    }
			    coordIndexes = new MFInt32(localci);
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var localc = [];
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					localc.push(new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					));
					theta += delta;
				}
				phi += delta;
			     }
			     
			     coordinates = new MFVec3f(localc);
			}

			function set_fraction(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					e += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 1:
					f += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 2:
					g += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				case 3:
					h += Math.floor(Math.random() * 2) * 2 - 1;
					break;
				}
				if (e < 1) {
					f = 10;
				}
				if (f < 1) {
					f = 10;
				}
				if (g < 1) {
					g = 4;
				}
				if (h < 1) {
					h = 4;
				}
				generateCoordinates();
			}]]></Script>
<ROUTE fromNode="OrbitScript" fromField="coordIndexes" toNode="Orbit" toField="set_coordIndex"></ROUTE>
<ROUTE fromNode="OrbitScript" fromField="coordinates" toNode="OrbitCoordinates" toField="point"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitScript" toField="set_fraction"></ROUTE>
<ROUTE fromNode="OrbitPath" fromField="value_changed" toNode="OrbitTransform" toField="rotation"></ROUTE>
<ROUTE fromNode="Clock" fromField="fraction_changed" toNode="OrbitPath" toField="set_fraction"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("orbit");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setName("translation");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("-8 0 0");
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("diffuseColor");
field20->setAccessType("inputOutput");
field20->setType("SFColor");
field20->setValue("1 0.5 0");
ProtoInterface18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("specularColor");
field21->setAccessType("inputOutput");
field21->setType("SFColor");
field21->setValue("1 0.5 0");
ProtoInterface18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("transparency");
field22->setAccessType("inputOutput");
field22->setType("SFFloat");
field22->setValue("0.75");
ProtoInterface18->addField(*field22);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody23 = new CProtoBody();
CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor25 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor25->setDEF("Clock");
TimeSensor25->setCycleInterval(16);
TimeSensor25->setLoop(True);
Group24->addChildren(*TimeSensor25);

COrientationInterpolator* OrientationInterpolator26 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator26->setDEF("OrbitPath");
OrientationInterpolator26->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator26->setKeyValue(new float[12]{1,0,0,0,1,0,0,3.14,1,0,0,6.28});
Group24->addChildren(*OrientationInterpolator26);

CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setDEF("OrbitTransform");
CIS* IS28 = new CIS();
Cconnect* connect29 = new Cconnect();
connect29->setNodeField("translation");
connect29->setProtoField("translation");
IS28->addConnect(*connect29);

Transform27->setIS(*IS28);

CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
CIS* IS33 = new CIS();
Cconnect* connect34 = new Cconnect();
connect34->setNodeField("diffuseColor");
connect34->setProtoField("diffuseColor");
IS33->addConnect(*connect34);

Cconnect* connect35 = new Cconnect();
connect35->setNodeField("specularColor");
connect35->setProtoField("specularColor");
IS33->addConnect(*connect35);

Cconnect* connect36 = new Cconnect();
connect36->setNodeField("transparency");
connect36->setProtoField("transparency");
IS33->addConnect(*connect36);

Material32->setIS(*IS33);

Appearance31->setMaterial(*Material32);

Shape30->setAppearance(*Appearance31);

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
CIndexedFaceSet* IndexedFaceSet37 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet37->setCcw(False);
IndexedFaceSet37->setConvex(False);
IndexedFaceSet37->setCoordIndex(new int[4]{0,1,2,-1});
IndexedFaceSet37->setDEF("Orbit");
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setDEF("OrbitCoordinates");
Coordinate38->setPoint(new float[9]{0,0,1,0,1,0,1,0,0});
IndexedFaceSet37->setCoord(*Coordinate38);

Shape30->setGeometry(IndexedFaceSet37);

Transform27->addChildren(*Shape30);

Group24->addChildren(*Transform27);

CScript* Script39 = (CScript *)(m_pScene.createNode("Script"));
Script39->setDEF("OrbitScript");
Cfield* field40 = new Cfield();
field40->setName("set_fraction");
field40->setAccessType("inputOnly");
field40->setType("SFFloat");
Script39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("coordinates");
field41->setAccessType("outputOnly");
field41->setType("MFVec3f");
Script39->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("coordIndexes");
field42->setAccessType("outputOnly");
field42->setType("MFInt32");
Script39->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("e");
field43->setAccessType("inputOutput");
field43->setType("SFFloat");
field43->setValue("5");
Script39->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("f");
field44->setAccessType("inputOutput");
field44->setType("SFFloat");
field44->setValue("5");
Script39->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("g");
field45->setAccessType("inputOutput");
field45->setType("SFFloat");
field45->setValue("5");
Script39->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("h");
field46->setAccessType("inputOutput");
field46->setType("SFFloat");
field46->setValue("5");
Script39->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("resolution");
field47->setAccessType("inputOutput");
field47->setType("SFInt32");
field47->setValue("50");
Script39->addField(*field47);


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"			var e = 5;\n"+
"			var f = 5;\n"+
"			var g = 5;\n"+
"			var h = 5;\n"+
"			var resolution = 100;\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var localci = [];\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     localci.push(i*resolution+j);\n"+
"				     localci.push(i*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j+1);\n"+
"				     localci.push((i+1)*resolution+j);\n"+
"				     localci.push(-1);\n"+
"				}\n"+
"			    }\n"+
"			    coordIndexes = new MFInt32(localci);\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var localc = [];\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					localc.push(new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					));\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			     \n"+
"			     coordinates = new MFVec3f(localc);\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}`)
Group24->addChildren(*Script39);

CROUTE* ROUTE48 = new CROUTE();
ROUTE48->setFromNode("OrbitScript");
ROUTE48->setFromField("coordIndexes");
ROUTE48->setToNode("Orbit");
ROUTE48->setToField("set_coordIndex");
Group24->addChildren(*ROUTE48);

CROUTE* ROUTE49 = new CROUTE();
ROUTE49->setFromNode("OrbitScript");
ROUTE49->setFromField("coordinates");
ROUTE49->setToNode("OrbitCoordinates");
ROUTE49->setToField("point");
Group24->addChildren(*ROUTE49);

CROUTE* ROUTE50 = new CROUTE();
ROUTE50->setFromNode("Clock");
ROUTE50->setFromField("fraction_changed");
ROUTE50->setToNode("OrbitScript");
ROUTE50->setToField("set_fraction");
Group24->addChildren(*ROUTE50);

CROUTE* ROUTE51 = new CROUTE();
ROUTE51->setFromNode("OrbitPath");
ROUTE51->setFromField("value_changed");
ROUTE51->setToNode("OrbitTransform");
ROUTE51->setToField("rotation");
Group24->addChildren(*ROUTE51);

CROUTE* ROUTE52 = new CROUTE();
ROUTE52->setFromNode("Clock");
ROUTE52->setFromField("fraction_changed");
ROUTE52->setToNode("OrbitPath");
ROUTE52->setToField("set_fraction");
Group24->addChildren(*ROUTE52);

ProtoBody23->addChildren(*Group24);

ProtoDeclare17->setProtoBody(*ProtoBody23);

Group15->addChildren(*ProtoDeclare17);

CProtoInstance* ProtoInstance53 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance53->setName("orbit");
CfieldValue* fieldValue54 = new CfieldValue();
fieldValue54->setName("translation");
fieldValue54->setValue("-8 0 0");
ProtoInstance53->addFieldValue(*fieldValue54);

CfieldValue* fieldValue55 = new CfieldValue();
fieldValue55->setName("diffuseColor");
fieldValue55->setValue("1 0.5 0");
ProtoInstance53->addFieldValue(*fieldValue55);

CfieldValue* fieldValue56 = new CfieldValue();
fieldValue56->setName("specularColor");
fieldValue56->setValue("1 0.5 0");
ProtoInstance53->addFieldValue(*fieldValue56);

CfieldValue* fieldValue57 = new CfieldValue();
fieldValue57->setName("transparency");
fieldValue57->setValue("0.75");
ProtoInstance53->addFieldValue(*fieldValue57);

Group15->addChildren(*ProtoInstance53);

CProtoInstance* ProtoInstance58 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance58->setName("orbit");
CfieldValue* fieldValue59 = new CfieldValue();
fieldValue59->setName("translation");
fieldValue59->setValue("8 0 0");
ProtoInstance58->addFieldValue(*fieldValue59);

CfieldValue* fieldValue60 = new CfieldValue();
fieldValue60->setName("diffuseColor");
fieldValue60->setValue("0 0.5 1");
ProtoInstance58->addFieldValue(*fieldValue60);

CfieldValue* fieldValue61 = new CfieldValue();
fieldValue61->setName("specularColor");
fieldValue61->setValue("0 0.5 1");
ProtoInstance58->addFieldValue(*fieldValue61);

CfieldValue* fieldValue62 = new CfieldValue();
fieldValue62->setName("transparency");
fieldValue62->setValue("0.5");
ProtoInstance58->addFieldValue(*fieldValue62);

Group15->addChildren(*ProtoInstance58);

group->addChildren(*Group15);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
