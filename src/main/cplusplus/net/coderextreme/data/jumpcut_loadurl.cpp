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
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("jumpcut_loadurl.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("reference");
meta3->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("reference");
meta4->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("disclaimer");
meta6->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("info");
meta7->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translator");
meta8->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("translated");
meta9->setContent("21 January 2001");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("modified");
meta10->setContent("20 October 2019");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("description");
meta11->setContent("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("license");
meta15->setContent("../../license.html");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CWorldInfo* WorldInfo17 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo17->setTitle("jumpcut_loadurl.x3d");
group->addChildren(*WorldInfo17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setGroundAngle(new float[1]{1.57}, 1);
Background18->setGroundColor(new float[6]{0,0.5,0,0,0.5,0});
Background18->setSkyColor(new float[3]{0,0,1});
group->addChildren(*Background18);

CNavigationInfo* NavigationInfo19 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo19->setType(new CString[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
group->addChildren(*NavigationInfo19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDEF("Front_View");
Viewpoint20->setDescription("Front View");
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("Top_View");
Viewpoint21->setDescription("Top View");
Viewpoint21->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint21->setPosition(new float[3]{0,10,0});
group->addChildren(*Viewpoint21);

CTouchSensor* TouchSensor22 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor22->setDEF("STARTER");
TouchSensor22->setDescription("touch to activate");
group->addChildren(*TouchSensor22);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setDEF("ROOT");
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CBox* Box27 = (CBox *)(m_pScene.createNode("Box"));
Shape24->setGeometry(Box27);

Transform23->addChildren(*Shape24);

group->addChildren(*Transform23);

CScript* Script28 = (CScript *)(m_pScene.createNode("Script"));
Script28->setDEF("MYSCRIPT");
Script28->setUrl(new CString[2]{"jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"}, 2);
Cfield* field29 = new Cfield();
field29->setName("myParameter");
field29->setAccessType("initializeOnly");
field29->setType("MFString");
field29->setValue("\"Top_View\"");
Script28->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("myUrl");
field30->setAccessType("initializeOnly");
field30->setType("MFString");
field30->setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"");
Script28->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("trigger_event");
field31->setAccessType("inputOnly");
field31->setType("SFBool");
Script28->addField(*field31);

group->addChildren(*Script28);

CROUTE* ROUTE32 = new CROUTE();
ROUTE32->setFromField("isActive");
ROUTE32->setFromNode("STARTER");
ROUTE32->setToField("trigger_event");
ROUTE32->setToNode("MYSCRIPT");
group->addChildren(*ROUTE32);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
