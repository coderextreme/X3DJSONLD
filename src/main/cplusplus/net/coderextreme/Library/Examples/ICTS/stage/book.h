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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:58 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:58 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Not"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Not_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("set_SFBool"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("value_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field10);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo11 =  WorldInfo();
WorldInfo11.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo11);

Transform& Transform12 =  Transform();
Transform12.setDEF(CString("bbox"));
Transform12.setBboxSize(new float[]{0.6,0.1,0.4});
Scene7.addChild(&Transform12);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("book"));
Transform& Transform14 =  Transform();
Transform14.setTranslation(new float[]{0.0,0.0057869,0.0});
Transform14.setScale(new float[]{0.0469265,0.0578693,1.58083});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Appearance16.addChild(&Material17);

ImageTexture& ImageTexture18 =  ImageTexture();
ImageTexture18.setDEF(CString("_1"));
ImageTexture18.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance16.addChild(&ImageTexture18);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet19 =  IndexedFaceSet();
IndexedFaceSet19.setCreaseAngle(0.5);
IndexedFaceSet19.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet19.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate20 =  TextureCoordinate();
TextureCoordinate20.setPoint(new float[]{0.0728729,0.372773,0.103089,0.0803465,0.146945,0.372773,0.177162,0.0803465}, 8);
IndexedFaceSet19.setTexCoord(&TextureCoordinate20);

Coordinate& Coordinate21 =  Coordinate();
Coordinate21.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1}, 24);
IndexedFaceSet19.setCoord(&Coordinate21);

Shape15.setGeometry(&IndexedFaceSet19);

Transform14.addChild(&Shape15);

Transform13.addChild(&Transform14);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("page4"));
Transform22.setTranslation(new float[]{2.56114e-9,-0.000322939,0.0});
Transform22.setScale(new float[]{0.999999,0.999999,0.999999});
Transform22.setCenter(new float[]{0.0,0.00213197,0.0});
Group& Group23 =  Group();
Group& Group24 =  Group();
Group24.setDEF(CString("aufklapp-p4"));
TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(CString("Time_1"));
TimeSensor25.setCycleInterval(2);
TimeSensor25.setStopTime(1);
Group24.addChild(&TimeSensor25);

Group23.addChild(&Group24);

OrientationInterpolator& OrientationInterpolator26 =  OrientationInterpolator();
OrientationInterpolator26.setDEF(CString("frontRotationInterp_1"));
OrientationInterpolator26.setKey(new float[]{0.0}, 1);
OrientationInterpolator26.setKeyValue(new float[]{0.0,0.0,1.0,0.0}, 4);
Group23.addChild(&OrientationInterpolator26);

OrientationInterpolator& OrientationInterpolator27 =  OrientationInterpolator();
OrientationInterpolator27.setDEF(CString("page1RotationInterp_1"));
OrientationInterpolator27.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator27.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,3.14159}, 12);
Group23.addChild(&OrientationInterpolator27);

PositionInterpolator& PositionInterpolator28 =  PositionInterpolator();
PositionInterpolator28.setDEF(CString("page4TranslationInterp_1"));
PositionInterpolator28.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator28.setKeyValue(new float[]{2.56114e-9,-0.000322939,0.0,2.56114e-9,0.00155101,0.0,2.56114e-9,0.00342495,0.0}, 9);
Group23.addChild(&PositionInterpolator28);

Transform22.addChild(&Group23);

Group& Group29 =  Group();
Group& Group30 =  Group();
Group30.setDEF(CString("zuklapp-p4"));
TimeSensor& TimeSensor31 =  TimeSensor();
TimeSensor31.setDEF(CString("Time_2"));
TimeSensor31.setCycleInterval(2);
TimeSensor31.setStopTime(1);
Group30.addChild(&TimeSensor31);

Group29.addChild(&Group30);

OrientationInterpolator& OrientationInterpolator32 =  OrientationInterpolator();
OrientationInterpolator32.setDEF(CString("page1RotationInterp_2"));
OrientationInterpolator32.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator32.setKeyValue(new float[]{0.0,0.0,1.0,3.14159,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,0.0}, 12);
Group29.addChild(&OrientationInterpolator32);

PositionInterpolator& PositionInterpolator33 =  PositionInterpolator();
PositionInterpolator33.setDEF(CString("page4TranslationInterp_2"));
PositionInterpolator33.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator33.setKeyValue(new float[]{2.56114e-9,0.00342495,0.0,2.56114e-9,0.00155101,0.0,2.56114e-9,-0.000322939,0.0}, 9);
Group29.addChild(&PositionInterpolator33);

Transform22.addChild(&Group29);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("front_1"));
Transform34.setCenter(new float[]{0.109583,0.00336227,0.0});
TouchSensor& TouchSensor35 =  TouchSensor();
TouchSensor35.setDEF(CString("touchSensorTrigger_1"));
Transform34.addChild(&TouchSensor35);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("f"));
Transform36.setTranslation(new float[]{0.109583,0.00336227,4.15064e-9});
Transform36.setRotation(new float[]{-1.0,-1.45502e-8,-1.67461e-7,1.57079});
Transform36.setScale(new float[]{0.2083,0.313,0.313});
Transform36.setScaleOrientation(new float[]{1.0,-9.19798e-14,-5.94339e-14,4.71239});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
ImageTexture& ImageTexture39 =  ImageTexture();
ImageTexture39.setUrl(new CString[]{CString("nposter5.jpg")}, 1);
Appearance38.addChild(&ImageTexture39);

