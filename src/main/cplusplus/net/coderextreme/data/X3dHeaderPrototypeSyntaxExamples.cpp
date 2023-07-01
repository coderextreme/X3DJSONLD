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
Ccomponent* component2 = new Ccomponent();
component2->setName("Geospatial");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("NURBS");
component3->setLevel(2);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Core");
component4->setLevel(2);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Navigation");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Text");
component6->setLevel(1);
head1->addComponent(*component6);

Cmeta* meta7 = new Cmeta();
meta7->setName("title");
meta7->setContent("X3dHeaderPrototypeSyntaxExamples.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("created");
meta9->setContent("14 October 2002");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("modified");
meta10->setContent("27 May 2017");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("Don Brutzman");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("specificationSection");
meta12->setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("specificationUrl");
meta13->setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CExternProtoDeclare* ExternProtoDeclare18 = new CExternProtoDeclare();
ExternProtoDeclare18->setName("ViewPositionOrientation");
ExternProtoDeclare18->setUrl(new CString[4]{"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"}, 4);
Cfield* field19 = new Cfield();
field19->setName("enabled");
field19->setAccessType("inputOutput");
field19->setType("SFBool");
ExternProtoDeclare18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("traceEnabled");
field20->setAccessType("initializeOnly");
field20->setType("SFBool");
ExternProtoDeclare18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("set_traceEnabled");
field21->setAccessType("inputOnly");
field21->setType("SFBool");
ExternProtoDeclare18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("position_changed");
field22->setAccessType("outputOnly");
field22->setType("SFVec3f");
ExternProtoDeclare18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("orientation_changed");
field23->setAccessType("outputOnly");
field23->setType("SFRotation");
ExternProtoDeclare18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("outputViewpointString");
field24->setAccessType("outputOnly");
field24->setType("MFString");
ExternProtoDeclare18->addField(*field24);

group->addChildren(*ExternProtoDeclare18);

CProtoDeclare ProtoDeclare25 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfoNode" ><ProtoBody><WorldInfo DEF="ExamplePrototypeBody"></WorldInfo>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare25->setName("NewWorldInfoNode");
CProtoBody* ProtoBody26 = new CProtoBody();
CWorldInfo* WorldInfo27 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo27->setDEF("ExamplePrototypeBody");
ProtoBody26->addChildren(*WorldInfo27);

ProtoDeclare25->setProtoBody(*ProtoBody26);

group->addChildren(*ProtoDeclare25);

CProtoInstance* ProtoInstance28 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance28->setName("NewWorldInfoNode");
group->addChildren(*ProtoInstance28);

CProtoDeclare ProtoDeclare29 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="EmissiveMaterial" ><ProtoInterface><field name="onlyColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><!--Override default diffuseColor value 0.8 0.8 0.8--><Material diffuseColor="0 0 0"><!--Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.--><IS><connect nodeField="emissiveColor" protoField="onlyColor"></connect>
</IS>
</Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare29->setName("EmissiveMaterial");
CProtoInterface* ProtoInterface30 = new CProtoInterface();
Cfield* field31 = new Cfield();
field31->setName("onlyColor");
field31->setAccessType("inputOutput");
field31->setType("SFColor");
field31->setValue("1 0 0");
ProtoInterface30->addField(*field31);

ProtoDeclare29->setProtoInterface(*ProtoInterface30);

CProtoBody* ProtoBody32 = new CProtoBody();
//Override default diffuseColor value 0.8 0.8 0.8
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDiffuseColor(new float[3]{0,0,0});
//Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
CIS* IS34 = new CIS();
Cconnect* connect35 = new Cconnect();
connect35->setNodeField("emissiveColor");
connect35->setProtoField("onlyColor");
IS34->addConnect(*connect35);

Material33->setIS(*IS34);

ProtoBody32->addChildren(*Material33);

ProtoDeclare29->setProtoBody(*ProtoBody32);

group->addChildren(*ProtoDeclare29);

CProtoDeclare ProtoDeclare36 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShiftGroupUp2m" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><Group DEF="DefaultNodeValue" bboxSize="2 2 2"><!--Authors need to override this node when creating the ProtoInstance fieldValue name="children"--></Group>
</field>
</ProtoInterface>
<ProtoBody><Transform translation="0 2 0"><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare36->setName("ShiftGroupUp2m");
CProtoInterface* ProtoInterface37 = new CProtoInterface();
Cfield* field38 = new Cfield();
field38->setName("children");
field38->setAccessType("inputOutput");
field38->setType("MFNode");
CGroup* Group39 = (CGroup *)(m_pScene.createNode("Group"));
Group39->setDEF("DefaultNodeValue");
Group39->setBboxSize(new float[3]{2,2,2});
//Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"
field38->addChildren(*Group39);

ProtoInterface37->addField(*field38);

ProtoDeclare36->setProtoInterface(*ProtoInterface37);

CProtoBody* ProtoBody40 = new CProtoBody();
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setTranslation(new float[3]{0,2,0});
CGroup* Group42 = (CGroup *)(m_pScene.createNode("Group"));
CIS* IS43 = new CIS();
Cconnect* connect44 = new Cconnect();
connect44->setNodeField("children");
connect44->setProtoField("children");
IS43->addConnect(*connect44);

Group42->setIS(*IS43);

Transform41->addChildren(*Group42);

ProtoBody40->addChildren(*Transform41);

ProtoDeclare36->setProtoBody(*ProtoBody40);

group->addChildren(*ProtoDeclare36);

CProtoInstance* ProtoInstance45 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance45->setName("ShiftGroupUp2m");
group->addChildren(*ProtoInstance45);

//====================
CViewpoint* Viewpoint46 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint46->setDEF("ExampleSingleElement");
Viewpoint46->setDescription("Hello syntax");
group->addChildren(*Viewpoint46);

CGroup* Group47 = (CGroup *)(m_pScene.createNode("Group"));
Group47->setDEF("ExampleChildElement");
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box49 = (CBox *)(m_pScene.createNode("Box"));
Shape48->setGeometry(Box49);

CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setDiffuseColor(new float[3]{0.6,0.4,0.2});
Appearance50->setMaterial(*Material51);

Shape48->setAppearance(*Appearance50);

Group47->addChildren(*Shape48);

group->addChildren(*Group47);

CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setDEF("TransformExampleUSE");
Transform52->setRotation(new float[4]{0,1,0,0.78});
Transform52->setTranslation(new float[3]{0,2.5,0});
CGroup* Group53 = (CGroup *)(m_pScene.createNode("Group"));
Group53->setUSE("ExampleChildElement");
Transform52->addChildren(*Group53);

group->addChildren(*Transform52);

CCollision* Collision54 = (CCollision *)(m_pScene.createNode("Collision"));
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
//note that Collision proxy Shape is not rendered
CSphere* Sphere56 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape55->setGeometry(Sphere56);

CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance57->setMaterial(*Material58);

Shape55->setAppearance(*Appearance57);

Collision54->setProxy(*Shape55);

CGroup* Group59 = (CGroup *)(m_pScene.createNode("Group"));
Group59->setUSE("ExampleChildElement");
Collision54->setProxy(*Group59);

group->addChildren(*Collision54);

CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
Transform60->setTranslation(new float[3]{0,-2.5,0});
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance63 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance63->setName("EmissiveMaterial");
CfieldValue* fieldValue64 = new CfieldValue();
fieldValue64->setName("onlyColor");
fieldValue64->setValue("0.2 0.6 0.6");
ProtoInstance63->addFieldValue(*fieldValue64);

Appearance62->setMaterial(*ProtoInstance63);

Shape61->setAppearance(*Appearance62);

CText* Text65 = (CText *)(m_pScene.createNode("Text"));
Text65->setString(new CString[2]{"X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"}, 2);
CFontStyle* FontStyle66 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle66->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle66->setSize(0.6);
Text65->setFontStyle(*FontStyle66);

Shape61->setGeometry(Text65);

Transform60->addChildren(*Shape61);

group->addChildren(*Transform60);

CProtoInstance* ProtoInstance67 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance67->setName("ViewPositionOrientation");
CfieldValue* fieldValue68 = new CfieldValue();
fieldValue68->setName("enabled");
fieldValue68->setValue("true");
ProtoInstance67->addFieldValue(*fieldValue68);

group->addChildren(*ProtoInstance67);

CTimeSensor* TimeSensor69 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor69->setDEF("Clock");
TimeSensor69->setCycleInterval(4);
TimeSensor69->setLoop(True);
group->addChildren(*TimeSensor69);

COrientationInterpolator* OrientationInterpolator70 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator70->setDEF("Spinner");
OrientationInterpolator70->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator70->setKeyValue(new float[12]{0,1,0,0,0,1,0,3.14159,0,1,0,6.28318});
group->addChildren(*OrientationInterpolator70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromField("fraction_changed");
ROUTE71->setFromNode("Clock");
ROUTE71->setToField("set_fraction");
ROUTE71->setToNode("Spinner");
group->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("value_changed");
ROUTE72->setFromNode("Spinner");
ROUTE72->setToField("rotation");
ROUTE72->setToNode("TransformExampleUSE");
group->addChildren(*ROUTE72);

CInline* Inline73 = (CInline *)(m_pScene.createNode("Inline"));
Inline73->setDEF("someInline");
Inline73->setUrl(new CString[2]{"someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"}, 2);
group->addChildren(*Inline73);

CIMPORT* IMPORT74 = new CIMPORT();
IMPORT74->setAS("someInlineRoot");
IMPORT74->setImportedDEF("someName");
IMPORT74->setInlineDEF("someInline");
group->addChildren(*IMPORT74);

CPositionInterpolator* PositionInterpolator75 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator75->setDEF("StayInPlace");
PositionInterpolator75->setKey(new float[2]{0,1}, 2);
PositionInterpolator75->setKeyValue(new float[6]{0,0,0,0,0,0});
group->addChildren(*PositionInterpolator75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("fraction_changed");
ROUTE76->setFromNode("Clock");
ROUTE76->setToField("set_fraction");
ROUTE76->setToNode("StayInPlace");
group->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("value_changed");
ROUTE77->setFromNode("StayInPlace");
ROUTE77->setToField("set_translation");
ROUTE77->setToNode("someInlineRoot");
group->addChildren(*ROUTE77);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
