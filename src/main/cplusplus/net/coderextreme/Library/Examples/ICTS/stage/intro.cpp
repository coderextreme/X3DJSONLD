#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:09 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("nc"));
Collision& Collision10 =  Collision();
Collision10.setEnabled(False);
Transform& Transform11 =  Transform();
Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{-1.37383,0.503751,0});
Transform12.setRotation(new float[]{0,0,-1,1.5708});
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("_1"));
Transform& Transform14 =  Transform();
Transform14.setTranslation(new float[]{0,0,6.63116});
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("_2"));
Transform15.setScale(new float[]{1,2.98486,1});
Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setAmbientIntensity(0);
Material18.setDiffuseColor(new float[]{0,0,0});
Material18.setEmissiveColor(new float[]{0.819149,0.686645,0.392914});
Material18.setShininess(0);
Appearance17.addChild(&Material18);

Shape16.addChild(&Appearance17);

IndexedLineSet& IndexedLineSet19 =  IndexedLineSet();
IndexedLineSet19.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,4,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 31);
Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setPoint(new float[]{-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,0.5,0.5,0.5,-0.5,0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5,-0.5,0.5,-0.5,-0.5,-0.5,-0.5}, 24);
IndexedLineSet19.setCoord(&Coordinate20);

Shape16.setGeometry(&IndexedLineSet19);

Transform15.addChild(&Shape16);

Transform14.addChild(&Transform15);

Transform13.addChild(&Transform14);

Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{0,0,2.57238});
Transform& Transform22 =  Transform();
Transform22.setUSE(CString("_2"));
Transform21.addChild(&Transform22);

Transform13.addChild(&Transform21);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{0,0,-6.72781});
Transform& Transform24 =  Transform();
Transform24.setUSE(CString("_2"));
Transform23.addChild(&Transform24);

Transform13.addChild(&Transform23);

Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{-0.807327,1.49278,4.45628});
Transform25.setRotation(new float[]{0.0000398219,1,-0.0000398219,4.71239});
Transform25.setScaleOrientation(new float[]{0.0000361377,1,-0.0000237345,2.35619});
Transform& Transform26 =  Transform();
Transform26.setUSE(CString("_2"));
Transform25.addChild(&Transform26);

Transform13.addChild(&Transform25);

Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{-0.715973,0.800763,-2.54796});
Transform27.setRotation(new float[]{0.0000398219,1,-0.0000398219,4.71239});
Transform27.setScaleOrientation(new float[]{0.0000361377,1,-0.0000237345,2.35619});
Transform& Transform28 =  Transform();
Transform28.setUSE(CString("_2"));
Transform27.addChild(&Transform28);

Transform13.addChild(&Transform27);

Transform& Transform29 =  Transform();
Transform29.setUSE(CString("_2"));
Transform13.addChild(&Transform29);

Transform12.addChild(&Transform13);

Transform11.addChild(&Transform12);

Transform& Transform30 =  Transform();
Transform30.setUSE(CString("_1"));
Transform11.addChild(&Transform30);

Collision10.addChildren(&Transform11);

Transform9.addChild(&Collision10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
