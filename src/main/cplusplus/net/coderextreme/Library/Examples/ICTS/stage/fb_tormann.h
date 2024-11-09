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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:03 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:03 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("tormann"));
LOD& LOD10 =  LOD();
LOD10.setRange(new float[]{25.0}, 1);
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("on"));
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("els"));
Transform12.setCenter(new float[]{-0.195395,1.01582,-0.205052});
Group& Group13 =  Group();
Group& Group14 =  Group();
Group14.setDEF(CString("hupf"));
TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("Time_1"));
TimeSensor15.setCycleInterval(1.42857);
TimeSensor15.setLoop(true);
TimeSensor15.setStartTime(967123092.439519);
TimeSensor15.setStopTime(1);
Group14.addChild(&TimeSensor15);

Group13.addChild(&Group14);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(CString("elsTranslationInterp"));
PositionInterpolator16.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator16.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.135247,0.0,0.0,0.0,0.0,0.0,0.135247,0.0,0.0,0.0,0.0,0.0,0.135247,0.0,0.0,0.0,0.0,0.0,0.282791,0.0,0.0,0.0,0.0,0.0,0.135247,0.0,0.0,0.0,0.0}, 33);
Group13.addChild(&PositionInterpolator16);

PositionInterpolator& PositionInterpolator17 =  PositionInterpolator();
PositionInterpolator17.setDEF(CString("CapTranslationInterp"));
PositionInterpolator17.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9}, 10);
PositionInterpolator17.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.038009,0.0,0.0,0.0,0.0,0.0,0.038009,0.0,0.0,0.0,0.0,0.0,0.0618006,0.0,0.0,0.0,0.0,0.0,0.159947,1.49012e-8,0.0,0.0,0.0,0.0,0.038009,0.0}, 30);
Group13.addChild(&PositionInterpolator17);

OrientationInterpolator& OrientationInterpolator18 =  OrientationInterpolator();
OrientationInterpolator18.setDEF(CString("ArmRRotationInterp"));
OrientationInterpolator18.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator18.setKeyValue(new float[]{0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405,-0.989346,-0.0795979,-0.121898,1.55447,0.991597,0.0944415,0.0884048,4.59405}, 44);
Group13.addChild(&OrientationInterpolator18);

OrientationInterpolator& OrientationInterpolator19 =  OrientationInterpolator();
OrientationInterpolator19.setDEF(CString("ArmLRotationInterp"));
OrientationInterpolator19.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator19.setKeyValue(new float[]{0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874,0.986099,-0.137866,-0.092749,4.60163,0.987669,-0.123238,-0.0965556,4.45874}, 44);
Group13.addChild(&OrientationInterpolator19);

PositionInterpolator& PositionInterpolator20 =  PositionInterpolator();
PositionInterpolator20.setDEF(CString("beineTranslationInterp"));
PositionInterpolator20.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator20.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.0354014,0.0,0.0,0.0,0.0,0.0,-0.0354014,0.0,0.0,0.0,0.0,0.0,-0.0354014,0.0,0.0,0.0,0.0,0.0,-0.0354014,0.0,0.0,0.0,0.0,0.0,-0.0354014,0.0,0.0,0.0,0.0}, 33);
Group13.addChild(&PositionInterpolator20);

OrientationInterpolator& OrientationInterpolator21 =  OrientationInterpolator();
OrientationInterpolator21.setDEF(CString("FussLRotationInterp"));
OrientationInterpolator21.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator21.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.28457,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.28457,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.28457,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.509882,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.28457,0.0,0.0,1.0,0.0}, 44);
Group13.addChild(&OrientationInterpolator21);

OrientationInterpolator& OrientationInterpolator22 =  OrientationInterpolator();
OrientationInterpolator22.setDEF(CString("FussRRotationInterp"));
OrientationInterpolator22.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator22.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.279404,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.279404,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.279404,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.527085,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.279404,0.0,0.0,1.0,0.0}, 44);
Group13.addChild(&OrientationInterpolator22);

Transform12.addChild(&Group13);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Body"));
Transform& Transform24 =  Transform();
Transform24.setDEF(CString("bauch"));
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setAmbientIntensity(0.617021);
Material27.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material27.setShininess(0);
Appearance26.addChild(&Material27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setDEF(CString("_1"));
ImageTexture28.setUrl(new CString[]{CString("fussballshirt2.jpg")}, 1);
Appearance26.addChild(&ImageTexture28);

Shape25.addChild(&Appearance26);

IndexedFaceSet& IndexedFaceSet29 =  IndexedFaceSet();
IndexedFaceSet29.setConvex(false);
IndexedFaceSet29.setCreaseAngle(3.14159);
IndexedFaceSet29.setTexCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,9,10,11,12,-1,10,13,14,11,-1,13,15,16,14,-1,4,5,17,18,-1,5,6,19,17,-1,6,7,20,19,-1,7,8,21,20,-1,8,2,22,21,-1,12,11,23,24,-1,11,14,25,23,-1,14,16,26,25,-1,18,17,27,28,-1,17,19,29,27,-1,19,20,30,29,-1,20,21,31,30,-1,21,22,32,31,-1,24,23,33,34,-1,23,25,35,33,-1,25,26,36,35,-1,28,27,37,38,-1,27,29,39,37,-1,29,30,40,39,-1,30,31,41,40,-1,31,32,42,41,-1}, 152);
IndexedFaceSet29.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1}, 152);
TextureCoordinate& TextureCoordinate30 =  TextureCoordinate();
TextureCoordinate30.setPoint(new float[]{0.504979,0.0148622,0.614985,0.0148622,0.820563,0.00274757,0.394973,0.0148622,0.200426,0.0135764,0.202237,0.00274757,0.391296,0.00117418,0.611307,0.00117418,0.820563,0.00274757,0.200426,0.00569296,0.397565,0.00105438,0.388918,0.348564,0.205175,0.348564,0.607391,0.00105438,0.616038,0.348564,0.820563,0.000776738,0.817416,0.347311,0.193246,0.347454,0.193246,0.347454,0.385908,0.347454,0.624051,0.347454,0.816712,0.347454,0.816712,0.347454,0.397565,0.696074,0.227809,0.696074,0.607391,0.696074,0.777147,0.696074,0.216978,0.680047,0.216978,0.680047,0.394973,0.680047,0.614985,0.680047,0.79298,0.680047,0.79298,0.680047,0.428632,0.990688,0.309148,0.990688,0.576324,0.990688,0.695808,0.990688,0.302265,0.962014,0.302265,0.962014,0.427548,0.962014,0.58241,0.962014,0.707693,0.962014,0.707693,0.962014}, 86);
IndexedFaceSet29.setTexCoord(&TextureCoordinate30);

Coordinate& Coordinate31 =  Coordinate();
Coordinate31.setPoint(new float[]{-0.180989,0.29048,-0.291293,-0.0710534,0.29048,-0.495268,0.106829,0.29048,-0.417356,-0.290925,0.29048,-0.495268,-0.468807,0.29048,-0.417356,-0.468807,0.29048,-0.16523,-0.290925,0.29048,-0.0873185,-0.0710534,0.29048,-0.0873185,0.106829,0.29048,-0.16523,-0.0619925,0.564054,-0.512075,0.130546,0.564054,-0.427744,-0.299985,0.564054,-0.512075,-0.492524,0.564054,-0.427744,-0.492524,0.564054,-0.154842,-0.299985,0.564054,-0.0705113,-0.0619925,0.564054,-0.0705113,0.130546,0.564054,-0.154842,-0.0710534,0.837629,-0.495268,0.106829,0.837629,-0.417356,-0.290925,0.837629,-0.495268,-0.468807,0.837629,-0.417356,-0.468807,0.837629,-0.16523,-0.290925,0.837629,-0.0873185,-0.0710534,0.837629,-0.0873185,0.106829,0.837629,-0.16523,-0.103608,1.06956,-0.434864,0.0215962,1.06956,-0.380025,-0.25837,1.06956,-0.434864,-0.383574,1.06956,-0.380025,-0.383574,1.06956,-0.202561,-0.25837,1.06956,-0.147722,-0.103608,1.06956,-0.147722,0.0215962,1.06956,-0.202561}, 99);
IndexedFaceSet29.setCoord(&Coordinate31);

