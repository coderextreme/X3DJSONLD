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
X3D0->setProfile("Interchange");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("Bubbles.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Bubble animation used by Nancy Diving example.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("24 January 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta8);

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CWorldInfo* WorldInfo10 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo10->setTitle("Bubbles.x3d");
group->addChildren(*WorldInfo10);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("Bubbles");
CGroup* Group12 = (CGroup *)(m_pScene.createNode("Group"));
Group12->setDEF("Bubble");
CTimeSensor* TimeSensor13 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor13->setDEF("BubbleClock");
TimeSensor13->setCycleInterval(6);
TimeSensor13->setLoop(True);
Group12->addChildren(*TimeSensor13);

CPositionInterpolator* PositionInterpolator14 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator14->setDEF("BubblePath1");
PositionInterpolator14->setKey(new float[5]{0,0.5,0.8,0.9,1}, 5);
PositionInterpolator14->setKeyValue(new float[15]{0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509});
Group12->addChildren(*PositionInterpolator14);

CPositionInterpolator* PositionInterpolator15 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator15->setDEF("BubblePath2");
PositionInterpolator15->setKey(new float[5]{0,0.3,0.64,0.85,1}, 5);
PositionInterpolator15->setKeyValue(new float[15]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373});
Group12->addChildren(*PositionInterpolator15);

CPositionInterpolator* PositionInterpolator16 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator16->setDEF("BubblePath3");
PositionInterpolator16->setKey(new float[5]{0,0.1,0.45,0.7,1}, 5);
PositionInterpolator16->setKeyValue(new float[15]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734});
Group12->addChildren(*PositionInterpolator16);

CPositionInterpolator* PositionInterpolator17 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator17->setDEF("BubblePath4");
PositionInterpolator17->setKey(new float[5]{0,0.5,0.6,0.8,1}, 5);
PositionInterpolator17->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349});
Group12->addChildren(*PositionInterpolator17);

CPositionInterpolator* PositionInterpolator18 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator18->setDEF("BubblePath5");
PositionInterpolator18->setKey(new float[5]{0,0.25,0.35,0.65,1}, 5);
PositionInterpolator18->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1});
Group12->addChildren(*PositionInterpolator18);

CPositionInterpolator* PositionInterpolator19 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator19->setDEF("BubblePath6");
PositionInterpolator19->setKey(new float[5]{0,0.15,0.22235,0.55565,1}, 5);
PositionInterpolator19->setKeyValue(new float[15]{0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14});
Group12->addChildren(*PositionInterpolator19);

CPositionInterpolator* PositionInterpolator20 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator20->setDEF("BubblePath7");
PositionInterpolator20->setKey(new float[5]{0,0.2425,0.4535,0.6775,1}, 5);
PositionInterpolator20->setKeyValue(new float[15]{0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12});
Group12->addChildren(*PositionInterpolator20);

CPositionInterpolator* PositionInterpolator21 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator21->setDEF("BubblePath8");
PositionInterpolator21->setKey(new float[5]{0,0.1125,0.5535,0.97865,1}, 5);
PositionInterpolator21->setKeyValue(new float[15]{0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86});
Group12->addChildren(*PositionInterpolator21);

CPositionInterpolator* PositionInterpolator22 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator22->setDEF("BubblePath9");
PositionInterpolator22->setKey(new float[5]{0,0.0025,0.035,0.65,1}, 5);
PositionInterpolator22->setKeyValue(new float[15]{0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545});
Group12->addChildren(*PositionInterpolator22);

CPositionInterpolator* PositionInterpolator23 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator23->setDEF("BubblePath10");
PositionInterpolator23->setKey(new float[5]{0,0.00025,0.035,0.6895,1}, 5);
PositionInterpolator23->setKeyValue(new float[15]{0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1});
Group12->addChildren(*PositionInterpolator23);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setDEF("bubble1");
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{1,1,1});
Material28->setTransparency(0.8);
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CSphere* Sphere29 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere29->setRadius(0.025);
Shape26->setGeometry(Sphere29);

