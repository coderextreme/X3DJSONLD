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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("ViewFrustumExample.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.");
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
meta7->setContent("ViewFrustumPrototype.x3d");
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
meta11->setName("Image");
meta11->setContent("ViewpointCalculator.png");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("ViewpointCalculatorComposed.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("view culling frustum");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CExternProtoDeclare* ExternProtoDeclare17 = new CExternProtoDeclare();
ExternProtoDeclare17->setName("ViewFrustum");
ExternProtoDeclare17->setUrl(new CString[1]{"ViewFrustumPrototype.x3d#ViewFrustum"}, 1);
Cfield* field18 = new Cfield();
field18->setAccessType("initializeOnly");
field18->setType("SFNode");
field18->setName("ViewpointNode");
ExternProtoDeclare17->addField(*field18);

Cfield* field19 = new Cfield();
field19->setAccessType("initializeOnly");
field19->setType("SFNode");
field19->setName("NavigationInfoNode");
ExternProtoDeclare17->addField(*field19);

Cfield* field20 = new Cfield();
field20->setAccessType("inputOutput");
field20->setType("SFBool");
field20->setName("visible");
ExternProtoDeclare17->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("inputOutput");
field21->setType("SFColor");
field21->setName("lineColor");
ExternProtoDeclare17->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("inputOutput");
field22->setType("SFColor");
field22->setName("frustumColor");
ExternProtoDeclare17->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("inputOutput");
field23->setType("SFFloat");
field23->setName("transparency");
ExternProtoDeclare17->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("inputOutput");
field24->setType("SFFloat");
field24->setName("aspectRatio");
ExternProtoDeclare17->addField(*field24);

Cfield* field25 = new Cfield();
field25->setAccessType("initializeOnly");
field25->setType("SFBool");
field25->setName("trace");
ExternProtoDeclare17->addField(*field25);

group->addChildren(*ExternProtoDeclare17);

CWorldInfo* WorldInfo26 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo26->setTitle("ViewFrustumExample.x3d");
group->addChildren(*WorldInfo26);

CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDescription("ViewFrustum from above, looking down");
Viewpoint27->setPosition(new float[3]{0,40,0});
Viewpoint27->setOrientation(new float[4]{1,0,0,-1.57});
group->addChildren(*Viewpoint27);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDescription("ViewFrustum from point of view");
group->addChildren(*Viewpoint28);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setDescription("ViewFrustum behind point of view");
Viewpoint29->setPosition(new float[3]{0,0,15});
group->addChildren(*Viewpoint29);

CViewpoint* Viewpoint30 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint30->setDescription("ViewFrustum oblique side view");
Viewpoint30->setPosition(new float[3]{-5,5,20});
Viewpoint30->setOrientation(new float[4]{0.8005,0.5926,0.0898,-0.3743});
group->addChildren(*Viewpoint30);

CNavigationInfo* NavigationInfo31 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo31->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
group->addChildren(*NavigationInfo31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("ViewFrustum");
CfieldValue* fieldValue33 = new CfieldValue();
fieldValue33->setName("ViewpointNode");
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setDEF("_1");
Viewpoint34->setDescription("ViewFrustum ViewpointNode");
fieldValue33->addChildren(*Viewpoint34);

ProtoInstance32->addFieldValue(*fieldValue33);

CfieldValue* fieldValue35 = new CfieldValue();
fieldValue35->setName("NavigationInfoNode");
CNavigationInfo* NavigationInfo36 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo36->setDEF("_2");
NavigationInfo36->setVisibilityLimit(15);
fieldValue35->addChildren(*NavigationInfo36);

ProtoInstance32->addFieldValue(*fieldValue35);

CfieldValue* fieldValue37 = new CfieldValue();
fieldValue37->setName("visible");
fieldValue37->setValue("true");
ProtoInstance32->addFieldValue(*fieldValue37);

CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("lineColor");
fieldValue38->setValue("0.9 0.9 0.9");
ProtoInstance32->addFieldValue(*fieldValue38);

CfieldValue* fieldValue39 = new CfieldValue();
fieldValue39->setName("frustumColor");
fieldValue39->setValue("0.8 0.8 0.8");
ProtoInstance32->addFieldValue(*fieldValue39);

CfieldValue* fieldValue40 = new CfieldValue();
fieldValue40->setName("transparency");
fieldValue40->setValue("0.75");
ProtoInstance32->addFieldValue(*fieldValue40);

CfieldValue* fieldValue41 = new CfieldValue();
fieldValue41->setName("aspectRatio");
fieldValue41->setValue("0.75");
ProtoInstance32->addFieldValue(*fieldValue41);

CfieldValue* fieldValue42 = new CfieldValue();
fieldValue42->setName("trace");
fieldValue42->setValue("true");
ProtoInstance32->addFieldValue(*fieldValue42);

group->addChildren(*ProtoInstance32);

CInline* Inline43 = (CInline *)(m_pScene.createNode("Inline"));
Inline43->setDEF("GridXZ");
Inline43->setGlobal(True);
Inline43->setUrl(new CString[1]{"GridXZ_20x20Fixed.x3d"}, 1);
group->addChildren(*Inline43);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setScale(new float[3]{5,5,5});
CInline* Inline45 = (CInline *)(m_pScene.createNode("Inline"));
Inline45->setDEF("CoordinateAxes");
Inline45->setGlobal(True);
Inline45->setUrl(new CString[1]{"CoordinateAxes.x3d"}, 1);
Transform44->addChildren(*Inline45);

group->addChildren(*Transform44);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
