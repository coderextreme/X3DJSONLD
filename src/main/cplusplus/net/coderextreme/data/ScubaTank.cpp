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
meta2->setContent("ScubaTank.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Scuba gear used by Nancy Diving example.");
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
meta7->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d");
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
WorldInfo11->setTitle("ScubaTank.x3d");
Scene10->addChild(WorldInfo11);

Transform* Transform12 = new Transform();
Transform12->setDEF("ScubaTank");
Transform* Transform13 = new Transform();
Shape* Shape14 = new Shape();
Appearance* Appearance15 = new Appearance();
Material* Material16 = new Material();
Material16->setDEF("tank");
Material16->setAmbientIntensity(0.3);
Material16->setDiffuseColor(new float[3]{0.3,0.3,0.5});
Material16->setShininess(0.1);
Material16->setSpecularColor(new float[3]{0.7,0.7,0.8});
Appearance15->setMaterial(Material16);

Shape14->setAppearance(Appearance15);

Cylinder* Cylinder17 = new Cylinder();
Cylinder17->setHeight(0.7);
Cylinder17->setRadius(0.1);
Shape14->setGeometry(Cylinder17);

Transform13->addChild(Shape14);

Transform12->addChild(Transform13);

Transform* Transform18 = new Transform();
Transform18->setTranslation(new float[3]{0,0.35,0});
Shape* Shape19 = new Shape();
Appearance* Appearance20 = new Appearance();
Material* Material21 = new Material();
Material21->setUSE("tank");
Appearance20->setMaterial(Material21);

Shape19->setAppearance(Appearance20);

Sphere* Sphere22 = new Sphere();
Sphere22->setRadius(0.098);
Shape19->setGeometry(Sphere22);

Transform18->addChild(Shape19);

Transform12->addChild(Transform18);

Transform* Transform23 = new Transform();
Transform23->setTranslation(new float[3]{0,-0.35,0});
Shape* Shape24 = new Shape();
Shape24->setDEF("tankBottom");
Appearance* Appearance25 = new Appearance();
Material* Material26 = new Material();
Material26->setDEF("black");
Material26->setAmbientIntensity(0.3);
Material26->setDiffuseColor(new float[3]{0,0,0});
Appearance25->setMaterial(Material26);

Shape24->setAppearance(Appearance25);

Cylinder* Cylinder27 = new Cylinder();
Cylinder27->setHeight(0.06);
Cylinder27->setRadius(0.115);
Shape24->setGeometry(Cylinder27);

Transform23->addChild(Shape24);

Transform12->addChild(Transform23);

Group* Group28 = new Group();
Group28->setDEF("tankNozzle");
Transform* Transform29 = new Transform();
Transform* Transform30 = new Transform();
Transform30->setTranslation(new float[3]{0,0.45,0});
Shape* Shape31 = new Shape();
Shape31->setDEF("pressure");
Appearance* Appearance32 = new Appearance();
Material* Material33 = new Material();
Material33->setDEF("pressureColor");
Material33->setAmbientIntensity(0.4);
Material33->setDiffuseColor(new float[3]{0.91,0.91,0.91});
Material33->setShininess(0.16);
Material33->setSpecularColor(new float[3]{0.91,0.9,0.91});
Appearance32->setMaterial(Material33);

Shape31->setAppearance(Appearance32);

Cylinder* Cylinder34 = new Cylinder();
Cylinder34->setHeight(0.1);
Cylinder34->setRadius(0.015);
Shape31->setGeometry(Cylinder34);

Transform30->addChild(Shape31);

Transform29->addChild(Transform30);

Transform* Transform35 = new Transform();
Transform35->setTranslation(new float[3]{0,0.5,0});
Shape* Shape36 = new Shape();
Shape36->setDEF("pressureTop");
Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Material38->setUSE("black");
Appearance37->setMaterial(Material38);

Shape36->setAppearance(Appearance37);

Cylinder* Cylinder39 = new Cylinder();
Cylinder39->setHeight(0.02);
Cylinder39->setRadius(0.025);
Shape36->setGeometry(Cylinder39);

Transform35->addChild(Shape36);

Transform29->addChild(Transform35);

Transform* Transform40 = new Transform();
Transform40->setRotation(new float[4]{0,0,1,1.57});
Transform40->setTranslation(new float[3]{-0.028,0.462,0});
Transform* Transform41 = new Transform();
Shape* Shape42 = new Shape();
Shape42->setDEF("connectorToRegulator");
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setUSE("pressureColor");
Appearance43->setMaterial(Material44);

Shape42->setAppearance(Appearance43);

Cylinder* Cylinder45 = new Cylinder();
Cylinder45->setHeight(0.03);
Cylinder45->setRadius(0.01);
Shape42->setGeometry(Cylinder45);

Transform41->addChild(Shape42);

Transform40->addChild(Transform41);

Transform* Transform46 = new Transform();
Transform46->setTranslation(new float[3]{0,0.02,0});
Shape* Shape47 = new Shape();
Shape47->setDEF("connectorToRegulatorTop");
Appearance* Appearance48 = new Appearance();
Material* Material49 = new Material();
Material49->setUSE("black");
Appearance48->setMaterial(Material49);

Shape47->setAppearance(Appearance48);

Cylinder* Cylinder50 = new Cylinder();
Cylinder50->setHeight(0.02);
Cylinder50->setRadius(0.02);
Shape47->setGeometry(Cylinder50);

Transform46->addChild(Shape47);

Transform40->addChild(Transform46);

Transform29->addChild(Transform40);

Group28->addChild(Transform29);

Transform12->addChild(Group28);

Transform* Transform51 = new Transform();
Transform51->setTranslation(new float[3]{0,0.2,0});
Shape* Shape52 = new Shape();
Shape52->setDEF("tankHoldBelt");
Appearance* Appearance53 = new Appearance();
Material* Material54 = new Material();
Material54->setUSE("black");
Appearance53->setMaterial(Material54);

Shape52->setAppearance(Appearance53);

Cylinder* Cylinder55 = new Cylinder();
Cylinder55->setHeight(0.1);
Cylinder55->setRadius(0.115);
Shape52->setGeometry(Cylinder55);

Transform51->addChild(Shape52);

Transform12->addChild(Transform51);

Scene10->addChild(Transform12);

Background* Background56 = new Background();
Background56->setSkyColor(new float[3]{0.6,0.6,0.6});
Scene10->addChild(Background56);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