Shape37.addChild(&Appearance38);

IndexedFaceSet& IndexedFaceSet40 =  IndexedFaceSet();
IndexedFaceSet40.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate41 =  TextureCoordinate();
TextureCoordinate41.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet40.setTexCoord(&TextureCoordinate41);

Coordinate& Coordinate42 =  Coordinate();
Coordinate42.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet40.setCoord(&Coordinate42);

Shape37.setGeometry(&IndexedFaceSet40);

Transform36.addChild(&Shape37);

Transform34.addChild(&Transform36);

Transform22.addChild(&Transform34);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("back_1"));
Transform43.setCenter(new float[]{0.109583,0.000901929,1.49012e-8});
TouchSensor& TouchSensor44 =  TouchSensor();
TouchSensor44.setDEF(CString("touchSensorTrigger_2"));
Transform43.addChild(&TouchSensor44);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{0.109583,0.000901929,1.95053e-8});
Transform45.setRotation(new float[]{-1.0,-1.4552e-8,-1.67464e-7,1.57076});
Transform45.setScale(new float[]{0.2083,0.313,0.313});
Transform45.setScaleOrientation(new float[]{1.0,-1.33242e-12,-3.23498e-13,4.71239});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
ImageTexture& ImageTexture48 =  ImageTexture();
ImageTexture48.setUrl(new CString[]{CString("poster2.jpg")}, 1);
Appearance47.addChild(&ImageTexture48);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet49 =  IndexedFaceSet();
IndexedFaceSet49.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
TextureCoordinate& TextureCoordinate50 =  TextureCoordinate();
TextureCoordinate50.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet49.setTexCoord(&TextureCoordinate50);

Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet49.setCoord(&Coordinate51);

Shape46.setGeometry(&IndexedFaceSet49);

Transform45.addChild(&Shape46);

Transform43.addChild(&Transform45);

Transform22.addChild(&Transform43);

Transform13.addChild(&Transform22);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("page3"));
Transform52.setTranslation(new float[]{2.56114e-9,0.00248178,0.0});
Transform52.setScale(new float[]{1.0,1.0,0.999999});
Transform52.setCenter(new float[]{0.0,0.00213197,0.0});
Group& Group53 =  Group();
Group& Group54 =  Group();
Group54.setDEF(CString("aufklapp-p3"));
TimeSensor& TimeSensor55 =  TimeSensor();
TimeSensor55.setDEF(CString("Time_3"));
TimeSensor55.setCycleInterval(2);
TimeSensor55.setStopTime(1);
Group54.addChild(&TimeSensor55);

Group53.addChild(&Group54);

OrientationInterpolator& OrientationInterpolator56 =  OrientationInterpolator();
OrientationInterpolator56.setDEF(CString("frontRotationInterp_2"));
OrientationInterpolator56.setKey(new float[]{0.0}, 1);
OrientationInterpolator56.setKeyValue(new float[]{0.0,0.0,1.0,0.0}, 4);
Group53.addChild(&OrientationInterpolator56);

OrientationInterpolator& OrientationInterpolator57 =  OrientationInterpolator();
OrientationInterpolator57.setDEF(CString("page1RotationInterp_3"));
OrientationInterpolator57.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator57.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,3.14159}, 12);
Group53.addChild(&OrientationInterpolator57);

PositionInterpolator& PositionInterpolator58 =  PositionInterpolator();
PositionInterpolator58.setDEF(CString("page3TranslationInterp_1"));
PositionInterpolator58.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator58.setKeyValue(new float[]{2.56114e-9,0.00248178,0.0,2.56114e-9,0.00216769,0.0,2.56114e-9,0.00185361,0.0}, 9);
Group53.addChild(&PositionInterpolator58);

Transform52.addChild(&Group53);

Group& Group59 =  Group();
Group& Group60 =  Group();
Group60.setDEF(CString("zuklapp-p3"));
TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(CString("Time_4"));
TimeSensor61.setCycleInterval(2);
TimeSensor61.setStopTime(1);
Group60.addChild(&TimeSensor61);

Group59.addChild(&Group60);

OrientationInterpolator& OrientationInterpolator62 =  OrientationInterpolator();
OrientationInterpolator62.setDEF(CString("page1RotationInterp_4"));
OrientationInterpolator62.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator62.setKeyValue(new float[]{0.0,0.0,1.0,3.14159,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,0.0}, 12);
Group59.addChild(&OrientationInterpolator62);

PositionInterpolator& PositionInterpolator63 =  PositionInterpolator();
PositionInterpolator63.setDEF(CString("page3TranslationInterp_2"));
PositionInterpolator63.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator63.setKeyValue(new float[]{2.56114e-9,0.00185361,0.0,2.56114e-9,0.00216769,0.0,2.56114e-9,0.00248178,0.0}, 9);
Group59.addChild(&PositionInterpolator63);

Transform52.addChild(&Group59);

