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
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("creator"));
meta2->setContent(CString("John W Carlson"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("created"));
meta3->setContent(CString("December 13 2015"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("title"));
meta4->setContent(CString("text3shapes.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("3 text shapes"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("generator"));
meta7->setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
Transform* Transform9 = new Transform();
Shape* Shape10 = new Shape();
Text* Text11 = new Text();
Text11->setString(new CString[1]{CString("Node\"\"\"")}, 1);
CFontStyle* FontStyle12 = new CFontStyle();
Text11->setFontStyle(FontStyle12);

Shape10->setGeometry(Text11);

Appearance* Appearance13 = new Appearance();
Material* Material14 = new Material();
Appearance13->addChild(Material14);

Shape10->addChild(Appearance13);

Transform9->addChild(Shape10);

Shape* Shape15 = new Shape();
Text* Text16 = new Text();
Text16->setString(new CString[4]{CString("Node2"), CString("\\\\"), CString("\\\\\\\\"), CString("Node2")}, 4);
CFontStyle* FontStyle17 = new CFontStyle();
Text16->setFontStyle(FontStyle17);

Shape15->setGeometry(Text16);

Appearance* Appearance18 = new Appearance();
Material* Material19 = new Material();
Appearance18->addChild(Material19);

Shape15->addChild(Appearance18);

Transform9->addChild(Shape15);

Shape* Shape20 = new Shape();
Text* Text21 = new Text();
Text21->setString(new CString[2]{CString("Node3 \\\\\\\\ \\\\ "), CString("Node3\"\"\"")}, 2);
CFontStyle* FontStyle22 = new CFontStyle();
Text21->setFontStyle(FontStyle22);

Shape20->setGeometry(Text21);

Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Appearance23->addChild(Material24);

Shape20->addChild(Appearance23);

Transform9->addChild(Shape20);

Script* Script25 = new Script();
field* field26 = new field();
field26->setName(CString("frontUrls"));
field26->setType(CString("MFString"));
field26->setAccessType(CString("initializeOnly"));
field26->setValue(CString("\"rnl_front.png\" \"uffizi_front.png\""));
Script25->addChild(field26);


Script25->setSourceCode(CString("ecmascript:")+
_T("			    var me = '\"1\" \"\"2\" \"\\n3\"';"));
Transform9->addChild(Script25);

Scene8->addChild(Transform9);

X3D0->setScene(Scene8);

}
