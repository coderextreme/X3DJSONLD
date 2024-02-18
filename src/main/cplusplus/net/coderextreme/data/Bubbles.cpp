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
X3D0->setVersion("3.3");
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

Cmeta* meta9 = new Cmeta();
meta9->setName("license");
meta9->setContent("../license.html");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CWorldInfo* WorldInfo11 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo11->setTitle("Bubbles.x3d");
group->addChildren(*WorldInfo11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("Bubbles");
CGroup* Group13 = (CGroup *)(m_pScene.createNode("Group"));
Group13->setDEF("Bubble");
CTimeSensor* TimeSensor14 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor14->setDEF("BubbleClock");
TimeSensor14->setCycleInterval(6);
TimeSensor14->setLoop(True);
Group13->addChildren(*TimeSensor14);

CPositionInterpolator* PositionInterpolator15 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator15->setDEF("BubblePath1");
PositionInterpolator15->setKey(new float[5]{0,0.5,0.8,0.9,1}, 5);
PositionInterpolator15->setKeyValue(new float[15]{0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509});
Group13->addChildren(*PositionInterpolator15);

CPositionInterpolator* PositionInterpolator16 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator16->setDEF("BubblePath2");
PositionInterpolator16->setKey(new float[5]{0,0.3,0.64,0.85,1}, 5);
PositionInterpolator16->setKeyValue(new float[15]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373});
Group13->addChildren(*PositionInterpolator16);

CPositionInterpolator* PositionInterpolator17 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator17->setDEF("BubblePath3");
PositionInterpolator17->setKey(new float[5]{0,0.1,0.45,0.7,1}, 5);
PositionInterpolator17->setKeyValue(new float[15]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734});
Group13->addChildren(*PositionInterpolator17);

CPositionInterpolator* PositionInterpolator18 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator18->setDEF("BubblePath4");
PositionInterpolator18->setKey(new float[5]{0,0.5,0.6,0.8,1}, 5);
PositionInterpolator18->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349});
Group13->addChildren(*PositionInterpolator18);

CPositionInterpolator* PositionInterpolator19 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator19->setDEF("BubblePath5");
PositionInterpolator19->setKey(new float[5]{0,0.25,0.35,0.65,1}, 5);
PositionInterpolator19->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1});
Group13->addChildren(*PositionInterpolator19);

CPositionInterpolator* PositionInterpolator20 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator20->setDEF("BubblePath6");
PositionInterpolator20->setKey(new float[5]{0,0.15,0.22235,0.55565,1}, 5);
PositionInterpolator20->setKeyValue(new float[15]{0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14});
Group13->addChildren(*PositionInterpolator20);

CPositionInterpolator* PositionInterpolator21 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator21->setDEF("BubblePath7");
PositionInterpolator21->setKey(new float[5]{0,0.2425,0.4535,0.6775,1}, 5);
PositionInterpolator21->setKeyValue(new float[15]{0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12});
Group13->addChildren(*PositionInterpolator21);

CPositionInterpolator* PositionInterpolator22 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator22->setDEF("BubblePath8");
PositionInterpolator22->setKey(new float[5]{0,0.1125,0.5535,0.97865,1}, 5);
PositionInterpolator22->setKeyValue(new float[15]{0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86});
Group13->addChildren(*PositionInterpolator22);

CPositionInterpolator* PositionInterpolator23 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator23->setDEF("BubblePath9");
PositionInterpolator23->setKey(new float[5]{0,0.0025,0.035,0.65,1}, 5);
PositionInterpolator23->setKeyValue(new float[15]{0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545});
Group13->addChildren(*PositionInterpolator23);

CPositionInterpolator* PositionInterpolator24 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator24->setDEF("BubblePath10");
PositionInterpolator24->setKey(new float[5]{0,0.00025,0.035,0.6895,1}, 5);
PositionInterpolator24->setKeyValue(new float[15]{0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1});
Group13->addChildren(*PositionInterpolator24);

CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("bubble1");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{1,1,1});
Material29->setTransparency(0.8);
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CSphere* Sphere30 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere30->setRadius(0.025);
Shape27->setGeometry(Sphere30);

