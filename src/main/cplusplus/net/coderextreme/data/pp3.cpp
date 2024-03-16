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
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("pp3.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("translator");
meta4->setContent("John Carlson");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("5 May 2015");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("23 Dec 2022");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("description");
meta7->setContent("A process pipeline between three spheres (try typing on spheres and blue");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("identifier");
meta8->setContent("https://coderextreme.net/x3d/pp3.x3d");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("generator");
meta9->setContent("manual");
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
ProtoDeclare* ProtoDeclare11 = new ProtoDeclare();
ProtoDeclare11->setName("Process");
ProtoBody* ProtoBody12 = new ProtoBody();
Group* Group13 = new Group();
//left
Transform* Transform14 = new Transform();
Transform14->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape15 = new Shape();
Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{0.7,1,0});
Material17->setTransparency(0.5);
Appearance16->setMaterial(Material17);

Shape15->setAppearance(Appearance16);

Extrusion* Extrusion18 = new Extrusion();
Extrusion18->setCreaseAngle(0.785);
Extrusion18->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion18->setSpine(new float[6]{-2.5,0,0,-1.5,0,0});
Shape15->setGeometry(Extrusion18);

Transform14->addChild(Shape15);

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13->addChild(Transform14);

//right
Transform* Transform19 = new Transform();
Transform19->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0,0.7,1});
Material22->setTransparency(0.5);
Appearance21->setMaterial(Material22);

Shape20->setAppearance(Appearance21);

Extrusion* Extrusion23 = new Extrusion();
Extrusion23->setCreaseAngle(0.785);
Extrusion23->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion23->setSpine(new float[6]{1.5,0,0,2.5,0,0});
Shape20->setGeometry(Extrusion23);

Transform19->addChild(Shape20);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{2,0,0});
Shape* Shape25 = new Shape();
Appearance* Appearance26 = new Appearance();
Material* Material27 = new Material();
Material27->setDEF("MaterialLightBlue");
Material27->setDiffuseColor(new float[3]{1,1,1});
Appearance26->setMaterial(Material27);

Shape25->setAppearance(Appearance26);

Text* Text28 = new Text();
Text28->setDEF("RightString");
Text28->setString(new String[1]{"r"}, 1);
Shape25->setGeometry(Text28);

Transform24->addChild(Shape25);

Transform19->addChild(Transform24);

StringSensor* StringSensor29 = new StringSensor();
StringSensor29->setDEF("RightSensor");
StringSensor29->setEnabled(False);
Transform19->addChild(StringSensor29);

TouchSensor* TouchSensor30 = new TouchSensor();
TouchSensor30->setDescription("touch to activate");
TouchSensor30->setDEF("RightTouch");
Transform19->addChild(TouchSensor30);

Group13->addChild(Transform19);

//up
Transform* Transform31 = new Transform();
Transform31->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape32 = new Shape();
Appearance* Appearance33 = new Appearance();
Material* Material34 = new Material();
Material34->setDiffuseColor(new float[3]{0,0.7,1});
Material34->setTransparency(0.5);
Appearance33->setMaterial(Material34);

Shape32->setAppearance(Appearance33);

Extrusion* Extrusion35 = new Extrusion();
Extrusion35->setCreaseAngle(0.785);
Extrusion35->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion35->setSpine(new float[6]{0,1.5,0,0,2.5,0});
Shape32->setGeometry(Extrusion35);

Transform31->addChild(Shape32);

Transform* Transform36 = new Transform();
Transform36->setTranslation(new float[3]{-0.5,2,0});
Shape* Shape37 = new Shape();
Appearance* Appearance38 = new Appearance();
Material* Material39 = new Material();
Material39->setUSE("MaterialLightBlue");
Appearance38->setMaterial(Material39);

Shape37->setAppearance(Appearance38);

Text* Text40 = new Text();
Text40->setDEF("UpString");
Text40->setString(new String[1]{"u"}, 1);
Shape37->setGeometry(Text40);

Transform36->addChild(Shape37);

Transform31->addChild(Transform36);

StringSensor* StringSensor41 = new StringSensor();
StringSensor41->setDEF("UpSensor");
StringSensor41->setEnabled(False);
Transform31->addChild(StringSensor41);

TouchSensor* TouchSensor42 = new TouchSensor();
TouchSensor42->setDescription("touch to activate");
TouchSensor42->setDEF("UpTouch");
Transform31->addChild(TouchSensor42);

Group13->addChild(Transform31);

//down
Transform* Transform43 = new Transform();
Transform43->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape44 = new Shape();
Appearance* Appearance45 = new Appearance();
Material* Material46 = new Material();
Material46->setDiffuseColor(new float[3]{0.7,1,0});
Material46->setTransparency(0.5);
Appearance45->setMaterial(Material46);

Shape44->setAppearance(Appearance45);

Extrusion* Extrusion47 = new Extrusion();
Extrusion47->setCreaseAngle(0.785);
Extrusion47->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Extrusion47->setSpine(new float[6]{0,-2.5,0,0,-1.5,0});
Shape44->setGeometry(Extrusion47);

Transform43->addChild(Shape44);

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13->addChild(Transform43);

//center
Transform* Transform48 = new Transform();
Shape* Shape49 = new Shape();
Appearance* Appearance50 = new Appearance();
Material* Material51 = new Material();
Material51->setDiffuseColor(new float[3]{1,0,0.7});
Appearance50->setMaterial(Material51);

Shape49->setAppearance(Appearance50);

Sphere* Sphere52 = new Sphere();
Shape49->setGeometry(Sphere52);

Transform48->addChild(Shape49);

