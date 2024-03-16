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
X3D0->setVersion("3.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("jumpcut_loadurl.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("reference");
meta3->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("reference");
meta4->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("disclaimer");
meta6->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("info");
meta7->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("translator");
meta8->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("translated");
meta9->setContent("21 January 2001");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("modified");
meta10->setContent("20 October 2019");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("description");
meta11->setContent("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("generator");
meta14->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("license");
meta15->setContent("../../license.html");
head1->addMeta(meta15);

X3D0->setHead(head1);

Scene* Scene16 = new Scene();
WorldInfo* WorldInfo17 = new WorldInfo();
WorldInfo17->setTitle("jumpcut_loadurl.x3d");
Scene16->addChild(WorldInfo17);

Background* Background18 = new Background();
Background18->setGroundAngle(new float[1]{1.57}, 1);
Background18->setGroundColor(new float[6]{0,0.5,0,0,0.5,0});
Background18->setSkyColor(new float[3]{0,0,1});
Scene16->addChild(Background18);

NavigationInfo* NavigationInfo19 = new NavigationInfo();
NavigationInfo19->setType(new String[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
Scene16->addChild(NavigationInfo19);

Viewpoint* Viewpoint20 = new Viewpoint();
Viewpoint20->setDEF("Front_View");
Viewpoint20->setDescription("Front View");
Scene16->addChild(Viewpoint20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDEF("Top_View");
Viewpoint21->setDescription("Top View");
Viewpoint21->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint21->setPosition(new float[3]{0,10,0});
Scene16->addChild(Viewpoint21);

TouchSensor* TouchSensor22 = new TouchSensor();
TouchSensor22->setDEF("STARTER");
TouchSensor22->setDescription("touch to activate");
Scene16->addChild(TouchSensor22);

Transform* Transform23 = new Transform();
Transform23->setDEF("ROOT");
Shape* Shape24 = new Shape();
Appearance* Appearance25 = new Appearance();
Material* Material26 = new Material();
Appearance25->setMaterial(Material26);

Shape24->setAppearance(Appearance25);

Box* Box27 = new Box();
Shape24->setGeometry(Box27);

Transform23->addChild(Shape24);

Scene16->addChild(Transform23);

Script* Script28 = new Script();
Script28->setDEF("MYSCRIPT");
Script28->setUrl(new String[2]{"jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"}, 2);
field* field29 = new field();
field29->setName("myParameter");
field29->setAccessType("initializeOnly");
field29->setType("MFString");
field29->setValue("\"Top_View\"");
Script28->addField(field29);

field* field30 = new field();
field30->setName("myUrl");
field30->setAccessType("initializeOnly");
field30->setType("MFString");
field30->setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"");
Script28->addField(field30);

field* field31 = new field();
field31->setName("trigger_event");
field31->setAccessType("inputOnly");
field31->setType("SFBool");
Script28->addField(field31);

Scene16->addChild(Script28);

ROUTE* ROUTE32 = new ROUTE();
ROUTE32->setFromField("isActive");
ROUTE32->setFromNode("STARTER");
ROUTE32->setToField("trigger_event");
ROUTE32->setToNode("MYSCRIPT");
Scene16->addChild(ROUTE32);

X3D0->setScene(Scene16);

X3D0->toXMLString();
}
