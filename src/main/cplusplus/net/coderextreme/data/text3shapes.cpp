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
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("title");
meta4->setContent("text3shapes.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("3 text shapes");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
Transform* Transform9 = new Transform();
Shape* Shape10 = new Shape();
Text* Text11 = new Text();
Text11->setString(new String[1]{"Node\"\"\""}, 1);
FontStyle* FontStyle12 = new FontStyle();
Text11->setFontStyle(FontStyle12);

Shape10->setGeometry(Text11);

Appearance* Appearance13 = new Appearance();
Material* Material14 = new Material();
Appearance13->setMaterial(Material14);

Shape10->setAppearance(Appearance13);

Transform9->addChild(Shape10);

Shape* Shape15 = new Shape();
Text* Text16 = new Text();
Text16->setString(new String[4]{"Node2","\\\\","\\\\\\\\","Node2"}, 4);
FontStyle* FontStyle17 = new FontStyle();
Text16->setFontStyle(FontStyle17);

Shape15->setGeometry(Text16);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Appearance18->setMaterial(Material19);

Shape15->setAppearance(Appearance18);

Transform9->addChild(Shape15);

Shape* Shape20 = new Shape();
Text* Text21 = new Text();
Text21->setString(new String[2]{"Node3 \\\\\\\\ \\\\ ","Node3\"\"\""}, 2);
FontStyle* FontStyle22 = new FontStyle();
Text21->setFontStyle(FontStyle22);

Shape20->setGeometry(Text21);

Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Appearance23->setMaterial(Material24);

Shape20->setAppearance(Appearance23);

Transform9->addChild(Shape20);

Script* Script25 = new Script();
field* field26 = new field();
field26->setName("frontUrls");
field26->setType("MFString");
field26->setAccessType("initializeOnly");
field26->setValue("\"rnl_front.png\" \"uffizi_front.png\"");
Script25->addField(field26);


Script25.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';`)
Transform9->addChild(Script25);

Scene8->addChild(Transform9);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