Shape25.setGeometry(&IndexedFaceSet29);

Transform24.addChild(&Shape25);

Transform23.addChild(&Transform24);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("ArmR"));
Transform32.setTranslation(new float[]{-0.00124139,-0.0214972,0.00679928});
Transform32.setRotation(new float[]{0.991597,0.0944415,0.0884048,4.59405});
Transform32.setScale(new float[]{0.999994,0.999988,0.999986});
Transform32.setScaleOrientation(new float[]{0.923021,-0.118766,0.365959,0.652974});
Transform32.setCenter(new float[]{0.128521,0.984616,-0.291293});
Transform& Transform33 =  Transform();
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setDEF(CString("_2"));
Material36.setAmbientIntensity(0);
Material36.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material36.setShininess(0);
Appearance35.addChild(&Material36);

ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setUSE(CString("_1"));
Appearance35.addChild(&ImageTexture37);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setSolid(false);
IndexedFaceSet38.setConvex(false);
IndexedFaceSet38.setCreaseAngle(3.14159);
IndexedFaceSet38.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,-1,4,7,8,-1,4,6,7,-1,9,0,3,10,-1,11,9,10,12,-1,4,8,13,-1,14,11,12,15,-1}, 36);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,1,0,-1,4,5,6,-1,4,0,5,-1,5,0,3,7,-1,6,5,7,8,-1,4,6,9,-1,9,6,8,10,-1}, 36);
TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setPoint(new float[]{0.963327,0.938699,0.82397,0.94241,0.827507,0.77953,0.990035,0.779163,0.665307,0.982106,0.67291,0.890808,0.822811,0.917169,0.858335,0.931766,0.822811,0.922024,0.996654,0.946248,1.06233,0.780193,0.963503,0.943599,0.990035,0.779163,0.67291,0.890808,0.82397,0.94241,0.827507,0.77953}, 32);
IndexedFaceSet38.setTexCoord(&TextureCoordinate39);

Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setPoint(new float[]{0.136642,1.03267,-0.226823,-0.0131647,1.01099,-0.226823,-0.00306417,0.879917,-0.207057,0.171499,0.908409,-0.207057,-0.0207623,1.08609,-0.291239,0.172142,1.04468,-0.291293,0.136642,1.03667,-0.355763,0.236692,0.940267,-0.291293,0.171499,0.908409,-0.375529,-0.0131647,1.01099,-0.355763,-0.00306417,0.879917,-0.375529}, 33);
IndexedFaceSet38.setCoord(&Coordinate40);

Shape34.setGeometry(&IndexedFaceSet38);

Transform33.addChild(&Shape34);

Transform32.addChild(&Transform33);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("armR"));
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDEF(CString("_3"));
Material44.setAmbientIntensity(0.255319);
Material44.setDiffuseColor(new float[]{1.0,0.600935,0.355765});
Material44.setShininess(0);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setSolid(false);
IndexedFaceSet45.setConvex(false);
IndexedFaceSet45.setCreaseAngle(3.14159);
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{0.19152,0.516686,-0.331964,0.236693,0.524403,-0.331964,0.221686,0.735973,-0.331964,0.176509,0.728252,-0.331964,0.259281,0.528265,-0.292275,0.244275,0.739835,-0.292275,0.236693,0.524403,-0.252585,0.221686,0.735972,-0.252585,0.19152,0.516686,-0.252585,0.176509,0.728252,-0.252585,0.168931,0.512824,-0.292275,0.153921,0.724393,-0.292275,0.16215,0.940838,-0.326188,0.123546,0.934241,-0.326188,0.18145,0.944134,-0.292275,0.16215,0.940838,-0.258361,0.123546,0.934241,-0.258361,0.104246,0.930941,-0.292275}, 54);
IndexedFaceSet45.setCoord(&Coordinate46);

Shape42.setGeometry(&IndexedFaceSet45);

Transform41.addChild(&Shape42);

Transform32.addChild(&Transform41);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("HandR"));
Transform47.setTranslation(new float[]{-0.0195431,-0.00654498,-0.023027});
Transform47.setRotation(new float[]{-0.462372,-0.858384,0.222236,1.28324});
Transform47.setScale(new float[]{0.999997,0.999998,1.0});
Transform47.setScaleOrientation(new float[]{0.102181,-0.114868,-0.988112,0.729911});
Transform47.setCenter(new float[]{0.235007,0.53565,-0.277635});
Transform& Transform48 =  Transform();
Transform48.setDEF(CString("handR"));
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setUSE(CString("_3"));
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setSolid(false);
IndexedFaceSet52.setConvex(false);
IndexedFaceSet52.setCreaseAngle(3.14159);
IndexedFaceSet52.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{0.265624,0.56003,-0.213307,0.306931,0.452655,-0.213307,0.21169,0.539282,-0.213307,0.265624,0.56003,-0.347479,0.306931,0.452655,-0.347479,0.21169,0.539282,-0.347479,0.252997,0.431907,-0.347479,0.280923,0.362551,-0.346139,0.25066,0.381516,-0.346139,0.280923,0.362551,-0.214647,0.252997,0.431907,-0.213307,0.25066,0.381516,-0.214647,0.226939,0.335692,-0.332927,0.210104,0.366024,-0.332927,0.210104,0.366024,-0.228899,0.226939,0.335692,-0.228899,0.21169,0.539282,-0.297096,0.252997,0.431907,-0.297096,0.235777,0.476665,-0.213307,0.235777,0.476665,-0.297096,0.192132,0.469025,-0.284357,0.149593,0.475906,-0.284357,0.149593,0.475906,-0.224305,0.192132,0.469025,-0.224305,0.171288,0.406246,-0.267468,0.145707,0.402753,-0.267468,0.145707,0.402753,-0.231533,0.171288,0.406246,-0.231533}, 84);
IndexedFaceSet52.setCoord(&Coordinate53);

Shape49.setGeometry(&IndexedFaceSet52);

Transform48.addChild(&Shape49);

Transform47.addChild(&Transform48);

Transform32.addChild(&Transform47);

Transform23.addChild(&Transform32);

Transform& Transform54 =  Transform();
Transform54.setDEF(CString("ArmL"));
Transform54.setTranslation(new float[]{7.7486e-7,-4.76837e-7,9.53674e-7});
Transform54.setRotation(new float[]{0.987669,-0.123238,-0.0965556,4.45874});
Transform54.setScale(new float[]{0.999996,0.999981,0.999987});
Transform54.setScaleOrientation(new float[]{-0.967838,0.174123,-0.181578,0.794895});
Transform54.setCenter(new float[]{-0.484014,0.988261,-0.291293});
Transform& Transform55 =  Transform();
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setUSE(CString("_2"));
Appearance57.addChild(&Material58);

