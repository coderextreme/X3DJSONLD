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
meta3.setContent(CString("Wed, 26 Aug 2015 12:17:05 GMT"));
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
meta6.setContent(CString("Wed, 26 Aug 2015 12:17:05 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("wohnung"));
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("floor_1"));
Collision& Collision11 =  Collision();
Collision11.setEnabled(false);
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("text"));
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("txt-flur"));
Transform13.setTranslation(new float[]{-2.30927,-1.38851,-0.672463});
Transform13.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform13.setScale(new float[]{0.0338453,0.0338453,0.0338453});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setAmbientIntensity(0);
Material16.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

Text& Text17 =  Text();
Text17.setString(new CString[]{CString(", "), CString("FLUR5,2 qm")}, 2);
Text17.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle18 =  CFontStyle();
FontStyle18.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle18.setSize(24);
Text17.setFontStyle(&FontStyle18);

Shape14.setGeometry(&Text17);

Transform13.addChild(&Shape14);

Transform12.addChild(&Transform13);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("txt-bad"));
Transform19.setTranslation(new float[]{-7.23306,-1.38851,-0.672463});
Transform19.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform19.setScale(new float[]{0.0338453,0.0338453,0.0338453});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setAmbientIntensity(0);
Material22.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Text& Text23 =  Text();
Text23.setString(new CString[]{CString(", "), CString("BAD7 qm")}, 2);
Text23.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle24 =  CFontStyle();
FontStyle24.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle24.setSize(24);
Text23.setFontStyle(&FontStyle24);

Shape20.setGeometry(&Text23);

Transform19.addChild(&Shape20);

Transform12.addChild(&Transform19);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("txt-schlafen"));
Transform25.setTranslation(new float[]{-5.03582,-1.38851,3.32777});
Transform25.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform25.setScale(new float[]{0.0338453,0.0338453,0.0338453});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setAmbientIntensity(0);
Material28.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Text& Text29 =  Text();
Text29.setString(new CString[]{CString(", "), CString("SCHLAFEN14 qm")}, 2);
Text29.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle30 =  CFontStyle();
FontStyle30.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle30.setSize(24);
FontStyle30.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text29.setFontStyle(&FontStyle30);

Shape26.setGeometry(&Text29);

Transform25.addChild(&Shape26);

Transform12.addChild(&Transform25);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("txt-wohnen"));
Transform31.setTranslation(new float[]{0.830791,-1.38851,3.17479});
Transform31.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform31.setScale(new float[]{0.0338453,0.0338453,0.0338453});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setAmbientIntensity(0);
Material34.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Text& Text35 =  Text();
Text35.setString(new CString[]{CString(", "), CString("WOHNEN19,5 qm")}, 2);
Text35.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle36 =  CFontStyle();
FontStyle36.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle36.setSize(24);
Text35.setFontStyle(&FontStyle36);

Shape32.setGeometry(&Text35);

Transform31.addChild(&Shape32);

Transform12.addChild(&Transform31);

Collision11.addChildren(&Transform12);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("floor"));
Transform& Transform38 =  Transform();
Transform38.setTranslation(new float[]{-1.32382,-2.95784,-0.616061});
Transform38.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform38.setScale(new float[]{2.2153,1.41953,1.76419});
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setAmbientIntensity(0.250001);
Material41.setDiffuseColor(new float[]{0.845242,0.805714,0.544078});
Material41.setShininess(0.078125);
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setSolid(false);
IndexedFaceSet42.setCreaseAngle(0.5);
IndexedFaceSet42.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate43 =  Coordinate();
Coordinate43.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet42.setCoord(&Coordinate43);

Shape39.setGeometry(&IndexedFaceSet42);

Transform38.addChild(&Shape39);

Transform37.addChild(&Transform38);

Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{-6.18752,-2.95784,-0.616061});
Transform44.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform44.setScale(new float[]{2.62836,1.41953,1.76419});
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setAmbientIntensity(0.250001);
Material47.setDiffuseColor(new float[]{0.434977,0.456711,0.845242});
Material47.setShininess(0.078125);
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

IndexedFaceSet& IndexedFaceSet48 =  IndexedFaceSet();
IndexedFaceSet48.setSolid(false);
IndexedFaceSet48.setCreaseAngle(0.5);
IndexedFaceSet48.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate49 =  Coordinate();
Coordinate49.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet48.setCoord(&Coordinate49);

Shape45.setGeometry(&IndexedFaceSet48);

Transform44.addChild(&Shape45);

Transform37.addChild(&Transform44);

Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{-4.79598,-2.95784,3.3361});
Transform50.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform50.setScale(new float[]{4.18476,1.41953,2.17788});
Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setAmbientIntensity(0.250001);
Material53.setDiffuseColor(new float[]{0.607151,0.845242,0.621794});
Material53.setShininess(0.078125);
Appearance52.addChild(&Material53);

Shape51.addChild(&Appearance52);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setSolid(false);
IndexedFaceSet54.setCreaseAngle(0.5);
IndexedFaceSet54.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet54.setCoord(&Coordinate55);

Shape51.setGeometry(&IndexedFaceSet54);

Transform50.addChild(&Shape51);

Transform37.addChild(&Transform50);

Transform& Transform56 =  Transform();
Transform56.setTranslation(new float[]{2.43648,-2.95784,1.56487});
Transform56.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform56.setScale(new float[]{2.93924,1.41953,3.94911});
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setAmbientIntensity(0.250001);
Material59.setDiffuseColor(new float[]{0.845242,0.402292,0.339054});
Material59.setShininess(0.078125);
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setSolid(false);
IndexedFaceSet60.setCreaseAngle(0.5);
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,3,5,4,-1,6,2,4,5,-1}, 11);
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,-1.0,0.527074,1.0,1.0,0.474142,1.0,-1.0,0.527074,1.0,0.113149,1.0,1.0,0.113149}, 21);
IndexedFaceSet60.setCoord(&Coordinate61);

Shape57.setGeometry(&IndexedFaceSet60);

Transform56.addChild(&Shape57);

Transform37.addChild(&Transform56);

Collision11.addChildren(&Transform37);

Transform10.addChild(&Collision11);

Transform9.addChild(&Transform10);

Transform& Transform62 =  Transform();
Transform62.setDEF(CString("walls_1"));
Collision& Collision63 =  Collision();
Transform& Transform64 =  Transform();
Transform64.setDEF(CString("all_wall"));
Transform64.setCenter(new float[]{-1.73584,0.294882,1.59514});
Transform& Transform65 =  Transform();
Transform65.setDEF(CString("door1_1"));
Transform65.setTranslation(new float[]{2.07972,-0.00410406,2.66504});
Transform65.setRotation(new float[]{-0.000506469,1.0,0.000731444,4.71238});
Transform65.setScale(new float[]{1.0,0.999999,1.0});
Transform65.setScaleOrientation(new float[]{0.000900465,1.0,-0.000253043,0.484042});
Transform& Transform66 =  Transform();
Transform66.setDEF(CString("_1"));
Transform66.setTranslation(new float[]{-0.00000524521,8.9407e-8,4.76837e-7});
Transform66.setScale(new float[]{0.999996,0.999999,0.999996});
Transform66.setCenter(new float[]{-1.7764,-0.14077,1.18667});
Group& Group67 =  Group();
Group& Group68 =  Group();
Group68.setDEF(CString("door_1"));
TimeSensor& TimeSensor69 =  TimeSensor();
TimeSensor69.setDEF(CString("Time_1"));
TimeSensor69.setCycleInterval(10);
TimeSensor69.setStopTime(1);
Group68.addChild(&TimeSensor69);

Group67.addChild(&Group68);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("UnnamedTransformRotationInterp_1"));
OrientationInterpolator70.setKey(new float[]{0.0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1.0}, 40);
OrientationInterpolator70.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.00516748,0.0,1.0,0.0,0.0206816,0.0,1.0,0.0,0.0465238,0.0,1.0,0.0,0.0827116,0.0,1.0,0.0,0.129237,0.0,1.0,0.0,0.186102,0.0,1.0,0.0,0.253305,0.0,1.0,0.0,0.330847,0.0,1.0,0.0,0.418729,0.0,1.0,0.0,0.516949,0.0,1.0,0.0,0.625509,0.0,1.0,0.0,0.744407,0.0,1.0,0.0,0.873644,0.0,1.0,0.0,1.01322,0.0,1.0,0.0,1.16314,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.28326,0.0,1.0,0.0,1.23329,0.0,1.0,0.0,1.17463,0.0,1.0,0.0,1.10845,0.0,1.0,0.0,1.03591,0.0,1.0,0.0,0.958151,0.0,1.0,0.0,0.876344,0.0,1.0,0.0,0.791643,0.0,1.0,0.0,0.705205,0.0,1.0,0.0,0.618188,0.0,1.0,0.0,0.53175,0.0,1.0,0.0,0.447048,0.0,1.0,0.0,0.365241,0.0,1.0,0.0,0.287486,0.0,1.0,0.0,0.214938,0.0,1.0,0.0,0.148761,0.0,1.0,0.0,0.0901058,0.0,1.0,0.0,0.0401349,0.0,0.0,1.0,0.0}, 160);
Group67.addChild(&OrientationInterpolator70);

OrientationInterpolator& OrientationInterpolator71 =  OrientationInterpolator();
OrientationInterpolator71.setDEF(CString("UnnamedShapeRotationInterp_1"));
OrientationInterpolator71.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1}, 11);
OrientationInterpolator71.setKeyValue(new float[]{0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344}, 44);
Group67.addChild(&OrientationInterpolator71);

Transform66.addChild(&Group67);

TouchSensor& TouchSensor72 =  TouchSensor();
TouchSensor72.setDEF(CString("Touch_1"));
Transform66.addChild(&TouchSensor72);

Transform& Transform73 =  Transform();
Transform73.setTranslation(new float[]{-2.92858,-0.102524,1.18925});
Transform73.setRotation(new float[]{-1.0,-0.00000127148,-0.00000127148,1.5708});
Transform73.setScale(new float[]{1.0,0.710133,4.03724});
Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Material76.setDEF(CString("_2"));
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

Box& Box77 =  Box();
Box77.setSize(new float[]{0.107213,0.107213,0.107213});
Shape74.setGeometry(&Box77);

Transform73.addChild(&Shape74);

Transform66.addChild(&Transform73);

Transform& Transform78 =  Transform();
Transform78.setDEF(CString("_3"));
Transform78.setTranslation(new float[]{-2.90656,0.031126,1.143});
Transform78.setRotation(new float[]{0.587158,0.572384,-0.572383,4.20344});
Transform78.setScale(new float[]{0.439526,1.10631,2.58222});
Transform78.setCenter(new float[]{-0.00176429,-9.15137e-8,0.0436697});
Shape& Shape79 =  Shape();
Appearance& Appearance80 =  Appearance();
Material& Material81 =  Material();
Material81.setUSE(CString("_2"));
Appearance80.addChild(&Material81);