Transform26->addChild(*Shape27);

Transform25->addChildren(*Transform26);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setDEF("bubble2");
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{1,1,1});
Material34->setTransparency(0.8);
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(0.055);
Shape32->setGeometry(Sphere35);

Transform31->addChild(*Shape32);

Transform25->addChildren(*Transform31);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("bubble3");
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material39 = (CMaterial *)(m_pScene.createNode("Material"));
Material39->setDiffuseColor(new float[3]{1,1,1});
Material39->setTransparency(0.8);
Appearance38->setMaterial(*Material39);

Shape37->setAppearance(*Appearance38);

CSphere* Sphere40 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere40->setRadius(0.065);
Shape37->setGeometry(Sphere40);

Transform36->addChild(*Shape37);

Transform25->addChildren(*Transform36);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("bubble4");
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setDiffuseColor(new float[3]{1,1,1});
Material44->setTransparency(0.8);
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CSphere* Sphere45 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere45->setRadius(0.015);
Shape42->setGeometry(Sphere45);

Transform41->addChild(*Shape42);

Transform25->addChildren(*Transform41);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("bubble5");
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setDiffuseColor(new float[3]{1,1,1});
Material49->setTransparency(0.8);
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere50->setRadius(0.075);
Shape47->setGeometry(Sphere50);

Transform46->addChild(*Shape47);

Transform25->addChildren(*Transform46);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setDEF("bubble6");
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setDiffuseColor(new float[3]{1,1,1});
Material54->setTransparency(0.8);
Appearance53->setMaterial(*Material54);

Shape52->setAppearance(*Appearance53);

CSphere* Sphere55 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere55->setRadius(0.005);
Shape52->setGeometry(Sphere55);

Transform51->addChild(*Shape52);

Transform25->addChildren(*Transform51);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setDEF("bubble7");
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setDiffuseColor(new float[3]{1,1,1});
Material59->setTransparency(0.8);
Appearance58->setMaterial(*Material59);

Shape57->setAppearance(*Appearance58);

CSphere* Sphere60 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere60->setRadius(0.035);
Shape57->setGeometry(Sphere60);

Transform56->addChild(*Shape57);

Transform25->addChildren(*Transform56);

CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setDEF("bubble8");
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setDiffuseColor(new float[3]{1,1,1});
Material64->setTransparency(0.8);
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CSphere* Sphere65 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere65->setRadius(0.05);
Shape62->setGeometry(Sphere65);

Transform61->addChild(*Shape62);

Transform25->addChildren(*Transform61);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setDEF("bubble9");
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material69 = (CMaterial *)(m_pScene.createNode("Material"));
Material69->setDiffuseColor(new float[3]{1,1,1});
Material69->setTransparency(0.8);
Appearance68->setMaterial(*Material69);

Shape67->setAppearance(*Appearance68);

CSphere* Sphere70 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere70->setRadius(0.045);
Shape67->setGeometry(Sphere70);

Transform66->addChild(*Shape67);

Transform25->addChildren(*Transform66);

CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setDEF("bubble10");
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance73 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material74 = (CMaterial *)(m_pScene.createNode("Material"));
Material74->setDiffuseColor(new float[3]{1,1,1});
Material74->setTransparency(0.8);
Appearance73->setMaterial(*Material74);

Shape72->setAppearance(*Appearance73);

CSphere* Sphere75 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere75->setRadius(0.035);
Shape72->setGeometry(Sphere75);

Transform71->addChild(*Shape72);