Transform& Transform64 =  Transform();
Transform64.setDEF(CString("front_2"));
Transform64.setCenter(new float[]{0.109583,0.00336227,0.0});
TouchSensor& TouchSensor65 =  TouchSensor();
TouchSensor65.setDEF(CString("touchSensorTrigger_3"));
Transform64.addChild(&TouchSensor65);

Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{0.109583,0.00336227,4.15064e-9});
Transform66.setRotation(new float[]{-1.0,-1.45502e-8,-1.67461e-7,1.57079});
Transform66.setScale(new float[]{0.2083,0.313,0.313});
Transform66.setScaleOrientation(new float[]{1.0,-9.19798e-14,-5.94339e-14,4.71239});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
ImageTexture& ImageTexture69 =  ImageTexture();
ImageTexture69.setUrl(new CString[]{CString("nposter7.jpg")}, 1);
Appearance68.addChild(&ImageTexture69);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet70 =  IndexedFaceSet();
IndexedFaceSet70.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate71 =  TextureCoordinate();
TextureCoordinate71.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet70.setTexCoord(&TextureCoordinate71);

Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet70.setCoord(&Coordinate72);

Shape67.setGeometry(&IndexedFaceSet70);

Transform66.addChild(&Shape67);

Transform64.addChild(&Transform66);

Transform52.addChild(&Transform64);

Transform& Transform73 =  Transform();
Transform73.setDEF(CString("back_2"));
TouchSensor& TouchSensor74 =  TouchSensor();
TouchSensor74.setDEF(CString("touchSensorTrigger_4"));
Transform73.addChild(&TouchSensor74);

Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{0.109583,0.000901929,1.95053e-8});
Transform75.setRotation(new float[]{-1.0,-1.455e-8,-1.67461e-7,1.57079});
Transform75.setScale(new float[]{0.2083,0.313,0.313});
Transform75.setScaleOrientation(new float[]{1.0,-1.79204e-13,6.48902e-14,4.71239});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
ImageTexture& ImageTexture78 =  ImageTexture();
ImageTexture78.setUSE(CString("_1"));
Appearance77.addChild(&ImageTexture78);

Shape76.addChild(&Appearance77);

IndexedFaceSet& IndexedFaceSet79 =  IndexedFaceSet();
IndexedFaceSet79.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
TextureCoordinate& TextureCoordinate80 =  TextureCoordinate();
TextureCoordinate80.setPoint(new float[]{0.0686541,0.0246341,0.16719,0.0246341,0.225948,0.290612,0.127412,0.290612}, 8);
IndexedFaceSet79.setTexCoord(&TextureCoordinate80);

Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet79.setCoord(&Coordinate81);

Shape76.setGeometry(&IndexedFaceSet79);

Transform75.addChild(&Shape76);

Transform73.addChild(&Transform75);

Transform52.addChild(&Transform73);

Transform13.addChild(&Transform52);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("page2"));
Transform82.setTranslation(new float[]{2.56114e-9,0.00455024,0.0});
Transform82.setScale(new float[]{1.0,1.0,0.999999});
Transform82.setCenter(new float[]{0.0,0.00213197,0.0});
Group& Group83 =  Group();
Group& Group84 =  Group();
Group84.setDEF(CString("aufklapp-p2"));
TimeSensor& TimeSensor85 =  TimeSensor();
TimeSensor85.setDEF(CString("Time_5"));
TimeSensor85.setCycleInterval(2);
TimeSensor85.setStopTime(1);
Group84.addChild(&TimeSensor85);

Group83.addChild(&Group84);

OrientationInterpolator& OrientationInterpolator86 =  OrientationInterpolator();
OrientationInterpolator86.setDEF(CString("frontRotationInterp_3"));
OrientationInterpolator86.setKey(new float[]{0.0}, 1);
OrientationInterpolator86.setKeyValue(new float[]{0.0,0.0,1.0,0.0}, 4);
Group83.addChild(&OrientationInterpolator86);

OrientationInterpolator& OrientationInterpolator87 =  OrientationInterpolator();
OrientationInterpolator87.setDEF(CString("page1RotationInterp_5"));
OrientationInterpolator87.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator87.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,3.14159}, 12);
Group83.addChild(&OrientationInterpolator87);

PositionInterpolator& PositionInterpolator88 =  PositionInterpolator();
PositionInterpolator88.setDEF(CString("page2TranslationInterp_1"));
PositionInterpolator88.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator88.setKeyValue(new float[]{2.56114e-9,0.00455024,0.0,2.56113e-9,0.00265246,0.0,2.56113e-9,0.00075468,0.0}, 9);
Group83.addChild(&PositionInterpolator88);

Transform82.addChild(&Group83);

Group& Group89 =  Group();
Group& Group90 =  Group();
Group90.setDEF(CString("zuklapp-p2"));
TimeSensor& TimeSensor91 =  TimeSensor();
TimeSensor91.setDEF(CString("Time_6"));
TimeSensor91.setCycleInterval(2);
TimeSensor91.setStopTime(1);
Group90.addChild(&TimeSensor91);

Group89.addChild(&Group90);

OrientationInterpolator& OrientationInterpolator92 =  OrientationInterpolator();
OrientationInterpolator92.setDEF(CString("page1RotationInterp_6"));
OrientationInterpolator92.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator92.setKeyValue(new float[]{0.0,0.0,1.0,3.14159,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,0.0}, 12);
Group89.addChild(&OrientationInterpolator92);

