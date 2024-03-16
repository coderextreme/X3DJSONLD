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
X3D0->setVersion("3.3");
head* head1 = new head();
component* component2 = new component();
component2->setName("Geospatial");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("geobubbles.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("generator");
meta5->setContent("manual");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("description");
meta7->setContent("geo bubbles");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
GeoViewpoint* GeoViewpoint9 = new GeoViewpoint();
GeoViewpoint9->setDEF("Tour");
GeoViewpoint9->setPosition(new double[3]{0,0,4});
GeoViewpoint9->setOrientation(new float[4]{1,0,0,0});
GeoViewpoint9->setDescription("Tour Views");
Scene8->addChild(GeoViewpoint9);

Background* Background10 = new Background();
Background10->setBackUrl(new String[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background10->setBottomUrl(new String[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background10->setFrontUrl(new String[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background10->setLeftUrl(new String[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background10->setRightUrl(new String[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background10->setTopUrl(new String[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene8->addChild(Background10);

Transform* Transform11 = new Transform();
Shape* Shape12 = new Shape();
Sphere* Sphere13 = new Sphere();
Shape12->setGeometry(Sphere13);

Appearance* Appearance14 = new Appearance();
Material* Material15 = new Material();
Material15->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material15->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance14->setMaterial(Material15);

Shape12->setAppearance(Appearance14);

Transform11->addChild(Shape12);

Scene8->addChild(Transform11);

TimeSensor* TimeSensor16 = new TimeSensor();
TimeSensor16->setDEF("TourTime");
TimeSensor16->setCycleInterval(5);
TimeSensor16->setLoop(True);
Scene8->addChild(TimeSensor16);

GeoPositionInterpolator* GeoPositionInterpolator17 = new GeoPositionInterpolator();
GeoPositionInterpolator17->setDEF("TourPosition");
GeoPositionInterpolator17->setKey(new float[2]{0,1}, 2);
GeoPositionInterpolator17->setKeyValue(new double[6]{0.0015708,0,4,0,0.0015708,4});
Scene8->addChild(GeoPositionInterpolator17);

Script* Script18 = new Script();
Script18->setDEF("RandomTourTime");
field* field19 = new field();
field19->setName("set_cycle");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script18->addField(field19);

field* field20 = new field();
field20->setName("val");
field20->setAccessType("inputOutput");
field20->setType("SFFloat");
field20->setValue("0");
Script18->addField(field20);

field* field21 = new field();
field21->setName("positions");
field21->setAccessType("inputOutput");
field21->setType("MFVec3d");
field21->setValue("0.0015708 0 4 0 0.0015708 4");
Script18->addField(field21);

field* field22 = new field();
field22->setName("position");
field22->setAccessType("inputOutput");
field22->setType("MFVec3d");
field22->setValue("0.0015708 0 4 0 0.0015708 4");
Script18->addField(field22);


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
Scene8->addChild(Script18);

ROUTE* ROUTE23 = new ROUTE();
ROUTE23->setFromNode("TourTime");
ROUTE23->setFromField("cycleTime");
ROUTE23->setToNode("RandomTourTime");
ROUTE23->setToField("set_cycle");
Scene8->addChild(ROUTE23);

ROUTE* ROUTE24 = new ROUTE();
ROUTE24->setFromNode("RandomTourTime");
ROUTE24->setFromField("position");
ROUTE24->setToNode("TourPosition");
ROUTE24->setToField("keyValue");
Scene8->addChild(ROUTE24);

ROUTE* ROUTE25 = new ROUTE();
ROUTE25->setFromNode("TourTime");
ROUTE25->setFromField("fraction_changed");
ROUTE25->setToNode("TourPosition");
ROUTE25->setToField("set_fraction");
Scene8->addChild(ROUTE25);

ROUTE* ROUTE26 = new ROUTE();
ROUTE26->setFromNode("TourPosition");
ROUTE26->setFromField("geovalue_changed");
ROUTE26->setToNode("Tour");
ROUTE26->setToField("set_position");
Scene8->addChild(ROUTE26);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
