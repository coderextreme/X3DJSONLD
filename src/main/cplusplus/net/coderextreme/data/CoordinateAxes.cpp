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
meta2->setName(CString("title"));
meta2->setContent(CString("CoordinateAxes.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("Don Brutzman, Byounghyun Yoo"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("created"));
meta4->setContent(CString("14 July 2000"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("modified"));
meta5->setContent(CString("20 October 2019"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("reference"));
meta7->setContent(CString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("reference"));
meta8->setContent(CString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("identifier"));
meta11->setContent(CString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("generator"));
meta12->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("license"));
meta13->setContent(CString("../license.html"));
head1->addMeta(meta13);

X3D0->setHead(head1);

Scene* Scene14 = new Scene();
WorldInfo* WorldInfo15 = new WorldInfo();
WorldInfo15->setTitle(CString("CoordinateAxes.x3d"));
Scene14->addChild(WorldInfo15);

Collision* Collision16 = new Collision();
Collision16->setDEF(CString("DoNotCollideWithVisualizationWidget"));
//Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.
//This NavigationInfo allows examine mode and will be overridden by any parent scene.
//Each arrow goes from +1m to -1m to allow linear scaling to fit a scene
//Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user
Group* Group17 = new Group();
//Vertical Y arrow and label
Group* Group18 = new Group();
Group18->setDEF(CString("ArrowGreen"));
Shape* Shape19 = new Shape();
Cylinder* Cylinder20 = new Cylinder();
Cylinder20->setDEF(CString("ArrowCylinder"));
Cylinder20->setRadius(0.025);
Cylinder20->setTop(False);
Shape19->setGeometry(Cylinder20);

Appearance* Appearance21 = new Appearance();
Appearance21->setDEF(CString("Green"));
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0.1,0.6,0.1});
Material22->setEmissiveColor(new float[3]{0.05,0.2,0.05});
Appearance21->addChild(Material22);

Shape19->addChild(Appearance21);

Group18->addChild(Shape19);

Transform* Transform23 = new Transform();
Transform23->setTranslation(new float[3]{0,1,0});
Shape* Shape24 = new Shape();
Cone* Cone25 = new Cone();
Cone25->setDEF(CString("ArrowCone"));
Cone25->setBottomRadius(0.05);
Cone25->setHeight(0.1);
Shape24->setGeometry(Cone25);

Appearance* Appearance26 = new Appearance();
Appearance26->setUSE(CString("Green"));
Shape24->addChild(Appearance26);

Transform23->addChild(Shape24);

Group18->addChild(Transform23);

Group17->addChild(Group18);

Transform* Transform27 = new Transform();
Transform27->setTranslation(new float[3]{0,1.08,0});
Billboard* Billboard28 = new Billboard();
Shape* Shape29 = new Shape();
Appearance* Appearance30 = new Appearance();
Appearance30->setDEF(CString("LABEL_APPEARANCE"));
Material* Material31 = new Material();
Material31->setDiffuseColor(new float[3]{1,1,0.3});
Material31->setEmissiveColor(new float[3]{0.33,0.33,0.1});
Appearance30->addChild(Material31);

Shape29->addChild(Appearance30);

Text* Text32 = new Text();
Text32->setString(new CString[1]{CString("Y")}, 1);
CFontStyle* FontStyle33 = new CFontStyle();
FontStyle33->setDEF(CString("LABEL_FONT"));
FontStyle33->setFamily(new CString[1]{CString("SANS")}, 1);
FontStyle33->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle33->setSize(0.2);
Text32->setFontStyle(FontStyle33);

Shape29->setGeometry(Text32);

Billboard28->addChild(Shape29);

Transform27->addChild(Billboard28);

Group17->addChild(Transform27);

Collision16->addChild(Group17);

Transform* Transform34 = new Transform();
Transform34->setRotation(new float[4]{0,0,1,-1.57079});
//Horizontal X arrow and label
Group* Group35 = new Group();
Group* Group36 = new Group();
Group36->setDEF(CString("ArrowRed"));
Shape* Shape37 = new Shape();
Cylinder* Cylinder38 = new Cylinder();
Cylinder38->setUSE(CString("ArrowCylinder"));
Shape37->setGeometry(Cylinder38);

Appearance* Appearance39 = new Appearance();
Appearance39->setDEF(CString("Red"));
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{0.7,0.1,0.1});
Material40->setEmissiveColor(new float[3]{0.33,0,0});
Appearance39->addChild(Material40);