PositionInterpolator& PositionInterpolator93 =  PositionInterpolator();
PositionInterpolator93.setDEF(CString("page2TranslationInterp_2"));
PositionInterpolator93.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator93.setKeyValue(new float[]{2.56113e-9,0.00075468,0.0,2.56113e-9,0.00265246,0.0,2.56114e-9,0.00455024,0.0}, 9);
Group89.addChild(&PositionInterpolator93);

Transform82.addChild(&Group89);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("front_3"));
Transform94.setCenter(new float[]{0.109583,0.00336227,0.0});
TouchSensor& TouchSensor95 =  TouchSensor();
TouchSensor95.setDEF(CString("touchSensorTrigger_5"));
Transform94.addChild(&TouchSensor95);

Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[]{0.109583,0.00336227,4.15064e-9});
Transform96.setRotation(new float[]{-1.0,-1.45502e-8,-1.67461e-7,1.57079});
Transform96.setScale(new float[]{0.2083,0.313,0.313});
Transform96.setScaleOrientation(new float[]{1.0,-8.7009e-14,-3.81901e-14,4.71239});
Shape& Shape97 =  Shape();
Appearance& Appearance98 =  Appearance();
ImageTexture& ImageTexture99 =  ImageTexture();
ImageTexture99.setDEF(CString("_2"));
ImageTexture99.setUrl(new CString[]{CString("nposter2.jpg")}, 1);
Appearance98.addChild(&ImageTexture99);

Shape97.addChild(&Appearance98);

IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate101 =  TextureCoordinate();
TextureCoordinate101.setPoint(new float[]{0.478181,0.00252134,0.997479,0.00252134,0.997479,0.998515,0.478181,0.998515}, 8);
IndexedFaceSet100.setTexCoord(&TextureCoordinate101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet100.setCoord(&Coordinate102);

Shape97.setGeometry(&IndexedFaceSet100);

Transform96.addChild(&Shape97);

Transform94.addChild(&Transform96);

Transform82.addChild(&Transform94);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("back_3"));
Transform103.setCenter(new float[]{0.109583,0.000901929,1.49012e-8});
TouchSensor& TouchSensor104 =  TouchSensor();
TouchSensor104.setDEF(CString("touchSensorTrigger_6"));
Transform103.addChild(&TouchSensor104);

Transform& Transform105 =  Transform();
Transform105.setTranslation(new float[]{0.109583,0.000901929,1.95053e-8});
Transform105.setRotation(new float[]{-1.0,-1.45527e-8,-1.67465e-7,1.57074});
Transform105.setScale(new float[]{0.2083,0.313,0.313});
Transform105.setScaleOrientation(new float[]{1.0,-1.54436e-12,-2.75076e-13,4.71239});
Shape& Shape106 =  Shape();
Appearance& Appearance107 =  Appearance();
ImageTexture& ImageTexture108 =  ImageTexture();
ImageTexture108.setUSE(CString("_1"));
Appearance107.addChild(&ImageTexture108);

Shape106.addChild(&Appearance107);

IndexedFaceSet& IndexedFaceSet109 =  IndexedFaceSet();
IndexedFaceSet109.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
TextureCoordinate& TextureCoordinate110 =  TextureCoordinate();
TextureCoordinate110.setPoint(new float[]{0.0787102,0.208577,0.177246,0.208577,0.236004,0.474555,0.137468,0.474555}, 8);
IndexedFaceSet109.setTexCoord(&TextureCoordinate110);

Coordinate& Coordinate111 =  Coordinate();
Coordinate111.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet109.setCoord(&Coordinate111);

Shape106.setGeometry(&IndexedFaceSet109);

Transform105.addChild(&Shape106);

Transform103.addChild(&Transform105);

Transform82.addChild(&Transform103);

Transform13.addChild(&Transform82);

Transform& Transform112 =  Transform();
Transform112.setDEF(CString("page1"));
Transform112.setTranslation(new float[]{2.56114e-9,0.00645655,0.0});
Transform112.setScale(new float[]{1.0,1.0,0.999999});
Transform112.setCenter(new float[]{0.0,0.00213197,0.0});
Group& Group113 =  Group();
Group& Group114 =  Group();
Group114.setDEF(CString("aufklapp-p1"));
TimeSensor& TimeSensor115 =  TimeSensor();
TimeSensor115.setDEF(CString("Time_7"));
TimeSensor115.setCycleInterval(2);
TimeSensor115.setStopTime(1);
Group114.addChild(&TimeSensor115);

Group113.addChild(&Group114);

OrientationInterpolator& OrientationInterpolator116 =  OrientationInterpolator();
OrientationInterpolator116.setDEF(CString("frontRotationInterp_4"));
OrientationInterpolator116.setKey(new float[]{0.0}, 1);
OrientationInterpolator116.setKeyValue(new float[]{0.0,0.0,1.0,0.0}, 4);
Group113.addChild(&OrientationInterpolator116);

OrientationInterpolator& OrientationInterpolator117 =  OrientationInterpolator();
OrientationInterpolator117.setDEF(CString("page1RotationInterp_7"));
OrientationInterpolator117.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator117.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,3.14159}, 12);
Group113.addChild(&OrientationInterpolator117);

PositionInterpolator& PositionInterpolator118 =  PositionInterpolator();
PositionInterpolator118.setDEF(CString("page1TranslationInterp_1"));
PositionInterpolator118.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator118.setKeyValue(new float[]{2.56114e-9,0.00645655,0.0,-1.22092e-9,0.00277808,0.0,-5.00297e-9,-0.00090039,0.0}, 9);
Group113.addChild(&PositionInterpolator118);