ImageTexture& ImageTexture59 =  ImageTexture();
ImageTexture59.setUSE(CString("_1"));
Appearance57.addChild(&ImageTexture59);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setSolid(false);
IndexedFaceSet60.setConvex(false);
IndexedFaceSet60.setCreaseAngle(3.14159);
IndexedFaceSet60.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,8,0,3,9,-1,10,11,12,-1,11,13,12,-1,13,14,12,-1,14,15,12,-1}, 36);
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,5,8,9,6,-1,8,0,3,9,-1,7,6,10,-1,6,9,10,-1,9,3,10,-1,3,2,10,-1}, 36);
TextureCoordinate& TextureCoordinate61 =  TextureCoordinate();
TextureCoordinate61.setPoint(new float[]{0.055592,0.786127,0.186486,0.78569,0.189496,0.869771,0.07726,0.868392,0.186486,0.78569,0.055592,0.786127,0.0771227,0.870922,0.189496,0.869771,0.0018344,0.78663,0.0504269,0.872418,0.337048,0.890808,0.187147,0.922024,0.344651,0.982106,0.151624,0.931766,0.187147,0.917169,0.337048,0.890808}, 32);
IndexedFaceSet60.setTexCoord(&TextureCoordinate61);

Coordinate& Coordinate62 =  Coordinate();
Coordinate62.setPoint(new float[]{-0.533477,0.908409,-0.207057,-0.358914,0.879917,-0.207057,-0.348813,1.01099,-0.226823,-0.49862,1.03267,-0.226823,-0.358914,0.879917,-0.375529,-0.533477,0.908409,-0.375529,-0.49862,1.03667,-0.355763,-0.348813,1.01099,-0.355763,-0.59867,0.940267,-0.291293,-0.53412,1.04468,-0.291293,-0.341216,1.08609,-0.291239}, 33);
IndexedFaceSet60.setCoord(&Coordinate62);

Shape56.setGeometry(&IndexedFaceSet60);

Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("armL"));
Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Material66.setUSE(CString("_3"));
Appearance65.addChild(&Material66);

Shape64.addChild(&Appearance65);

IndexedFaceSet& IndexedFaceSet67 =  IndexedFaceSet();
IndexedFaceSet67.setSolid(false);
IndexedFaceSet67.setConvex(false);
IndexedFaceSet67.setCreaseAngle(3.14159);
IndexedFaceSet67.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setPoint(new float[]{-0.553497,0.516684,-0.331965,-0.59867,0.524401,-0.331965,-0.583664,0.735971,-0.331965,-0.538487,0.72825,-0.331965,-0.621259,0.528263,-0.292275,-0.606253,0.739833,-0.292275,-0.59867,0.524401,-0.252585,-0.583664,0.735971,-0.252585,-0.553497,0.516684,-0.252585,-0.538487,0.72825,-0.252585,-0.530908,0.512821,-0.292275,-0.515898,0.724391,-0.292275,-0.524127,0.940837,-0.326189,-0.485523,0.93424,-0.326189,-0.543427,0.944133,-0.292275,-0.524127,0.940837,-0.258361,-0.485523,0.93424,-0.258361,-0.466223,0.93094,-0.292275}, 54);
IndexedFaceSet67.setCoord(&Coordinate68);

Shape64.setGeometry(&IndexedFaceSet67);

Transform63.addChild(&Shape64);

Transform54.addChild(&Transform63);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("HandL"));
Transform69.setTranslation(new float[]{0.0321293,-0.0237494,-0.0472086});
Transform69.setRotation(new float[]{-0.309756,0.854417,-0.417161,0.772718});
Transform69.setScaleOrientation(new float[]{0.505384,-0.571804,0.646241,0.731144});
Transform69.setCenter(new float[]{-0.579546,0.526603,-0.275245});
Transform& Transform70 =  Transform();
Transform70.setDEF(CString("handL"));
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setUSE(CString("_3"));
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

IndexedFaceSet& IndexedFaceSet74 =  IndexedFaceSet();
IndexedFaceSet74.setSolid(false);
IndexedFaceSet74.setConvex(false);
IndexedFaceSet74.setCreaseAngle(3.14159);
IndexedFaceSet74.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{-0.627601,0.560028,-0.213307,-0.668908,0.452653,-0.213307,-0.573667,0.53928,-0.213307,-0.627601,0.560028,-0.34748,-0.668908,0.452653,-0.34748,-0.573667,0.53928,-0.34748,-0.614975,0.431905,-0.34748,-0.6429,0.362548,-0.34614,-0.612637,0.381513,-0.34614,-0.6429,0.362548,-0.214647,-0.614975,0.431905,-0.213307,-0.612637,0.381513,-0.214647,-0.588916,0.335689,-0.332928,-0.572081,0.366021,-0.332928,-0.572081,0.366021,-0.228899,-0.588916,0.335689,-0.228899,-0.573667,0.53928,-0.297096,-0.614975,0.431905,-0.297096,-0.597754,0.476662,-0.213307,-0.597754,0.476662,-0.297096,-0.554109,0.469022,-0.284358,-0.51157,0.475904,-0.284358,-0.51157,0.475904,-0.224305,-0.554109,0.469022,-0.224305,-0.533265,0.406243,-0.267468,-0.507684,0.40275,-0.267468,-0.507684,0.40275,-0.231533,-0.533265,0.406243,-0.231533}, 84);
IndexedFaceSet74.setCoord(&Coordinate75);

Shape71.setGeometry(&IndexedFaceSet74);

Transform70.addChild(&Shape71);

Transform69.addChild(&Transform70);

Transform54.addChild(&Transform69);

Transform23.addChild(&Transform54);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("beine"));
Transform76.setCenter(new float[]{-0.361107,0.166233,-0.21749});
Transform& Transform77 =  Transform();
Transform77.setDEF(CString("BeinL"));
Transform77.setCenter(new float[]{-0.361107,0.166233,-0.21749});
Transform& Transform78 =  Transform();
Transform78.setDEF(CString("FussL"));
Transform78.setTranslation(new float[]{1.19209e-7,-2.98023e-8,-8.9407e-8});
Transform78.setCenter(new float[]{-0.361107,0.154101,-0.300968});
Transform& Transform79 =  Transform();
Transform79.setDEF(CString("fussL"));
Transform79.setCenter(new float[]{-0.361107,0.107574,-0.21749});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setDEF(CString("_4"));
Material82.setAmbientIntensity(0);
Material82.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material82.setSpecularColor(new float[]{0.25,0.25,0.25});
Material82.setShininess(1);
Appearance81.addChild(&Material82);

ImageTexture& ImageTexture83 =  ImageTexture();
ImageTexture83.setDEF(CString("_5"));
ImageTexture83.setUrl(new CString[]{CString("shoes1.jpg")}, 1);
Appearance81.addChild(&ImageTexture83);

TextureTransform& TextureTransform84 =  TextureTransform();
TextureTransform84.setDEF(CString("_6"));
Appearance81.setTextureTransform(TextureTransform84);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet85 =  IndexedFaceSet();
IndexedFaceSet85.setSolid(false);
IndexedFaceSet85.setConvex(false);
IndexedFaceSet85.setCreaseAngle(3.14159);
IndexedFaceSet85.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate86 =  TextureCoordinate();
TextureCoordinate86.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet85.setTexCoord(&TextureCoordinate86);

Coordinate& Coordinate87 =  Coordinate();
Coordinate87.setPoint(new float[]{-0.294381,0.0202746,-0.375511,-0.251992,0.0202746,-0.180886,-0.360669,0.0202746,-0.0594685,-0.429255,0.0202746,-0.374377,-0.470223,0.0202746,-0.179051,-0.251992,0.0941865,-0.180886,-0.360669,0.0941865,-0.0594685,-0.294381,0.0941865,-0.375511,-0.429255,0.0941865,-0.374377,-0.470223,0.0941865,-0.179051,-0.3775,0.194873,-0.302374}, 33);
IndexedFaceSet85.setCoord(&Coordinate87);