Shape37->addChild(Appearance39);

Group36->addChild(Shape37);

Transform* Transform41 = new Transform();
Transform41->setTranslation(new float[3]{0,1,0});
Shape* Shape42 = new Shape();
Cone* Cone43 = new Cone();
Cone43->setUSE(CString("ArrowCone"));
Shape42->setGeometry(Cone43);

Appearance* Appearance44 = new Appearance();
Appearance44->setUSE(CString("Red"));
Shape42->addChild(Appearance44);

Transform41->addChild(Shape42);

Group36->addChild(Transform41);

Group35->addChild(Group36);

Transform* Transform45 = new Transform();
Transform45->setRotation(new float[4]{0,0,1,1.57079});
Transform45->setTranslation(new float[3]{0.072,1.1,0});
//note label rotated back to original coordinate frame
Billboard* Billboard46 = new Billboard();
Shape* Shape47 = new Shape();
Appearance* Appearance48 = new Appearance();
Appearance48->setUSE(CString("LABEL_APPEARANCE"));
Shape47->addChild(Appearance48);

Text* Text49 = new Text();
Text49->setString(new CString[1]{CString("X")}, 1);
CFontStyle* FontStyle50 = new CFontStyle();
FontStyle50->setUSE(CString("LABEL_FONT"));
Text49->setFontStyle(FontStyle50);

Shape47->setGeometry(Text49);

Billboard46->addChild(Shape47);

Transform45->addChild(Billboard46);

Group35->addChild(Transform45);

Transform34->addChild(Group35);

Collision16->addChild(Transform34);

Transform* Transform51 = new Transform();
Transform51->setRotation(new float[4]{1,0,0,1.57079});
//Perpendicular Z arrow and label, note right-hand rule
Group* Group52 = new Group();
Group* Group53 = new Group();
Group53->setDEF(CString("ArrowBlue"));
Shape* Shape54 = new Shape();
Cylinder* Cylinder55 = new Cylinder();
Cylinder55->setUSE(CString("ArrowCylinder"));
Shape54->setGeometry(Cylinder55);

Appearance* Appearance56 = new Appearance();
Appearance56->setDEF(CString("Blue"));
Material* Material57 = new Material();
Material57->setDiffuseColor(new float[3]{0.3,0.3,1});
Material57->setEmissiveColor(new float[3]{0.1,0.1,0.33});
Appearance56->addChild(Material57);

Shape54->addChild(Appearance56);

Group53->addChild(Shape54);

Transform* Transform58 = new Transform();
Transform58->setTranslation(new float[3]{0,1,0});
Shape* Shape59 = new Shape();
Cone* Cone60 = new Cone();
Cone60->setUSE(CString("ArrowCone"));
Shape59->setGeometry(Cone60);

Appearance* Appearance61 = new Appearance();
Appearance61->setUSE(CString("Blue"));
Shape59->addChild(Appearance61);

Transform58->addChild(Shape59);

Group53->addChild(Transform58);

Group52->addChild(Group53);

Transform* Transform62 = new Transform();
Transform62->setRotation(new float[4]{1,0,0,-1.57079});
Transform62->setTranslation(new float[3]{0,1.1,0.072});
//note label rotated back to original coordinate frame
Billboard* Billboard63 = new Billboard();
Shape* Shape64 = new Shape();
Appearance* Appearance65 = new Appearance();
Appearance65->setUSE(CString("LABEL_APPEARANCE"));
Shape64->addChild(Appearance65);

Text* Text66 = new Text();
Text66->setString(new CString[1]{CString("Z")}, 1);
CFontStyle* FontStyle67 = new CFontStyle();
FontStyle67->setUSE(CString("LABEL_FONT"));
Text66->setFontStyle(FontStyle67);

Shape64->setGeometry(Text66);

Billboard63->addChild(Shape64);

Transform62->addChild(Billboard63);

Group52->addChild(Transform62);

Transform51->addChild(Group52);

Collision16->addChild(Transform51);

Scene14->addChild(Collision16);

X3D0->setScene(Scene14);

}