Transform112.addChild(&Group113);

Group& Group119 =  Group();
Group& Group120 =  Group();
Group120.setDEF(CString("zuklapp-p1"));
TimeSensor& TimeSensor121 =  TimeSensor();
TimeSensor121.setDEF(CString("Time_8"));
TimeSensor121.setCycleInterval(2);
TimeSensor121.setStopTime(1);
Group120.addChild(&TimeSensor121);

Group119.addChild(&Group120);

OrientationInterpolator& OrientationInterpolator122 =  OrientationInterpolator();
OrientationInterpolator122.setDEF(CString("page1RotationInterp_8"));
OrientationInterpolator122.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator122.setKeyValue(new float[]{0.0,0.0,1.0,3.14159,0.0,0.0,1.0,1.5708,0.0,0.0,1.0,0.0}, 12);
Group119.addChild(&OrientationInterpolator122);

PositionInterpolator& PositionInterpolator123 =  PositionInterpolator();
PositionInterpolator123.setDEF(CString("page1TranslationInterp_2"));
PositionInterpolator123.setKey(new float[]{0.0,0.5,1.0}, 3);
PositionInterpolator123.setKeyValue(new float[]{-5.00297e-9,-0.00090039,0.0,-1.22092e-9,0.00277808,0.0,2.56114e-9,0.00645655,0.0}, 9);
Group119.addChild(&PositionInterpolator123);

Transform112.addChild(&Group119);

Transform& Transform124 =  Transform();
Transform124.setDEF(CString("front_4"));
Transform124.setCenter(new float[]{0.109583,0.00336227,0.0});
TouchSensor& TouchSensor125 =  TouchSensor();
TouchSensor125.setDEF(CString("touchSensorTrigger_7"));
Transform124.addChild(&TouchSensor125);

Transform& Transform126 =  Transform();
Transform126.setTranslation(new float[]{0.109583,0.00336227,4.15064e-9});
Transform126.setRotation(new float[]{-1.0,-1.45502e-8,-1.67461e-7,1.57079});
Transform126.setScale(new float[]{0.2083,0.313,0.313});
Transform126.setScaleOrientation(new float[]{1.0,-9.19798e-14,-5.94339e-14,4.71239});
Shape& Shape127 =  Shape();
Appearance& Appearance128 =  Appearance();
ImageTexture& ImageTexture129 =  ImageTexture();
ImageTexture129.setUrl(new CString[]{CString("poster1.jpg")}, 1);
Appearance128.addChild(&ImageTexture129);

Shape127.addChild(&Appearance128);

IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate131 =  TextureCoordinate();
TextureCoordinate131.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet130.setTexCoord(&TextureCoordinate131);

Coordinate& Coordinate132 =  Coordinate();
Coordinate132.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet130.setCoord(&Coordinate132);

Shape127.setGeometry(&IndexedFaceSet130);

Transform126.addChild(&Shape127);

Transform124.addChild(&Transform126);

Transform112.addChild(&Transform124);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("back"));
TouchSensor& TouchSensor134 =  TouchSensor();
TouchSensor134.setDEF(CString("touchSensorTrigger_8"));
Transform133.addChild(&TouchSensor134);

Transform& Transform135 =  Transform();
Transform135.setTranslation(new float[]{0.109583,0.000901929,1.95053e-8});
Transform135.setRotation(new float[]{-1.0,-1.45501e-8,-1.67461e-7,1.57079});
Transform135.setScale(new float[]{0.2083,0.313,0.313});
Transform135.setScaleOrientation(new float[]{1.0,-2.06631e-13,8.62823e-14,4.71239});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
ImageTexture& ImageTexture138 =  ImageTexture();
ImageTexture138.setUSE(CString("_2"));
Appearance137.addChild(&ImageTexture138);

Shape136.addChild(&Appearance137);

IndexedFaceSet& IndexedFaceSet139 =  IndexedFaceSet();
IndexedFaceSet139.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
TextureCoordinate& TextureCoordinate140 =  TextureCoordinate();
TextureCoordinate140.setPoint(new float[]{0.482545,0.00252134,0.000339419,0.00101823,0.00252134,0.993794,0.480363,0.988751}, 8);
IndexedFaceSet139.setTexCoord(&TextureCoordinate140);

Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet139.setCoord(&Coordinate141);

Shape136.setGeometry(&IndexedFaceSet139);

Transform135.addChild(&Shape136);

Transform133.addChild(&Transform135);

Transform112.addChild(&Transform133);

Transform13.addChild(&Transform112);

Transform& Transform142 =  Transform();
Transform142.setDEF(CString("Not_1"));
Transform142.setTranslation(new float[]{0.0,1.0,0.0});
ProtoInstance& ProtoInstance143 =  ProtoInstance();
ProtoInstance143.setName(CString("Not"));
ProtoInstance143.setDEF(CString("_3"));
Transform142.addChild(&ProtoInstance143);

Transform13.addChild(&Transform142);

Transform& Transform144 =  Transform();
Transform144.setDEF(CString("Not"));
Transform144.setTranslation(new float[]{0.0,1.0,0.0});
ProtoInstance& ProtoInstance145 =  ProtoInstance();
ProtoInstance145.setName(CString("Not"));
ProtoInstance145.setDEF(CString("_4"));
Transform144.addChild(&ProtoInstance145);

