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
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("IFS.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("18 Jan 2023");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Group* Group12 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform13 = new Transform();
Transform13->setTranslation(new float[3]{0,2.1,0});
Shape* Shape14 = new Shape();
Shape14->setDEF("HAnimSiteShape");
IndexedFaceSet* IndexedFaceSet15 = new IndexedFaceSet();
IndexedFaceSet15->setDEF("DiamondIFS");
IndexedFaceSet15->setCreaseAngle(0.5);
IndexedFaceSet15->setSolid(False);
IndexedFaceSet15->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
ColorRGBA* ColorRGBA16 = new ColorRGBA();
ColorRGBA16->setDEF("HAnimSiteColorRGBA");
ColorRGBA16->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
IndexedFaceSet15->setColor(ColorRGBA16);

Coordinate* Coordinate17 = new Coordinate();
Coordinate17->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet15->setCoord(Coordinate17);

Shape14->setGeometry(IndexedFaceSet15);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Material19->setDiffuseColor(new float[3]{1,1,0});
Material19->setTransparency(0.3);
Appearance18->setMaterial(Material19);

Shape14->setAppearance(Appearance18);

Transform13->addChild(Shape14);

Group12->addChild(Transform13);

Scene11->addChild(Group12);

NavigationInfo* NavigationInfo20 = new NavigationInfo();
NavigationInfo20->setSpeed(1.5);
Scene11->addChild(NavigationInfo20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDescription("default");
Scene11->addChild(Viewpoint21);

X3D0->setScene(Scene11);

X3D0->toXMLString();
}
