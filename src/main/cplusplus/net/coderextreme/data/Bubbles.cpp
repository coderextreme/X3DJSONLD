/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Interchange");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("Bubbles.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Bubble animation used by Nancy Diving example.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("24 January 2001");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("identifier");
meta7->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("generator");
meta8->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("license");
meta9->setContent("../license.html");
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
WorldInfo* WorldInfo11 = new WorldInfo();
WorldInfo11->setTitle("Bubbles.x3d");
Scene10->addChild(WorldInfo11);

Transform* Transform12 = new Transform();
Transform12->setDEF("Bubbles");
Group* Group13 = new Group();
Group13->setDEF("Bubble");
TimeSensor* TimeSensor14 = new TimeSensor();
TimeSensor14->setDEF("BubbleClock");
TimeSensor14->setCycleInterval(6);
TimeSensor14->setLoop(True);
Group13->addChild(TimeSensor14);

PositionInterpolator* PositionInterpolator15 = new PositionInterpolator();
PositionInterpolator15->setDEF("BubblePath1");
PositionInterpolator15->setKey(new float[5]{0,0.5,0.8,0.9,1}, 5);
PositionInterpolator15->setKeyValue(new float[15]{0,0,0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509});
Group13->addChild(PositionInterpolator15);

PositionInterpolator* PositionInterpolator16 = new PositionInterpolator();
PositionInterpolator16->setDEF("BubblePath2");
PositionInterpolator16->setKey(new float[5]{0,0.3,0.64,0.85,1}, 5);
PositionInterpolator16->setKeyValue(new float[15]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373});
Group13->addChild(PositionInterpolator16);

PositionInterpolator* PositionInterpolator17 = new PositionInterpolator();
PositionInterpolator17->setDEF("BubblePath3");
PositionInterpolator17->setKey(new float[5]{0,0.1,0.45,0.7,1}, 5);
PositionInterpolator17->setKeyValue(new float[15]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734});
Group13->addChild(PositionInterpolator17);

PositionInterpolator* PositionInterpolator18 = new PositionInterpolator();
PositionInterpolator18->setDEF("BubblePath4");
PositionInterpolator18->setKey(new float[5]{0,0.5,0.6,0.8,1}, 5);
PositionInterpolator18->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349});
Group13->addChild(PositionInterpolator18);

PositionInterpolator* PositionInterpolator19 = new PositionInterpolator();
PositionInterpolator19->setDEF("BubblePath5");
PositionInterpolator19->setKey(new float[5]{0,0.25,0.35,0.65,1}, 5);
PositionInterpolator19->setKeyValue(new float[15]{0,0,0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1});
Group13->addChild(PositionInterpolator19);

PositionInterpolator* PositionInterpolator20 = new PositionInterpolator();
PositionInterpolator20->setDEF("BubblePath6");
PositionInterpolator20->setKey(new float[5]{0,0.15,0.22235,0.55565,1}, 5);
PositionInterpolator20->setKeyValue(new float[15]{0,0,0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14});
Group13->addChild(PositionInterpolator20);

PositionInterpolator* PositionInterpolator21 = new PositionInterpolator();
PositionInterpolator21->setDEF("BubblePath7");
PositionInterpolator21->setKey(new float[5]{0,0.2425,0.4535,0.6775,1}, 5);
PositionInterpolator21->setKeyValue(new float[15]{0,0,0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12});
Group13->addChild(PositionInterpolator21);

PositionInterpolator* PositionInterpolator22 = new PositionInterpolator();
PositionInterpolator22->setDEF("BubblePath8");
PositionInterpolator22->setKey(new float[5]{0,0.1125,0.5535,0.97865,1}, 5);
PositionInterpolator22->setKeyValue(new float[15]{0,0,0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86});
Group13->addChild(PositionInterpolator22);

PositionInterpolator* PositionInterpolator23 = new PositionInterpolator();
PositionInterpolator23->setDEF("BubblePath9");
PositionInterpolator23->setKey(new float[5]{0,0.0025,0.035,0.65,1}, 5);
PositionInterpolator23->setKeyValue(new float[15]{0,0,0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2,0.1545});
Group13->addChild(PositionInterpolator23);

