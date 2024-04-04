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
meta2.setContent(CString("app.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Carlson, I"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Carlson, II"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Carlson, III"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
Group& Group7 =  Group();
Shape& Shape8 =  Shape();
Appearance& Appearance9 =  Appearance();
Material& Material10 =  Material();
Material10.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance9.addChild(&Material10);

Shape8.addChild(&Appearance9);

Box& Box11 =  Box();
Shape8.setGeometry(&Box11);

Group7.addChild(&Shape8);

Scene6.addChild(&Group7);

Transform& Transform12 =  Transform();
Transform12.setRotation(new float[4]{7.0,8.0,9.0,3.14});
Transform12.setScale(new float[3]{4.0,5.0,6.0});
Transform12.setTranslation(new float[3]{1.0,2.0,3.0});
Scene6.addChild(&Transform12);

X3D0.setScene(&Scene6);

//}
