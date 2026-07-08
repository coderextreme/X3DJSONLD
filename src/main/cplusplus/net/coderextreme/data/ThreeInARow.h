//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ThreeInARow.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("3 boxes"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(CString("Cubes"));
Viewpoint9.setPosition(new float[]{0.0,0.0,12.0});
Scene7.addChild(&Viewpoint9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("first"));
Transform10.setTranslation(new float[]{0.0,2.0,0.0});
Shape& Shape11 =  Shape();
Shape11.setDEF(CString("ball"));
Sphere& Sphere12 =  Sphere();
Shape11.setGeometry(&Sphere12);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Transform10.addChild(&Shape11);

Scene7.addChild(&Transform10);

Transform& Transform15 =  Transform();
Shape& Shape16 =  Shape();
Shape16.setUSE(CString("ball"));
Transform15.addChild(&Shape16);

Scene7.addChild(&Transform15);

Transform& Transform17 =  Transform();
Transform17.setTranslation(new float[]{0.0,-2.0,0.0});
Shape& Shape18 =  Shape();
Shape18.setUSE(CString("ball"));
Transform17.addChild(&Shape18);

Scene7.addChild(&Transform17);

X3D0.setScene(&Scene7);

//}