Transform25->addChild(*Shape26);

Transform24->addChildren(*Transform25);

CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setDEF("bubble2");
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDiffuseColor(new float[3]{1,1,1});
Material33->setTransparency(0.8);
Appearance32->setMaterial(*Material33);

Shape31->setAppearance(*Appearance32);

CSphere* Sphere34 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere34->setRadius(0.055);
Shape31->setGeometry(Sphere34);

Transform30->addChild(*Shape31);

Transform24->addChildren(*Transform30);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("bubble3");
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{1,1,1});
Material38->setTransparency(0.8);
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CSphere* Sphere39 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere39->setRadius(0.065);
Shape36->setGeometry(Sphere39);

Transform35->addChild(*Shape36);

Transform24->addChildren(*Transform35);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setDEF("bubble4");
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setDiffuseColor(new float[3]{1,1,1});
Material43->setTransparency(0.8);
Appearance42->setMaterial(*Material43);

Shape41->setAppearance(*Appearance42);

CSphere* Sphere44 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere44->setRadius(0.015);
Shape41->setGeometry(Sphere44);

Transform40->addChild(*Shape41);

Transform24->addChildren(*Transform40);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setDEF("bubble5");
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance47 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setDiffuseColor(new float[3]{1,1,1});
Material48->setTransparency(0.8);
Appearance47->setMaterial(*Material48);

Shape46->setAppearance(*Appearance47);

CSphere* Sphere49 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere49->setRadius(0.075);
Shape46->setGeometry(Sphere49);

Transform45->addChild(*Shape46);

Transform24->addChildren(*Transform45);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setDEF("bubble6");
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setDiffuseColor(new float[3]{1,1,1});
Material53->setTransparency(0.8);
Appearance52->setMaterial(*Material53);

Shape51->setAppearance(*Appearance52);

CSphere* Sphere54 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere54->setRadius(0.005);
Shape51->setGeometry(Sphere54);

Transform50->addChild(*Shape51);

Transform24->addChildren(*Transform50);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setDEF("bubble7");
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{1,1,1});
Material58->setTransparency(0.8);
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CSphere* Sphere59 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere59->setRadius(0.035);
Shape56->setGeometry(Sphere59);

Transform55->addChild(*Shape56);

Transform24->addChildren(*Transform55);

CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
Transform60->setDEF("bubble8");
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setDiffuseColor(new float[3]{1,1,1});
Material63->setTransparency(0.8);
Appearance62->setMaterial(*Material63);

Shape61->setAppearance(*Appearance62);

CSphere* Sphere64 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere64->setRadius(0.05);
Shape61->setGeometry(Sphere64);

Transform60->addChild(*Shape61);

Transform24->addChildren(*Transform60);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setDEF("bubble9");
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance67 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setDiffuseColor(new float[3]{1,1,1});
Material68->setTransparency(0.8);
Appearance67->setMaterial(*Material68);

Shape66->setAppearance(*Appearance67);

CSphere* Sphere69 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere69->setRadius(0.045);
Shape66->setGeometry(Sphere69);

Transform65->addChild(*Shape66);

Transform24->addChildren(*Transform65);

CTransform* Transform70 = (CTransform *)(m_pScene.createNode("Transform"));
Transform70->setDEF("bubble10");
CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance72 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material73 = (CMaterial *)(m_pScene.createNode("Material"));
Material73->setDiffuseColor(new float[3]{1,1,1});
Material73->setTransparency(0.8);
Appearance72->setMaterial(*Material73);

Shape71->setAppearance(*Appearance72);

CSphere* Sphere74 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere74->setRadius(0.035);
Shape71->setGeometry(Sphere74);

Transform70->addChild(*Shape71);

Transform24->addChildren(*Transform70);

Group12->addChildren(*Transform24);

Transform11->addChildren(*Group12);

group->addChildren(*Transform11);