Transform* Transform53 = new Transform();
Transform53->setScale(new float[3]{0.5,0.5,0.5});
Transform53->setTranslation(new float[3]{-0.5,0,1});
Shape* Shape54 = new Shape();
Appearance* Appearance55 = new Appearance();
Material* Material56 = new Material();
Material56->setUSE("MaterialLightBlue");
Appearance55->setMaterial(Material56);

Shape54->setAppearance(Appearance55);

Text* Text57 = new Text();
Text57->setDEF("CenterString");
Shape54->setGeometry(Text57);

Transform53->addChild(Shape54);

Transform48->addChild(Transform53);

StringSensor* StringSensor58 = new StringSensor();
StringSensor58->setDEF("CenterSensor");
StringSensor58->setEnabled(False);
Transform48->addChild(StringSensor58);

TouchSensor* TouchSensor59 = new TouchSensor();
TouchSensor59->setDescription("touch to activate");
TouchSensor59->setDEF("CenterTouch");
Transform48->addChild(TouchSensor59);

Group13->addChild(Transform48);

ProtoBody12->addChild(Group13);

Script* Script60 = new Script();
Script60->setDEF("RightSingleToMultiString");
field* field61 = new field();
field61->setName("set_rightstring");
field61->setAccessType("inputOnly");
field61->setType("SFString");
Script60->addField(field61);

field* field62 = new field();
field62->setName("rightlines");
field62->setAccessType("outputOnly");
field62->setType("MFString");
Script60->addField(field62);


Script60.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}`)
ProtoBody12->addChild(Script60);

Script* Script63 = new Script();
Script63->setDEF("UpSingleToMultiString");
field* field64 = new field();
field64->setName("set_upstring");
field64->setAccessType("inputOnly");
field64->setType("SFString");
Script63->addField(field64);

field* field65 = new field();
field65->setName("uplines");
field65->setAccessType("outputOnly");
field65->setType("MFString");
Script63->addField(field65);


Script63.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}`)
ProtoBody12->addChild(Script63);

Script* Script66 = new Script();
Script66->setDEF("CenterSingleToMultiString");
field* field67 = new field();
field67->setName("set_centerstring");
field67->setAccessType("inputOnly");
field67->setType("SFString");
Script66->addField(field67);

field* field68 = new field();
field68->setName("centerlines");
field68->setAccessType("outputOnly");
field68->setType("MFString");
Script66->addField(field68);


Script66.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}`)
ProtoBody12->addChild(Script66);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromField("enteredText");
ROUTE69->setFromNode("CenterSensor");
ROUTE69->setToField("set_centerstring");
ROUTE69->setToNode("CenterSingleToMultiString");
ProtoBody12->addChild(ROUTE69);

ROUTE* ROUTE70 = new ROUTE();
ROUTE70->setFromField("centerlines");
ROUTE70->setFromNode("CenterSingleToMultiString");
ROUTE70->setToField("set_string");
ROUTE70->setToNode("CenterString");
ProtoBody12->addChild(ROUTE70);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromField("isOver");
ROUTE71->setFromNode("CenterTouch");
ROUTE71->setToField("set_enabled");
ROUTE71->setToNode("CenterSensor");
ProtoBody12->addChild(ROUTE71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromField("enteredText");
ROUTE72->setFromNode("RightSensor");
ROUTE72->setToField("set_rightstring");
ROUTE72->setToNode("RightSingleToMultiString");
ProtoBody12->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromField("rightlines");
ROUTE73->setFromNode("RightSingleToMultiString");
ROUTE73->setToField("set_string");
ROUTE73->setToNode("RightString");
ProtoBody12->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromField("isOver");
ROUTE74->setFromNode("RightTouch");
ROUTE74->setToField("set_enabled");
ROUTE74->setToNode("RightSensor");
ProtoBody12->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromField("enteredText");
ROUTE75->setFromNode("UpSensor");
ROUTE75->setToField("set_upstring");
ROUTE75->setToNode("UpSingleToMultiString");
ProtoBody12->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromField("uplines");
ROUTE76->setFromNode("UpSingleToMultiString");
ROUTE76->setToField("set_string");
ROUTE76->setToNode("UpString");
ProtoBody12->addChild(ROUTE76);

ROUTE* ROUTE77 = new ROUTE();
ROUTE77->setFromField("isOver");
ROUTE77->setFromNode("UpTouch");
ROUTE77->setToField("set_enabled");
ROUTE77->setToNode("UpSensor");
ProtoBody12->addChild(ROUTE77);

ProtoDeclare11->setProtoBody(ProtoBody12);

Scene10->addChild(ProtoDeclare11);

NavigationInfo* NavigationInfo78 = new NavigationInfo();
Scene10->addChild(NavigationInfo78);

Viewpoint* Viewpoint79 = new Viewpoint();
Viewpoint79->setDescription("Process pipes");
Viewpoint79->setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint79->setPosition(new float[3]{0,5,12});
Scene10->addChild(Viewpoint79);

Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{0,-2.5,0});
ProtoInstance* ProtoInstance81 = new ProtoInstance();
ProtoInstance81->setName("Process");
Transform80->addChild(ProtoInstance81);

Scene10->addChild(Transform80);

Transform* Transform82 = new Transform();
ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName("Process");
Transform82->addChild(ProtoInstance83);

Scene10->addChild(Transform82);

Transform* Transform84 = new Transform();
Transform84->setTranslation(new float[3]{0,2.5,0});
ProtoInstance* ProtoInstance85 = new ProtoInstance();
ProtoInstance85->setName("Process");
Transform84->addChild(ProtoInstance85);

Scene10->addChild(Transform84);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
