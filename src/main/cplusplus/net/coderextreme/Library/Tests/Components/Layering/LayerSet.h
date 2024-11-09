//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sat, 29 Aug 2015 04:01:22 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 29 Aug 2015 04:01:22 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("LayerSet"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
LayerSet& LayerSet9 =  LayerSet();
LayerSet9.setActiveLayer(2);
LayerSet9.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer10 =  Layer();
Layer10.setDEF(CString("Right"));
Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDescription(CString("Right"));
Viewpoint11.setPosition(new float[]{0.0,0.0,20.0});
Layer10.addChild(&Viewpoint11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setUSE(CString("Clone"));
Layer10.addChild(&Viewpoint12);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("Blue"));
Transform13.setTranslation(new float[]{2.0,0.0,0.0});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

Box& Box17 =  Box();
Shape14.setGeometry(&Box17);

Transform13.addChild(&Shape14);

Layer10.addChild(&Transform13);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("DarkBlue"));
Transform18.setTranslation(new float[]{5.0,0.0,0.0});
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDiffuseColor(new float[]{0.0,0.0,0.5});
Appearance20.addChild(&Material21);

Shape19.addChild(&Appearance20);

Box& Box22 =  Box();
Box22.setUSE(CString("Box"));
Shape19.setGeometry(&Box22);

Transform18.addChild(&Shape19);

Layer10.addChild(&Transform18);

LayerSet9.addChild(&Layer10);

Scene8.addChild(&LayerSet9);

X3D0.setScene(&Scene8);

//}
