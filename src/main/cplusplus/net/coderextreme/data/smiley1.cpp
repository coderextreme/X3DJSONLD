#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
head& head1 =  head();
X3D0.setHead(&head1);

Scene& Scene2 =  Scene();
Transform& Transform3 =  Transform();
Transform3.setScale(new float[3]{10.0,10.0,1.0});
Transform3.setRotation(new float[4]{1.0,0.0,0.0,3.14});
Shape& Shape4 =  Shape();
Appearance& Appearance5 =  Appearance();
Material& Material6 =  Material();
Material6.setDiffuseColor(new float[3]{0.8,0.5,0.5});
Appearance5.addChild(&Material6);

ImageTexture& ImageTexture7 =  ImageTexture();
ImageTexture7.setUrl(new CString[1]{CString("./face1.jpg")}, 1);
Appearance5.addChild(&ImageTexture7);

Shape4.addChild(&Appearance5);

Sphere& Sphere8 =  Sphere();
Shape4.setGeometry(&Sphere8);

Transform3.addChild(&Shape4);

Scene2.addChild(&Transform3);

X3D0.setScene(&Scene2);

}
