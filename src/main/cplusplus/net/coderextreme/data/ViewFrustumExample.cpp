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

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CWorldInfo* WorldInfo18 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo18->setTitle("ViewFrustumExample.x3d");
group->addChildren(*WorldInfo18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDescription("ViewFrustum from above, looking down");
Viewpoint19->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint19->setPosition(new float[3]{0,40,0});
group->addChildren(*Viewpoint19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDescription("ViewFrustum from point of view");
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDescription("ViewFrustum behind point of view");
Viewpoint21->setPosition(new float[3]{0,0,15});
group->addChildren(*Viewpoint21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("ViewFrustum oblique side view");
Viewpoint22->setOrientation(new float[4]{0.8005,0.5926,0.0898,-0.3743});
Viewpoint22->setPosition(new float[3]{-5,5,20});
group->addChildren(*Viewpoint22);

CNavigationInfo* NavigationInfo23 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo23->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
group->addChildren(*NavigationInfo23);

CExternProtoDeclare* ExternProtoDeclare24 = new CExternProtoDeclare();
ExternProtoDeclare24->setName("ViewFrustum");
ExternProtoDeclare24->setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes");
ExternProtoDeclare24->setUrl(new CString[1]{"ViewFrustumPrototype.x3d#ViewFrustum"}, 1);
Cfield* field25 = new Cfield();
field25->setName("ViewpointNode");
field25->setAccessType("initializeOnly");
field25->setAppinfo("required: insert Viewpoint DEF or USE node for view of interest");
field25->setType("SFNode");
ExternProtoDeclare24->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("NavigationInfoNode");
field26->setAccessType("initializeOnly");
field26->setAppinfo("required: insert NavigationInfo DEF or USE node of interest");
field26->setType("SFNode");
ExternProtoDeclare24->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("visible");
field27->setAccessType("inputOutput");
field27->setAppinfo("whether or not frustum geometry is rendered");
field27->setType("SFBool");
ExternProtoDeclare24->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("lineColor");
field28->setAccessType("inputOutput");
field28->setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9");
field28->setType("SFColor");
ExternProtoDeclare24->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("frustumColor");
field29->setAccessType("inputOutput");
field29->setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8");
field29->setType("SFColor");
ExternProtoDeclare24->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("transparency");
field30->setAccessType("inputOutput");
field30->setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5");
field30->setType("SFFloat");
ExternProtoDeclare24->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("aspectRatio");
field31->setAccessType("inputOutput");
field31->setAppinfo("assumed ratio height/width, default value 0.75");
field31->setType("SFFloat");
ExternProtoDeclare24->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("trace");
field32->setAccessType("initializeOnly");
field32->setAppinfo("debug support, default false");
field32->setType("SFBool");
ExternProtoDeclare24->addField(*field32);

group->addChildren(*ExternProtoDeclare24);

//Example use
CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("ViewFrustum");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("ViewpointNode");
//prefer empty description to prevent entry in player's ViewpointList
CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setDescription("ViewFrustum ViewpointNode");
fieldValue34->addChildren(*Viewpoint35);

ProtoInstance33->addFieldValue(*fieldValue34);

CfieldValue* fieldValue36 = new CfieldValue();
fieldValue36->setName("NavigationInfoNode");
CNavigationInfo* NavigationInfo37 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo37->setVisibilityLimit(15);
fieldValue36->addChildren(*NavigationInfo37);

ProtoInstance33->addFieldValue(*fieldValue36);

CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("visible");
fieldValue38->setValue("true");
ProtoInstance33->addFieldValue(*fieldValue38);

CfieldValue* fieldValue39 = new CfieldValue();
fieldValue39->setName("lineColor");
fieldValue39->setValue("0.9 0.9 0.9");
ProtoInstance33->addFieldValue(*fieldValue39);

CfieldValue* fieldValue40 = new CfieldValue();
fieldValue40->setName("frustumColor");
fieldValue40->setValue("0.8 0.8 0.8");
ProtoInstance33->addFieldValue(*fieldValue40);

CfieldValue* fieldValue41 = new CfieldValue();
fieldValue41->setName("transparency");
fieldValue41->setValue("0.75");
ProtoInstance33->addFieldValue(*fieldValue41);

CfieldValue* fieldValue42 = new CfieldValue();
fieldValue42->setName("trace");
fieldValue42->setValue("true");
ProtoInstance33->addFieldValue(*fieldValue42);

group->addChildren(*ProtoInstance33);

//Visualization assists
CInline* Inline43 = (CInline *)(m_pScene.createNode("Inline"));
Inline43->setDEF("GridXZ");
Inline43->setUrl(new CString[1]{"GridXZ_20x20Fixed.x3d"}, 1);
group->addChildren(*Inline43);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setScale(new float[3]{5,5,5});
CInline* Inline45 = (CInline *)(m_pScene.createNode("Inline"));
Inline45->setDEF("CoordinateAxes");
Inline45->setUrl(new CString[1]{"CoordinateAxes.x3d"}, 1);
Transform44->addChildren(*Inline45);

group->addChildren(*Transform44);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
