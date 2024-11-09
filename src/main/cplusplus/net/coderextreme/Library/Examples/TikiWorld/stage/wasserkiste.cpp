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
meta3.setContent(CString("Fri, 13 Nov 2015 10:12:49 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 13 Nov 2015 10:12:49 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

LOD& LOD9 =  LOD();
LOD9.setRange(new float[]{4,70}, 2);
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("kisteAnim"));
Transform10.setTranslation(new float[]{0,0.997337,0});
Transform10.setScale(new float[]{0.999995,0.999989,0.999994});
Transform10.setScaleOrientation(new float[]{0.0234423,-0.58967,-0.807304,0.129457});
Group& Group11 =  Group();
Group& Group12 =  Group();
Group12.setDEF(CString("kistenwackel"));
TimeSensor& TimeSensor13 =  TimeSensor();
TimeSensor13.setDEF(CString("Time"));
TimeSensor13.setCycleInterval(4);
TimeSensor13.setStopTime(1);
Group12.addChild(&TimeSensor13);

Group11.addChild(&Group12);

PositionInterpolator& PositionInterpolator14 =  PositionInterpolator();
PositionInterpolator14.setDEF(CString("kisteTranslationInterp"));
PositionInterpolator14.setKey(new float[]{0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1}, 38);
PositionInterpolator14.setKeyValue(new float[]{0,0.997337,0,0,0.630868,0,0,0.264399,0,0,0.0397889,0,-0.000238661,-0.039851,0.0000431382,-0.000715984,-0.045923,0.000129415,-0.00107398,-0.0121751,0.000194122,-0.000954645,0.0276448,0.000172553,0,0.0397889,0,0.00426809,0.0133565,-0.00107543,0.0118596,-0.0313111,-0.00305554,0.0186843,-0.0746269,-0.00474508,0.0206523,-0.0970042,-0.0049488,0.0136733,-0.0788561,-0.00247146,-0.0234373,0.08041,0.00761828,-0.0778261,0.315975,0.022942,-0.115342,0.444246,0.0379466,-0.10559,0.205764,0.0565961,-0.0792289,-0.0083617,0.0657472,-0.0701991,0.0494958,0.0618534,-0.0609667,0.133751,0.0562805,-0.0517,0.238064,0.049435,-0.0425672,0.356095,0.0417229,-0.0337363,0.481504,0.0335504,-0.0253758,0.607953,0.0253238,-0.0176537,0.7291,0.0174493,-0.0107382,0.838606,0.010333,-0.00479759,0.930131,0.00438117,0,0.997337,0,0.00329477,1.03916,-0.00273412,0.00504511,1.06138,-0.00418663,0.00555992,1.06791,-0.00461384,0.00514808,1.06268,-0.00427208,0.00411847,1.04962,-0.00341766,0.00277997,1.03262,-0.00230693,0.00144147,1.01563,-0.00119619,0.000411852,1.00256,-0.00034177,0,0.997337,0}, 114);
Group11.addChild(&PositionInterpolator14);

OrientationInterpolator& OrientationInterpolator15 =  OrientationInterpolator();
OrientationInterpolator15.setDEF(CString("kisteRotationInterp"));
OrientationInterpolator15.setKey(new float[]{0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1}, 38);
OrientationInterpolator15.setKeyValue(new float[]{0,0,1,0,0.0226815,0.565605,-0.824365,0.0488928,0.0244738,0.578268,-0.81548,0.113574,0.0353393,0.65288,-0.756637,0.142832,0.0562912,0.776626,-0.627441,0.124671,0.0989135,0.96478,-0.243753,0.0962019,0.125794,0.90597,0.404221,0.0959015,0.113435,0.677287,0.726922,0.125097,0.10384,0.619815,0.777848,0.148611,0.106036,0.755426,0.646597,0.156861,0.105279,0.931101,0.349238,0.171857,0.0911407,0.994997,0.0409265,0.203508,0.071203,0.98526,-0.155538,0.235293,0.0475507,0.969881,-0.238893,0.241297,-0.0836639,0.979703,-0.182158,0.162999,-0.685793,0.537125,0.491106,0.0670668,-0.482976,-0.559639,0.673453,0.121116,-0.0299324,-0.840106,0.541596,0.190268,0.227273,-0.870925,0.435703,0.218472,0.242113,-0.871374,0.426718,0.210072,0.252606,-0.871534,0.42026,0.194121,0.260009,-0.871567,0.415651,0.172305,0.265002,-0.871552,0.412518,0.146336,0.267898,-0.871529,0.410691,0.117933,0.268702,-0.871521,0.410183,0.0888262,0.267054,-0.871537,0.411224,0.0607497,0.261966,-0.871565,0.414425,0.0354269,0.251001,-0.871518,0.421254,0.0145996,0,0,1,0,-0.227273,0.870925,-0.435703,0.00959321,-0.227273,0.870925,-0.435703,0.014681,-0.227273,0.870925,-0.435703,0.0161798,-0.227273,0.870925,-0.435703,0.0149864,-0.227273,0.870925,-0.435703,0.0119803,-0.227273,0.870925,-0.435703,0.0080825,-0.227273,0.870925,-0.435703,0.00420035,-0.227273,0.870925,-0.435703,0.00119604,0,0,1,0}, 152);
Group11.addChild(&OrientationInterpolator15);

Transform10.addChild(&Group11);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("kisteShape"));
Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Material19.setAmbientIntensity(0.36023);
Material19.setDiffuseColor(new float[]{0.627659,0.524538,0.321273});
Material19.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material19.setShininess(0.078125);
Appearance18.addChild(&Material19);

ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setDEF(CString("_1"));
ImageTexture20.setUrl(new CString[]{CString("bretter_swm.png")}, 1);
Appearance18.addChild(&ImageTexture20);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet21 =  IndexedFaceSet();
IndexedFaceSet21.setCreaseAngle(0.5);
IndexedFaceSet21.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet21.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate22 =  TextureCoordinate();
TextureCoordinate22.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet21.setTexCoord(&TextureCoordinate22);