Shape80.setGeometry(&IndexedFaceSet85);

Transform79.addChild(&Shape80);

Transform78.addChild(&Transform79);

Transform77.addChild(&Transform78);

Transform& Transform88 =  Transform();
Transform88.setDEF(CString("beinL"));
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Material91.setUSE(CString("_3"));
Appearance90.addChild(&Material91);

Shape89.addChild(&Appearance90);

IndexedFaceSet& IndexedFaceSet92 =  IndexedFaceSet();
IndexedFaceSet92.setSolid(false);
IndexedFaceSet92.setConvex(false);
IndexedFaceSet92.setCreaseAngle(3.14159);
IndexedFaceSet92.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setPoint(new float[]{-0.348501,0.101116,-0.330984,-0.394331,0.101116,-0.330984,-0.394331,0.312191,-0.330984,-0.348501,0.312191,-0.330984,-0.417247,0.101116,-0.291293,-0.417247,0.312191,-0.291293,-0.394331,0.101116,-0.251602,-0.394331,0.312191,-0.251602,-0.348501,0.101116,-0.251602,-0.348501,0.312191,-0.251602,-0.325585,0.101116,-0.291293,-0.325585,0.312191,-0.291293}, 36);
IndexedFaceSet92.setCoord(&Coordinate93);

Shape89.setGeometry(&IndexedFaceSet92);

Transform88.addChild(&Shape89);

Transform77.addChild(&Transform88);

Transform76.addChild(&Transform77);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("BeinR"));
Transform94.setCenter(new float[]{0.0193775,0.166233,-0.21749});
Transform& Transform95 =  Transform();
Transform95.setDEF(CString("FussR"));
Transform95.setTranslation(new float[]{-2.23517e-8,-2.98023e-7,3.8743e-7});
Transform95.setScale(new float[]{0.999999,0.999999,0.999999});
Transform95.setCenter(new float[]{0.0193775,0.145404,-0.283224});
Transform& Transform96 =  Transform();
Transform96.setDEF(CString("fussR"));
Transform96.setCenter(new float[]{0.0193775,0.107574,-0.21749});
Shape& Shape97 =  Shape();
Appearance& Appearance98 =  Appearance();
Material& Material99 =  Material();
Material99.setUSE(CString("_4"));
Appearance98.addChild(&Material99);

ImageTexture& ImageTexture100 =  ImageTexture();
ImageTexture100.setUSE(CString("_5"));
Appearance98.addChild(&ImageTexture100);

TextureTransform& TextureTransform101 =  TextureTransform();
TextureTransform101.setUSE(CString("_6"));
Appearance98.setTextureTransform(TextureTransform101);

Shape97.addChild(&Appearance98);

IndexedFaceSet& IndexedFaceSet102 =  IndexedFaceSet();
IndexedFaceSet102.setSolid(false);
IndexedFaceSet102.setConvex(false);
IndexedFaceSet102.setCreaseAngle(3.14159);
IndexedFaceSet102.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate103 =  TextureCoordinate();
TextureCoordinate103.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet102.setTexCoord(&TextureCoordinate103);

Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{0.0861042,0.0202746,-0.375511,0.128493,0.0202746,-0.180886,0.0198162,0.0202746,-0.0594685,-0.0487697,0.0202746,-0.374377,-0.089738,0.0202746,-0.179051,0.128493,0.0941865,-0.180886,0.0198162,0.0941865,-0.0594685,0.0861042,0.0941865,-0.375511,-0.0487697,0.0941865,-0.374377,-0.089738,0.0941865,-0.179051,0.00298554,0.194873,-0.302374}, 33);
IndexedFaceSet102.setCoord(&Coordinate104);

Shape97.setGeometry(&IndexedFaceSet102);

Transform96.addChild(&Shape97);

Transform95.addChild(&Transform96);

Transform94.addChild(&Transform95);

Transform& Transform105 =  Transform();
Transform105.setDEF(CString("beinR"));
Shape& Shape106 =  Shape();
Appearance& Appearance107 =  Appearance();
Material& Material108 =  Material();
Material108.setUSE(CString("_3"));
Appearance107.addChild(&Material108);

Shape106.addChild(&Appearance107);

IndexedFaceSet& IndexedFaceSet109 =  IndexedFaceSet();
IndexedFaceSet109.setSolid(false);
IndexedFaceSet109.setConvex(false);
IndexedFaceSet109.setCreaseAngle(3.14159);
IndexedFaceSet109.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate110 =  Coordinate();
Coordinate110.setPoint(new float[]{-0.0134769,0.101116,-0.330984,0.0323538,0.101116,-0.330984,0.0323538,0.312191,-0.330984,-0.0134769,0.312191,-0.330984,0.0552692,0.101116,-0.291293,0.0552692,0.312191,-0.291293,0.0323538,0.101116,-0.251602,0.0323538,0.312191,-0.251602,-0.0134769,0.101116,-0.251602,-0.0134769,0.312191,-0.251602,-0.0363922,0.101116,-0.291293,-0.0363922,0.312191,-0.291293}, 36);
IndexedFaceSet109.setCoord(&Coordinate110);

Shape106.setGeometry(&IndexedFaceSet109);

Transform105.addChild(&Shape106);

Transform94.addChild(&Transform105);

Transform76.addChild(&Transform94);

Transform23.addChild(&Transform76);

Transform12.addChild(&Transform23);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("Head"));
Transform111.setTranslation(new float[]{3.42727e-7,-0.00000202656,2.98023e-7});
Transform111.setRotation(new float[]{-0.768557,-0.638163,0.0454833,0.184941});
Transform111.setScale(new float[]{0.999998,0.999999,0.999999});
Transform111.setScaleOrientation(new float[]{-0.823404,0.371392,-0.429038,0.42547});
Transform111.setCenter(new float[]{-0.174956,1.06357,-0.157485});
Group& Group112 =  Group();
Group& Group113 =  Group();
Group113.setDEF(CString("head10"));
TimeSensor& TimeSensor114 =  TimeSensor();
TimeSensor114.setDEF(CString("Time_2"));
TimeSensor114.setCycleInterval(10);
TimeSensor114.setLoop(true);
TimeSensor114.setStartTime(967123092.439519);
TimeSensor114.setStopTime(1);
Group113.addChild(&TimeSensor114);

Group112.addChild(&Group113);

OrientationInterpolator& OrientationInterpolator115 =  OrientationInterpolator();
OrientationInterpolator115.setDEF(CString("HeadRotationInterp"));
OrientationInterpolator115.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.7,0.9,1.0}, 9);
OrientationInterpolator115.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.00878907,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.140662,0.0,0.0,1.0,0.120193,0.0,0.0,1.0,0.0,0.666755,0.741904,0.0708235,0.284414,-0.768557,-0.638163,0.0454833,0.184941,0.0,0.0,1.0,0.0}, 36);
Group112.addChild(&OrientationInterpolator115);

Transform111.addChild(&Group112);

Transform& Transform116 =  Transform();
Transform116.setDEF(CString("HeadO"));
Transform116.setTranslation(new float[]{5.96046e-8,4.76837e-7,2.98023e-7});
Transform116.setScale(new float[]{0.999995,0.999992,0.999994});
Transform116.setScaleOrientation(new float[]{0.00953886,-0.744196,0.667893,0.035968});
Transform116.setCenter(new float[]{-0.18099,1.26447,-0.194326});
Group& Group117 =  Group();
Group& Group118 =  Group();
Group118.setDEF(CString("mouth13"));
TimeSensor& TimeSensor119 =  TimeSensor();
TimeSensor119.setDEF(CString("Time_3"));
TimeSensor119.setCycleInterval(6.5);
TimeSensor119.setLoop(true);
TimeSensor119.setStartTime(967123092.439519);
TimeSensor119.setStopTime(1);
Group118.addChild(&TimeSensor119);

