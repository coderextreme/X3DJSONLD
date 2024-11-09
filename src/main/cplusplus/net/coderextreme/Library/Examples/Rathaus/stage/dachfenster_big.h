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
meta3.setContent(CString("Sun, 15 Mar 2015 09:33:53 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sun, 15 Mar 2015 09:33:53 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("nurbsToPoly162"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setAmbientIntensity(0.341818);
Material13.setDiffuseColor(new float[]{0.585106,0.0214792,0.0});
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setDEF(CString("nurbsToPoly162_0Geo"));
IndexedFaceSet14.setConvex(false);
IndexedFaceSet14.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setDEF(CString("nurbsToPoly162GeoPoints"));
Coordinate15.setPoint(new float[]{-0.683,4.401,13.552,-0.681,4.401,15.434,0.678,4.959,15.432,0.675,4.959,13.55,-0.683,5.02,13.552,0.675,5.579,13.55,-0.681,5.02,15.434,0.678,5.579,15.432}, 24);
IndexedFaceSet14.setCoord(&Coordinate15);

Shape11.setGeometry(&IndexedFaceSet14);

Transform10.addChild(&Shape11);

Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setDEF(CString("_1"));
Material18.setDiffuseColor(new float[]{1.0,0.794631,0.389824});
Appearance17.addChild(&Material18);

Shape16.addChild(&Appearance17);

IndexedFaceSet& IndexedFaceSet19 =  IndexedFaceSet();
IndexedFaceSet19.setDEF(CString("nurbsToPoly162_1Geo"));
IndexedFaceSet19.setConvex(false);
IndexedFaceSet19.setCoordIndex(new int32_t[]{1,6,4,0,-1}, 5);
Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setUSE(CString("nurbsToPoly162GeoPoints"));
IndexedFaceSet19.setCoord(&Coordinate20);

Shape16.setGeometry(&IndexedFaceSet19);

Transform10.addChild(&Shape16);

Transform9.addChild(&Transform10);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("nurbsToPoly154"));
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDEF(CString("_2"));
Material24.setAmbientIntensity(0.341818);
Material24.setDiffuseColor(new float[]{0.585106,0.0214792,0.0});
Appearance23.addChild(&Material24);

Shape22.addChild(&Appearance23);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setDEF(CString("nurbsToPoly154_0Geo"));
IndexedFaceSet25.setConvex(false);
IndexedFaceSet25.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setDEF(CString("nurbsToPoly154GeoPoints"));
Coordinate26.setPoint(new float[]{1.165,6.286,14.27,1.165,6.286,14.637,2.222,6.72,14.636,2.222,6.72,14.269,1.165,6.768,14.27,2.222,7.203,14.269,1.165,6.768,14.637,2.222,7.203,14.636}, 24);
IndexedFaceSet25.setCoord(&Coordinate26);

Shape22.setGeometry(&IndexedFaceSet25);

Transform21.addChild(&Shape22);

Transform9.addChild(&Transform21);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("nurbsToPoly153"));
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setUSE(CString("_2"));
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setDEF(CString("nurbsToPoly153_0Geo"));
IndexedFaceSet31.setConvex(false);
IndexedFaceSet31.setCoordIndex(new int32_t[]{6,1,2,7,-1,0,4,5,3,-1,4,6,7,5,-1}, 15);
Coordinate& Coordinate32 =  Coordinate();
Coordinate32.setDEF(CString("nurbsToPoly153GeoPoints"));
Coordinate32.setPoint(new float[]{2.061,7.648,14.27,2.061,7.648,14.637,3.118,8.083,14.636,3.118,8.083,14.269,2.061,8.13,14.27,3.118,8.565,14.269,2.061,8.13,14.637,3.118,8.565,14.636}, 24);
IndexedFaceSet31.setCoord(&Coordinate32);

Shape28.setGeometry(&IndexedFaceSet31);

Transform27.addChild(&Shape28);

Transform9.addChild(&Transform27);

Transform& Transform33 =  Transform();
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setUSE(CString("_1"));
Appearance35.addChild(&Material36);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setConvex(false);
IndexedFaceSet37.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{1.165,6.768,14.27,1.165,6.286,14.27,1.165,6.286,14.637,1.165,6.768,14.637}, 12);
IndexedFaceSet37.setCoord(&Coordinate38);

Shape34.setGeometry(&IndexedFaceSet37);

Transform33.addChild(&Shape34);

Transform9.addChild(&Transform33);

Transform& Transform39 =  Transform();
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setUSE(CString("_1"));
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setConvex(false);
IndexedFaceSet43.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{2.061,8.13,14.27,2.061,7.648,14.27,2.061,7.648,14.637,2.061,8.13,14.637}, 12);
IndexedFaceSet43.setCoord(&Coordinate44);

Shape40.setGeometry(&IndexedFaceSet43);

Transform39.addChild(&Shape40);

Transform9.addChild(&Transform39);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

//}
