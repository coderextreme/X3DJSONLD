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
meta2->setContent("HeadsUpDisplayExample.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Leonard Daly and Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("15 July 2006");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("24 October 2016");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("HeadsUpDisplayPrototype.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://X3dGraphics.com");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("rights");
meta10->setContent("Copyright 2006, Daly Realism and Don Brutzman");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("subject");
meta11->setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d");
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
//Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n
CExternProtoDeclare* ExternProtoDeclare16 = new CExternProtoDeclare();
ExternProtoDeclare16->setName("HeadsUpDisplay");
ExternProtoDeclare16->setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location");
ExternProtoDeclare16->setUrl(new CString[4]{"HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"}, 4);
Cfield* field17 = new Cfield();
field17->setName("screenOffset");
field17->setAccessType("inputOutput");
field17->setAppinfo("offset position for HUD relative to current view location, default 0 0 -5");
field17->setType("SFVec3f");
ExternProtoDeclare16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("children");
field18->setAccessType("inputOutput");
field18->setAppinfo("X3D content positioned at HUD offset");
field18->setType("MFNode");
ExternProtoDeclare16->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("position_changed");
field19->setAccessType("outputOnly");
field19->setAppinfo("HUD position update (in world coordinates) relative to original location");
field19->setType("SFVec3f");
ExternProtoDeclare16->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("orientation_changed");
field20->setAccessType("outputOnly");
field20->setAppinfo("HUD orientation update relative to original location");
field20->setType("SFRotation");
ExternProtoDeclare16->addField(*field20);

group->addChildren(*ExternProtoDeclare16);

CBackground* Background21 = (CBackground *)(m_pScene.createNode("Background"));
Background21->setDEF("SandyShallowBottom");
Background21->setGroundAngle(new float[4]{0.05,1.52,1.56,1.5707}, 4);
Background21->setGroundColor(new float[15]{0.2,0.2,0,0.3,0.3,0,0.5,0.5,0.3,0.1,0.3,0.4,0,0.2,0.4});
Background21->setSkyAngle(new float[5]{0.04,0.05,0.1,1.309,1.57}, 5);
Background21->setSkyColor(new float[18]{0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9});
group->addChildren(*Background21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("Heads-up display (HUD)");
group->addChildren(*Viewpoint22);

//ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence
CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("HeadsUpDisplay");
ProtoInstance23->setDEF("HeadsUpDisplayInstance");
//example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view
CfieldValue* fieldValue24 = new CfieldValue();
fieldValue24->setName("screenOffset");
fieldValue24->setValue("-0.75 1 -5");
ProtoInstance23->addFieldValue(*fieldValue24);

CfieldValue* fieldValue25 = new CfieldValue();
fieldValue25->setName("children");
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text27 = (CText *)(m_pScene.createNode("Text"));
Text27->setString(new CString[2]{"HUD text stays fixed","while user navigates"}, 2);
CFontStyle* FontStyle28 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle28->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle28->setSize(0.3);
Text27->setFontStyle(*FontStyle28);

Shape26->setGeometry(Text27);

CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{0.894118,0.819608,1});
Appearance29->setMaterial(*Material30);

Shape26->setAppearance(*Appearance29);

fieldValue25->addChildren(*Shape26);

ProtoInstance23->addFieldValue(*fieldValue25);

group->addChildren(*ProtoInstance23);

CInline* Inline31 = (CInline *)(m_pScene.createNode("Inline"));
Inline31->setUrl(new CString[4]{"../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"}, 4);
group->addChildren(*Inline31);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