Group117.addChild(&Group118);

OrientationInterpolator& OrientationInterpolator120 =  OrientationInterpolator();
OrientationInterpolator120.setDEF(CString("HeadORotationInterp"));
OrientationInterpolator120.setKey(new float[]{0.0,0.0769231,0.153846,0.230769,0.307692,0.384616,0.461539,0.538462,0.615385,0.692308,0.846154,1.0}, 12);
OrientationInterpolator120.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,-1.20492e-7,3.45555e-8,0.170499,0.0,0.0,1.0,0.0,1.0,1.20492e-7,-3.45555e-8,0.013637,1.0,1.20492e-7,-3.45555e-8,0.0204613,1.0,1.20492e-7,-3.45555e-8,0.0204613,1.0,1.20492e-7,-3.45555e-8,0.013637,0.0,0.0,1.0,0.0,-1.0,-1.20492e-7,3.45555e-8,0.170499,-1.0,-1.20492e-7,3.45555e-8,0.170499,0.0,0.0,1.0,0.0,-1.0,-1.20492e-7,3.45555e-8,0.170499}, 48);
Group117.addChild(&OrientationInterpolator120);

Transform116.addChild(&Group117);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("augen"));
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setAmbientIntensity(0);
Material124.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material124.setSpecularColor(new float[]{0.0638298,0.0638298,0.0638298});
Material124.setShininess(0.712766);
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setSolid(false);
IndexedFaceSet125.setConvex(false);
IndexedFaceSet125.setCreaseAngle(3.14159);
IndexedFaceSet125.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{-0.297166,1.42708,-0.0154432,-0.269645,1.42075,0.00939035,-0.292714,1.36657,-0.00734124,-0.280138,1.37926,0.0389142,-0.335188,1.39193,-0.010753,-0.345682,1.35044,0.0187708,-0.31816,1.3441,0.0436044,-0.318049,1.39881,0.02896,-0.0648112,1.42708,-0.0154428,-0.0923325,1.42075,0.00939074,-0.0692626,1.36657,-0.00734085,-0.0818392,1.37926,0.0389146,-0.0267888,1.39193,-0.0107526,-0.0162955,1.35044,0.0187712,-0.0438168,1.3441,0.0436048,-0.0439285,1.39881,0.0289603}, 48);
IndexedFaceSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedFaceSet125);

Transform121.addChild(&Shape122);

Transform116.addChild(&Transform121);

Transform& Transform127 =  Transform();
Transform127.setDEF(CString("locke"));
Shape& Shape128 =  Shape();
Appearance& Appearance129 =  Appearance();
Material& Material130 =  Material();
Material130.setAmbientIntensity(0.211831);
Material130.setDiffuseColor(new float[]{0.755319,0.755319,0.755319});
Material130.setSpecularColor(new float[]{0.25,0.25,0.25});
Material130.setShininess(1);
Appearance129.addChild(&Material130);

ImageTexture& ImageTexture131 =  ImageTexture();
ImageTexture131.setUrl(new CString[]{CString("hair2.jpg")}, 1);
Appearance129.addChild(&ImageTexture131);

TextureTransform& TextureTransform132 =  TextureTransform();
Appearance129.setTextureTransform(TextureTransform132);

Shape128.addChild(&Appearance129);

IndexedFaceSet& IndexedFaceSet133 =  IndexedFaceSet();
IndexedFaceSet133.setSolid(false);
IndexedFaceSet133.setConvex(false);
IndexedFaceSet133.setCreaseAngle(3.14159);
IndexedFaceSet133.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,4,5,6,-1,4,7,5,-1,7,8,5,-1,7,9,8,-1,9,10,8,-1,9,2,10,-1,2,3,10,-1,3,1,11,-1,10,3,11,-1,8,10,11,-1,6,5,11,-1,5,8,11,-1,12,0,2,-1,13,0,12,-1,13,14,0,-1,15,16,14,-1,17,18,19,-1,19,4,20,-1,20,4,6,-1,20,17,19,-1,21,4,19,-1,7,4,22,-1,21,22,4,-1,22,23,7,-1,23,9,7,-1,23,2,9,-1,12,2,23,-1,20,6,24,-1,24,6,11,-1,20,24,17,-1,25,17,24,-1,26,25,24,-1,27,26,24,-1,16,26,27,-1,14,28,0,-1,28,14,16,-1,28,1,0,-1,28,16,27,-1,29,30,31,-1,1,29,31,-1,32,30,29,-1,30,32,33,-1,29,1,34,-1,34,1,28,-1,34,32,29,-1,27,34,28,-1,32,34,27,-1,11,35,24,-1,11,33,35,-1,27,24,35,-1,33,32,35,-1,35,32,27,-1,1,31,36,-1,36,31,30,-1,1,36,11,-1,33,36,30,-1,36,33,11,-1,14,13,37,-1,38,39,37,-1,40,39,38,-1,41,39,40,-1,41,15,39,-1,42,39,15,-1,37,39,43,-1,39,42,43,-1,43,14,37,-1,15,43,42,-1,14,43,15,-1,21,19,44,-1,45,44,19,-1,19,18,45,-1,18,46,45,-1,44,45,47,-1,46,47,45,-1,46,18,47,-1,18,48,47,-1,48,49,47,-1,21,44,50,-1,22,21,50,-1,50,44,51,-1,47,51,44,-1,49,51,47,-1,50,51,52,-1,22,50,52,-1,23,22,52,-1,23,52,12,-1,51,53,52,-1,49,53,51,-1,53,38,52,-1,40,38,53,-1,54,53,49,-1,54,40,53,-1,55,38,37,-1,55,52,38,-1,13,55,37,-1,12,52,55,-1,12,55,13,-1}, 396);
TextureCoordinate& TextureCoordinate134 =  TextureCoordinate();
TextureCoordinate134.setPoint(new float[]{-0.031153,0.475058,0.134139,0.410225,-0.078562,0.934321,0.173678,0.828794,1.03115,0.475058,0.836758,0.456265,0.751218,0.149792,1.08024,0.94078,0.820858,0.836429,-0.487702,1.3526,0.48963,1.17199,0.495426,0.309519,-0.224903,0.859446,-0.149927,0.471418,-0.149453,0.113573,-0.169275,0.098692,-0.040147,0.057141,1.04084,0.051769,1.17138,0.095305,1.15124,0.110286,1.01664,0.064166,1.15153,0.471135,1.2279,0.862599,-0.496601,1.09392,0.620147,-0.138745,0.706603,-0.246724,0.281581,-0.24,0.368273,-0.156726,-0.01637,0.06927,0.212111,0.135703,0.424405,0.323043,0.281031,0.353442,0.338531,0.09775,0.387608,0.304135,0.164237,0.040405,0.491292,0.28297,0.384216,0.305379,-0.243758,0.47296,-0.300561,0.74517,-0.256177,0.467415,-0.242297,0.836079,-0.165947,0.462516,-0.251363,0.128446,-0.236332,0.13454,1.23539,0.473707,1.24192,0.129063,1.25735,0.12307,1.24736,0.468294,1.16778,0.462142,1.24553,0.839007,1.3059,0.771591,1.3166,0.752928,-0.497671,0.922532,-0.49772,0.893837,-0.496744,1.05375,-0.290257,0.763018}, 112);
IndexedFaceSet133.setTexCoord(&TextureCoordinate134);

Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{-0.592296,1.43852,-0.321891,-0.381768,1.56226,-0.274111,-0.409135,1.47398,-0.529139,-0.312038,1.58263,-0.393157,0.235343,1.43852,-0.321891,0.0673617,1.61112,-0.274111,-0.004428,1.61158,-0.138737,0.0471568,1.47398,-0.529139,-0.0499401,1.58263,-0.393157,-0.180989,1.48798,-0.610991,-0.180989,1.59068,-0.440175,-0.180989,1.6378,-0.231548,-0.444862,1.31724,-0.599154,-0.585265,1.27624,-0.359448,-0.543403,1.23162,-0.0986466,-0.514476,1.21942,-0.101512,-0.469796,1.38488,-0.0993744,0.107818,1.38488,-0.0993743,0.152498,1.21942,-0.101512,0.181425,1.23162,-0.0986466,0.124819,1.40459,-0.0914341,0.223287,1.27624,-0.359448,0.0828841,1.31724,-0.59915,-0.180989,1.33344,-0.693817,-0.107351,1.57995,0.0104996,-0.115137,1.50043,-0.065218,-0.246841,1.50043,-0.065218,-0.254627,1.5707,0.0222791,-0.486797,1.40459,-0.0914341,-0.39305,1.60135,-0.115085,-0.264004,1.79812,-0.138737,-0.368794,1.6886,-0.201597,-0.301198,1.64951,-0.0932709,-0.269272,1.69962,-0.185143,-0.374397,1.53996,-0.107707,-0.183261,1.63573,-0.22372,-0.272102,1.69931,-0.185612,-0.529105,1.15034,-0.391786,-0.431754,1.18692,-0.584525,-0.51123,1.14085,-0.390192,-0.428512,1.30163,-0.582057,-0.560216,1.26316,-0.357203,-0.499816,1.09277,-0.116714,-0.521666,1.10172,-0.114585,0.191117,1.15034,-0.391786,0.152848,1.10172,-0.114585,0.130999,1.09277,-0.116714,0.173242,1.14085,-0.390192,0.198237,1.26316,-0.357203,0.0665338,1.30163,-0.582053,0.0605458,1.19808,-0.59674,0.0488626,1.18692,-0.584525,-0.180989,1.21653,-0.673482,-0.180989,1.20466,-0.657077,-0.180989,1.31682,-0.670855,-0.443434,1.19808,-0.596743}, 168);
IndexedFaceSet133.setCoord(&Coordinate135);

