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
meta3.setContent(CString("Thu, 10 Sep 2015 07:10:33 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 10 Sep 2015 07:10:33 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Transform& Transform8 =  Transform();
Transform8.setDEF(CString("_1"));
Transform8.setTranslation(new float[]{-3.07774,0,0});
LOD& LOD9 =  LOD();
LOD9.setDEF(CString("_2"));
LOD9.setRange(new float[]{20}, 1);
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("Box_1"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setDEF(CString("Rococo12_1"));
Material13.setAmbientIntensity(0.226102);
Material13.setDiffuseColor(new float[]{0.904409,0.146366,0.208768});
Material13.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material13.setShininess(0.078125);
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

Box& Box14 =  Box();
Shape11.setGeometry(&Box14);

Transform10.addChild(&Shape11);

LOD9.addChildren(&Transform10);

Transform& Transform15 =  Transform();
Transform15.setDEF(CString("Box_2"));
Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setDEF(CString("Rococo28_1"));
Material18.setAmbientIntensity(0.226102);
Material18.setDiffuseColor(new float[]{0.279645,0.904409,0.511589});
Material18.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material18.setShininess(0.078125);
Appearance17.addChild(&Material18);

Shape16.addChild(&Appearance17);

Box& Box19 =  Box();
Shape16.setGeometry(&Box19);

Transform15.addChild(&Shape16);

LOD9.addChildren(&Transform15);

Transform8.addChild(&LOD9);

Scene7.addChild(&Transform8);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{3.35422,0,-16.1449});
LOD& LOD21 =  LOD();
LOD21.setUSE(CString("_2"));
Transform20.addChild(&LOD21);

Scene7.addChild(&Transform20);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("_3"));
Viewpoint22.setDescription(CString("Home"));
Scene7.addChild(&Viewpoint22);

X3D0.setScene(&Scene7);

}