Coordinate& Coordinate23 =  Coordinate();
Coordinate23.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1}, 24);
IndexedFaceSet21.setCoord(&Coordinate23);

Shape17.setGeometry(&IndexedFaceSet21);

Transform16.addChild(&Shape17);

Transform10.addChild(&Transform16);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{-8.5628e-7,2.57056,-6.50935e-8});
Transform24.setScale(new float[]{0.999995,2.0897,0.999994});
Transform24.setScaleOrientation(new float[]{-1.3971e-7,-1,0.00000595333,0.110657});
ProximitySensor& ProximitySensor25 =  ProximitySensor();
ProximitySensor25.setDEF(CString("_2"));
ProximitySensor25.setSize(new float[]{2,2,2});
Transform24.addChild(&ProximitySensor25);

Transform10.addChild(&Transform24);

LOD9.addChildren(&Transform10);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("kiste"));
Transform26.setTranslation(new float[]{0,0.997337,0});
Transform26.setScale(new float[]{0.999995,0.99999,0.999994});
Transform26.setScaleOrientation(new float[]{0.0503735,-0.457369,-0.887849,0.113109});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setAmbientIntensity(0.36023);
Material29.setDiffuseColor(new float[]{0.627659,0.524538,0.321273});
Material29.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material29.setShininess(0.078125);
Appearance28.addChild(&Material29);

ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUSE(CString("_1"));
Appearance28.addChild(&ImageTexture30);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setCreaseAngle(0.5);
IndexedFaceSet31.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet31.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate32 =  TextureCoordinate();
TextureCoordinate32.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet31.setTexCoord(&TextureCoordinate32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1}, 24);
IndexedFaceSet31.setCoord(&Coordinate33);

Shape27.setGeometry(&IndexedFaceSet31);

Transform26.addChild(&Shape27);

LOD9.addChildren(&Transform26);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0,0.997337,0});
Transform34.setScale(new float[]{0.999995,0.99999,0.999994});
Transform34.setScaleOrientation(new float[]{0.054827,-0.415386,-0.907991,0.111561});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setAmbientIntensity(0.36023);
Material37.setDiffuseColor(new float[]{0.627659,0.524538,0.321273});
Material37.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material37.setShininess(0.078125);
Appearance36.addChild(&Material37);

ImageTexture& ImageTexture38 =  ImageTexture();
ImageTexture38.setUrl(new CString[]{CString("bretter_swl.png")}, 1);
Appearance36.addChild(&ImageTexture38);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet39 =  IndexedFaceSet();
IndexedFaceSet39.setCreaseAngle(0.5);
IndexedFaceSet39.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet39.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate40 =  TextureCoordinate();
TextureCoordinate40.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet39.setTexCoord(&TextureCoordinate40);

Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1}, 24);
IndexedFaceSet39.setCoord(&Coordinate41);

Shape35.setGeometry(&IndexedFaceSet39);

Transform34.addChild(&Shape35);

LOD9.addChildren(&Transform34);

Scene7.addChild(&LOD9);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_2"));
ROUTE42.setFromField(CString("enterTime"));
ROUTE42.setToNode(CString("Time"));
ROUTE42.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("Time"));
ROUTE43.setFromField(CString("fraction_changed"));
ROUTE43.setToNode(CString("kisteTranslationInterp"));
ROUTE43.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("Time"));
ROUTE44.setFromField(CString("fraction_changed"));
ROUTE44.setToNode(CString("kisteRotationInterp"));
ROUTE44.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("kisteTranslationInterp"));
ROUTE45.setFromField(CString("value_changed"));
ROUTE45.setToNode(CString("kisteAnim"));
ROUTE45.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("kisteRotationInterp"));
ROUTE46.setFromField(CString("value_changed"));
ROUTE46.setToNode(CString("kisteAnim"));
ROUTE46.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE46);

X3D0.setScene(&Scene7);

}