Shape79.addChild(&Appearance80);

Box& Box82 =  Box();
Box82.setSize(new float[]{0.107213,0.107213,0.107213});
Shape79.setGeometry(&Box82);

Transform78.addChild(&Shape79);

Transform66.addChild(&Transform78);

Transform& Transform83 =  Transform();
Transform83.setTranslation(new float[]{-1.6882,-0.144074,1.18658});
Transform83.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform83.setScale(new float[]{7.20902,15.5332,0.230572});
Transform83.setCenter(new float[]{-0.0896799,0.000412353,5.7768e-7});
Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setAmbientIntensity(0.691489);
Material86.setDiffuseColor(new float[]{0.8,0.677123,0.512228});
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

Box& Box87 =  Box();
Box87.setSize(new float[]{0.178747,0.178746,0.178745});
Shape84.setGeometry(&Box87);

Transform83.addChild(&Shape84);

Transform66.addChild(&Transform83);

Transform65.addChild(&Transform66);

Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{-3.11431,-0.0888075,1.10913});
Transform88.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform88.setScale(new float[]{0.631108,16.2186,1.23267});
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setDEF(CString("_4"));
Material91.setAmbientIntensity(0.376344);
Material91.setDiffuseColor(new float[]{0.989362,0.989362,0.989362});
Appearance90.addChild(&Material91);

Shape89.addChild(&Appearance90);

Box& Box92 =  Box();
Box92.setSize(new float[]{0.178747,0.178746,0.178745});
Shape89.setGeometry(&Box92);

Transform88.addChild(&Shape89);

Transform65.addChild(&Transform88);

Transform& Transform93 =  Transform();
Transform93.setTranslation(new float[]{-2.43024,1.30279,1.10765});
Transform93.setRotation(new float[]{0.707107,-0.707107,-0.000434577,3.14247});
Transform93.setScale(new float[]{0.631108,7.89331,1.23267});
Shape& Shape94 =  Shape();
Appearance& Appearance95 =  Appearance();
Material& Material96 =  Material();
Material96.setUSE(CString("_4"));
Appearance95.addChild(&Material96);

Shape94.addChild(&Appearance95);

Box& Box97 =  Box();
Box97.setSize(new float[]{0.178747,0.178746,0.178745});
Shape94.setGeometry(&Box97);

Transform93.addChild(&Shape94);

Transform65.addChild(&Transform93);

Transform& Transform98 =  Transform();
Transform98.setTranslation(new float[]{-1.70971,-0.0888075,1.10913});
Transform98.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform98.setScale(new float[]{0.631108,16.2186,1.23267});
Shape& Shape99 =  Shape();
Appearance& Appearance100 =  Appearance();
Material& Material101 =  Material();
Material101.setUSE(CString("_4"));
Appearance100.addChild(&Material101);

Shape99.addChild(&Appearance100);

Box& Box102 =  Box();
Box102.setSize(new float[]{0.178747,0.178746,0.178745});
Shape99.setGeometry(&Box102);

Transform98.addChild(&Shape99);

Transform65.addChild(&Transform98);

Transform64.addChild(&Transform65);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("door1"));
Transform& Transform104 =  Transform();
Transform104.setDEF(CString("_5"));
Transform104.setTranslation(new float[]{-0.00000524521,8.9407e-8,4.76837e-7});
Transform104.setScale(new float[]{0.999996,0.999999,0.999996});
Transform104.setCenter(new float[]{-1.7764,-0.14077,1.18667});
Group& Group105 =  Group();
Group& Group106 =  Group();
Group106.setDEF(CString("door"));
TimeSensor& TimeSensor107 =  TimeSensor();
TimeSensor107.setDEF(CString("Time_2"));
TimeSensor107.setCycleInterval(10);
TimeSensor107.setStopTime(1);
Group106.addChild(&TimeSensor107);

Group105.addChild(&Group106);

OrientationInterpolator& OrientationInterpolator108 =  OrientationInterpolator();
OrientationInterpolator108.setDEF(CString("UnnamedTransformRotationInterp_2"));
OrientationInterpolator108.setKey(new float[]{0.0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1.0}, 40);
OrientationInterpolator108.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.00516748,0.0,1.0,0.0,0.0206816,0.0,1.0,0.0,0.0465238,0.0,1.0,0.0,0.0827116,0.0,1.0,0.0,0.129237,0.0,1.0,0.0,0.186102,0.0,1.0,0.0,0.253305,0.0,1.0,0.0,0.330847,0.0,1.0,0.0,0.418729,0.0,1.0,0.0,0.516949,0.0,1.0,0.0,0.625509,0.0,1.0,0.0,0.744407,0.0,1.0,0.0,0.873644,0.0,1.0,0.0,1.01322,0.0,1.0,0.0,1.16314,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.32339,0.0,1.0,0.0,1.28326,0.0,1.0,0.0,1.23329,0.0,1.0,0.0,1.17463,0.0,1.0,0.0,1.10845,0.0,1.0,0.0,1.03591,0.0,1.0,0.0,0.958151,0.0,1.0,0.0,0.876344,0.0,1.0,0.0,0.791643,0.0,1.0,0.0,0.705205,0.0,1.0,0.0,0.618188,0.0,1.0,0.0,0.53175,0.0,1.0,0.0,0.447048,0.0,1.0,0.0,0.365241,0.0,1.0,0.0,0.287486,0.0,1.0,0.0,0.214938,0.0,1.0,0.0,0.148761,0.0,1.0,0.0,0.0901058,0.0,1.0,0.0,0.0401349,0.0,0.0,1.0,0.0}, 160);
Group105.addChild(&OrientationInterpolator108);

OrientationInterpolator& OrientationInterpolator109 =  OrientationInterpolator();
OrientationInterpolator109.setDEF(CString("UnnamedShapeRotationInterp_2"));
OrientationInterpolator109.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1}, 11);
OrientationInterpolator109.setKeyValue(new float[]{0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344}, 44);
Group105.addChild(&OrientationInterpolator109);

Transform104.addChild(&Group105);

TouchSensor& TouchSensor110 =  TouchSensor();
TouchSensor110.setDEF(CString("Touch_2"));
Transform104.addChild(&TouchSensor110);

Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{-2.92858,-0.102524,1.18925});
Transform111.setRotation(new float[]{-1.0,-0.00000127148,-0.00000127148,1.5708});
Transform111.setScale(new float[]{1.0,0.710133,4.03724});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Material& Material114 =  Material();
Material114.setDEF(CString("_6"));
Material114.setAmbientIntensity(0.16172);
Material114.setDiffuseColor(new float[]{0.989362,0.989362,0.989362});
Appearance113.addChild(&Material114);

Shape112.addChild(&Appearance113);

Box& Box115 =  Box();
Box115.setSize(new float[]{0.107213,0.107213,0.107213});
Shape112.setGeometry(&Box115);

Transform111.addChild(&Shape112);

Transform104.addChild(&Transform111);

Transform& Transform116 =  Transform();
Transform116.setDEF(CString("_7"));
Transform116.setTranslation(new float[]{-2.90656,0.031126,1.143});
Transform116.setRotation(new float[]{0.587158,0.572384,-0.572383,4.20344});
Transform116.setScale(new float[]{0.439526,1.10631,2.58222});
Transform116.setCenter(new float[]{-0.00176429,-9.15137e-8,0.0436697});
Shape& Shape117 =  Shape();
Appearance& Appearance118 =  Appearance();
Material& Material119 =  Material();
Material119.setUSE(CString("_6"));
Appearance118.addChild(&Material119);

Shape117.addChild(&Appearance118);

Box& Box120 =  Box();
Box120.setSize(new float[]{0.107213,0.107213,0.107213});
Shape117.setGeometry(&Box120);

Transform116.addChild(&Shape117);

Transform104.addChild(&Transform116);

Transform& Transform121 =  Transform();
Transform121.setTranslation(new float[]{-1.6882,-0.144074,1.18658});
Transform121.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform121.setScale(new float[]{7.20902,15.5332,0.230572});
Transform121.setCenter(new float[]{-0.0896799,0.000412353,5.7768e-7});
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setAmbientIntensity(0.691489);
Material124.setDiffuseColor(new float[]{0.8,0.677123,0.512228});
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

Box& Box125 =  Box();
Box125.setSize(new float[]{0.178747,0.178746,0.178745});
Shape122.setGeometry(&Box125);

Transform121.addChild(&Shape122);

Transform104.addChild(&Transform121);

Transform103.addChild(&Transform104);

Transform& Transform126 =  Transform();
Transform126.setTranslation(new float[]{-3.11431,-0.0888075,1.10913});
Transform126.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform126.setScale(new float[]{0.631108,16.2186,1.23267});
Shape& Shape127 =  Shape();
Appearance& Appearance128 =  Appearance();
Material& Material129 =  Material();
Material129.setDEF(CString("_8"));
Material129.setAmbientIntensity(0.376344);
Material129.setDiffuseColor(new float[]{0.989362,0.989362,0.989362});
Appearance128.addChild(&Material129);

Shape127.addChild(&Appearance128);

Box& Box130 =  Box();
Box130.setSize(new float[]{0.178747,0.178746,0.178745});
Shape127.setGeometry(&Box130);

Transform126.addChild(&Shape127);

Transform103.addChild(&Transform126);

Transform& Transform131 =  Transform();
Transform131.setTranslation(new float[]{-2.43024,1.30279,1.10765});
Transform131.setRotation(new float[]{0.707107,-0.707107,-0.000434577,3.14247});
Transform131.setScale(new float[]{0.631108,7.89331,1.23267});
Shape& Shape132 =  Shape();
Appearance& Appearance133 =  Appearance();
Material& Material134 =  Material();
Material134.setUSE(CString("_8"));
Appearance133.addChild(&Material134);

Shape132.addChild(&Appearance133);

Box& Box135 =  Box();
Box135.setSize(new float[]{0.178747,0.178746,0.178745});
Shape132.setGeometry(&Box135);

Transform131.addChild(&Shape132);

Transform103.addChild(&Transform131);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{-1.70971,-0.0888075,1.10913});
Transform136.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform136.setScale(new float[]{0.631108,16.2186,1.23267});
Shape& Shape137 =  Shape();
Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setUSE(CString("_8"));
Appearance138.addChild(&Material139);

Shape137.addChild(&Appearance138);

Box& Box140 =  Box();
Box140.setSize(new float[]{0.178747,0.178746,0.178745});
Shape137.setGeometry(&Box140);

Transform136.addChild(&Shape137);

Transform103.addChild(&Transform136);

