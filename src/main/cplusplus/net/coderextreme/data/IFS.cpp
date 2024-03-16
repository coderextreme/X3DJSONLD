#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("HAnim"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("IFS.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("description"));
meta5->setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("generator"));
meta6->setContent(CString("h2.pl"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("modified"));
meta7->setContent(CString("18 Jan 2023"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("creator"));
meta8->setContent(CString("John Carlson"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("created"));
meta9->setContent(CString("9 November 2020"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("license"));
meta10->setContent(CString("../license.html"));
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Group* Group12 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform13 = new Transform();
Transform13->setTranslation(new float[3]{0,2.1,0});
Shape* Shape14 = new Shape();
Shape14->setDEF(CString("HAnimSiteShape"));
IndexedFaceSet* IndexedFaceSet15 = new IndexedFaceSet();
IndexedFaceSet15->setDEF(CString("DiamondIFS"));
IndexedFaceSet15->setCreaseAngle(0.5);
IndexedFaceSet15->setSolid(False);
IndexedFaceSet15->setCoordIndex(new int32_t[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA* ColorRGBA16 = new ColorRGBA();
ColorRGBA16->setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA16->setColor(new float[8]{1,1,0,1,1,1,0,0.1}, 8);
IndexedFaceSet15->addChild(ColorRGBA16);

Coordinate* Coordinate17 = new Coordinate();
Coordinate17->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet15->addChild(Coordinate17);

Shape14->setGeometry(IndexedFaceSet15);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Material19->setDiffuseColor(new float[3]{1,1,0});
Material19->setTransparency(0.3);
Appearance18->addChild(Material19);

Shape14->addChild(Appearance18);

Transform13->addChild(Shape14);

Group12->addChild(Transform13);

Scene11->addChild(Group12);

NavigationInfo* NavigationInfo20 = new NavigationInfo();
NavigationInfo20->setSpeed(1.5);
Scene11->addChild(NavigationInfo20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDescription(CString("default"));
Scene11->addChild(Viewpoint21);

X3D0->setScene(Scene11);

}