Shape128.setGeometry(&IndexedFaceSet133);

Transform127.addChild(&Shape128);

Transform116.addChild(&Transform127);

Transform& Transform136 =  Transform();
Transform136.setDEF(CString("Cap"));
Transform136.setCenter(new float[]{-0.18099,1.66129,-0.155752});
Transform& Transform137 =  Transform();
Transform137.setDEF(CString("basecap"));
Transform137.setCenter(new float[]{-0.18099,1.66129,-0.155752});
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
Material& Material140 =  Material();
Material140.setAmbientIntensity(0.37234);
Material140.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material140.setShininess(0);
Appearance139.addChild(&Material140);

ImageTexture& ImageTexture141 =  ImageTexture();
ImageTexture141.setUSE(CString("_1"));
Appearance139.addChild(&ImageTexture141);

Shape138.addChild(&Appearance139);

IndexedFaceSet& IndexedFaceSet142 =  IndexedFaceSet();
IndexedFaceSet142.setSolid(false);
IndexedFaceSet142.setConvex(false);
IndexedFaceSet142.setCreaseAngle(3.14159);
IndexedFaceSet142.setTexCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,6,2,-1,6,7,2,-1,7,4,2,-1,8,9,10,-1,10,9,11,-1,10,11,12,-1,11,13,12,-1,11,14,13,-1,15,11,9,-1,16,11,15,-1,17,18,19,-1,20,21,22,-1,23,24,25,-1,20,26,27,-1,20,28,21,-1,20,27,28,-1,28,29,21,-1,27,30,28,-1,30,8,28,-1,28,31,29,-1,31,28,8,-1,31,32,29,-1,31,8,10,-1,31,12,32,-1,10,12,31,-1,3,33,2,-1,17,34,18,-1,17,35,34,-1,35,36,34,-1,33,37,2,-1,38,34,36,-1,37,5,2,-1,23,38,36,-1,23,25,38,-1,39,40,41,-1,41,40,42,-1,41,42,43,-1,39,41,44,-1,45,39,44,-1,46,41,43,-1,41,46,44,-1,46,43,47,-1,48,46,47,-1,44,46,49,-1,48,49,46,-1,44,49,45,-1,16,49,48,-1,16,45,49,-1,42,50,43,-1,40,50,42,-1,51,50,40,-1,50,52,43,-1,50,51,52,-1,47,43,52,-1,51,26,52,-1,26,47,52,-1}, 236);
IndexedFaceSet142.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,6,2,-1,6,7,2,-1,7,4,2,-1,8,9,10,-1,10,9,11,-1,10,11,0,-1,11,1,0,-1,11,3,1,-1,12,11,9,-1,13,11,12,-1,13,3,11,-1,14,6,5,-1,15,14,5,-1,14,15,16,-1,14,17,6,-1,14,16,17,-1,17,7,6,-1,16,18,17,-1,18,8,17,-1,17,19,7,-1,19,17,8,-1,19,4,7,-1,19,8,10,-1,19,0,4,-1,10,0,19,-1,3,20,2,-1,13,20,3,-1,13,21,20,-1,21,22,20,-1,20,23,2,-1,23,20,22,-1,23,5,2,-1,15,23,22,-1,15,5,23,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,24,26,29,-1,30,24,29,-1,31,26,28,-1,26,31,29,-1,31,28,22,-1,21,31,22,-1,29,31,32,-1,21,32,31,-1,29,32,30,-1,13,32,21,-1,13,30,32,-1,27,33,28,-1,25,33,27,-1,34,33,25,-1,33,35,28,-1,33,34,35,-1,22,28,35,-1,34,15,35,-1,15,22,35,-1}, 236);
TextureCoordinate& TextureCoordinate143 =  TextureCoordinate();
TextureCoordinate143.setPoint(new float[]{0.350489,0.823646,0.278995,0.684169,0.513265,0.625861,0.284043,0.51605,0.501329,0.897954,0.723249,0.521317,0.745636,0.691561,0.654371,0.828459,0.493811,0.291576,0.6849,0.297254,0.701303,0.431193,0.812681,0.443959,0.646283,0.514332,0.727865,0.519044,0.710327,0.473214,0.786576,0.31163,0.75754,0.255933,0.251618,0.285196,0.297704,0.465936,0.191256,0.396348,0.193928,0.448908,0.260065,0.519044,0.290996,0.473214,0.753115,0.285196,0.813477,0.397606,0.707028,0.465936,0.243783,0.255933,0.201044,0.31163,0.286626,0.431193,0.341646,0.514332,0.302723,0.297254,0.493965,0.427314,0.493965,0.513525,0.395373,0.449853,0.38519,0.481938,0.440817,0.356118,0.563916,0.356118,0.634861,0.453647,0.619543,0.481938,0.550277,0.292852,0.451046,0.292852,0.539318,0.361339,0.45335,0.35936,0.44126,0.367854,0.694759,0.317998,0.718106,0.245182,0.5514,0.369748,0.437607,0.341194,0.563716,0.341194,0.702494,0.327919,0.306564,0.317998,0.28291,0.245182,0.303544,0.325478}, 106);
IndexedFaceSet142.setTexCoord(&TextureCoordinate143);

