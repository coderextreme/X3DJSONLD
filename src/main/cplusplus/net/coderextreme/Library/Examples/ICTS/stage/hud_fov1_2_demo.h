//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:06 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:06 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("ProximitySensor"));
Transform9.setTranslation(new float[]{0.0,0.5,0.0});
ProximitySensor& ProximitySensor10 =  ProximitySensor();
ProximitySensor10.setDEF(CString("_1"));
ProximitySensor10.setSize(new float[]{100.0,10.0,100.0});
Transform9.addChild(&ProximitySensor10);

Scene7.addChild(&Transform9);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("HUD"));
Transform11.setTranslation(new float[]{0.0,0.5,0.0});
Collision& Collision12 =  Collision();
Collision12.setEnabled(false);
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("HUDObj"));
Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDEF(CString("HUDVP1"));
Viewpoint14.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint14.setFieldOfView(1.2);
Transform13.addChild(&Viewpoint14);

Transform& Transform15 =  Transform();
Transform15.setDEF(CString("DemoLogo"));
Transform15.setTranslation(new float[]{0.217382,0.163237,-0.3});
Transform15.setScale(new float[]{0.0448933,0.0448934,0.00191928});
Transform& Transform16 =  Transform();
Transform16.setDEF(CString("demo"));
Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setUrl(new CString[]{CString("icts-demo.png")}, 1);
Appearance18.addChild(&ImageTexture19);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setSolid(false);
IndexedFaceSet20.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate21 =  TextureCoordinate();
TextureCoordinate21.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet20.setTexCoord(&TextureCoordinate21);

Coordinate& Coordinate22 =  Coordinate();
Coordinate22.setPoint(new float[]{-1.0,-0.5,0.0,1.0,-0.5,0.0,1.0,0.5,0.0,-1.0,0.5,0.0}, 12);
IndexedFaceSet20.setCoord(&Coordinate22);

Shape17.setGeometry(&IndexedFaceSet20);

Transform16.addChild(&Shape17);

Transform15.addChild(&Transform16);

Transform13.addChild(&Transform15);

Collision12.addChildren(&Transform13);

Transform11.addChild(&Collision12);

Scene7.addChild(&Transform11);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("_1"));
ROUTE23.setFromField(CString("position_changed"));
ROUTE23.setToNode(CString("HUDObj"));
ROUTE23.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("_1"));
ROUTE24.setFromField(CString("orientation_changed"));
ROUTE24.setToNode(CString("HUDObj"));
ROUTE24.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE24);

X3D0.setScene(&Scene7);

//}