Transform13.addChild(&Transform144);

Scene7.addChild(&Transform13);

Transform& Transform146 =  Transform();
Transform146.setDEF(CString("backpage"));
Transform146.setTranslation(new float[]{0.109583,-0.0000548903,-1.68163e-8});
Transform146.setRotation(new float[]{-1.0,-1.45521e-8,-1.67464e-7,1.57076});
Transform146.setScale(new float[]{0.2083,0.313,0.313});
Transform146.setScaleOrientation(new float[]{1.0,-1.415e-12,-3.57256e-13,4.71239});
Shape& Shape147 =  Shape();
Appearance& Appearance148 =  Appearance();
ImageTexture& ImageTexture149 =  ImageTexture();
ImageTexture149.setUrl(new CString[]{CString("reflect2.png")}, 1);
Appearance148.addChild(&ImageTexture149);

Shape147.addChild(&Appearance148);

IndexedFaceSet& IndexedFaceSet150 =  IndexedFaceSet();
IndexedFaceSet150.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate151 =  TextureCoordinate();
TextureCoordinate151.setPoint(new float[]{0.198755,4.28397,0.322734,4.28318,0.475755,13.5529,0.336888,13.7365}, 8);
IndexedFaceSet150.setTexCoord(&TextureCoordinate151);

Coordinate& Coordinate152 =  Coordinate();
Coordinate152.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet150.setCoord(&Coordinate152);

Shape147.setGeometry(&IndexedFaceSet150);

Transform146.addChild(&Shape147);

Scene7.addChild(&Transform146);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromNode(CString("touchSensorTrigger_1"));
ROUTE153.setFromField(CString("touchTime"));
ROUTE153.setToNode(CString("Time_1"));
ROUTE153.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromNode(CString("Time_1"));
ROUTE154.setFromField(CString("fraction_changed"));
ROUTE154.setToNode(CString("frontRotationInterp_1"));
ROUTE154.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromNode(CString("Time_1"));
ROUTE155.setFromField(CString("fraction_changed"));
ROUTE155.setToNode(CString("page1RotationInterp_1"));
ROUTE155.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE155);

ROUTE& ROUTE156 =  ROUTE();
ROUTE156.setFromNode(CString("Time_1"));
ROUTE156.setFromField(CString("fraction_changed"));
ROUTE156.setToNode(CString("page4TranslationInterp_1"));
ROUTE156.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE156);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromNode(CString("touchSensorTrigger_2"));
ROUTE157.setFromField(CString("touchTime"));
ROUTE157.setToNode(CString("Time_2"));
ROUTE157.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE157);

ROUTE& ROUTE158 =  ROUTE();
ROUTE158.setFromNode(CString("Time_2"));
ROUTE158.setFromField(CString("fraction_changed"));
ROUTE158.setToNode(CString("page1RotationInterp_2"));
ROUTE158.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE158);

ROUTE& ROUTE159 =  ROUTE();
ROUTE159.setFromNode(CString("Time_2"));
ROUTE159.setFromField(CString("fraction_changed"));
ROUTE159.setToNode(CString("page4TranslationInterp_2"));
ROUTE159.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE159);

ROUTE& ROUTE160 =  ROUTE();
ROUTE160.setFromNode(CString("_4"));
ROUTE160.setFromField(CString("value_changed"));
ROUTE160.setToNode(CString("touchSensorTrigger_1"));
ROUTE160.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE160);

ROUTE& ROUTE161 =  ROUTE();
ROUTE161.setFromNode(CString("frontRotationInterp_1"));
ROUTE161.setFromField(CString("value_changed"));
ROUTE161.setToNode(CString("front_1"));
ROUTE161.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE161);

ROUTE& ROUTE162 =  ROUTE();
ROUTE162.setFromNode(CString("_3"));
ROUTE162.setFromField(CString("value_changed"));
ROUTE162.setToNode(CString("touchSensorTrigger_2"));
ROUTE162.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE162);

ROUTE& ROUTE163 =  ROUTE();
ROUTE163.setFromNode(CString("page4TranslationInterp_1"));
ROUTE163.setFromField(CString("value_changed"));
ROUTE163.setToNode(CString("page4"));
ROUTE163.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE163);

ROUTE& ROUTE164 =  ROUTE();
ROUTE164.setFromNode(CString("page4TranslationInterp_2"));
ROUTE164.setFromField(CString("value_changed"));
ROUTE164.setToNode(CString("page4"));
ROUTE164.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE164);

ROUTE& ROUTE165 =  ROUTE();
ROUTE165.setFromNode(CString("page1RotationInterp_1"));
ROUTE165.setFromField(CString("value_changed"));
ROUTE165.setToNode(CString("page4"));
ROUTE165.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE165);

ROUTE& ROUTE166 =  ROUTE();
ROUTE166.setFromNode(CString("page1RotationInterp_2"));
ROUTE166.setFromField(CString("value_changed"));
ROUTE166.setToNode(CString("page4"));
ROUTE166.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE166);

ROUTE& ROUTE167 =  ROUTE();
ROUTE167.setFromNode(CString("touchSensorTrigger_3"));
ROUTE167.setFromField(CString("touchTime"));
ROUTE167.setToNode(CString("Time_3"));
ROUTE167.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE167);

