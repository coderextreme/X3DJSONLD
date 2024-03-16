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
meta3->setContent("JohnJoint.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("h6.pl");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("creator");
meta7->setContent("John Carlson");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("created");
meta8->setContent("12 January 2023");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("license");
meta9->setContent("../license.html");
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
Transform* Transform11 = new Transform();
//DEF for markerfor XYZ axes
Shape* Shape12 = new Shape();
Shape12->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet13 = new IndexedLineSet();
IndexedLineSet13->setColorIndex(new int[3]{0,1,2});
IndexedLineSet13->setColorPerVertex(False);
IndexedLineSet13->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
Coordinate* Coordinate14 = new Coordinate();
Coordinate14->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet13->setCoord(Coordinate14);

Color* Color15 = new Color();
Color15->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet13->setColor(Color15);

Shape12->setGeometry(IndexedLineSet13);

Transform11->addChild(Shape12);

Scene10->addChild(Transform11);

Group* Group16 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform17 = new Transform();
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform* Transform18 = new Transform();
Transform18->setTranslation(new float[3]{0,2.1,0});
Shape* Shape19 = new Shape();
Shape19->setDEF("HAnimJointShape");
Sphere* Sphere20 = new Sphere();
Sphere20->setRadius(0.02);
Shape19->setGeometry(Sphere20);

Appearance* Appearance21 = new Appearance();
Material* Material22 = new Material();
Material22->setDEF("HAnimJointMaterial");
Material22->setDiffuseColor(new float[3]{0,0,0.8});
Material22->setTransparency(0.3);
Appearance21->setMaterial(Material22);

Shape19->setAppearance(Appearance21);

Transform18->addChild(Shape19);

Transform17->addChild(Transform18);

Transform* Transform23 = new Transform();
Transform23->setTranslation(new float[3]{0,2.05,0});
Shape* Shape24 = new Shape();
Shape24->setDEF("HAnimSegmentLine");
LineSet* LineSet25 = new LineSet();
LineSet25->setVertexCount(new int[1]{2});
ColorRGBA* ColorRGBA26 = new ColorRGBA();
ColorRGBA26->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA26->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet25->setColor(ColorRGBA26);

Coordinate* Coordinate27 = new Coordinate();
Coordinate27->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet25->setCoord(Coordinate27);

Shape24->setGeometry(LineSet25);

Transform23->addChild(Shape24);

Transform17->addChild(Transform23);

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group16->addChild(Transform17);

Scene10->addChild(Group16);

NavigationInfo* NavigationInfo28 = new NavigationInfo();
NavigationInfo28->setSpeed(1.5);
Scene10->addChild(NavigationInfo28);

Viewpoint* Viewpoint29 = new Viewpoint();
Viewpoint29->setDescription("default");
Scene10->addChild(Viewpoint29);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