PositionInterpolator* PositionInterpolator24 = new PositionInterpolator();
PositionInterpolator24->setDEF("BubblePath10");
PositionInterpolator24->setKey(new float[5]{0,0.00025,0.035,0.6895,1}, 5);
PositionInterpolator24->setKeyValue(new float[15]{0,0,0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1,1,0.1});
Group13->addChild(PositionInterpolator24);

Transform* Transform25 = new Transform();
Transform* Transform26 = new Transform();
Transform26->setDEF("bubble1");
Shape* Shape27 = new Shape();
Appearance* Appearance28 = new Appearance();
Material* Material29 = new Material();
Material29->setDiffuseColor(new float[3]{1,1,1});
Material29->setTransparency(0.8);
Appearance28->setMaterial(Material29);

Shape27->setAppearance(Appearance28);

Sphere* Sphere30 = new Sphere();
Sphere30->setRadius(0.025);
Shape27->setGeometry(Sphere30);

Transform26->addChild(Shape27);

Transform25->addChild(Transform26);

Transform* Transform31 = new Transform();
Transform31->setDEF("bubble2");
Shape* Shape32 = new Shape();
Appearance* Appearance33 = new Appearance();
Material* Material34 = new Material();
Material34->setDiffuseColor(new float[3]{1,1,1});
Material34->setTransparency(0.8);
Appearance33->setMaterial(Material34);

Shape32->setAppearance(Appearance33);

Sphere* Sphere35 = new Sphere();
Sphere35->setRadius(0.055);
Shape32->setGeometry(Sphere35);

Transform31->addChild(Shape32);

Transform25->addChild(Transform31);

Transform* Transform36 = new Transform();
Transform36->setDEF("bubble3");
Shape* Shape37 = new Shape();
Appearance* Appearance38 = new Appearance();
Material* Material39 = new Material();
Material39->setDiffuseColor(new float[3]{1,1,1});
Material39->setTransparency(0.8);
Appearance38->setMaterial(Material39);

Shape37->setAppearance(Appearance38);

Sphere* Sphere40 = new Sphere();
Sphere40->setRadius(0.065);
Shape37->setGeometry(Sphere40);

Transform36->addChild(Shape37);

Transform25->addChild(Transform36);

Transform* Transform41 = new Transform();
Transform41->setDEF("bubble4");
Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setDiffuseColor(new float[3]{1,1,1});
Material44->setTransparency(0.8);
Appearance43->setMaterial(Material44);

Shape42->setAppearance(Appearance43);

Sphere* Sphere45 = new Sphere();
Sphere45->setRadius(0.015);
Shape42->setGeometry(Sphere45);

Transform41->addChild(Shape42);

Transform25->addChild(Transform41);

Transform* Transform46 = new Transform();
Transform46->setDEF("bubble5");
Shape* Shape47 = new Shape();
Appearance* Appearance48 = new Appearance();
Material* Material49 = new Material();
Material49->setDiffuseColor(new float[3]{1,1,1});
Material49->setTransparency(0.8);
Appearance48->setMaterial(Material49);

Shape47->setAppearance(Appearance48);

Sphere* Sphere50 = new Sphere();
Sphere50->setRadius(0.075);
Shape47->setGeometry(Sphere50);

Transform46->addChild(Shape47);

Transform25->addChild(Transform46);

Transform* Transform51 = new Transform();
Transform51->setDEF("bubble6");
Shape* Shape52 = new Shape();
Appearance* Appearance53 = new Appearance();
Material* Material54 = new Material();
Material54->setDiffuseColor(new float[3]{1,1,1});
Material54->setTransparency(0.8);
Appearance53->setMaterial(Material54);

Shape52->setAppearance(Appearance53);

Sphere* Sphere55 = new Sphere();
Sphere55->setRadius(0.005);
Shape52->setGeometry(Sphere55);

Transform51->addChild(Shape52);

Transform25->addChild(Transform51);

