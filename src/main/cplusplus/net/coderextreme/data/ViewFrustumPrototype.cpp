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
meta2->setContent("ViewFrustumPrototype.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translated");
meta5->setContent("16 August 2008");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("20 October 2019");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("ViewFrustumExample.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("drawing");
meta8->setContent("ViewFrustumComputation.png");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("ViewFrustumOverheadView.png");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("Image");
meta10->setContent("ViewFrustumObliqueView.png");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("subject");
meta11->setContent("view culling frustum");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CWorldInfo* WorldInfo16 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo16->setTitle("ViewFrustumPrototype.x3d");
group->addChildren(*WorldInfo16);

CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ViewFrustum" appinfo="Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes" ><ProtoInterface><field name="ViewpointNode" accessType="initializeOnly" appinfo="required: insert Viewpoint DEF or USE node for view of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="NavigationInfoNode" accessType="initializeOnly" appinfo="required: insert NavigationInfo DEF or USE node of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="visible" accessType="inputOutput" appinfo="whether or not frustum geometry is rendered" type="SFBool" value="true"></field>
<field name="lineColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum outline, default value 0.9 0.9 0.9" type="SFColor" value="0.9 0.9 0.9"></field>
<field name="frustumColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8" type="SFColor" value="0.8 0.8 0.8"></field>
<field name="transparency" accessType="inputOutput" appinfo="transparency of ViewFrustum hull geometry, default value 0.5" type="SFFloat" value="0.5"></field>
<field name="aspectRatio" accessType="inputOutput" appinfo="assumed ratio height/width, default value 0.75" type="SFFloat" value="0.75"></field>
<field name="trace" accessType="initializeOnly" appinfo="debug support, default false" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="VisibilitySwitch" whichChoice="-1"><Transform DEF="PositionTransform" rotation="0 1 0 3.14159"><Transform DEF="OrientationTransform"><Shape><IndexedLineSet DEF="FrustumLines" coordIndex="0 1 2 3 0 -1 4 5 6 7 4 -1 0 4 -1 1 5 -1 2 6 -1 3 7 -1"><Coordinate DEF="FrustumCoordinate" point="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"></Coordinate>
</IndexedLineSet>
<Appearance containerField="appearance"><Material containerField="material"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Extrusion DEF="FrustumExtrusion"></Extrusion>
<Appearance containerField="appearance" DEF="FrustumAppearance"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="frustumColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Sphere radius="0.08"></Sphere>
<Appearance containerField="appearance" USE="FrustumAppearance"></Appearance>
</Shape>
</Transform>
</Transform>
</Switch>
<Script DEF="GeometryComputationScript" directOutput="true" url="&quot;ViewFrustumPrototypeScript.js&quot;"><field name="visible" accessType="inputOutput" appinfo="Whether or not frustum geometry is rendered" type="SFBool"></field>
<field name="visibilitySwitchSelection" accessType="outputOnly" appinfo="Adjust Switch selection to make geometry visible or not" type="SFInt32"></field>
<field name="ViewpointNode" accessType="initializeOnly" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="NavigationInfoNode" accessType="initializeOnly" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="FrustumCoordinate" accessType="initializeOnly" type="SFNode"><Coordinate USE="FrustumCoordinate"></Coordinate>
</field>
<field name="FrustumExtrusion" accessType="initializeOnly" type="SFNode"><Extrusion USE="FrustumExtrusion"></Extrusion>
</field>
<field name="recompute" accessType="inputOnly" type="SFBool"></field>
<field name="aspectRatio" accessType="inputOutput" appinfo="assumed ratio height/width" type="SFFloat"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="orientation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="spine_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="scale_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="point_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="trace" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="visible" protoField="visible"></connect>
<connect nodeField="ViewpointNode" protoField="ViewpointNode"></connect>
<connect nodeField="NavigationInfoNode" protoField="NavigationInfoNode"></connect>
<connect nodeField="aspectRatio" protoField="aspectRatio"></connect>
<connect nodeField="trace" protoField="trace"></connect>
</IS>
</Script>
<ROUTE fromField="visibilitySwitchSelection" fromNode="GeometryComputationScript" toField="whichChoice" toNode="VisibilitySwitch"></ROUTE>
<ROUTE fromField="position_changed" fromNode="GeometryComputationScript" toField="translation" toNode="PositionTransform"></ROUTE>
<ROUTE fromField="orientation_changed" fromNode="GeometryComputationScript" toField="rotation" toNode="OrientationTransform"></ROUTE>
<ROUTE fromField="spine_changed" fromNode="GeometryComputationScript" toField="set_spine" toNode="FrustumExtrusion"></ROUTE>
<ROUTE fromField="scale_changed" fromNode="GeometryComputationScript" toField="set_scale" toNode="FrustumExtrusion"></ROUTE>
<ROUTE fromField="point_changed" fromNode="GeometryComputationScript" toField="point" toNode="FrustumCoordinate"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("ViewFrustum");
ProtoDeclare17->setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setName("ViewpointNode");
field19->setAccessType("initializeOnly");
field19->setAppinfo("required: insert Viewpoint DEF or USE node for view of interest");
field19->setType("SFNode");
//NULL node, ProtoInstance must provide
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("NavigationInfoNode");
field20->setAccessType("initializeOnly");
field20->setAppinfo("required: insert NavigationInfo DEF or USE node of interest");
field20->setType("SFNode");
//NULL node, ProtoInstance must provide
ProtoInterface18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("visible");
field21->setAccessType("inputOutput");
field21->setAppinfo("whether or not frustum geometry is rendered");
field21->setType("SFBool");
field21->setValue("true");
ProtoInterface18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("lineColor");
field22->setAccessType("inputOutput");
field22->setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9");
field22->setType("SFColor");
field22->setValue("0.9 0.9 0.9");
ProtoInterface18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("frustumColor");
field23->setAccessType("inputOutput");
field23->setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8");
field23->setType("SFColor");
field23->setValue("0.8 0.8 0.8");
ProtoInterface18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("transparency");
field24->setAccessType("inputOutput");
field24->setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5");
field24->setType("SFFloat");
field24->setValue("0.5");
ProtoInterface18->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("aspectRatio");
field25->setAccessType("inputOutput");
field25->setAppinfo("assumed ratio height/width, default value 0.75");
field25->setType("SFFloat");
field25->setValue("0.75");
ProtoInterface18->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("trace");
field26->setAccessType("initializeOnly");
field26->setAppinfo("debug support, default false");
field26->setType("SFBool");
field26->setValue("false");
ProtoInterface18->addField(*field26);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody27 = new CProtoBody();
CSwitch* Switch28 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch28->setDEF("VisibilitySwitch");
Switch28->setWhichChoice(-1);
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setDEF("PositionTransform");
Transform29->setRotation(new float[4]{0,1,0,3.14159});
CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setDEF("OrientationTransform");
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet32 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet32->setDEF("FrustumLines");
IndexedLineSet32->setCoordIndex(new int[24]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1});
CCoordinate* Coordinate33 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate33->setDEF("FrustumCoordinate");
Coordinate33->setPoint(new float[24]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
IndexedLineSet32->setCoord(*Coordinate33);

Shape31->setGeometry(IndexedLineSet32);

CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
CIS* IS36 = new CIS();
Cconnect* connect37 = new Cconnect();
connect37->setNodeField("emissiveColor");
connect37->setProtoField("lineColor");
IS36->addConnect(*connect37);

Material35->setIS(*IS36);

Appearance34->setMaterial(*Material35);

Shape31->setAppearance(*Appearance34);

Transform30->addChild(*Shape31);

CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion39 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion39->setDEF("FrustumExtrusion");
Shape38->setGeometry(Extrusion39);

CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setDEF("FrustumAppearance");
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
CIS* IS42 = new CIS();
Cconnect* connect43 = new Cconnect();
connect43->setNodeField("diffuseColor");
connect43->setProtoField("frustumColor");
IS42->addConnect(*connect43);

Cconnect* connect44 = new Cconnect();
connect44->setNodeField("transparency");
connect44->setProtoField("transparency");
IS42->addConnect(*connect44);

Material41->setIS(*IS42);

Appearance40->setMaterial(*Material41);

Shape38->setAppearance(*Appearance40);

Transform30->addChild(*Shape38);

CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere46 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere46->setRadius(0.08);
Shape45->setGeometry(Sphere46);

CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance47->setUSE("FrustumAppearance");
Shape45->setAppearance(*Appearance47);

Transform30->addChild(*Shape45);

Transform29->addChildren(*Transform30);

Switch28->addChildren(*Transform29);

ProtoBody27->addChildren(*Switch28);

CScript* Script48 = (CScript *)(m_pScene.createNode("Script"));
Script48->setDEF("GeometryComputationScript");
Script48->setDirectOutput(True);
Script48->setUrl(new CString[1]{"ViewFrustumPrototypeScript.js"}, 1);
Cfield* field49 = new Cfield();
field49->setName("visible");
field49->setAccessType("inputOutput");
field49->setAppinfo("Whether or not frustum geometry is rendered");
field49->setType("SFBool");
Script48->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("visibilitySwitchSelection");
field50->setAccessType("outputOnly");
field50->setAppinfo("Adjust Switch selection to make geometry visible or not");
field50->setType("SFInt32");
Script48->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("ViewpointNode");
field51->setAccessType("initializeOnly");
field51->setType("SFNode");
//initialization node (if any) goes here
Script48->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("NavigationInfoNode");
field52->setAccessType("initializeOnly");
field52->setType("SFNode");
//initialization node (if any) goes here
Script48->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("FrustumCoordinate");
field53->setAccessType("initializeOnly");
field53->setType("SFNode");
CCoordinate* Coordinate54 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate54->setUSE("FrustumCoordinate");
field53->addChildren(*Coordinate54);

Script48->addField(*field53);

Cfield* field55 = new Cfield();
field55->setName("FrustumExtrusion");
field55->setAccessType("initializeOnly");
field55->setType("SFNode");
CExtrusion* Extrusion56 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion56->setUSE("FrustumExtrusion");
field55->addChildren(*Extrusion56);

Script48->addField(*field55);

Cfield* field57 = new Cfield();
field57->setName("recompute");
field57->setAccessType("inputOnly");
field57->setType("SFBool");
Script48->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("aspectRatio");
field58->setAccessType("inputOutput");
field58->setAppinfo("assumed ratio height/width");
field58->setType("SFFloat");
Script48->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("position_changed");
field59->setAccessType("outputOnly");
field59->setType("SFVec3f");
Script48->addField(*field59);

Cfield* field60 = new Cfield();
field60->setName("orientation_changed");
field60->setAccessType("outputOnly");
field60->setType("SFRotation");
Script48->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("spine_changed");
field61->setAccessType("outputOnly");
field61->setType("MFVec3f");
Script48->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("scale_changed");
field62->setAccessType("outputOnly");
field62->setType("MFVec2f");
Script48->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("point_changed");
field63->setAccessType("outputOnly");
field63->setType("MFVec3f");
Script48->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("trace");
field64->setAccessType("initializeOnly");
field64->setType("SFBool");
Script48->addField(*field64);

CIS* IS65 = new CIS();
Cconnect* connect66 = new Cconnect();
connect66->setNodeField("visible");
connect66->setProtoField("visible");
IS65->addConnect(*connect66);

Cconnect* connect67 = new Cconnect();
connect67->setNodeField("ViewpointNode");
connect67->setProtoField("ViewpointNode");
IS65->addConnect(*connect67);

Cconnect* connect68 = new Cconnect();
connect68->setNodeField("NavigationInfoNode");
connect68->setProtoField("NavigationInfoNode");
IS65->addConnect(*connect68);

Cconnect* connect69 = new Cconnect();
connect69->setNodeField("aspectRatio");
connect69->setProtoField("aspectRatio");
IS65->addConnect(*connect69);

Cconnect* connect70 = new Cconnect();
connect70->setNodeField("trace");
connect70->setProtoField("trace");
IS65->addConnect(*connect70);

Script48->setIS(*IS65);

ProtoBody27->addChildren(*Script48);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromField("visibilitySwitchSelection");
ROUTE71->setFromNode("GeometryComputationScript");
ROUTE71->setToField("whichChoice");
ROUTE71->setToNode("VisibilitySwitch");
ProtoBody27->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("position_changed");
ROUTE72->setFromNode("GeometryComputationScript");
ROUTE72->setToField("translation");
ROUTE72->setToNode("PositionTransform");
ProtoBody27->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromField("orientation_changed");
ROUTE73->setFromNode("GeometryComputationScript");
ROUTE73->setToField("rotation");
ROUTE73->setToNode("OrientationTransform");
ProtoBody27->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromField("spine_changed");
ROUTE74->setFromNode("GeometryComputationScript");
ROUTE74->setToField("set_spine");
ROUTE74->setToNode("FrustumExtrusion");
ProtoBody27->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("scale_changed");
ROUTE75->setFromNode("GeometryComputationScript");
ROUTE75->setToField("set_scale");
ROUTE75->setToNode("FrustumExtrusion");
ProtoBody27->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("point_changed");
ROUTE76->setFromNode("GeometryComputationScript");
ROUTE76->setToField("point");
ROUTE76->setToNode("FrustumCoordinate");
ProtoBody27->addChildren(*ROUTE76);

ProtoDeclare17->setProtoBody(*ProtoBody27);

group->addChildren(*ProtoDeclare17);

//Example use is in separate scene
CAnchor* Anchor77 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor77->setDescription("ViewFrustum Example");
Anchor77->setUrl(new CString[1]{"ViewFrustumExample.x3d"}, 1);
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance79 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material80 = (CMaterial *)(m_pScene.createNode("Material"));
Material80->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance79->setMaterial(*Material80);

Shape78->setAppearance(*Appearance79);

CText* Text81 = (CText *)(m_pScene.createNode("Text"));
Text81->setString(new CString[5]{"ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"}, 5);
CFontStyle* FontStyle82 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle82->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle82->setSize(0.8);
Text81->setFontStyle(*FontStyle82);

Shape78->setGeometry(Text81);

Anchor77->addChildren(*Shape78);

group->addChildren(*Anchor77);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
