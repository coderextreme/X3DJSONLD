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
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("converter"));
meta2->setContent(CString("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("converted"));
meta3->setContent(CString("Mon, 31 Jul 2023 03:48:04 GMT"));
head1->addMeta(meta3);

X3D0->setHead(head1);

Scene* Scene4 = new Scene();
NavigationInfo* NavigationInfo5 = new NavigationInfo();
NavigationInfo5->setHeadlight(False);
Scene4->addChild(NavigationInfo5);

Group* Group6 = new Group();
Group* Group7 = new Group();
Group7->setDEF(CString("ARROW"));
Shape* Shape8 = new Shape();
Appearance* Appearance9 = new Appearance();
Appearance9->setDEF(CString("ARROW_APPEARANCE"));
Material* Material10 = new Material();
Material10->setDiffuseColor(new float[3]{0.3,0.3,1});
Material10->setEmissiveColor(new float[3]{0.3,0.3,0.33});
Appearance9->addChild(Material10);

Shape8->addChild(Appearance9);

Cylinder* Cylinder11 = new Cylinder();
Cylinder11->setTop(False);
Cylinder11->setBottom(False);
Cylinder11->setRadius(0.025);
Shape8->setGeometry(Cylinder11);

Group7->addChild(Shape8);

Transform* Transform12 = new Transform();
Transform12->setTranslation(new float[3]{0,1,0});
Shape* Shape13 = new Shape();
Shape13->setDEF(CString("ARROW_POINTER"));
Appearance* Appearance14 = new Appearance();
Appearance14->setUSE(CString("ARROW_APPEARANCE"));
Shape13->addChild(Appearance14);

Cone* Cone15 = new Cone();
Cone15->setHeight(0.1);
Cone15->setBottomRadius(0.05);
Shape13->setGeometry(Cone15);

Transform12->addChild(Shape13);

Group7->addChild(Transform12);

Transform* Transform16 = new Transform();
Transform16->setTranslation(new float[3]{0,-1,0});
Transform16->setRotation(new float[4]{1,0,0,3.1416});
Shape* Shape17 = new Shape();
Shape17->setUSE(CString("ARROW_POINTER"));
Transform16->addChild(Shape17);

Group7->addChild(Transform16);

Group6->addChild(Group7);

Transform* Transform18 = new Transform();
Transform18->setTranslation(new float[3]{0,1.08,0});
Billboard* Billboard19 = new Billboard();
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Appearance21->setDEF(CString("LABEL_APPEARANCE"));
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{1,1,0.3});
Material22->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance21->addChild(Material22);

Shape20->addChild(Appearance21);

Text* Text23 = new Text();
Text23->setString(new CString[1]{CString("Y")}, 1);
CFontStyle* FontStyle24 = new CFontStyle();
FontStyle24->setDEF(CString("LABEL_FONT"));
FontStyle24->setFamily(new CString[1]{CString("SANS")}, 1);
FontStyle24->setSize(0.2);
FontStyle24->setJustify(new CString[1]{CString("MIDDLE")}, 1);
Text23->setFontStyle(FontStyle24);

Shape20->setGeometry(Text23);

Billboard19->addChild(Shape20);

Transform18->addChild(Billboard19);

Group6->addChild(Transform18);

Scene4->addChild(Group6);

Transform* Transform25 = new Transform();
Transform25->setRotation(new float[4]{0,0,1,-1.5708});
Group* Group26 = new Group();
Group* Group27 = new Group();
Group27->setUSE(CString("ARROW"));
Group26->addChild(Group27);

Transform* Transform28 = new Transform();
Transform28->setTranslation(new float[3]{0.072,1.1,0});
Transform28->setRotation(new float[4]{0,0,1,1.5708});
Billboard* Billboard29 = new Billboard();
Shape* Shape30 = new Shape();
Appearance* Appearance31 = new Appearance();
Appearance31->setUSE(CString("LABEL_APPEARANCE"));
Shape30->addChild(Appearance31);

Text* Text32 = new Text();
Text32->setString(new CString[1]{CString("X")}, 1);
CFontStyle* FontStyle33 = new CFontStyle();
FontStyle33->setUSE(CString("LABEL_FONT"));
Text32->setFontStyle(FontStyle33);

Shape30->setGeometry(Text32);

Billboard29->addChild(Shape30);

Transform28->addChild(Billboard29);

Group26->addChild(Transform28);

Transform25->addChild(Group26);

Scene4->addChild(Transform25);

Transform* Transform34 = new Transform();
Transform34->setRotation(new float[4]{1,0,0,1.5708});
Group* Group35 = new Group();
Group* Group36 = new Group();
Group36->setUSE(CString("ARROW"));
Group35->addChild(Group36);

Transform* Transform37 = new Transform();
Transform37->setTranslation(new float[3]{0,1.1,0.072});
Transform37->setRotation(new float[4]{1,0,0,-1.5708});
Billboard* Billboard38 = new Billboard();
Shape* Shape39 = new Shape();
Appearance* Appearance40 = new Appearance();
Appearance40->setUSE(CString("LABEL_APPEARANCE"));
Shape39->addChild(Appearance40);

Text* Text41 = new Text();
Text41->setString(new CString[1]{CString("Z")}, 1);
CFontStyle* FontStyle42 = new CFontStyle();
FontStyle42->setUSE(CString("LABEL_FONT"));
Text41->setFontStyle(FontStyle42);

Shape39->setGeometry(Text41);

Billboard38->addChild(Shape39);

Transform37->addChild(Billboard38);

Group35->addChild(Transform37);

Transform34->addChild(Group35);

Scene4->addChild(Transform34);

X3D0->setScene(Scene4);

}