Transform* Transform56 = new Transform();
Transform56->setDEF("bubble7");
Shape* Shape57 = new Shape();
Appearance* Appearance58 = new Appearance();
Material* Material59 = new Material();
Material59->setDiffuseColor(new float[3]{1,1,1});
Material59->setTransparency(0.8);
Appearance58->setMaterial(Material59);

Shape57->setAppearance(Appearance58);

Sphere* Sphere60 = new Sphere();
Sphere60->setRadius(0.035);
Shape57->setGeometry(Sphere60);

Transform56->addChild(Shape57);

Transform25->addChild(Transform56);

Transform* Transform61 = new Transform();
Transform61->setDEF("bubble8");
Shape* Shape62 = new Shape();
Appearance* Appearance63 = new Appearance();
Material* Material64 = new Material();
Material64->setDiffuseColor(new float[3]{1,1,1});
Material64->setTransparency(0.8);
Appearance63->setMaterial(Material64);

Shape62->setAppearance(Appearance63);

Sphere* Sphere65 = new Sphere();
Sphere65->setRadius(0.05);
Shape62->setGeometry(Sphere65);

Transform61->addChild(Shape62);

Transform25->addChild(Transform61);

Transform* Transform66 = new Transform();
Transform66->setDEF("bubble9");
Shape* Shape67 = new Shape();
Appearance* Appearance68 = new Appearance();
Material* Material69 = new Material();
Material69->setDiffuseColor(new float[3]{1,1,1});
Material69->setTransparency(0.8);
Appearance68->setMaterial(Material69);

Shape67->setAppearance(Appearance68);

Sphere* Sphere70 = new Sphere();
Sphere70->setRadius(0.045);
Shape67->setGeometry(Sphere70);

Transform66->addChild(Shape67);

Transform25->addChild(Transform66);

Transform* Transform71 = new Transform();
Transform71->setDEF("bubble10");
Shape* Shape72 = new Shape();
Appearance* Appearance73 = new Appearance();
Material* Material74 = new Material();
Material74->setDiffuseColor(new float[3]{1,1,1});
Material74->setTransparency(0.8);
Appearance73->setMaterial(Material74);

Shape72->setAppearance(Appearance73);

Sphere* Sphere75 = new Sphere();
Sphere75->setRadius(0.035);
Shape72->setGeometry(Sphere75);

Transform71->addChild(Shape72);

Transform25->addChild(Transform71);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromField("fraction_changed");
ROUTE76->setFromNode("BubbleClock");
ROUTE76->setToField("set_fraction");
ROUTE76->setToNode("BubblePath1");
Transform25->addChild(ROUTE76);

ROUTE* ROUTE77 = new ROUTE();
ROUTE77->setFromField("fraction_changed");
ROUTE77->setFromNode("BubbleClock");
ROUTE77->setToField("set_fraction");
ROUTE77->setToNode("BubblePath2");
Transform25->addChild(ROUTE77);

ROUTE* ROUTE78 = new ROUTE();
ROUTE78->setFromField("fraction_changed");
ROUTE78->setFromNode("BubbleClock");
ROUTE78->setToField("set_fraction");
ROUTE78->setToNode("BubblePath3");
Transform25->addChild(ROUTE78);

ROUTE* ROUTE79 = new ROUTE();
ROUTE79->setFromField("fraction_changed");
ROUTE79->setFromNode("BubbleClock");
ROUTE79->setToField("set_fraction");
ROUTE79->setToNode("BubblePath4");
Transform25->addChild(ROUTE79);

ROUTE* ROUTE80 = new ROUTE();
ROUTE80->setFromField("fraction_changed");
ROUTE80->setFromNode("BubbleClock");
ROUTE80->setToField("set_fraction");
ROUTE80->setToNode("BubblePath5");
Transform25->addChild(ROUTE80);

ROUTE* ROUTE81 = new ROUTE();
ROUTE81->setFromField("fraction_changed");
ROUTE81->setFromNode("BubbleClock");
ROUTE81->setToField("set_fraction");
ROUTE81->setToNode("BubblePath6");
Transform25->addChild(ROUTE81);