Coordinate& Coordinate144 =  Coordinate();
Coordinate144.setPoint(new float[]{-0.383155,1.88086,-0.454316,-0.491434,1.85775,-0.2675,-0.180989,1.9377,-0.188969,-0.459268,1.83976,-0.0682143,-0.18099,1.89189,-0.527638,0.0972902,1.83976,-0.0682165,0.129455,1.85775,-0.267503,0.0211747,1.88086,-0.454318,-0.180991,1.47094,-0.690351,-0.434613,1.4645,-0.590399,-0.456181,1.74587,-0.578209,-0.604007,1.72776,-0.332134,-0.569562,1.44821,-0.337304,-0.521931,1.43236,-0.0727347,0.242028,1.72776,-0.315522,0.159954,1.43236,-0.0727374,0.207587,1.44821,-0.337307,0.0942002,1.74587,-0.578212,0.0726322,1.46451,-0.590401,-0.180991,1.75552,-0.677208,-0.340314,1.86335,0.0051221,-0.264677,1.56969,0.0607477,-0.0972995,1.56969,0.0607471,-0.0216633,1.86335,0.00512084,-0.24684,1.50043,-0.0652165,-0.115137,1.50043,-0.065217,-0.232294,1.55317,0.378541,-0.118193,1.5494,0.378848,-0.102147,1.56643,0.372543,-0.438603,1.47363,0.367575,-0.469795,1.38488,-0.0993756,-0.248329,1.56999,0.372539,-0.448869,1.49319,0.362144,0.0766288,1.47363,0.367572,0.107818,1.38488,-0.0993779,0.0806374,1.48861,0.362142}, 108);
IndexedFaceSet142.setCoord(&Coordinate144);

Shape138.setGeometry(&IndexedFaceSet142);

Transform137.addChild(&Shape138);

Transform136.addChild(&Transform137);

Transform116.addChild(&Transform136);

Transform& Transform145 =  Transform();
Transform145.setDEF(CString("oberkiefer"));
Shape& Shape146 =  Shape();
Appearance& Appearance147 =  Appearance();
Material& Material148 =  Material();
Material148.setUSE(CString("_3"));
Appearance147.addChild(&Material148);

Shape146.addChild(&Appearance147);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setSolid(false);
IndexedFaceSet149.setConvex(false);
IndexedFaceSet149.setCreaseAngle(1.52734);
IndexedFaceSet149.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1}, 38);
Coordinate& Coordinate150 =  Coordinate();
Coordinate150.setPoint(new float[]{-0.514476,1.21943,-0.101513,-0.312692,1.19088,0.0653795,-0.295048,1.36016,0.0451552,-0.469795,1.38489,-0.0993757,-0.0492849,1.19088,0.0653795,-0.0669291,1.36016,0.0451552,0.152499,1.21943,-0.101513,0.107818,1.38489,-0.0993756,-0.24684,1.50044,-0.0652193,-0.115137,1.50044,-0.0652193,-0.312692,1.19088,0.0653795,-0.514476,1.21943,-0.101513,0.152499,1.21943,-0.101513,-0.0492849,1.19088,0.0653795,-0.560215,1.26317,-0.357204,0.198238,1.26317,-0.357204}, 48);
IndexedFaceSet149.setCoord(&Coordinate150);

Shape146.setGeometry(&IndexedFaceSet149);

Transform145.addChild(&Shape146);

Transform116.addChild(&Transform145);

Transform111.addChild(&Transform116);

Transform& Transform151 =  Transform();
Transform151.setDEF(CString("unterkiefer"));
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setUSE(CString("_3"));
Appearance153.addChild(&Material154);

Shape152.addChild(&Appearance153);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setSolid(false);
IndexedFaceSet155.setConvex(false);
IndexedFaceSet155.setCreaseAngle(3.14159);
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,3,2,18,19,-1,2,5,20,18,-1,5,7,21,20,-1,7,9,22,21,-1,9,11,23,22,-1,11,13,24,23,-1,13,15,25,24,-1,15,17,26,25,-1,17,3,19,26,-1,1,0,27,-1,0,16,27,-1,4,1,27,-1,16,14,27,-1,6,4,27,-1,8,6,27,-1,10,8,27,-1,12,10,27,-1,14,12,27,-1,28,29,30,31,-1,32,28,31,33,-1}, 136);
Coordinate& Coordinate156 =  Coordinate();
Coordinate156.setPoint(new float[]{-0.295853,1.092,-0.457527,-0.356972,1.07415,-0.353183,-0.485799,1.15531,-0.362344,-0.379938,1.18623,-0.543072,-0.335747,1.05385,-0.234525,-0.449036,1.12015,-0.156824,-0.242108,1.0406,-0.157078,-0.28685,1.09721,-0.0226825,-0.119869,1.0406,-0.157078,-0.0751272,1.09721,-0.0226825,-0.0262303,1.05385,-0.234525,0.0870591,1.12015,-0.156824,-0.00500487,1.07415,-0.353183,0.123822,1.15531,-0.362344,-0.0661242,1.092,-0.457527,0.0179611,1.18623,-0.543072,-0.180989,1.09905,-0.498734,-0.180989,1.19844,-0.614446,-0.532952,1.26236,-0.352466,-0.410717,1.29806,-0.561155,-0.490501,1.22176,-0.115155,-0.303223,1.19526,0.0397384,-0.0587538,1.19526,0.0397384,0.128524,1.22176,-0.115155,0.170975,1.26236,-0.352466,0.0487402,1.29806,-0.561155,-0.180989,1.31216,-0.643569,-0.180989,1.04061,-0.327436,-0.490501,1.22176,-0.115155,-0.303223,1.19526,0.0397384,-0.0587538,1.19526,0.0397384,0.128524,1.22176,-0.115155,-0.532952,1.26236,-0.352466,0.170975,1.26236,-0.352466}, 102);
IndexedFaceSet155.setCoord(&Coordinate156);

Shape152.setGeometry(&IndexedFaceSet155);

Transform151.addChild(&Shape152);

Transform111.addChild(&Transform151);

Transform12.addChild(&Transform111);

Transform11.addChild(&Transform12);

Transform& Transform157 =  Transform();
Transform157.setDEF(CString("vSens"));
VisibilitySensor& VisibilitySensor158 =  VisibilitySensor();
VisibilitySensor158.setDEF(CString("_7"));
VisibilitySensor158.setSize(new float[]{1.27817,2.09218,1.36408});
VisibilitySensor158.setCenter(new float[]{-0.139086,1.05999,-0.182041});
Transform157.addChild(&VisibilitySensor158);

Transform11.addChild(&Transform157);

Transform& Transform159 =  Transform();
Transform159.setDEF(CString("Shadow"));
Transform159.setCenter(new float[]{-0.182549,0.0190474,0.348487});
Group& Group160 =  Group();
Group& Group161 =  Group();
Group161.setUSE(CString("hupf"));
Group160.addChild(&Group161);

PositionInterpolator& PositionInterpolator162 =  PositionInterpolator();
PositionInterpolator162.setDEF(CString("ShadowTranslationInterp"));
PositionInterpolator162.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.600001,0.700001,0.800001,0.900001,1.0}, 11);
PositionInterpolator162.setKeyValue(new float[]{0.0,0.0,0.0,1.49012e-8,1.86265e-9,0.0988316,0.0,0.0,0.0,1.49012e-8,1.86265e-9,0.0988316,0.0,0.0,0.0,1.49012e-8,1.86265e-9,0.0988316,0.0,0.0,0.0,1.49012e-8,1.86265e-9,0.30715,0.0,0.0,0.0,1.49012e-8,1.86265e-9,0.0988316,0.0,0.0,0.0}, 33);
Group160.addChild(&PositionInterpolator162);

