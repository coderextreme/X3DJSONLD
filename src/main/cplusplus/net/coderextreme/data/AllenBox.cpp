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
meta2.setName(CString("title"));
meta2.setContent(CString("AllenBox.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Allen Box"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("8 July 2025"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("license"));
meta5.setContent(CString("../license.html"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
WorldInfo7.setTitle(CString("AllenBox.x3d"));
Scene6.addChild(&WorldInfo7);

NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
NavigationInfo8.setSpeed(0.5);
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene6.addChild(&NavigationInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("Floor"));
Transform9.setScale(new float[]{1,0.0125,1});
Transform9.setTranslation(new float[]{0,-0.0125,0});
Shape& Shape10 =  Shape();
Box& Box11 =  Box();
Shape10.setGeometry(&Box11);

Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

Shape10.addChild(&Appearance12);

Transform9.addChild(&Shape10);

Scene6.addChild(&Transform9);

X3D0.setScene(&Scene6);

}