ROUTE& ROUTE168 =  ROUTE();
ROUTE168.setFromNode(CString("Time_3"));
ROUTE168.setFromField(CString("fraction_changed"));
ROUTE168.setToNode(CString("frontRotationInterp_2"));
ROUTE168.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE168);

ROUTE& ROUTE169 =  ROUTE();
ROUTE169.setFromNode(CString("Time_3"));
ROUTE169.setFromField(CString("fraction_changed"));
ROUTE169.setToNode(CString("page1RotationInterp_3"));
ROUTE169.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE169);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromNode(CString("Time_3"));
ROUTE170.setFromField(CString("fraction_changed"));
ROUTE170.setToNode(CString("page3TranslationInterp_1"));
ROUTE170.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromNode(CString("touchSensorTrigger_4"));
ROUTE171.setFromField(CString("touchTime"));
ROUTE171.setToNode(CString("Time_4"));
ROUTE171.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE171);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromNode(CString("Time_4"));
ROUTE172.setFromField(CString("fraction_changed"));
ROUTE172.setToNode(CString("page1RotationInterp_4"));
ROUTE172.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE172);

ROUTE& ROUTE173 =  ROUTE();
ROUTE173.setFromNode(CString("Time_4"));
ROUTE173.setFromField(CString("fraction_changed"));
ROUTE173.setToNode(CString("page3TranslationInterp_2"));
ROUTE173.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE173);

ROUTE& ROUTE174 =  ROUTE();
ROUTE174.setFromNode(CString("_4"));
ROUTE174.setFromField(CString("value_changed"));
ROUTE174.setToNode(CString("touchSensorTrigger_3"));
ROUTE174.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE174);

ROUTE& ROUTE175 =  ROUTE();
ROUTE175.setFromNode(CString("frontRotationInterp_2"));
ROUTE175.setFromField(CString("value_changed"));
ROUTE175.setToNode(CString("front_2"));
ROUTE175.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE175);

ROUTE& ROUTE176 =  ROUTE();
ROUTE176.setFromNode(CString("_3"));
ROUTE176.setFromField(CString("value_changed"));
ROUTE176.setToNode(CString("touchSensorTrigger_4"));
ROUTE176.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE176);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("page3TranslationInterp_1"));
ROUTE177.setFromField(CString("value_changed"));
ROUTE177.setToNode(CString("page3"));
ROUTE177.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("page3TranslationInterp_2"));
ROUTE178.setFromField(CString("value_changed"));
ROUTE178.setToNode(CString("page3"));
ROUTE178.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("page1RotationInterp_3"));
ROUTE179.setFromField(CString("value_changed"));
ROUTE179.setToNode(CString("page3"));
ROUTE179.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("page1RotationInterp_4"));
ROUTE180.setFromField(CString("value_changed"));
ROUTE180.setToNode(CString("page3"));
ROUTE180.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE180);

ROUTE& ROUTE181 =  ROUTE();
ROUTE181.setFromNode(CString("touchSensorTrigger_5"));
ROUTE181.setFromField(CString("touchTime"));
ROUTE181.setToNode(CString("Time_5"));
ROUTE181.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE181);

ROUTE& ROUTE182 =  ROUTE();
ROUTE182.setFromNode(CString("Time_5"));
ROUTE182.setFromField(CString("fraction_changed"));
ROUTE182.setToNode(CString("frontRotationInterp_3"));
ROUTE182.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE182);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("Time_5"));
ROUTE183.setFromField(CString("fraction_changed"));
ROUTE183.setToNode(CString("page1RotationInterp_5"));
ROUTE183.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("Time_5"));
ROUTE184.setFromField(CString("fraction_changed"));
ROUTE184.setToNode(CString("page2TranslationInterp_1"));
ROUTE184.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("touchSensorTrigger_6"));
ROUTE185.setFromField(CString("touchTime"));
ROUTE185.setToNode(CString("Time_6"));
ROUTE185.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("Time_6"));
ROUTE186.setFromField(CString("fraction_changed"));
ROUTE186.setToNode(CString("page1RotationInterp_6"));
ROUTE186.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("Time_6"));
ROUTE187.setFromField(CString("fraction_changed"));
ROUTE187.setToNode(CString("page2TranslationInterp_2"));
ROUTE187.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("_4"));
ROUTE188.setFromField(CString("value_changed"));
ROUTE188.setToNode(CString("touchSensorTrigger_5"));
ROUTE188.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("frontRotationInterp_3"));
ROUTE189.setFromField(CString("value_changed"));
ROUTE189.setToNode(CString("front_3"));
ROUTE189.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_3"));
ROUTE190.setFromField(CString("value_changed"));
ROUTE190.setToNode(CString("touchSensorTrigger_6"));
ROUTE190.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("page2TranslationInterp_1"));
ROUTE191.setFromField(CString("value_changed"));
ROUTE191.setToNode(CString("page2"));
ROUTE191.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("page2TranslationInterp_2"));
ROUTE192.setFromField(CString("value_changed"));
ROUTE192.setToNode(CString("page2"));
ROUTE192.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("page1RotationInterp_5"));
ROUTE193.setFromField(CString("value_changed"));
ROUTE193.setToNode(CString("page2"));
ROUTE193.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("page1RotationInterp_6"));
ROUTE194.setFromField(CString("value_changed"));
ROUTE194.setToNode(CString("page2"));
ROUTE194.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("touchSensorTrigger_7"));
ROUTE195.setFromField(CString("touchTime"));
ROUTE195.setToNode(CString("Time_7"));
ROUTE195.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("Time_7"));
ROUTE196.setFromField(CString("fraction_changed"));
ROUTE196.setToNode(CString("frontRotationInterp_4"));
ROUTE196.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("Time_7"));
ROUTE197.setFromField(CString("fraction_changed"));
ROUTE197.setToNode(CString("page1RotationInterp_7"));
ROUTE197.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("Time_7"));
ROUTE198.setFromField(CString("fraction_changed"));
ROUTE198.setToNode(CString("page1TranslationInterp_1"));
ROUTE198.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("touchSensorTrigger_8"));
ROUTE199.setFromField(CString("touchTime"));
ROUTE199.setToNode(CString("Time_8"));
ROUTE199.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE199);