Transform64.addChild(&Transform103);

Transform& Transform141 =  Transform();
Transform141.setDEF(CString("walls"));
Transform& Transform142 =  Transform();
Transform142.setTranslation(new float[]{-0.0280126,-1.53561,1.35645});
Transform142.setRotation(new float[]{-1.0,0.0,0.0,1.56956});
Transform142.setScale(new float[]{9.35746,9.35746,13.4537});
Shape& Shape143 =  Shape();
Appearance& Appearance144 =  Appearance();
Material& Material145 =  Material();
Material145.setDEF(CString("_9"));
Material145.setAmbientIntensity(0.790323);
Material145.setDiffuseColor(new float[]{0.659574,0.659574,0.659574});
Material145.setShininess(0);
Appearance144.addChild(&Material145);

Shape143.addChild(&Appearance144);

IndexedFaceSet& IndexedFaceSet146 =  IndexedFaceSet();
IndexedFaceSet146.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1}, 73);
Coordinate& Coordinate147 =  Coordinate();
Coordinate147.setPoint(new float[]{-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0.0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8}, 66);
IndexedFaceSet146.setCoord(&Coordinate147);

Shape143.setGeometry(&IndexedFaceSet146);

Transform142.addChild(&Shape143);

Transform141.addChild(&Transform142);

Transform& Transform148 =  Transform();
Transform148.setTranslation(new float[]{-0.0280126,-1.53561,1.35645});
Transform148.setRotation(new float[]{-1.0,0.0,0.0,1.56956});
Transform148.setScale(new float[]{9.35746,9.35746,13.4537});
Shape& Shape149 =  Shape();
Appearance& Appearance150 =  Appearance();
Material& Material151 =  Material();
Material151.setUSE(CString("_9"));
Appearance150.addChild(&Material151);

Shape149.addChild(&Appearance150);

IndexedFaceSet& IndexedFaceSet152 =  IndexedFaceSet();
IndexedFaceSet152.setColorPerVertex(false);
IndexedFaceSet152.setColorIndex(new int[]{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0}, 71);
IndexedFaceSet152.setCoordIndex(new int32_t[]{19,22,8,7,-1,24,23,9,10,-1,26,25,11,12,-1,27,28,14,13,-1,29,30,16,15,-1,32,31,17,18,-1,50,51,52,53,-1,53,52,54,55,-1,56,50,53,55,-1,55,54,57,56,-1,51,57,54,52,-1,56,57,51,50,-1,60,84,59,61,62,-1,65,66,67,68,-1,68,67,69,70,-1,71,65,68,70,-1,70,69,72,71,-1,66,72,69,67,-1,71,72,66,65,-1,76,75,78,77,-1,73,78,75,74,-1,32,30,29,31,-1,15,16,18,17,-1,31,37,2,17,-1,29,81,37,31,-1,6,5,33,34,-1,21,34,33,20,-1,24,22,19,23,-1,7,8,10,9,-1,3,4,21,20,-1,28,27,25,26,-1,13,14,12,11,-1,35,36,0,1,-1,9,23,35,1,-1,23,19,35,-1,33,5,2,37,-1,20,33,37,-1,19,20,37,35,-1,9,1,3,7,-1,3,20,19,7,-1,79,28,26,36,-1,26,12,0,36,-1,79,80,14,28,-1,12,14,80,0,-1,83,58,59,84,-1,85,45,47,86,-1,84,60,46,85,-1,86,83,84,85,-1,49,48,88,87,-1,82,91,90,-1,91,87,90,-1,87,89,90,-1,82,90,46,60,62,63,-1,80,79,63,64,-1,15,17,2,48,-1,81,29,15,48,-1,95,93,92,94,-1,96,42,43,97,-1,98,73,74,99,-1,99,96,97,98,-1,99,74,75,76,-1,99,76,41,96,-1,40,42,96,41,-1,89,87,38,-1,87,88,44,41,-1,38,87,41,-1,45,85,46,90,89,38,39,-1,38,41,76,77,-1,97,43,39,38,-1,77,98,97,38,-1,77,78,73,98,-1}, 354);
CColor& Color153 =  CColor();
Color153.setColor(new float[]{0.659574,0.659574,0.659574,0.0,0.0187199,0.0481283}, 6);
IndexedFaceSet152.setColor(&Color153);

Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{-0.918773,0.379005,0.0,0.55397,0.379005,0.0,0.55397,-0.422948,0.0,0.55397,-0.131194,0.0,0.597169,-0.131194,0.0,0.55397,-0.289109,0.0,0.597169,-0.289109,0.0,0.55397,0.106842,0.0797785,0.597169,0.106842,0.0797785,0.55397,0.265779,0.0797785,0.597169,0.265779,0.0797785,-0.962286,0.212139,0.0797785,-0.918773,0.212139,0.0797785,-0.962286,0.0568306,0.0797785,-0.918773,0.0568306,0.0797785,0.0640951,-0.422948,0.0797785,0.0641975,-0.456811,0.0797785,0.217765,-0.422948,0.0797785,0.217866,-0.456346,0.0797785,0.55397,0.106842,0.211901,0.55397,-0.131194,0.211901,0.597169,-0.131194,0.211901,0.597169,0.106842,0.211901,0.55397,0.265779,0.211901,0.597169,0.265779,0.211901,-0.962286,0.212139,0.211901,-0.918773,0.212139,0.211901,-0.962286,0.0568306,0.211901,-0.918773,0.0568306,0.211901,0.0640951,-0.422948,0.211901,0.0641975,-0.456811,0.211901,0.217765,-0.422948,0.211901,0.217866,-0.456346,0.211901,0.55397,-0.289109,0.211901,0.597169,-0.289109,0.211901,0.55397,0.379005,0.27253,-0.918773,0.379005,0.27253,0.55397,-0.422948,0.27253,0.0999169,0.0370409,0.27253,0.0999169,0.0370413,2.29598e-7,0.114918,0.0164737,2.23517e-7,0.114918,0.0164733,0.27253,0.114918,0.0451801,2.83122e-7,0.0999169,0.0451801,2.83122e-7,0.114918,0.0164736,1.63913e-7,-0.18324,0.0370424,1.67359e-7,-0.156861,0.0370419,0.27253,-0.18392,0.0164746,1.63913e-7,-0.0490293,-0.422947,-2.68221e-7,-0.0490293,-0.422948,0.27253,-0.385034,0.0193376,0.270995,-0.385034,0.019338,2.23517e-7,-0.364466,0.019338,2.23517e-7,-0.364466,0.0193376,0.270995,-0.364466,0.0621717,2.83122e-7,-0.364466,0.0621713,0.270995,-0.385034,0.0621713,0.270995,-0.385034,0.0621717,2.83122e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0370417,1.93715e-7,-0.326241,0.0370413,0.27253,-0.918773,0.0370423,2.23517e-7,-0.918773,0.037042,0.27253,-0.918773,0.0164741,0.27253,-0.918773,0.0164745,1.93715e-7,-0.385034,0.174854,0.270995,-0.385034,0.174854,4.02331e-7,-0.364466,0.174854,4.02331e-7,-0.364466,0.174854,0.270995,-0.364466,0.383761,6.4075e-7,-0.364466,0.383761,0.270996,-0.385034,0.383761,0.270996,-0.385034,0.383761,6.4075e-7,0.0999169,0.196089,3.72529e-7,0.114918,0.196089,3.42727e-7,0.114918,0.383761,5.51343e-7,0.114918,0.383761,0.27253,0.0999169,0.383761,0.27253,0.0999169,0.383761,5.81145e-7,-0.918773,0.0300454,0.27253,-0.918773,0.0300454,0.0,-0.0490293,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.326241,0.0164736,0.215145,-0.326241,0.0370414,0.215145,-0.18324,0.0370421,0.215145,-0.18392,0.0164743,0.215145,-0.0490292,0.0164738,0.27253,-0.0490292,0.0164745,2.10643e-7,-0.0640303,0.0370415,0.27253,-0.0743143,0.0370416,0.27253,-0.0593131,0.0164738,0.27253,-0.0695971,-0.422948,0.27253,-0.0695971,0.0279736,0.27253,-0.0490293,-0.422948,0.27253,-0.0490292,0.0279736,0.27253,0.114918,0.0451798,0.210192,0.0999169,0.0451798,0.210192,0.0999169,0.196089,0.208979,0.114918,0.196089,0.208979}, 300);
IndexedFaceSet152.setCoord(&Coordinate154);

Shape149.setGeometry(&IndexedFaceSet152);

Transform148.addChild(&Shape149);

Transform141.addChild(&Transform148);

Transform& Transform155 =  Transform();
Transform155.setTranslation(new float[]{-0.0280126,-1.53561,1.35645});
Transform155.setRotation(new float[]{-1.0,0.0,0.0,1.56956});
Transform155.setScale(new float[]{9.35746,9.35746,13.4537});
Shape& Shape156 =  Shape();
Appearance& Appearance157 =  Appearance();
Material& Material158 =  Material();
Material158.setUSE(CString("_9"));
Appearance157.addChild(&Material158);

Shape156.addChild(&Appearance157);

IndexedFaceSet& IndexedFaceSet159 =  IndexedFaceSet();
IndexedFaceSet159.setSolid(false);
IndexedFaceSet159.setColorPerVertex(false);
IndexedFaceSet159.setColorIndex(new int[]{0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}, 26);
IndexedFaceSet159.setCoordIndex(new int32_t[]{0,1,2,3,-1,2,4,3,-1,5,3,4,6,-1,5,6,7,-1,7,2,1,8,-1,5,7,8,9,-1,10,9,0,11,-1,12,0,3,13,14,-1,11,0,12,15,-1,11,15,16,17,-1,10,11,18,19,-1,20,18,11,-1,20,11,21,-1,11,17,21,-1,20,21,22,23,-1,23,22,10,19,-1,24,25,26,17,-1,17,26,21,-1,27,13,3,17,16,-1,8,28,9,-1,9,28,29,0,-1,0,29,1,-1,30,3,5,31,-1,30,32,17,3,-1,32,33,24,17,-1,5,24,33,31,-1}, 124);
CColor& Color160 =  CColor();
Color160.setColor(new float[]{0.659574,0.659574,0.659574,0.0,0.0187199,0.0481283}, 6);
IndexedFaceSet159.setColor(&Color160);

