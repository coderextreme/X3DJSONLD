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
Ccomponent* component2 = new Ccomponent();
component2->setName("Geospatial");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("geobubbles.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("manual");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("geo bubbles");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
CGeoViewpoint* GeoViewpoint9 = (CGeoViewpoint *)(m_pScene.createNode("GeoViewpoint"));
GeoViewpoint9->setDEF("Tour");
GeoViewpoint9->setPosition(new double[3]{0,0,4});
GeoViewpoint9->setOrientation(new float[4]{1,0,0,0});
GeoViewpoint9->setDescription("Tour Views");
group->addChildren(*GeoViewpoint9);

CBackground* Background10 = (CBackground *)(m_pScene.createNode("Background"));
Background10->setBackUrl(new CString[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background10->setBottomUrl(new CString[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background10->setFrontUrl(new CString[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background10->setLeftUrl(new CString[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background10->setRightUrl(new CString[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background10->setTopUrl(new CString[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
group->addChildren(*Background10);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere13 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape12->setGeometry(Sphere13);

CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material15->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance14->setMaterial(*Material15);

Shape12->setAppearance(*Appearance14);

Transform11->addChild(*Shape12);

group->addChildren(*Transform11);

CTimeSensor* TimeSensor16 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor16->setDEF("TourTime");
TimeSensor16->setCycleInterval(5);
TimeSensor16->setLoop(True);
group->addChildren(*TimeSensor16);

CGeoPositionInterpolator* GeoPositionInterpolator17 = (CGeoPositionInterpolator *)(m_pScene.createNode("GeoPositionInterpolator"));
GeoPositionInterpolator17->setDEF("TourPosition");
GeoPositionInterpolator17->setKey(new float[2]{0,1}, 2);
GeoPositionInterpolator17->setKeyValue(new double[6]{0.0015708,0,4,0,0.0015708,4});
group->addChildren(*GeoPositionInterpolator17);

CScript* Script18 = (CScript *)(m_pScene.createNode("Script"));
Script18->setDEF("RandomTourTime");
Cfield* field19 = new Cfield();
field19->setName("set_cycle");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("val");
field20->setAccessType("inputOutput");
field20->setType("SFFloat");
field20->setValue("0");
Script18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("positions");
field21->setAccessType("inputOutput");
field21->setType("MFVec3d");
field21->setValue("0.0015708 0 4 0 0.0015708 4");
Script18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("position");
field22->setAccessType("inputOutput");
field22->setType("MFVec3d");
field22->setValue("0.0015708 0 4 0 0.0015708 4");
Script18->addField(*field22);


Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"               function set_cycle(value) {\n"+
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\n"+
"                        var ov = val;\n"+
"			// Browser.print('old '+ov);\n"+
"                        do {\n"+
"                                val = Math.floor(Math.random()*2);\n"+
"                                var vc = val;\n"+
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\n"+
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\n"+
"			// Browser.println(positions[ov]);\n"+
"			// Browser.println(positions[vc]);\n"+
"                        position = new MFVec3d();\n"+
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"               }`)
group->addChildren(*Script18);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("TourTime");
ROUTE23->setFromField("cycleTime");
ROUTE23->setToNode("RandomTourTime");
ROUTE23->setToField("set_cycle");
group->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("RandomTourTime");
ROUTE24->setFromField("position");
ROUTE24->setToNode("TourPosition");
ROUTE24->setToField("keyValue");
group->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("TourTime");
ROUTE25->setFromField("fraction_changed");
ROUTE25->setToNode("TourPosition");
ROUTE25->setToField("set_fraction");
group->addChildren(*ROUTE25);

CROUTE* ROUTE26 = new CROUTE();
ROUTE26->setFromNode("TourPosition");
ROUTE26->setFromField("geovalue_changed");
ROUTE26->setToNode("Tour");
ROUTE26->setToField("set_position");
group->addChildren(*ROUTE26);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
