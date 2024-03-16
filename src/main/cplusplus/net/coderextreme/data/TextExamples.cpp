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
meta2->setContent("TextExamples.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Show different escape-character text examples for embedded quotation marks.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("7 April 2001");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("26 April 2016");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("warning");
meta7->setContent("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("warning");
meta8->setContent("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("identifier");
meta9->setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("generator");
meta10->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("license");
meta11->setContent("../license.html");
head1->addMeta(meta11);

X3D0->setHead(head1);

Scene* Scene12 = new Scene();
Transform* Transform13 = new Transform();
Transform13->setTranslation(new float[3]{0,2,0});
Shape* Shape14 = new Shape();
Text* Text15 = new Text();
Text15->setString(new String[1]{"Compare special character escaping"}, 1);
FontStyle* FontStyle16 = new FontStyle();
FontStyle16->setDEF("testFontStyle");
FontStyle16->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle16->setSize(0.8);
Text15->setFontStyle(FontStyle16);

Shape14->setGeometry(Text15);

Appearance* Appearance17 = new Appearance();
Appearance17->setDEF("LightBlueAppearance");
Material* Material18 = new Material();
Material18->setDiffuseColor(new float[3]{0.1,0.7,0.7});
Appearance17->setMaterial(Material18);

Shape14->setAppearance(Appearance17);

Transform13->addChild(Shape14);

Scene12->addChild(Transform13);

Transform* Transform19 = new Transform();
Transform19->setTranslation(new float[3]{-3,0,0});
Shape* Shape20 = new Shape();
Text* Text21 = new Text();
Text21->setString(new String[3]{"I don't think so","","he said \"Hi\""}, 3);
FontStyle* FontStyle22 = new FontStyle();
FontStyle22->setUSE("testFontStyle");
Text21->setFontStyle(FontStyle22);

Shape20->setGeometry(Text21);

Appearance* Appearance23 = new Appearance();
Appearance23->setUSE("LightBlueAppearance");
Shape20->setAppearance(Appearance23);

Transform19->addChild(Shape20);

Scene12->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{3,0,0});
Shape* Shape25 = new Shape();
Text* Text26 = new Text();
Text26->setString(new String[3]{"I don't think so","","he said \"Hi\""}, 3);
FontStyle* FontStyle27 = new FontStyle();
FontStyle27->setUSE("testFontStyle");
Text26->setFontStyle(FontStyle27);

Shape25->setGeometry(Text26);

Appearance* Appearance28 = new Appearance();
Appearance28->setUSE("LightBlueAppearance");
Shape25->setAppearance(Appearance28);

Transform24->addChild(Shape25);

Scene12->addChild(Transform24);

X3D0->setScene(Scene12);

X3D0->toXMLString();
}