Coordinate& Coordinate161 =  Coordinate();
Coordinate161.setPoint(new float[]{-0.962286,0.409388,0.27253,-0.962286,0.0568306,0.211901,-0.962286,-0.104811,0.211901,-0.962174,-0.459919,0.27253,-0.962286,-0.342562,0.211901,-0.962174,-0.459919,0.0,-0.962286,-0.342562,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,0.0568306,0.0797785,-0.962286,0.409388,0.0,0.597169,0.409388,0.0,0.597169,0.409388,0.27253,-0.918773,0.379005,0.27253,-0.918773,-0.422948,0.27253,-0.918773,0.0300454,0.27253,0.55397,0.379005,0.27253,0.55397,-0.422948,0.27253,0.597267,-0.455197,0.27253,0.597169,0.265779,0.211901,0.597169,0.265779,0.0797785,0.597169,0.106842,0.211901,0.597169,-0.131194,0.211901,0.597169,-0.131194,0.0,0.597169,0.106842,0.0797785,0.597267,-0.455197,0.0,0.597169,-0.289109,0.0,0.597169,-0.289109,0.211901,-0.0597836,-0.422948,0.27253,-0.962286,0.212139,0.0797785,-0.962286,0.212139,0.211901,0.0641975,-0.456811,0.211901,0.0641975,-0.456811,0.0797785,0.217866,-0.456346,0.211901,0.217866,-0.456346,0.0797785}, 102);
IndexedFaceSet159.setCoord(&Coordinate161);

Shape156.setGeometry(&IndexedFaceSet159);

Transform155.addChild(&Shape156);

Transform141.addChild(&Transform155);

Transform64.addChild(&Transform141);

Collision63.addChildren(&Transform64);

Transform62.addChild(&Collision63);

Transform9.addChild(&Transform62);

Transform& Transform162 =  Transform();
Transform162.setDEF(CString("ebene"));
Shape& Shape163 =  Shape();
Appearance& Appearance164 =  Appearance();
Material& Material165 =  Material();
Material165.setAmbientIntensity(0.790323);
Material165.setDiffuseColor(new float[]{0.659574,0.659574,0.659574});
Material165.setShininess(0);
Appearance164.addChild(&Material165);

Shape163.addChild(&Appearance164);

IndexedFaceSet& IndexedFaceSet166 =  IndexedFaceSet();
IndexedFaceSet166.setCreaseAngle(0.5);
IndexedFaceSet166.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1}, 8);
Coordinate& Coordinate167 =  Coordinate();
Coordinate167.setPoint(new float[]{-8.99842,-1.54875,-2.45919,-8.99842,-1.54875,5.57903,5.55036,-1.54875,5.57903,5.55036,-1.54875,-2.45919}, 12);
IndexedFaceSet166.setCoord(&Coordinate167);

Shape163.setGeometry(&IndexedFaceSet166);

Transform162.addChild(&Shape163);

Transform9.addChild(&Transform162);

Collision& Collision168 =  Collision();
Collision168.setEnabled(false);
Transform& Transform169 =  Transform();
Shape& Shape170 =  Shape();
Appearance& Appearance171 =  Appearance();
Material& Material172 =  Material();
Material172.setAmbientIntensity(0.790323);
Material172.setDiffuseColor(new float[]{0.659574,0.659574,0.659574});
Material172.setShininess(0);
Appearance171.addChild(&Material172);

Shape170.addChild(&Appearance171);

IndexedFaceSet& IndexedFaceSet173 =  IndexedFaceSet();
IndexedFaceSet173.setCreaseAngle(0.5);
IndexedFaceSet173.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
Coordinate& Coordinate174 =  Coordinate();
Coordinate174.setPoint(new float[]{-9.00445,2.14621,5.56747,5.49389,2.14621,5.56747,5.49389,2.14621,-2.42974,-9.00445,2.14621,-2.42974}, 12);
IndexedFaceSet173.setCoord(&Coordinate174);

Shape170.setGeometry(&IndexedFaceSet173);

Transform169.addChild(&Shape170);

Collision168.addChildren(&Transform169);

Transform9.addChild(&Collision168);

Scene7.addChild(&Transform9);

DirectionalLight& DirectionalLight175 =  DirectionalLight();
DirectionalLight175.setDEF(CString("Light1"));
DirectionalLight175.setAmbientIntensity(1);
DirectionalLight175.setDirection(new float[]{0.572447,-0.644191,-0.50727});
Scene7.addChild(&DirectionalLight175);

Transform& Transform176 =  Transform();
Transform176.setDEF(CString("texture-sleep_1"));
Switch& Switch177 =  Switch();
Switch177.setDEF(CString("_10"));
Switch177.setWhichChoice(0);
Transform& Transform178 =  Transform();
Switch177.addChild(&Transform178);

Transform& Transform179 =  Transform();
Transform179.setDEF(CString("texture-sleep"));
Transform& Transform180 =  Transform();
Transform180.setDEF(CString("room_no-collide"));
Collision& Collision181 =  Collision();
Collision181.setEnabled(false);
Transform& Transform182 =  Transform();
Transform182.setDEF(CString("moebel"));
Transform& Transform183 =  Transform();
Transform183.setDEF(CString("schrank"));
Transform183.setTranslation(new float[]{-1.26166,-0.218976,3.35488});
Transform183.setRotation(new float[]{0.000621337,-1.0,-0.000618129,1.56562});
Transform183.setScale(new float[]{1.84464,1.3191,0.425435});
Shape& Shape184 =  Shape();
Appearance& Appearance185 =  Appearance();
Material& Material186 =  Material();
Material186.setDEF(CString("_11"));
Material186.setAmbientIntensity(0.691489);
Material186.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material186.setEmissiveColor(new float[]{0.180851,0.180851,0.180851});
Appearance185.addChild(&Material186);

ImageTexture& ImageTexture187 =  ImageTexture();
ImageTexture187.setDEF(CString("_12"));
ImageTexture187.setUrl(new CString[]{CString("schrank_dunkel128.png")}, 1);
Appearance185.addChild(&ImageTexture187);

Shape184.addChild(&Appearance185);

IndexedFaceSet& IndexedFaceSet188 =  IndexedFaceSet();
IndexedFaceSet188.setCreaseAngle(0.5);
IndexedFaceSet188.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,26,27,14,6,8,28,29,-1,10,4,12,0,1,3,2,-1,5,24,25,7,-1,11,18,19,9,-1,16,17,20,21,-1,13,22,23,15,-1}, 51);
IndexedFaceSet188.setCoordIndex(new int32_t[]{4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,13,9,10,2,4,-1,11,8,12,1,7,5,3,-1,8,11,10,9,-1,11,3,2,10,-1,0,1,12,13,-1,12,8,9,13,-1}, 51);
TextureCoordinate& TextureCoordinate189 =  TextureCoordinate();
TextureCoordinate189.setPoint(new float[]{0.485065,0.999081,0.485065,-0.000919342,1.0,1.0,1.0,0.0,0.5,1.0,0.0153094,0.0,0.737301,-0.00000224775,0.0153094,0.999837,0.867013,-0.00000224775,0.0153094,0.999837,0.75,1.0,0.0153094,0.0,0.25,1.0,0.0153094,0.0,0.607589,-0.00000224775,0.0153094,0.999837,0.0153094,0.999837,0.0153094,0.0,0.441416,0.0,0.441416,0.999837,0.441416,0.0,0.441416,0.999837,0.441416,0.0,0.441416,0.999837,0.441416,0.0,0.441416,0.999837,0.477877,0.997553,0.477877,-0.00000224775,0.996724,-0.00000224775,0.996724,0.997553}, 60);
IndexedFaceSet188.setTexCoord(&TextureCoordinate189);

Coordinate& Coordinate190 =  Coordinate();
Coordinate190.setPoint(new float[]{-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,1.0,1.0,1.0,-1.0,1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,0.0,-1.0,1.0,0.0,1.0,1.0,0.5,1.0,1.0,0.5,-1.0,1.0,-0.5,-1.0,1.0,-0.5,1.0,1.0}, 42);
IndexedFaceSet188.setCoord(&Coordinate190);

Shape184.setGeometry(&IndexedFaceSet188);

Transform183.addChild(&Shape184);

Transform182.addChild(&Transform183);

Transform& Transform191 =  Transform();
Transform191.setDEF(CString("nachtschrank1"));
Transform191.setTranslation(new float[]{-2.87892,-1.21038,4.95799});
Transform191.setRotation(new float[]{0.000614949,1.0,0.000618131,1.57596});
Transform191.setScale(new float[]{3.29672,3.29673,3.53468});
Shape& Shape192 =  Shape();
Appearance& Appearance193 =  Appearance();
Material& Material194 =  Material();
Material194.setUSE(CString("_11"));
Appearance193.addChild(&Material194);

ImageTexture& ImageTexture195 =  ImageTexture();
ImageTexture195.setUSE(CString("_12"));
Appearance193.addChild(&ImageTexture195);

Shape192.addChild(&Appearance193);

IndexedFaceSet& IndexedFaceSet196 =  IndexedFaceSet();
IndexedFaceSet196.setCreaseAngle(0.5);
IndexedFaceSet196.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet196.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate197 =  TextureCoordinate();
TextureCoordinate197.setPoint(new float[]{0.472134,0.995788,0.472134,-0.0042125,1.0,1.0,1.0,0.0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716}, 16);
IndexedFaceSet196.setTexCoord(&TextureCoordinate197);

Coordinate& Coordinate198 =  Coordinate();
Coordinate198.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1}, 24);
IndexedFaceSet196.setCoord(&Coordinate198);

Shape192.setGeometry(&IndexedFaceSet196);

Transform191.addChild(&Shape192);

Transform182.addChild(&Transform191);

Transform& Transform199 =  Transform();
Transform199.setDEF(CString("nachtschrank2"));
Transform199.setTranslation(new float[]{-6.52379,-1.21041,4.97681});
Transform199.setRotation(new float[]{0.000614949,1.0,0.000618131,1.57596});
Transform199.setScale(new float[]{3.29672,3.29673,3.53468});
Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Material202.setUSE(CString("_11"));
Appearance201.addChild(&Material202);

ImageTexture& ImageTexture203 =  ImageTexture();
ImageTexture203.setUSE(CString("_12"));
Appearance201.addChild(&ImageTexture203);

Shape200.addChild(&Appearance201);

IndexedFaceSet& IndexedFaceSet204 =  IndexedFaceSet();
IndexedFaceSet204.setCreaseAngle(0.5);
IndexedFaceSet204.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet204.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate205 =  TextureCoordinate();
TextureCoordinate205.setPoint(new float[]{0.472134,0.995788,0.472134,-0.0042125,1.0,1.0,1.0,0.0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716}, 16);
IndexedFaceSet204.setTexCoord(&TextureCoordinate205);

Coordinate& Coordinate206 =  Coordinate();
Coordinate206.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1}, 24);
IndexedFaceSet204.setCoord(&Coordinate206);

Shape200.setGeometry(&IndexedFaceSet204);

Transform199.addChild(&Shape200);

Transform182.addChild(&Transform199);

