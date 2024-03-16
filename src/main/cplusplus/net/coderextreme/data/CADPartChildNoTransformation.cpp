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
X3D0->setProfile("CADInterchange");
X3D0->setVersion("3.1");
head* head1 = new head();
component* component2 = new component();
component2->setName("CADGeometry");
component2->setLevel(2);
head1->addComponent(component2);

component* component3 = new component();
component3->setName("EnvironmentalEffects");
component3->setLevel(1);
head1->addComponent(component3);

meta* meta4 = new meta();
meta4->setName("title");
meta4->setContent("CADPartChildNoTransformation.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("creator");
meta6->setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("translator");
meta7->setContent("Vince Marchetti bushing generation using python scripts");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("https://www.web3d.org/member-only/mantis/view.php?id=528");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("warning");
meta9->setContent("This scene is intended for specification development only.");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("created");
meta10->setContent("29 June 2012");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("modified");
meta11->setContent("20 October 2019");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
WorldInfo* WorldInfo16 = new WorldInfo();
WorldInfo16->setTitle("CADPartChildNoTransformation.x3d");
Scene15->addChild(WorldInfo16);

Background* Background17 = new Background();
Background17->setSkyColor(new float[3]{0.9607843,1,0.9607843});
Scene15->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDescription("Hello CAD bushing");
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.321751});
Viewpoint18->setPosition(new float[3]{0,5,15});
Scene15->addChild(Viewpoint18);

CADAssembly* CADAssembly19 = new CADAssembly();
CADAssembly19->setName("DesignPatternAssembly");
CADPart* CADPart20 = new CADPart();
CADPart20->setName("CADPartExample");
//the rotation and translation attributes serve to position the bushing within the assembly
CADFace* CADFace21 = new CADFace();
CADFace21->setName("outerSurface");
Shape* Shape22 = new Shape();
//note solid='true' and so one-sided external rendering only
Cylinder* Cylinder23 = new Cylinder();
Cylinder23->setBottom(False);
Cylinder23->setHeight(3);
Cylinder23->setRadius(2);
Cylinder23->setTop(False);
Shape22->setGeometry(Cylinder23);

Appearance* Appearance24 = new Appearance();
Appearance24->setDEF("AppearanceGrey");
Material* Material25 = new Material();
Appearance24->setMaterial(Material25);

Shape22->setAppearance(Appearance24);

CADFace21->setShape(Shape22);

CADPart20->addChild(CADFace21);

CADFace* CADFace26 = new CADFace();
CADFace26->setName("innerSurface");
Shape* Shape27 = new Shape();
//note solid='false' and so two-sided internal + external rendering
Cylinder* Cylinder28 = new Cylinder();
Cylinder28->setBottom(False);
Cylinder28->setHeight(3);
Cylinder28->setSolid(False);
Cylinder28->setTop(False);
Shape27->setGeometry(Cylinder28);

Appearance* Appearance29 = new Appearance();
Appearance29->setUSE("AppearanceGrey");
Shape27->setAppearance(Appearance29);

CADFace26->setShape(Shape27);

CADPart20->addChild(CADFace26);

CADFace* CADFace30 = new CADFace();
CADFace30->setName("topCap");
Shape* Shape31 = new Shape();
IndexedTriangleSet* IndexedTriangleSet32 = new IndexedTriangleSet();
IndexedTriangleSet32->setIndex(new int[192]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setPoint(new float[198]{2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0});
IndexedTriangleSet32->setCoord(Coordinate33);

Shape31->setGeometry(IndexedTriangleSet32);

Appearance* Appearance34 = new Appearance();
Appearance34->setUSE("AppearanceGrey");
Shape31->setAppearance(Appearance34);

CADFace30->setShape(Shape31);

CADPart20->addChild(CADFace30);

CADFace* CADFace35 = new CADFace();
CADFace35->setName("bottomCap");
Shape* Shape36 = new Shape();
IndexedTriangleSet* IndexedTriangleSet37 = new IndexedTriangleSet();
IndexedTriangleSet37->setIndex(new int[192]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setPoint(new float[198]{2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0});
IndexedTriangleSet37->setCoord(Coordinate38);

Shape36->setGeometry(IndexedTriangleSet37);

Appearance* Appearance39 = new Appearance();
Appearance39->setUSE("AppearanceGrey");
Shape36->setAppearance(Appearance39);

CADFace35->setShape(Shape36);

CADPart20->addChild(CADFace35);

CADAssembly19->addChild(CADPart20);

Scene15->addChild(CADAssembly19);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
