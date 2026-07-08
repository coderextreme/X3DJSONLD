#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("converter"));
meta2.setContent(CString("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("converted"));
meta3.setContent(CString("Mon, 31 Jul 2023 03:48:04 GMT"));
head1.addMeta(&meta3);

X3D0.setHead(&head1);

Scene& Scene4 =  Scene();
NavigationInfo& NavigationInfo5 =  NavigationInfo();
NavigationInfo5.setHeadlight(False);
Scene4.addChild(&NavigationInfo5);

Group& Group6 =  Group();
Group& Group7 =  Group();
Group7.setDEF(CString("ARROW"));
Shape& Shape8 =  Shape();
Appearance& Appearance9 =  Appearance();
Appearance9.setDEF(CString("ARROW_APPEARANCE"));
Material& Material10 =  Material();
Material10.setDiffuseColor(new float[]{0.3,0.3,1});
Material10.setEmissiveColor(new float[]{0.3,0.3,0.33});
Appearance9.addChild(&Material10);

Shape8.addChild(&Appearance9);

Cylinder& Cylinder11 =  Cylinder();
Cylinder11.setTop(False);
Cylinder11.setBottom(False);
Cylinder11.setRadius(0.025);
Shape8.setGeometry(&Cylinder11);

Group7.addChild(&Shape8);

Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{0,1,0});
Shape& Shape13 =  Shape();
Shape13.setDEF(CString("ARROW_POINTER"));
Appearance& Appearance14 =  Appearance();
Appearance14.setUSE(CString("ARROW_APPEARANCE"));
Shape13.addChild(&Appearance14);

Cone& Cone15 =  Cone();
Cone15.setHeight(0.1);
Cone15.setBottomRadius(0.05);
Shape13.setGeometry(&Cone15);

Transform12.addChild(&Shape13);

Group7.addChild(&Transform12);

Transform& Transform16 =  Transform();
Transform16.setTranslation(new float[]{0,-1,0});
Transform16.setRotation(new float[]{1,0,0,3.1416});
Shape& Shape17 =  Shape();
Shape17.setUSE(CString("ARROW_POINTER"));
Transform16.addChild(&Shape17);

Group7.addChild(&Transform16);

Group6.addChild(&Group7);

Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{0,1.08,0});
Billboard& Billboard19 =  Billboard();
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Appearance21.setDEF(CString("LABEL_APPEARANCE"));
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{1,1,0.3});
Material22.setEmissiveColor(new float[]{0.33,0.33,0.1});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Text& Text23 =  Text();
Text23.setString(new CString[]{CString("Y")}, 1);
CFontStyle& FontStyle24 =  CFontStyle();
FontStyle24.setDEF(CString("LABEL_FONT"));
FontStyle24.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle24.setSize(0.2);
FontStyle24.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text23.setFontStyle(&FontStyle24);

Shape20.setGeometry(&Text23);

Billboard19.addChild(&Shape20);

Transform18.addChild(&Billboard19);

Group6.addChild(&Transform18);

Scene4.addChild(&Group6);

Transform& Transform25 =  Transform();
Transform25.setRotation(new float[]{0,0,1,-1.5708});
Group& Group26 =  Group();
Group& Group27 =  Group();
Group27.setUSE(CString("ARROW"));
Group26.addChild(&Group27);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{0.072,1.1,0});
Transform28.setRotation(new float[]{0,0,1,1.5708});
Billboard& Billboard29 =  Billboard();
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Appearance31.setUSE(CString("LABEL_APPEARANCE"));
Shape30.addChild(&Appearance31);

Text& Text32 =  Text();
Text32.setString(new CString[]{CString("X")}, 1);
CFontStyle& FontStyle33 =  CFontStyle();
FontStyle33.setUSE(CString("LABEL_FONT"));
Text32.setFontStyle(&FontStyle33);

Shape30.setGeometry(&Text32);

Billboard29.addChild(&Shape30);

Transform28.addChild(&Billboard29);

Group26.addChild(&Transform28);

Transform25.addChild(&Group26);

Scene4.addChild(&Transform25);

Transform& Transform34 =  Transform();
Transform34.setRotation(new float[]{1,0,0,1.5708});
Group& Group35 =  Group();
Group& Group36 =  Group();
Group36.setUSE(CString("ARROW"));
Group35.addChild(&Group36);

Transform& Transform37 =  Transform();
Transform37.setTranslation(new float[]{0,1.1,0.072});
Transform37.setRotation(new float[]{1,0,0,-1.5708});
Billboard& Billboard38 =  Billboard();
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Appearance40.setUSE(CString("LABEL_APPEARANCE"));
Shape39.addChild(&Appearance40);

Text& Text41 =  Text();
Text41.setString(new CString[]{CString("Z")}, 1);
CFontStyle& FontStyle42 =  CFontStyle();
FontStyle42.setUSE(CString("LABEL_FONT"));
Text41.setFontStyle(&FontStyle42);

Shape39.setGeometry(&Text41);

Billboard38.addChild(&Shape39);

Transform37.addChild(&Billboard38);

Group35.addChild(&Transform37);

Transform34.addChild(&Group35);

Scene4.addChild(&Transform34);

X3D0.setScene(&Scene4);

}