Transform& Transform207 =  Transform();
Transform207.setDEF(CString("kommode"));
Transform207.setTranslation(new float[]{-7.72612,-1.20631,1.66272});
Transform207.setRotation(new float[]{0.000618533,-1.0,-0.000618759,1.57078});
Transform207.setScale(new float[]{3.29672,3.29673,8.10267});
Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
Material& Material210 =  Material();
Material210.setUSE(CString("_11"));
Appearance209.addChild(&Material210);

ImageTexture& ImageTexture211 =  ImageTexture();
ImageTexture211.setUSE(CString("_12"));
Appearance209.addChild(&ImageTexture211);

Shape208.addChild(&Appearance209);

IndexedFaceSet& IndexedFaceSet212 =  IndexedFaceSet();
IndexedFaceSet212.setCreaseAngle(0.5);
IndexedFaceSet212.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,11,2,-1,0,1,3,9,2,-1,4,5,12,13,-1,8,6,7,10,-1}, 37);
IndexedFaceSet212.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,6,0,2,9,4,-1,1,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1}, 37);
TextureCoordinate& TextureCoordinate213 =  TextureCoordinate();
TextureCoordinate213.setPoint(new float[]{0.472134,0.995788,0.472134,-0.0042125,1.0,1.0,1.0,0.0,0.440312,0.994282,0.440312,0.00105374,0.445231,-0.000790729,0.445231,0.992437,0.0145956,-0.000790729,1.0,0.5,0.0145956,0.992437,1.0,0.5,0.013069,-0.00208779,0.013069,0.99114}, 28);
IndexedFaceSet212.setTexCoord(&TextureCoordinate213);

Coordinate& Coordinate214 =  Coordinate();
Coordinate214.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.0,0.1,0.1,0.0}, 30);
IndexedFaceSet212.setCoord(&Coordinate214);

Shape208.setGeometry(&IndexedFaceSet212);

Transform207.addChild(&Shape208);

Transform182.addChild(&Transform207);

Transform& Transform215 =  Transform();
Transform215.setDEF(CString("bett"));
Transform& Transform216 =  Transform();
Transform216.setDEF(CString("matratze"));
Transform216.setTranslation(new float[]{-4.68535,-1.04265,3.81501});
Transform216.setRotation(new float[]{4.16334e-16,1.0,0.00061813,3.14159});
Transform216.setScale(new float[]{11.9506,1.48808,12.1488});
Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setAmbientIntensity(0);
Material219.setDiffuseColor(new float[]{0.357752,0.457447,0.341974});
Material219.setEmissiveColor(new float[]{0.141437,0.180851,0.135199});
Material219.setShininess(0);
Appearance218.addChild(&Material219);

ImageTexture& ImageTexture220 =  ImageTexture();
ImageTexture220.setUrl(new CString[]{CString("plaid.png")}, 1);
Appearance218.addChild(&ImageTexture220);

TextureTransform& TextureTransform221 =  TextureTransform();
TextureTransform221.setScale(new float[]{4.0,4.0});
Appearance218.setTextureTransform(TextureTransform221);

Shape217.addChild(&Appearance218);

IndexedFaceSet& IndexedFaceSet222 =  IndexedFaceSet();
IndexedFaceSet222.setCreaseAngle(3.14159);
IndexedFaceSet222.setTexCoordIndex(new int32_t[]{2,3,4,5,-1,6,7,1,0,-1,0,1,3,2,-1,5,4,7,6,-1,0,2,5,6,-1}, 25);
IndexedFaceSet222.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1}, 25);
TextureCoordinate& TextureCoordinate223 =  TextureCoordinate();
TextureCoordinate223.setPoint(new float[]{0.0529627,0.947037,0.0,1.0,0.0529627,0.0529626,0.0,0.0,1.0,0.0,0.947037,0.0529626,0.947037,0.947037,1.0,1.0}, 16);
IndexedFaceSet222.setTexCoord(&TextureCoordinate223);

Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setPoint(new float[]{-0.1,-0.0133314,0.1,-0.111847,-0.1,0.111847,0.1,-0.0133314,0.1,0.111847,-0.1,0.111847,0.1,-0.0133314,-0.1,0.111847,-0.1,-0.111847,-0.1,-0.0133314,-0.1,-0.111847,-0.1,-0.111847}, 24);
IndexedFaceSet222.setCoord(&Coordinate224);

Shape217.setGeometry(&IndexedFaceSet222);

Transform216.addChild(&Shape217);

Transform215.addChild(&Transform216);

Transform& Transform225 =  Transform();
Transform225.setDEF(CString("bettkasten"));
Transform225.setTranslation(new float[]{-4.68535,-1.35494,3.81463});
Transform225.setRotation(new float[]{2.22045e-16,1.0,0.00061813,3.14159});
Transform225.setScale(new float[]{14.7529,1.83703,14.9976});
Shape& Shape226 =  Shape();
Appearance& Appearance227 =  Appearance();
Material& Material228 =  Material();
Material228.setUSE(CString("_11"));
Appearance227.addChild(&Material228);

ImageTexture& ImageTexture229 =  ImageTexture();
ImageTexture229.setUSE(CString("_12"));
Appearance227.addChild(&ImageTexture229);

Shape226.addChild(&Appearance227);

IndexedFaceSet& IndexedFaceSet230 =  IndexedFaceSet();
IndexedFaceSet230.setCreaseAngle(0.5);
IndexedFaceSet230.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet230.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate231 =  TextureCoordinate();
TextureCoordinate231.setPoint(new float[]{0.525544,1.00043,0.525544,0.000431776,1.0,1.0,1.0,0.0}, 8);
IndexedFaceSet230.setTexCoord(&TextureCoordinate231);

Coordinate& Coordinate232 =  Coordinate();
Coordinate232.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1}, 24);
IndexedFaceSet230.setCoord(&Coordinate232);

Shape226.setGeometry(&IndexedFaceSet230);

Transform225.addChild(&Shape226);

Transform215.addChild(&Transform225);

Transform182.addChild(&Transform215);

Collision181.addChildren(&Transform182);

Transform& Transform233 =  Transform();
Transform233.setDEF(CString("accessoires"));
Transform& Transform234 =  Transform();
Transform234.setDEF(CString("poster"));
Transform234.setTranslation(new float[]{-4.75627,0.3135,5.30164});
Transform234.setScale(new float[]{1.5185,1.5185,1.51852});
Shape& Shape235 =  Shape();
Appearance& Appearance236 =  Appearance();
ImageTexture& ImageTexture237 =  ImageTexture();
ImageTexture237.setUrl(new CString[]{CString("poster.png")}, 1);
Appearance236.addChild(&ImageTexture237);

Shape235.addChild(&Appearance236);

IndexedFaceSet& IndexedFaceSet238 =  IndexedFaceSet();
IndexedFaceSet238.setSolid(false);
IndexedFaceSet238.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate239 =  TextureCoordinate();
TextureCoordinate239.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet238.setTexCoord(&TextureCoordinate239);

Coordinate& Coordinate240 =  Coordinate();
Coordinate240.setPoint(new float[]{-0.746,-0.5,0.0,0.746,-0.5,0.0,0.746,0.5,0.0,-0.746,0.5,0.0}, 12);
IndexedFaceSet238.setCoord(&Coordinate240);

Shape235.setGeometry(&IndexedFaceSet238);

Transform234.addChild(&Shape235);

Transform233.addChild(&Transform234);

Transform& Transform241 =  Transform();
Transform241.setDEF(CString("pflanze"));
Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{-7.47428,-1.37334,4.31764});
Transform242.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform242.setScale(new float[]{1.38524,1.38524,1.38524});
Shape& Shape243 =  Shape();
Appearance& Appearance244 =  Appearance();
Material& Material245 =  Material();
Material245.setAmbientIntensity(0.442353);
Material245.setDiffuseColor(new float[]{0.361702,0.0,0.0373073});
Appearance244.addChild(&Material245);

Shape243.addChild(&Appearance244);

IndexedFaceSet& IndexedFaceSet246 =  IndexedFaceSet();
IndexedFaceSet246.setCreaseAngle(0.5);
IndexedFaceSet246.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1,32,31,29,-1,32,29,27,-1,32,27,25,-1,32,25,23,-1,32,23,21,-1,32,21,19,-1,32,19,17,-1,32,17,15,-1,32,15,13,-1,32,13,11,-1,32,11,9,-1,32,9,7,-1,32,7,5,-1,32,5,3,-1,32,3,1,-1,32,1,31,-1,33,0,2,-1,33,2,4,-1,33,4,6,-1,33,6,8,-1,33,8,10,-1,33,10,12,-1,33,12,14,-1,33,14,16,-1,33,16,18,-1,33,18,20,-1,33,20,22,-1,33,22,24,-1,33,24,26,-1,33,26,28,-1,33,28,30,-1,33,30,0,-1}, 208);
Coordinate& Coordinate247 =  Coordinate();
Coordinate247.setPoint(new float[]{0.0,-0.1,-0.1,-3.72529e-8,0.1,-0.130838,0.0382683,-0.1,-0.092388,0.0500695,0.1,-0.120879,0.0707107,-0.1,-0.0707107,0.0925166,0.1,-0.0925166,0.092388,-0.1,-0.0382683,0.120879,0.1,-0.0500695,0.1,-0.1,4.37114e-9,0.130838,0.1,2.23517e-8,0.092388,-0.1,0.0382684,0.120879,0.1,0.0500697,0.0707107,-0.1,0.0707107,0.0925166,0.1,0.0925166,0.0382683,-0.1,0.092388,0.0500695,0.1,0.120879,1.50996e-8,-0.1,0.1,-1.49012e-8,0.1,0.130838,-0.0382683,-0.1,0.092388,-0.0500696,0.1,0.120879,-0.0707107,-0.1,0.0707107,-0.0925166,0.1,0.0925166,-0.092388,-0.1,0.0382684,-0.120879,0.1,0.0500697,-0.1,-0.1,-1.19249e-9,-0.130838,0.1,2.98023e-8,-0.0923879,-0.1,-0.0382684,-0.120879,0.1,-0.0500697,-0.0707107,-0.1,-0.0707107,-0.0925166,0.1,-0.0925166,-0.0382683,-0.1,-0.092388,-0.0500696,0.1,-0.120879,-2.59947e-8,0.1,2.59947e-8,0.0,-0.1,0.0}, 102);
IndexedFaceSet246.setCoord(&Coordinate247);

Shape243.setGeometry(&IndexedFaceSet246);

Transform242.addChild(&Shape243);

Transform241.addChild(&Transform242);

Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{-7.47388,-0.26519,4.31929});
Transform248.setRotation(new float[]{0.0,-1.0,0.0,0.421223});
Transform248.setScale(new float[]{0.670034,1.99229,0.670032});
Transform248.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.0185162});
Shape& Shape249 =  Shape();
Appearance& Appearance250 =  Appearance();
ImageTexture& ImageTexture251 =  ImageTexture();
ImageTexture251.setUrl(new CString[]{CString("baum1.png")}, 1);
Appearance250.addChild(&ImageTexture251);