CBackground* Background75 = (CBackground *)(m_pScene.createNode("Background"));
Background75->setSkyColor(new float[3]{0,0,0.6});
group->addChildren(*Background75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromNode("BubbleClock");
ROUTE76->setFromField("fraction_changed");
ROUTE76->setToNode("BubblePath1");
ROUTE76->setToField("set_fraction");
group->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("BubbleClock");
ROUTE77->setFromField("fraction_changed");
ROUTE77->setToNode("BubblePath2");
ROUTE77->setToField("set_fraction");
group->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("BubbleClock");
ROUTE78->setFromField("fraction_changed");
ROUTE78->setToNode("BubblePath3");
ROUTE78->setToField("set_fraction");
group->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromNode("BubbleClock");
ROUTE79->setFromField("fraction_changed");
ROUTE79->setToNode("BubblePath4");
ROUTE79->setToField("set_fraction");
group->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromNode("BubbleClock");
ROUTE80->setFromField("fraction_changed");
ROUTE80->setToNode("BubblePath5");
ROUTE80->setToField("set_fraction");
group->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromNode("BubbleClock");
ROUTE81->setFromField("fraction_changed");
ROUTE81->setToNode("BubblePath6");
ROUTE81->setToField("set_fraction");
group->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromNode("BubbleClock");
ROUTE82->setFromField("fraction_changed");
ROUTE82->setToNode("BubblePath7");
ROUTE82->setToField("set_fraction");
group->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromNode("BubbleClock");
ROUTE83->setFromField("fraction_changed");
ROUTE83->setToNode("BubblePath8");
ROUTE83->setToField("set_fraction");
group->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromNode("BubbleClock");
ROUTE84->setFromField("fraction_changed");
ROUTE84->setToNode("BubblePath9");
ROUTE84->setToField("set_fraction");
group->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("BubbleClock");
ROUTE85->setFromField("fraction_changed");
ROUTE85->setToNode("BubblePath10");
ROUTE85->setToField("set_fraction");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("BubblePath1");
ROUTE86->setFromField("value_changed");
ROUTE86->setToNode("bubble1");
ROUTE86->setToField("translation");
group->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromNode("BubblePath2");
ROUTE87->setFromField("value_changed");
ROUTE87->setToNode("bubble2");
ROUTE87->setToField("translation");
group->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromNode("BubblePath3");
ROUTE88->setFromField("value_changed");
ROUTE88->setToNode("bubble3");
ROUTE88->setToField("translation");
group->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromNode("BubblePath4");
ROUTE89->setFromField("value_changed");
ROUTE89->setToNode("bubble4");
ROUTE89->setToField("translation");
group->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromNode("BubblePath5");
ROUTE90->setFromField("value_changed");
ROUTE90->setToNode("bubble5");
ROUTE90->setToField("translation");
group->addChildren(*ROUTE90);

CROUTE* ROUTE91 = new CROUTE();
ROUTE91->setFromNode("BubblePath6");
ROUTE91->setFromField("value_changed");
ROUTE91->setToNode("bubble6");
ROUTE91->setToField("translation");
group->addChildren(*ROUTE91);

CROUTE* ROUTE92 = new CROUTE();
ROUTE92->setFromNode("BubblePath7");
ROUTE92->setFromField("value_changed");
ROUTE92->setToNode("bubble7");
ROUTE92->setToField("translation");
group->addChildren(*ROUTE92);

CROUTE* ROUTE93 = new CROUTE();
ROUTE93->setFromNode("BubblePath8");
ROUTE93->setFromField("value_changed");
ROUTE93->setToNode("bubble8");
ROUTE93->setToField("translation");
group->addChildren(*ROUTE93);

CROUTE* ROUTE94 = new CROUTE();
ROUTE94->setFromNode("BubblePath9");
ROUTE94->setFromField("value_changed");
ROUTE94->setToNode("bubble9");
ROUTE94->setToField("translation");
group->addChildren(*ROUTE94);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromNode("BubblePath10");
ROUTE95->setFromField("value_changed");
ROUTE95->setToNode("bubble10");
ROUTE95->setToField("translation");
group->addChildren(*ROUTE95);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