Transform25->addChildren(*Transform71);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("fraction_changed");
ROUTE76->setFromNode("BubbleClock");
ROUTE76->setToField("set_fraction");
ROUTE76->setToNode("BubblePath1");
Transform25->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("fraction_changed");
ROUTE77->setFromNode("BubbleClock");
ROUTE77->setToField("set_fraction");
ROUTE77->setToNode("BubblePath2");
Transform25->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromField("fraction_changed");
ROUTE78->setFromNode("BubbleClock");
ROUTE78->setToField("set_fraction");
ROUTE78->setToNode("BubblePath3");
Transform25->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromField("fraction_changed");
ROUTE79->setFromNode("BubbleClock");
ROUTE79->setToField("set_fraction");
ROUTE79->setToNode("BubblePath4");
Transform25->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromField("fraction_changed");
ROUTE80->setFromNode("BubbleClock");
ROUTE80->setToField("set_fraction");
ROUTE80->setToNode("BubblePath5");
Transform25->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromField("fraction_changed");
ROUTE81->setFromNode("BubbleClock");
ROUTE81->setToField("set_fraction");
ROUTE81->setToNode("BubblePath6");
Transform25->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromField("fraction_changed");
ROUTE82->setFromNode("BubbleClock");
ROUTE82->setToField("set_fraction");
ROUTE82->setToNode("BubblePath7");
Transform25->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromField("fraction_changed");
ROUTE83->setFromNode("BubbleClock");
ROUTE83->setToField("set_fraction");
ROUTE83->setToNode("BubblePath8");
Transform25->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromField("fraction_changed");
ROUTE84->setFromNode("BubbleClock");
ROUTE84->setToField("set_fraction");
ROUTE84->setToNode("BubblePath9");
Transform25->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromField("fraction_changed");
ROUTE85->setFromNode("BubbleClock");
ROUTE85->setToField("set_fraction");
ROUTE85->setToNode("BubblePath10");
Transform25->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromField("value_changed");
ROUTE86->setFromNode("BubblePath1");
ROUTE86->setToField("set_translation");
ROUTE86->setToNode("bubble1");
Transform25->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromField("value_changed");
ROUTE87->setFromNode("BubblePath2");
ROUTE87->setToField("set_translation");
ROUTE87->setToNode("bubble2");
Transform25->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromField("value_changed");
ROUTE88->setFromNode("BubblePath3");
ROUTE88->setToField("set_translation");
ROUTE88->setToNode("bubble3");
Transform25->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromField("value_changed");
ROUTE89->setFromNode("BubblePath4");
ROUTE89->setToField("set_translation");
ROUTE89->setToNode("bubble4");
Transform25->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromField("value_changed");
ROUTE90->setFromNode("BubblePath5");
ROUTE90->setToField("set_translation");
ROUTE90->setToNode("bubble5");
Transform25->addChildren(*ROUTE90);

CROUTE* ROUTE91 = new CROUTE();
ROUTE91->setFromField("value_changed");
ROUTE91->setFromNode("BubblePath6");
ROUTE91->setToField("set_translation");
ROUTE91->setToNode("bubble6");
Transform25->addChildren(*ROUTE91);

CROUTE* ROUTE92 = new CROUTE();
ROUTE92->setFromField("value_changed");
ROUTE92->setFromNode("BubblePath7");
ROUTE92->setToField("set_translation");
ROUTE92->setToNode("bubble7");
Transform25->addChildren(*ROUTE92);

CROUTE* ROUTE93 = new CROUTE();
ROUTE93->setFromField("value_changed");
ROUTE93->setFromNode("BubblePath8");
ROUTE93->setToField("set_translation");
ROUTE93->setToNode("bubble8");
Transform25->addChildren(*ROUTE93);

CROUTE* ROUTE94 = new CROUTE();
ROUTE94->setFromField("value_changed");
ROUTE94->setFromNode("BubblePath9");
ROUTE94->setToField("set_translation");
ROUTE94->setToNode("bubble9");
Transform25->addChildren(*ROUTE94);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromField("value_changed");
ROUTE95->setFromNode("BubblePath10");
ROUTE95->setToField("set_translation");
ROUTE95->setToNode("bubble10");
Transform25->addChildren(*ROUTE95);

Group13->addChildren(*Transform25);

Transform12->addChildren(*Group13);

group->addChildren(*Transform12);

CBackground* Background96 = (CBackground *)(m_pScene.createNode("Background"));
Background96->setSkyColor(new float[3]{0,0,0.6});
group->addChildren(*Background96);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