Shape249.addChild(&Appearance250);

IndexedFaceSet& IndexedFaceSet252 =  IndexedFaceSet();
IndexedFaceSet252.setSolid(false);
IndexedFaceSet252.setColorIndex(new int[]{-1}, 1);
IndexedFaceSet252.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
TextureCoordinate& TextureCoordinate253 =  TextureCoordinate();
TextureCoordinate253.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet252.setTexCoord(&TextureCoordinate253);

Coordinate& Coordinate254 =  Coordinate();
Coordinate254.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0,5.36441e-7,-0.5,-0.5,-0.00000149012,-0.5,0.5,-0.00000149012,0.5,0.5,5.36441e-7,0.5,-0.5}, 24);
IndexedFaceSet252.setCoord(&Coordinate254);

Shape249.setGeometry(&IndexedFaceSet252);

Transform248.addChild(&Shape249);

Transform241.addChild(&Transform248);

Transform233.addChild(&Transform241);

Collision181.addChildren(&Transform233);

Transform& Transform255 =  Transform();
Transform255.setDEF(CString("raum"));
Transform& Transform256 =  Transform();
Transform256.setDEF(CString("decke"));
Transform256.setTranslation(new float[]{-0.0280126,-1.53561,1.35645});
Transform256.setRotation(new float[]{-1.0,0.0,0.0,1.56956});
Transform256.setScale(new float[]{9.35746,9.35746,13.4537});
Shape& Shape257 =  Shape();
Appearance& Appearance258 =  Appearance();
Material& Material259 =  Material();
Material259.setAmbientIntensity(1);
Material259.setDiffuseColor(new float[]{0.901179,0.969637,1.0});
Material259.setEmissiveColor(new float[]{0.38348,0.412612,0.425532});
Appearance258.addChild(&Material259);

ImageTexture& ImageTexture260 =  ImageTexture();
ImageTexture260.setDEF(CString("_13"));
ImageTexture260.setUrl(new CString[]{CString("speck.paper.png")}, 1);
Appearance258.addChild(&ImageTexture260);

TextureTransform& TextureTransform261 =  TextureTransform();
TextureTransform261.setDEF(CString("_14"));
TextureTransform261.setScale(new float[]{2.89501,1.0});
Appearance258.setTextureTransform(TextureTransform261);

Shape257.addChild(&Appearance258);

IndexedFaceSet& IndexedFaceSet262 =  IndexedFaceSet();
IndexedFaceSet262.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate263 =  TextureCoordinate();
TextureCoordinate263.setPoint(new float[]{0.0,0.0,0.0,0.511752,1.0,0.511752,1.0,0.0}, 8);
IndexedFaceSet262.setTexCoord(&TextureCoordinate263);

Coordinate& Coordinate264 =  Coordinate();
Coordinate264.setPoint(new float[]{-0.918773,-0.422948,0.27253,-0.918773,0.0164741,0.27253,-0.0601114,0.0164738,0.27253,-0.0601114,-0.422948,0.27253}, 12);
IndexedFaceSet262.setCoord(&Coordinate264);

Shape257.setGeometry(&IndexedFaceSet262);

Transform256.addChild(&Shape257);

Transform255.addChild(&Transform256);

Transform& Transform265 =  Transform();
Transform265.setDEF(CString("tapete"));
Transform265.setTranslation(new float[]{-0.0280126,-1.53561,1.35645});
Transform265.setRotation(new float[]{-1.0,0.0,0.0,1.56956});
Transform265.setScale(new float[]{9.35746,9.35746,13.4537});
Shape& Shape266 =  Shape();
Appearance& Appearance267 =  Appearance();
Material& Material268 =  Material();
Material268.setAmbientIntensity(0.980392);
Material268.setDiffuseColor(new float[]{0.542553,0.542553,0.542553});
Material268.setShininess(0.148936);
Appearance267.addChild(&Material268);

ImageTexture& ImageTexture269 =  ImageTexture();
ImageTexture269.setUSE(CString("_13"));
Appearance267.addChild(&ImageTexture269);

TextureTransform& TextureTransform270 =  TextureTransform();
TextureTransform270.setUSE(CString("_14"));
Appearance267.setTextureTransform(TextureTransform270);

Shape266.addChild(&Appearance267);

IndexedFaceSet& IndexedFaceSet271 =  IndexedFaceSet();
IndexedFaceSet271.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,28,27,26,5,-1,0,1,1,0,-1,5,26,29,6,-1,3,7,7,3,-1,1,0,0,1,-1,4,27,28,30,-1,29,4,30,6,-1,8,25,9,10,-1,15,16,17,18,-1,19,20,21,22,-1,22,15,18,-1,22,18,19,-1,11,12,23,24,-1,23,13,14,24,-1}, 73);
IndexedFaceSet271.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1}, 73);
TextureCoordinate& TextureCoordinate272 =  TextureCoordinate();
TextureCoordinate272.setPoint(new float[]{0.0432628,0.395189,0.0216314,0.395189,0.0216314,0.157438,0.0432628,0.157438,0.176379,0.293702,0.996431,0.987509,0.996193,0.00619312,0.0216314,0.909388,1.75058,0.99962,0.000984462,0.00331701,1.75058,0.00331701,1.0,0.0,1.0,1.0,0.0324233,1.0,0.0324228,0.0,1.51503,0.2131,1.51503,0.99962,1.75058,0.99962,1.75058,0.00331701,0.000984462,0.00331701,0.000984462,0.99962,1.2218,0.99962,1.2218,0.2131,0.516212,1.0,0.516211,0.0,0.000984462,0.99962,0.719415,0.769281,0.176494,0.769444,-0.00701949,0.987809,0.719299,0.293539,-0.00725818,0.00649359}, 62);
IndexedFaceSet271.setTexCoord(&TextureCoordinate272);

Coordinate& Coordinate273 =  Coordinate();
Coordinate273.setPoint(new float[]{-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0.0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8}, 66);
IndexedFaceSet271.setCoord(&Coordinate273);

Shape266.setGeometry(&IndexedFaceSet271);

Transform265.addChild(&Shape266);

Transform255.addChild(&Transform265);

Transform& Transform274 =  Transform();
Transform274.setDEF(CString("fussboden"));
Transform274.setTranslation(new float[]{-4.79598,-2.95784,3.3361});
Transform274.setRotation(new float[]{0.0,1.0,0.0,3.14159});
Transform274.setScale(new float[]{4.18476,1.41953,2.17788});
Shape& Shape275 =  Shape();
Appearance& Appearance276 =  Appearance();
Material& Material277 =  Material();
Material277.setAmbientIntensity(0.557037);
Material277.setDiffuseColor(new float[]{0.268975,0.287234,0.24213});
Material277.setEmissiveColor(new float[]{0.448291,0.478723,0.40355});
Appearance276.addChild(&Material277);

ImageTexture& ImageTexture278 =  ImageTexture();
ImageTexture278.setUrl(new CString[]{CString("granite.2.png")}, 1);
Appearance276.addChild(&ImageTexture278);

TextureTransform& TextureTransform279 =  TextureTransform();
TextureTransform279.setScale(new float[]{2.0,1.0});
Appearance276.setTextureTransform(TextureTransform279);

Shape275.addChild(&Appearance276);

IndexedFaceSet& IndexedFaceSet280 =  IndexedFaceSet();
IndexedFaceSet280.setCreaseAngle(0.5);
IndexedFaceSet280.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate281 =  TextureCoordinate();
TextureCoordinate281.setPoint(new float[]{0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0}, 8);
IndexedFaceSet280.setTexCoord(&TextureCoordinate281);

Coordinate& Coordinate282 =  Coordinate();
Coordinate282.setPoint(new float[]{-1.0,1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0}, 12);
IndexedFaceSet280.setCoord(&Coordinate282);

Shape275.setGeometry(&IndexedFaceSet280);

Transform274.addChild(&Shape275);

Transform255.addChild(&Transform274);

Collision181.addChildren(&Transform255);

Transform180.addChild(&Collision181);

Transform179.addChild(&Transform180);

Transform& Transform283 =  Transform();
Transform283.setDEF(CString("ausblick"));
Transform& Transform284 =  Transform();
Transform284.setTranslation(new float[]{-11.1133,1.31898,2.05622});
Transform284.setRotation(new float[]{0.0,1.0,0.0,1.5708});
Transform284.setScale(new float[]{6.78219,6.78219,6.78219});
Shape& Shape285 =  Shape();
Appearance& Appearance286 =  Appearance();
ImageTexture& ImageTexture287 =  ImageTexture();
ImageTexture287.setUrl(new CString[]{CString("env.png")}, 1);
Appearance286.addChild(&ImageTexture287);

Shape285.addChild(&Appearance286);

IndexedFaceSet& IndexedFaceSet288 =  IndexedFaceSet();
IndexedFaceSet288.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate289 =  TextureCoordinate();
TextureCoordinate289.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet288.setTexCoord(&TextureCoordinate289);

Coordinate& Coordinate290 =  Coordinate();
Coordinate290.setPoint(new float[]{-0.7442,-0.5,0.0,0.7442,-0.5,0.0,0.7442,0.5,0.0,-0.7442,0.5,0.0}, 12);
IndexedFaceSet288.setCoord(&Coordinate290);

Shape285.setGeometry(&IndexedFaceSet288);

Transform284.addChild(&Shape285);

Transform283.addChild(&Transform284);

Transform179.addChild(&Transform283);

Switch177.addChild(&Transform179);

Transform176.addChild(&Switch177);

Scene7.addChild(&Transform176);

Transform& Transform291 =  Transform();
Transform291.setDEF(CString("tex-but_1"));
Script& Script292 =  Script();
Script292.setDEF(CString("_switch"));
field& field293 =  field();
field293.setName(CString("whichChoice_changed"));
field293.setAccessType(CString("outputOnly"));
field293.setType(CString("SFInt32"));
Script292.addChild(&field293);

field& field294 =  field();
field294.setName(CString("set_touchTime"));
field294.setAccessType(CString("inputOnly"));
field294.setType(CString("SFTime"));
Script292.addChild(&field294);

field& field295 =  field();
field295.setName(CString("enabled"));
field295.setAccessType(CString("initializeOnly"));
field295.setType(CString("SFBool"));
Script292.addChild(&field295);


//Script292.setSourceCode(CString("vrmlscript:")+
//_T("function set_touchTime(value, time)")+
//_T("{")+
//_T("	enabled = !enabled;")+
//_T("	whichChoice_changed = enabled;")+
//_T("}"));
Transform291.addChild(&Script292);