ROUTE* ROUTE82 = new ROUTE();
ROUTE82->setFromField("fraction_changed");
ROUTE82->setFromNode("BubbleClock");
ROUTE82->setToField("set_fraction");
ROUTE82->setToNode("BubblePath7");
Transform25->addChild(ROUTE82);

ROUTE* ROUTE83 = new ROUTE();
ROUTE83->setFromField("fraction_changed");
ROUTE83->setFromNode("BubbleClock");
ROUTE83->setToField("set_fraction");
ROUTE83->setToNode("BubblePath8");
Transform25->addChild(ROUTE83);

ROUTE* ROUTE84 = new ROUTE();
ROUTE84->setFromField("fraction_changed");
ROUTE84->setFromNode("BubbleClock");
ROUTE84->setToField("set_fraction");
ROUTE84->setToNode("BubblePath9");
Transform25->addChild(ROUTE84);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromField("fraction_changed");
ROUTE85->setFromNode("BubbleClock");
ROUTE85->setToField("set_fraction");
ROUTE85->setToNode("BubblePath10");
Transform25->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromField("value_changed");
ROUTE86->setFromNode("BubblePath1");
ROUTE86->setToField("set_translation");
ROUTE86->setToNode("bubble1");
Transform25->addChild(ROUTE86);

ROUTE* ROUTE87 = new ROUTE();
ROUTE87->setFromField("value_changed");
ROUTE87->setFromNode("BubblePath2");
ROUTE87->setToField("set_translation");
ROUTE87->setToNode("bubble2");
Transform25->addChild(ROUTE87);

ROUTE* ROUTE88 = new ROUTE();
ROUTE88->setFromField("value_changed");
ROUTE88->setFromNode("BubblePath3");
ROUTE88->setToField("set_translation");
ROUTE88->setToNode("bubble3");
Transform25->addChild(ROUTE88);

ROUTE* ROUTE89 = new ROUTE();
ROUTE89->setFromField("value_changed");
ROUTE89->setFromNode("BubblePath4");
ROUTE89->setToField("set_translation");
ROUTE89->setToNode("bubble4");
Transform25->addChild(ROUTE89);

ROUTE* ROUTE90 = new ROUTE();
ROUTE90->setFromField("value_changed");
ROUTE90->setFromNode("BubblePath5");
ROUTE90->setToField("set_translation");
ROUTE90->setToNode("bubble5");
Transform25->addChild(ROUTE90);

ROUTE* ROUTE91 = new ROUTE();
ROUTE91->setFromField("value_changed");
ROUTE91->setFromNode("BubblePath6");
ROUTE91->setToField("set_translation");
ROUTE91->setToNode("bubble6");
Transform25->addChild(ROUTE91);

ROUTE* ROUTE92 = new ROUTE();
ROUTE92->setFromField("value_changed");
ROUTE92->setFromNode("BubblePath7");
ROUTE92->setToField("set_translation");
ROUTE92->setToNode("bubble7");
Transform25->addChild(ROUTE92);

ROUTE* ROUTE93 = new ROUTE();
ROUTE93->setFromField("value_changed");
ROUTE93->setFromNode("BubblePath8");
ROUTE93->setToField("set_translation");
ROUTE93->setToNode("bubble8");
Transform25->addChild(ROUTE93);

ROUTE* ROUTE94 = new ROUTE();
ROUTE94->setFromField("value_changed");
ROUTE94->setFromNode("BubblePath9");
ROUTE94->setToField("set_translation");
ROUTE94->setToNode("bubble9");
Transform25->addChild(ROUTE94);

ROUTE* ROUTE95 = new ROUTE();
ROUTE95->setFromField("value_changed");
ROUTE95->setFromNode("BubblePath10");
ROUTE95->setToField("set_translation");
ROUTE95->setToNode("bubble10");
Transform25->addChild(ROUTE95);

Group13->addChild(Transform25);

Transform12->addChild(Group13);

Scene10->addChild(Transform12);

Background* Background96 = new Background();
Background96->setSkyColor(new float[3]{0,0,0.6});
Scene10->addChild(Background96);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