ROUTE& ROUTE200 =  ROUTE();
ROUTE200.setFromNode(CString("Time_8"));
ROUTE200.setFromField(CString("fraction_changed"));
ROUTE200.setToNode(CString("page1RotationInterp_8"));
ROUTE200.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE200);

ROUTE& ROUTE201 =  ROUTE();
ROUTE201.setFromNode(CString("Time_8"));
ROUTE201.setFromField(CString("fraction_changed"));
ROUTE201.setToNode(CString("page1TranslationInterp_2"));
ROUTE201.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE201);

ROUTE& ROUTE202 =  ROUTE();
ROUTE202.setFromNode(CString("_4"));
ROUTE202.setFromField(CString("value_changed"));
ROUTE202.setToNode(CString("touchSensorTrigger_7"));
ROUTE202.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE202);

ROUTE& ROUTE203 =  ROUTE();
ROUTE203.setFromNode(CString("frontRotationInterp_4"));
ROUTE203.setFromField(CString("value_changed"));
ROUTE203.setToNode(CString("front_4"));
ROUTE203.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE203);

ROUTE& ROUTE204 =  ROUTE();
ROUTE204.setFromNode(CString("_3"));
ROUTE204.setFromField(CString("value_changed"));
ROUTE204.setToNode(CString("touchSensorTrigger_8"));
ROUTE204.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE204);

ROUTE& ROUTE205 =  ROUTE();
ROUTE205.setFromNode(CString("page1TranslationInterp_1"));
ROUTE205.setFromField(CString("value_changed"));
ROUTE205.setToNode(CString("page1"));
ROUTE205.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE205);

ROUTE& ROUTE206 =  ROUTE();
ROUTE206.setFromNode(CString("page1TranslationInterp_2"));
ROUTE206.setFromField(CString("value_changed"));
ROUTE206.setToNode(CString("page1"));
ROUTE206.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE206);

ROUTE& ROUTE207 =  ROUTE();
ROUTE207.setFromNode(CString("page1RotationInterp_7"));
ROUTE207.setFromField(CString("value_changed"));
ROUTE207.setToNode(CString("page1"));
ROUTE207.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE207);

ROUTE& ROUTE208 =  ROUTE();
ROUTE208.setFromNode(CString("page1RotationInterp_8"));
ROUTE208.setFromField(CString("value_changed"));
ROUTE208.setToNode(CString("page1"));
ROUTE208.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE208);

ROUTE& ROUTE209 =  ROUTE();
ROUTE209.setFromNode(CString("Time_1"));
ROUTE209.setFromField(CString("isActive"));
ROUTE209.setToNode(CString("_3"));
ROUTE209.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE209);

ROUTE& ROUTE210 =  ROUTE();
ROUTE210.setFromNode(CString("Time_7"));
ROUTE210.setFromField(CString("isActive"));
ROUTE210.setToNode(CString("_3"));
ROUTE210.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE210);

ROUTE& ROUTE211 =  ROUTE();
ROUTE211.setFromNode(CString("Time_5"));
ROUTE211.setFromField(CString("isActive"));
ROUTE211.setToNode(CString("_3"));
ROUTE211.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE211);

ROUTE& ROUTE212 =  ROUTE();
ROUTE212.setFromNode(CString("Time_3"));
ROUTE212.setFromField(CString("isActive"));
ROUTE212.setToNode(CString("_3"));
ROUTE212.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE212);

ROUTE& ROUTE213 =  ROUTE();
ROUTE213.setFromNode(CString("Time_2"));
ROUTE213.setFromField(CString("isActive"));
ROUTE213.setToNode(CString("_4"));
ROUTE213.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE213);

ROUTE& ROUTE214 =  ROUTE();
ROUTE214.setFromNode(CString("Time_4"));
ROUTE214.setFromField(CString("isActive"));
ROUTE214.setToNode(CString("_4"));
ROUTE214.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE214);

ROUTE& ROUTE215 =  ROUTE();
ROUTE215.setFromNode(CString("Time_6"));
ROUTE215.setFromField(CString("isActive"));
ROUTE215.setToNode(CString("_4"));
ROUTE215.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE215);

ROUTE& ROUTE216 =  ROUTE();
ROUTE216.setFromNode(CString("Time_8"));
ROUTE216.setFromField(CString("isActive"));
ROUTE216.setToNode(CString("_4"));
ROUTE216.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE216);

X3D0.setScene(&Scene7);

//}