TouchSensor& TouchSensor296 =  TouchSensor();
TouchSensor296.setDEF(CString("_15"));
Transform291.addChild(&TouchSensor296);

Transform& Transform297 =  Transform();
Transform297.setDEF(CString("tex-but"));
Transform297.setTranslation(new float[]{-3.53259,0.188037,1.18607});
Transform297.setRotation(new float[]{1.0,-3.71792e-8,9.89425e-7,1.57203});
Shape& Shape298 =  Shape();
Appearance& Appearance299 =  Appearance();
Material& Material300 =  Material();
Material300.setAmbientIntensity(0.25);
Material300.setDiffuseColor(new float[]{0.904409,0.0,0.309851});
Material300.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material300.setShininess(0.078125);
Appearance299.addChild(&Material300);

Shape298.addChild(&Appearance299);

Box& Box301 =  Box();
Box301.setSize(new float[]{0.2,0.2,0.2});
Shape298.setGeometry(&Box301);

Transform297.addChild(&Shape298);

Transform291.addChild(&Transform297);

Scene7.addChild(&Transform291);

Transform& Transform302 =  Transform();
Transform302.setDEF(CString("masse-bad"));
Transform& Transform303 =  Transform();
Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{-8.04131,0.404034,-2.72127});
Transform304.setRotation(new float[]{1.0,0.0,0.0,1.57203});
Transform304.setScale(new float[]{0.559431,0.559428,0.0237109});
Shape& Shape305 =  Shape();
Appearance& Appearance306 =  Appearance();
Material& Material307 =  Material();
Material307.setDEF(CString("_16"));
Material307.setAmbientIntensity(0);
Material307.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material307.setEmissiveColor(new float[]{0.0,0.0958378,0.297872});
Material307.setShininess(0);
Appearance306.addChild(&Material307);

Shape305.addChild(&Appearance306);

