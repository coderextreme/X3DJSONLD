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
X3D0->setProfile("CADInterchange");
X3D0->setVersion("3.1");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("CADGeometry");
component2->setLevel(2);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("EnvironmentalEffects");
component3->setLevel(1);
head1->addComponent(*component3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("CADPartChildNoTransformation.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translator");
meta7->setContent("Vince Marchetti bushing generation using python scripts");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://www.web3d.org/member-only/mantis/view.php?id=528");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("warning");
meta9->setContent("This scene is intended for specification development only.");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("created");
meta10->setContent("29 June 2012");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("modified");
meta11->setContent("20 October 2019");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d");
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
CWorldInfo* WorldInfo16 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo16->setTitle("CADPartChildNoTransformation.x3d");
group->addChildren(*WorldInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setSkyColor(new float[3]{0.9607843,1,0.9607843});
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDescription("Hello CAD bushing");
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.321751});
Viewpoint18->setPosition(new float[3]{0,5,15});
group->addChildren(*Viewpoint18);

CCADAssembly* CADAssembly19 = (CCADAssembly *)(m_pScene.createNode("CADAssembly"));
CADAssembly19->setName("DesignPatternAssembly");
CCADPart* CADPart20 = (CCADPart *)(m_pScene.createNode("CADPart"));
CADPart20->setName("CADPartExample");
//the rotation and translation attributes serve to position the bushing within the assembly
CCADFace* CADFace21 = (CCADFace *)(m_pScene.createNode("CADFace"));
CADFace21->setName("outerSurface");
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
//note solid='true' and so one-sided external rendering only
CCylinder* Cylinder23 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder23->setBottom(False);
Cylinder23->setHeight(3);
Cylinder23->setRadius(2);
Cylinder23->setTop(False);
Shape22->setGeometry(Cylinder23);

CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance24->setDEF("AppearanceGrey");
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance24->setMaterial(*Material25);

Shape22->setAppearance(*Appearance24);

CADFace21->setShape(*Shape22);

CADPart20->addChildren(*CADFace21);

CCADFace* CADFace26 = (CCADFace *)(m_pScene.createNode("CADFace"));
CADFace26->setName("innerSurface");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
//note solid='false' and so two-sided internal + external rendering
CCylinder* Cylinder28 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder28->setBottom(False);
Cylinder28->setHeight(3);
Cylinder28->setSolid(False);
Cylinder28->setTop(False);
Shape27->setGeometry(Cylinder28);

CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance29->setUSE("AppearanceGrey");
Shape27->setAppearance(*Appearance29);

CADFace26->setShape(*Shape27);

CADPart20->addChildren(*CADFace26);

CCADFace* CADFace30 = (CCADFace *)(m_pScene.createNode("CADFace"));
CADFace30->setName("topCap");
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedTriangleSet* IndexedTriangleSet32 = (CIndexedTriangleSet *)(m_pScene.createNode("IndexedTriangleSet"));
IndexedTriangleSet32->setIndex(new int[192]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
CCoordinate* Coordinate33 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate33->setPoint(new float[198]{2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0});
IndexedTriangleSet32->setCoord(*Coordinate33);

Shape31->setGeometry(IndexedTriangleSet32);

CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance34->setUSE("AppearanceGrey");
Shape31->setAppearance(*Appearance34);

CADFace30->setShape(*Shape31);

CADPart20->addChildren(*CADFace30);

CCADFace* CADFace35 = (CCADFace *)(m_pScene.createNode("CADFace"));
CADFace35->setName("bottomCap");
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedTriangleSet* IndexedTriangleSet37 = (CIndexedTriangleSet *)(m_pScene.createNode("IndexedTriangleSet"));
IndexedTriangleSet37->setIndex(new int[192]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[198]{2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0});
IndexedTriangleSet37->setCoord(*Coordinate38);

Shape36->setGeometry(IndexedTriangleSet37);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance39->setUSE("AppearanceGrey");
Shape36->setAppearance(*Appearance39);

CADFace35->setShape(*Shape36);

CADPart20->addChildren(*CADFace35);

CADAssembly19->addChildren(*CADPart20);

group->addChildren(*CADAssembly19);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