PositionInterpolator& PositionInterpolator163 =  PositionInterpolator();
PositionInterpolator163.setDEF(CString("ShadowScaleFactorInterp"));
PositionInterpolator163.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.600001,0.700001,0.800001,0.900001,1.0}, 11);
PositionInterpolator163.setKeyValue(new float[]{1.0,1.0,1.0,0.946498,0.946498,0.946498,1.0,1.0,1.0,0.946498,0.946498,0.946498,1.0,1.0,1.0,0.946498,0.946498,0.946498,1.0,1.0,1.0,0.946498,0.946498,1.10298,1.0,1.0,1.0,0.946498,0.946498,0.946498,1.0,1.0,1.0}, 33);
Group160.addChild(&PositionInterpolator163);

Transform159.addChild(&Group160);

Transform& Transform164 =  Transform();
Transform164.setTranslation(new float[]{-0.182549,0.0190474,0.348487});
Transform164.setRotation(new float[]{1.0,-3.58126e-8,2.90268e-7,1.5708});
Transform164.setScale(new float[]{1.15094,1.15094,1.15094});
Transform164.setScaleOrientation(new float[]{0.701186,-0.701186,-0.129141,1.30887});
Shape& Shape165 =  Shape();
Appearance& Appearance166 =  Appearance();
ImageTexture& ImageTexture167 =  ImageTexture();
ImageTexture167.setUrl(new CString[]{CString("sh1.png")}, 1);
Appearance166.addChild(&ImageTexture167);

Shape165.addChild(&Appearance166);

IndexedFaceSet& IndexedFaceSet168 =  IndexedFaceSet();
IndexedFaceSet168.setSolid(false);
IndexedFaceSet168.setCcw(false);
IndexedFaceSet168.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate169 =  TextureCoordinate();
TextureCoordinate169.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet168.setTexCoord(&TextureCoordinate169);

Coordinate& Coordinate170 =  Coordinate();
Coordinate170.setPoint(new float[]{-0.5,-0.5861,0.0,0.5,-0.5861,0.0,0.5,0.5861,0.0,-0.5,0.5861,0.0}, 12);
IndexedFaceSet168.setCoord(&Coordinate170);

Shape165.setGeometry(&IndexedFaceSet168);

Transform164.addChild(&Shape165);

Transform159.addChild(&Transform164);

Transform11.addChild(&Transform159);

LOD10.addChildren(&Transform11);

Transform& Transform171 =  Transform();
Transform171.setDEF(CString("off"));
LOD10.addChildren(&Transform171);

Transform9.addChild(&LOD10);

Scene7.addChild(&Transform9);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromNode(CString("_7"));
ROUTE172.setFromField(CString("isActive"));
ROUTE172.setToNode(CString("Time_1"));
ROUTE172.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE172);

ROUTE& ROUTE173 =  ROUTE();
ROUTE173.setFromNode(CString("_7"));
ROUTE173.setFromField(CString("enterTime"));
ROUTE173.setToNode(CString("Time_1"));
ROUTE173.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE173);

ROUTE& ROUTE174 =  ROUTE();
ROUTE174.setFromNode(CString("Time_1"));
ROUTE174.setFromField(CString("fraction_changed"));
ROUTE174.setToNode(CString("elsTranslationInterp"));
ROUTE174.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE174);

ROUTE& ROUTE175 =  ROUTE();
ROUTE175.setFromNode(CString("Time_1"));
ROUTE175.setFromField(CString("fraction_changed"));
ROUTE175.setToNode(CString("CapTranslationInterp"));
ROUTE175.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE175);

ROUTE& ROUTE176 =  ROUTE();
ROUTE176.setFromNode(CString("Time_1"));
ROUTE176.setFromField(CString("fraction_changed"));
ROUTE176.setToNode(CString("ArmRRotationInterp"));
ROUTE176.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE176);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("Time_1"));
ROUTE177.setFromField(CString("fraction_changed"));
ROUTE177.setToNode(CString("ArmLRotationInterp"));
ROUTE177.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("Time_1"));
ROUTE178.setFromField(CString("fraction_changed"));
ROUTE178.setToNode(CString("beineTranslationInterp"));
ROUTE178.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("Time_1"));
ROUTE179.setFromField(CString("fraction_changed"));
ROUTE179.setToNode(CString("FussLRotationInterp"));
ROUTE179.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("Time_1"));
ROUTE180.setFromField(CString("fraction_changed"));
ROUTE180.setToNode(CString("FussRRotationInterp"));
ROUTE180.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE180);

ROUTE& ROUTE181 =  ROUTE();
ROUTE181.setFromNode(CString("ArmRRotationInterp"));
ROUTE181.setFromField(CString("value_changed"));
ROUTE181.setToNode(CString("ArmR"));
ROUTE181.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE181);

ROUTE& ROUTE182 =  ROUTE();
ROUTE182.setFromNode(CString("ArmLRotationInterp"));
ROUTE182.setFromField(CString("value_changed"));
ROUTE182.setToNode(CString("ArmL"));
ROUTE182.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE182);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("FussLRotationInterp"));
ROUTE183.setFromField(CString("value_changed"));
ROUTE183.setToNode(CString("FussL"));
ROUTE183.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("FussRRotationInterp"));
ROUTE184.setFromField(CString("value_changed"));
ROUTE184.setToNode(CString("FussR"));
ROUTE184.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("beineTranslationInterp"));
ROUTE185.setFromField(CString("value_changed"));
ROUTE185.setToNode(CString("beine"));
ROUTE185.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("_7"));
ROUTE186.setFromField(CString("isActive"));
ROUTE186.setToNode(CString("Time_2"));
ROUTE186.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("_7"));
ROUTE187.setFromField(CString("enterTime"));
ROUTE187.setToNode(CString("Time_2"));
ROUTE187.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("Time_2"));
ROUTE188.setFromField(CString("fraction_changed"));
ROUTE188.setToNode(CString("HeadRotationInterp"));
ROUTE188.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("_7"));
ROUTE189.setFromField(CString("isActive"));
ROUTE189.setToNode(CString("Time_3"));
ROUTE189.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_7"));
ROUTE190.setFromField(CString("enterTime"));
ROUTE190.setToNode(CString("Time_3"));
ROUTE190.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("Time_3"));
ROUTE191.setFromField(CString("fraction_changed"));
ROUTE191.setToNode(CString("HeadORotationInterp"));
ROUTE191.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("CapTranslationInterp"));
ROUTE192.setFromField(CString("value_changed"));
ROUTE192.setToNode(CString("Cap"));
ROUTE192.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("HeadORotationInterp"));
ROUTE193.setFromField(CString("value_changed"));
ROUTE193.setToNode(CString("HeadO"));
ROUTE193.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("HeadRotationInterp"));
ROUTE194.setFromField(CString("value_changed"));
ROUTE194.setToNode(CString("Head"));
ROUTE194.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("elsTranslationInterp"));
ROUTE195.setFromField(CString("value_changed"));
ROUTE195.setToNode(CString("els"));
ROUTE195.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("Time_1"));
ROUTE196.setFromField(CString("fraction_changed"));
ROUTE196.setToNode(CString("ShadowTranslationInterp"));
ROUTE196.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("Time_1"));
ROUTE197.setFromField(CString("fraction_changed"));
ROUTE197.setToNode(CString("ShadowScaleFactorInterp"));
ROUTE197.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("ShadowTranslationInterp"));
ROUTE198.setFromField(CString("value_changed"));
ROUTE198.setToNode(CString("Shadow"));
ROUTE198.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("ShadowScaleFactorInterp"));
ROUTE199.setFromField(CString("value_changed"));
ROUTE199.setToNode(CString("Shadow"));
ROUTE199.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE199);

X3D0.setScene(&Scene7);

//}