IndexedFaceSet& IndexedFaceSet308 =  IndexedFaceSet();
IndexedFaceSet308.setCreaseAngle(0.5);
IndexedFaceSet308.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate309 =  Coordinate();
Coordinate309.setPoint(new float[]{2.55351,1.0,1.0,2.55351,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet308.setCoord(&Coordinate309);

Shape305.setGeometry(&IndexedFaceSet308);

Transform304.addChild(&Shape305);

Transform303.addChild(&Transform304);

Transform& Transform310 =  Transform();
Transform310.setTranslation(new float[]{-6.59348,0.323395,-2.16191});
Transform310.setScale(new float[]{0.02,0.02,0.02});
Shape& Shape311 =  Shape();
Appearance& Appearance312 =  Appearance();
Material& Material313 =  Material();
Material313.setUSE(CString("_16"));
Appearance312.addChild(&Material313);

Shape311.addChild(&Appearance312);

Text& Text314 =  Text();
Text314.setString(new CString[]{CString(", "), CString("3,07 m ")}, 2);
Text314.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle315 =  CFontStyle();
FontStyle315.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle315.setSize(14);
Text314.setFontStyle(&FontStyle315);

Shape311.setGeometry(&Text314);

Transform310.addChild(&Shape311);

Transform303.addChild(&Transform310);

Transform& Transform316 =  Transform();
Transform316.setTranslation(new float[]{-4.21657,0.407074,-2.72127});
Transform316.setRotation(new float[]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform316.setScale(new float[]{0.559431,0.559427,0.0237109});
Shape& Shape317 =  Shape();
Appearance& Appearance318 =  Appearance();
Material& Material319 =  Material();
Material319.setUSE(CString("_16"));
Appearance318.addChild(&Material319);

Shape317.addChild(&Appearance318);

IndexedFaceSet& IndexedFaceSet320 =  IndexedFaceSet();
IndexedFaceSet320.setCreaseAngle(0.5);
IndexedFaceSet320.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate321 =  Coordinate();
Coordinate321.setPoint(new float[]{2.70793,1.0,1.0,2.70793,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet320.setCoord(&Coordinate321);

Shape317.setGeometry(&IndexedFaceSet320);

Transform316.addChild(&Shape317);

Transform303.addChild(&Transform316);

Transform302.addChild(&Transform303);

Transform& Transform322 =  Transform();
Transform322.setTranslation(new float[]{-5.80014,0.00851905,5.18821});
Transform322.setRotation(new float[]{0.0,1.0,0.0,4.71239});
Transform322.setScale(new float[]{0.999999,1.0,0.999999});
Transform& Transform323 =  Transform();
Transform323.setTranslation(new float[]{-6.80953,0.404034,-2.72127});
Transform323.setRotation(new float[]{1.0,0.0,0.0,1.57203});
Transform323.setScale(new float[]{0.559431,0.559428,0.0237109});
Shape& Shape324 =  Shape();
Appearance& Appearance325 =  Appearance();
Material& Material326 =  Material();
Material326.setUSE(CString("_16"));
Appearance325.addChild(&Material326);

Shape324.addChild(&Appearance325);

IndexedFaceSet& IndexedFaceSet327 =  IndexedFaceSet();
IndexedFaceSet327.setCreaseAngle(0.5);
IndexedFaceSet327.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate328 =  Coordinate();
Coordinate328.setPoint(new float[]{-0.033983,1.0,1.0,-0.033983,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet327.setCoord(&Coordinate328);

Shape324.setGeometry(&IndexedFaceSet327);

Transform323.addChild(&Shape324);

Transform322.addChild(&Transform323);

Transform& Transform329 =  Transform();
Transform329.setTranslation(new float[]{-4.90441,0.407073,-2.72127});
Transform329.setRotation(new float[]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform329.setScale(new float[]{0.559431,0.559427,0.0237109});
Shape& Shape330 =  Shape();
Appearance& Appearance331 =  Appearance();
Material& Material332 =  Material();
Material332.setUSE(CString("_16"));
Appearance331.addChild(&Material332);

Shape330.addChild(&Appearance331);

IndexedFaceSet& IndexedFaceSet333 =  IndexedFaceSet();
IndexedFaceSet333.setCreaseAngle(0.5);
IndexedFaceSet333.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate334 =  Coordinate();
Coordinate334.setPoint(new float[]{1.93363,1.0,1.0,1.93363,1.0,-1.0,1.37266,1.0,-2.5162,1.37266,1.0,2.38816,1.028,1.0,0.0,1.37541,1.0,-1.0,1.37541,1.0,1.0}, 21);
IndexedFaceSet333.setCoord(&Coordinate334);

Shape330.setGeometry(&IndexedFaceSet333);

Transform329.addChild(&Shape330);

Transform322.addChild(&Transform329);

Transform302.addChild(&Transform322);

Transform& Transform335 =  Transform();
Transform335.setTranslation(new float[]{-6.40914,0.213304,-6.55965});
Transform335.setRotation(new float[]{0.0,1.0,0.0,1.57079});
Transform335.setScale(new float[]{0.999998,1.0,0.999998});
Transform302.addChild(&Transform335);

Transform& Transform336 =  Transform();
Transform336.setTranslation(new float[]{0.0,0.0117434,0.0});
Transform& Transform337 =  Transform();
Transform337.setTranslation(new float[]{-8.56687,0.302342,0.530606});
Transform337.setRotation(new float[]{4.40721e-10,1.0,4.40721e-10,1.57079});
Transform337.setScale(new float[]{0.02,0.02,0.02});
Transform337.setScaleOrientation(new float[]{2.03034e-10,1.0,-1.07407e-10,1.5708});
Shape& Shape338 =  Shape();
Appearance& Appearance339 =  Appearance();
Material& Material340 =  Material();
Material340.setUSE(CString("_16"));
Appearance339.addChild(&Material340);

Shape338.addChild(&Appearance339);

Text& Text341 =  Text();
Text341.setString(new CString[]{CString(", "), CString("1,00 m ")}, 2);
Text341.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle342 =  CFontStyle();
FontStyle342.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle342.setSize(14);
Text341.setFontStyle(&FontStyle342);

Shape338.setGeometry(&Text341);

Transform337.addChild(&Shape338);

Transform336.addChild(&Transform337);

Transform& Transform343 =  Transform();
Transform343.setTranslation(new float[]{-9.13041,0.387792,-1.18209});
Transform343.setRotation(new float[]{0.577587,0.576875,0.577589,4.18808});
Transform343.setScale(new float[]{0.55943,0.559426,0.0237109});
Shape& Shape344 =  Shape();
Appearance& Appearance345 =  Appearance();
Material& Material346 =  Material();
Material346.setUSE(CString("_16"));
Appearance345.addChild(&Material346);

Shape344.addChild(&Appearance345);

IndexedFaceSet& IndexedFaceSet347 =  IndexedFaceSet();
IndexedFaceSet347.setCreaseAngle(0.5);
IndexedFaceSet347.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setPoint(new float[]{1.5517,1.0,1.0,1.5517,1.0,-1.0,1.37266,1.0,-2.5162,1.37266,1.0,2.38816,1.028,1.0,0.0,1.37541,1.0,-1.0,1.37541,1.0,1.0}, 21);
IndexedFaceSet347.setCoord(&Coordinate348);

Shape344.setGeometry(&IndexedFaceSet347);

Transform343.addChild(&Shape344);

Transform336.addChild(&Transform343);

Transform& Transform349 =  Transform();
Transform349.setTranslation(new float[]{-9.13042,0.384754,0.249861});
Transform349.setRotation(new float[]{0.577589,0.576874,-0.577588,2.09511});
Transform349.setScale(new float[]{0.55943,0.559427,0.0237109});
Shape& Shape350 =  Shape();
Appearance& Appearance351 =  Appearance();
Material& Material352 =  Material();
Material352.setUSE(CString("_16"));
Appearance351.addChild(&Material352);

Shape350.addChild(&Appearance351);

IndexedFaceSet& IndexedFaceSet353 =  IndexedFaceSet();
IndexedFaceSet353.setCreaseAngle(0.5);
IndexedFaceSet353.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate354 =  Coordinate();
Coordinate354.setPoint(new float[]{-0.491838,1.0,1.0,-0.491838,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet353.setCoord(&Coordinate354);

Shape350.setGeometry(&IndexedFaceSet353);

Transform349.addChild(&Shape350);

Transform336.addChild(&Transform349);

Transform302.addChild(&Transform336);

Transform& Transform355 =  Transform();
Transform355.setTranslation(new float[]{0.0,0.0163077,-1.56789});
Transform& Transform356 =  Transform();
Transform356.setTranslation(new float[]{-8.56687,0.302342,0.6137});
Transform356.setRotation(new float[]{4.40721e-10,1.0,4.40721e-10,1.57079});
Transform356.setScale(new float[]{0.02,0.02,0.02});
Transform356.setScaleOrientation(new float[]{4.96699e-10,1.0,-4.34624e-10,1.5708});
Shape& Shape357 =  Shape();
Appearance& Appearance358 =  Appearance();
Material& Material359 =  Material();
Material359.setUSE(CString("_16"));
Appearance358.addChild(&Material359);

Shape357.addChild(&Appearance358);

Text& Text360 =  Text();
Text360.setString(new CString[]{CString(", "), CString("1,10 m ")}, 2);
Text360.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle361 =  CFontStyle();
FontStyle361.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle361.setSize(14);
Text360.setFontStyle(&FontStyle361);

Shape357.setGeometry(&Text360);

Transform356.addChild(&Shape357);

Transform355.addChild(&Transform356);

Transform& Transform362 =  Transform();
Transform362.setTranslation(new float[]{-9.13041,0.387792,-1.18209});
Transform362.setRotation(new float[]{0.577587,0.576875,0.577589,4.18808});
Transform362.setScale(new float[]{0.55943,0.559427,0.0237109});
Transform362.setScaleOrientation(new float[]{-0.0000087291,5.78445e-7,-1.0,0.00468343});
Shape& Shape363 =  Shape();
Appearance& Appearance364 =  Appearance();
Material& Material365 =  Material();
Material365.setUSE(CString("_16"));
Appearance364.addChild(&Material365);

Shape363.addChild(&Appearance364);

IndexedFaceSet& IndexedFaceSet366 =  IndexedFaceSet();
IndexedFaceSet366.setCreaseAngle(0.5);
IndexedFaceSet366.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate367 =  Coordinate();
Coordinate367.setPoint(new float[]{1.6792,1.0,1.0,1.6792,1.0,-1.0,1.37266,1.0,-2.5162,1.37266,1.0,2.38816,1.028,1.0,0.0,1.37541,1.0,-1.0,1.37541,1.0,1.0}, 21);
IndexedFaceSet366.setCoord(&Coordinate367);

Shape363.setGeometry(&IndexedFaceSet366);

Transform362.addChild(&Shape363);

Transform355.addChild(&Transform362);

Transform& Transform368 =  Transform();
Transform368.setTranslation(new float[]{-9.13042,0.384754,0.396738});
Transform368.setRotation(new float[]{0.577589,0.576874,-0.577588,2.09511});
Transform368.setScale(new float[]{0.55943,0.559427,0.0237109});
Transform368.setScaleOrientation(new float[]{-4.65982e-7,8.63403e-7,1.0,0.00775123});
Shape& Shape369 =  Shape();
Appearance& Appearance370 =  Appearance();
Material& Material371 =  Material();
Material371.setUSE(CString("_16"));
Appearance370.addChild(&Material371);

Shape369.addChild(&Appearance370);

IndexedFaceSet& IndexedFaceSet372 =  IndexedFaceSet();
IndexedFaceSet372.setCreaseAngle(0.5);
IndexedFaceSet372.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate373 =  Coordinate();
Coordinate373.setPoint(new float[]{-0.40077,1.0,1.0,-0.40077,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet372.setCoord(&Coordinate373);

Shape369.setGeometry(&IndexedFaceSet372);

Transform368.addChild(&Shape369);

Transform355.addChild(&Transform368);

Transform302.addChild(&Transform355);

Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[]{-12.2407,-0.00907715,-1.16446});
Transform374.setRotation(new float[]{0.0000280045,1.0,0.000618907,3.14159});
Transform374.setScale(new float[]{1.0,0.999999,1.0});
Transform& Transform375 =  Transform();
Transform375.setTranslation(new float[]{-8.04131,0.404034,-2.72127});
Transform375.setRotation(new float[]{1.0,0.0,0.0,1.57203});
Transform375.setScale(new float[]{0.559431,0.559428,0.0237109});
Shape& Shape376 =  Shape();
Appearance& Appearance377 =  Appearance();
Material& Material378 =  Material();
Material378.setUSE(CString("_16"));
Appearance377.addChild(&Material378);

Shape376.addChild(&Appearance377);

IndexedFaceSet& IndexedFaceSet379 =  IndexedFaceSet();
IndexedFaceSet379.setCreaseAngle(0.5);
IndexedFaceSet379.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate380 =  Coordinate();
Coordinate380.setPoint(new float[]{2.55351,1.0,1.0,2.55351,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet379.setCoord(&Coordinate380);

Shape376.setGeometry(&IndexedFaceSet379);

Transform375.addChild(&Shape376);

Transform374.addChild(&Transform375);

Transform& Transform381 =  Transform();
Transform381.setTranslation(new float[]{-6.59348,0.323395,-2.16191});
Transform381.setScale(new float[]{0.02,0.02,0.02});
Shape& Shape382 =  Shape();
Appearance& Appearance383 =  Appearance();
Material& Material384 =  Material();
Material384.setUSE(CString("_16"));
Appearance383.addChild(&Material384);

Shape382.addChild(&Appearance383);

Text& Text385 =  Text();
Text385.setString(new CString[]{CString(", "), CString("3,07 m ")}, 2);
Text385.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle386 =  CFontStyle();
FontStyle386.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle386.setSize(14);
Text385.setFontStyle(&FontStyle386);

Shape382.setGeometry(&Text385);

Transform381.addChild(&Shape382);

Transform374.addChild(&Transform381);

Transform& Transform387 =  Transform();
Transform387.setTranslation(new float[]{-4.21657,0.407074,-2.72127});
Transform387.setRotation(new float[]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform387.setScale(new float[]{0.559431,0.559427,0.0237109});
Shape& Shape388 =  Shape();
Appearance& Appearance389 =  Appearance();
Material& Material390 =  Material();
Material390.setUSE(CString("_16"));
Appearance389.addChild(&Material390);

Shape388.addChild(&Appearance389);

IndexedFaceSet& IndexedFaceSet391 =  IndexedFaceSet();
IndexedFaceSet391.setCreaseAngle(0.5);
IndexedFaceSet391.setCoordIndex(new int32_t[]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1}, 17);
Coordinate& Coordinate392 =  Coordinate();
Coordinate392.setPoint(new float[]{2.70793,1.0,1.0,2.70793,1.0,-1.0,-0.655345,1.0,-2.5162,-0.655344,1.0,2.38816,-1.0,1.0,0.0,-0.652593,1.0,-1.0,-0.652593,1.0,1.0}, 21);
IndexedFaceSet391.setCoord(&Coordinate392);

Shape388.setGeometry(&IndexedFaceSet391);

Transform387.addChild(&Shape388);

Transform374.addChild(&Transform387);

Transform302.addChild(&Transform374);

Transform& Transform393 =  Transform();
Transform393.setTranslation(new float[]{-3.6424,0.320009,-1.6462});
Transform393.setRotation(new float[]{0.0,1.0,0.0,4.71238});
Transform393.setScale(new float[]{0.02,0.02,0.02});
Shape& Shape394 =  Shape();
Appearance& Appearance395 =  Appearance();
Material& Material396 =  Material();
Material396.setAmbientIntensity(0);
Material396.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material396.setEmissiveColor(new float[]{0.0,0.0958378,0.297872});
Material396.setShininess(0);
Appearance395.addChild(&Material396);

Shape394.addChild(&Appearance395);

Text& Text397 =  Text();
Text397.setString(new CString[]{CString(", "), CString("1,21 m ")}, 2);
Text397.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle398 =  CFontStyle();
FontStyle398.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle398.setSize(14);
Text397.setFontStyle(&FontStyle398);

Shape394.setGeometry(&Text397);

Transform393.addChild(&Shape394);

Transform302.addChild(&Transform393);

Scene7.addChild(&Transform302);

ROUTE& ROUTE399 =  ROUTE();
ROUTE399.setFromNode(CString("Touch_1"));
ROUTE399.setFromField(CString("touchTime"));
ROUTE399.setToNode(CString("Time_1"));
ROUTE399.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE399);

ROUTE& ROUTE400 =  ROUTE();
ROUTE400.setFromNode(CString("Time_1"));
ROUTE400.setFromField(CString("fraction_changed"));
ROUTE400.setToNode(CString("UnnamedTransformRotationInterp_1"));
ROUTE400.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE400);

ROUTE& ROUTE401 =  ROUTE();
ROUTE401.setFromNode(CString("Time_1"));
ROUTE401.setFromField(CString("fraction_changed"));
ROUTE401.setToNode(CString("UnnamedShapeRotationInterp_1"));
ROUTE401.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE401);

ROUTE& ROUTE402 =  ROUTE();
ROUTE402.setFromNode(CString("UnnamedShapeRotationInterp_1"));
ROUTE402.setFromField(CString("value_changed"));
ROUTE402.setToNode(CString("_3"));
ROUTE402.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE402);

ROUTE& ROUTE403 =  ROUTE();
ROUTE403.setFromNode(CString("UnnamedTransformRotationInterp_1"));
ROUTE403.setFromField(CString("value_changed"));
ROUTE403.setToNode(CString("_1"));
ROUTE403.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE403);

ROUTE& ROUTE404 =  ROUTE();
ROUTE404.setFromNode(CString("Touch_2"));
ROUTE404.setFromField(CString("touchTime"));
ROUTE404.setToNode(CString("Time_2"));
ROUTE404.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE404);

ROUTE& ROUTE405 =  ROUTE();
ROUTE405.setFromNode(CString("Time_2"));
ROUTE405.setFromField(CString("fraction_changed"));
ROUTE405.setToNode(CString("UnnamedTransformRotationInterp_2"));
ROUTE405.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE405);

ROUTE& ROUTE406 =  ROUTE();
ROUTE406.setFromNode(CString("Time_2"));
ROUTE406.setFromField(CString("fraction_changed"));
ROUTE406.setToNode(CString("UnnamedShapeRotationInterp_2"));
ROUTE406.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE406);

ROUTE& ROUTE407 =  ROUTE();
ROUTE407.setFromNode(CString("UnnamedShapeRotationInterp_2"));
ROUTE407.setFromField(CString("value_changed"));
ROUTE407.setToNode(CString("_7"));
ROUTE407.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE407);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromNode(CString("UnnamedTransformRotationInterp_2"));
ROUTE408.setFromField(CString("value_changed"));
ROUTE408.setToNode(CString("_5"));
ROUTE408.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromNode(CString("_switch"));
ROUTE409.setFromField(CString("whichChoice_changed"));
ROUTE409.setToNode(CString("_10"));
ROUTE409.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE409);

ROUTE& ROUTE410 =  ROUTE();
ROUTE410.setFromNode(CString("_15"));
ROUTE410.setFromField(CString("touchTime"));
ROUTE410.setToNode(CString("_switch"));
ROUTE410.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE410);

X3D0.setScene(&Scene7);

//}
