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
meta3.setContent(CString("Sat, 11 Apr 2015 10:43:36 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.7, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sun, 12 Apr 2015 13:26:21 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Arcadia"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("CONTROL"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("control"));
Transform11.setTranslation(new float[]{0,10,0});
TimeSensor& TimeSensor12 =  TimeSensor();
TimeSensor12.setDEF(CString("enterWorldTimeSensor"));
TimeSensor12.setEnabled(False);
TimeSensor12.setLoop(True);
TimeSensor12.setStartTime(1);
Transform11.addChild(&TimeSensor12);

Script& Script13 =  Script();
Script13.setDEF(CString("enterWorldScript"));
field& field14 =  field();
field14.setName(CString("startTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
Script13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("firstTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFBool"));
Script13.addChild(&field15);

field& field16 =  field();
field16.setName(CString("triggerIn"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFTime"));
Script13.addChild(&field16);


Script13.setSourceCode(CString("vrmlscript:function triggerIn(value, time) {")+
_T("         // fire off a single round                                     ")+
_T("         startTime = value;                                             ")+
_T("         firstTime = FALSE;                                             ")+
_T("       }"));
Transform11.addChild(&Script13);

Script& Script17 =  Script();
Script17.setDEF(CString("_countScript"));
field& field18 =  field();
field18.setName(CString("counterDisplay"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("MFString"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("bonus_Signal"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("alert_Signal"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFTime"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("key_Signal"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFTime"));
Script17.addChild(&field21);

field& field22 =  field();
field22.setName(CString("bonus_Blue"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("SFTime"));
Script17.addChild(&field22);

field& field23 =  field();
field23.setName(CString("bonus_Red"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFTime"));
Script17.addChild(&field23);

field& field24 =  field();
field24.setName(CString("alert"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script17.addChild(&field24);

field& field25 =  field();
field25.setName(CString("bonus_Gold"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFTime"));
Script17.addChild(&field25);

field& field26 =  field();
field26.setName(CString("key_Found"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFTime"));
Script17.addChild(&field26);

field& field27 =  field();
field27.setName(CString("resetCount"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
Script17.addChild(&field27);

field& field28 =  field();
field28.setName(CString("count"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFInt32"));
Script17.addChild(&field28);


Script17.setSourceCode(CString("vrmlscript:")+
_T("function bonus_Blue(value, time)")+
_T("{")+
_T(" count += 50;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T(" bonus_Signal = time;")+
_T("}")+
_T("function bonus_Red(value, time)")+
_T("{")+
_T(" count += 100;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T(" bonus_Signal = time;")+
_T("}")+
_T("function bonus_Gold(value, time)")+
_T("{")+
_T(" count += 150;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T(" bonus_Signal = time;")+
_T("}")+
_T("function key_Found(value, time)")+
_T("{")+
_T(" count += 200;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T(" key_Signal = time;")+
_T("}")+
_T("function alert(value, time)")+
_T("{")+
_T(" count -= 75;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T(" alert_Signal = time;")+
_T("}")+
_T("function resetCount(value, time)")+
_T("{")+
_T(" count = 0;")+
_T(" s = new String(count);")+
_T(" counterDisplay = new MFString(s);")+
_T("}"));
Transform11.addChild(&Script17);

Transform10.addChild(&Transform11);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("CAM"));
NavigationInfo& NavigationInfo30 =  NavigationInfo();
NavigationInfo30.setDEF(CString("_exa"));
NavigationInfo30.setType(new CString[]{CString(", "), CString("ANYEXAMINE")}, 2);
NavigationInfo30.setVisibilityLimit(450);
Transform29.addChild(&NavigationInfo30);

Script& Script31 =  Script();
Script31.setDEF(CString("_cam_draggerScript"));
field& field32 =  field();
field32.setName(CString("cameraOUT"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFVec3f"));
Script31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("translation_animIN"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFVec3f"));
Script31.addChild(&field33);

field& field34 =  field();
field34.setName(CString("translation_dragIN"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFVec3f"));
Script31.addChild(&field34);


Script31.setSourceCode(CString("vrmlscript:")+
_T("function translation_animIN(value, time)")+
_T("{")+
_T("	cameraOUT[2] = value[2];")+
_T("}")+
_T("function translation_dragIN(value, time)")+
_T("{")+
_T("	cameraOUT[0]= (value[0]*250)*-1;")+
_T("	cameraOUT[1]= (value[1]*100)*-1;")+
_T("}"));
Transform29.addChild(&Script31);

Fog& Fog35 =  Fog();
Fog35.setDEF(CString("fog"));
Fog35.setFogType(CString("EXPONENTIAL"));
Fog35.setColor(new float[]{0.4,0.67,1});
Fog35.setVisibilityRange(450);
Transform29.addChild(&Fog35);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("bg_1"));
Transform36.setTranslation(new float[]{67.3837,80.0708,-1804.69});
Background& Background37 =  Background();
Background37.setDEF(CString("bg"));
Background37.setSkyColor(new float[]{0.4,0.67,1}, 3);
Transform36.addChild(&Background37);

Transform29.addChild(&Transform36);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("alert_CAM"));
Transform38.setScale(new float[]{0.999997,0.999995,0.999997});
Transform38.setScaleOrientation(new float[]{-0.0528969,0.995349,-0.0805071,1.57283});
Transform38.setCenter(new float[]{-0.0604775,2.32735,5.73882});
Group& Group39 =  Group();
Group& Group40 =  Group();
Group40.setDEF(CString("alertCam_animn"));
TimeSensor& TimeSensor41 =  TimeSensor();
TimeSensor41.setDEF(CString("Time_1"));
TimeSensor41.setCycleInterval(0.9);
TimeSensor41.setStopTime(1);
Group40.addChild(&TimeSensor41);

Group39.addChild(&Group40);

PositionInterpolator& PositionInterpolator42 =  PositionInterpolator();
PositionInterpolator42.setDEF(CString("alert_CAMTranslationInterp"));
PositionInterpolator42.setKey(new float[]{0,0.111111,0.222222,0.444444,0.555555,0.666667,0.833333,1}, 8);
PositionInterpolator42.setKeyValue(new float[]{0,0,0,0,-5,5,3,4,0,3,-5,-4,2.025,-1.875,-2.2,1,2,0,0.4,1.625,0.3,0,0,0}, 24);
Group39.addChild(&PositionInterpolator42);

OrientationInterpolator& OrientationInterpolator43 =  OrientationInterpolator();
OrientationInterpolator43.setDEF(CString("alert_CAMRotationInterp"));
OrientationInterpolator43.setKey(new float[]{0,0.111111,0.222222,0.444444,0.555555,0.666667,0.833333,1}, 8);
OrientationInterpolator43.setKeyValue(new float[]{0,0,1,0,1,-1.95683e-8,-1.05825e-7,0.234195,0.164957,0.986249,0.0101427,0.124521,0.833378,-0.551948,0.0288801,0.174679,0.792612,-0.609122,0.0271273,0.101658,0,0,1,0,-0.833378,0.551948,-0.0288801,0.0436686,0,0,1,0}, 32);
Group39.addChild(&OrientationInterpolator43);

Transform38.addChild(&Group39);

Transform& Transform44 =  Transform();
Transform44.setDEF(CString("camera"));
Transform& Transform45 =  Transform();
Group& Group46 =  Group();
Group& Group47 =  Group();
Group47.setDEF(CString("flyCam_anim"));
TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("Time_2"));
TimeSensor48.setCycleInterval(80);
TimeSensor48.setStopTime(1);
Group47.addChild(&TimeSensor48);

Group46.addChild(&Group47);

PositionInterpolator& PositionInterpolator49 =  PositionInterpolator();
PositionInterpolator49.setDEF(CString("dead_camPositionInterp"));
PositionInterpolator49.setKey(new float[]{0,0.990099,0.99999,1}, 4);
PositionInterpolator49.setKeyValue(new float[]{-3.7676,15.0582,218.78,-3.7676,15.0582,-192.225,-3.7676,15.0582,-192.225,-3.7676,15.0582,218.78}, 12);
Group46.addChild(&PositionInterpolator49);

PositionInterpolator& PositionInterpolator50 =  PositionInterpolator();
PositionInterpolator50.setDEF(CString("camPositionInterp"));
PositionInterpolator50.setKey(new float[]{0,0.996016,0.99999,1}, 4);
PositionInterpolator50.setKeyValue(new float[]{0,0,0,0,0,-2400,0,0,-2400,0,0,-2400}, 12);
Group46.addChild(&PositionInterpolator50);

Transform45.addChild(&Group46);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDEF(CString("cam"));
Viewpoint51.setDescription(CString("FlyCam"));
Viewpoint51.setPosition(new float[]{0,0,0});
Viewpoint51.setOrientation(new float[]{-0.981307,-0.192448,1.55814e-8,0.0541943});
Transform45.addChild(&Viewpoint51);

Transform44.addChild(&Transform45);

Transform38.addChild(&Transform44);

Transform29.addChild(&Transform38);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("HUD"));
Group& Group53 =  Group();
Transform& Transform54 =  Transform();
Transform54.setDEF(CString("hud_proxy"));
Transform& Transform55 =  Transform();
Transform55.setDEF(CString("proxySelf"));
ProximitySensor& ProximitySensor56 =  ProximitySensor();
ProximitySensor56.setDEF(CString("prox"));
ProximitySensor56.setSize(new float[]{350,200,2800});
ProximitySensor56.setCenter(new float[]{6.70553e-8,0.000010252,0.0000162125});
Transform55.addChild(&ProximitySensor56);

Transform54.addChild(&Transform55);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("xform"));
Transform57.setTranslation(new float[]{6.70553e-8,0.000010252,0.0000162125});
Transform57.setRotation(new float[]{-0.981307,-0.192448,2.57899e-8,0.0541899});
Transform& Transform58 =  Transform();
Transform58.setDEF(CString("camDragger"));
Transform58.setRotation(new float[]{0,0,1,3.14159});
PlaneSensor& PlaneSensor59 =  PlaneSensor();
PlaneSensor59.setDEF(CString("_1"));
PlaneSensor59.setMinPosition(new float[]{-0.45,-0.3});
PlaneSensor59.setMaxPosition(new float[]{0.45,0.3});
Transform58.addChild(&PlaneSensor59);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("plane_1"));
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("cursor"));
Transform61.setTranslation(new float[]{-0.0413871,-0.0490631,-1.02984});
Transform61.setScale(new float[]{0.5,0.5,0.4});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDEF(CString("_2"));
Material64.setAmbientIntensity(0);
Material64.setDiffuseColor(new float[]{0,0.976132,1});
Material64.setEmissiveColor(new float[]{0,0.976132,1});
Material64.setTransparency(0.5);
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet65 =  IndexedFaceSet();
IndexedFaceSet65.setSolid(False);
IndexedFaceSet65.setCcw(False);
IndexedFaceSet65.setCreaseAngle(0.5);
IndexedFaceSet65.setCoordIndex(new int32_t[]{11,10,12,13,-1,14,9,11,13,-1,15,8,5,16,-1,5,6,17,16,-1,0,1,18,19,-1,0,19,20,4,-1,3,7,21,22,-1,3,22,23,2,-1}, 40);
Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setPoint(new float[]{0.0669337,-0.0669336,0.0892453,0.0223112,-0.0669336,0.0892453,-0.0223112,-0.0669336,0.0892453,-0.0669337,-0.0669336,0.0892453,0.0669337,-0.0223112,0.0892453,0.0669337,0.0669336,0.0892453,0.0669337,0.0223112,0.0892453,-0.0669337,-0.0223112,0.0892453,0.0223112,0.0669336,0.0892453,-0.0669337,0.0223112,0.0892453,-0.0223112,0.0669336,0.0892453,-0.0669337,0.0669336,0.0892453,-0.0223112,0.0780892,0.0892453,-0.0780893,0.0780892,0.0892453,-0.0780893,0.0223112,0.0892453,0.0223112,0.0780892,0.0892453,0.0780893,0.0780892,0.0892453,0.0780893,0.0223112,0.0892453,0.0223112,-0.0780892,0.0892453,0.0780893,-0.0780892,0.0892453,0.0780893,-0.0223112,0.0892453,-0.0780893,-0.0223112,0.0892453,-0.0780893,-0.0780892,0.0892453,-0.0223112,-0.0780892,0.0892453}, 72);
IndexedFaceSet65.setCoord(&Coordinate66);

Shape62.setGeometry(&IndexedFaceSet65);

Transform61.addChild(&Shape62);

Transform60.addChild(&Transform61);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("dragplane"));
Transform& Transform68 =  Transform();
Transform68.setDEF(CString("plane"));
Transform68.setTranslation(new float[]{-0.0344546,-0.0533406,-1.08339});
Transform68.setScale(new float[]{0.5,0.5,0.4});
Transform68.setCenter(new float[]{-0.013865,0.00855494,0.0892429});
Group& Group69 =  Group();
Group69.setDEF(CString("ALERT-A"));
Group& Group70 =  Group();
Group70.setDEF(CString("planeAlert_anim"));
TimeSensor& TimeSensor71 =  TimeSensor();
TimeSensor71.setDEF(CString("Time_3"));
TimeSensor71.setStopTime(1);
Group70.addChild(&TimeSensor71);

Group69.addChild(&Group70);

ColorInterpolator& ColorInterpolator72 =  ColorInterpolator();
ColorInterpolator72.setDEF(CString("planeEmissiveColorInterp_1"));
ColorInterpolator72.setKey(new float[]{0}, 1);
ColorInterpolator72.setKeyValue(new float[]{1,0,0.0409002}, 3);
Group69.addChild(&ColorInterpolator72);

ScalarInterpolator& ScalarInterpolator73 =  ScalarInterpolator();
ScalarInterpolator73.setDEF(CString("planeTransparencyInterp_1"));
ScalarInterpolator73.setKey(new float[]{0,0.1,0.2,1}, 4);
ScalarInterpolator73.setKeyValue(new float[]{1,0.393617,0.56383,1}, 4);
Group69.addChild(&ScalarInterpolator73);

Transform68.addChild(&Group69);

Group& Group74 =  Group();
Group74.setDEF(CString("BONUS-A"));
Group& Group75 =  Group();
Group75.setDEF(CString("planeBonus_anim"));
TimeSensor& TimeSensor76 =  TimeSensor();
TimeSensor76.setDEF(CString("Time_4"));
TimeSensor76.setStopTime(1);
Group75.addChild(&TimeSensor76);

Group74.addChild(&Group75);

ColorInterpolator& ColorInterpolator77 =  ColorInterpolator();
ColorInterpolator77.setDEF(CString("planeEmissiveColorInterp_2"));
ColorInterpolator77.setKey(new float[]{0}, 1);
ColorInterpolator77.setKeyValue(new float[]{0,1,0.732517}, 3);
Group74.addChild(&ColorInterpolator77);

ScalarInterpolator& ScalarInterpolator78 =  ScalarInterpolator();
ScalarInterpolator78.setDEF(CString("planeTransparencyInterp_2"));
ScalarInterpolator78.setKey(new float[]{0,0.1,0.2,1}, 4);
ScalarInterpolator78.setKeyValue(new float[]{1,0.393617,0.56383,1}, 4);
Group74.addChild(&ScalarInterpolator78);

Transform68.addChild(&Group74);

Group& Group79 =  Group();
Group79.setDEF(CString("KEY-A"));
Group& Group80 =  Group();
Group80.setDEF(CString("key_Anim"));
TimeSensor& TimeSensor81 =  TimeSensor();
TimeSensor81.setDEF(CString("Time_5"));
TimeSensor81.setStopTime(1);
Group80.addChild(&TimeSensor81);

Group79.addChild(&Group80);

ColorInterpolator& ColorInterpolator82 =  ColorInterpolator();
ColorInterpolator82.setDEF(CString("planeEmissiveColorInterp_3"));
ColorInterpolator82.setKey(new float[]{0}, 1);
ColorInterpolator82.setKeyValue(new float[]{1,0.864046,0}, 3);
Group79.addChild(&ColorInterpolator82);

ScalarInterpolator& ScalarInterpolator83 =  ScalarInterpolator();
ScalarInterpolator83.setDEF(CString("planeTransparencyInterp_3"));
ScalarInterpolator83.setKey(new float[]{0,0.1,0.2,1}, 4);
ScalarInterpolator83.setKeyValue(new float[]{1,0.393617,0.56383,1}, 4);
Group79.addChild(&ScalarInterpolator83);

Transform68.addChild(&Group79);

Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setDEF(CString("_3"));
Material86.setAmbientIntensity(0);
Material86.setDiffuseColor(new float[]{0,0,0});
Material86.setEmissiveColor(new float[]{1,0.864046,0});
Material86.setShininess(0);
Material86.setTransparency(1);
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

IndexedFaceSet& IndexedFaceSet87 =  IndexedFaceSet();
IndexedFaceSet87.setCcw(False);
IndexedFaceSet87.setCreaseAngle(0.5);
IndexedFaceSet87.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate88 =  Coordinate();
Coordinate88.setPoint(new float[]{3.47281,3.49522,0.0892444,3.47281,-3.47811,0.0892414,-3.50054,-3.47811,0.0892414,-3.50054,3.49522,0.0892444}, 12);
IndexedFaceSet87.setCoord(&Coordinate88);

Shape84.setGeometry(&IndexedFaceSet87);

Transform68.addChild(&Shape84);

Transform67.addChild(&Transform68);

Transform60.addChild(&Transform67);

Transform58.addChild(&Transform60);

Transform& Transform89 =  Transform();
Transform89.setDEF(CString("startbutton_1"));
Transform89.setTranslation(new float[]{-0.0407702,-0.0486709,-0.977617});
TouchSensor& TouchSensor90 =  TouchSensor();
TouchSensor90.setDEF(CString("touchSensorTrigger"));
Transform89.addChild(&TouchSensor90);

Transform& Transform91 =  Transform();
Transform91.setDEF(CString("startbutton"));
Transform91.setRotation(new float[]{1,0,0,1.5708});
Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
Material& Material94 =  Material();
Material94.setAmbientIntensity(0);
Material94.setDiffuseColor(new float[]{0,0,0});
Material94.setEmissiveColor(new float[]{0,1,0.201812});
Material94.setTransparency(0.297872);
Appearance93.addChild(&Material94);

Shape92.addChild(&Appearance93);

IndexedFaceSet& IndexedFaceSet95 =  IndexedFaceSet();
IndexedFaceSet95.setCreaseAngle(0.5);
IndexedFaceSet95.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
Coordinate& Coordinate96 =  Coordinate();
Coordinate96.setPoint(new float[]{-0.594726,0.00512644,-0.355597,-0.435466,0.00512644,-0.355597,-0.435466,0.00512644,-0.411085,-0.594726,0.00512644,-0.411085}, 12);
IndexedFaceSet95.setCoord(&Coordinate96);

Shape92.setGeometry(&IndexedFaceSet95);

Transform91.addChild(&Shape92);

Transform89.addChild(&Transform91);

Transform58.addChild(&Transform89);

Transform57.addChild(&Transform58);

Transform& Transform97 =  Transform();
Transform97.setDEF(CString("pointCounter"));
Transform97.setTranslation(new float[]{0.607266,0.33078,-1.00043});
Transform97.setScale(new float[]{0.0033,0.0033,0.0033});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Material100.setAmbientIntensity(0);
Material100.setDiffuseColor(new float[]{0,0,0});
Material100.setEmissiveColor(new float[]{1,1,1});
Material100.setShininess(0);
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

Text& Text101 =  Text();
Text101.setDEF(CString("counter_1"));
Text101.setString(new CString[]{CString("0")}, 1);
CFontStyle& FontStyle102 =  CFontStyle();
FontStyle102.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle102.setSize(24);
FontStyle102.setJustify(new CString[]{CString("END")}, 1);
Text101.setFontStyle(&FontStyle102);

Shape98.setGeometry(&Text101);

Transform97.addChild(&Shape98);

Transform57.addChild(&Transform97);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("SFX"));
Group& Group104 =  Group();
Group104.setDEF(CString("sfx"));
Sound& Sound105 =  Sound();
Sound105.setDEF(CString("bonusSnd"));
Sound105.setIntensity(0.6);
Sound105.setSpatialize(False);
Sound105.setMinBack(100);
Sound105.setMinFront(100);
Sound105.setMaxBack(1000);
Sound105.setMaxFront(1000);
AudioClip& AudioClip106 =  AudioClip();
AudioClip106.setDEF(CString("Sound1clip_1"));
AudioClip106.setUrl(new CString[]{CString("bonus.wav")}, 1);
AudioClip106.setPitch(1.7);
Sound105.setSource(AudioClip106);

Group104.addChild(&Sound105);

Sound& Sound107 =  Sound();
Sound107.setDEF(CString("alertSnd"));
Sound107.setSpatialize(False);
Sound107.setMinBack(100);
Sound107.setMinFront(100);
Sound107.setMaxBack(1000);
Sound107.setMaxFront(1000);
AudioClip& AudioClip108 =  AudioClip();
AudioClip108.setDEF(CString("Sound1clip_2"));
AudioClip108.setUrl(new CString[]{CString("alert.wav")}, 1);
Sound107.setSource(AudioClip108);

Group104.addChild(&Sound107);

Sound& Sound109 =  Sound();
Sound109.setDEF(CString("keySnd"));
Sound109.setSpatialize(False);
Sound109.setMinBack(100);
Sound109.setMinFront(100);
Sound109.setMaxBack(1000);
Sound109.setMaxFront(1000);
AudioClip& AudioClip110 =  AudioClip();
AudioClip110.setDEF(CString("Sound1clip_3"));
AudioClip110.setUrl(new CString[]{CString("key.wav")}, 1);
AudioClip110.setPitch(0.6);
Sound109.setSource(AudioClip110);

Group104.addChild(&Sound109);

Transform103.addChild(&Group104);

Transform57.addChild(&Transform103);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("keyCounter"));
Transform& Transform112 =  Transform();
Transform112.setDEF(CString("keyCounter_A_rcadia"));
Transform112.setTranslation(new float[]{-0.53226,0.393088,-1.03136});
Transform112.setRotation(new float[]{1.66304e-9,-0.707106,0.707107,3.14159});
Transform112.setScale(new float[]{1.42021,1.42012,1.42021});
Transform112.setScaleOrientation(new float[]{-0.957427,0.260016,0.125399,0.00548095});
Shape& Shape113 =  Shape();
Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setDEF(CString("_4"));
Material115.setAmbientIntensity(0.16);
Material115.setDiffuseColor(new float[]{1,1,1});
Material115.setTransparency(0.0212766);
Appearance114.addChild(&Material115);

ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setDEF(CString("_5"));
ImageTexture116.setUrl(new CString[]{CString("keyfb.png")}, 1);
Appearance114.addChild(&ImageTexture116);

Shape113.addChild(&Appearance114);

IndexedFaceSet& IndexedFaceSet117 =  IndexedFaceSet();
IndexedFaceSet117.setSolid(False);
IndexedFaceSet117.setCreaseAngle(0.5);
IndexedFaceSet117.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet117.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate118 =  TextureCoordinate();
TextureCoordinate118.setPoint(new float[]{0.171583,0.042109,0.171583,0.898668,-0.00801791,0.0470592,-0.00801791,0.903619}, 8);
IndexedFaceSet117.setTexCoord(&TextureCoordinate118);

Coordinate& Coordinate119 =  Coordinate();
Coordinate119.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet117.setCoord(&Coordinate119);

Shape113.setGeometry(&IndexedFaceSet117);

Transform112.addChild(&Shape113);

Transform111.addChild(&Transform112);

Transform& Transform120 =  Transform();
Transform120.setDEF(CString("keyCounter_a_R_cadia"));
Transform120.setTranslation(new float[]{-0.454609,0.393088,-1.03136});
Transform120.setRotation(new float[]{1.08339e-8,-0.707106,0.707107,3.14159});
Transform120.setScale(new float[]{1.42021,1.42012,1.42021});
Transform120.setScaleOrientation(new float[]{-0.000158611,1,0.00051583,1.5708});
Shape& Shape121 =  Shape();
Appearance& Appearance122 =  Appearance();
Material& Material123 =  Material();
Material123.setDEF(CString("_6"));
Material123.setAmbientIntensity(0.16);
Material123.setDiffuseColor(new float[]{1,1,1});
Appearance122.addChild(&Material123);

ImageTexture& ImageTexture124 =  ImageTexture();
ImageTexture124.setUSE(CString("_5"));
Appearance122.addChild(&ImageTexture124);

Shape121.addChild(&Appearance122);

IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setSolid(False);
IndexedFaceSet125.setCreaseAngle(0.5);
IndexedFaceSet125.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet125.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate126 =  TextureCoordinate();
TextureCoordinate126.setPoint(new float[]{0.301878,0.0293025,0.304799,0.894851,0.142029,0.0231387,0.142955,0.888687}, 8);
IndexedFaceSet125.setTexCoord(&TextureCoordinate126);

Coordinate& Coordinate127 =  Coordinate();
Coordinate127.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet125.setCoord(&Coordinate127);

Shape121.setGeometry(&IndexedFaceSet125);

Transform120.addChild(&Shape121);

Transform111.addChild(&Transform120);

Transform& Transform128 =  Transform();
Transform128.setDEF(CString("keyCounter_ar_C_adia"));
Transform128.setTranslation(new float[]{-0.376332,0.393387,-1.03136});
Transform128.setRotation(new float[]{0.00000134991,0.707107,-0.707106,3.14159});
Transform128.setScale(new float[]{1.42021,1.42012,1.4202});
Transform128.setScaleOrientation(new float[]{-1,-0.0000411106,0.0000033629,0.000690534});
Shape& Shape129 =  Shape();
Appearance& Appearance130 =  Appearance();
Material& Material131 =  Material();
Material131.setDEF(CString("_7"));
Material131.setAmbientIntensity(0.16);
Material131.setDiffuseColor(new float[]{1,1,1});
Appearance130.addChild(&Material131);

ImageTexture& ImageTexture132 =  ImageTexture();
ImageTexture132.setUSE(CString("_5"));
Appearance130.addChild(&ImageTexture132);

Shape129.addChild(&Appearance130);

IndexedFaceSet& IndexedFaceSet133 =  IndexedFaceSet();
IndexedFaceSet133.setSolid(False);
IndexedFaceSet133.setCreaseAngle(0.5);
IndexedFaceSet133.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet133.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate134 =  TextureCoordinate();
TextureCoordinate134.setPoint(new float[]{0.441169,0.0152003,0.441169,0.863196,0.27657,0.0191076,0.27657,0.867104}, 8);
IndexedFaceSet133.setTexCoord(&TextureCoordinate134);

Coordinate& Coordinate135 =  Coordinate();
Coordinate135.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet133.setCoord(&Coordinate135);

Shape129.setGeometry(&IndexedFaceSet133);

Transform128.addChild(&Shape129);

Transform111.addChild(&Transform128);

Transform& Transform136 =  Transform();
Transform136.setDEF(CString("keyCounter_arc_A_dia"));
Transform136.setTranslation(new float[]{-0.298699,0.393486,-1.03165});
Transform136.setRotation(new float[]{0.00142728,0.707107,-0.707105,3.13874});
Transform136.setScale(new float[]{1.42021,1.42012,1.42021});
Transform136.setScaleOrientation(new float[]{0.999899,0.0137961,0.00333162,0.00644087});
Shape& Shape137 =  Shape();
Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setDEF(CString("_8"));
Material139.setAmbientIntensity(0.16);
Material139.setDiffuseColor(new float[]{1,1,1});
Material139.setTransparency(0.9);
Appearance138.addChild(&Material139);

ImageTexture& ImageTexture140 =  ImageTexture();
ImageTexture140.setDEF(CString("_9"));
ImageTexture140.setUrl(new CString[]{CString("key-a.png")}, 1);
Appearance138.addChild(&ImageTexture140);

Shape137.addChild(&Appearance138);

IndexedFaceSet& IndexedFaceSet141 =  IndexedFaceSet();
IndexedFaceSet141.setSolid(False);
IndexedFaceSet141.setCreaseAngle(0.5);
IndexedFaceSet141.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet141.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate142 =  TextureCoordinate();
TextureCoordinate142.setPoint(new float[]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941}, 8);
IndexedFaceSet141.setTexCoord(&TextureCoordinate142);

Coordinate& Coordinate143 =  Coordinate();
Coordinate143.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet141.setCoord(&Coordinate143);

Shape137.setGeometry(&IndexedFaceSet141);

Transform136.addChild(&Shape137);

Transform111.addChild(&Transform136);

Transform& Transform144 =  Transform();
Transform144.setDEF(CString("keyCounter_arca_D_ia"));
Transform144.setTranslation(new float[]{-0.221706,0.393936,-1.03237});
Transform144.setRotation(new float[]{0.001424,-0.707105,0.707107,3.13873});
Transform144.setScale(new float[]{1.42021,1.42012,1.42021});
Transform144.setScaleOrientation(new float[]{0.99638,-0.0848779,-0.00476121,0.00154408});
Shape& Shape145 =  Shape();
Appearance& Appearance146 =  Appearance();
Material& Material147 =  Material();
Material147.setDEF(CString("_10"));
Material147.setAmbientIntensity(0.16);
Material147.setDiffuseColor(new float[]{1,1,1});
Material147.setTransparency(0.9);
Appearance146.addChild(&Material147);

ImageTexture& ImageTexture148 =  ImageTexture();
ImageTexture148.setUrl(new CString[]{CString("key-d.png")}, 1);
Appearance146.addChild(&ImageTexture148);

Shape145.addChild(&Appearance146);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setSolid(False);
IndexedFaceSet149.setCreaseAngle(0.5);
IndexedFaceSet149.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet149.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate150 =  TextureCoordinate();
TextureCoordinate150.setPoint(new float[]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941}, 8);
IndexedFaceSet149.setTexCoord(&TextureCoordinate150);

Coordinate& Coordinate151 =  Coordinate();
Coordinate151.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet149.setCoord(&Coordinate151);

Shape145.setGeometry(&IndexedFaceSet149);

Transform144.addChild(&Shape145);

Transform111.addChild(&Transform144);

Transform& Transform152 =  Transform();
Transform152.setDEF(CString("keyCounter_arcad_I_a"));
Transform152.setTranslation(new float[]{-0.1437,0.393633,-1.03324});
Transform152.setRotation(new float[]{0.00142818,-0.707105,0.707107,3.13873});
Transform152.setScale(new float[]{1.42021,1.42012,1.42021});
Transform152.setScaleOrientation(new float[]{0.996284,-0.0861141,0.00128255,0.00248976});
Shape& Shape153 =  Shape();
Appearance& Appearance154 =  Appearance();
Material& Material155 =  Material();
Material155.setDEF(CString("_11"));
Material155.setAmbientIntensity(0.16);
Material155.setDiffuseColor(new float[]{1,1,1});
Material155.setTransparency(0.9);
Appearance154.addChild(&Material155);

ImageTexture& ImageTexture156 =  ImageTexture();
ImageTexture156.setUrl(new CString[]{CString("key-i.png")}, 1);
Appearance154.addChild(&ImageTexture156);

Shape153.addChild(&Appearance154);

IndexedFaceSet& IndexedFaceSet157 =  IndexedFaceSet();
IndexedFaceSet157.setSolid(False);
IndexedFaceSet157.setCreaseAngle(0.5);
IndexedFaceSet157.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet157.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate158 =  TextureCoordinate();
TextureCoordinate158.setPoint(new float[]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941}, 8);
IndexedFaceSet157.setTexCoord(&TextureCoordinate158);

Coordinate& Coordinate159 =  Coordinate();
Coordinate159.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet157.setCoord(&Coordinate159);

Shape153.setGeometry(&IndexedFaceSet157);

Transform152.addChild(&Shape153);

Transform111.addChild(&Transform152);

Transform& Transform160 =  Transform();
Transform160.setDEF(CString("keyCounter_arcadi_A"));
Transform160.setTranslation(new float[]{-0.0658975,0.393846,-1.03411});
Transform160.setRotation(new float[]{0.00142454,-0.707104,0.707108,3.13874});
Transform160.setScale(new float[]{1.42021,1.42012,1.42021});
Transform160.setScaleOrientation(new float[]{0.997436,-0.0715694,-0.000133446,0.00402647});
Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
Material& Material163 =  Material();
Material163.setDEF(CString("_12"));
Material163.setAmbientIntensity(0.16);
Material163.setDiffuseColor(new float[]{1,1,1});
Material163.setTransparency(0.9);
Appearance162.addChild(&Material163);

ImageTexture& ImageTexture164 =  ImageTexture();
ImageTexture164.setUSE(CString("_9"));
Appearance162.addChild(&ImageTexture164);

Shape161.addChild(&Appearance162);

IndexedFaceSet& IndexedFaceSet165 =  IndexedFaceSet();
IndexedFaceSet165.setSolid(False);
IndexedFaceSet165.setCreaseAngle(0.5);
IndexedFaceSet165.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet165.setCoordIndex(new int32_t[]{0,3,2,1,-1}, 5);
TextureCoordinate& TextureCoordinate166 =  TextureCoordinate();
TextureCoordinate166.setPoint(new float[]{0.999194,0.00219669,0.999194,0.997941,0.00136292,0.00219669,0.00136292,0.997941}, 8);
IndexedFaceSet165.setTexCoord(&TextureCoordinate166);

Coordinate& Coordinate167 =  Coordinate();
Coordinate167.setPoint(new float[]{0.0180659,-0.0216613,0.0523489,0.0729693,-0.0216613,0.0523489,0.0729693,-0.0216613,-0.00255451,0.0180659,-0.0216613,-0.00255451}, 12);
IndexedFaceSet165.setCoord(&Coordinate167);

Shape161.setGeometry(&IndexedFaceSet165);

Transform160.addChild(&Shape161);

Transform111.addChild(&Transform160);

Transform57.addChild(&Transform111);

Transform& Transform168 =  Transform();
Transform168.setDEF(CString("crosshair"));
Transform168.setTranslation(new float[]{0.0413872,0.049063,-1.0342});
Transform168.setRotation(new float[]{0,0,1,3.14159});
Transform168.setScale(new float[]{0.5,0.5,0.4});
Shape& Shape169 =  Shape();
Appearance& Appearance170 =  Appearance();
Material& Material171 =  Material();
Material171.setUSE(CString("_2"));
Appearance170.addChild(&Material171);

Shape169.addChild(&Appearance170);

IndexedFaceSet& IndexedFaceSet172 =  IndexedFaceSet();
IndexedFaceSet172.setSolid(False);
IndexedFaceSet172.setCcw(False);
IndexedFaceSet172.setCreaseAngle(0.5);
IndexedFaceSet172.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,7,8,9,-1,10,6,9,11,-1,12,13,14,15,-1,13,7,6,14,-1,3,2,16,17,-1,16,12,15,17,-1,15,14,18,19,-1,14,6,10,18,-1,5,3,17,20,-1,17,15,19,20,-1,21,22,19,18,-1,23,24,22,21,-1,22,25,20,19,-1,24,26,25,22,-1,27,28,29,30,-1,30,29,13,12,-1,31,27,30,32,-1,32,30,12,16,-1}, 100);
Coordinate& Coordinate173 =  Coordinate();
Coordinate173.setPoint(new float[]{0,0.0892448,0.0892453,-0.0055778,0.0892448,0.0892453,-0.0055778,0.0111556,0.0892453,0,0.0111556,0.0892453,0.0055778,0.0892448,0.0892453,0.0055778,0.0111556,0.0892453,0,-0.0111556,0.0892453,-0.0055778,-0.0111556,0.0892453,-0.0055778,-0.0892448,0.0892453,0,-0.0892448,0.0892453,0.0055778,-0.0111556,0.0892453,0.0055778,-0.0892448,0.0892453,-0.0055778,0,0.0892453,-0.0055778,-0.0055778,0.0892453,0,-0.0055778,0.0892453,0,0,0.0892453,-0.0055778,0.0055778,0.0892453,0,0.0055778,0.0892453,0.0055778,-0.0055778,0.0892453,0.0055778,0,0.0892453,0.0055778,0.0055778,0.0892453,0.0111556,-0.0055778,0.0892453,0.0111556,0,0.0892453,0.0892449,-0.0055778,0.0892453,0.0892449,0,0.0892453,0.0111556,0.0055778,0.0892453,0.0892449,0.0055778,0.0892453,-0.0892449,0,0.0892453,-0.0892449,-0.0055778,0.0892453,-0.0111556,-0.0055778,0.0892453,-0.0111556,0,0.0892453,-0.0892449,0.0055778,0.0892453,-0.0111556,0.0055778,0.0892453}, 99);
IndexedFaceSet172.setCoord(&Coordinate173);

Shape169.setGeometry(&IndexedFaceSet172);

Transform168.addChild(&Shape169);

Transform57.addChild(&Transform168);

Transform54.addChild(&Transform57);

Group53.addChild(&Transform54);

Transform52.addChild(&Group53);

Transform29.addChild(&Transform52);

Transform10.addChild(&Transform29);

Scene8.addChild(&Transform10);

Transform& Transform174 =  Transform();
Transform174.setDEF(CString("LANDSCAPE"));
Transform& Transform175 =  Transform();
Transform& Transform176 =  Transform();
Transform& Transform177 =  Transform();
Transform& Transform178 =  Transform();
Transform178.setDEF(CString("himmel_1"));
Transform178.setTranslation(new float[]{0,60,-1250});
Transform& Transform179 =  Transform();
Transform& Transform180 =  Transform();
Transform& Transform181 =  Transform();
Shape& Shape182 =  Shape();
Appearance& Appearance183 =  Appearance();
ImageTexture& ImageTexture184 =  ImageTexture();
ImageTexture184.setDEF(CString("_13"));
ImageTexture184.setUrl(new CString[]{CString("sky.png")}, 1);
Appearance183.addChild(&ImageTexture184);

Shape182.addChild(&Appearance183);

IndexedFaceSet& IndexedFaceSet185 =  IndexedFaceSet();
IndexedFaceSet185.setSolid(False);
IndexedFaceSet185.setCreaseAngle(0.5);
IndexedFaceSet185.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate186 =  TextureCoordinate();
TextureCoordinate186.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet185.setTexCoord(&TextureCoordinate186);

Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet185.setCoord(&Coordinate187);

Shape182.setGeometry(&IndexedFaceSet185);

Transform181.addChild(&Shape182);

Transform180.addChild(&Transform181);

Transform& Transform188 =  Transform();
Shape& Shape189 =  Shape();
Appearance& Appearance190 =  Appearance();
ImageTexture& ImageTexture191 =  ImageTexture();
ImageTexture191.setUSE(CString("_13"));
Appearance190.addChild(&ImageTexture191);

Shape189.addChild(&Appearance190);

IndexedFaceSet& IndexedFaceSet192 =  IndexedFaceSet();
IndexedFaceSet192.setSolid(False);
IndexedFaceSet192.setCreaseAngle(0.5);
IndexedFaceSet192.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate193 =  TextureCoordinate();
TextureCoordinate193.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet192.setTexCoord(&TextureCoordinate193);

Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet192.setCoord(&Coordinate194);

Shape189.setGeometry(&IndexedFaceSet192);

Transform188.addChild(&Shape189);

Transform180.addChild(&Transform188);

Transform179.addChild(&Transform180);

Transform& Transform195 =  Transform();
Transform& Transform196 =  Transform();
Shape& Shape197 =  Shape();
Appearance& Appearance198 =  Appearance();
ImageTexture& ImageTexture199 =  ImageTexture();
ImageTexture199.setUSE(CString("_13"));
Appearance198.addChild(&ImageTexture199);

Shape197.addChild(&Appearance198);

IndexedFaceSet& IndexedFaceSet200 =  IndexedFaceSet();
IndexedFaceSet200.setSolid(False);
IndexedFaceSet200.setCreaseAngle(0.5);
IndexedFaceSet200.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate201 =  TextureCoordinate();
TextureCoordinate201.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet200.setTexCoord(&TextureCoordinate201);

Coordinate& Coordinate202 =  Coordinate();
Coordinate202.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet200.setCoord(&Coordinate202);

Shape197.setGeometry(&IndexedFaceSet200);

Transform196.addChild(&Shape197);

Transform195.addChild(&Transform196);

Transform& Transform203 =  Transform();
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
ImageTexture& ImageTexture206 =  ImageTexture();
ImageTexture206.setUSE(CString("_13"));
Appearance205.addChild(&ImageTexture206);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet207 =  IndexedFaceSet();
IndexedFaceSet207.setSolid(False);
IndexedFaceSet207.setCreaseAngle(0.5);
IndexedFaceSet207.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet207.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate208 =  TextureCoordinate();
TextureCoordinate208.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet207.setTexCoord(&TextureCoordinate208);

Coordinate& Coordinate209 =  Coordinate();
Coordinate209.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet207.setCoord(&Coordinate209);

Shape204.setGeometry(&IndexedFaceSet207);

Transform203.addChild(&Shape204);

Transform195.addChild(&Transform203);

Transform179.addChild(&Transform195);

Transform178.addChild(&Transform179);

Transform177.addChild(&Transform178);

Transform& Transform210 =  Transform();
Transform210.setDEF(CString("boden1"));
Transform210.setTranslation(new float[]{0,-40,-1250});
Shape& Shape211 =  Shape();
Appearance& Appearance212 =  Appearance();
PixelTexture& PixelTexture213 =  PixelTexture();
PixelTexture213.setDEF(CString("_14"));
PixelTexture213.setImage(CString("64 64 1 119 130 91 141 174 121 139 137 138 113 133 123 132 154 163 167 174 158 188 191 166 97 124 144 208 196 98 72 63 93 105 145 112 124 162 121 90 80 76 119 137 142 158 170 174 125 75 123 104 97 113 93 76 76 119 137 142 158 173 181 186 204 118 105 106 126 115 117 185 133 139 147 170 142 168 175 163 171 185 204 180 176 179 170 153 109 79 151 199 194 170 137 75 149 147 165 169 162 144 113 100 79 67 80 108 147 159 143 131 128 108 102 97 95 128 111 72 63 80 108 147 159 148 128 133 134 116 143 110 111 92 92 171 163 163 171 193 171 190 204 184 190 190 220 197 184 162 113 133 165 141 160 190 190 153 135 86 128 207 202 193 134 120 99 101 87 79 100 99 109 91 79 107 141 121 90 87 93 121 105 89 79 100 99 109 91 76 76 63 104 149 144 116 90 102 94 133 140 107 174 190 163 157 209 171 178 172 186 178 190 175 169 159 185 171 152 155 124 120 120 110 94 139 195 165 115 130 108 90 87 73 98 99 87 80 80 92 97 90 88 90 88 93 103 91 73 98 99 87 80 80 91 83 76 88 80 139 89 118 82 76 111 80 94 172 120 47 135 199 204 179 188 188 204 162 179 188 198 194 145 122 106 129 118 135 154 84 105 143 104 122 107 96 89 73 68 91 89 128 132 122 105 130 81 75 96 76 103 111 73 68 120 99 128 132 122 105 118 109 113 153 111 125 105 92 119 76 23 24 105 88 38 191 210 173 178 204 173 103 75 154 240 220 170 181 176 159 146 161 171 127 117 122 94 110 103 90 70 64 67 92 82 137 135 126 103 157 117 70 121 117 105 105 75 68 184 113 137 135 126 103 132 130 105 123 120 143 137 126 172 135 76 13 66 132 57 86 130 121 75 136 123 142 105 63 189 234 210 197 151 145 149 166 156 143 152 148 100 132 115 88 68 52 71 82 67 76 113 106 91 112 100 71 135 139 103 68 65 76 82 67 76 113 106 91 127 137 125 104 116 122 140 145 186 179 154 86 42 132 120 34 41 137 42 16 88 156 187 85 71 154 180 186 139 132 152 129 118 153 161 153 101 115 116 101 77 37 40 83 86 73 118 130 125 82 59 77 91 155 142 100 63 53 83 86 73 118 130 125 115 140 110 112 139 145 158 144 203 191 164 136 75 36 113 92 36 95 97 30 103 184 178 102 41 15 38 104 138 146 164 169 165 162 144 146 110 72 82 113 77 38 47 74 91 92 126 121 134 105 109 90 92 151 164 125 93 67 74 91 92 126 121 134 137 124 118 100 108 157 176 171 199 192 184 178 153 112 89 124 68 94 181 117 109 105 148 181 116 69 36 56 81 155 186 191 162 129 142 149 129 121 116 93 98 60 57 57 73 72 109 115 124 135 149 105 91 99 123 118 89 67 57 73 72 126 126 134 143 123 133 105 81 92 128 164 232 200 175 179 178 215 135 87 65 88 105 125 129 95 92 136 142 119 91 80 56 121 186 169 163 150 169 154 142 136 123 73 80 87 67 59 67 32 76 106 112 132 109 102 94 91 51 70 80 66 59 67 32 93 133 139 123 101 126 122 108 81 100 143 211 220 200 199 190 203 180 161 99 105 152 163 136 143 149 133 154 175 157 122 83 113 161 155 174 174 203 151 125 146 146 83 71 107 72 80 82 53 73 146 135 121 75 76 100 84 69 51 54 66 80 82 49 32 91 129 118 87 97 99 112 79 85 130 172 190 175 214 180 203 169 145 116 83 181 208 197 180 174 174 175 195 171 134 108 153 185 191 163 163 164 147 111 133 158 113 85 129 109 103 84 97 126 159 143 132 152 117 103 95 93 86 87 95 101 81 63 11 23 70 112 98 82 119 116 81 98 115 100 131 101 150 150 140 116 125 115 109 100 182 203 208 202 201 185 126 132 134 123 151 196 192 166 174 180 159 119 122 138 139 124 145 123 115 81 103 126 134 132 141 135 103 87 103 143 121 110 115 114 80 68 21 17 30 96 104 107 115 135 97 82 96 100 171 152 68 62 76 110 129 116 155 121 81 107 108 175 191 164 145 142 142 126 135 177 156 158 174 194 145 141 154 164 135 133 117 145 129 102 105 139 146 154 157 83 97 113 129 166 144 112 145 129 99 74 49 33 27 79 110 127 69 78 100 69 98 109 154 159 137 136 153 165 157 144 175 151 112 100 74 79 130 116 112 116 99 137 149 193 194 157 143 151 141 167 166 151 140 139 149 175 144 132 118 124 135 160 174 117 90 119 140 151 155 149 175 144 123 88 82 49 30 48 108 126 102 83 74 69 119 113 142 162 156 175 169 146 147 154 167 141 144 161 176 94 94 109 113 126 106 126 145 190 164 125 150 147 168 189 164 119 132 166 178 180 152 162 177 128 139 162 189 113 86 106 127 152 174 178 180 152 161 177 105 43 17 7 56 122 129 136 104 66 77 109 160 195 176 172 152 132 144 143 117 139 146 155 169 111 118 108 126 127 158 115 131 159 145 149 182 165 151 154 126 145 122 172 197 182 172 229 222 119 146 162 170 128 117 117 130 150 175 197 182 172 229 223 112 76 46 10 18 102 120 92 94 73 68 100 108 197 190 170 130 130 164 165 165 166 146 152 161 129 104 99 137 148 161 121 155 185 185 192 191 165 155 147 76 76 125 157 203 177 172 195 141 99 119 138 94 77 109 129 119 145 164 203 177 172 195 141 106 80 60 36 27 59 108 95 75 75 102 100 63 119 175 148 115 139 198 191 176 142 124 152 166 145 127 126 116 149 159 145 177 180 158 164 188 172 170 152 140 104 132 162 184 147 154 140 111 100 84 105 70 94 108 145 119 137 162 184 147 154 140 111 124 100 76 37 19 39 79 124 97 75 95 98 80 73 171 137 114 112 183 178 159 155 114 141 146 158 130 134 120 142 177 181 165 110 70 132 168 165 159 144 105 135 157 132 113 130 125 83 61 71 80 86 86 100 108 135 109 127 129 113 130 125 83 61 80 100 75 46 34 59 45 94 115 99 62 82 75 71 170 161 127 109 147 129 162 148 172 193 180 178 133 130 129 174 198 189 177 163 65 132 160 148 155 161 119 102 132 104 67 62 71 90 85 93 99 80 110 111 117 123 105 89 97 67 62 71 90 85 93 100 72 59 23 20 57 59 94 117 72 83 83 86 142 151 118 84 108 165 142 79 94 165 189 148 115 108 155 153 191 108 86 139 105 62 164 178 179 175 175 126 128 105 66 50 72 107 126 133 126 90 102 121 138 121 104 90 89 66 50 72 107 126 133 133 87 73 63 7 44 70 64 122 89 73 102 105 111 162 129 74 59 84 74 108 102 109 128 133 105 95 153 156 188 157 104 75 132 73 106 181 173 169 162 129 128 103 109 125 135 150 156 159 149 123 110 138 149 132 111 115 100 109 125 135 150 156 160 152 120 90 73 38 27 79 60 50 54 59 71 79 105 143 109 109 95 96 113 143 163 131 120 126 110 107 163 156 150 155 168 123 79 108 69 129 158 162 154 145 156 138 154 152 158 158 153 151 133 142 139 148 159 152 127 135 129 154 152 158 158 154 153 129 142 143 138 92 56 60 88 59 46 60 66 107 122 110 121 111 120 120 147 154 176 152 149 120 120 129 149 112 122 188 188 178 127 101 65 113 173 111 153 157 156 153 156 158 161 136 95 94 104 123 129 122 126 111 110 104 108 154 158 161 136 95 94 103 116 115 107 91 75 54 59 60 49 58 83 113 124 104 110 124 129 130 154 154 155 157 169 133 149 149 163 156 168 188 188 204 178 160 157 159 183 127 87 133 122 139 142 149 132 124 105 66 64 88 105 94 60 64 117 116 90 123 149 132 124 105 66 65 89 113 120 103 87 76 59 42 69 56 73 120 112 121 150 146 128 130 159 154 159 181 191 149 156 146 188 174 176 181 200 199 167 167 181 191 180 155 83 108 147 142 91 100 123 134 137 124 97 102 91 64 52 60 100 139 110 80 100 123 134 137 124 107 136 134 136 113 113 88 83 69 89 80 63 121 122 127 146 133 90 43 104 172 174 186 208 179 162 169 197 195 185 190 180 176 164 180 195 191 181 142 116 107 158 142 88 51 81 102 110 124 112 86 92 96 90 67 53 120 118 92 51 81 102 110 124 119 97 73 71 97 102 79 73 69 86 102 83 90 93 72 102 123 148 57 52 146 145 132 114 146 185 186 176 154 138 152 152 172 164 170 191 210 187 146 132 88 129 129 99 83 56 42 52 83 102 92 99 115 118 104 53 59 73 95 90 56 42 42 80 109 100 72 76 51 70 84 71 69 80 82 96 70 70 79 112 115 124 100 7 49 99 112 93 88 173 165 159 136 125 151 189 186 179 180 201 195 178 167 181 154 117 96 84 109 109 78 70 63 72 107 113 119 97 104 122 83 59 75 105 105 62 49 66 73 99 89 100 77 101 102 80 75 73 93 95 78 81 99 143 152 123 116 37 56 129 121 118 89 99 135 169 172 173 170 176 179 178 204 216 188 166 156 144 124 129 95 86 108 103 115 108 73 64 100 109 123 122 103 127 122 74 59 72 101 108 82 83 73 79 92 103 110 99 89 86 80 80 92 83 92 101 107 162 162 139 112 108 151 162 141 135 132 126 127 152 164 146 136 154 185 164 186 194 192 134 140 94 86 128 103 92 97 80 68 83 102 111 100 123 135 127 115 126 138 120 59 59 75 99 102 99 86 86 105 111 113 111 76 73 83 100 100 86 89 121 103 119 135 130 97 80 139 159 162 145 153 145 140 150 155 122 132 158 181 168 180 188 173 162 102 109 103 124 116 108 89 80 73 76 94 137 125 136 142 136 113 120 139 149 106 70 75 92 115 112 86 97 100 91 95 111 92 76 86 100 127 113 102 127 103 89 105 143 109 70 119 139 145 138 148 136 139 194 174 142 125 153 169 172 163 167 160 167 146 102 79 118 142 117 79 60 79 83 73 127 125 123 136 121 103 119 118 135 143 110 96 108 133 125 112 93 75 72 74 82 83 109 127 105 115 127 108 131 122 95 94 122 155 79 77 115 141 145 142 128 146 187 116 93 116 168 164 169 155 168 168 168 175 151 105 128 157 127 86 55 65 77 80 117 121 104 102 83 89 124 89 100 117 115 124 107 109 125 127 112 86 84 96 88 103 113 127 105 94 118 115 122 137 94 124 119 164 109 40 82 124 157 141 150 178 174 108 113 134 153 109 133 175 180 173 154 147 141 140 139 176 127 112 70 70 77 84 108 112 83 108 93 93 118 121 109 130 103 85 97 97 111 135 116 81 88 96 122 113 101 135 118 99 119 122 119 130 98 128 168 140 144 79 98 141 147 159 198 192 176 133 133 156 169 138 161 182 175 164 134 100 133 186 148 137 106 113 89 57 67 59 91 110 95 113 111 115 118 144 135 115 89 66 93 122 82 103 109 103 121 122 129 144 109 115 102 99 122 135 123 111 109 89 148 132 135 103 78 141 191 153 188 175 156 160 142 155 170 166 169 184 172 167 153 127 123 183 187 141 116 84 74 60 63 62 82 113 107 107 118 139 142 137 169 124 62 62 82 105 63 92 112 129 101 92 105 135 112 101 111 108 118 135 116 122 132 93 52 97 148 145 38 83 223 229 188 142 168 159 127 136 147 169 162 181 184 162 139 126 107 141 168 163 167 86 76 84 103 111 108 116 119 108 117 134 131 148 168 143 103 67 72 92 77 95 121 158 89 101 47 79 105 99 124 112 134 151 121 125 148 132 76 97 173 160 95 68 168 125 115 82 114 143 134 108 156 160 156 183 191 172 159 139 100 132 147 154 156 124 116 151 145 107 108 121 142 147 116 138 139 175 162 140 156 130 87 119 117 92 105 148 92 94 73 97 117 112 148 122 103 146 128 107 129 152 109 88 159 175 163 123 149 65 71 157 161 143 134 107 163 172 151 178 178 173 174 148 102 167 121 110 137 127 100 134 130 125 95 129 123 116 123 139 156 201 169 155 156 150 150 138 109 99 114 134 68 95 88 87 125 119 137 129 93 113 116 108 105 139 105 70 117 182 173 153 150 152 141 148 185 152 132 134 158 191 173 184 171 158 167 147 116 126 110 108 118 144 113 121 110 152 105 125 136 139 154 148 157 176 170 159 159 146 159 118 103 125 140 139 87 112 82 84 141 91 130 140 110 92 113 108 99 111 134 111 85 153 175 196 225 200 181 176 196 167 161 161 184 200 190 191 174 165 186 146 121 91 119 142 147 127 119 101 116 131 123 154 156 155 153 126 148 186 174 162 155 148 136 114 120 119 129 128 123 129 106 75 154 131 121 99 104 122 137 117 108 107 144 116 90 93 158 146 181 201 194 197 183 161 173 170 194 206 194 169 155 148 160 180 172 162 153 125 136 130 123 95 101 105 124 148 155 162 143 119 137 210 194 163 163 162 125 118 103 92 98 105 144 130 101 92 153 181 104 99 108 112 151 105 135 114 128 128 106 54 156 174 136 175 218 193 146 159 184 156 178 197 197 145 133 105 122 185 185 178 159 128 134 124 117 102 103 115 141 132 151 156 122 115 146 209 188 145 146 143 103 90 57 63 83 97 118 108 86 79 136 172 156 137 111 137 162 122 125 130 109 143 143 63 146 183 173 150 213 203 184 171 179 153 171 185 170 169 135 116 125 155 185 175 174 152 106 97 91 91 119 111 118 141 147 140 118 89 142 173 117 83 86 91 86 73 125 123 111 114 122 116 97 69 84 137 150 110 91 122 149 155 132 148 129 151 162 68 121 187 175 110 146 137 157 162 175 158 148 148 152 168 163 126 111 141 155 136 116 142 126 129 95 80 121 119 99 102 108 121 114 88 143 156 102 107 86 76 104 148 165 159 152 171 165 148 157 106 27 128 154 127 108 109 148 184 121 131 121 124 155 118 124 184 185 155 106 131 107 157 171 154 158 181 191 204 185 158 142 132 168 160 138 170 161 122 101 99 105 127 116 83 109 134 153 89 111 125 103 116 127 159 154 149 162 131 148 185 175 165 137 103 20 106 136 137 107 101 129 145 113 118 115 135 165 154 116 137 155 194 168 169 123 128 132 172 236 242 234 215 184 162 177 144 129 110 149 168 161 104 63 89 80 93 126 121 124 126 152 101 91 99 112 137 154 161 143 118 117 124 164 181 170 177 128 108 56 82 149 128 89 88 118 118 128 116 131 151 193 148 92 107 127 121 174 191 152 119 152 177 162 210 243 244 213 184 184 155 158 177 173 160 162 108 83 110 130 86 104 134 132 136 144 117 98 132 129 129 142 115 115 133 89 105 144 175 160 135 108 105 82 46 110 136 92 81 151 144 115 125 150 172 192 124 65 190 203 119 64 82 128 129 159 172 129 86 100 98 116 158 185 188 188 170 191 144 98 100 124 152 136 115 122 139 139 122 122 120 104 130 135 143 149 151 152 136 115 122 142 193 157 104 122 108 79 30 32 86 83 81 129 153 132 128 145 130 121 79 4 111 185 187 153 66 85 136 138 149 175 184 116 79 116 134 161 197 213 187 209 190 101 118 154 134 121 138 150 146 157 141 141 118 132 124 142 139 156 161 134 121 138 150 149 187 174 143 129 106 107 72 82 118 105 91 111 164 131 90 150 98 72 138 29 79 196 233 218 167 91 122 149 180 163 145 125 126 142 127 75 119 191 211 248 198 108 134 149 142 116 142 161 132 159 172 137 112 119 134 132 132 144 152 137 127 138 147 129 159 151 115 122 104 133 89 141 177 113 92 145 157 144 94 158 141 102 119 70 36 139 161 184 210 135 107 135 143 118 135 148 161 172 155 113 41 124 241 244 155 94 90 119 154 137 148 188 94 74 118 109 69 111 141 138 116 106 115 121 131 125 128 84 56 94 106 128 112 127 81 92 158 123 72 144 181 138 99 181 228 222 134 63 24 80 90 73 158 165 145 155 174 166 168 174 203 180 156 145 65 48 179 192 122 95 56 72 119 142 164 159 100 54 59 70 72 118 132 126 136 102 79 98 119 116 120 93 43 78 125 120 127 159 113 96 146 135 69 86 174 144 115 147 167 187 154 102 49 120 73 134 62 111 148 180 191 197 187 182 213 198 178 154 147 60 52 97 108 91 67 69 129 145 165 144 99 98 84 58 59 95 119 129 141 136 48 45 60 71 72 86 92 54 95 102 131 183 156 116 153 163 111 60 138 169 145 119 138 129 177 133 69 127 56 170 92 76 86 154 196 190 176 168 189 170 202 114 121 82 33 49 110 97 50 76 131 127 95 82 93 103 119 95 61 72 112 131 127 91 40 19 10 16 53 91 105 94 98 104 97 182 169 122 105 154 110 102 158 190 145 168 169 201 215 175 83 106 79 152 197 87 55 92 88 171 220 176 197 179 207 134 49 121 89 40 87 126 144 108 103 88 74 76 80 98 90 116 89 92 99 96 88 74 105 100 78 68 75 80 116 124 119 138 88 135 132 108 104 150 104 77 132 207 207 244 238 235 231 232 135 116 130 55 106 84 84 101 39 108 223 185 170 187 198 192 146 76 88 70 80 122 147 150 118 116 103 117 119 109 65 89 100 83 82 92 116 106 148 130 129 110 120 122 135 154 117 127 90 107 160 116 108 151 128 89 124 204 164 182 228 248 238 211 198 201 200 110 95 76 89 115 92 57 108 148 73 111 175 220 194 134 105 65 73 134 157 143 127 153 155 127 119 116 94 66 66 80 103 109 154 147 141 127 153 153 127 142 152 185 173 124 102 107 152 111 115 154 131 119 107 168 162 98 95 97 103 95 125 170 193 178 136 68 39 78 161 60 29 94 108 10 84 188 188 175 151 78 69 140 160 153 150 168 162 171 138 125 109 62 49 70 92 69 109 151 153 150 168 162 171 167 168 195 190 139 104 91 143 137 120 134 119 138 122 140 169 191 158 88 95 108 92 100 81 128 158 142 101 50 70 116 62 53 115 77 59 120 169 137 123 73 71 128 139 152 159 143 146 178 145 118 99 63 63 55 68 71 85 122 152 159 143 146 178 174 187 191 167 118 121 75 156 141 106 134 127 127 132 176 198 153 147 116 132 152 157 176 148 74 145 223 192 133 69 125 110 59 162 166 117 116 99 100 101 79 67 100 129 158 152 140 157 184 127 102 111 74 80 95 68 82 97 125 158 152 140 157 184 178 207 183 178"));
Appearance212.addChild(&PixelTexture213);

Shape211.addChild(&Appearance212);

IndexedFaceSet& IndexedFaceSet214 =  IndexedFaceSet();
IndexedFaceSet214.setSolid(False);
IndexedFaceSet214.setCreaseAngle(0.5);
IndexedFaceSet214.setColorIndex(new int[]{2,1,0,-1,0,3,0,-1,3,0,0,-1,0,2,0,-1}, 16);
IndexedFaceSet214.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1}, 16);
IndexedFaceSet214.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1}, 16);
CColor& Color215 =  CColor();
Color215.setColor(new float[]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0.449581,0.8,0.375564,0.71123,0.410174,0.321707}, 12);
IndexedFaceSet214.setColor(&Color215);

TextureCoordinate& TextureCoordinate216 =  TextureCoordinate();
TextureCoordinate216.setPoint(new float[]{6,0,6,3,3,3,0,3,0,0,3,3,3,0}, 14);
IndexedFaceSet214.setTexCoord(&TextureCoordinate216);

Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setPoint(new float[]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250}, 18);
IndexedFaceSet214.setCoord(&Coordinate217);

Shape211.setGeometry(&IndexedFaceSet214);

Transform210.addChild(&Shape211);

Transform177.addChild(&Transform210);

Transform176.addChild(&Transform177);

Transform& Transform218 =  Transform();
Transform& Transform219 =  Transform();
Transform219.setDEF(CString("himmel_2"));
Transform219.setTranslation(new float[]{0,60,-1500});
Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{0,-100,250});
Transform& Transform221 =  Transform();
Transform& Transform222 =  Transform();
Transform222.setTranslation(new float[]{0,100,-250});
Shape& Shape223 =  Shape();
Appearance& Appearance224 =  Appearance();
ImageTexture& ImageTexture225 =  ImageTexture();
ImageTexture225.setUSE(CString("_13"));
Appearance224.addChild(&ImageTexture225);

Shape223.addChild(&Appearance224);

IndexedFaceSet& IndexedFaceSet226 =  IndexedFaceSet();
IndexedFaceSet226.setSolid(False);
IndexedFaceSet226.setCreaseAngle(0.5);
IndexedFaceSet226.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate227 =  TextureCoordinate();
TextureCoordinate227.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet226.setTexCoord(&TextureCoordinate227);

Coordinate& Coordinate228 =  Coordinate();
Coordinate228.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet226.setCoord(&Coordinate228);

Shape223.setGeometry(&IndexedFaceSet226);

Transform222.addChild(&Shape223);

Transform221.addChild(&Transform222);

Transform& Transform229 =  Transform();
Transform229.setTranslation(new float[]{0,100,-250});
Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
ImageTexture& ImageTexture232 =  ImageTexture();
ImageTexture232.setUSE(CString("_13"));
Appearance231.addChild(&ImageTexture232);

Shape230.addChild(&Appearance231);

IndexedFaceSet& IndexedFaceSet233 =  IndexedFaceSet();
IndexedFaceSet233.setSolid(False);
IndexedFaceSet233.setCreaseAngle(0.5);
IndexedFaceSet233.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate234 =  TextureCoordinate();
TextureCoordinate234.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet233.setTexCoord(&TextureCoordinate234);

Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet233.setCoord(&Coordinate235);

Shape230.setGeometry(&IndexedFaceSet233);

Transform229.addChild(&Shape230);

Transform221.addChild(&Transform229);

Transform220.addChild(&Transform221);

Transform& Transform236 =  Transform();
Transform& Transform237 =  Transform();
Transform237.setTranslation(new float[]{0,100,-250});
Shape& Shape238 =  Shape();
Appearance& Appearance239 =  Appearance();
ImageTexture& ImageTexture240 =  ImageTexture();
ImageTexture240.setUSE(CString("_13"));
Appearance239.addChild(&ImageTexture240);

Shape238.addChild(&Appearance239);

IndexedFaceSet& IndexedFaceSet241 =  IndexedFaceSet();
IndexedFaceSet241.setSolid(False);
IndexedFaceSet241.setCreaseAngle(0.5);
IndexedFaceSet241.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate242 =  TextureCoordinate();
TextureCoordinate242.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet241.setTexCoord(&TextureCoordinate242);

Coordinate& Coordinate243 =  Coordinate();
Coordinate243.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet241.setCoord(&Coordinate243);

Shape238.setGeometry(&IndexedFaceSet241);

Transform237.addChild(&Shape238);

Transform236.addChild(&Transform237);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{0,100,-250});
Shape& Shape245 =  Shape();
Appearance& Appearance246 =  Appearance();
ImageTexture& ImageTexture247 =  ImageTexture();
ImageTexture247.setUSE(CString("_13"));
Appearance246.addChild(&ImageTexture247);

Shape245.addChild(&Appearance246);

IndexedFaceSet& IndexedFaceSet248 =  IndexedFaceSet();
IndexedFaceSet248.setSolid(False);
IndexedFaceSet248.setCreaseAngle(0.5);
IndexedFaceSet248.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet248.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate249 =  TextureCoordinate();
TextureCoordinate249.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet248.setTexCoord(&TextureCoordinate249);

Coordinate& Coordinate250 =  Coordinate();
Coordinate250.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet248.setCoord(&Coordinate250);

Shape245.setGeometry(&IndexedFaceSet248);

Transform244.addChild(&Shape245);

Transform236.addChild(&Transform244);

Transform220.addChild(&Transform236);

Transform219.addChild(&Transform220);

Transform218.addChild(&Transform219);

Transform& Transform251 =  Transform();
Transform251.setDEF(CString("boden2"));
Transform251.setTranslation(new float[]{0,-40,-1250});
Shape& Shape252 =  Shape();
Appearance& Appearance253 =  Appearance();
PixelTexture& PixelTexture254 =  PixelTexture();
PixelTexture254.setUSE(CString("_14"));
Appearance253.addChild(&PixelTexture254);

Shape252.addChild(&Appearance253);

IndexedFaceSet& IndexedFaceSet255 =  IndexedFaceSet();
IndexedFaceSet255.setSolid(False);
IndexedFaceSet255.setCreaseAngle(0.5);
IndexedFaceSet255.setColorIndex(new int[]{0,1,2,-1,2,2,2,-1,2,0,2,-1,3,2,2,-1}, 16);
IndexedFaceSet255.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1}, 16);
IndexedFaceSet255.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1}, 16);
CColor& Color256 =  CColor();
Color256.setColor(new float[]{0.652899,0.8,0.382087,0.8,0.545717,0.483674,0.8,0.630835,0.476646,0.395536,0.764706,0.168068}, 12);
IndexedFaceSet255.setColor(&Color256);

TextureCoordinate& TextureCoordinate257 =  TextureCoordinate();
TextureCoordinate257.setPoint(new float[]{6,0,6,3,3,3,0,0,3,0,3,3,0,3}, 14);
IndexedFaceSet255.setTexCoord(&TextureCoordinate257);

Coordinate& Coordinate258 =  Coordinate();
Coordinate258.setPoint(new float[]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532}, 18);
IndexedFaceSet255.setCoord(&Coordinate258);

Shape252.setGeometry(&IndexedFaceSet255);

Transform251.addChild(&Shape252);

Transform218.addChild(&Transform251);

Transform176.addChild(&Transform218);

Transform175.addChild(&Transform176);

Transform& Transform259 =  Transform();
Transform& Transform260 =  Transform();
Transform& Transform261 =  Transform();
Transform261.setDEF(CString("himmel_3"));
Transform261.setTranslation(new float[]{0,60,-1750});
Transform& Transform262 =  Transform();
Transform& Transform263 =  Transform();
Transform& Transform264 =  Transform();
Shape& Shape265 =  Shape();
Appearance& Appearance266 =  Appearance();
ImageTexture& ImageTexture267 =  ImageTexture();
ImageTexture267.setUSE(CString("_13"));
Appearance266.addChild(&ImageTexture267);

Shape265.addChild(&Appearance266);

IndexedFaceSet& IndexedFaceSet268 =  IndexedFaceSet();
IndexedFaceSet268.setSolid(False);
IndexedFaceSet268.setCreaseAngle(0.5);
IndexedFaceSet268.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate269 =  TextureCoordinate();
TextureCoordinate269.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet268.setTexCoord(&TextureCoordinate269);

Coordinate& Coordinate270 =  Coordinate();
Coordinate270.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet268.setCoord(&Coordinate270);

Shape265.setGeometry(&IndexedFaceSet268);

Transform264.addChild(&Shape265);

Transform263.addChild(&Transform264);

Transform& Transform271 =  Transform();
Shape& Shape272 =  Shape();
Appearance& Appearance273 =  Appearance();
ImageTexture& ImageTexture274 =  ImageTexture();
ImageTexture274.setUSE(CString("_13"));
Appearance273.addChild(&ImageTexture274);

Shape272.addChild(&Appearance273);

IndexedFaceSet& IndexedFaceSet275 =  IndexedFaceSet();
IndexedFaceSet275.setSolid(False);
IndexedFaceSet275.setCreaseAngle(0.5);
IndexedFaceSet275.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate276 =  TextureCoordinate();
TextureCoordinate276.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet275.setTexCoord(&TextureCoordinate276);

Coordinate& Coordinate277 =  Coordinate();
Coordinate277.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet275.setCoord(&Coordinate277);

Shape272.setGeometry(&IndexedFaceSet275);

Transform271.addChild(&Shape272);

Transform263.addChild(&Transform271);

Transform262.addChild(&Transform263);

Transform& Transform278 =  Transform();
Transform& Transform279 =  Transform();
Shape& Shape280 =  Shape();
Appearance& Appearance281 =  Appearance();
ImageTexture& ImageTexture282 =  ImageTexture();
ImageTexture282.setUSE(CString("_13"));
Appearance281.addChild(&ImageTexture282);

Shape280.addChild(&Appearance281);

IndexedFaceSet& IndexedFaceSet283 =  IndexedFaceSet();
IndexedFaceSet283.setSolid(False);
IndexedFaceSet283.setCreaseAngle(0.5);
IndexedFaceSet283.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate284 =  TextureCoordinate();
TextureCoordinate284.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet283.setTexCoord(&TextureCoordinate284);

Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet283.setCoord(&Coordinate285);

Shape280.setGeometry(&IndexedFaceSet283);

Transform279.addChild(&Shape280);

Transform278.addChild(&Transform279);

Transform& Transform286 =  Transform();
Shape& Shape287 =  Shape();
Appearance& Appearance288 =  Appearance();
ImageTexture& ImageTexture289 =  ImageTexture();
ImageTexture289.setUSE(CString("_13"));
Appearance288.addChild(&ImageTexture289);

Shape287.addChild(&Appearance288);

IndexedFaceSet& IndexedFaceSet290 =  IndexedFaceSet();
IndexedFaceSet290.setSolid(False);
IndexedFaceSet290.setCreaseAngle(0.5);
IndexedFaceSet290.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet290.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate291 =  TextureCoordinate();
TextureCoordinate291.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet290.setTexCoord(&TextureCoordinate291);

Coordinate& Coordinate292 =  Coordinate();
Coordinate292.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet290.setCoord(&Coordinate292);

Shape287.setGeometry(&IndexedFaceSet290);

Transform286.addChild(&Shape287);

Transform278.addChild(&Transform286);

Transform262.addChild(&Transform278);

Transform261.addChild(&Transform262);

Transform260.addChild(&Transform261);

Transform& Transform293 =  Transform();
Transform293.setTranslation(new float[]{0,-40,-1500});
Shape& Shape294 =  Shape();
Appearance& Appearance295 =  Appearance();
PixelTexture& PixelTexture296 =  PixelTexture();
PixelTexture296.setUSE(CString("_14"));
Appearance295.addChild(&PixelTexture296);

Shape294.addChild(&Appearance295);

IndexedFaceSet& IndexedFaceSet297 =  IndexedFaceSet();
IndexedFaceSet297.setSolid(False);
IndexedFaceSet297.setCreaseAngle(0.5);
IndexedFaceSet297.setColorIndex(new int[]{0,0,1,-1,3,1,1,-1,1,0,1,-1,2,3,1,-1}, 16);
IndexedFaceSet297.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1}, 16);
IndexedFaceSet297.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1}, 16);
CColor& Color298 =  CColor();
Color298.setColor(new float[]{0.8,0.545717,0.483674,0.8,0.630835,0.476646,0.0959711,0.465241,0.0190278,0.395536,0.764706,0.168068}, 12);
IndexedFaceSet297.setColor(&Color298);

TextureCoordinate& TextureCoordinate299 =  TextureCoordinate();
TextureCoordinate299.setPoint(new float[]{6,0,6,3,3,3,0,0,3,0,3,3,0,3}, 14);
IndexedFaceSet297.setTexCoord(&TextureCoordinate299);

Coordinate& Coordinate300 =  Coordinate();
Coordinate300.setPoint(new float[]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532}, 18);
IndexedFaceSet297.setCoord(&Coordinate300);

Shape294.setGeometry(&IndexedFaceSet297);

Transform293.addChild(&Shape294);

Transform260.addChild(&Transform293);

Transform259.addChild(&Transform260);

Transform& Transform301 =  Transform();
Transform& Transform302 =  Transform();
Transform302.setDEF(CString("himmel_4"));
Transform302.setTranslation(new float[]{0,60,-2000});
Transform& Transform303 =  Transform();
Transform303.setTranslation(new float[]{0,-100,250});
Transform& Transform304 =  Transform();
Transform& Transform305 =  Transform();
Transform305.setDEF(CString("h01"));
Transform305.setTranslation(new float[]{0,100,-250});
Shape& Shape306 =  Shape();
Appearance& Appearance307 =  Appearance();
ImageTexture& ImageTexture308 =  ImageTexture();
ImageTexture308.setUSE(CString("_13"));
Appearance307.addChild(&ImageTexture308);

Shape306.addChild(&Appearance307);

IndexedFaceSet& IndexedFaceSet309 =  IndexedFaceSet();
IndexedFaceSet309.setSolid(False);
IndexedFaceSet309.setCreaseAngle(0.5);
IndexedFaceSet309.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate310 =  TextureCoordinate();
TextureCoordinate310.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet309.setTexCoord(&TextureCoordinate310);

Coordinate& Coordinate311 =  Coordinate();
Coordinate311.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet309.setCoord(&Coordinate311);

Shape306.setGeometry(&IndexedFaceSet309);

Transform305.addChild(&Shape306);

Transform304.addChild(&Transform305);

Transform& Transform312 =  Transform();
Transform312.setTranslation(new float[]{0,100,-250});
Shape& Shape313 =  Shape();
Appearance& Appearance314 =  Appearance();
ImageTexture& ImageTexture315 =  ImageTexture();
ImageTexture315.setUSE(CString("_13"));
Appearance314.addChild(&ImageTexture315);

Shape313.addChild(&Appearance314);

IndexedFaceSet& IndexedFaceSet316 =  IndexedFaceSet();
IndexedFaceSet316.setSolid(False);
IndexedFaceSet316.setCreaseAngle(0.5);
IndexedFaceSet316.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate317 =  TextureCoordinate();
TextureCoordinate317.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet316.setTexCoord(&TextureCoordinate317);

Coordinate& Coordinate318 =  Coordinate();
Coordinate318.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet316.setCoord(&Coordinate318);

Shape313.setGeometry(&IndexedFaceSet316);

Transform312.addChild(&Shape313);

Transform304.addChild(&Transform312);

Transform303.addChild(&Transform304);

Transform& Transform319 =  Transform();
Transform& Transform320 =  Transform();
Transform320.setTranslation(new float[]{0,100,-250});
Shape& Shape321 =  Shape();
Appearance& Appearance322 =  Appearance();
ImageTexture& ImageTexture323 =  ImageTexture();
ImageTexture323.setUSE(CString("_13"));
Appearance322.addChild(&ImageTexture323);

Shape321.addChild(&Appearance322);

IndexedFaceSet& IndexedFaceSet324 =  IndexedFaceSet();
IndexedFaceSet324.setSolid(False);
IndexedFaceSet324.setCreaseAngle(0.5);
IndexedFaceSet324.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate325 =  TextureCoordinate();
TextureCoordinate325.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet324.setTexCoord(&TextureCoordinate325);

Coordinate& Coordinate326 =  Coordinate();
Coordinate326.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet324.setCoord(&Coordinate326);

Shape321.setGeometry(&IndexedFaceSet324);

Transform320.addChild(&Shape321);

Transform319.addChild(&Transform320);

Transform& Transform327 =  Transform();
Transform327.setTranslation(new float[]{0,100,-250});
Shape& Shape328 =  Shape();
Appearance& Appearance329 =  Appearance();
ImageTexture& ImageTexture330 =  ImageTexture();
ImageTexture330.setUSE(CString("_13"));
Appearance329.addChild(&ImageTexture330);

Shape328.addChild(&Appearance329);

IndexedFaceSet& IndexedFaceSet331 =  IndexedFaceSet();
IndexedFaceSet331.setSolid(False);
IndexedFaceSet331.setCreaseAngle(0.5);
IndexedFaceSet331.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet331.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate332 =  TextureCoordinate();
TextureCoordinate332.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet331.setTexCoord(&TextureCoordinate332);

Coordinate& Coordinate333 =  Coordinate();
Coordinate333.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet331.setCoord(&Coordinate333);

Shape328.setGeometry(&IndexedFaceSet331);

Transform327.addChild(&Shape328);

Transform319.addChild(&Transform327);

Transform303.addChild(&Transform319);

Transform302.addChild(&Transform303);

Transform301.addChild(&Transform302);

Transform& Transform334 =  Transform();
Transform334.setTranslation(new float[]{0,-40,-1750});
Shape& Shape335 =  Shape();
Appearance& Appearance336 =  Appearance();
PixelTexture& PixelTexture337 =  PixelTexture();
PixelTexture337.setUSE(CString("_14"));
Appearance336.addChild(&PixelTexture337);

Shape335.addChild(&Appearance336);

IndexedFaceSet& IndexedFaceSet338 =  IndexedFaceSet();
IndexedFaceSet338.setSolid(False);
IndexedFaceSet338.setCreaseAngle(0.5);
IndexedFaceSet338.setColorIndex(new int[]{0,1,5,-1,4,2,5,-1,2,0,5,-1,3,4,5,-1}, 16);
IndexedFaceSet338.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,0,2,-1,6,3,5,-1}, 16);
IndexedFaceSet338.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,0,2,-1,5,3,2,-1}, 16);
CColor& Color339 =  CColor();
Color339.setColor(new float[]{0.8,0.545717,0.483674,0.251337,0.223325,0.0404992,0.8,0.630835,0.476646,0.127236,0.245989,0.0540638,0.0959711,0.465241,0.0190278,0,0,0}, 18);
IndexedFaceSet338.setColor(&Color339);

TextureCoordinate& TextureCoordinate340 =  TextureCoordinate();
TextureCoordinate340.setPoint(new float[]{6,0,6,3,3,3,0,0,3,0,3,3,0,3}, 14);
IndexedFaceSet338.setTexCoord(&TextureCoordinate340);

Coordinate& Coordinate341 =  Coordinate();
Coordinate341.setPoint(new float[]{150,0,0.468384,150,0,-249.532,0,0,-249.532,-150,0,0.468384,0,0,0.468384,-150,0,-249.532}, 18);
IndexedFaceSet338.setCoord(&Coordinate341);

Shape335.setGeometry(&IndexedFaceSet338);

Transform334.addChild(&Shape335);

Transform301.addChild(&Transform334);

Transform259.addChild(&Transform301);

Transform175.addChild(&Transform259);

Transform174.addChild(&Transform175);

Transform& Transform342 =  Transform();
Transform& Transform343 =  Transform();
Transform& Transform344 =  Transform();
Transform& Transform345 =  Transform();
Transform345.setDEF(CString("himmel_5"));
Transform345.setTranslation(new float[]{0,60,-250});
Transform& Transform346 =  Transform();
Transform& Transform347 =  Transform();
Transform& Transform348 =  Transform();
Shape& Shape349 =  Shape();
Appearance& Appearance350 =  Appearance();
ImageTexture& ImageTexture351 =  ImageTexture();
ImageTexture351.setUSE(CString("_13"));
Appearance350.addChild(&ImageTexture351);

Shape349.addChild(&Appearance350);

IndexedFaceSet& IndexedFaceSet352 =  IndexedFaceSet();
IndexedFaceSet352.setSolid(False);
IndexedFaceSet352.setCreaseAngle(0.5);
IndexedFaceSet352.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate353 =  TextureCoordinate();
TextureCoordinate353.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet352.setTexCoord(&TextureCoordinate353);

Coordinate& Coordinate354 =  Coordinate();
Coordinate354.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet352.setCoord(&Coordinate354);

Shape349.setGeometry(&IndexedFaceSet352);

Transform348.addChild(&Shape349);

Transform347.addChild(&Transform348);

Transform& Transform355 =  Transform();
Shape& Shape356 =  Shape();
Appearance& Appearance357 =  Appearance();
ImageTexture& ImageTexture358 =  ImageTexture();
ImageTexture358.setUSE(CString("_13"));
Appearance357.addChild(&ImageTexture358);

Shape356.addChild(&Appearance357);

IndexedFaceSet& IndexedFaceSet359 =  IndexedFaceSet();
IndexedFaceSet359.setSolid(False);
IndexedFaceSet359.setCreaseAngle(0.5);
IndexedFaceSet359.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate360 =  TextureCoordinate();
TextureCoordinate360.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet359.setTexCoord(&TextureCoordinate360);

Coordinate& Coordinate361 =  Coordinate();
Coordinate361.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet359.setCoord(&Coordinate361);

Shape356.setGeometry(&IndexedFaceSet359);

Transform355.addChild(&Shape356);

Transform347.addChild(&Transform355);

Transform346.addChild(&Transform347);

Transform& Transform362 =  Transform();
Transform& Transform363 =  Transform();
Shape& Shape364 =  Shape();
Appearance& Appearance365 =  Appearance();
ImageTexture& ImageTexture366 =  ImageTexture();
ImageTexture366.setUSE(CString("_13"));
Appearance365.addChild(&ImageTexture366);

Shape364.addChild(&Appearance365);

IndexedFaceSet& IndexedFaceSet367 =  IndexedFaceSet();
IndexedFaceSet367.setSolid(False);
IndexedFaceSet367.setCreaseAngle(0.5);
IndexedFaceSet367.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate368 =  TextureCoordinate();
TextureCoordinate368.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet367.setTexCoord(&TextureCoordinate368);

Coordinate& Coordinate369 =  Coordinate();
Coordinate369.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet367.setCoord(&Coordinate369);

Shape364.setGeometry(&IndexedFaceSet367);

Transform363.addChild(&Shape364);

Transform362.addChild(&Transform363);

Transform& Transform370 =  Transform();
Shape& Shape371 =  Shape();
Appearance& Appearance372 =  Appearance();
ImageTexture& ImageTexture373 =  ImageTexture();
ImageTexture373.setUSE(CString("_13"));
Appearance372.addChild(&ImageTexture373);

Shape371.addChild(&Appearance372);

IndexedFaceSet& IndexedFaceSet374 =  IndexedFaceSet();
IndexedFaceSet374.setSolid(False);
IndexedFaceSet374.setCreaseAngle(0.5);
IndexedFaceSet374.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet374.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate375 =  TextureCoordinate();
TextureCoordinate375.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet374.setTexCoord(&TextureCoordinate375);

Coordinate& Coordinate376 =  Coordinate();
Coordinate376.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet374.setCoord(&Coordinate376);

Shape371.setGeometry(&IndexedFaceSet374);

Transform370.addChild(&Shape371);

Transform362.addChild(&Transform370);

Transform346.addChild(&Transform362);

Transform345.addChild(&Transform346);

Transform344.addChild(&Transform345);

Transform& Transform377 =  Transform();
Transform377.setTranslation(new float[]{0,-40,-250});
Shape& Shape378 =  Shape();
Appearance& Appearance379 =  Appearance();
PixelTexture& PixelTexture380 =  PixelTexture();
PixelTexture380.setUSE(CString("_14"));
Appearance379.addChild(&PixelTexture380);

Shape378.addChild(&Appearance379);

IndexedFaceSet& IndexedFaceSet381 =  IndexedFaceSet();
IndexedFaceSet381.setSolid(False);
IndexedFaceSet381.setCreaseAngle(0.5);
IndexedFaceSet381.setColorIndex(new int[]{2,1,0,-1,1,3,0,-1,3,4,0,-1,4,2,0,-1}, 16);
IndexedFaceSet381.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1}, 16);
IndexedFaceSet381.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1}, 16);
CColor& Color382 =  CColor();
Color382.setColor(new float[]{0.8,0.630835,0.476646,0,0.787679,0.8,0.274599,0.583913,0.8,0.00197954,0.613313,0.8,0,0.582209,1}, 15);
IndexedFaceSet381.setColor(&Color382);

TextureCoordinate& TextureCoordinate383 =  TextureCoordinate();
TextureCoordinate383.setPoint(new float[]{6,0,6,3,3,3,0,3,0,0,3,3,3,0}, 14);
IndexedFaceSet381.setTexCoord(&TextureCoordinate383);

Coordinate& Coordinate384 =  Coordinate();
Coordinate384.setPoint(new float[]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250}, 18);
IndexedFaceSet381.setCoord(&Coordinate384);

Shape378.setGeometry(&IndexedFaceSet381);

Transform377.addChild(&Shape378);

Transform344.addChild(&Transform377);

Transform343.addChild(&Transform344);

Transform& Transform385 =  Transform();
Transform& Transform386 =  Transform();
Transform386.setDEF(CString("himmel_6"));
Transform386.setTranslation(new float[]{0,60,-500});
Transform& Transform387 =  Transform();
Transform387.setTranslation(new float[]{0,-100,250});
Transform& Transform388 =  Transform();
Transform& Transform389 =  Transform();
Transform389.setTranslation(new float[]{0,100,-250});
Shape& Shape390 =  Shape();
Appearance& Appearance391 =  Appearance();
ImageTexture& ImageTexture392 =  ImageTexture();
ImageTexture392.setUSE(CString("_13"));
Appearance391.addChild(&ImageTexture392);

Shape390.addChild(&Appearance391);

IndexedFaceSet& IndexedFaceSet393 =  IndexedFaceSet();
IndexedFaceSet393.setSolid(False);
IndexedFaceSet393.setCreaseAngle(0.5);
IndexedFaceSet393.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate394 =  TextureCoordinate();
TextureCoordinate394.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet393.setTexCoord(&TextureCoordinate394);

Coordinate& Coordinate395 =  Coordinate();
Coordinate395.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet393.setCoord(&Coordinate395);

Shape390.setGeometry(&IndexedFaceSet393);

Transform389.addChild(&Shape390);

Transform388.addChild(&Transform389);

Transform& Transform396 =  Transform();
Transform396.setTranslation(new float[]{0,100,-250});
Shape& Shape397 =  Shape();
Appearance& Appearance398 =  Appearance();
ImageTexture& ImageTexture399 =  ImageTexture();
ImageTexture399.setUSE(CString("_13"));
Appearance398.addChild(&ImageTexture399);

Shape397.addChild(&Appearance398);

IndexedFaceSet& IndexedFaceSet400 =  IndexedFaceSet();
IndexedFaceSet400.setSolid(False);
IndexedFaceSet400.setCreaseAngle(0.5);
IndexedFaceSet400.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate401 =  TextureCoordinate();
TextureCoordinate401.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet400.setTexCoord(&TextureCoordinate401);

Coordinate& Coordinate402 =  Coordinate();
Coordinate402.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet400.setCoord(&Coordinate402);

Shape397.setGeometry(&IndexedFaceSet400);

Transform396.addChild(&Shape397);

Transform388.addChild(&Transform396);

Transform387.addChild(&Transform388);

Transform& Transform403 =  Transform();
Transform& Transform404 =  Transform();
Transform404.setTranslation(new float[]{0,100,-250});
Shape& Shape405 =  Shape();
Appearance& Appearance406 =  Appearance();
ImageTexture& ImageTexture407 =  ImageTexture();
ImageTexture407.setUSE(CString("_13"));
Appearance406.addChild(&ImageTexture407);

Shape405.addChild(&Appearance406);

IndexedFaceSet& IndexedFaceSet408 =  IndexedFaceSet();
IndexedFaceSet408.setSolid(False);
IndexedFaceSet408.setCreaseAngle(0.5);
IndexedFaceSet408.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate409 =  TextureCoordinate();
TextureCoordinate409.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet408.setTexCoord(&TextureCoordinate409);

Coordinate& Coordinate410 =  Coordinate();
Coordinate410.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet408.setCoord(&Coordinate410);

Shape405.setGeometry(&IndexedFaceSet408);

Transform404.addChild(&Shape405);

Transform403.addChild(&Transform404);

Transform& Transform411 =  Transform();
Transform411.setTranslation(new float[]{0,100,-250});
Shape& Shape412 =  Shape();
Appearance& Appearance413 =  Appearance();
ImageTexture& ImageTexture414 =  ImageTexture();
ImageTexture414.setUSE(CString("_13"));
Appearance413.addChild(&ImageTexture414);

Shape412.addChild(&Appearance413);

IndexedFaceSet& IndexedFaceSet415 =  IndexedFaceSet();
IndexedFaceSet415.setSolid(False);
IndexedFaceSet415.setCreaseAngle(0.5);
IndexedFaceSet415.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet415.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate416 =  TextureCoordinate();
TextureCoordinate416.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet415.setTexCoord(&TextureCoordinate416);

Coordinate& Coordinate417 =  Coordinate();
Coordinate417.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet415.setCoord(&Coordinate417);

Shape412.setGeometry(&IndexedFaceSet415);

Transform411.addChild(&Shape412);

Transform403.addChild(&Transform411);

Transform387.addChild(&Transform403);

Transform386.addChild(&Transform387);

Transform385.addChild(&Transform386);

Transform& Transform418 =  Transform();
Transform418.setTranslation(new float[]{0,-40,-500});
Shape& Shape419 =  Shape();
Appearance& Appearance420 =  Appearance();
PixelTexture& PixelTexture421 =  PixelTexture();
PixelTexture421.setUSE(CString("_14"));
Appearance420.addChild(&PixelTexture421);

Shape419.addChild(&Appearance420);

IndexedFaceSet& IndexedFaceSet422 =  IndexedFaceSet();
IndexedFaceSet422.setSolid(False);
IndexedFaceSet422.setCreaseAngle(0.5);
IndexedFaceSet422.setColorIndex(new int[]{2,1,0,-1,0,2,0,-1,2,0,0,-1,0,2,0,-1}, 16);
IndexedFaceSet422.setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,4,6,5,-1,6,0,2,-1}, 16);
IndexedFaceSet422.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,2,-1,4,5,2,-1,5,0,2,-1}, 16);
CColor& Color423 =  CColor();
Color423.setColor(new float[]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0,0.787679,0.8}, 9);
IndexedFaceSet422.setColor(&Color423);

TextureCoordinate& TextureCoordinate424 =  TextureCoordinate();
TextureCoordinate424.setPoint(new float[]{6,0,6,3,3,3,0,3,0,0,3,3,3,0}, 14);
IndexedFaceSet422.setTexCoord(&TextureCoordinate424);

Coordinate& Coordinate425 =  Coordinate();
Coordinate425.setPoint(new float[]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250}, 18);
IndexedFaceSet422.setCoord(&Coordinate425);

Shape419.setGeometry(&IndexedFaceSet422);

Transform418.addChild(&Shape419);

Transform385.addChild(&Transform418);

Transform343.addChild(&Transform385);

Transform342.addChild(&Transform343);

Transform& Transform426 =  Transform();
Transform& Transform427 =  Transform();
Transform& Transform428 =  Transform();
Transform428.setDEF(CString("himmel_7"));
Transform428.setTranslation(new float[]{0,60,-750});
Transform& Transform429 =  Transform();
Transform& Transform430 =  Transform();
Transform& Transform431 =  Transform();
Shape& Shape432 =  Shape();
Appearance& Appearance433 =  Appearance();
ImageTexture& ImageTexture434 =  ImageTexture();
ImageTexture434.setUSE(CString("_13"));
Appearance433.addChild(&ImageTexture434);

Shape432.addChild(&Appearance433);

IndexedFaceSet& IndexedFaceSet435 =  IndexedFaceSet();
IndexedFaceSet435.setSolid(False);
IndexedFaceSet435.setCreaseAngle(0.5);
IndexedFaceSet435.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate436 =  TextureCoordinate();
TextureCoordinate436.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet435.setTexCoord(&TextureCoordinate436);

Coordinate& Coordinate437 =  Coordinate();
Coordinate437.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet435.setCoord(&Coordinate437);

Shape432.setGeometry(&IndexedFaceSet435);

Transform431.addChild(&Shape432);

Transform430.addChild(&Transform431);

Transform& Transform438 =  Transform();
Shape& Shape439 =  Shape();
Appearance& Appearance440 =  Appearance();
ImageTexture& ImageTexture441 =  ImageTexture();
ImageTexture441.setUSE(CString("_13"));
Appearance440.addChild(&ImageTexture441);

Shape439.addChild(&Appearance440);

IndexedFaceSet& IndexedFaceSet442 =  IndexedFaceSet();
IndexedFaceSet442.setSolid(False);
IndexedFaceSet442.setCreaseAngle(0.5);
IndexedFaceSet442.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate443 =  TextureCoordinate();
TextureCoordinate443.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet442.setTexCoord(&TextureCoordinate443);

Coordinate& Coordinate444 =  Coordinate();
Coordinate444.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet442.setCoord(&Coordinate444);

Shape439.setGeometry(&IndexedFaceSet442);

Transform438.addChild(&Shape439);

Transform430.addChild(&Transform438);

Transform429.addChild(&Transform430);

Transform& Transform445 =  Transform();
Transform& Transform446 =  Transform();
Shape& Shape447 =  Shape();
Appearance& Appearance448 =  Appearance();
ImageTexture& ImageTexture449 =  ImageTexture();
ImageTexture449.setUSE(CString("_13"));
Appearance448.addChild(&ImageTexture449);

Shape447.addChild(&Appearance448);

IndexedFaceSet& IndexedFaceSet450 =  IndexedFaceSet();
IndexedFaceSet450.setSolid(False);
IndexedFaceSet450.setCreaseAngle(0.5);
IndexedFaceSet450.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate451 =  TextureCoordinate();
TextureCoordinate451.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet450.setTexCoord(&TextureCoordinate451);

Coordinate& Coordinate452 =  Coordinate();
Coordinate452.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet450.setCoord(&Coordinate452);

Shape447.setGeometry(&IndexedFaceSet450);

Transform446.addChild(&Shape447);

Transform445.addChild(&Transform446);

Transform& Transform453 =  Transform();
Shape& Shape454 =  Shape();
Appearance& Appearance455 =  Appearance();
ImageTexture& ImageTexture456 =  ImageTexture();
ImageTexture456.setUSE(CString("_13"));
Appearance455.addChild(&ImageTexture456);

Shape454.addChild(&Appearance455);

IndexedFaceSet& IndexedFaceSet457 =  IndexedFaceSet();
IndexedFaceSet457.setSolid(False);
IndexedFaceSet457.setCreaseAngle(0.5);
IndexedFaceSet457.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet457.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate458 =  TextureCoordinate();
TextureCoordinate458.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet457.setTexCoord(&TextureCoordinate458);

Coordinate& Coordinate459 =  Coordinate();
Coordinate459.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet457.setCoord(&Coordinate459);

Shape454.setGeometry(&IndexedFaceSet457);

Transform453.addChild(&Shape454);

Transform445.addChild(&Transform453);

Transform429.addChild(&Transform445);

Transform428.addChild(&Transform429);

Transform427.addChild(&Transform428);

Transform& Transform460 =  Transform();
Transform460.setTranslation(new float[]{0,-40,-750});
Shape& Shape461 =  Shape();
Appearance& Appearance462 =  Appearance();
PixelTexture& PixelTexture463 =  PixelTexture();
PixelTexture463.setUSE(CString("_14"));
Appearance462.addChild(&PixelTexture463);

Shape461.addChild(&Appearance462);

IndexedFaceSet& IndexedFaceSet464 =  IndexedFaceSet();
IndexedFaceSet464.setSolid(False);
IndexedFaceSet464.setCreaseAngle(0.5);
IndexedFaceSet464.setColorIndex(new int[]{1,1,0,-1,0,0,1,0,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1,0,2,0,-1,0,0,2,-1,0,0,2,-1,0,0,2,-1}, 41);
IndexedFaceSet464.setTexCoordIndex(new int32_t[]{0,1,2,-1,7,6,0,2,-1,10,6,11,-1,6,8,11,-1,13,3,12,-1,3,9,12,-1,4,11,9,-1,4,10,11,-1,8,5,12,-1,5,13,12,-1}, 41);
IndexedFaceSet464.setCoordIndex(new int32_t[]{0,1,2,-1,6,5,0,2,-1,8,5,9,-1,5,6,9,-1,10,3,9,-1,3,7,9,-1,4,9,7,-1,4,8,9,-1,6,2,9,-1,2,10,9,-1}, 41);
CColor& Color465 =  CColor();
Color465.setColor(new float[]{0.8,0.630835,0.476646,0.449581,0.8,0.375564,0.283422,0.223491,0.168865}, 9);
IndexedFaceSet464.setColor(&Color465);

TextureCoordinate& TextureCoordinate466 =  TextureCoordinate();
TextureCoordinate466.setPoint(new float[]{6,0,6,3,3,3,0,3,0,0,3,3,3,0,3,1.12402,3,1.12402,0,1.12402,2.09395,0,2.09395,1.12402,2.09395,1.12402,2.09395,3}, 28);
IndexedFaceSet464.setTexCoord(&TextureCoordinate466);

Coordinate& Coordinate467 =  Coordinate();
Coordinate467.setPoint(new float[]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250,0,0,156.332,-150,0,156.332,-45.3025,0,250,-45.3025,0,156.332,-45.3025,0,0}, 33);
IndexedFaceSet464.setCoord(&Coordinate467);

Shape461.setGeometry(&IndexedFaceSet464);

Transform460.addChild(&Shape461);

Transform427.addChild(&Transform460);

Transform426.addChild(&Transform427);

Transform& Transform468 =  Transform();
Transform& Transform469 =  Transform();
Transform469.setDEF(CString("himmel"));
Transform469.setTranslation(new float[]{0,60,-1000});
Transform& Transform470 =  Transform();
Transform470.setTranslation(new float[]{0,-100,250});
Transform& Transform471 =  Transform();
Transform& Transform472 =  Transform();
Transform472.setTranslation(new float[]{0,100,-250});
Shape& Shape473 =  Shape();
Appearance& Appearance474 =  Appearance();
ImageTexture& ImageTexture475 =  ImageTexture();
ImageTexture475.setUSE(CString("_13"));
Appearance474.addChild(&ImageTexture475);

Shape473.addChild(&Appearance474);

IndexedFaceSet& IndexedFaceSet476 =  IndexedFaceSet();
IndexedFaceSet476.setSolid(False);
IndexedFaceSet476.setCreaseAngle(0.5);
IndexedFaceSet476.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate477 =  TextureCoordinate();
TextureCoordinate477.setPoint(new float[]{2,0.5,2,1,1,1,1,0.5}, 8);
IndexedFaceSet476.setTexCoord(&TextureCoordinate477);

Coordinate& Coordinate478 =  Coordinate();
Coordinate478.setPoint(new float[]{250,0,125,250,0,0,0,0,0,0,0,125}, 12);
IndexedFaceSet476.setCoord(&Coordinate478);

Shape473.setGeometry(&IndexedFaceSet476);

Transform472.addChild(&Shape473);

Transform471.addChild(&Transform472);

Transform& Transform479 =  Transform();
Transform479.setTranslation(new float[]{0,100,-250});
Shape& Shape480 =  Shape();
Appearance& Appearance481 =  Appearance();
ImageTexture& ImageTexture482 =  ImageTexture();
ImageTexture482.setUSE(CString("_13"));
Appearance481.addChild(&ImageTexture482);

Shape480.addChild(&Appearance481);

IndexedFaceSet& IndexedFaceSet483 =  IndexedFaceSet();
IndexedFaceSet483.setSolid(False);
IndexedFaceSet483.setCreaseAngle(0.5);
IndexedFaceSet483.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate484 =  TextureCoordinate();
TextureCoordinate484.setPoint(new float[]{1,1,0,0.5,1,0.5,0,1}, 8);
IndexedFaceSet483.setTexCoord(&TextureCoordinate484);

Coordinate& Coordinate485 =  Coordinate();
Coordinate485.setPoint(new float[]{0,0,0,-250,0,125,0,0,125,-250,0,0}, 12);
IndexedFaceSet483.setCoord(&Coordinate485);

Shape480.setGeometry(&IndexedFaceSet483);

Transform479.addChild(&Shape480);

Transform471.addChild(&Transform479);

Transform470.addChild(&Transform471);

Transform& Transform486 =  Transform();
Transform& Transform487 =  Transform();
Transform487.setTranslation(new float[]{0,100,-250});
Shape& Shape488 =  Shape();
Appearance& Appearance489 =  Appearance();
ImageTexture& ImageTexture490 =  ImageTexture();
ImageTexture490.setUSE(CString("_13"));
Appearance489.addChild(&ImageTexture490);

Shape488.addChild(&Appearance489);

IndexedFaceSet& IndexedFaceSet491 =  IndexedFaceSet();
IndexedFaceSet491.setSolid(False);
IndexedFaceSet491.setCreaseAngle(0.5);
IndexedFaceSet491.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1}, 8);
TextureCoordinate& TextureCoordinate492 =  TextureCoordinate();
TextureCoordinate492.setPoint(new float[]{2,0,1,0.5,1,0,2,0.5}, 8);
IndexedFaceSet491.setTexCoord(&TextureCoordinate492);

Coordinate& Coordinate493 =  Coordinate();
Coordinate493.setPoint(new float[]{250,0,250,0,0,125,0,0,250,250,0,125}, 12);
IndexedFaceSet491.setCoord(&Coordinate493);

Shape488.setGeometry(&IndexedFaceSet491);

Transform487.addChild(&Shape488);

Transform486.addChild(&Transform487);

Transform& Transform494 =  Transform();
Transform494.setTranslation(new float[]{0,100,-250});
Shape& Shape495 =  Shape();
Appearance& Appearance496 =  Appearance();
ImageTexture& ImageTexture497 =  ImageTexture();
ImageTexture497.setUSE(CString("_13"));
Appearance496.addChild(&ImageTexture497);

Shape495.addChild(&Appearance496);

IndexedFaceSet& IndexedFaceSet498 =  IndexedFaceSet();
IndexedFaceSet498.setSolid(False);
IndexedFaceSet498.setCreaseAngle(0.5);
IndexedFaceSet498.setTexCoordIndex(new int32_t[]{5,1,4,-1,1,3,4,-1}, 8);
IndexedFaceSet498.setCoordIndex(new int32_t[]{3,0,2,-1,0,1,2,-1}, 8);
TextureCoordinate& TextureCoordinate499 =  TextureCoordinate();
TextureCoordinate499.setPoint(new float[]{0.499937,0.999989,0,0,0.499937,0,1,0,1,0.5,0,0.5}, 12);
IndexedFaceSet498.setTexCoord(&TextureCoordinate499);

Coordinate& Coordinate500 =  Coordinate();
Coordinate500.setPoint(new float[]{-250,0,250,0,0,250,0,0,125,-250,0,125}, 12);
IndexedFaceSet498.setCoord(&Coordinate500);

Shape495.setGeometry(&IndexedFaceSet498);

Transform494.addChild(&Shape495);

Transform486.addChild(&Transform494);

Transform470.addChild(&Transform486);

Transform469.addChild(&Transform470);

Transform468.addChild(&Transform469);

Transform& Transform501 =  Transform();
Transform501.setTranslation(new float[]{0,-40,-1000});
Shape& Shape502 =  Shape();
Appearance& Appearance503 =  Appearance();
PixelTexture& PixelTexture504 =  PixelTexture();
PixelTexture504.setUSE(CString("_14"));
Appearance503.addChild(&PixelTexture504);

Shape502.addChild(&Appearance503);

IndexedFaceSet& IndexedFaceSet505 =  IndexedFaceSet();
IndexedFaceSet505.setSolid(False);
IndexedFaceSet505.setCreaseAngle(0.5);
IndexedFaceSet505.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,2,3,-1,2,3,3,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,4,4,4,-1,0,3,1,-1,0,3,3,-1,1,3,2,-1,3,3,2,-1}, 48);
IndexedFaceSet505.setTexCoordIndex(new int32_t[]{3,4,5,-1,4,6,5,-1,6,0,24,-1,0,16,24,-1,22,2,25,-1,2,6,25,-1,25,15,23,-1,15,19,23,-1,2,18,1,-1,2,22,18,-1,1,18,0,-1,18,16,0,-1}, 48);
IndexedFaceSet505.setCoordIndex(new int32_t[]{3,4,2,-1,4,5,2,-1,5,0,9,-1,0,6,9,-1,8,2,9,-1,2,5,9,-1,9,6,8,-1,6,7,8,-1,2,7,1,-1,2,8,7,-1,1,7,0,-1,7,6,0,-1}, 48);
CColor& Color506 =  CColor();
Color506.setColor(new float[]{0.8,0.630835,0.476646,0.652899,0.8,0.382087,0.449581,0.8,0.375564,0.315508,0.313602,0.196817,0.171123,0.170089,0.106748}, 15);
IndexedFaceSet505.setColor(&Color506);

TextureCoordinate& TextureCoordinate507 =  TextureCoordinate();
TextureCoordinate507.setPoint(new float[]{6,0,6,3,3,3,0,3,0,0,3,3,3,0,3,1.84077,3,1.84077,6,1.80065,4.59945,0,4.41984,3,3,1.5,3,1.5,6,1.5,5.11272,1.5,5.11272,1.5,5.11272,3,5.11272,2.10634,5.11272,2.10634,3,2.10634,3,2.10634,4.09682,2.10634,4.09682,2.10634,4.09682,1.5,4.09682,1.5}, 52);
IndexedFaceSet505.setTexCoord(&TextureCoordinate507);

Coordinate& Coordinate508 =  Coordinate();
Coordinate508.setPoint(new float[]{150,0,250,150,0,0,0,0,0,-150,0,0,-150,0,250,0,0,250,105.636,0,125,105.636,0,74.4718,54.8409,0,74.4717,54.8409,0,125}, 30);
IndexedFaceSet505.setCoord(&Coordinate508);

Shape502.setGeometry(&IndexedFaceSet505);

Transform501.addChild(&Shape502);

Transform468.addChild(&Transform501);

Transform426.addChild(&Transform468);

Transform342.addChild(&Transform426);

Transform174.addChild(&Transform342);

Scene8.addChild(&Transform174);

Transform& Transform509 =  Transform();
Transform509.setDEF(CString("BONUS"));
Transform& Transform510 =  Transform();
Transform510.setDEF(CString("B2-RED"));
Transform& Transform511 =  Transform();
Transform511.setDEF(CString("bonus-red1_1"));
Transform511.setTranslation(new float[]{46,20,-770});
Transform& Transform512 =  Transform();
Transform512.setDEF(CString("objLOD_1"));
Transform& Transform513 =  Transform();
Transform513.setDEF(CString("LOD"));
LOD& LOD514 =  LOD();
LOD514.setRange(new float[]{200}, 1);
Transform& Transform515 =  Transform();
Transform515.setDEF(CString("objOn_1"));
Transform& Transform516 =  Transform();
Transform516.setDEF(CString("stern_1"));
Transform516.setScale(new float[]{1,1,0.999999});
Transform516.setScaleOrientation(new float[]{0,1,0,0.018374});
Shape& Shape517 =  Shape();
Appearance& Appearance518 =  Appearance();
Material& Material519 =  Material();
Material519.setAmbientIntensity(0.16172);
Material519.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material519.setSpecularColor(new float[]{1,0.81213,0.292798});
Material519.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material519.setShininess(0.106383);
Appearance518.addChild(&Material519);

Shape517.addChild(&Appearance518);

IndexedFaceSet& IndexedFaceSet520 =  IndexedFaceSet();
IndexedFaceSet520.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1}, 214);
Coordinate& Coordinate521 =  Coordinate();
Coordinate521.setPoint(new float[]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965}, 150);
IndexedFaceSet520.setCoord(&Coordinate521);

Shape517.setGeometry(&IndexedFaceSet520);

Transform516.addChild(&Shape517);

Transform515.addChild(&Transform516);

LOD514.addChildren(&Transform515);

Transform& Transform522 =  Transform();
Transform522.setDEF(CString("objOff_1"));
LOD514.addChildren(&Transform522);

Transform513.addChild(&LOD514);

Transform512.addChild(&Transform513);

Transform511.addChild(&Transform512);

Transform& Transform523 =  Transform();
Transform523.setDEF(CString("proxyLOD_1"));
LOD& LOD524 =  LOD();
LOD524.setRange(new float[]{15}, 1);
Transform& Transform525 =  Transform();
Transform525.setDEF(CString("proxyOn_1"));
ProximitySensor& ProximitySensor526 =  ProximitySensor();
ProximitySensor526.setDEF(CString("_15"));
ProximitySensor526.setSize(new float[]{12,12,12});
Transform525.addChild(&ProximitySensor526);

LOD524.addChildren(&Transform525);

Transform& Transform527 =  Transform();
Transform527.setDEF(CString("proxyOff_1"));
LOD524.addChildren(&Transform527);

Transform523.addChild(&LOD524);

Transform511.addChild(&Transform523);

Transform510.addChild(&Transform511);

Transform& Transform528 =  Transform();
Transform528.setDEF(CString("bonus-red2_1"));
Transform528.setTranslation(new float[]{80,-30,-900});
Transform& Transform529 =  Transform();
Transform529.setDEF(CString("objLOD_2"));
LOD& LOD530 =  LOD();
LOD530.setRange(new float[]{200}, 1);
Transform& Transform531 =  Transform();
Transform531.setDEF(CString("objOn_2"));
Transform& Transform532 =  Transform();
Transform532.setDEF(CString("_16"));
Transform& Transform533 =  Transform();
Transform533.setDEF(CString("stern_2"));
Transform533.setScale(new float[]{1,1,0.999999});
Transform533.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform533.setCenter(new float[]{0,0,0.0135851});
Shape& Shape534 =  Shape();
Appearance& Appearance535 =  Appearance();
Material& Material536 =  Material();
Material536.setAmbientIntensity(0.16172);
Material536.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material536.setSpecularColor(new float[]{1,0.81213,0.292798});
Material536.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material536.setShininess(0.106383);
Appearance535.addChild(&Material536);

Shape534.addChild(&Appearance535);

IndexedFaceSet& IndexedFaceSet537 =  IndexedFaceSet();
IndexedFaceSet537.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1}, 214);
Coordinate& Coordinate538 =  Coordinate();
Coordinate538.setPoint(new float[]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965}, 150);
IndexedFaceSet537.setCoord(&Coordinate538);

Shape534.setGeometry(&IndexedFaceSet537);

Transform533.addChild(&Shape534);

Transform532.addChild(&Transform533);

Transform531.addChild(&Transform532);

LOD530.addChildren(&Transform531);

Transform& Transform539 =  Transform();
Transform539.setDEF(CString("objOff_2"));
LOD530.addChildren(&Transform539);

Transform529.addChild(&LOD530);

Transform528.addChild(&Transform529);

Transform& Transform540 =  Transform();
Transform540.setDEF(CString("proxyLOD_2"));
LOD& LOD541 =  LOD();
LOD541.setRange(new float[]{15}, 1);
Transform& Transform542 =  Transform();
ProximitySensor& ProximitySensor543 =  ProximitySensor();
ProximitySensor543.setDEF(CString("_17"));
ProximitySensor543.setSize(new float[]{12,12,12});
Transform542.addChild(&ProximitySensor543);

LOD541.addChildren(&Transform542);

Transform& Transform544 =  Transform();
Transform544.setDEF(CString("proxyOff_2"));
LOD541.addChildren(&Transform544);

Transform540.addChild(&LOD541);

Transform528.addChild(&Transform540);

Transform510.addChild(&Transform528);

Transform509.addChild(&Transform510);

Transform& Transform545 =  Transform();
Transform545.setDEF(CString("B1-BLUE"));
Transform& Transform546 =  Transform();
Transform546.setDEF(CString("bonus-blue5_1"));
Transform546.setTranslation(new float[]{0,25,-400});
Transform& Transform547 =  Transform();
Transform547.setDEF(CString("objLOD_3"));
Transform& Transform548 =  Transform();
Transform548.setDEF(CString("LOD-kreuz_1"));
LOD& LOD549 =  LOD();
LOD549.setRange(new float[]{200}, 1);
Transform& Transform550 =  Transform();
Transform550.setDEF(CString("objOn_3"));
Transform& Transform551 =  Transform();
Transform551.setDEF(CString("_18"));
Transform& Transform552 =  Transform();
Transform552.setDEF(CString("bonusObj_1"));
Transform552.setScale(new float[]{1.00004,1.00004,1.00007});
Transform552.setScaleOrientation(new float[]{0,1,0,0.018296});
Shape& Shape553 =  Shape();
Appearance& Appearance554 =  Appearance();
Material& Material555 =  Material();
Material555.setAmbientIntensity(0.16172);
Material555.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material555.setSpecularColor(new float[]{1,0.81213,0.292798});
Material555.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material555.setShininess(0.106383);
Appearance554.addChild(&Material555);

Shape553.addChild(&Appearance554);

IndexedFaceSet& IndexedFaceSet556 =  IndexedFaceSet();
IndexedFaceSet556.setSolid(False);
IndexedFaceSet556.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate557 =  Coordinate();
Coordinate557.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet556.setCoord(&Coordinate557);

Shape553.setGeometry(&IndexedFaceSet556);

Transform552.addChild(&Shape553);

Transform551.addChild(&Transform552);

Transform550.addChild(&Transform551);

LOD549.addChildren(&Transform550);

Transform& Transform558 =  Transform();
Transform558.setDEF(CString("objOff_3"));
LOD549.addChildren(&Transform558);

Transform548.addChild(&LOD549);

Transform547.addChild(&Transform548);

Transform546.addChild(&Transform547);

Transform& Transform559 =  Transform();
Transform559.setDEF(CString("proxyLOD_3"));
LOD& LOD560 =  LOD();
LOD560.setRange(new float[]{15}, 1);
Transform& Transform561 =  Transform();
Transform561.setDEF(CString("proxyOn_2"));
ProximitySensor& ProximitySensor562 =  ProximitySensor();
ProximitySensor562.setDEF(CString("_19"));
ProximitySensor562.setSize(new float[]{12,12,12});
Transform561.addChild(&ProximitySensor562);

LOD560.addChildren(&Transform561);

Transform& Transform563 =  Transform();
Transform563.setDEF(CString("proxyOff_3"));
LOD560.addChildren(&Transform563);

Transform559.addChild(&LOD560);

Transform546.addChild(&Transform559);

Transform545.addChild(&Transform546);

Transform& Transform564 =  Transform();
Transform564.setDEF(CString("bonus-blue4_1"));
Transform564.setTranslation(new float[]{0,20,-350});
Transform& Transform565 =  Transform();
Transform565.setDEF(CString("objLOD_4"));
Transform& Transform566 =  Transform();
Transform566.setDEF(CString("LOD-kreuz_2"));
LOD& LOD567 =  LOD();
LOD567.setRange(new float[]{200}, 1);
Transform& Transform568 =  Transform();
Transform568.setDEF(CString("objOn_4"));
Transform& Transform569 =  Transform();
Transform569.setDEF(CString("_20"));
Transform& Transform570 =  Transform();
Transform570.setDEF(CString("bonusObj_2"));
Transform570.setScale(new float[]{1.00003,1.00004,1.00007});
Transform570.setScaleOrientation(new float[]{0,1,0,0.018374});
Shape& Shape571 =  Shape();
Appearance& Appearance572 =  Appearance();
Material& Material573 =  Material();
Material573.setAmbientIntensity(0.16172);
Material573.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material573.setSpecularColor(new float[]{1,0.81213,0.292798});
Material573.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material573.setShininess(0.106383);
Appearance572.addChild(&Material573);

Shape571.addChild(&Appearance572);

IndexedFaceSet& IndexedFaceSet574 =  IndexedFaceSet();
IndexedFaceSet574.setSolid(False);
IndexedFaceSet574.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate575 =  Coordinate();
Coordinate575.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet574.setCoord(&Coordinate575);

Shape571.setGeometry(&IndexedFaceSet574);

Transform570.addChild(&Shape571);

Transform569.addChild(&Transform570);

Transform568.addChild(&Transform569);

LOD567.addChildren(&Transform568);

Transform& Transform576 =  Transform();
Transform576.setDEF(CString("objOff_4"));
LOD567.addChildren(&Transform576);

Transform566.addChild(&LOD567);

Transform565.addChild(&Transform566);

Transform564.addChild(&Transform565);

Transform& Transform577 =  Transform();
Transform577.setDEF(CString("proxyLOD_4"));
LOD& LOD578 =  LOD();
LOD578.setRange(new float[]{15}, 1);
Transform& Transform579 =  Transform();
Transform579.setDEF(CString("proxyOn_3"));
ProximitySensor& ProximitySensor580 =  ProximitySensor();
ProximitySensor580.setDEF(CString("_21"));
ProximitySensor580.setSize(new float[]{12,12,12});
Transform579.addChild(&ProximitySensor580);

LOD578.addChildren(&Transform579);

Transform& Transform581 =  Transform();
Transform581.setDEF(CString("proxyOff_4"));
LOD578.addChildren(&Transform581);

Transform577.addChild(&LOD578);

Transform564.addChild(&Transform577);

Transform545.addChild(&Transform564);

Transform& Transform582 =  Transform();
Transform582.setDEF(CString("bonus-blue3_1"));
Transform582.setTranslation(new float[]{0,5,-300});
Transform& Transform583 =  Transform();
Transform583.setDEF(CString("objLOD_5"));
Transform& Transform584 =  Transform();
Transform584.setDEF(CString("LOD-kreuz_3"));
LOD& LOD585 =  LOD();
LOD585.setRange(new float[]{200}, 1);
Transform& Transform586 =  Transform();
Transform586.setDEF(CString("objOn_5"));
Transform& Transform587 =  Transform();
Transform587.setDEF(CString("_22"));
Transform& Transform588 =  Transform();
Transform588.setDEF(CString("bonusObj_3"));
Transform588.setScale(new float[]{1.00004,1.00004,1.00007});
Transform588.setScaleOrientation(new float[]{0,1,0,0.018361});
Shape& Shape589 =  Shape();
Appearance& Appearance590 =  Appearance();
Material& Material591 =  Material();
Material591.setAmbientIntensity(0.16172);
Material591.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material591.setSpecularColor(new float[]{1,0.81213,0.292798});
Material591.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material591.setShininess(0.106383);
Appearance590.addChild(&Material591);

Shape589.addChild(&Appearance590);

IndexedFaceSet& IndexedFaceSet592 =  IndexedFaceSet();
IndexedFaceSet592.setSolid(False);
IndexedFaceSet592.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate593 =  Coordinate();
Coordinate593.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet592.setCoord(&Coordinate593);

Shape589.setGeometry(&IndexedFaceSet592);

Transform588.addChild(&Shape589);

Transform587.addChild(&Transform588);

Transform586.addChild(&Transform587);

LOD585.addChildren(&Transform586);

Transform& Transform594 =  Transform();
Transform594.setDEF(CString("objOff_5"));
LOD585.addChildren(&Transform594);

Transform584.addChild(&LOD585);

Transform583.addChild(&Transform584);

Transform582.addChild(&Transform583);

Transform& Transform595 =  Transform();
Transform595.setDEF(CString("proxyLOD_5"));
LOD& LOD596 =  LOD();
LOD596.setRange(new float[]{15}, 1);
Transform& Transform597 =  Transform();
Transform597.setDEF(CString("proxyOn_4"));
ProximitySensor& ProximitySensor598 =  ProximitySensor();
ProximitySensor598.setDEF(CString("_23"));
ProximitySensor598.setSize(new float[]{12,12,12});
Transform597.addChild(&ProximitySensor598);

LOD596.addChildren(&Transform597);

Transform& Transform599 =  Transform();
Transform599.setDEF(CString("proxyOff_5"));
LOD596.addChildren(&Transform599);

Transform595.addChild(&LOD596);

Transform582.addChild(&Transform595);

Transform545.addChild(&Transform582);

Transform& Transform600 =  Transform();
Transform600.setDEF(CString("bonus-blue2_1"));
Transform600.setTranslation(new float[]{0,-5,-250});
Transform& Transform601 =  Transform();
Transform601.setDEF(CString("objLOD_6"));
Transform& Transform602 =  Transform();
Transform602.setDEF(CString("LOD-kreuz_4"));
LOD& LOD603 =  LOD();
LOD603.setRange(new float[]{200}, 1);
Transform& Transform604 =  Transform();
Transform604.setDEF(CString("objOn_6"));
Transform& Transform605 =  Transform();
Transform605.setDEF(CString("_24"));
Transform& Transform606 =  Transform();
Transform606.setDEF(CString("bonusObj_4"));
Transform606.setScale(new float[]{1.00004,1.00004,1.00007});
Transform606.setScaleOrientation(new float[]{0,1,0,0.018361});
Shape& Shape607 =  Shape();
Appearance& Appearance608 =  Appearance();
Material& Material609 =  Material();
Material609.setAmbientIntensity(0.16172);
Material609.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material609.setSpecularColor(new float[]{1,0.81213,0.292798});
Material609.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material609.setShininess(0.106383);
Appearance608.addChild(&Material609);

Shape607.addChild(&Appearance608);

IndexedFaceSet& IndexedFaceSet610 =  IndexedFaceSet();
IndexedFaceSet610.setSolid(False);
IndexedFaceSet610.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate611 =  Coordinate();
Coordinate611.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet610.setCoord(&Coordinate611);

Shape607.setGeometry(&IndexedFaceSet610);

Transform606.addChild(&Shape607);

Transform605.addChild(&Transform606);

Transform604.addChild(&Transform605);

LOD603.addChildren(&Transform604);

Transform& Transform612 =  Transform();
Transform612.setDEF(CString("objOff_6"));
LOD603.addChildren(&Transform612);

Transform602.addChild(&LOD603);

Transform601.addChild(&Transform602);

Transform600.addChild(&Transform601);

Transform& Transform613 =  Transform();
Transform613.setDEF(CString("proxyLOD_6"));
LOD& LOD614 =  LOD();
LOD614.setRange(new float[]{15}, 1);
Transform& Transform615 =  Transform();
Transform615.setDEF(CString("proxyOn_5"));
ProximitySensor& ProximitySensor616 =  ProximitySensor();
ProximitySensor616.setDEF(CString("_25"));
ProximitySensor616.setSize(new float[]{12,12,12});
Transform615.addChild(&ProximitySensor616);

LOD614.addChildren(&Transform615);

Transform& Transform617 =  Transform();
Transform617.setDEF(CString("proxyOff_6"));
LOD614.addChildren(&Transform617);

Transform613.addChild(&LOD614);

Transform600.addChild(&Transform613);

Transform545.addChild(&Transform600);

Transform& Transform618 =  Transform();
Transform618.setDEF(CString("bonus-blue1_1"));
Transform618.setTranslation(new float[]{0,-10,-200});
Transform& Transform619 =  Transform();
Transform619.setDEF(CString("objLOD_7"));
Transform& Transform620 =  Transform();
Transform620.setDEF(CString("LOD-kreuz"));
LOD& LOD621 =  LOD();
LOD621.setRange(new float[]{200}, 1);
Transform& Transform622 =  Transform();
Transform622.setDEF(CString("objOn_7"));
Transform& Transform623 =  Transform();
Transform623.setDEF(CString("_26"));
Transform& Transform624 =  Transform();
Transform624.setDEF(CString("bonusObj_5"));
Transform624.setTranslation(new float[]{-4.40357e-9,0,0});
Transform624.setScale(new float[]{1,1,0.999999});
Transform624.setScaleOrientation(new float[]{0,1,0,0.018374});
Shape& Shape625 =  Shape();
Appearance& Appearance626 =  Appearance();
Material& Material627 =  Material();
Material627.setAmbientIntensity(0.16172);
Material627.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material627.setSpecularColor(new float[]{1,0.81213,0.292798});
Material627.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material627.setShininess(0.106383);
Appearance626.addChild(&Material627);

Shape625.addChild(&Appearance626);

IndexedFaceSet& IndexedFaceSet628 =  IndexedFaceSet();
IndexedFaceSet628.setSolid(False);
IndexedFaceSet628.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate629 =  Coordinate();
Coordinate629.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet628.setCoord(&Coordinate629);

Shape625.setGeometry(&IndexedFaceSet628);

Transform624.addChild(&Shape625);

Transform623.addChild(&Transform624);

Transform622.addChild(&Transform623);

LOD621.addChildren(&Transform622);

Transform& Transform630 =  Transform();
Transform630.setDEF(CString("objOff_7"));
LOD621.addChildren(&Transform630);

Transform620.addChild(&LOD621);

Transform619.addChild(&Transform620);

Transform618.addChild(&Transform619);

Transform& Transform631 =  Transform();
Transform631.setDEF(CString("proxyLOD_7"));
LOD& LOD632 =  LOD();
LOD632.setRange(new float[]{15}, 1);
Transform& Transform633 =  Transform();
Transform633.setDEF(CString("proxyOn_6"));
ProximitySensor& ProximitySensor634 =  ProximitySensor();
ProximitySensor634.setDEF(CString("_27"));
ProximitySensor634.setSize(new float[]{12,12,12});
Transform633.addChild(&ProximitySensor634);

LOD632.addChildren(&Transform633);

Transform& Transform635 =  Transform();
Transform635.setDEF(CString("proxyOff_7"));
LOD632.addChildren(&Transform635);

Transform631.addChild(&LOD632);

Transform618.addChild(&Transform631);

Transform545.addChild(&Transform618);

Transform509.addChild(&Transform545);

Transform& Transform636 =  Transform();
Transform636.setDEF(CString("B3-BLUE_GOLD"));
Transform& Transform637 =  Transform();
Transform637.setDEF(CString("bonus-blue1_2"));
Transform637.setTranslation(new float[]{-85,0,-725});
Transform& Transform638 =  Transform();
Transform638.setDEF(CString("objLOD_8"));
LOD& LOD639 =  LOD();
LOD639.setRange(new float[]{200}, 1);
Transform& Transform640 =  Transform();
Transform640.setDEF(CString("objOn_8"));
Transform& Transform641 =  Transform();
Transform641.setDEF(CString("_28"));
Transform& Transform642 =  Transform();
Transform642.setDEF(CString("bonusObj_6"));
Transform642.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform642.setScale(new float[]{1,1,0.999999});
Transform642.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform642.setCenter(new float[]{0,0,0.0135851});
Shape& Shape643 =  Shape();
Appearance& Appearance644 =  Appearance();
Material& Material645 =  Material();
Material645.setAmbientIntensity(0.16172);
Material645.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material645.setSpecularColor(new float[]{1,0.81213,0.292798});
Material645.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material645.setShininess(0.106383);
Appearance644.addChild(&Material645);

Shape643.addChild(&Appearance644);

IndexedFaceSet& IndexedFaceSet646 =  IndexedFaceSet();
IndexedFaceSet646.setSolid(False);
IndexedFaceSet646.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate647 =  Coordinate();
Coordinate647.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet646.setCoord(&Coordinate647);

Shape643.setGeometry(&IndexedFaceSet646);

Transform642.addChild(&Shape643);

Transform641.addChild(&Transform642);

Transform640.addChild(&Transform641);

LOD639.addChildren(&Transform640);

Transform& Transform648 =  Transform();
Transform648.setDEF(CString("objOff_8"));
LOD639.addChildren(&Transform648);

Transform638.addChild(&LOD639);

Transform637.addChild(&Transform638);

Transform& Transform649 =  Transform();
Transform649.setDEF(CString("proxyLOD_8"));
LOD& LOD650 =  LOD();
LOD650.setRange(new float[]{15}, 1);
Transform& Transform651 =  Transform();
Transform651.setDEF(CString("proxyOn_7"));
ProximitySensor& ProximitySensor652 =  ProximitySensor();
ProximitySensor652.setDEF(CString("_29"));
ProximitySensor652.setSize(new float[]{12,12,12});
Transform651.addChild(&ProximitySensor652);

LOD650.addChildren(&Transform651);

Transform& Transform653 =  Transform();
Transform653.setDEF(CString("proxyOff_8"));
LOD650.addChildren(&Transform653);

Transform649.addChild(&LOD650);

Transform637.addChild(&Transform649);

Transform636.addChild(&Transform637);

Transform& Transform654 =  Transform();
Transform654.setDEF(CString("bonus-blue2_2"));
Transform654.setTranslation(new float[]{-50,-10,-590});
Transform& Transform655 =  Transform();
Transform655.setDEF(CString("objLOD_9"));
LOD& LOD656 =  LOD();
LOD656.setRange(new float[]{200}, 1);
Transform& Transform657 =  Transform();
Transform657.setDEF(CString("objOn_9"));
Transform& Transform658 =  Transform();
Transform658.setDEF(CString("_30"));
Transform& Transform659 =  Transform();
Transform659.setDEF(CString("bonusObj_7"));
Transform659.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform659.setScale(new float[]{1,1,0.999999});
Transform659.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform659.setCenter(new float[]{0,0,0.0135851});
Shape& Shape660 =  Shape();
Appearance& Appearance661 =  Appearance();
Material& Material662 =  Material();
Material662.setAmbientIntensity(0.16172);
Material662.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material662.setSpecularColor(new float[]{1,0.81213,0.292798});
Material662.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material662.setShininess(0.106383);
Appearance661.addChild(&Material662);

Shape660.addChild(&Appearance661);

IndexedFaceSet& IndexedFaceSet663 =  IndexedFaceSet();
IndexedFaceSet663.setSolid(False);
IndexedFaceSet663.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate664 =  Coordinate();
Coordinate664.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet663.setCoord(&Coordinate664);

Shape660.setGeometry(&IndexedFaceSet663);

Transform659.addChild(&Shape660);

Transform658.addChild(&Transform659);

Transform657.addChild(&Transform658);

LOD656.addChildren(&Transform657);

Transform& Transform665 =  Transform();
Transform665.setDEF(CString("objOff_9"));
LOD656.addChildren(&Transform665);

Transform655.addChild(&LOD656);

Transform654.addChild(&Transform655);

Transform& Transform666 =  Transform();
Transform666.setDEF(CString("proxyLOD_9"));
LOD& LOD667 =  LOD();
LOD667.setRange(new float[]{15}, 1);
Transform& Transform668 =  Transform();
Transform668.setDEF(CString("proxyOn_8"));
ProximitySensor& ProximitySensor669 =  ProximitySensor();
ProximitySensor669.setDEF(CString("_31"));
ProximitySensor669.setSize(new float[]{12,12,12});
Transform668.addChild(&ProximitySensor669);

LOD667.addChildren(&Transform668);

Transform& Transform670 =  Transform();
Transform670.setDEF(CString("proxyOff_9"));
LOD667.addChildren(&Transform670);

Transform666.addChild(&LOD667);

Transform654.addChild(&Transform666);

Transform636.addChild(&Transform654);

Transform& Transform671 =  Transform();
Transform671.setDEF(CString("bonus-gold1_1"));
Transform671.setTranslation(new float[]{-50,-30,-625});
Transform& Transform672 =  Transform();
Transform672.setDEF(CString("objLOD_10"));
LOD& LOD673 =  LOD();
LOD673.setRange(new float[]{200}, 1);
Transform& Transform674 =  Transform();
Transform674.setDEF(CString("objOn_10"));
Transform& Transform675 =  Transform();
Transform675.setDEF(CString("_32"));
Transform& Transform676 =  Transform();
Transform676.setDEF(CString("bnObj03_1"));
Transform676.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform676.setScale(new float[]{1,1,0.999999});
Transform676.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform676.setCenter(new float[]{0,0,0.0135851});
Shape& Shape677 =  Shape();
Appearance& Appearance678 =  Appearance();
Material& Material679 =  Material();
Material679.setAmbientIntensity(0.0498057);
Material679.setDiffuseColor(new float[]{1,0.68781,0});
Material679.setSpecularColor(new float[]{1,1,1});
Material679.setEmissiveColor(new float[]{0.393617,0.0569849,0});
Material679.setShininess(0.202128);
Appearance678.addChild(&Material679);

Shape677.addChild(&Appearance678);

IndexedFaceSet& IndexedFaceSet680 =  IndexedFaceSet();
IndexedFaceSet680.setConvex(False);
IndexedFaceSet680.setCreaseAngle(1.45281);
IndexedFaceSet680.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1}, 240);
Coordinate& Coordinate681 =  Coordinate();
Coordinate681.setPoint(new float[]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652}, 99);
IndexedFaceSet680.setCoord(&Coordinate681);

Shape677.setGeometry(&IndexedFaceSet680);

Transform676.addChild(&Shape677);

Transform675.addChild(&Transform676);

Transform674.addChild(&Transform675);

LOD673.addChildren(&Transform674);

Transform& Transform682 =  Transform();
Transform682.setDEF(CString("objOff_10"));
LOD673.addChildren(&Transform682);

Transform672.addChild(&LOD673);

Transform671.addChild(&Transform672);

Transform& Transform683 =  Transform();
Transform683.setDEF(CString("proxyLOD_10"));
LOD& LOD684 =  LOD();
LOD684.setRange(new float[]{15}, 1);
Transform& Transform685 =  Transform();
Transform685.setDEF(CString("proxyOn_9"));
ProximitySensor& ProximitySensor686 =  ProximitySensor();
ProximitySensor686.setDEF(CString("_33"));
ProximitySensor686.setSize(new float[]{12,12,12});
Transform685.addChild(&ProximitySensor686);

LOD684.addChildren(&Transform685);

Transform& Transform687 =  Transform();
Transform687.setDEF(CString("proxyOff_10"));
LOD684.addChildren(&Transform687);

Transform683.addChild(&LOD684);

Transform671.addChild(&Transform683);

Transform636.addChild(&Transform671);

Transform509.addChild(&Transform636);

Transform& Transform688 =  Transform();
Transform688.setDEF(CString("B4-BLUE_GOLD"));
Transform& Transform689 =  Transform();
Transform689.setDEF(CString("bonus-gold1_2"));
Transform689.setTranslation(new float[]{80,0,-930});
LOD& LOD690 =  LOD();
LOD690.setRange(new float[]{200}, 1);
Transform& Transform691 =  Transform();
Transform691.setDEF(CString("objOn_11"));
Transform& Transform692 =  Transform();
Transform692.setDEF(CString("_34"));
Transform& Transform693 =  Transform();
Transform693.setDEF(CString("bnObj03_2"));
Transform693.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform693.setScale(new float[]{1,1,0.999999});
Transform693.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform693.setCenter(new float[]{0,0,0.0135851});
Shape& Shape694 =  Shape();
Appearance& Appearance695 =  Appearance();
Material& Material696 =  Material();
Material696.setAmbientIntensity(0.0498057);
Material696.setDiffuseColor(new float[]{1,0.68781,0});
Material696.setSpecularColor(new float[]{1,1,1});
Material696.setEmissiveColor(new float[]{0.393617,0.0569849,0});
Material696.setShininess(0.202128);
Appearance695.addChild(&Material696);

Shape694.addChild(&Appearance695);

IndexedFaceSet& IndexedFaceSet697 =  IndexedFaceSet();
IndexedFaceSet697.setConvex(False);
IndexedFaceSet697.setCreaseAngle(1.45281);
IndexedFaceSet697.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1}, 240);
Coordinate& Coordinate698 =  Coordinate();
Coordinate698.setPoint(new float[]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652}, 99);
IndexedFaceSet697.setCoord(&Coordinate698);

Shape694.setGeometry(&IndexedFaceSet697);

Transform693.addChild(&Shape694);

Transform692.addChild(&Transform693);

Transform691.addChild(&Transform692);

LOD690.addChildren(&Transform691);

Transform& Transform699 =  Transform();
Transform699.setDEF(CString("objOff_11"));
LOD690.addChildren(&Transform699);

Transform689.addChild(&LOD690);

LOD& LOD700 =  LOD();
LOD700.setRange(new float[]{15}, 1);
Transform& Transform701 =  Transform();
Transform701.setDEF(CString("proxyOn_10"));
ProximitySensor& ProximitySensor702 =  ProximitySensor();
ProximitySensor702.setDEF(CString("_35"));
ProximitySensor702.setSize(new float[]{12,12,12});
Transform701.addChild(&ProximitySensor702);

LOD700.addChildren(&Transform701);

Transform& Transform703 =  Transform();
Transform703.setDEF(CString("proxyOff_11"));
LOD700.addChildren(&Transform703);

Transform689.addChild(&LOD700);

Transform688.addChild(&Transform689);

Transform& Transform704 =  Transform();
Transform704.setDEF(CString("bonus-blue1_3"));
Transform704.setTranslation(new float[]{-5,-5,-760});
LOD& LOD705 =  LOD();
LOD705.setRange(new float[]{200}, 1);
Transform& Transform706 =  Transform();
Transform706.setDEF(CString("objOn_12"));
Transform& Transform707 =  Transform();
Transform707.setDEF(CString("_36"));
Transform& Transform708 =  Transform();
Transform708.setDEF(CString("bonusObj_8"));
Transform708.setScale(new float[]{1,1,0.999999});
Transform708.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform708.setCenter(new float[]{0,0,0.0135851});
Shape& Shape709 =  Shape();
Appearance& Appearance710 =  Appearance();
Material& Material711 =  Material();
Material711.setAmbientIntensity(0.16172);
Material711.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material711.setSpecularColor(new float[]{1,0.81213,0.292798});
Material711.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material711.setShininess(0.106383);
Appearance710.addChild(&Material711);

Shape709.addChild(&Appearance710);

IndexedFaceSet& IndexedFaceSet712 =  IndexedFaceSet();
IndexedFaceSet712.setSolid(False);
IndexedFaceSet712.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate713 =  Coordinate();
Coordinate713.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet712.setCoord(&Coordinate713);

Shape709.setGeometry(&IndexedFaceSet712);

Transform708.addChild(&Shape709);

Transform707.addChild(&Transform708);

Transform706.addChild(&Transform707);

LOD705.addChildren(&Transform706);

Transform& Transform714 =  Transform();
Transform714.setDEF(CString("objOff_12"));
LOD705.addChildren(&Transform714);

Transform704.addChild(&LOD705);

LOD& LOD715 =  LOD();
LOD715.setRange(new float[]{15}, 1);
Transform& Transform716 =  Transform();
Transform716.setDEF(CString("proxyOn_11"));
ProximitySensor& ProximitySensor717 =  ProximitySensor();
ProximitySensor717.setDEF(CString("_37"));
ProximitySensor717.setSize(new float[]{12,12,12});
Transform716.addChild(&ProximitySensor717);

LOD715.addChildren(&Transform716);

Transform& Transform718 =  Transform();
Transform718.setDEF(CString("proxyOff_12"));
LOD715.addChildren(&Transform718);

Transform704.addChild(&LOD715);

Transform688.addChild(&Transform704);

Transform& Transform719 =  Transform();
Transform719.setDEF(CString("bonus-red2_2"));
Transform719.setTranslation(new float[]{0,-30,-800});
LOD& LOD720 =  LOD();
LOD720.setRange(new float[]{200}, 1);
Transform& Transform721 =  Transform();
Transform721.setDEF(CString("objOn_13"));
Transform& Transform722 =  Transform();
Transform722.setDEF(CString("_38"));
Transform& Transform723 =  Transform();
Transform723.setDEF(CString("stern_3"));
Transform723.setScale(new float[]{1,1,0.999999});
Transform723.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform723.setCenter(new float[]{0,0,0.0135851});
Shape& Shape724 =  Shape();
Appearance& Appearance725 =  Appearance();
Material& Material726 =  Material();
Material726.setAmbientIntensity(0.16172);
Material726.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material726.setSpecularColor(new float[]{1,0.81213,0.292798});
Material726.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material726.setShininess(0.106383);
Appearance725.addChild(&Material726);

Shape724.addChild(&Appearance725);

IndexedFaceSet& IndexedFaceSet727 =  IndexedFaceSet();
IndexedFaceSet727.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1}, 214);
Coordinate& Coordinate728 =  Coordinate();
Coordinate728.setPoint(new float[]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965}, 150);
IndexedFaceSet727.setCoord(&Coordinate728);

Shape724.setGeometry(&IndexedFaceSet727);

Transform723.addChild(&Shape724);

Transform722.addChild(&Transform723);

Transform721.addChild(&Transform722);

LOD720.addChildren(&Transform721);

Transform& Transform729 =  Transform();
Transform729.setDEF(CString("objOff_13"));
LOD720.addChildren(&Transform729);

Transform719.addChild(&LOD720);

LOD& LOD730 =  LOD();
LOD730.setRange(new float[]{15}, 1);
Transform& Transform731 =  Transform();
Transform731.setDEF(CString("proxyOn_12"));
ProximitySensor& ProximitySensor732 =  ProximitySensor();
ProximitySensor732.setDEF(CString("_39"));
ProximitySensor732.setSize(new float[]{12,12,12});
Transform731.addChild(&ProximitySensor732);

LOD730.addChildren(&Transform731);

Transform& Transform733 =  Transform();
Transform733.setDEF(CString("proxyOff_13"));
LOD730.addChildren(&Transform733);

Transform719.addChild(&LOD730);

Transform688.addChild(&Transform719);

Transform& Transform734 =  Transform();
Transform734.setDEF(CString("bonus-blue3_2"));
Transform734.setTranslation(new float[]{45,-15,-880});
LOD& LOD735 =  LOD();
LOD735.setRange(new float[]{200}, 1);
Transform& Transform736 =  Transform();
Transform736.setDEF(CString("objOn_14"));
Transform& Transform737 =  Transform();
Transform737.setDEF(CString("_40"));
Transform& Transform738 =  Transform();
Transform738.setDEF(CString("bonusObj_9"));
Transform738.setScale(new float[]{1,1,0.999999});
Transform738.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform738.setCenter(new float[]{0,0,0.0135851});
Shape& Shape739 =  Shape();
Appearance& Appearance740 =  Appearance();
Material& Material741 =  Material();
Material741.setAmbientIntensity(0.16172);
Material741.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material741.setSpecularColor(new float[]{1,0.81213,0.292798});
Material741.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material741.setShininess(0.106383);
Appearance740.addChild(&Material741);

Shape739.addChild(&Appearance740);

IndexedFaceSet& IndexedFaceSet742 =  IndexedFaceSet();
IndexedFaceSet742.setSolid(False);
IndexedFaceSet742.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate743 =  Coordinate();
Coordinate743.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet742.setCoord(&Coordinate743);

Shape739.setGeometry(&IndexedFaceSet742);

Transform738.addChild(&Shape739);

Transform737.addChild(&Transform738);

Transform736.addChild(&Transform737);

LOD735.addChildren(&Transform736);

Transform& Transform744 =  Transform();
Transform744.setDEF(CString("objOff_14"));
LOD735.addChildren(&Transform744);

Transform734.addChild(&LOD735);

LOD& LOD745 =  LOD();
LOD745.setRange(new float[]{15}, 1);
Transform& Transform746 =  Transform();
Transform746.setDEF(CString("proxyOn_13"));
ProximitySensor& ProximitySensor747 =  ProximitySensor();
ProximitySensor747.setDEF(CString("_41"));
ProximitySensor747.setSize(new float[]{12,12,12});
Transform746.addChild(&ProximitySensor747);

LOD745.addChildren(&Transform746);

Transform& Transform748 =  Transform();
Transform748.setDEF(CString("proxyOff_14"));
LOD745.addChildren(&Transform748);

Transform734.addChild(&LOD745);

Transform688.addChild(&Transform734);

Transform& Transform749 =  Transform();
Transform749.setDEF(CString("bonus-blue4_2"));
Transform749.setTranslation(new float[]{80,-30,-950});
LOD& LOD750 =  LOD();
LOD750.setRange(new float[]{200}, 1);
Transform& Transform751 =  Transform();
Transform751.setDEF(CString("objOn_15"));
Transform& Transform752 =  Transform();
Transform752.setDEF(CString("_42"));
Transform& Transform753 =  Transform();
Transform753.setDEF(CString("bonusObj_10"));
Transform753.setScale(new float[]{1,1,0.999999});
Transform753.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform753.setCenter(new float[]{0,0,0.0135851});
Shape& Shape754 =  Shape();
Appearance& Appearance755 =  Appearance();
Material& Material756 =  Material();
Material756.setAmbientIntensity(0.16172);
Material756.setDiffuseColor(new float[]{0,0.551321,0.989362});
Material756.setSpecularColor(new float[]{0.757435,1,0.939636});
Material756.setEmissiveColor(new float[]{0,0.00242705,0.265957});
Material756.setShininess(0.106383);
Appearance755.addChild(&Material756);

Shape754.addChild(&Appearance755);

IndexedFaceSet& IndexedFaceSet757 =  IndexedFaceSet();
IndexedFaceSet757.setSolid(False);
IndexedFaceSet757.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate758 =  Coordinate();
Coordinate758.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet757.setCoord(&Coordinate758);

Shape754.setGeometry(&IndexedFaceSet757);

Transform753.addChild(&Shape754);

Transform752.addChild(&Transform753);

Transform751.addChild(&Transform752);

LOD750.addChildren(&Transform751);

Transform& Transform759 =  Transform();
Transform759.setDEF(CString("objOff_15"));
LOD750.addChildren(&Transform759);

Transform749.addChild(&LOD750);

LOD& LOD760 =  LOD();
LOD760.setRange(new float[]{15}, 1);
Transform& Transform761 =  Transform();
Transform761.setDEF(CString("proxyOn_14"));
ProximitySensor& ProximitySensor762 =  ProximitySensor();
ProximitySensor762.setDEF(CString("_43"));
ProximitySensor762.setSize(new float[]{12,12,12});
Transform761.addChild(&ProximitySensor762);

LOD760.addChildren(&Transform761);

Transform& Transform763 =  Transform();
Transform763.setDEF(CString("proxyOff_15"));
LOD760.addChildren(&Transform763);

Transform749.addChild(&LOD760);

Transform688.addChild(&Transform749);

Transform& Transform764 =  Transform();
Transform764.setDEF(CString("bonus-blue5_2"));
Transform764.setTranslation(new float[]{20,0,-1000});
LOD& LOD765 =  LOD();
LOD765.setRange(new float[]{200}, 1);
Transform& Transform766 =  Transform();
Transform766.setDEF(CString("objOn_16"));
Transform& Transform767 =  Transform();
Transform767.setDEF(CString("bonusObj_11"));
Transform767.setScale(new float[]{1,1,0.999999});
Transform767.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform767.setCenter(new float[]{0,0,0.0135851});
Shape& Shape768 =  Shape();
Appearance& Appearance769 =  Appearance();
Material& Material770 =  Material();
Material770.setAmbientIntensity(0.16172);
Material770.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material770.setSpecularColor(new float[]{1,0.81213,0.292798});
Material770.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material770.setShininess(0.106383);
Appearance769.addChild(&Material770);

Shape768.addChild(&Appearance769);

IndexedFaceSet& IndexedFaceSet771 =  IndexedFaceSet();
IndexedFaceSet771.setSolid(False);
IndexedFaceSet771.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate772 =  Coordinate();
Coordinate772.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet771.setCoord(&Coordinate772);

Shape768.setGeometry(&IndexedFaceSet771);

Transform767.addChild(&Shape768);

Transform766.addChild(&Transform767);

LOD765.addChildren(&Transform766);

Transform& Transform773 =  Transform();
Transform773.setDEF(CString("objOff_16"));
LOD765.addChildren(&Transform773);

Transform764.addChild(&LOD765);

LOD& LOD774 =  LOD();
LOD774.setRange(new float[]{15}, 1);
Transform& Transform775 =  Transform();
Transform775.setDEF(CString("proxyOn_15"));
ProximitySensor& ProximitySensor776 =  ProximitySensor();
ProximitySensor776.setDEF(CString("_44"));
ProximitySensor776.setSize(new float[]{12,12,12});
Transform775.addChild(&ProximitySensor776);

LOD774.addChildren(&Transform775);

Transform& Transform777 =  Transform();
Transform777.setDEF(CString("proxyOff_16"));
LOD774.addChildren(&Transform777);

Transform764.addChild(&LOD774);

Transform688.addChild(&Transform764);

Transform509.addChild(&Transform688);

Transform& Transform778 =  Transform();
Transform778.setDEF(CString("B5-BLUE_RED"));
Transform& Transform779 =  Transform();
Transform779.setDEF(CString("bonus-blue1"));
Transform779.setTranslation(new float[]{-35,0,-1050});
LOD& LOD780 =  LOD();
LOD780.setRange(new float[]{200}, 1);
Transform& Transform781 =  Transform();
Transform781.setDEF(CString("objOn_17"));
Transform& Transform782 =  Transform();
Transform782.setDEF(CString("_45"));
Transform& Transform783 =  Transform();
Transform783.setDEF(CString("bonusObj_12"));
Transform783.setScale(new float[]{1,1,0.999999});
Transform783.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform783.setCenter(new float[]{0,0,0.0135851});
Shape& Shape784 =  Shape();
Appearance& Appearance785 =  Appearance();
Material& Material786 =  Material();
Material786.setAmbientIntensity(0.16172);
Material786.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material786.setSpecularColor(new float[]{1,0.81213,0.292798});
Material786.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material786.setShininess(0.106383);
Appearance785.addChild(&Material786);

Shape784.addChild(&Appearance785);

IndexedFaceSet& IndexedFaceSet787 =  IndexedFaceSet();
IndexedFaceSet787.setSolid(False);
IndexedFaceSet787.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate788 =  Coordinate();
Coordinate788.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet787.setCoord(&Coordinate788);

Shape784.setGeometry(&IndexedFaceSet787);

Transform783.addChild(&Shape784);

Transform782.addChild(&Transform783);

Transform781.addChild(&Transform782);

LOD780.addChildren(&Transform781);

Transform& Transform789 =  Transform();
Transform789.setDEF(CString("objOff_17"));
LOD780.addChildren(&Transform789);

Transform779.addChild(&LOD780);

LOD& LOD790 =  LOD();
LOD790.setRange(new float[]{15}, 1);
Transform& Transform791 =  Transform();
Transform791.setDEF(CString("proxyOn_16"));
ProximitySensor& ProximitySensor792 =  ProximitySensor();
ProximitySensor792.setDEF(CString("_46"));
ProximitySensor792.setSize(new float[]{12,12,12});
Transform791.addChild(&ProximitySensor792);

LOD790.addChildren(&Transform791);

Transform& Transform793 =  Transform();
Transform793.setDEF(CString("proxyOff_17"));
LOD790.addChildren(&Transform793);

Transform779.addChild(&LOD790);

Transform778.addChild(&Transform779);

Transform& Transform794 =  Transform();
Transform794.setDEF(CString("bonus-blue2"));
Transform794.setTranslation(new float[]{-70,-10,-1100});
LOD& LOD795 =  LOD();
LOD795.setRange(new float[]{200}, 1);
Transform& Transform796 =  Transform();
Transform796.setDEF(CString("objOn_18"));
Transform& Transform797 =  Transform();
Transform797.setDEF(CString("_47"));
Transform& Transform798 =  Transform();
Transform798.setDEF(CString("bonusObj_13"));
Transform798.setScale(new float[]{1,1,0.999999});
Transform798.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform798.setCenter(new float[]{0,0,0.0135851});
Shape& Shape799 =  Shape();
Appearance& Appearance800 =  Appearance();
Material& Material801 =  Material();
Material801.setAmbientIntensity(0.16172);
Material801.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material801.setSpecularColor(new float[]{1,0.81213,0.292798});
Material801.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material801.setShininess(0.106383);
Appearance800.addChild(&Material801);

Shape799.addChild(&Appearance800);

IndexedFaceSet& IndexedFaceSet802 =  IndexedFaceSet();
IndexedFaceSet802.setSolid(False);
IndexedFaceSet802.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate803 =  Coordinate();
Coordinate803.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet802.setCoord(&Coordinate803);

Shape799.setGeometry(&IndexedFaceSet802);

Transform798.addChild(&Shape799);

Transform797.addChild(&Transform798);

Transform796.addChild(&Transform797);

LOD795.addChildren(&Transform796);

Transform& Transform804 =  Transform();
Transform804.setDEF(CString("objOff_18"));
LOD795.addChildren(&Transform804);

Transform794.addChild(&LOD795);

LOD& LOD805 =  LOD();
LOD805.setRange(new float[]{15}, 1);
Transform& Transform806 =  Transform();
Transform806.setDEF(CString("proxyOn_17"));
ProximitySensor& ProximitySensor807 =  ProximitySensor();
ProximitySensor807.setDEF(CString("_48"));
ProximitySensor807.setSize(new float[]{12,12,12});
Transform806.addChild(&ProximitySensor807);

LOD805.addChildren(&Transform806);

Transform& Transform808 =  Transform();
Transform808.setDEF(CString("proxyOff_18"));
LOD805.addChildren(&Transform808);

Transform794.addChild(&LOD805);

Transform778.addChild(&Transform794);

Transform& Transform809 =  Transform();
Transform809.setDEF(CString("bonus-blue3"));
Transform809.setTranslation(new float[]{-15,-20,-1200});
LOD& LOD810 =  LOD();
LOD810.setRange(new float[]{200}, 1);
Transform& Transform811 =  Transform();
Transform811.setDEF(CString("objOn_19"));
Transform& Transform812 =  Transform();
Transform812.setDEF(CString("_49"));
Transform& Transform813 =  Transform();
Transform813.setDEF(CString("bonusObj_14"));
Transform813.setScale(new float[]{1,1,0.999999});
Transform813.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform813.setCenter(new float[]{0,0,0.0135851});
Shape& Shape814 =  Shape();
Appearance& Appearance815 =  Appearance();
Material& Material816 =  Material();
Material816.setAmbientIntensity(0.16172);
Material816.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material816.setSpecularColor(new float[]{1,0.81213,0.292798});
Material816.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material816.setShininess(0.106383);
Appearance815.addChild(&Material816);

Shape814.addChild(&Appearance815);

IndexedFaceSet& IndexedFaceSet817 =  IndexedFaceSet();
IndexedFaceSet817.setSolid(False);
IndexedFaceSet817.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate818 =  Coordinate();
Coordinate818.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet817.setCoord(&Coordinate818);

Shape814.setGeometry(&IndexedFaceSet817);

Transform813.addChild(&Shape814);

Transform812.addChild(&Transform813);

Transform811.addChild(&Transform812);

LOD810.addChildren(&Transform811);

Transform& Transform819 =  Transform();
Transform819.setDEF(CString("objOff_19"));
LOD810.addChildren(&Transform819);

Transform809.addChild(&LOD810);

LOD& LOD820 =  LOD();
LOD820.setRange(new float[]{15}, 1);
Transform& Transform821 =  Transform();
Transform821.setDEF(CString("proxyOn_18"));
ProximitySensor& ProximitySensor822 =  ProximitySensor();
ProximitySensor822.setDEF(CString("_50"));
ProximitySensor822.setSize(new float[]{12,12,12});
Transform821.addChild(&ProximitySensor822);

LOD820.addChildren(&Transform821);

Transform& Transform823 =  Transform();
Transform823.setDEF(CString("proxyOff_19"));
LOD820.addChildren(&Transform823);

Transform809.addChild(&LOD820);

Transform778.addChild(&Transform809);

Transform& Transform824 =  Transform();
Transform824.setDEF(CString("bonus-blue4"));
Transform824.setTranslation(new float[]{-75,-25,-1270});
LOD& LOD825 =  LOD();
LOD825.setRange(new float[]{200}, 1);
Transform& Transform826 =  Transform();
Transform826.setDEF(CString("objOn_20"));
Transform& Transform827 =  Transform();
Transform827.setDEF(CString("_51"));
Transform& Transform828 =  Transform();
Transform828.setDEF(CString("bonusObj"));
Transform828.setScale(new float[]{1,1,0.999999});
Transform828.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform828.setCenter(new float[]{0,0,0.0135851});
Shape& Shape829 =  Shape();
Appearance& Appearance830 =  Appearance();
Material& Material831 =  Material();
Material831.setAmbientIntensity(0.16172);
Material831.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material831.setSpecularColor(new float[]{1,0.81213,0.292798});
Material831.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material831.setShininess(0.106383);
Appearance830.addChild(&Material831);

Shape829.addChild(&Appearance830);

IndexedFaceSet& IndexedFaceSet832 =  IndexedFaceSet();
IndexedFaceSet832.setSolid(False);
IndexedFaceSet832.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate833 =  Coordinate();
Coordinate833.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet832.setCoord(&Coordinate833);

Shape829.setGeometry(&IndexedFaceSet832);

Transform828.addChild(&Shape829);

Transform827.addChild(&Transform828);

Transform826.addChild(&Transform827);

LOD825.addChildren(&Transform826);

Transform& Transform834 =  Transform();
Transform834.setDEF(CString("objOff_20"));
LOD825.addChildren(&Transform834);

Transform824.addChild(&LOD825);

LOD& LOD835 =  LOD();
LOD835.setRange(new float[]{15}, 1);
Transform& Transform836 =  Transform();
Transform836.setDEF(CString("proxyOn_19"));
ProximitySensor& ProximitySensor837 =  ProximitySensor();
ProximitySensor837.setDEF(CString("_52"));
ProximitySensor837.setSize(new float[]{12,12,12});
Transform836.addChild(&ProximitySensor837);

LOD835.addChildren(&Transform836);

Transform& Transform838 =  Transform();
Transform838.setDEF(CString("proxyOff_20"));
LOD835.addChildren(&Transform838);

Transform824.addChild(&LOD835);

Transform778.addChild(&Transform824);

Transform& Transform839 =  Transform();
Transform839.setDEF(CString("bonus-blue5"));
Transform839.setTranslation(new float[]{40,-30,-1320});
LOD& LOD840 =  LOD();
LOD840.setRange(new float[]{200}, 1);
Transform& Transform841 =  Transform();
Transform841.setDEF(CString("objOn_21"));
Transform& Transform842 =  Transform();
Transform842.setDEF(CString("bonusObj_15"));
Transform842.setScale(new float[]{1,1,0.999999});
Transform842.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform842.setCenter(new float[]{0,0,0.0135851});
Shape& Shape843 =  Shape();
Appearance& Appearance844 =  Appearance();
Material& Material845 =  Material();
Material845.setAmbientIntensity(0.16172);
Material845.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material845.setSpecularColor(new float[]{1,0.81213,0.292798});
Material845.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material845.setShininess(0.106383);
Appearance844.addChild(&Material845);

Shape843.addChild(&Appearance844);

IndexedFaceSet& IndexedFaceSet846 =  IndexedFaceSet();
IndexedFaceSet846.setSolid(False);
IndexedFaceSet846.setCoordIndex(new int32_t[]{41,38,37,-1,40,41,39,-1,41,37,39,-1,40,48,41,-1,48,49,41,-1,49,43,41,-1,43,42,41,-1,42,44,41,-1,44,45,41,-1,47,38,41,-1,45,46,41,-1,46,47,41,-1,26,27,28,-1,25,24,28,-1,24,26,28,-1,28,27,29,-1,28,30,31,-1,28,29,30,-1,28,31,32,-1,34,28,33,-1,28,32,33,-1,34,35,28,-1,35,36,28,-1,36,25,28,-1,0,2,3,-1,0,1,2,-1,4,0,3,-1,4,5,0,-1,6,4,7,-1,6,5,4,-1,8,6,9,-1,6,7,9,-1,10,11,9,-1,11,8,9,-1,12,13,15,-1,13,14,15,-1,16,17,15,-1,17,12,15,-1,16,2,17,-1,2,1,17,-1,18,13,19,-1,18,14,13,-1,20,18,21,-1,18,19,21,-1,22,11,23,-1,11,10,23,-1,22,23,21,-1,23,20,21,-1,24,25,5,-1,25,0,5,-1,26,5,6,-1,26,24,5,-1,27,26,8,-1,26,6,8,-1,29,8,11,-1,29,27,8,-1,30,29,22,-1,29,11,22,-1,31,22,21,-1,31,30,22,-1,32,31,19,-1,31,21,19,-1,33,19,13,-1,33,32,19,-1,34,33,12,-1,33,13,12,-1,35,12,17,-1,35,34,12,-1,36,35,1,-1,35,17,1,-1,25,1,0,-1,25,36,1,-1,37,38,2,-1,38,3,2,-1,39,2,16,-1,39,37,2,-1,40,39,15,-1,39,16,15,-1,42,43,23,-1,43,20,23,-1,44,23,10,-1,44,42,23,-1,45,44,9,-1,44,10,9,-1,46,9,7,-1,46,45,9,-1,47,46,4,-1,46,7,4,-1,38,4,3,-1,38,47,4,-1,48,15,14,-1,48,40,15,-1,49,48,18,-1,48,14,18,-1,43,18,20,-1,43,49,18,-1}, 384);
Coordinate& Coordinate847 =  Coordinate();
Coordinate847.setPoint(new float[]{-0.998716,-0.998716,0.673681,-1.99743,-0.998716,0.673681,-1.99743,-0.998716,-0.673681,-0.998716,-0.998716,-0.673681,-0.998716,-1.99743,-0.673681,-0.998716,-1.99743,0.673681,0.998716,-1.99743,0.673681,0.998716,-1.99743,-0.673681,0.998716,-0.998716,0.673681,0.998716,-0.998716,-0.673681,1.99743,-0.998716,-0.673681,1.99743,-0.998716,0.673681,-0.998716,0.998716,0.673681,-0.998716,1.99743,0.673681,-0.998716,1.99743,-0.673681,-0.998716,0.998716,-0.673681,-1.99743,0.998716,-0.673681,-1.99743,0.998716,0.673681,0.998716,1.99743,-0.673681,0.998716,1.99743,0.673681,0.998716,0.998716,-0.673681,0.998716,0.998716,0.673681,1.99743,0.998716,0.673681,1.99743,0.998716,-0.673681,-0.742073,-1.48415,0.990889,-0.742073,-0.742073,0.990889,0.742073,-1.48415,0.990889,0.742073,-0.742073,0.990889,5.95281e-8,-5.95281e-8,1.30499,1.48415,-0.742073,0.990889,1.48415,0.742074,0.990889,0.742073,0.742073,0.990889,0.742073,1.48415,0.990889,-0.742073,1.48415,0.990889,-0.742073,0.742073,0.990889,-1.48415,0.742073,0.990889,-1.48415,-0.742074,0.990889,-1.50625,-0.753126,-0.978655,-0.753126,-0.753126,-0.978655,-1.50625,0.753125,-0.978655,-0.753126,0.753126,-0.978655,-5.95281e-8,-5.95281e-8,-1.27782,1.50625,0.753125,-0.978655,0.753126,0.753126,-0.978655,1.50625,-0.753125,-0.978655,0.753126,-0.753126,-0.978655,0.753125,-1.50625,-0.978655,-0.753126,-1.50625,-0.978655,-0.753126,1.50625,-0.978655,0.753125,1.50625,-0.978655}, 150);
IndexedFaceSet846.setCoord(&Coordinate847);

Shape843.setGeometry(&IndexedFaceSet846);

Transform842.addChild(&Shape843);

Transform841.addChild(&Transform842);

LOD840.addChildren(&Transform841);

Transform& Transform848 =  Transform();
Transform848.setDEF(CString("objOff_21"));
LOD840.addChildren(&Transform848);

Transform839.addChild(&LOD840);

LOD& LOD849 =  LOD();
LOD849.setRange(new float[]{15}, 1);
Transform& Transform850 =  Transform();
Transform850.setDEF(CString("proxyOn_20"));
ProximitySensor& ProximitySensor851 =  ProximitySensor();
ProximitySensor851.setDEF(CString("_53"));
ProximitySensor851.setSize(new float[]{12,12,12});
Transform850.addChild(&ProximitySensor851);

LOD849.addChildren(&Transform850);

Transform& Transform852 =  Transform();
Transform852.setDEF(CString("proxyOff_21"));
LOD849.addChildren(&Transform852);

Transform839.addChild(&LOD849);

Transform778.addChild(&Transform839);

Transform& Transform853 =  Transform();
Transform853.setDEF(CString("bonus-red1"));
Transform853.setTranslation(new float[]{50,32,-1209});
LOD& LOD854 =  LOD();
LOD854.setRange(new float[]{200}, 1);
Transform& Transform855 =  Transform();
Transform855.setDEF(CString("objOn_22"));
Transform& Transform856 =  Transform();
Transform856.setDEF(CString("_54"));
Transform& Transform857 =  Transform();
Transform857.setDEF(CString("stern_4"));
Transform857.setScale(new float[]{1,1,0.999999});
Transform857.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform857.setCenter(new float[]{0,0,0.0135851});
Shape& Shape858 =  Shape();
Appearance& Appearance859 =  Appearance();
Material& Material860 =  Material();
Material860.setAmbientIntensity(0.16172);
Material860.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material860.setSpecularColor(new float[]{1,0.81213,0.292798});
Material860.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material860.setShininess(0.106383);
Appearance859.addChild(&Material860);

Shape858.addChild(&Appearance859);

IndexedFaceSet& IndexedFaceSet861 =  IndexedFaceSet();
IndexedFaceSet861.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1}, 214);
Coordinate& Coordinate862 =  Coordinate();
Coordinate862.setPoint(new float[]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965}, 150);
IndexedFaceSet861.setCoord(&Coordinate862);

Shape858.setGeometry(&IndexedFaceSet861);

Transform857.addChild(&Shape858);

Transform856.addChild(&Transform857);

Transform855.addChild(&Transform856);

LOD854.addChildren(&Transform855);

Transform& Transform863 =  Transform();
Transform863.setDEF(CString("objOff_22"));
LOD854.addChildren(&Transform863);

Transform853.addChild(&LOD854);

LOD& LOD864 =  LOD();
LOD864.setRange(new float[]{15}, 1);
Transform& Transform865 =  Transform();
Transform865.setDEF(CString("proxyOn_21"));
ProximitySensor& ProximitySensor866 =  ProximitySensor();
ProximitySensor866.setDEF(CString("_55"));
ProximitySensor866.setSize(new float[]{12,12,12});
Transform865.addChild(&ProximitySensor866);

LOD864.addChildren(&Transform865);

Transform& Transform867 =  Transform();
Transform867.setDEF(CString("proxyOff_22"));
LOD864.addChildren(&Transform867);

Transform853.addChild(&LOD864);

Transform778.addChild(&Transform853);

Transform& Transform868 =  Transform();
Transform868.setDEF(CString("bonus-red2"));
Transform868.setTranslation(new float[]{-100,32,-1039});
LOD& LOD869 =  LOD();
LOD869.setRange(new float[]{200}, 1);
Transform& Transform870 =  Transform();
Transform870.setDEF(CString("objOn_23"));
Transform& Transform871 =  Transform();
Transform871.setDEF(CString("_56"));
Transform& Transform872 =  Transform();
Transform872.setDEF(CString("stern"));
Transform872.setScale(new float[]{1,1,0.999999});
Transform872.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform872.setCenter(new float[]{0,0,0.0135851});
Shape& Shape873 =  Shape();
Appearance& Appearance874 =  Appearance();
Material& Material875 =  Material();
Material875.setAmbientIntensity(0.16172);
Material875.setDiffuseColor(new float[]{0.989362,0.398496,0.0160839});
Material875.setSpecularColor(new float[]{1,0.81213,0.292798});
Material875.setEmissiveColor(new float[]{0.265957,0.215992,0.0778717});
Material875.setShininess(0.106383);
Appearance874.addChild(&Material875);

Shape873.addChild(&Appearance874);

IndexedFaceSet& IndexedFaceSet876 =  IndexedFaceSet();
IndexedFaceSet876.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,6,7,9,-1,10,8,9,11,-1,12,10,11,13,-1,14,12,13,15,-1,16,14,15,17,-1,18,16,17,19,-1,1,18,19,2,-1,20,21,9,7,-1,21,20,22,-1,22,20,7,5,-1,23,22,5,3,-1,22,23,24,-1,24,23,3,2,-1,24,21,22,-1,25,24,2,19,-1,24,25,26,-1,26,25,19,17,-1,21,24,27,-1,24,26,27,-1,28,27,26,-1,27,28,15,13,-1,28,26,17,15,-1,27,29,21,-1,29,27,13,11,-1,21,29,11,9,-1,30,31,32,33,-1,31,30,34,-1,34,30,33,35,-1,36,37,31,-1,37,36,38,39,-1,31,37,39,32,-1,34,40,31,-1,36,31,40,-1,40,41,36,-1,41,40,42,43,-1,36,41,43,38,-1,34,44,40,-1,44,45,40,-1,45,44,46,47,-1,40,45,47,42,-1,44,34,48,-1,48,34,35,49,-1,44,48,49,46,-1}, 214);
Coordinate& Coordinate877 =  Coordinate();
Coordinate877.setPoint(new float[]{0.805672,-4.75067,-1.98044,0.80571,-1.72966,0.196608,-0.596336,-1.72967,0.196593,-0.596373,-4.75067,-1.98044,0.805694,-0.88959,-1.49482,-0.59635,-0.889598,-1.49483,0.805668,0.543617,-4.12843,-0.596378,0.543612,-4.12845,0.805703,0.99861,-1.19572,-0.596343,0.998603,-1.19574,0.80572,3.93202,-0.692198,-0.596324,3.93202,-0.692215,0.805727,1.41198,0.725713,-0.596319,1.41198,0.725697,0.805772,2.70075,3.965,-0.596272,2.70075,3.96498,0.805736,-0.252377,1.95751,-0.596309,-0.252383,1.9575,0.805741,-2.76478,3.16976,-0.596304,-2.76478,3.16974,-1.02081,0.326113,-3.06685,-1.02078,0.658402,-0.925037,-1.02079,-0.720587,-1.14347,-1.0208,-3.54042,-1.49813,-1.02078,-1.33411,0.0918059,-1.02076,-2.09007,2.26316,-1.02076,-0.255218,1.37783,-1.02076,0.960297,0.478221,-1.02073,1.9015,2.84393,-1.02077,2.80072,-0.557307,1.1803,2.96367,-0.517372,1.18029,0.740826,-0.898923,0.805703,0.99861,-1.19572,0.80572,3.93202,-0.692198,1.18031,1.05407,0.557077,0.805727,1.41198,0.725713,1.18028,-0.689992,-1.12557,1.18026,0.396048,-3.12125,0.805694,-0.88959,-1.49482,0.805668,0.543617,-4.12843,1.1803,-1.32657,0.15614,1.18027,-3.61581,-1.49356,0.80571,-1.72966,0.196608,0.805672,-4.75067,-1.98044,1.18032,-0.207131,1.4905,1.18032,-2.11095,2.4091,0.805736,-0.252377,1.95751,0.805741,-2.76478,3.16976,1.18034,2.03065,3.01171,0.805772,2.70075,3.965}, 150);
IndexedFaceSet876.setCoord(&Coordinate877);

Shape873.setGeometry(&IndexedFaceSet876);

Transform872.addChild(&Shape873);

Transform871.addChild(&Transform872);

Transform870.addChild(&Transform871);

LOD869.addChildren(&Transform870);

Transform& Transform878 =  Transform();
Transform878.setDEF(CString("objOff_23"));
LOD869.addChildren(&Transform878);

Transform868.addChild(&LOD869);

LOD& LOD879 =  LOD();
LOD879.setRange(new float[]{15}, 1);
Transform& Transform880 =  Transform();
Transform880.setDEF(CString("proxyOn_22"));
ProximitySensor& ProximitySensor881 =  ProximitySensor();
ProximitySensor881.setDEF(CString("_57"));
ProximitySensor881.setSize(new float[]{12,12,12});
Transform880.addChild(&ProximitySensor881);

LOD879.addChildren(&Transform880);

Transform& Transform882 =  Transform();
Transform882.setDEF(CString("proxyOff_23"));
LOD879.addChildren(&Transform882);

Transform868.addChild(&LOD879);

Transform778.addChild(&Transform868);

Transform509.addChild(&Transform778);

Transform& Transform883 =  Transform();
Transform883.setDEF(CString("B6-GOLD"));
Transform& Transform884 =  Transform();
Transform884.setDEF(CString("bonus-gold3"));
Transform884.setTranslation(new float[]{30,-35,-1975});
LOD& LOD885 =  LOD();
LOD885.setRange(new float[]{200}, 1);
Transform& Transform886 =  Transform();
Transform886.setDEF(CString("objOn_24"));
Transform& Transform887 =  Transform();
Transform887.setDEF(CString("_58"));
Transform& Transform888 =  Transform();
Transform888.setDEF(CString("bnObj03_3"));
Transform888.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform888.setScale(new float[]{1,1,0.999999});
Transform888.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform888.setCenter(new float[]{0,0,0.0135851});
Shape& Shape889 =  Shape();
Appearance& Appearance890 =  Appearance();
Material& Material891 =  Material();
Material891.setAmbientIntensity(0.0498057);
Material891.setDiffuseColor(new float[]{1,0.68781,0});
Material891.setSpecularColor(new float[]{1,1,1});
Material891.setEmissiveColor(new float[]{0.393617,0.0569849,0});
Material891.setShininess(0.202128);
Appearance890.addChild(&Material891);

Shape889.addChild(&Appearance890);

IndexedFaceSet& IndexedFaceSet892 =  IndexedFaceSet();
IndexedFaceSet892.setConvex(False);
IndexedFaceSet892.setCreaseAngle(1.45281);
IndexedFaceSet892.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1}, 240);
Coordinate& Coordinate893 =  Coordinate();
Coordinate893.setPoint(new float[]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652}, 99);
IndexedFaceSet892.setCoord(&Coordinate893);

Shape889.setGeometry(&IndexedFaceSet892);

Transform888.addChild(&Shape889);

Transform887.addChild(&Transform888);

Transform886.addChild(&Transform887);

LOD885.addChildren(&Transform886);

Transform& Transform894 =  Transform();
Transform894.setDEF(CString("objOff_24"));
LOD885.addChildren(&Transform894);

Transform884.addChild(&LOD885);

LOD& LOD895 =  LOD();
LOD895.setRange(new float[]{15}, 1);
Transform& Transform896 =  Transform();
Transform896.setDEF(CString("proxyOn_23"));
ProximitySensor& ProximitySensor897 =  ProximitySensor();
ProximitySensor897.setDEF(CString("_59"));
ProximitySensor897.setSize(new float[]{12,12,12});
Transform896.addChild(&ProximitySensor897);

LOD895.addChildren(&Transform896);

Transform& Transform898 =  Transform();
Transform898.setDEF(CString("proxyOff_24"));
LOD895.addChildren(&Transform898);

Transform884.addChild(&LOD895);

Transform883.addChild(&Transform884);

Transform& Transform899 =  Transform();
Transform899.setDEF(CString("bonus-gold1_3"));
Transform899.setTranslation(new float[]{50,-10,-1856});
LOD& LOD900 =  LOD();
LOD900.setRange(new float[]{200}, 1);
Transform& Transform901 =  Transform();
Transform901.setDEF(CString("objOn_25"));
Transform& Transform902 =  Transform();
Transform& Transform903 =  Transform();
Transform903.setDEF(CString("bnObj03_4"));
Transform903.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform903.setScale(new float[]{1,1,0.999999});
Transform903.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform903.setCenter(new float[]{0,0,0.0135851});
Shape& Shape904 =  Shape();
Appearance& Appearance905 =  Appearance();
Material& Material906 =  Material();
Material906.setAmbientIntensity(0.0498057);
Material906.setDiffuseColor(new float[]{1,0.68781,0});
Material906.setSpecularColor(new float[]{1,1,1});
Material906.setEmissiveColor(new float[]{0.393617,0.0569849,0});
Material906.setShininess(0.202128);
Appearance905.addChild(&Material906);

Shape904.addChild(&Appearance905);

IndexedFaceSet& IndexedFaceSet907 =  IndexedFaceSet();
IndexedFaceSet907.setConvex(False);
IndexedFaceSet907.setCreaseAngle(1.45281);
IndexedFaceSet907.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1}, 240);
Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652}, 99);
IndexedFaceSet907.setCoord(&Coordinate908);

Shape904.setGeometry(&IndexedFaceSet907);

Transform903.addChild(&Shape904);

Transform902.addChild(&Transform903);

Transform901.addChild(&Transform902);

LOD900.addChildren(&Transform901);

Transform& Transform909 =  Transform();
Transform909.setDEF(CString("objOff_25"));
LOD900.addChildren(&Transform909);

Transform899.addChild(&LOD900);

LOD& LOD910 =  LOD();
LOD910.setRange(new float[]{15}, 1);
Transform& Transform911 =  Transform();
Transform911.setDEF(CString("proxyOn_24"));
ProximitySensor& ProximitySensor912 =  ProximitySensor();
ProximitySensor912.setDEF(CString("_60"));
ProximitySensor912.setSize(new float[]{12,12,12});
Transform911.addChild(&ProximitySensor912);

LOD910.addChildren(&Transform911);

Transform& Transform913 =  Transform();
Transform913.setDEF(CString("proxyOff_25"));
LOD910.addChildren(&Transform913);

Transform899.addChild(&LOD910);

Transform883.addChild(&Transform899);

Transform& Transform914 =  Transform();
Transform914.setDEF(CString("bonus-gold1"));
Transform914.setTranslation(new float[]{-30,-10,-1838});
LOD& LOD915 =  LOD();
LOD915.setRange(new float[]{200}, 1);
Transform& Transform916 =  Transform();
Transform916.setDEF(CString("objOn_26"));
Transform& Transform917 =  Transform();
Transform917.setDEF(CString("_61"));
Transform& Transform918 =  Transform();
Transform918.setDEF(CString("bnObj03"));
Transform918.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform918.setScale(new float[]{1,1,0.999999});
Transform918.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform918.setCenter(new float[]{0,0,0.0135851});
Shape& Shape919 =  Shape();
Appearance& Appearance920 =  Appearance();
Material& Material921 =  Material();
Material921.setAmbientIntensity(0.0498057);
Material921.setDiffuseColor(new float[]{1,0.68781,0});
Material921.setSpecularColor(new float[]{1,1,1});
Material921.setEmissiveColor(new float[]{0.393617,0.0569849,0});
Material921.setShininess(0.202128);
Appearance920.addChild(&Material921);

Shape919.addChild(&Appearance920);

IndexedFaceSet& IndexedFaceSet922 =  IndexedFaceSet();
IndexedFaceSet922.setConvex(False);
IndexedFaceSet922.setCreaseAngle(1.45281);
IndexedFaceSet922.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,6,7,5,-1,8,7,6,-1,8,9,7,-1,11,0,12,-1,0,2,12,-1,3,13,2,-1,14,13,3,-1,14,3,5,-1,7,15,5,-1,15,14,5,-1,7,16,15,-1,13,18,2,-1,18,17,12,-1,2,18,12,-1,13,14,19,-1,14,20,19,-1,20,14,15,-1,16,21,15,-1,21,20,15,-1,16,22,21,-1,22,16,17,-1,23,22,17,-1,18,23,17,-1,13,19,24,-1,18,13,24,-1,18,24,23,-1,0,11,25,-1,19,25,24,-1,1,0,26,-1,0,25,26,-1,26,25,19,-1,20,26,19,-1,4,1,27,-1,1,26,27,-1,27,26,20,-1,21,27,20,-1,6,4,28,-1,4,27,28,-1,28,27,21,-1,22,28,21,-1,28,22,23,-1,11,29,25,-1,25,29,24,-1,24,29,23,-1,30,6,28,-1,28,23,30,-1,23,29,30,-1,30,31,6,-1,11,32,29,-1,29,32,30,-1,10,11,9,-1,11,12,9,-1,16,7,9,-1,17,16,9,-1,12,17,9,-1}, 240);
Coordinate& Coordinate923 =  Coordinate();
Coordinate923.setPoint(new float[]{-0.0394636,-1.77362,0.0381652,1.53972,-0.90204,0.0381652,-0.0442672,-2.02278,-0.606234,1.75309,-1.03078,-0.606234,1.5745,0.901365,0.0381652,1.79268,1.02178,-0.606234,0.030097,1.83319,0.0381652,0.0349025,2.08234,-0.606234,-1.54909,0.961606,0.0381652,-1.76246,1.09034,-0.606234,-1.54909,0.961606,0.0381652,-1.58387,-0.841798,0.0381652,-1.80204,-0.962214,-0.606234,-0.0568586,-2.92098,-0.449969,2.52468,-1.49616,-0.449969,2.58155,1.45192,-0.449969,0.0568535,2.97521,-0.449969,-2.52469,1.55039,-0.449969,-2.58155,-1.39769,-0.449969,-0.0568586,-2.92098,0.506259,2.52468,-1.49616,0.506259,2.58155,1.45192,0.506259,0.0568535,2.97521,0.506259,-2.52469,1.55039,0.506259,-2.58155,-1.39769,0.506259,-0.0442672,-2.02278,0.68256,1.75309,-1.03078,0.68256,1.79268,1.02178,0.68256,0.0349025,2.08234,0.68256,-1.80204,-0.962214,0.68256,-1.76246,1.09034,0.68256,-1.54909,0.961606,0.0381652,-1.54909,0.961606,0.0381652}, 99);
IndexedFaceSet922.setCoord(&Coordinate923);

Shape919.setGeometry(&IndexedFaceSet922);

Transform918.addChild(&Shape919);

Transform917.addChild(&Transform918);

Transform916.addChild(&Transform917);

LOD915.addChildren(&Transform916);

Transform& Transform924 =  Transform();
Transform924.setDEF(CString("objOff_26"));
LOD915.addChildren(&Transform924);

Transform914.addChild(&LOD915);

LOD& LOD925 =  LOD();
LOD925.setRange(new float[]{15}, 1);
Transform& Transform926 =  Transform();
Transform926.setDEF(CString("proxyOn_25"));
ProximitySensor& ProximitySensor927 =  ProximitySensor();
ProximitySensor927.setDEF(CString("_62"));
ProximitySensor927.setSize(new float[]{12,12,12});
Transform926.addChild(&ProximitySensor927);

LOD925.addChildren(&Transform926);

Transform& Transform928 =  Transform();
Transform928.setDEF(CString("proxyOff_26"));
LOD925.addChildren(&Transform928);

Transform914.addChild(&LOD925);

Transform883.addChild(&Transform914);

Transform509.addChild(&Transform883);

Transform& Transform929 =  Transform();
Transform929.setDEF(CString("bonusRotor"));
Group& Group930 =  Group();
Group& Group931 =  Group();
Group931.setDEF(CString("rotor_anim"));
TimeSensor& TimeSensor932 =  TimeSensor();
TimeSensor932.setDEF(CString("Time_6"));
TimeSensor932.setCycleInterval(4);
TimeSensor932.setLoop(True);
TimeSensor932.setStartTime(1408703701.08913);
TimeSensor932.setStopTime(1);
Group931.addChild(&TimeSensor932);

Group930.addChild(&Group931);

OrientationInterpolator& OrientationInterpolator933 =  OrientationInterpolator();
OrientationInterpolator933.setDEF(CString("rotorRotationInterp"));
OrientationInterpolator933.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator933.setKeyValue(new float[]{0,0,1,0,0,1,0,4.71239,0,1,0,3.14159,0,1,0,1.56705,0,0,1,0}, 20);
Group930.addChild(&OrientationInterpolator933);

Transform929.addChild(&Group930);

Transform& Transform934 =  Transform();
Transform929.addChild(&Transform934);

Transform509.addChild(&Transform929);

Scene8.addChild(&Transform509);

Transform& Transform935 =  Transform();
Transform935.setDEF(CString("ALERT"));
Transform& Transform936 =  Transform();
Transform936.setDEF(CString("mountain01_1"));
Script& Script937 =  Script();
Script937.setDEF(CString("_proxyPlugger_1"));
field& field938 =  field();
field938.setName(CString("alert"));
field938.setAccessType(CString("outputOnly"));
field938.setType(CString("SFTime"));
Script937.addChild(&field938);

field& field939 =  field();
field939.setName(CString("hitTime"));
field939.setAccessType(CString("inputOnly"));
field939.setType(CString("SFTime"));
Script937.addChild(&field939);


Script937.setSourceCode(CString("vrmlscript:")+
_T("function hitTime(value, time)")+
_T("{")+
_T(" alert = time;")+
_T("}"));
Transform936.addChild(&Script937);

Transform& Transform940 =  Transform();
Transform940.setDEF(CString("mountain01"));
Transform940.setTranslation(new float[]{-10,-40,-1130});
Transform& Transform941 =  Transform();
Transform941.setDEF(CString("objLOD_11"));
LOD& LOD942 =  LOD();
LOD942.setRange(new float[]{400}, 1);
Transform& Transform943 =  Transform();
Transform943.setDEF(CString("mount_1"));
Transform& Transform944 =  Transform();
Transform944.setDEF(CString("mountObj_1"));
Shape& Shape945 =  Shape();
Appearance& Appearance946 =  Appearance();
PixelTexture& PixelTexture947 =  PixelTexture();
PixelTexture947.setDEF(CString("_63"));
PixelTexture947.setImage(CString("64 64 1 126 136 94 150 185 126 147 143 147 119 140 129 140 164 175 178 185 168 203 206 178 101 133 154 224 210 101 73 63 98 108 154 119 133 175 126 94 84 80 126 147 150 168 182 185 133 77 129 108 101 119 98 80 80 126 147 150 168 185 192 199 217 126 108 112 133 122 122 199 140 147 157 182 150 178 189 175 182 199 217 192 189 192 182 164 115 80 161 213 206 182 147 77 157 157 175 182 175 154 119 105 80 70 84 115 157 168 154 140 136 115 105 101 101 136 119 73 63 84 115 157 168 157 136 140 143 122 154 115 119 98 94 182 175 175 182 206 182 203 220 196 203 203 238 213 196 171 119 140 175 150 171 203 203 161 143 91 136 224 217 206 143 126 105 105 91 80 105 105 115 94 80 112 150 129 94 91 98 129 112 94 80 105 105 115 94 80 77 63 108 161 154 122 94 108 98 140 150 112 185 203 175 168 224 182 192 182 199 192 203 185 182 171 199 182 161 164 133 126 126 115 98 147 210 178 122 140 115 94 91 73 101 105 91 84 84 98 101 94 91 94 91 98 108 94 73 101 105 91 84 84 94 87 80 91 84 147 94 122 84 77 115 84 98 185 126 45 143 213 217 192 203 203 220 175 192 203 213 206 154 129 112 136 126 143 164 87 112 150 108 129 112 101 91 73 70 94 94 136 140 129 112 136 84 77 101 77 108 119 73 70 126 105 136 140 129 112 122 115 119 161 115 133 112 98 126 77 21 21 108 91 38 206 224 185 189 220 185 108 77 164 255 238 182 192 189 168 157 171 182 136 122 129 98 115 108 94 70 66 66 98 84 143 143 133 108 168 122 70 129 122 112 112 77 70 196 119 143 143 133 108 140 136 112 129 126 150 147 133 185 143 80 10 66 140 56 91 136 129 77 143 129 150 112 63 203 252 224 213 161 154 157 178 164 154 161 157 105 140 122 91 70 52 73 84 70 80 119 112 94 119 105 73 143 147 108 70 66 77 84 70 80 119 112 94 136 147 133 108 122 129 150 154 199 192 164 87 42 140 126 31 42 147 42 14 91 168 199 87 73 164 192 199 147 140 161 136 122 164 171 164 105 122 122 105 80 35 38 87 91 77 126 136 133 84 59 80 94 164 150 105 63 52 87 91 77 126 136 133 122 150 115 119 147 154 168 154 217 203 175 143 77 35 119 94 35 101 101 28 108 196 189 105 42 10 38 108 147 157 175 182 178 175 154 157 115 73 84 119 80 38 45 77 94 98 133 129 143 112 115 94 98 161 175 133 98 66 77 94 98 133 129 143 147 129 126 105 115 168 189 182 213 206 196 192 161 119 91 133 70 98 192 122 115 112 157 192 122 70 35 56 84 164 199 206 175 136 150 157 136 129 122 98 101 59 59 59 73 73 115 122 133 143 157 112 94 105 129 126 94 70 59 73 73 133 133 143 154 129 140 112 84 98 136 175 252 213 189 192 192 231 143 91 66 91 112 133 136 101 98 143 150 126 94 84 56 129 199 182 175 161 182 164 150 143 129 77 84 91 70 59 66 31 77 112 119 140 115 108 98 94 52 73 84 66 59 66 31 98 140 147 129 105 133 129 115 84 105 154 227 238 213 213 203 217 192 171 105 112 161 175 143 150 157 140 164 185 168 129 87 119 171 164 185 185 217 161 133 157 157 87 73 112 73 84 84 52 73 154 143 129 77 80 105 87 70 49 52 66 84 84 49 31 94 136 126 91 101 105 119 80 87 136 182 203 189 231 192 217 178 154 122 87 196 224 213 192 185 185 189 210 182 143 115 164 199 203 175 175 175 157 119 140 168 119 87 136 115 108 87 101 133 168 150 140 161 122 108 98 98 91 91 101 105 84 63 7 21 70 119 101 84 126 122 84 101 122 105 140 105 157 161 150 122 133 122 115 105 196 217 224 217 217 199 133 140 143 129 161 210 206 178 185 192 171 126 129 147 147 129 154 129 122 84 108 133 143 140 150 143 108 91 108 154 129 115 122 122 84 70 17 14 28 101 108 112 122 143 101 84 101 105 182 161 70 63 77 115 136 122 164 126 84 112 115 185 203 175 154 150 150 133 143 189 168 168 185 210 154 150 164 175 143 140 122 154 136 108 112 147 154 164 168 87 101 119 136 178 154 119 154 136 105 77 49 31 24 80 115 136 70 80 105 70 101 115 164 168 143 143 164 175 168 154 189 161 119 105 77 80 136 122 119 122 105 147 157 206 210 168 150 161 150 178 178 161 147 147 157 185 154 140 122 129 143 171 185 122 94 126 147 161 164 157 185 154 129 91 84 49 28 49 112 133 108 87 77 70 126 119 150 175 168 189 182 154 157 164 178 150 154 171 189 98 98 115 119 133 112 133 154 203 175 133 161 157 178 203 175 126 140 178 192 192 161 175 189 136 147 175 203 119 91 112 133 161 185 192 192 161 171 189 108 42 14 3 56 129 136 143 108 66 80 115 171 210 189 185 161 140 154 150 122 147 154 164 182 115 122 115 133 136 168 122 140 171 154 157 196 175 161 164 133 154 129 185 210 196 185 245 238 126 154 175 182 136 122 122 140 161 189 210 196 185 245 241 119 80 45 7 14 108 126 98 98 77 70 105 115 210 203 182 136 136 175 178 175 178 154 161 171 136 108 101 147 157 171 126 164 199 199 206 206 178 164 157 77 77 133 168 217 189 185 210 150 105 126 147 98 80 115 136 126 154 175 217 189 185 210 150 112 84 59 35 24 59 115 98 77 77 108 105 63 126 189 157 122 147 213 206 189 150 133 161 178 154 133 133 122 161 168 154 189 192 168 175 199 185 182 161 150 108 140 171 196 157 164 150 115 105 87 112 73 98 115 154 126 147 171 196 157 164 150 115 129 105 80 35 17 38 80 133 101 77 98 101 84 77 182 147 119 119 196 192 171 164 119 150 154 168 136 143 126 150 189 196 178 115 73 140 178 175 171 154 112 143 168 140 119 136 133 87 63 73 84 91 91 105 115 143 115 136 136 119 136 133 87 63 84 105 77 45 31 59 45 98 119 105 63 84 77 73 182 171 133 115 157 136 171 157 185 206 192 189 140 136 136 185 213 203 189 175 66 140 171 157 164 171 126 108 140 108 70 63 73 94 87 98 105 84 115 119 122 129 112 94 101 70 63 73 94 87 98 105 73 59 21 17 59 59 98 122 73 87 87 91 150 161 126 87 112 178 150 80 98 175 203 157 119 115 164 164 206 112 87 147 112 63 175 192 192 185 189 133 136 112 66 49 73 112 133 140 133 94 108 129 147 129 108 94 94 66 49 73 112 133 140 140 91 77 63 3 42 73 66 129 94 77 108 112 119 171 136 77 59 87 77 115 108 115 136 140 112 101 164 168 203 168 108 77 140 77 112 196 185 182 175 136 136 108 115 133 143 161 164 171 161 129 115 147 157 140 115 122 105 115 133 143 161 164 171 161 126 94 77 35 24 80 59 49 52 59 73 80 112 154 115 115 101 101 119 154 175 140 126 133 115 112 175 168 161 164 178 129 80 115 70 136 168 175 164 154 164 147 164 161 168 168 164 161 140 150 147 157 168 161 136 143 136 164 161 168 168 164 164 136 150 154 147 98 56 63 91 59 45 63 66 112 129 115 129 115 126 126 157 164 189 161 157 126 126 136 157 119 129 199 203 192 133 105 66 119 185 119 164 168 164 164 164 168 171 143 101 98 108 129 136 129 133 119 115 108 112 164 168 171 143 101 98 108 122 122 112 94 77 52 59 59 49 59 87 119 133 108 115 129 136 140 164 164 164 168 178 140 157 161 175 164 178 203 199 220 192 171 168 171 196 136 91 140 129 147 150 161 140 133 108 66 66 91 112 98 63 66 122 122 94 129 161 140 133 108 66 66 94 119 126 108 91 80 59 42 70 56 77 126 119 129 161 157 136 140 171 164 171 196 203 157 164 154 203 185 189 192 213 213 178 178 196 203 192 164 87 115 157 150 94 105 129 143 147 133 101 108 94 66 52 63 105 147 115 84 105 129 143 147 133 112 143 143 143 119 119 91 87 70 94 84 63 126 129 133 154 140 94 42 108 185 185 199 224 192 171 182 213 210 196 203 192 189 175 192 210 203 192 150 122 112 168 150 91 52 84 108 115 129 119 91 98 101 94 70 52 126 126 98 52 84 108 115 133 126 101 77 73 101 108 80 77 70 91 108 87 94 98 73 105 129 157 59 52 154 154 140 119 154 199 199 189 164 147 161 161 185 175 182 203 224 199 154 140 91 136 136 101 87 56 42 52 87 108 98 105 119 126 108 52 59 77 101 94 56 42 42 84 115 105 73 80 49 73 87 73 70 84 84 101 73 73 80 119 122 129 105 3 49 105 119 98 91 185 175 171 143 133 161 203 199 192 192 217 210 189 178 196 164 122 101 87 115 115 80 70 63 73 112 119 126 101 108 129 87 59 77 112 112 63 49 66 77 105 94 105 80 105 105 84 77 77 98 101 80 84 101 150 161 129 122 35 56 136 129 122 94 105 143 182 182 185 182 189 192 189 220 234 203 178 168 154 133 136 101 91 115 108 122 115 77 66 105 115 129 129 108 136 129 77 59 73 105 115 84 87 77 80 98 108 115 105 94 91 84 84 98 87 98 105 112 171 171 147 119 115 161 171 150 143 140 133 136 161 175 154 143 164 196 175 199 210 206 143 147 98 87 136 108 98 101 84 70 87 108 119 105 129 143 133 122 133 147 126 59 59 77 105 108 105 91 91 112 119 119 115 77 77 87 105 105 91 94 129 108 126 143 136 101 84 147 168 171 154 164 154 150 161 164 129 140 168 196 178 192 203 185 171 108 115 108 133 122 115 94 84 77 80 98 143 133 143 150 143 119 126 147 157 112 73 77 94 119 119 87 101 105 94 101 119 98 80 91 105 136 119 108 133 108 94 108 154 115 73 126 147 154 147 157 143 147 206 185 150 133 161 182 185 175 178 171 178 154 108 80 126 150 122 80 63 80 87 77 136 133 129 143 129 108 126 126 143 150 115 101 115 140 133 119 98 77 73 77 84 87 115 136 112 122 136 115 140 129 101 98 129 164 80 80 122 150 154 150 136 154 199 122 98 122 178 175 182 164 178 178 178 189 161 112 136 168 136 91 56 66 80 84 122 129 108 108 87 94 133 91 105 122 122 129 112 115 133 133 119 91 87 101 91 108 119 133 112 98 126 122 129 147 98 133 126 175 115 38 84 133 168 150 161 189 185 115 119 140 161 115 140 185 192 185 164 157 150 150 147 189 133 119 73 73 80 87 112 119 87 112 98 98 122 129 115 136 108 87 101 101 119 143 122 84 91 101 129 119 105 143 126 105 126 129 126 136 101 136 178 150 154 80 101 150 157 171 213 206 189 140 140 164 178 147 171 196 185 175 143 105 140 199 157 147 112 119 94 59 66 59 94 115 98 119 115 122 126 154 143 122 94 66 98 129 84 108 115 108 129 129 136 154 115 122 108 105 129 143 129 119 115 91 157 140 143 108 80 150 203 164 203 185 168 171 150 164 182 178 178 196 185 178 161 136 129 196 199 150 122 87 77 59 63 63 84 119 112 112 126 147 150 147 178 133 63 63 84 112 63 98 119 136 105 94 108 143 119 105 119 115 126 143 122 129 140 98 52 101 157 154 38 87 241 248 199 150 178 171 136 143 157 178 175 196 196 175 147 133 112 150 178 175 178 91 80 87 108 119 115 122 126 112 122 143 140 157 178 154 108 70 73 94 80 101 126 168 94 105 45 80 112 105 133 119 143 161 129 133 157 140 77 101 185 171 98 70 178 133 122 84 119 150 143 115 164 171 168 196 206 185 171 147 105 140 157 164 164 133 122 161 154 112 115 126 150 157 122 147 147 189 175 147 164 140 91 126 122 98 112 157 98 98 73 101 122 119 157 129 108 154 136 112 136 161 115 91 168 189 175 129 161 66 73 168 171 150 140 112 175 185 161 192 192 185 185 157 108 178 129 115 147 136 105 143 136 133 101 136 129 122 129 147 164 217 182 164 164 161 161 147 115 105 119 140 70 98 91 91 133 126 147 136 98 119 122 115 108 147 108 70 122 196 185 161 161 161 150 157 199 161 140 143 168 203 185 196 182 168 178 157 122 133 115 115 126 154 119 129 115 161 112 133 143 147 164 157 168 189 182 168 171 154 171 126 108 133 147 147 91 119 84 87 150 94 136 150 115 98 119 115 105 119 143 119 87 164 189 210 241 217 196 189 210 178 171 171 196 213 203 206 185 175 199 157 129 94 126 150 157 136 126 105 122 140 129 164 168 164 164 133 157 199 185 171 164 157 143 122 126 126 136 136 129 136 112 77 164 140 129 105 108 129 147 122 115 112 154 122 94 98 168 154 192 217 210 213 196 171 185 182 206 220 210 182 164 157 171 192 182 171 164 133 143 136 129 101 105 108 129 157 164 171 154 126 147 224 206 175 175 171 133 122 108 98 101 112 154 136 105 94 164 192 108 101 115 119 161 112 143 119 136 136 112 56 164 185 143 185 234 206 157 171 196 164 189 210 210 154 140 112 129 196 196 189 171 136 143 133 122 105 108 119 150 140 161 164 129 119 154 224 203 154 154 150 108 94 56 63 87 101 126 115 87 80 143 185 168 147 119 147 175 129 133 136 115 150 150 63 157 196 185 161 231 217 196 182 192 161 182 199 182 178 143 122 133 164 199 189 185 161 112 101 94 94 126 119 126 150 157 150 126 94 150 185 122 87 91 94 91 77 133 129 115 119 129 122 101 70 87 143 157 115 94 129 157 164 140 157 136 161 175 70 129 199 185 115 157 147 168 175 189 168 157 157 161 178 175 133 119 150 164 143 122 150 133 136 101 84 126 126 105 108 115 129 119 91 154 164 108 112 91 80 108 157 175 171 161 182 175 157 168 112 24 136 164 136 115 115 157 196 129 140 129 129 164 126 133 196 196 164 112 140 112 168 182 164 168 196 206 220 196 168 150 140 178 171 147 182 171 129 105 105 112 136 122 87 115 143 161 94 115 133 108 122 136 171 164 157 171 140 157 196 185 175 147 108 17 112 143 147 112 105 136 154 119 122 122 143 178 164 122 147 164 206 178 182 129 136 140 185 252 255 252 231 196 171 189 154 136 115 157 178 171 108 63 94 84 98 133 126 133 133 161 105 94 105 119 143 164 171 154 122 122 133 175 196 182 189 136 112 56 84 157 136 94 91 126 126 136 122 140 161 206 157 98 112 136 129 185 206 161 126 161 189 175 227 255 255 227 196 196 164 168 189 185 171 171 115 87 115 136 91 108 140 140 143 154 122 101 140 136 136 150 122 122 140 94 112 154 185 171 143 115 108 84 45 115 143 94 84 161 154 122 133 161 185 206 129 66 203 217 126 66 84 136 136 171 185 136 87 105 101 122 168 199 203 203 182 203 154 101 105 133 161 143 122 129 147 147 129 129 126 108 136 143 154 161 161 161 143 122 129 150 206 168 108 129 115 80 28 31 87 87 84 136 161 140 136 154 136 126 80 0 119 196 199 164 66 87 143 147 157 185 196 122 80 122 143 171 210 231 199 224 203 105 122 164 143 129 147 161 154 168 150 150 126 140 133 150 147 168 171 143 129 147 161 157 199 185 154 136 112 112 73 84 126 112 94 119 175 140 94 161 101 73 147 28 80 210 252 234 178 94 129 157 192 175 154 133 133 150 136 77 126 206 227 255 213 115 140 157 150 122 150 171 140 168 185 147 119 126 143 140 140 154 161 147 136 147 157 136 171 161 122 129 108 140 94 150 189 119 94 154 168 154 98 168 150 108 126 73 35 147 171 196 227 143 112 143 154 126 143 157 171 185 164 119 38 129 255 255 164 98 94 126 164 143 157 203 98 77 126 115 70 119 150 147 122 112 119 129 140 133 136 87 56 98 112 136 119 136 84 98 168 129 73 154 192 147 105 192 245 238 143 63 21 84 94 77 168 175 154 164 185 178 178 185 217 192 168 154 66 49 192 206 129 101 56 73 126 150 175 171 105 56 59 70 73 126 140 133 143 108 80 101 126 122 126 98 42 80 133 126 136 171 119 101 154 143 70 91 185 154 122 157 178 199 164 108 49 126 73 143 63 119 157 192 203 210 199 196 227 213 192 164 157 59 52 101 115 94 70 70 136 154 175 154 105 101 87 59 59 101 126 136 150 143 49 45 63 73 73 91 94 56 98 105 140 196 168 122 164 175 119 59 147 182 154 126 147 136 189 140 70 133 56 182 94 77 91 164 210 203 189 178 203 182 217 119 129 84 31 49 115 101 49 80 140 136 98 84 98 108 126 101 63 73 119 140 136 94 38 17 7 14 52 94 112 98 101 108 101 196 182 129 112 164 115 108 168 203 154 178 178 217 231 189 87 112 80 161 210 91 56 94 91 182 234 189 210 192 220 143 49 129 94 38 91 133 154 115 108 91 77 77 84 101 94 122 94 98 105 101 91 77 112 105 80 70 77 84 122 133 126 147 91 143 140 112 108 161 108 80 140 224 220 255 255 252 248 248 143 122 136 56 112 87 87 105 38 112 241 199 182 199 213 206 154 77 91 70 84 129 157 161 126 122 108 122 126 115 66 94 105 87 84 94 122 112 157 136 136 115 126 129 143 164 122 136 94 112 171 122 115 161 136 94 133 220 175 196 245 255 255 227 213 217 217 115 101 80 94 122 98 59 115 157 73 119 189 238 210 143 112 66 77 143 168 154 136 164 164 133 126 122 98 66 66 84 108 115 164 157 150 136 164 164 133 150 161 196 185 133 108 112 161 115 119 164 140 126 112 178 175 101 98 101 108 101 133 182 206 192 143 70 38 80 171 63 28 98 112 7 87 203 203 185 161 80 70 150 171 161 161 178 175 182 147 133 115 63 49 70 98 70 115 161 164 161 178 175 182 178 178 210 203 147 108 94 154 147 126 143 126 147 129 150 182 206 168 91 101 115 98 105 84 136 168 150 105 49 70 122 63 52 122 80 59 126 178 147 129 77 73 136 147 161 168 154 157 192 154 126 105 63 63 56 70 73 87 129 161 168 154 157 192 185 199 206 178 126 129 77 168 150 112 143 136 133 140 189 213 164 157 122 140 161 168 189 157 77 154 241 206 140 70 133 115 59 171 178 122 122 105 105 105 80 70 105 136 168 161 150 168 196 136 105 119 77 84 98 70 84 101 133 168 161 150 168 196 192 224 196 189"));
Appearance946.addChild(&PixelTexture947);

Shape945.addChild(&Appearance946);

IndexedFaceSet& IndexedFaceSet948 =  IndexedFaceSet();
IndexedFaceSet948.setColorIndex(new int[]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1}, 128);
IndexedFaceSet948.setTexCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
IndexedFaceSet948.setCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
CColor& Color949 =  CColor();
Color949.setColor(new float[]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785}, 27);
IndexedFaceSet948.setColor(&Color949);

TextureCoordinate& TextureCoordinate950 =  TextureCoordinate();
TextureCoordinate950.setPoint(new float[]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528}, 50);
IndexedFaceSet948.setTexCoord(&TextureCoordinate950);

Coordinate& Coordinate951 =  Coordinate();
Coordinate951.setPoint(new float[]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345}, 75);
IndexedFaceSet948.setCoord(&Coordinate951);

Shape945.setGeometry(&IndexedFaceSet948);

Transform944.addChild(&Shape945);

Transform943.addChild(&Transform944);

LOD942.addChildren(&Transform943);

Transform& Transform952 =  Transform();
LOD942.addChildren(&Transform952);

Transform941.addChild(&LOD942);

Transform940.addChild(&Transform941);

Transform& Transform953 =  Transform();
Transform953.setDEF(CString("proxyLOD_11"));
LOD& LOD954 =  LOD();
LOD954.setRange(new float[]{120}, 1);
Transform& Transform955 =  Transform();
Transform955.setDEF(CString("proxyOn_26"));
Transform& Transform956 =  Transform();
Transform956.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor957 =  ProximitySensor();
ProximitySensor957.setDEF(CString("_64"));
ProximitySensor957.setSize(new float[]{60,25,60});
Transform956.addChild(&ProximitySensor957);

Transform955.addChild(&Transform956);

Transform& Transform958 =  Transform();
Transform958.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor959 =  ProximitySensor();
ProximitySensor959.setDEF(CString("_65"));
ProximitySensor959.setSize(new float[]{25,35,25});
Transform958.addChild(&ProximitySensor959);

Transform955.addChild(&Transform958);

LOD954.addChildren(&Transform955);

Transform& Transform960 =  Transform();
Transform960.setDEF(CString("proxyOff_27"));
LOD954.addChildren(&Transform960);

Transform953.addChild(&LOD954);

Transform940.addChild(&Transform953);

Transform936.addChild(&Transform940);

Transform& Transform961 =  Transform();
Transform961.setDEF(CString("mountain02"));
Transform961.setTranslation(new float[]{-100,-40,-1040});
LOD& LOD962 =  LOD();
LOD962.setRange(new float[]{400}, 1);
Transform& Transform963 =  Transform();
Transform963.setDEF(CString("mountObj_2"));
Shape& Shape964 =  Shape();
Appearance& Appearance965 =  Appearance();
PixelTexture& PixelTexture966 =  PixelTexture();
PixelTexture966.setUSE(CString("_63"));
Appearance965.addChild(&PixelTexture966);

Shape964.addChild(&Appearance965);

IndexedFaceSet& IndexedFaceSet967 =  IndexedFaceSet();
IndexedFaceSet967.setColorIndex(new int[]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1}, 128);
IndexedFaceSet967.setTexCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
IndexedFaceSet967.setCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
CColor& Color968 =  CColor();
Color968.setColor(new float[]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785}, 27);
IndexedFaceSet967.setColor(&Color968);

TextureCoordinate& TextureCoordinate969 =  TextureCoordinate();
TextureCoordinate969.setPoint(new float[]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528}, 50);
IndexedFaceSet967.setTexCoord(&TextureCoordinate969);

Coordinate& Coordinate970 =  Coordinate();
Coordinate970.setPoint(new float[]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345}, 75);
IndexedFaceSet967.setCoord(&Coordinate970);

Shape964.setGeometry(&IndexedFaceSet967);

Transform963.addChild(&Shape964);

LOD962.addChildren(&Transform963);

Transform& Transform971 =  Transform();
LOD962.addChildren(&Transform971);

Transform961.addChild(&LOD962);

LOD& LOD972 =  LOD();
LOD972.setRange(new float[]{120}, 1);
Transform& Transform973 =  Transform();
Transform973.setDEF(CString("proxyOn_27"));
Transform& Transform974 =  Transform();
Transform974.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor975 =  ProximitySensor();
ProximitySensor975.setDEF(CString("_66"));
ProximitySensor975.setSize(new float[]{60,25,60});
Transform974.addChild(&ProximitySensor975);

Transform973.addChild(&Transform974);

Transform& Transform976 =  Transform();
Transform976.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor977 =  ProximitySensor();
ProximitySensor977.setDEF(CString("_67"));
ProximitySensor977.setSize(new float[]{25,35,25});
Transform976.addChild(&ProximitySensor977);

Transform973.addChild(&Transform976);

LOD972.addChildren(&Transform973);

Transform& Transform978 =  Transform();
Transform978.setDEF(CString("proxyOff_28"));
LOD972.addChildren(&Transform978);

Transform961.addChild(&LOD972);

Transform936.addChild(&Transform961);

Transform& Transform979 =  Transform();
Transform979.setDEF(CString("mountain03"));
Transform979.setTranslation(new float[]{-100,-40,-1210});
LOD& LOD980 =  LOD();
LOD980.setRange(new float[]{400}, 1);
Transform& Transform981 =  Transform();
Transform981.setDEF(CString("mountObj_3"));
Shape& Shape982 =  Shape();
Appearance& Appearance983 =  Appearance();
PixelTexture& PixelTexture984 =  PixelTexture();
PixelTexture984.setUSE(CString("_63"));
Appearance983.addChild(&PixelTexture984);

Shape982.addChild(&Appearance983);

IndexedFaceSet& IndexedFaceSet985 =  IndexedFaceSet();
IndexedFaceSet985.setColorIndex(new int[]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1}, 128);
IndexedFaceSet985.setTexCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
IndexedFaceSet985.setCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
CColor& Color986 =  CColor();
Color986.setColor(new float[]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785}, 27);
IndexedFaceSet985.setColor(&Color986);

TextureCoordinate& TextureCoordinate987 =  TextureCoordinate();
TextureCoordinate987.setPoint(new float[]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528}, 50);
IndexedFaceSet985.setTexCoord(&TextureCoordinate987);

Coordinate& Coordinate988 =  Coordinate();
Coordinate988.setPoint(new float[]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345}, 75);
IndexedFaceSet985.setCoord(&Coordinate988);

Shape982.setGeometry(&IndexedFaceSet985);

Transform981.addChild(&Shape982);

LOD980.addChildren(&Transform981);

Transform& Transform989 =  Transform();
LOD980.addChildren(&Transform989);

Transform979.addChild(&LOD980);

LOD& LOD990 =  LOD();
LOD990.setRange(new float[]{120}, 1);
Transform& Transform991 =  Transform();
Transform991.setDEF(CString("proxyOn_28"));
Transform& Transform992 =  Transform();
Transform992.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor993 =  ProximitySensor();
ProximitySensor993.setDEF(CString("_68"));
ProximitySensor993.setSize(new float[]{60,25,60});
Transform992.addChild(&ProximitySensor993);

Transform991.addChild(&Transform992);

Transform& Transform994 =  Transform();
Transform994.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor995 =  ProximitySensor();
ProximitySensor995.setDEF(CString("_69"));
ProximitySensor995.setSize(new float[]{25,35,25});
Transform994.addChild(&ProximitySensor995);

Transform991.addChild(&Transform994);

LOD990.addChildren(&Transform991);

Transform& Transform996 =  Transform();
Transform996.setDEF(CString("proxyOff_29"));
LOD990.addChildren(&Transform996);

Transform979.addChild(&LOD990);

Transform936.addChild(&Transform979);

Transform& Transform997 =  Transform();
Transform997.setDEF(CString("mountain04"));
Transform997.setTranslation(new float[]{0,-40,-1350});
LOD& LOD998 =  LOD();
LOD998.setRange(new float[]{400}, 1);
Transform& Transform999 =  Transform();
Transform999.setDEF(CString("mount"));
Inline& Inline1000 =  Inline();
Inline1000.setUrl(new CString[]{CString("mount.x3d")}, 1);
Inline1000.setBboxSize(new float[]{68.9251,65.6877,67.5461});
Inline1000.setBboxCenter(new float[]{0.876749,32.3308,1.45545});
Transform999.addChild(&Inline1000);

LOD998.addChildren(&Transform999);

Transform& Transform1001 =  Transform();
LOD998.addChildren(&Transform1001);

Transform997.addChild(&LOD998);

LOD& LOD1002 =  LOD();
LOD1002.setRange(new float[]{120}, 1);
Transform& Transform1003 =  Transform();
Transform1003.setDEF(CString("proxyOn_29"));
Transform& Transform1004 =  Transform();
Transform1004.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor1005 =  ProximitySensor();
ProximitySensor1005.setDEF(CString("_70"));
ProximitySensor1005.setSize(new float[]{60,25,60});
Transform1004.addChild(&ProximitySensor1005);

Transform1003.addChild(&Transform1004);

Transform& Transform1006 =  Transform();
Transform1006.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor1007 =  ProximitySensor();
ProximitySensor1007.setDEF(CString("_71"));
ProximitySensor1007.setSize(new float[]{25,35,25});
Transform1006.addChild(&ProximitySensor1007);

Transform1003.addChild(&Transform1006);

LOD1002.addChildren(&Transform1003);

Transform& Transform1008 =  Transform();
Transform1008.setDEF(CString("proxyOff_30"));
LOD1002.addChildren(&Transform1008);

Transform997.addChild(&LOD1002);

Transform936.addChild(&Transform997);

Transform& Transform1009 =  Transform();
Transform1009.setDEF(CString("mountain05"));
Transform1009.setTranslation(new float[]{50,-40,-1210});
LOD& LOD1010 =  LOD();
LOD1010.setRange(new float[]{400}, 1);
Transform& Transform1011 =  Transform();
Transform1011.setDEF(CString("mountObj_4"));
Shape& Shape1012 =  Shape();
Appearance& Appearance1013 =  Appearance();
PixelTexture& PixelTexture1014 =  PixelTexture();
PixelTexture1014.setUSE(CString("_63"));
Appearance1013.addChild(&PixelTexture1014);

Shape1012.addChild(&Appearance1013);

IndexedFaceSet& IndexedFaceSet1015 =  IndexedFaceSet();
IndexedFaceSet1015.setColorIndex(new int[]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1}, 128);
IndexedFaceSet1015.setTexCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
IndexedFaceSet1015.setCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
CColor& Color1016 =  CColor();
Color1016.setColor(new float[]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785}, 27);
IndexedFaceSet1015.setColor(&Color1016);

TextureCoordinate& TextureCoordinate1017 =  TextureCoordinate();
TextureCoordinate1017.setPoint(new float[]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528}, 50);
IndexedFaceSet1015.setTexCoord(&TextureCoordinate1017);

Coordinate& Coordinate1018 =  Coordinate();
Coordinate1018.setPoint(new float[]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345}, 75);
IndexedFaceSet1015.setCoord(&Coordinate1018);

Shape1012.setGeometry(&IndexedFaceSet1015);

Transform1011.addChild(&Shape1012);

LOD1010.addChildren(&Transform1011);

Transform& Transform1019 =  Transform();
LOD1010.addChildren(&Transform1019);

Transform1009.addChild(&LOD1010);

LOD& LOD1020 =  LOD();
LOD1020.setRange(new float[]{120}, 1);
Transform& Transform1021 =  Transform();
Transform1021.setDEF(CString("proxyOn_30"));
Transform& Transform1022 =  Transform();
Transform1022.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor1023 =  ProximitySensor();
ProximitySensor1023.setDEF(CString("_72"));
ProximitySensor1023.setSize(new float[]{60,25,60});
Transform1022.addChild(&ProximitySensor1023);

Transform1021.addChild(&Transform1022);

Transform& Transform1024 =  Transform();
Transform1024.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor1025 =  ProximitySensor();
ProximitySensor1025.setDEF(CString("_73"));
ProximitySensor1025.setSize(new float[]{25,35,25});
Transform1024.addChild(&ProximitySensor1025);

Transform1021.addChild(&Transform1024);

LOD1020.addChildren(&Transform1021);

Transform& Transform1026 =  Transform();
Transform1026.setDEF(CString("proxyOff_31"));
LOD1020.addChildren(&Transform1026);

Transform1009.addChild(&LOD1020);

Transform936.addChild(&Transform1009);

Transform& Transform1027 =  Transform();
Transform1027.setDEF(CString("mountain06"));
Transform1027.setTranslation(new float[]{100,-40,-1300});
LOD& LOD1028 =  LOD();
LOD1028.setRange(new float[]{400}, 1);
Transform& Transform1029 =  Transform();
Transform1029.setDEF(CString("mountObj"));
Shape& Shape1030 =  Shape();
Appearance& Appearance1031 =  Appearance();
PixelTexture& PixelTexture1032 =  PixelTexture();
PixelTexture1032.setUSE(CString("_63"));
Appearance1031.addChild(&PixelTexture1032);

Shape1030.addChild(&Appearance1031);

IndexedFaceSet& IndexedFaceSet1033 =  IndexedFaceSet();
IndexedFaceSet1033.setColorIndex(new int[]{7,1,3,-1,1,8,3,-1,2,2,3,-1,2,2,3,-1,2,2,0,-1,2,4,0,-1,2,2,6,-1,2,2,6,-1,2,0,2,-1,2,2,0,-1,8,1,0,-1,1,5,0,-1,5,1,6,-1,1,0,6,-1,0,1,0,-1,1,7,0,-1,4,0,0,-1,4,2,0,-1,2,0,7,-1,2,2,0,-1,2,7,3,-1,2,2,7,-1,2,2,8,-1,2,3,8,-1,2,2,6,-1,2,5,6,-1,2,2,0,-1,2,6,0,-1,5,2,0,-1,5,2,2,-1,2,8,0,-1,2,2,8,-1}, 128);
IndexedFaceSet1033.setTexCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,1,16,-1,1,14,16,-1,13,3,11,-1,3,9,11,-1,21,2,19,-1,2,18,19,-1,0,23,22,-1,0,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
IndexedFaceSet1033.setCoordIndex(new int32_t[]{10,6,16,-1,6,15,16,-1,17,0,16,-1,0,14,16,-1,13,1,11,-1,1,9,11,-1,21,2,19,-1,2,18,19,-1,3,23,22,-1,3,24,23,-1,15,6,23,-1,6,20,23,-1,20,6,19,-1,6,12,19,-1,12,6,11,-1,6,10,11,-1,9,12,11,-1,9,7,12,-1,4,11,10,-1,4,13,11,-1,14,10,16,-1,14,4,10,-1,8,17,15,-1,17,16,15,-1,18,5,19,-1,5,20,19,-1,7,21,12,-1,21,19,12,-1,20,22,23,-1,20,5,22,-1,24,15,23,-1,24,8,15,-1}, 128);
CColor& Color1034 =  CColor();
Color1034.setColor(new float[]{0.8,0.8,0.8,0.645532,0.909091,0.494366,0.8,0.630835,0.476646,0.566845,0.446982,0.337731,0.609626,0.480716,0.36322,0.272727,0.272727,0.272727,0.347594,0.347594,0.347594,0.368984,0.347047,0.29732,0.95438,1,0.965785}, 27);
IndexedFaceSet1033.setColor(&Color1034);

TextureCoordinate& TextureCoordinate1035 =  TextureCoordinate();
TextureCoordinate1035.setPoint(new float[]{0.340525,2.91025,0.154495,0.495154,2.57475,2.67514,2.47467,0.166439,1.27057,0.0454506,1.44706,2.6369,1.44706,1.459,2.96966,1.459,0,1.459,2.73961,0.812718,1.27057,0.979851,2.09333,0.812718,2.09333,1.459,2.09333,0,0.800775,0.166439,0.528153,1.459,0.800775,0.643889,0.154495,0.812718,2.09333,2.75156,1.89632,1.93699,1.44706,2.27165,2.73961,2.10528,0.800775,2.91025,0.868536,2.09962,0,2.10528}, 50);
IndexedFaceSet1033.setTexCoord(&TextureCoordinate1035);

Coordinate& Coordinate1036 =  Coordinate();
Coordinate1036.setPoint(new float[]{-30,-0.513032,23.7361,23.8506,-0.513032,31.3655,26.1736,-0.513032,-26.8608,-25.6823,-0.513032,-32.3176,-4.09628,-0.513032,34.1736,0,-0.513032,-25.9734,0,65.1747,1.36555,35.3393,-0.513032,1.36555,-33.5858,-0.513032,1.36555,30,-0.513032,16.3655,-4.09628,33.2383,12.4864,15,14.9776,16.3655,15,30.969,1.36555,15,-0.513032,35.2285,-15,-0.513032,31.3655,-21.3275,30.969,1.36555,-15,22.7448,20.284,-30,-0.513032,16.3655,15,-0.513032,-28.6345,10.4273,23.8612,-9.72855,0,21.1166,-17.496,30,-0.513032,-13.6345,-15,-0.513032,-32.3176,-13.4273,23.2023,-13.5031,-33.5858,-0.513032,-13.6345}, 75);
IndexedFaceSet1033.setCoord(&Coordinate1036);

Shape1030.setGeometry(&IndexedFaceSet1033);

Transform1029.addChild(&Shape1030);

LOD1028.addChildren(&Transform1029);

Transform& Transform1037 =  Transform();
LOD1028.addChildren(&Transform1037);

Transform1027.addChild(&LOD1028);

LOD& LOD1038 =  LOD();
LOD1038.setRange(new float[]{120}, 1);
Transform& Transform1039 =  Transform();
Transform1039.setDEF(CString("proxyOn_31"));
Transform& Transform1040 =  Transform();
Transform1040.setTranslation(new float[]{0,8.959,0});
ProximitySensor& ProximitySensor1041 =  ProximitySensor();
ProximitySensor1041.setDEF(CString("_74"));
ProximitySensor1041.setSize(new float[]{60,25,60});
Transform1040.addChild(&ProximitySensor1041);

Transform1039.addChild(&Transform1040);

Transform& Transform1042 =  Transform();
Transform1042.setTranslation(new float[]{-2.6391,39.2868,0});
ProximitySensor& ProximitySensor1043 =  ProximitySensor();
ProximitySensor1043.setDEF(CString("_75"));
ProximitySensor1043.setSize(new float[]{25,35,25});
Transform1042.addChild(&ProximitySensor1043);

Transform1039.addChild(&Transform1042);

LOD1038.addChildren(&Transform1039);

Transform& Transform1044 =  Transform();
Transform1044.setDEF(CString("proxyOff_32"));
LOD1038.addChildren(&Transform1044);

Transform1027.addChild(&LOD1038);

Transform936.addChild(&Transform1027);

Transform935.addChild(&Transform936);

Transform& Transform1045 =  Transform();
Transform1045.setDEF(CString("s2"));
Transform& Transform1046 =  Transform();
Transform1046.setDEF(CString("saule07"));
Transform1046.setTranslation(new float[]{0,0,-1550});
LOD& LOD1047 =  LOD();
LOD1047.setRange(new float[]{400}, 1);
Inline& Inline1048 =  Inline();
Inline1048.setUrl(new CString[]{CString("saule.x3d")}, 1);
Inline1048.setBboxSize(new float[]{23.54,88.8706,23.5402});
Inline1048.setBboxCenter(new float[]{0,4.43541,0});
LOD1047.addChildren(Inline1048);

Transform& Transform1049 =  Transform();
Transform1049.setDEF(CString("alertEmpty_1"));
LOD1047.addChildren(&Transform1049);

Transform1046.addChild(&LOD1047);

LOD& LOD1050 =  LOD();
LOD1050.setRange(new float[]{40}, 1);
Transform& Transform1051 =  Transform();
ProximitySensor& ProximitySensor1052 =  ProximitySensor();
ProximitySensor1052.setDEF(CString("_76"));
ProximitySensor1052.setSize(new float[]{25,100,25});
Transform1051.addChild(&ProximitySensor1052);

LOD1050.addChildren(&Transform1051);

Transform& Transform1053 =  Transform();
Transform1053.setDEF(CString("proxyOff_33"));
LOD1050.addChildren(&Transform1053);

Transform1046.addChild(&LOD1050);

Transform1045.addChild(&Transform1046);

Transform& Transform1054 =  Transform();
Transform1054.setDEF(CString("saule06"));
Transform1054.setTranslation(new float[]{-30,0,-1500});
LOD& LOD1055 =  LOD();
LOD1055.setRange(new float[]{400}, 1);
Inline& Inline1056 =  Inline();
Inline1056.setUrl(new CString[]{CString("saule.x3d")}, 1);
Inline1056.setBboxSize(new float[]{23.54,88.8706,23.5402});
Inline1056.setBboxCenter(new float[]{0,4.43541,0});
LOD1055.addChildren(Inline1056);

Transform& Transform1057 =  Transform();
Transform1057.setDEF(CString("alertEmpty_2"));
LOD1055.addChildren(&Transform1057);

Transform1054.addChild(&LOD1055);

LOD& LOD1058 =  LOD();
LOD1058.setRange(new float[]{40}, 1);
Transform& Transform1059 =  Transform();
ProximitySensor& ProximitySensor1060 =  ProximitySensor();
ProximitySensor1060.setDEF(CString("_77"));
ProximitySensor1060.setSize(new float[]{25,100,25});
Transform1059.addChild(&ProximitySensor1060);

LOD1058.addChildren(&Transform1059);

Transform& Transform1061 =  Transform();
Transform1061.setDEF(CString("proxyOff_34"));
LOD1058.addChildren(&Transform1061);

Transform1054.addChild(&LOD1058);

Transform1045.addChild(&Transform1054);

Transform& Transform1062 =  Transform();
Transform1062.setDEF(CString("saule05"));
Transform1062.setTranslation(new float[]{16,0,-1452.89});
LOD& LOD1063 =  LOD();
LOD1063.setRange(new float[]{400}, 1);
Inline& Inline1064 =  Inline();
Inline1064.setUrl(new CString[]{CString("saule.x3d")}, 1);
Inline1064.setBboxSize(new float[]{23.54,88.8706,23.5402});
Inline1064.setBboxCenter(new float[]{0,4.43541,0});
LOD1063.addChildren(Inline1064);

Transform& Transform1065 =  Transform();
Transform1065.setDEF(CString("alertEmpty_3"));
LOD1063.addChildren(&Transform1065);

Transform1062.addChild(&LOD1063);

LOD& LOD1066 =  LOD();
LOD1066.setRange(new float[]{40}, 1);
Transform& Transform1067 =  Transform();
Transform1067.setDEF(CString("proxyOn_32"));
ProximitySensor& ProximitySensor1068 =  ProximitySensor();
ProximitySensor1068.setDEF(CString("_78"));
ProximitySensor1068.setSize(new float[]{25,100,25});
Transform1067.addChild(&ProximitySensor1068);

LOD1066.addChildren(&Transform1067);

Transform& Transform1069 =  Transform();
Transform1069.setDEF(CString("proxyOff_35"));
LOD1066.addChildren(&Transform1069);

Transform1062.addChild(&LOD1066);

Transform1045.addChild(&Transform1062);

Transform935.addChild(&Transform1045);

Transform& Transform1070 =  Transform();
Transform1070.setDEF(CString("s1"));
Transform& Transform1071 =  Transform();
Transform1071.setDEF(CString("saule01"));
Transform1071.setTranslation(new float[]{-16,0,-674});
Transform& Transform1072 =  Transform();
Transform1072.setDEF(CString("objLOD_12"));
LOD& LOD1073 =  LOD();
LOD1073.setRange(new float[]{400}, 1);
Transform& Transform1074 =  Transform();
Transform1074.setTranslation(new float[]{0,3.2291,0});
Transform1074.setScale(new float[]{1,3.72126,1});
Shape& Shape1075 =  Shape();
Appearance& Appearance1076 =  Appearance();
PixelTexture& PixelTexture1077 =  PixelTexture();
PixelTexture1077.setDEF(CString("_79"));
PixelTexture1077.setImage(CString("126 134 1 79 68 96 93 68 141 178 184 187 199 184 220 239 207 238 218 207 246 247 239 234 207 218 239 223 215 219 220 225 220 215 192 194 195 207 209 208 210 193 177 149 161 174 186 174 181 189 157 162 197 195 236 246 207 159 130 123 115 157 87 1 3 38 99 69 64 83 96 74 64 184 189 182 198 187 225 232 237 230 211 246 239 241 211 229 239 207 217 218 224 219 215 181 190 209 208 208 211 181 168 165 120 33 232 176 194 163 198 148 194 194 203 237 228 181 161 130 118 149 135 23 5 9 91 76 83 3 1 2 1 0 21 88 52 60 36 40 5 2 14 20 16 51 33 35 32 49 93 89 9 56 70 72 110 98 111 110 106 131 130 122 96 111 123 92 103 94 169 25 239 223 75 27 121 101 151 182 70 53 63 127 115 22 17 165 81 0 0 22 20 3 1 1 4 0 0 86 57 64 38 38 2 6 21 18 47 36 24 39 58 78 22 62 67 89 104 110 108 109 140 125 106 111 123 96 112 147 32 0 197 238 202 6 122 101 156 158 134 72 73 63 118 115 15 124 130 9 0 12 16 18 5 4 4 15 16 0 88 165 79 98 121 106 85 85 52 43 18 190 36 4 5 5 77 250 219 77 11 6 20 24 15 3 4 18 36 34 25 38 39 57 51 9 7 0 242 207 63 85 75 51 209 71 83 60 82 72 116 70 72 20 35 1 6 12 27 14 2 10 16 6 0 230 97 81 122 107 79 71 36 7 175 35 3 6 1 254 189 24 12 12 26 10 5 3 38 36 26 34 46 55 33 7 4 0 87 241 133 22 136 59 123 150 81 81 71 62 116 111 76 14 73 1 1 12 15 32 15 4 2 8 13 0 95 236 202 157 163 149 90 109 106 113 89 124 175 75 27 3 6 104 189 148 119 80 86 103 130 55 19 104 83 107 93 81 93 107 115 89 81 1 214 211 118 157 48 47 241 67 42 51 134 56 106 71 145 5 35 1 6 23 22 14 1 6 9 6 0 241 209 165 164 143 92 95 107 69 131 171 24 25 0 139 204 113 116 79 101 127 84 36 105 92 99 81 95 116 105 98 15 0 46 213 140 131 122 38 166 133 58 39 99 104 55 106 81 74 29 5 2 16 18 29 15 13 5 8 2 0 113 241 159 131 174 165 151 122 152 125 171 107 169 190 224 123 147 68 64 112 147 154 158 163 225 30 114 99 147 130 159 166 157 161 154 126 170 20 180 156 111 154 114 63 119 81 89 120 21 132 80 66 94 23 14 2 3 39 27 35 6 10 6 7 0 250 190 124 171 163 148 122 121 110 143 168 217 214 141 61 66 129 148 151 164 199 58 166 86 148 147 165 159 155 135 168 53 0 58 183 111 150 147 108 104 96 79 92 96 71 61 87 71 76 7 5 2 18 32 38 37 8 2 7 6 0 92 223 151 156 152 175 129 194 152 134 200 97 203 197 197 193 188 163 99 169 132 177 147 175 172 43 194 120 202 208 207 182 189 186 190 164 184 61 71 36 49 94 92 63 99 109 3 0 43 37 75 98 125 3 9 4 5 18 17 19 4 0 7 6 0 247 171 152 154 169 144 186 135 169 124 202 178 200 202 144 115 149 140 161 175 145 47 227 145 204 207 181 194 187 189 183 63 0 51 78 26 100 91 86 90 101 51 3 6 53 40 76 108 58 7 2 4 8 20 23 20 7 5 0 0 4 141 186 188 140 163 174 182 184 156 158 159 172 133 145 144 236 162 143 114 104 161 135 147 123 161 170 99 96 176 163 152 157 181 195 205 180 195 51 131 49 136 46 187 92 86 46 1 60 125 49 121 104 58 5 16 5 8 6 9 23 3 5 1 1 0 246 157 161 157 178 183 163 145 144 159 127 139 194 207 127 110 129 159 143 124 168 181 54 164 172 159 157 187 204 204 186 104 0 66 136 40 108 136 177 65 69 16 1 139 85 60 119 111 23 22 4 6 6 6 23 23 14 1 0 6 12 172 199 170 89 118 114 163 162 140 162 183 218 188 210 169 178 166 161 166 124 175 132 119 177 214 147 79 178 166 175 158 143 142 162 183 168 214 38 157 115 161 23 225 111 88 21 8 125 46 9 133 75 23 7 14 3 1 6 11 40 8 0 5 0 5 246 156 119 111 120 158 152 130 139 177 175 188 172 177 158 156 154 176 119 172 214 183 95 169 187 164 143 142 181 178 200 138 2 68 161 99 115 130 218 63 76 1 11 106 63 12 132 81 5 18 11 4 2 10 30 39 4 5 7 0 1 47 246 171 130 129 118 93 199 124 84 66 60 82 100 207 202 209 204 210 237 135 67 97 27 145 58 11 1 5 39 98 143 165 178 171 163 175 7 98 0 89 89 103 64 104 76 0 2 140 67 100 126 101 3 15 2 8 10 9 9 2 3 3 3 0 193 214 131 121 114 105 138 79 103 34 41 171 188 178 156 219 222 116 78 35 142 130 5 0 9 62 144 168 177 150 202 23 0 59 93 0 118 100 96 82 79 37 0 78 90 85 99 135 48 19 1 4 9 6 18 9 10 1 5 9 2 0 182 241 158 147 186 110 5 0 0 0 1 6 5 93 210 139 112 242 207 57 59 38 20 87 194 39 0 9 0 10 106 132 162 158 151 28 2 140 122 66 78 123 77 78 135 35 40 20 63 63 91 124 3 12 6 7 28 23 31 5 5 7 8 0 49 245 174 166 194 30 0 2 74 44 4 113 122 89 34 188 0 2 66 2 7 3 0 41 25 23 78 125 127 147 48 0 0 71 132 99 86 114 115 87 108 76 39 37 58 27 68 101 47 4 6 6 14 34 27 33 11 6 9 5 5 5 0 181 220 143 199 107 14 28 22 1 14 20 6 100 97 81 71 78 115 25 6 17 12 31 251 155 0 13 4 2 4 6 7 4 5 20 2 187 193 125 229 80 50 215 49 64 121 63 106 82 59 105 34 18 1 2 37 27 30 5 11 6 6 0 208 147 123 99 28 1 47 7 3 31 69 220 192 158 133 155 103 80 115 81 8 18 0 49 51 40 1 35 107 66 0 1 3 28 188 115 198 176 72 151 115 48 64 129 77 63 87 63 105 10 5 1 18 26 40 32 3 2 8 13 1 12 3 96 193 44 207 181 59 4 20 1 3 10 2 172 90 116 97 7 113 84 13 20 10 21 248 166 0 19 21 16 10 17 13 12 18 26 1 210 205 114 148 44 43 237 66 41 44 126 52 107 74 149 4 32 1 7 23 21 15 1 6 9 6 0 217 123 141 156 72 9 120 29 7 0 46 225 178 142 142 116 127 83 59 63 5 18 3 50 193 171 49 77 197 132 0 4 0 44 208 134 127 113 35 158 129 62 39 90 99 54 108 82 70 25 5 2 16 18 28 16 5 5 13 8 1 16 2 151 242 172 233 136 207 2 15 4 4 6 86 250 194 163 151 92 114 116 6 13 28 0 247 118 98 116 5 44 3 4 9 9 18 25 9 243 227 50 76 134 91 162 101 71 96 69 132 93 69 20 82 43 0 3 13 33 14 3 9 13 4 0 197 220 192 138 150 0 217 120 63 0 2 246 186 214 134 110 149 133 115 80 20 18 1 42 124 107 32 0 168 120 0 6 0 131 242 170 4 187 114 132 169 55 74 114 59 127 94 67 21 103 1 0 9 19 34 16 7 6 13 14 1 10 4 148 239 233 247 65 241 115 82 19 0 180 251 220 172 134 140 197 93 208 70 64 4 58 248 227 1 255 18 24 5 9 8 11 23 25 158 197 159 104 30 99 111 194 215 199 170 134 125 116 26 23 180 107 0 0 30 25 3 4 6 17 7 0 100 9 1 220 171 144 3 188 243 9 0 184 219 168 148 168 110 138 122 94 15 18 0 194 88 85 72 2 241 77 1 11 0 236 188 166 26 108 81 177 200 219 203 151 114 136 115 18 142 148 20 0 12 23 16 5 10 3 7 18 5 18 8 89 239 243 233 181 143 208 100 0 165 250 204 234 211 169 145 109 110 134 77 51 2 217 242 243 24 237 35 6 5 11 16 23 14 62 219 155 126 123 147 147 92 41 73 92 46 20 101 133 147 131 96 82 0 22 56 2 42 4 9 12 10 0 213 131 78 69 3 157 22 21 109 23 0 61 202 192 171 156 91 99 100 70 18 18 0 245 143 118 23 20 170 83 3 9 46 205 156 127 99 194 142 54 64 67 97 12 47 151 129 144 106 113 13 1 72 7 24 41 5 7 5 7 2 9 18 5 246 203 229 223 127 123 50 0 43 248 234 218 197 199 184 103 88 152 74 40 4 119 246 197 203 61 81 10 4 10 18 20 13 233 208 210 174 174 208 92 72 75 110 132 92 107 17 1 13 63 93 104 0 46 47 54 34 2 5 4 9 0 37 192 82 207 186 51 141 10 149 34 0 62 182 158 151 164 56 69 123 97 23 14 0 204 182 118 95 38 3 2 22 11 143 238 210 155 203 174 92 89 73 127 131 99 57 0 2 10 98 139 10 2 81 20 87 32 6 6 5 23 3 10 22 2 245 207 200 207 168 46 11 5 0 250 222 213 190 228 214 152 61 114 53 40 2 97 247 175 171 52 77 13 10 18 25 20 30 214 208 193 96 141 159 106 107 79 88 145 163 144 28 7 1 2 70 114 0 26 16 30 35 2 6 13 13 3 0 209 115 182 229 65 145 27 178 9 0 106 136 161 138 200 49 82 127 86 9 19 0 125 159 188 171 1 23 10 15 20 140 225 193 87 157 155 105 134 58 104 147 162 103 1 12 0 67 92 16 2 35 7 63 34 4 9 3 7 7 20 18 18 6 247 214 184 151 4 14 7 0 250 247 203 141 111 140 204 105 116 7 2 8 0 255 247 192 63 87 6 7 15 25 10 172 194 200 189 98 189 232 118 112 5 148 74 207 181 90 3 20 69 151 108 0 2 4 52 16 2 10 4 5 10 0 38 217 199 200 200 69 18 177 0 82 218 152 156 126 169 20 89 112 67 13 13 0 164 140 159 0 7 23 8 5 180 181 210 190 79 215 232 125 42 124 38 88 209 150 38 7 16 116 163 23 1 7 7 67 16 7 7 20 12 4 12 26 17 0 248 242 228 207 61 23 24 0 255 248 220 172 148 156 163 133 247 101 84 9 0 190 251 52 0 19 31 5 32 33 5 195 205 199 166 96 178 245 132 54 98 126 83 229 44 89 14 25 46 78 176 1 12 75 88 16 3 13 17 7 6 4 0 197 158 109 76 245 192 16 0 246 211 204 163 143 171 70 31 165 85 40 4 10 170 172 120 4 20 18 5 49 158 159 217 165 101 238 200 143 4 217 36 101 142 74 38 20 22 67 178 30 3 14 126 52 20 4 4 9 4 4 18 24 12 0 85 236 187 154 115 115 7 18 225 222 202 123 158 165 134 132 236 38 139 35 0 195 255 33 6 35 12 9 26 12 21 225 178 199 177 111 119 189 165 83 161 40 5 134 210 57 71 52 113 83 54 19 25 40 78 9 2 7 9 2 7 3 9 0 242 228 159 77 30 50 1 209 170 172 176 104 164 175 95 122 108 70 4 193 112 96 101 18 21 10 1 219 169 161 200 180 89 126 230 159 111 100 12 4 247 115 62 73 52 103 81 22 24 20 87 34 14 3 6 12 5 3 10 16 15 2 80 247 211 187 139 96 32 45 225 215 187 147 176 182 118 103 217 48 116 63 0 165 254 64 10 56 14 10 22 5 38 224 159 208 134 106 108 224 135 92 171 60 32 83 198 136 83 48 65 134 12 17 18 18 38 4 1 9 9 3 5 4 14 0 207 245 193 90 54 71 13 175 169 161 169 106 156 151 155 72 113 70 16 175 95 73 97 23 22 12 5 202 157 157 197 138 87 170 210 131 138 53 95 23 184 125 142 83 48 74 124 2 21 16 32 18 7 3 5 7 10 5 12 18 11 9 12 96 237 202 174 195 18 135 211 198 177 182 166 178 145 113 136 151 78 165 5 186 233 73 53 10 17 15 25 74 159 187 175 217 154 109 80 234 10 58 95 89 107 40 56 67 105 165 72 63 75 14 18 23 15 5 2 6 9 8 5 9 13 2 26 169 222 107 123 120 107 163 161 161 149 125 162 150 166 95 111 66 113 129 127 87 85 12 14 5 87 193 123 136 220 155 100 136 141 10 141 85 116 100 54 48 91 103 169 39 87 23 19 14 23 15 6 3 10 7 8 1 1 18 14 18 1 1 252 202 186 168 178 174 155 193 145 187 165 161 184 190 151 183 157 122 69 164 130 178 62 23 21 7 3 188 186 169 193 192 187 103 58 234 123 78 43 222 135 106 63 111 94 75 72 130 20 20 10 14 5 3 1 16 6 6 1 4 10 1 3 4 255 188 181 141 141 149 174 156 141 142 166 155 131 169 53 148 157 151 113 82 64 19 1 202 203 168 161 136 208 188 79 74 238 124 37 107 208 143 47 120 82 96 78 61 82 37 19 18 6 5 4 3 8 5 1 5 10 15 20 8 12 0 229 200 207 197 165 156 204 133 125 158 162 156 169 155 176 123 166 78 132 140 95 245 51 7 5 11 186 162 145 186 177 165 180 114 73 151 114 51 170 95 166 171 37 170 76 16 24 1 1 3 12 1 4 4 2 5 6 4 6 1 7 3 20 4 78 217 182 159 158 140 101 90 174 199 174 147 155 176 162 76 133 145 165 105 100 3 148 166 121 149 165 147 175 181 98 47 211 101 113 129 120 175 84 89 144 79 18 12 0 0 3 6 0 5 5 9 5 7 2 4 14 9 18 14 17 0 210 207 194 171 139 161 213 119 97 193 154 166 183 169 183 169 183 110 170 147 93 239 47 6 4 81 165 157 123 177 161 187 159 136 68 198 148 135 181 145 180 164 74 69 3 0 0 0 0 0 8 0 0 0 7 5 4 1 6 1 6 4 23 18 14 238 186 165 147 177 17 6 98 218 107 63 96 204 136 40 35 108 151 145 96 3 189 176 139 121 195 150 199 155 143 73 209 141 164 159 168 184 119 74 33 4 0 0 0 0 1 6 0 0 1 6 4 2 12 4 10 10 17 18 8 4 45 246 133 171 133 132 208 123 0 188 211 143 21 1 0 0 3 23 90 175 164 238 24 10 92 174 101 143 168 197 150 159 155 122 197 166 236 132 89 31 64 77 123 108 165 225 245 170 192 5 41 15 248 23 1 2 6 9 6 0 5 9 20 23 5 193 180 151 161 251 36 1 28 248 71 1 2 0 0 0 3 1 3 1 3 18 74 164 147 171 142 164 181 144 177 139 246 234 61 98 13 64 87 123 127 164 227 232 218 29 16 30 96 188 30 16 3 10 4 7 3 14 16 11 15 12 1 125 229 208 134 121 187 125 0 217 53 89 13 7 1 20 14 3 3 3 13 147 3 18 105 136 127 130 118 156 144 195 14 0 193 151 214 114 110 27 195 194 202 211 181 157 148 203 93 2 26 27 239 99 2 10 8 7 8 1 2 7 16 18 10 176 124 68 3 6 188 3 98 0 3 25 21 3 6 5 8 6 7 9 6 18 5 208 175 156 163 124 127 9 53 170 211 211 97 45 106 184 205 207 194 182 156 163 209 5 4 36 109 230 106 28 11 7 14 3 2 6 12 11 12 17 6 1 24 52 168 176 161 122 11 207 217 210 100 63 1 26 20 7 1 9 10 5 3 99 164 150 100 159 162 154 155 181 126 85 174 198 103 200 34 97 158 174 139 166 171 131 123 169 154 1 23 9 228 115 8 10 4 17 3 4 7 12 10 14 16 234 141 180 88 26 172 46 190 174 58 4 18 10 6 1 6 6 15 23 14 33 3 213 143 181 138 187 175 119 133 150 215 101 192 47 145 151 152 183 172 169 130 138 203 27 4 8 98 238 121 31 3 1 9 5 6 18 16 14 18 22 11 12 30 4 141 126 111 198 220 198 139 192 110 104 9 15 15 4 12 17 16 15 11 200 108 187 94 130 139 169 171 223 3 4 234 181 121 95 37 78 157 182 149 99 187 150 151 165 92 2 6 96 193 122 9 3 6 4 5 3 12 9 19 11 70 165 99 170 135 126 158 205 157 188 75 120 44 12 14 4 4 20 15 17 15 9 73 209 178 156 169 169 135 1 143 168 213 120 84 27 116 151 181 108 148 181 151 148 163 6 4 10 182 205 129 49 1 5 2 6 6 18 19 18 18 19 13 16 22 37 181 130 159 209 197 218 138 157 159 68 10 18 21 5 9 14 4 57 30 177 103 145 108 144 123 161 156 202 22 16 122 181 151 108 82 101 155 140 149 140 154 125 141 188 75 5 5 114 161 141 21 2 4 3 6 6 7 9 23 5 129 188 154 180 143 104 197 229 243 193 65 106 51 12 11 5 4 19 20 20 24 2 124 187 155 168 162 171 120 23 52 131 202 150 74 106 103 151 145 125 157 151 126 142 200 4 11 12 194 170 152 77 4 2 1 3 6 14 19 13 10 10 12 16 30 41 86 72 127 203 209 232 188 214 131 113 6 13 14 5 7 11 8 34 159 103 174 127 122 150 189 155 140 177 69 152 65 168 202 92 40 0 182 204 118 190 144 133 156 110 42 6 18 28 181 147 44 2 2 3 3 3 3 18 16 6 227 78 115 99 151 222 106 193 155 199 92 37 8 7 7 4 7 9 9 11 9 0 156 140 105 126 170 149 119 76 124 94 243 195 54 9 30 172 166 129 184 144 135 132 136 0 14 5 132 163 163 86 2 9 3 0 4 16 13 23 16 19 6 14 14 13 22 6 86 176 236 174 43 182 18 175 6 13 7 7 2 53 71 3 98 166 156 138 171 186 190 211 181 229 87 75 90 109 163 52 73 63 174 193 151 169 169 132 170 124 56 3 8 16 159 156 52 1 10 2 1 3 3 4 20 16 86 90 120 109 227 106 118 217 164 112 20 77 10 15 6 12 12 5 6 97 51 2 97 187 138 132 134 147 220 81 161 19 208 152 73 21 135 163 177 145 187 169 134 182 85 7 5 4 88 170 175 79 2 5 10 4 2 11 9 14 9 12 3 13 32 18 19 1 217 125 241 229 187 170 207 192 13 10 14 5 18 199 113 2 18 9 9 10 19 20 38 48 53 157 34 80 78 148 164 126 0 16 207 168 174 163 125 192 192 141 78 4 23 26 210 139 50 0 5 8 5 1 3 1 12 2 107 73 158 84 204 177 190 207 180 132 197 184 92 5 7 14 8 6 14 5 6 14 6 76 147 163 158 149 139 28 127 96 181 171 28 2 92 195 163 182 125 130 197 149 170 2 12 9 132 183 157 25 2 10 6 6 3 6 7 12 9 9 2 10 31 14 22 2 255 178 224 208 123 135 207 180 7 7 3 16 31 92 45 5 12 31 14 14 27 16 27 26 12 129 66 78 29 181 148 99 0 19 225 200 140 135 105 163 151 144 78 2 10 21 114 51 11 9 0 11 6 1 3 1 8 4 113 29 163 99 200 210 225 229 149 166 180 192 148 3 4 14 12 10 14 13 17 18 8 134 207 159 156 164 149 61 57 89 203 155 38 1 100 219 147 159 101 109 169 109 200 1 5 8 67 95 60 39 4 2 8 5 1 1 4 4 2 3 1 18 28 17 20 6 22 180 204 165 121 123 163 18 0 3 4 3 16 5 13 10 18 24 23 20 16 21 34 7 23 122 59 15 7 33 220 222 0 41 103 155 228 180 194 199 211 215 94 2 14 11 15 34 30 1 6 7 5 1 5 5 10 7 45 11 54 36 155 85 202 232 162 133 178 142 170 26 1 6 1 13 4 12 6 7 11 38 38 33 82 99 156 52 9 1 156 223 61 0 86 91 209 211 188 193 202 192 230 1 7 14 18 11 44 23 2 2 1 7 4 0 1 0 1 3 1 4 8 12 12 9 6 79 154 225 217 220 209 3 1 3 6 9 8 9 20 14 20 9 10 21 11 6 2 20 22 79 223 123 47 12 208 131 0 0 0 1 0 0 34 34 13 3 1 4 3 12 23 20 18 2 2 3 7 1 10 2 7 2 2 3 5 1 131 2 23 136 104 50 34 20 19 4 5 2 2 5 6 12 3 7 6 4 5 4 7 0 222 215 63 14 115 211 9 0 0 0 0 0 7 30 35 4 1 2 5 3 19 23 25 1 4 3 7 4 2 1 3 3 6 6 1 4 2 4 6 5 5 5 0 47 110 104 116 17 0 3 6 9 5 12 12 11 3 3 5 1 0 3 5 6 6 37 38 105 75 110 61 61 2 214 115 33 72 31 98 10 27 54 33 2 1 1 4 4 1 3 6 7 4 0 7 24 23 23 7 16 10 10 92 6 31 67 97 134 169 149 158 56 2 6 9 5 9 26 16 2 7 9 10 12 20 0 63 30 132 69 123 60 44 65 188 120 16 68 54 95 7 72 44 10 4 1 0 6 5 1 1 3 10 8 6 4 3 4 7 7 5 10 9 11 13 14 4 9 2 1 2 3 1 1 5 0 1 2 0 2 1 4 5 4 9 3 2 7 5 7 2 99 130 105 99 155 130 135 16 252 217 133 152 7 189 50 122 85 92 1 2 0 13 6 0 1 8 9 9 0 6 12 14 18 9 19 14 10 64 86 60 1 27 12 55 39 58 1 6 8 6 4 10 15 6 6 9 12 14 14 16 0 217 111 119 105 190 124 122 90 250 218 135 66 26 188 46 169 70 43 5 0 7 13 6 4 7 4 0 1 2 2 0 9 5 5 5 6 6 9 9 10 10 6 9 6 5 9 3 4 9 7 5 2 10 9 7 8 13 6 4 3 7 5 3 6 0 87 219 80 155 145 104 69 115 44 189 145 199 176 31 136 151 125 67 0 3 2 12 8 2 7 1 0 1 2 6 14 8 5 0 8 11 10 0 202 156 124 163 158 96 123 145 133 1 0 0 7 16 4 1 0 17 16 16 13 14 0 241 203 66 107 186 94 82 89 97 177 175 161 152 33 139 116 131 1 0 3 7 16 8 2 1 0 1 2 3 5 6 3 3 3 9 2 4 9 6 7 7 9 4 12 12 14 5 10 23 7 5 0 10 9 7 8 8 4 2 4 7 4 3 1 1 3 3 2 12 76 204 110 63 23 41 7 169 36 76 40 34 68 99 0 3 4 6 7 1 1 0 1 1 1 4 6 4 3 0 1 8 6 4 2 9 38 83 71 46 34 33 27 9 6 12 4 12 4 4 6 5 5 7 10 7 4 7 2 9 12 229 182 92 30 52 31 72 99 58 75 39 42 138 2 2 3 2 14 7 2 2 1 5 0 1 1 1 2 2 0 2 0 5 5 6 4 11 9 5 3 7 6 12 6 7 11 10 0 8 8 9 7 2 1 3 2 1 2 1 7 1 4 12 12 7 5 252 214 197 178 184 186 163 144 155 202 151 165 116 0 3 2 3 7 1 1 2 3 0 7 10 2 6 12 3 1 7 4 3 0 0 0 0 0 0 0 0 1 1 2 6 3 11 0 3 3 1 3 3 3 1 0 10 10 13 0 175 250 218 150 186 183 169 143 139 156 203 140 177 14 1 2 3 9 7 4 3 4 6 0 4 3 1 5 5 4 0 4 2 1 7 9 9 7 8 0 1 4 7 1 1 6 10 0 2 4 9 5 2 0 1 2 4 1 2 2 5 4 4 1 9 14 227 133 106 165 133 116 151 150 118 134 100 98 63 2 4 5 1 5 2 7 4 1 0 1 0 0 0 2 0 0 1 1 0 0 1 0 0 1 0 0 0 0 0 6 1 1 0 4 1 1 0 0 0 1 1 0 8 3 6 0 157 208 113 115 155 135 111 162 127 120 135 91 114 7 6 6 2 3 5 0 0 1 0 0 0 0 1 0 3 0 3 1 0 0 0 1 3 3 0 1 0 0 0 0 0 2 0 0 0 0 0 2 4 1 0 1 0 1 1 0 0 3 7 7 10 2 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 2 11 10 0 0 2 0 0 45 68 63 78 78 136 112 7 49 87 91 74 46 18 51 64 62 61 48 68 23 39 51 22 3 1 73 75 16 12 11 14 12 12 6 8 7 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0 0 5 18 11 70 139 83 135 67 76 50 9 4 4 4 2 41 72 54 47 20 23 23 39 25 57 54 22 51 48 19 35 18 7 68 36 51 12 25 36 23 37 44 25 73 86 29 34 20 26 50 47 47 58 83 92 70 87 90 101 124 135 99 143 108 121 61 13 11 62 129 90 112 82 0 0 0 0 0 0 0 0 0 0 1 11 4 104 121 49 7 2 0 11 13 24 82 116 114 27 88 25 20 47 54 41 1 32 35 15 38 55 45 57 54 110 89 82 70 107 100 124 126 121 131 110 121 17 18 22 97 136 141 187 242 245 211 165 108 118 121 109 169 166 155 148 141 100 127 79 166 71 97 81 103 199 247 207 230 115 195 177 211 140 156 100 172 123 155 91 45 164 114 120 91 125 121 81 71 56 93 54 56 72 69 61 54 10 47 56 55 57 12 12 26 78 198 152 208 245 171 154 203 105 140 188 121 164 142 140 40 3 19 18 63 139 100 79 115 38 56 105 87 0 124 134 165 87 170 149 183 123 126 113 121 105 129 105 84 51 90 69 55 50 101 64 61 54 14 71 37 59 51 3 12 46 151 151 27 26 144 93 155 176 98 157 174 144 120 76 84 62 39 111 127 99 132 165 161 105 123 74 100 81 56 57 93 54 59 66 69 94 101 10 57 138 86 103 157 52 77 168 84 171 155 121 108 121 121 177 93 110 165 213 133 214 148 192 107 0 140 119 133 0 118 148 16 119 147 127 127 148 114 114 58 132 190 141 87 205 134 90 105 123 155 147 94 45 63 14 66 162 139 125 119 122 110 98 119 72 58 115 74 152 168 127 121 107 120 133 152 120 107 169 172 186 156 155 220 1 51 165 198 148 87 8 168 71 89 143 112 165 150 181 69 86 63 70 10 71 134 40 52 141 123 118 100 82 93 108 91 82 113 89 84 127 53 63 151 51 3 89 28 49 161 118 53 129 10 157 180 151 131 133 113 135 115 82 95 132 123 187 136 149 57 1 213 157 154 37 53 175 11 48 145 63 66 176 111 91 97 131 219 147 32 193 188 104 43 76 52 20 194 133 48 36 6 61 96 104 132 110 79 79 85 127 124 50 64 49 152 138 157 140 133 122 112 112 82 95 134 161 157 144 154 0 88 232 150 106 126 11 110 144 88 183 51 113 120 182 43 156 129 115 40 3 76 124 95 172 73 90 138 152 88 90 189 34 230 222 162 79 155 100 44 148 10 18 180 110 158 1 145 131 62 1 3 251 29 104 125 119 95 78 96 138 97 210 166 199 1 1 39 124 145 52 4 116 85 0 209 6 38 145 1 18 25 131 45 0 70 111 67 144 151 210 220 23 77 219 91 16 55 209 33 136 186 99 151 119 162 30 1 246 63 18 0 166 142 18 110 106 112 86 78 94 122 165 186 183 69 2 1 65 125 85 75 39 18 6 136 33 37 144 92 208 80 100 186 154 91 34 66 48 45 119 45 207 152 67 9 140 85 17 113 3 1 190 78 104 47 157 50 9 28 110 77 2 28 151 163 39 1 81 84 84 149 41 106 121 52 71 152 172 211 176 55 1 72 103 93 37 26 9 178 18 119 99 93 82 0 16 111 132 23 84 237 125 65 6 98 59 26 2 2 6 242 70 5 43 55 120 12 32 182 78 181 10 2 112 186 80 43 1 152 52 90 139 23 142 116 45 161 130 208 211 159 0 15 99 159 108 170 49 105 64 123 25 34 170 139 99 176 78 107 189 94 111 120 83 52 109 7 218 155 40 214 198 119 49 114 123 4 53 200 115 62 143 88 113 84 71 84 96 100 169 152 110 66 73 31 48 129 91 70 126 90 80 129 119 197 175 77 1 63 134 132 93 89 81 193 105 19 12 88 68 0 16 150 144 4 0 62 220 158 14 193 109 40 3 7 49 222 12 33 15 105 172 0 17 62 182 131 52 95 123 132 171 111 50 76 10 50 133 70 89 123 83 112 113 187 186 215 0 8 93 147 103 157 21 82 43 132 2 7 176 154 145 106 63 147 168 87 114 91 127 65 96 2 159 170 69 186 147 138 100 143 113 109 2 127 140 115 150 41 57 73 47 99 159 75 131 158 121 100 141 83 103 144 147 61 80 116 87 155 75 183 130 54 0 46 119 125 96 34 59 207 64 103 66 103 56 0 52 171 99 3 2 11 217 80 5 198 118 44 1 44 162 213 6 14 78 63 147 0 7 10 239 118 127 155 55 180 149 119 133 91 118 97 186 77 86 76 111 139 116 140 172 165 0 0 71 170 74 104 96 125 53 135 45 2 125 217 14 78 131 138 208 62 93 132 63 90 188 17 1 0 33 233 169 145 69 96 24 23 0 88 125 100 197 83 98 114 95 116 177 166 130 181 210 172 105 79 70 138 80 180 198 114 156 130 85 152 215 83 12 239 121 125 47 145 106 139 135 24 127 150 65 1 133 144 104 56 2 4 94 0 2 251 252 74 56 147 164 245 107 41 6 177 148 1 3 2 166 182 176 172 139 163 204 210 136 111 42 74 103 149 210 194 115 131 124 75 156 219 0 189 245 178 131 69 156 98 75 84 248 0 2 10 251 161 63 97 93 89 98 165 38 12 230 119 0 4 30 186 172 190 174 161 192 208 43 138 83 109 87 22 51 136 37 176 193 129 186 131 207 115 96 44 98 46 54 174 209 151 157 154 151 149 145 5 16 114 147 82 105 156 93 83 111 107 140 140 95 4 63 112 151 115 1 18 242 113 19 0 0 4 169 184 210 213 95 106 107 70 95 63 0 2 3 197 218 186 120 190 199 203 80 85 77 93 73 65 182 207 151 149 162 135 163 69 0 90 141 113 114 106 110 96 82 6 130 152 1 2 30 177 125 92 66 126 110 93 122 9 182 243 1 1 0 5 5 4 0 0 0 0 0 0 0 87 71 98 111 46 63 67 7 120 205 204 47 17 88 127 97 93 158 104 172 122 113 122 86 172 66 0 152 72 83 125 94 95 95 79 122 91 10 6 248 2 34 6 161 59 5 97 159 183 55 2 5 52 213 234 205 122 10 140 151 4 123 164 131 0 7 26 20 5 248 121 194 46 40 170 67 101 122 123 145 169 121 120 94 129 188 0 71 88 104 145 122 182 126 77 72 5 169 155 87 63 24 88 197 189 145 166 119 123 85 1 143 223 109 1 1 0 0 1 0 4 9 6 20 51 63 44 95 103 104 81 49 67 3 107 151 232 14 12 110 143 91 80 76 118 109 107 65 108 72 110 59 0 197 124 105 170 113 110 74 112 95 115 24 3 242 77 0 3 144 62 38 178 189 180 63 2 7 51 32 211 215 90 40 141 168 20 109 87 123 17 0 59 6 3 213 156 142 18 47 188 62 103 35 172 63 113 106 65 100 65 123 1 61 189 159 171 112 178 97 118 133 5 71 90 177 131 184 0 2 6 145 229 63 127 176 20 18 121 218 197 73 80 154 40 246 63 136 161 114 75 58 113 89 104 61 78 110 67 110 166 208 177 87 132 92 110 95 108 85 148 78 27 16 83 145 112 23 2 135 97 126 180 97 114 119 69 119 86 14 5 90 177 79 12 0 5 1 3 141 136 2 74 142 53 115 161 103 107 109 155 166 37 92 163 180 159 233 9 77 104 205 246 70 100 101 75 172 94 88 158 103 81 26 23 132 159 120 0 61 103 135 145 91 194 48 70 83 61 3 154 145 204 126 2 1 12 52 223 135 127 56 154 1 3 28 205 121 95 3 222 74 87 84 7 139 1 79 132 80 90 70 118 75 2 100 42 66 62 105 149 181 119 79 40 9 168 227 156 154 159 124 55 6 16 149 149 101 139 104 86 63 129 44 155 57 4 113 75 208 205 217 0 0 0 0 71 0 4 33 198 139 73 67 147 82 134 42 73 96 1 7 10 205 55 37 92 45 25 118 101 177 115 125 84 2 101 188 223 156 140 155 116 57 3 121 122 184 180 145 157 218 100 107 186 31 19 10 79 172 1 12 3 61 140 228 116 156 154 199 87 62 3 152 129 18 76 180 141 5 161 157 55 13 39 122 83 108 93 165 125 151 92 95 138 161 220 4 166 119 84 120 87 214 106 105 142 118 79 5 6 150 132 136 140 218 154 96 202 110 103 156 40 0 171 44 22 199 80 67 82 22 8 48 18 50 77 19 113 98 118 82 159 25 243 143 66 5 82 215 80 164 148 85 91 158 170 121 50 169 115 110 99 134 209 103 125 172 126 80 2 58 169 169 180 132 174 162 105 107 166 124 76 68 75 136 2 5 7 77 190 192 84 104 84 218 154 75 83 97 98 19 59 197 86 7 136 174 100 60 107 121 104 92 48 125 69 115 111 104 115 161 103 2 157 105 99 122 78 223 84 98 127 71 66 10 2 131 158 134 152 204 106 109 177 134 75 203 138 5 92 192 30 107 109 109 149 178 76 132 161 164 53 9 157 120 139 90 133 1 247 175 96 57 164 220 79 63 116 100 109 134 169 7 64 129 105 113 104 122 217 82 106 158 70 69 2 29 184 188 188 121 134 92 51 145 33 61 129 147 154 207 2 4 14 72 23 247 133 134 24 133 120 91 112 182 94 5 38 168 85 32 159 32 136 124 97 90 130 186 62 170 10 109 116 57 81 17 7 154 136 118 148 120 73 237 86 99 113 131 65 19 11 65 144 154 110 172 10 83 2 219 227 242 230 126 81 56 197 140 155 81 7 101 126 5 200 141 94 0 155 36 124 61 54 236 222 213 222 234 186 242 85 13 112 79 26 125 12 74 157 129 116 154 87 152 229 85 101 109 110 72 3 18 122 178 150 165 134 188 143 192 241 169 116 63 158 209 0 4 5 35 110 164 175 204 243 156 157 195 87 165 74 2 54 104 114 14 197 88 54 77 94 64 55 0 2 42 30 58 97 67 56 52 75 82 129 73 67 85 100 190 78 93 104 172 85 26 3 11 29 134 130 184 133 184 0 116 142 110 100 171 168 16 109 92 119 80 23 169 139 56 129 83 103 43 171 211 126 54 73 20 67 14 134 28 69 194 100 47 54 108 105 14 59 42 145 103 69 96 93 100 188 80 69 154 143 92 2 16 5 57 141 190 99 113 168 109 198 178 108 57 107 163 2 4 0 98 3 95 9 76 214 197 163 52 84 209 65 16 20 142 126 10 122 97 125 107 69 139 4 1 23 26 136 154 181 130 56 188 130 101 61 136 56 192 12 120 23 15 16 20 2 3 9 2 34 131 151 97 147 174 193 15 214 162 202 122 139 252 172 118 97 98 1 77 123 34 219 130 121 150 34 72 72 141 152 174 158 118 178 190 123 208 14 193 150 172 159 46 200 61 87 136 124 106 113 5 123 23 17 12 10 2 7 2 10 55 15 5 26 143 104 132 142 114 82 76 76 210 10 1 2 2 149 64 92 72 116 203 98 123 66 140 141 34 6 162 79 6 205 62 81 118 145 107 10 31 32 239 3 21 106 10 34 54 51 49 79 34 53 95 111 204 31 154 110 159 133 1 119 2 20 10 4 103 116 129 0 6 2 5 4 0 3 0 3 177 133 85 96 77 69 129 38 106 44 10 34 30 56 23 18 37 36 18 41 15 7 180 0 1 26 78 5 44 57 41 81 35 38 40 152 108 205 28 210 73 238 109 65 14 17 26 20 15 50 124 133 115 156 177 82 121 76 213 2 7 5 37 18 145 28 108 21 246 200 170 88 138 140 11 16 190 92 9 172 42 108 138 127 169 4 14 16 48 63 55 186 53 88 69 76 34 84 51 63 47 159 232 16 152 59 6 149 2 92 0 13 16 12 119 122 145 92 187 126 71 92 156 161 145 120 129 233 92 186 88 76 162 126 131 28 94 177 120 186 140 136 207 182 136 233 159 118 252 68 34 63 148 79 57 76 40 90 48 55 49 123 135 233 16 147 10 138 118 73 0 10 16 13 10 14 120 81 118 91 154 248 78 63 192 14 3 0 109 124 97 7 227 70 129 93 219 209 96 180 30 0 129 53 46 7 78 80 101 116 0 1 4 1 75 53 2 75 31 2 1 20 5 10 30 10 0 0 14 41 123 107 83 35 0 2 2 12 10 3 79 100 100 0 40 0 0 1 51 37 2 0 2 4 18 19 106 145 86 60 63 0 4 2 0 0 0 0 0 2 0 0 1 2 0 3 4 3 118 14 0 2 27 3 31 31 0 1 0 15 39 147 96 82 31 0 9 5 14 6 12 34 109 163 132 16 176 71 74 122 129 18 7 1 157 103 134 123 116 77 145 90 30 125 97 121 151 176 133 126 154 126 119 129 82 38 52 0 0 20 112 67 5 28 124 107 194 193 26 204 121 101 136 107 108 88 97 67 108 94 136 34 2 0 4 11 127 84 157 238 147 190 120 232 247 169 172 164 190 129 38 106 210 242 55 204 108 127 208 130 131 193 189 171 202 163 234 181 223 166 194 155 25 5 72 127 150 197 98 107 157 125 101 125 119 108 90 77 103 89 98 135 0 1 1 6 3 82 81 59 70 40 155 133 116 59 187 29 5 57 39 23 26 34 75 16 198 46 184 170 78 227 189 163 87 96 24 109 166 141 126 121 70 24 111 67 95 100 52 11 6 9 118 182 139 101 114 115 108 111 91 145 205 63 197 135 156 9 3 6 1 61 39 94 60 36 44 86 52 169 85 175 93 94 63 124 61 11 87 147 142 125 156 97 22 214 143 87 83 47 58 124 124 99 88 150 108 158 116 51 9 5 48 109 193 109 98 118 99 115 105 93 147 171 96 180 148 86 1 7 8 15 4 28 97 77 156 28 207 80 127 104 131 10 25 125 166 115 148 132 192 109 248 106 107 233 52 175 141 124 77 89 53 68 133 211 170 194 59 52 112 67 76 46 148 45 15 10 7 10 245 90 105 89 106 139 75 50 78 188 127 149 159 1 6 6 9 25 21 101 81 101 80 109 69 99 54 163 23 76 150 120 150 112 53 134 154 106 161 103 63 106 169 112 141 57 13 89 155 140 105 162 78 165 76 149 4 13 8 5 155 161 105 105 81 125 101 80 43 190 107 171 162 53 3 5 9 0 0 38 11 1 2 0 46 113 88 124 199 1 3 1 11 23 0 1 4 7 57 79 108 132 163 148 224 181 88 105 65 8 10 38 34 0 0 0 0 0 1 26 90 74 10 6 5 0 1 131 138 122 165 94 104 224 100 168 104 125 125 3 0 1 0 29 9 3 0 34 83 42 66 66 76 29 54 37 14 69 61 35 63 25 21 79 34 119 116 12 52 66 69 51 92 93 38 100 63 41 107 67 65 91 26 10 1 4 0 77 133 135 139 156 58 109 227 41 193 107 134 53 0 1 3 107 100 34 89 45 32 130 105 77 61 115 94 87 50 36 71 57 62 87 56 32 72 31 19 10 25 5 55 37 97 110 131 171 166 118 138 113 143 183 148 193 138 100 25 31 27 23 44 40 26 3 53 48 7 16 12 9 20 14 13 14 41 25 1 28 97 61 38 100 38 110 123 103 120 80 94 119 80 100 97 107 93 86 47 75 79 30 63 126 72 85 91 88 59 106 67 79 88 40 45 51 36 49 41 29 43 16 42 43 44 4 18 54 20 7 18 12 10 21 9 18 13 74 1 3 45 145 126 122 138 103 118 116 23 129 81 81 94 95 140 172 115 91 96 67 123 136 123 138 100 134 181 91 72 123 87 87 74 87 91 79 108 106 44 71 22 100 101 91 149 154 147 148 114 130 108 118 140 192 139 138 101 144 134 109 159 159 182 47 0 63 125 156 124 95 112 68 38 56 48 65 133 41 97 136 76 99 145 123 162 131 110 150 121 106 152 90 63 52 129 81 118 93 158 152 151 91 208 89 124 149 150 158 108 118 133 76 132 140 174 147 120 104 142 151 94 176 161 147 1 10 89 111 121 75 130 138 111 108 49 69 112 96 104 51 94 85 156 80 65 39 129 100 94 100 68 120 90 108 54 81 35 90 113 68 109 83 60 78 108 74 18 110 84 86 63 83 72 75 6 118 113 25 72 140 110 115 106 121 107 85 71 119 136 40 1 36 94 121 78 124 147 61 52 34 135 113 68 150 155 81 91 79 111 112 124 115 96 99 93 75 73 140 84 47 73 129 125 90 166 124 84 111 189 75 58 63 104 63 14 6 215 10 54 68 155 120 98 106 122 107 61 109 118 138 1 12 58 133 63 61 81 32 116 116 120 96 94 105 77 145 144 31 113 111 90 93 88 95 77 99 70 123 62 145 130 127 133 107 123 198 89 130 177 64 134 82 133 111 87 106 165 103 122 136 98 98 175 81 12 10 165 42 190 81 120 99 119 129 186 40 0 71 113 63 49 56 30 166 60 2 183 246 8 156 20 38 99 198 100 73 131 70 246 119 138 115 6 131 224 85 2 190 143 6 136 57 2 135 114 115 161 159 85 123 158 91 109 209 20 10 115 68 126 178 83 100 134 91 136 155 0 4 96 72 112 41 175 99 38 32 40 37 35 40 51 49 38 52 3 23 16 21 38 70 133 61 14 14 14 7 7 7 4 4 17 10 6 1 0 0 0 0 0 0 0 12 176 186 61 95 88 7 118 207 36 5 103 45 124 104 113 132 111 138 140 28 3 20 61 112 45 204 81 157 95 9 24 40 38 124 9 15 123 136 121 131 152 120 163 110 116 142 3 175 163 164 16 45 141 11 213 3 3 0 101 99 75 168 140 13 194 68 52 124 129 38 7 75 140 112 101 132 124 123 142 119 0 15 33 33 24 2 47 80 59 57 25 54 52 21 48 29 141 120 138 118 88 84 2 50 78 84 144 108 105 111 111 126 75 80 66 83 121 113 87 138 132 116 139 124 133 32 121 143 88 139 79 23 198 168 79 7 99 69 70 66 66 122 119 151 195 18 0 39 21 10 20 61 63 172 77 94 121 53 74 139 1 0 209 110 74 63 44 83 99 66 97 59 2 5 34 239 25 61 107 97 156 3 4 8 63 65 35 119 147 95 147 65 123 132 213 69 57 63 75 67 64 84 154 116 161 127 0 18 49 186 92 107 133 150 169 123 87 122 90 169 151 89 132 180 97 142 113 150 141 175 124 83 111 103 131 74 151 116 107 101 123 135 99 109 106 111 65 85 50 124 135 85 63 71 71 100 97 119 163 134 104 77 132 14 108 97 132 150 200 152 169 18 135 124 145 142 67 168 142 176 80 78 113 76 110 95 4 51 10 111 71 98 68 77 105 60 88 124 10 12 123 207 30 69 87 69 161 24 10 5 9 134 76 66 57 135 47 99 110 119 198 92 118 83 40 104 96 114 211 175 161 150 6 145 158 162 15 135 76 88 140 122 104 150 66 111 92 69 66 114 49 154 136 136 127 150 171 64 126 76 54 3 52 159 51 132 123 132 139 112 127 66 79 36 2 108 143 95 133 143 98 120 106 96 202 150 73 43 88 28 70 63 99 178 178 199 125 38 95 107 122 69 96 71 81 194 68 100 110 79 108 103 5 115 55 200 172 150 139 118 132 123 118 162 9 108 136 228 63 68 76 91 116 38 1 9 17 81 147 138 91 186 68 104 152 125 200 67 63 81 36 68 53 168 172 209 202 62 50 78 142 87 92 0 135 150 93 71 148 71 78 119 111 113 135 100 12 2 215 40 23 143 103 81 86 149 205 9 54 182 65 99 51 13 139 23 169 113 120 103 82 0 209 51 122 217 17 61 187 177 149 242 60 100 87 74 66 61 0 219 165 28 5 217 88 60 70 18 51 150 138 165 69 73 70 58 88 112 0 12 3 120 171 109 76 134 143 125 171 45 141 232 224 193 20 93 130 54 76 107 7 4 3 8 43 134 164 0 176 171 184 158 162 68 91 59 107 63 48 89 210 91 22 95 189 50 90 130 49 47 86 55 83 72 90 159 51 86 184 51 133 215 99 6 174 161 112 115 53 49 176 12 114 89 119 171 48 172 68 51 118 0 47 198 32 145 133 59 16 106 62 186 5 3 87 156 241 108 51 55 130 78 103 132 88 96 33 118 2 205 89 69 106 44 8 135 50 56 82 59 91 36 2 175 69 4 5 4 45 80 203 80 101 5 2 49 186 194 204 41 30 63 121 77 58 143 157 0 4 7 63 70 174 0 42 74 202 248 24 57 97 99 88 101 136 18 133 90 96 53 182 57 103 180 142 23 100 89 51 21 158 20 107 26 96 110 145 148 108 59 32 104 101 90 60 2 234 85 12 116 154 190 26 70 16 164 112 0 4 178 7 100 142 85 14 18 40 46 74 112 151 112 110 43 90 127 104 73 77 126 40 119 0 1 5 172 120 158 145 74 54 114 79 96 112 108 100 98 6 113 122 129 10 1 7 1 229 127 157 16 22 113 108 130 58 61 103 100 133 50 107 66 79 171 18 4 15 44 44 103 155 143 118 49 71 87 114 130 34 82 124 88 14 1 0 104 162 118 195 156 121 53 143 129 63 89 140 33 180 107 1 88 47 113 127 65 12 111 147 96 125 16 89 125 13 124 140 130 121 42 2 161 103 38 54 209 69 82 95 145 25 32 1 0 2 3 26 49 75 16 166 130 84 91 75 119 26 171 5 4 26 180 144 125 119 122 48 168 118 142 116 115 70 110 20 92 158 136 82 14 3 2 67 169 99 3 7 67 52 83 74 40 114 95 119 57 141 72 92 165 152 21 4 2 0 10 5 23 76 26 119 157 97 92 87 74 120 25 150 0 1 148 145 113 165 131 88 74 120 86 83 63 126 1 157 239 95 205 86 93 171 85 29 24 203 3 96 209 104 0 114 169 124 103 93 13 45 4 107 48 1 149 101 12 139 104 37 174 250 219 140 115 105 49 119 189 38 123 126 50 105 125 101 48 156 88 18 135 78 99 97 81 82 70 95 44 139 122 99 83 42 4 61 30 119 131 120 86 57 111 101 120 130 65 110 83 112 156 61 98 81 73 131 148 157 9 60 227 248 250 131 135 107 99 78 101 135 37 178 20 155 95 131 55 89 204 67 109 98 90 132 156 118 35 193 92 41 65 151 0 195 187 168 105 76 98 211 100 93 107 125 6 3 13 193 141 166 82 27 237 87 12 188 145 107 52 2 111 118 161 195 194 34 132 246 168 66 49 147 121 118 57 166 188 68 88 86 144 38 73 176 35 15 178 171 163 114 108 97 169 113 0 79 80 163 90 109 12 107 190 0 119 77 2 67 46 77 6 169 44 3 134 65 39 187 75 50 69 82 140 98 1 6 51 188 247 54 25 151 135 96 109 103 162 219 5 85 86 149 6 130 168 19 145 150 150 194 135 91 40 133 38 156 74 155 0 190 209 149 107 108 132 152 120 139 106 129 13 4 12 28 143 190 85 3 145 188 5 16 155 106 24 3 0 84 46 88 225 22 81 220 188 20 136 124 99 136 127 81 109 131 79 29 17 37 129 156 44 19 171 123 145 93 96 51 100 64 0 89 104 121 33 94 60 4 14 116 141 71 26 66 189 64 77 207 60 27 145 150 145 72 68 85 130 59 42 30 1 83 144 134 227 78 9 223 109 123 152 56 90 63 129 79 30 10 119 123 152 30 122 135 140 178 125 90 114 150 21 39 42 147 0 145 198 151 132 91 115 175 122 136 175 152 18 6 51 29 178 172 157 43 145 168 40 5 178 147 34 2 26 138 87 111 214 31 127 241 193 20 58 104 93 109 69 96 69 205 139 32 0 14 149 154 37 5 207 136 149 82 143 103 126 39 0 1 197 156 99 63 109 52 20 42 103 80 27 51 215 27 82 193 61 2 46 101 74 66 126 132 110 130 1 2 7 170 116 197 246 69 3 151 92 109 48 120 93 95 175 129 33 0 97 141 138 23 131 161 130 182 130 76 44 193 101 157 68 190 0 45 150 186 103 135 159 129 168 28 36 180 99 0 0 0 73 186 176 166 106 203 44 107 75 152 129 100 144 159 131 129 112 53 70 243 225 63 30 13 94 61 101 99 116 47 112 76 44 107 68 99 34 0 159 198 106 94 69 124 129 136 0 10 85 174 80 122 156 134 83 54 106 80 61 50 190 6 40 198 132 103 68 110 85 118 111 73 86 236 2 54 120 95 101 156 246 123 49 16 13 98 99 100 103 91 75 115 76 41 111 70 95 26 7 228 145 141 150 77 83 125 105 37 72 181 7 9 18 228 74 164 125 70 154 0 3 209 133 31 0 3 5 22 164 176 198 145 31 0 12 84 131 132 148 119 152 170 31 178 29 200 219 79 156 91 144 110 37 113 172 13 182 111 121 78 131 79 67 2 30 51 111 119 73 108 116 125 0 2 72 144 7 172 27 89 151 40 180 43 43 16 209 6 86 151 67 147 98 135 3 151 130 74 59 51 104 67 121 85 118 49 207 145 110 118 96 152 86 25 123 89 39 183 108 118 104 85 110 60 2 46 83 144 143 88 95 112 87 71 13 175 149 1 12 95 111 113 152 106 202 29 0 89 157 136 118 0 0 6 16 2 123 168 71 28 1 75 93 94 138 120 75 67 44 178 80 248 204 20 165 30 129 113 155 36 2 2 129 109 109 147 95 164 16 1 245 100 42 120 56 123 120 105 0 3 12 118 144 204 223 70 135 80 174 99 61 7 205 30 53 189 47 56 124 101 181 17 7 18 0 59 74 76 26 111 67 180 248 77 93 70 37 143 158 114 40 0 23 180 103 110 139 113 108 6 154 134 55 76 166 144 113 81 91 91 7 210 159 26 1 57 73 109 136 120 143 43 21 33 126 145 126 89 0 0 14 5 19 236 68 3 4 3 70 97 98 95 65 30 183 104 74 245 224 19 204 9 133 103 60 125 19 1 193 121 118 157 94 152 1 1 215 139 147 135 148 110 80 111 0 10 3 85 66 147 162 87 166 133 211 107 54 5 211 34 47 163 41 56 190 37 118 101 0 2 28 110 44 75 62 125 88 145 246 103 104 78 12 218 20 157 120 2 55 172 122 120 145 124 46 1 98 168 149 188 94 239 47 115 87 88 16 136 171 190 141 118 59 105 170 88 116 127 60 87 12 186 174 132 166 163 84 16 6 55 44 3 0 3 5 21 92 81 68 135 109 142 81 225 218 30 139 53 99 78 13 80 7 15 215 113 159 184 93 88 1 6 1 181 2 84 154 101 110 106 1 6 6 86 75 169 205 1 93 44 74 132 70 13 236 25 37 193 33 81 95 99 22 106 0 18 51 65 52 91 29 115 24 131 233 112 78 75 59 114 48 38 79 0 171 112 124 162 165 108 3 7 0 96 65 12 63 110 181 86 152 54 5 217 0 169 218 87 186 44 71 150 187 114 66 0 223 0 21 198 176 134 194 144 188 119 143 139 106 165 133 95 113 141 168 177 65 136 56 245 243 21 66 142 134 157 126 1 29 176 172 115 123 152 88 134 0 0 12 15 124 37 222 126 94 169 4 5 4 16 63 129 242 111 115 65 151 135 32 5 211 51 28 190 94 177 111 182 105 0 1 1 135 42 109 54 112 33 85 101 247 93 67 83 143 103 187 38 1 136 208 96 126 123 151 130 14 1 1 10 91 140 120 110 85 114 242 130 21 100 145 0 10 156 68 87 0 18 241 200 103 23 126 87 6 38 40 135 147 82 92 190 116 59 234 94 41 25 187 156 138 53 166 133 63 246 208 36 110 131 88 158 0 18 100 110 189 89 129 158 126 88 1 5 1 27 12 104 75 91 192 243 4 7 8 72 76 98 148 64 101 123 125 94 38 2 243 23 30 174 91 138 97 59 0 3 11 36 100 60 53 46 62 80 35 157 247 91 50 135 130 114 61 2 14 140 193 82 99 127 159 139 5 4 0 4 24 23 38 18 139 25 87 243 26 5 250 133 34 24 176 114 6 1 60 248 210 12 0 230 220 99 18 170 143 40 45 163 62 73 247 51 4 43 170 68 23 85 169 142 56 239 211 5 150 141 169 1 3 32 156 181 64 168 115 142 114 99 3 3 1 3 138 17 70 115 14 130 7 2 12 14 143 66 89 245 202 129 68 171 99 0 204 52 14 168 34 190 210 100 3 3 14 105 17 124 53 138 16 100 38 193 241 60 81 131 155 66 2 4 27 208 97 124 163 113 163 111 25 10 1 0 96 142 75 82 46 110 41 223 38 1 139 232 78 50 192 122 5 4 38 245 243 12 7 85 182 135 20 100 152 48 55 213 62 142 246 64 8 44 215 51 97 164 142 142 3 246 217 3 184 169 125 2 10 30 150 190 41 147 141 148 139 98 41 1 4 9 27 68 14 154 26 83 8 2 9 15 132 77 52 204 214 142 75 186 85 0 207 84 8 169 16 200 178 93 1 8 23 41 138 52 70 30 118 51 65 133 247 76 55 189 181 38 4 5 26 193 126 85 141 138 175 90 91 46 0 10 18 36 1 0 36 118 76 164 248 42 1 140 203 88 181 126 6 2 21 199 243 175 71 0 4 222 14 184 123 28 72 82 43 14 248 96 7 34 158 127 165 144 103 1 172 239 234 12 171 99 66 2 6 95 145 239 86 135 129 131 157 124 38 2 3 0 1 1 0 143 83 109 24 1 9 6 31 105 114 147 189 151 101 198 92 0 188 104 17 171 107 104 171 35 4 8 11 38 16 42 64 100 33 140 24 211 246 109 73 124 118 7 4 29 88 190 181 110 132 126 151 140 108 41 1 1 0 3 1 27 28 55 5 54 192 113 55 2 1 186 109 134 12 16 6 178 159 247 87 84 30 2 213 227 116 60 50 213 48 161 214 119 4 37 154 114 133 114 44 34 67 241 241 49 220 135 44 4 1 6 0 16 92 66 74 95 49 131 38 2 1 6 0 0 44 50 22 14 48 1 15 16 25 217 175 188 192 214 144 118 103 0 151 62 0 39 101 143 211 45 2 1 1 2 1 10 69 51 86 79 120 147 246 88 181 168 151 1 4 7 5 0 98 75 66 74 93 71 104 39 0 6 0 1 59 3 228 4 197 174 26 246 74 49 63 2 120 94 0 7 23 85 123 80 248 110 42 63 3 83 91 4 27 125 110 150 170 87 7 0 101 79 44 21 163 193 22 116 243 6 26 78 18 3 0 19 106 171 63 25 36 25 26 16 2 24 135 0 30 39 94 114 32 215 17 2 9 5 80 8 66 52 12 121 115 123 73 218 93 152 189 80 48 71 67 11 5 8 6 14 1 98 23 118 9 74 14 16 139 110 5 76 80 3 0 5 13 168 115 66 25 38 11 25 14 0 161 8 0 39 16 11 139 77 121 181 132 225 223 6 9 42 107 123 7 4 22 159 158 204 215 250 197 51 72 106 119 9 40 120 123 156 219 126 37 43 104 94 119 155 186 199 187 211 245 67 80 7 18 1 0 5 56 154 112 98 116 174 158 156 3 1 161 1 8 6 77 131 56 145 46 1 7 6 116 104 232 124 77 99 136 202 109 250 156 202 243 224 36 149 1 4 3 9 8 14 1 250 61 232 36 224 74 224 224 138 77 38 10 7 0 2 3 118 147 116 98 116 180 138 88 1 107 31 0 14 43 95 24 18 44 30 27 40 80 239 210 13 83 149 9 3 7 18 18 37 42 104 171 251 44 72 108 1 28 202 132 144 246 93 92 138 85 14 40 51 13 23 30 59 164 144 136 158 183 215 0 7 75 156 39 109 11 5 26 190 36 14 131 0 23 37 60 35 30 49 58 1 55 86 96 20 72 100 82 168 116 97 156 77 61 73 112 183 181 220 188 248 199 0 1 0 1 7 2 1 18 14 5 3 72 133 181 109 159 241 35 0 5 108 175 28 108 10 6 100 156 24 123 20 5 31 10 12 91 130 34 86 29 178 139 175 105 246 104 93 12 1 136 208 101 230 217 194 175 70 255 193 100 13 40 5 15 15 72 174 54 99 115 151 125 203 75 202 101 136 232 64 64 150 72 112 0 49 84 189 6 155 94 103 26 90 26 17 165 0 5 9 3 233 16 50 44 0 31 36 77 18 89 157 184 29 247 154 174 170 72 86 115 51 156 222 143 113 125 0 104 134 72 194 40 113 81 46 122 51 155 164 84 82 151 56 42 23 41 144 119 51 148 96 84 3 136 12 158 16 6 8 3 5 10 58 101 165 27 66 53 40 31 108 251 103 14 2 1 1 2 4 14 38 49 7 75 246 70 130 116 141 158 142 175 22 16 61 43 81 121 114 20 63 24 3 110 109 52 80 149 121 0 4 1 4 30 103 88 94 54 87 21 6 27 0 2 2 4 36 82 109 53 44 26 18 20 13 4 6 14 11 1 12 86 147 104 94 139 94 10 16 62 85 82 0 0 0 1 7 1 1 1 1 3 2 3 207 34 79 77 183 26 0 4 0 58 30 100 91 80 24 122 14 37 0 1 3 0 0 0 0 1 7 0 0 0 1 0 16 171 178 68 0 17 34 42 5 2 36 23 4 1 254 133 165 97 98 116 103 121 49 20 18 5 5 7 34 122 50 7 14 94 144 30 3 48 3 0 0 0 0 0 1 8 7 0 9 0 0 0 4 1 0 0 0 0 0 156 130 120 123 135 100 134 131 131 152 119 108 147 132 74 109 109 107 63 92 61 27 79 44 13 12 28 44 49 28 37 16 21 12 10 184 55 17 3 40 0 0 0 0 0 0 1 10 1 0 16 0 0 3 3 1 124 164 124 101 158 164 158 186 175 73 65 71 51 175 110 98 211 150 111 101 94 165 97 136 85 72 132 78 97 104 99 116 147 66 107 67 23 70 3 10 88 40 134 124 130 97 114 168 147 213 187 189 187 132 143 133 119 132 95 85 34 6 7 6 22 113 154 52 203 148 112 126 95 90 95 38 123 81 129 119 81 118 144 94 93 40 96 85 163 87 156 164 168 152 129 93 150 136 197 166 158 172 165 148 121 115 86 183 157 192 210 182 192 159 131 141 133 122 85 132 57 40 1 12 6 38 72 4 36 62 122 109 81 91 47 131 115 60 50 30 67 43 122 83 188 107 91 19 85 69 124 6 55 95 127 77 96 78 64 92 105 94 149 39 100 106 104 131 89 116 77 110 124 88 77 72 116 61 61 51 113 47 53 40 123 87 63 134 0 0 107 51 22 52 83 123 85 98 119 121 134 116 118 159 134 126 59 91 63 163 118 135 100 130 149 168 56 151 79 126 112 126 37 112 113 95 103 80 119 92 113 76 129 93 89 73 68 118 59 78 78 68 50 49 105 129 47 76 63 0 26 123 103 138 90 141 135 162 40 182 131 89 175 114 115 75 138 145 76 192 182 104 190 110 77 145 98 134 94 104 99 100 68 60 156 95 97 118 127 86 105 100 103 61 84 101 92 139 104 163 177 88 114 91 133 112 182 178 188 175 125 126 165 199 26 4 17 91 112 111 158 150 14 3 19 12 28 10 26 9 18 16 22 18 17 21 26 30 41 21 27 36 48 51 51 58 50 66 83 95 96 116 136 114 88 103 96 122 109 142 163 139 111 92 90 155 108 219 175 190 118 140 130 177 131 3 5 33 51 61 85 46 37 35 20 44 52 31 19 34 30 19 34 33 3 51 38 18 32 20 16 19 14 19 20 16 14 12 14 20 17 38 10 23 55 6 14 16 10 5 16 8 5 9 4 18 34 10 22 40 58 51 68 156 91 69 121 107 86 101 12 3 7 43 76 68 40 34 97 81 84 66 70 40 51 75 50 68 53 27 44 60 34 46 57 37 18 33 26 11 43 20 5 5 7 1 18 53 6 5 6 14 7 4 6 9 19 30 13 28 39 60 50 127 150 90 79 119 98 95 66 0 6 19 83 62 47 70 110 119 96 82 97 94 103 132 140 142 170 126 77 97 114 89 163 120 91 111 130 147 111 135 147 132 116 150 51 158 144 166 182 165 147 165 126 163 129 220 211 248 166 120 110 115 96 77 82 82 91 4 0 0 108 106 54 63 0 6 26 73 48 44 105 105 135 89 101 84 114 132 152 101 125 98 142 149 138 83 205 208 152 149 189 150 198 219 157 162 181 202 197 145 98 136 154 175 183 157 217 218 239 122 125 104 112 77 77 96 84 33 9 0 0 202 70 65 14 1 3 44 127 154 157 214 126 97 126 112 193 58 205 103 71 82 68 139 149 162 140 121 80 88 139 88 119 115 82 65 48 87 54 69 70 62 55 60 20 60 60 70 100 89 66 152 188 31 150 110 119 126 105 104 93 115 138 107 168 165 125 82 121 148 3 7 26 114 159 203 130 133 88 136 113 213 138 150 88 163 85 94 57 67 24 112 65 154 94 67 62 47 24 30 116 188 21 103 0 125 118 103 133 72 96 90 149 150 59 129 112 141 104 88 103 112 132 38 121 174 97 132 103 131 80 0 19 44 1 0 122 57 74 125 138 139 57 56 27 103 42 46 72 0 4 148 83 59 127 133 99 133 122 141 125 125 168 165 119 122 129 100 81 61 108 35 1 51 64 48 138 208 119 124 121 138 34 107 127 121 105 124 171 131 129 16 112 111 100 144 0 3 1 0 40 118 36 71 217 10 37 99 104 67 0 247 242 154 155 219 139 143 9 84 230 138 3 1 0 1 2 36 239 63 90 0 108 68 20 82 192 211 200 120 126 111 144 2 198 121 118 122 130 152 134 132 11 168 90 113 68 0 1 2 54 43 12 200 83 18 104 59 131 72 121 96 87 144 110 40 7 71 229 14 135 89 121 1 0 190 140 140 91 23 115 183 168 58 133 127 64 114 16 1 242 92 40 120 88 63 48 42 23 67 0 170 84 0 63 190 123 38 89 172 100 140 0 18 16 53 0 164 112 83 74 103 157 107 133 0 47 121 30 0 0 35 198 187 87 5 55 199 180 29 6 18 12 69 78 171 113 3 97 200 39 174 63 71 115 63 61 43 42 51 1 87 165 15 1 150 183 131 5 165 155 114 48 2 17 26 85 87 1 220 214 76 125 66 110 67 155 111 39 72 192 44 51 13 168 114 163 79 143 0 4 181 148 200 61 0 26 94 200 26 144 161 42 127 27 3 181 141 73 130 118 140 141 83 40 82 1 219 251 28 87 151 141 69 80 113 125 135 0 3 42 81 30 52 247 219 0 208 162 157 90 0 63 126 83 1 4 1 112 193 133 7 1 64 200 64 3 10 9 37 16 95 107 30 40 172 41 154 100 107 124 125 165 110 85 44 54 19 225 151 36 80 150 154 6 131 147 136 46 0 6 58 78 90 10 30 64 14 66 126 96 9 54 105 80 143 124 76 65 0 6 78 105 132 97 0 143 121 192 228 12 1 24 6 9 81 75 186 0 164 100 63 12 63 39 72 133 111 121 133 98 75 3 3 50 55 85 113 113 100 50 100 136 115 0 4 5 75 64 0 89 62 1 15 34 126 25 1 12 182 119 48 4 0 63 210 171 48 3 0 213 193 10 6 5 1 88 136 154 38 2 91 245 106 86 43 69 156 113 133 132 127 8 0 3 80 81 89 112 118 61 77 129 148 24 2 4 18 49 105 37 94 99 93 48 54 132 93 50 64 62 80 130 39 107 85 91 26 62 158 3 9 3 168 182 136 70 210 181 141 133 31 105 131 3 40 75 25 93 83 5 134 127 90 94 100 126 149 42 26 99 79 33 111 82 67 134 103 145 166 0 6 9 44 91 33 130 89 148 55 143 75 3 2 18 184 149 106 3 2 145 183 189 157 16 26 50 147 66 81 18 101 200 169 204 38 9 30 59 141 0 31 135 83 116 60 108 112 63 71 20 151 7 104 104 78 110 98 126 161 50 0 6 20 95 121 55 122 69 67 71 41 4 217 120 90 83 83 48 159 174 100 127 44 63 38 1 2 2 79 161 166 58 63 123 171 92 124 144 120 82 23 94 81 109 124 18 119 109 54 149 58 134 115 70 85 118 49 10 3 1 0 60 86 136 113 0 3 55 83 92 109 98 65 90 62 123 79 10 6 2 43 143 79 0 68 164 4 149 2 9 16 2 76 136 92 186 194 104 121 207 26 58 151 124 103 0 48 120 89 105 78 63 148 71 104 78 147 1 11 2 0 1 104 112 148 27 1 9 75 96 75 44 101 72 83 70 30 0 186 150 101 89 101 60 113 182 79 53 162 83 116 2 6 3 104 161 125 63 10 5 107 107 107 125 88 130 53 59 29 95 64 23 156 116 85 108 41 114 121 69 76 33 108 1 22 3 0 72 88 139 133 0 2 43 80 68 82 71 70 91 91 125 90 38 1 6 14 54 161 0 70 178 73 130 7 4 3 3 17 123 143 175 182 166 134 223 66 94 123 110 38 0 70 157 86 92 97 38 172 73 87 68 103 2 12 21 3 2 129 116 150 44 0 3 63 109 54 79 100 53 20 90 51 0 141 182 149 156 109 85 149 147 129 161 27 78 64 44 0 1 58 202 138 133 170 26 96 190 204 170 157 88 155 65 142 61 106 20 50 159 187 124 123 162 112 95 78 70 97 3 0 1 0 101 100 135 107 0 1 96 84 82 63 138 41 114 98 5 165 132 1 1 9 4 69 64 1 7 98 251 71 13 10 2 2 12 6 9 3 155 186 184 74 51 107 103 82 0 2 54 178 155 157 121 147 120 63 80 109 5 6 1 1 0 214 91 152 16 0 17 118 113 101 59 97 118 68 92 132 0 9 5 26 48 35 21 80 98 187 157 61 97 141 99 0 0 3 172 202 85 112 112 18 12 46 109 127 99 162 73 16 119 105 28 5 10 31 25 53 118 115 194 40 68 143 0 1 1 0 71 186 151 171 0 1 93 93 72 127 101 113 64 38 1 42 74 86 0 1 18 5 30 0 0 2 170 166 2 8 1 16 19 26 20 10 12 62 96 43 122 135 84 126 0 5 9 26 33 10 54 116 188 43 51 97 30 0 1 0 0 227 130 175 52 0 23 110 3 14 38 16 3 1 2 14 1 1 3 18 5 9 16 23 96 51 36 3 0 50 82 7 1 0 11 34 62 32 15 0 6 3 9 7 3 92 52 0 73 123 53 4 11 4 4 7 5 69 50 111 86 147 0 3 0 0 76 230 139 199 0 1 1 1 45 31 3 3 23 2 2 9 10 12 18 1 3 20 16 2 3 9 0 3 8 3 1 6 3 9 14 17 35 51 44 2 74 108 67 111 0 7 9 13 2 7 5 33 62 89 106 136 37 0 3 0 0 232 182 159 98 0 1 3 2 10 5 8 10 2 7 5 7 0 0 13 6 9 11 10 22 6 2 8 5 10 23 16 3 1 7 4 5 1 13 8 3 22 12 16 21 15 7 2 10 78 23 4 5 23 10 24 40 29 20 64 41 87 1 1 3 0 7 116 145 217 1 0 2 1 16 5 12 7 26 6 1 8 7 18 21 5 3 26 2 0 1 3 3 23 5 3 10 15 16 15 24 23 22 19 20 16 10 23 17 41 1 3 6 14 11 19 23 38 27 34 59 68 20 2 1 3 0 71 122 159 105 0 4 3 10 7 5 12 8 4 5 6 17 9 3 0 7 14 17 18 8 13 6 1 17 4 7 12 26 3 1 0 2 4 1 1 7 4 6 6 8 5 10 8 3 4 7 1 3 4 6 16 10 1 5 4 5 11 6 3 0 0 9 22 5 20 0 9 4 7 4 10 9 7 5 14 6 8 6 9 10 14 10 9 2 6 1 0 6 6 2 4 1 6 6 7 8 13 2 4 1 13 32 39 16 36 42 6 1 4 7 7 16 6 0 14 3 21 4 6 4 0 0 30 9 7 13 1 4 6 19 15 16 12 12 7 1 7 5 14 20 7 6 10 12 12 3 23 16 0 19 1 1 10 9 17 5 5 7 2 10 11 6 6 8 7 1 2 11 1 4 4 20 34 24 10 23 11 4 9 2 6 14 9 7 1 0 3 1 47 13 26 3 4 12 16 13 20 10 11 15 10 2 3 7 5 2 12 8 14 14 30 9 3 20 7 10 23 23 10 14 22 15 2 2 1 4 10 27 12 20 16 6 40 33 13 25 15 12 5 4 3 5 18 5 5 1 0 2 22 29 16 15 0 11 16 2 9 11 6 10 10 0 5 3 5 6 1 12 15 12 8 12 5 18 5 5 15 4 1 4 3 9 13 11 1 9 9 7 1 9 5 4 17 0 1 9 12 5 20 14 7 7 3 10 1 13 3 16 6 19 0 1 0 2 4 1 0 4 6 6 1 23 4 4 10 6 7 7 3 1 3 9 0 0 5 4 16 10 5 4 14 5 10 2 12 2 1 1 5 4 3 8 18 22 23 12 5 1 13 21 2 10 6 4 5 2 18 2 22 12 6 1 0 0 8 1 1 3 4 8 7 6 5 6 3 9 16 7 0 18 2 1 0 7 5 7 7 2 9 6 2 0 15 16 3 1 2 5 10 4 0 7 6 2 2 2 1 12 3 1 4 7 9 7 9 3 6 1 9 7 5 14 9 10 7 0 6 0 0 1 13 0 3 3 1 5 4 6 8 1 10 10 5 6 1 5 2 4 8 8 2 4 2 1 1 5 5 5 4 2 22 0 1 9 4 1 0 17 9 1 1 6 1 2 11 9 2 3 4 9 5 10 7 10 8 3 1 6 0 0 13 0 0 5 2 1 6 2 3 7 4 3 6 7 0 10 9 0 1 1 9 10 4 12 10 6 7 0 8 11 6 0 3 4 5 3 1 5 7 4 1 13 9 20 1 3 3 3 2 10 7 1 7 5 3 2 5 12 2 5 5 1 1 0 1 1 12 0 1 4 1 4 1 7 8 1 3 11 5 6 6 6 0 0 9 14 4 3 2 2 0 3 9 7 5 5 18 0 0 7 4 2 1 18 1 9 5 2 5 6 18 6 5 5 5 3 3 11 4 3 7 1 2 1 1 0 11 1 0 4 2 2 4 0 0 4 4 3 3 3 2 0 9 15 0 8 7 6 0 2 5 0 16 0 0 0 14 8 0 6 5 4 1 6 8 3 1 22 18 0 1 1 4 1 0 12 12 2 0 4 0 2 3 7 1 2 3 6 6 0 1 1 15 1 0 8 1 4 0 4 4 4 3 9 11 6 4 6 3 2 1 1 6 3 4 2 0 3 6 1 0 3 12 0 0 1 2 2 4 17 5 0 0 3 9 3 24 10 1 1 1 0 5 6 3 1 3 4 7 6 0 0 7 8 1 4 2 5 3 1 0 1 2 8 7 1 6 1 0 0 2 1 3 2 1 3 0 0 6 4 5 2 0 6 2 5 7 4 1 6 3 1 0 1 0 5 0 9 3 1 0 7 14 12 4 2 6 5 1 3 5 4 3 8 9 0 1 2 7 1 0 3 1 5 0 2 1 6 7 5 6 6 0 5 5 6 4 4 7 3 8 7 1 1 2 1 0 6 12 6 4 0 4 3 5 11 8 16 6 0 0 6 14 13 6 2 4 6 2 1 3 6 2 6 9 9 0 1 5 4 1 0 1 4 5 1 0 2 2 3 4 3 5 6 2 4 2 2 5 4 0 3 2 6 4 5 5 3 0 1 3 1 2 2 1 3 5 5 1 2 1 0 2 1 4 4 0 0 12 6 1 0 6 4 4 5 2 2 3 12 5 4 1 2 6 1 2 1 2 1 0 1 3 2 4 0 1 3 0 1 1 3 4 5 1 0 2 2 0 1 5 2 1 1 3 3 3 3 6 4 5 5 0 1 2 1 3 1 5 11 2 0 4 5 3 6 1 2 1 6 10 5 5 0 7 2 2 1 3 1 1 0 0 1 3 4 3 4 5 4 2 3 3 1 5 6 0 2 1 3 3 2 7 10 1 1 5 2 5 3 1 2 3 3 3 2 2 1 1 1 1 4 2 3 2 0 3 1 5 5 0 0 0 0 2 10 14 5 1 1 6 1 2 1 4 1 0 0 1 5 4 0 6 1 0 2 2 0 4 6 1 2 5 3 0 0 3 2 1 1 4 4 1 4 4 3 2 1 2 2 6 0 1 0 7 1 2 1 2 5 2 0 0 0 0 6 10 15 5 0 6 2 1 2 3 2 1 1 2 1 0 1 1 1 2 2 3 2 1 1 1 2 0 1 3 1 2 10 5 2 2 3 1 1 2 1 1 2 2 2 1 1 1 1 1 1 1 0 0 5 2 1 1 2 1 1 0 0 1 1 0 7 2 5 7 0 2 0 0 0 0 0 1 3 0 2 1 3 4 4 0 1 0 0 2 4 1 0 3 3 1 2 2 0 0 2 10 2 0 1 1 1 2 3 3 0 0 1 2 12 5 1 1 3 1 1 1 0 0 1 0 3 6 2 6 3 1 0 0 0 0 0 0 0 0 1 1 1 1 1 2 3 3 1 0 0 1 1 0 2 1 1 2 1 1 1 0 0 1 1 0 0 1 1 1 1 1 0 0 0 0 1 1 0 0 2 1 1 1 2 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 2 0 0 0 1 1 1 4 3 4 0 0 0 0 0 2 1 0 2 3 0 1 2 1 1 0 2 0 0 3 0 2 1 4 1 5 2 3 0 8 1 1 1 2 1 1 0 1 0 0 0 0 1 0 0 0 1 0 0 1 0 2 1 1 0 0 0 0 0 0 1 0 0 0 2 1 1 1 0 0 0 0 0 0 0 0 0 2 1 0 0 0 0 0 1 1 0 0 0 0 0 0 1 0 1 1 1 1 0 0 1 0 0 0 0 1 0 0 1 4 6 0 0 0 0 0 1 0 0 1 0 1 0 0 2 0 1 0 1 0 0 0 0 0 3 0 0 1 0 1 0 0 1 2 0 1 2 2 2 2 0 2 1 3 1 1 2 1 1 0 1 1 0 1 0 0 1 0 1 1 5 3 0 0 0 1 0 1 0 1 1 0 0 0 0 0 1 1 1 1 2 0 1 1 0 0 1 0 0 0 0 0 1 1 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 1 1 1 0 0 1 0 0 0 0 0 0 0 0 0 3 4 0 1 0 0 0 0 1 1 1 0 0 0 0 2 0 0 0 1 0 0 0 0 1 1 0 0 1 2 1 0 0 0 1 0 1 3 1 1 1 1 1 0 1 1 1 2 1 0 0 1 0 0 0 0 0 0 0 0 0 4 2 0 0 0 0 0 1 1 1 0 0 0 1 1 0 0 0 1 1 0 0 1 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 1 0 1 1 1 0 0 1 0 0 0 0 0 0 0 0 1 0 0 1 0 0 0 0 0 0 0 1 1 0 0 0 1 1 0 0 0 2 3 0 2 0 0 1 0 0 0 0 0 2 3 1 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 1 0 0 0 1 0 0 0 0 1 1 0 2 0 0 1 0 0 0 0 0 0 1 0 0 0 1 1 0 0 1 0 0 0 0 1 2 0 0 0 0 0 0 0 0 0 0 1 1 1 1 0 0 0 0 0 0 0 1 1 1 0 0 1 0 1 1 1 0 0 0 0 0 1 1 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 1 1 0 1 2 1 0 0 0 0 0 0 0 0 0 0 1 1 1 1 0 0 0 0 0 0 0 0 0 1 1 0 1 0 0 1 1 0 0 0"));
Appearance1076.addChild(&PixelTexture1077);

Shape1075.addChild(&Appearance1076);

IndexedFaceSet& IndexedFaceSet1078 =  IndexedFaceSet();
IndexedFaceSet1078.setCreaseAngle(0.5);
IndexedFaceSet1078.setColorIndex(new int[]{4,4,4,-1,9,1,0,-1,9,8,1,-1,1,0,0,-1,0,5,0,-1,0,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,0,-1,2,2,0,-1,0,6,1,-1,6,0,1,-1,7,0,8,-1,0,1,8,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,9,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,7,-1,0,0,7,-1}, 240);
IndexedFaceSet1078.setTexCoordIndex(new int32_t[]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1}, 240);
IndexedFaceSet1078.setCoordIndex(new int32_t[]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1}, 240);
CColor& Color1079 =  CColor();
Color1079.setColor(new float[]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.572192,0.486464,0.354382,0.593583,0.504649,0.36763,0.727273,0.618309,0.45043}, 30);
IndexedFaceSet1078.setColor(&Color1079);

TextureCoordinate& TextureCoordinate1080 =  TextureCoordinate();
TextureCoordinate1080.setPoint(new float[]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611}, 232);
IndexedFaceSet1078.setTexCoord(&TextureCoordinate1080);

Coordinate& Coordinate1081 =  Coordinate();
Coordinate1081.setPoint(new float[]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574}, 99);
IndexedFaceSet1078.setCoord(&Coordinate1081);

Shape1075.setGeometry(&IndexedFaceSet1078);

Transform1074.addChild(&Shape1075);

LOD1073.addChildren(&Transform1074);

Transform& Transform1082 =  Transform();
Transform1082.setDEF(CString("alertEmpty_4"));
LOD1073.addChildren(&Transform1082);

Transform1072.addChild(&LOD1073);

Transform1071.addChild(&Transform1072);

Transform& Transform1083 =  Transform();
Transform1083.setDEF(CString("proxyLOD_12"));
LOD& LOD1084 =  LOD();
LOD1084.setRange(new float[]{40}, 1);
Transform& Transform1085 =  Transform();
Transform1085.setDEF(CString("proxyOn_33"));
ProximitySensor& ProximitySensor1086 =  ProximitySensor();
ProximitySensor1086.setDEF(CString("_80"));
ProximitySensor1086.setSize(new float[]{25,100,25});
Transform1085.addChild(&ProximitySensor1086);

LOD1084.addChildren(&Transform1085);

Transform& Transform1087 =  Transform();
Transform1087.setDEF(CString("proxyOff_36"));
LOD1084.addChildren(&Transform1087);

Transform1083.addChild(&LOD1084);

Transform1071.addChild(&Transform1083);

Transform1070.addChild(&Transform1071);

Transform& Transform1088 =  Transform();
Transform1088.setDEF(CString("saule02"));
Transform1088.setTranslation(new float[]{-50,0,-750});
LOD& LOD1089 =  LOD();
LOD1089.setRange(new float[]{400}, 1);
Transform& Transform1090 =  Transform();
Transform1090.setTranslation(new float[]{0,3.2291,0});
Transform1090.setScale(new float[]{1,3.72126,1});
Shape& Shape1091 =  Shape();
Appearance& Appearance1092 =  Appearance();
PixelTexture& PixelTexture1093 =  PixelTexture();
PixelTexture1093.setUSE(CString("_79"));
Appearance1092.addChild(&PixelTexture1093);

Shape1091.addChild(&Appearance1092);

IndexedFaceSet& IndexedFaceSet1094 =  IndexedFaceSet();
IndexedFaceSet1094.setCreaseAngle(0.5);
IndexedFaceSet1094.setColorIndex(new int[]{4,4,4,-1,8,0,0,-1,8,7,0,-1,0,0,0,-1,0,5,0,-1,0,9,5,-1,9,2,5,-1,9,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,9,-1,2,2,9,-1,6,2,0,-1,2,9,0,-1,0,6,0,-1,6,0,0,-1,8,0,7,-1,0,0,7,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,8,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,8,-1,0,0,8,-1}, 240);
IndexedFaceSet1094.setTexCoordIndex(new int32_t[]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1}, 240);
IndexedFaceSet1094.setCoordIndex(new int32_t[]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1}, 240);
CColor& Color1095 =  CColor();
Color1095.setColor(new float[]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.828877,0.704691,0.513358,0.593583,0.504649,0.36763,0.427701,0.524064,0.250297}, 30);
IndexedFaceSet1094.setColor(&Color1095);

TextureCoordinate& TextureCoordinate1096 =  TextureCoordinate();
TextureCoordinate1096.setPoint(new float[]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611}, 232);
IndexedFaceSet1094.setTexCoord(&TextureCoordinate1096);

Coordinate& Coordinate1097 =  Coordinate();
Coordinate1097.setPoint(new float[]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574}, 99);
IndexedFaceSet1094.setCoord(&Coordinate1097);

Shape1091.setGeometry(&IndexedFaceSet1094);

Transform1090.addChild(&Shape1091);

LOD1089.addChildren(&Transform1090);

Transform& Transform1098 =  Transform();
Transform1098.setDEF(CString("alertEmpty_5"));
LOD1089.addChildren(&Transform1098);

Transform1088.addChild(&LOD1089);

LOD& LOD1099 =  LOD();
LOD1099.setRange(new float[]{40}, 1);
Transform& Transform1100 =  Transform();
Transform1100.setDEF(CString("proxyOn_34"));
ProximitySensor& ProximitySensor1101 =  ProximitySensor();
ProximitySensor1101.setDEF(CString("_81"));
ProximitySensor1101.setSize(new float[]{25,100,25});
Transform1100.addChild(&ProximitySensor1101);

LOD1099.addChildren(&Transform1100);

Transform& Transform1102 =  Transform();
Transform1102.setDEF(CString("proxyOff_37"));
LOD1099.addChildren(&Transform1102);

Transform1088.addChild(&LOD1099);

Transform1070.addChild(&Transform1088);

Transform& Transform1103 =  Transform();
Transform1103.setDEF(CString("saule03"));
Transform1103.setTranslation(new float[]{-100,0,-800});
LOD& LOD1104 =  LOD();
LOD1104.setRange(new float[]{400}, 1);
Transform& Transform1105 =  Transform();
Transform1105.setTranslation(new float[]{0,3.2291,0});
Transform1105.setScale(new float[]{1,3.72126,1});
Shape& Shape1106 =  Shape();
Appearance& Appearance1107 =  Appearance();
PixelTexture& PixelTexture1108 =  PixelTexture();
PixelTexture1108.setUSE(CString("_79"));
Appearance1107.addChild(&PixelTexture1108);

Shape1106.addChild(&Appearance1107);

IndexedFaceSet& IndexedFaceSet1109 =  IndexedFaceSet();
IndexedFaceSet1109.setCreaseAngle(0.5);
IndexedFaceSet1109.setColorIndex(new int[]{4,4,4,-1,7,9,0,-1,7,7,9,-1,9,8,0,-1,8,5,0,-1,8,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,8,-1,2,2,8,-1,0,6,9,-1,6,8,9,-1,7,0,7,-1,0,9,7,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,7,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,7,-1,0,0,7,-1}, 240);
IndexedFaceSet1109.setTexCoordIndex(new int32_t[]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1}, 240);
IndexedFaceSet1109.setCoordIndex(new int32_t[]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1}, 240);
CColor& Color1110 =  CColor();
Color1110.setColor(new float[]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.593583,0.504649,0.36763,0.743316,0.416256,0.381853,0.780749,0.335241,0.287056}, 30);
IndexedFaceSet1109.setColor(&Color1110);

TextureCoordinate& TextureCoordinate1111 =  TextureCoordinate();
TextureCoordinate1111.setPoint(new float[]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611}, 232);
IndexedFaceSet1109.setTexCoord(&TextureCoordinate1111);

Coordinate& Coordinate1112 =  Coordinate();
Coordinate1112.setPoint(new float[]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574}, 99);
IndexedFaceSet1109.setCoord(&Coordinate1112);

Shape1106.setGeometry(&IndexedFaceSet1109);

Transform1105.addChild(&Shape1106);

LOD1104.addChildren(&Transform1105);

Transform& Transform1113 =  Transform();
Transform1113.setDEF(CString("alertEmpty_6"));
LOD1104.addChildren(&Transform1113);

Transform1103.addChild(&LOD1104);

LOD& LOD1114 =  LOD();
LOD1114.setRange(new float[]{40}, 1);
Transform& Transform1115 =  Transform();
Transform1115.setDEF(CString("proxyOn_35"));
ProximitySensor& ProximitySensor1116 =  ProximitySensor();
ProximitySensor1116.setDEF(CString("_82"));
ProximitySensor1116.setSize(new float[]{25,100,25});
Transform1115.addChild(&ProximitySensor1116);

LOD1114.addChildren(&Transform1115);

Transform& Transform1117 =  Transform();
Transform1117.setDEF(CString("proxyOff_38"));
LOD1114.addChildren(&Transform1117);

Transform1103.addChild(&LOD1114);

Transform1070.addChild(&Transform1103);

Transform& Transform1118 =  Transform();
Transform1118.setDEF(CString("saule04"));
Transform1118.setTranslation(new float[]{16,0,-830});
LOD& LOD1119 =  LOD();
LOD1119.setRange(new float[]{400}, 1);
Transform& Transform1120 =  Transform();
Transform1120.setTranslation(new float[]{0,3.2291,0});
Transform1120.setScale(new float[]{1,3.72126,1});
Shape& Shape1121 =  Shape();
Appearance& Appearance1122 =  Appearance();
PixelTexture& PixelTexture1123 =  PixelTexture();
PixelTexture1123.setUSE(CString("_79"));
Appearance1122.addChild(&PixelTexture1123);

Shape1121.addChild(&Appearance1122);

IndexedFaceSet& IndexedFaceSet1124 =  IndexedFaceSet();
IndexedFaceSet1124.setCreaseAngle(0.5);
IndexedFaceSet1124.setColorIndex(new int[]{4,4,4,-1,7,0,0,-1,7,8,0,-1,0,0,0,-1,0,5,0,-1,0,2,5,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,3,0,3,-1,0,0,3,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,6,2,0,-1,2,2,0,-1,0,6,0,-1,6,0,0,-1,8,0,8,-1,0,0,8,-1,0,0,0,-1,0,3,0,-1,3,0,3,-1,0,0,3,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,3,3,0,-1,2,2,2,-1,0,0,0,-1,2,0,2,-1,2,2,2,-1,0,0,5,-1,2,0,5,-1,0,1,0,-1,5,0,0,-1,0,1,7,-1,4,4,4,-1,4,4,4,-1,3,0,3,-1,0,0,3,-1,0,3,0,-1,3,3,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,2,6,-1,2,2,6,-1,0,0,0,-1,0,6,0,-1,1,0,8,-1,0,0,8,-1}, 240);
IndexedFaceSet1124.setTexCoordIndex(new int32_t[]{26,27,28,-1,0,2,3,-1,0,1,2,-1,4,5,7,-1,5,6,7,-1,8,9,11,-1,9,10,11,-1,12,13,15,-1,13,14,15,-1,16,17,19,-1,22,23,25,-1,23,24,25,-1,56,57,55,-1,51,52,53,-1,52,54,53,-1,46,49,48,-1,49,50,48,-1,45,46,47,-1,46,48,47,-1,41,42,43,-1,42,44,43,-1,37,38,39,-1,38,40,39,-1,33,34,35,-1,34,36,35,-1,30,31,29,-1,31,32,29,-1,103,104,105,-1,113,114,112,-1,108,104,107,-1,104,103,107,-1,112,114,115,-1,19,17,18,-1,17,20,18,-1,20,21,18,-1,100,101,99,-1,103,105,106,-1,96,97,95,-1,99,101,102,-1,92,93,91,-1,95,97,98,-1,88,89,87,-1,91,93,94,-1,87,89,90,-1,111,109,110,-1,85,86,84,-1,80,81,82,-1,81,83,82,-1,75,78,77,-1,78,79,77,-1,74,75,76,-1,75,77,76,-1,70,71,72,-1,71,73,72,-1,66,67,68,-1,67,69,68,-1,62,63,64,-1,63,65,64,-1,59,60,58,-1,60,61,58,-1}, 240);
IndexedFaceSet1124.setCoordIndex(new int32_t[]{14,13,15,-1,0,2,3,-1,0,1,2,-1,2,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,11,13,12,-1,13,14,12,-1,23,15,13,-1,22,23,11,-1,23,13,11,-1,21,22,10,-1,22,11,10,-1,20,21,8,-1,21,10,8,-1,19,20,6,-1,20,8,6,-1,18,19,4,-1,19,6,4,-1,17,18,2,-1,18,4,2,-1,16,17,1,-1,17,2,1,-1,32,29,28,-1,31,30,14,-1,30,29,12,-1,29,32,12,-1,14,30,12,-1,9,10,32,-1,10,11,32,-1,11,12,32,-1,28,27,9,-1,32,28,9,-1,27,26,7,-1,9,27,7,-1,26,25,5,-1,7,26,5,-1,25,24,3,-1,5,25,3,-1,3,24,0,-1,31,14,15,-1,31,15,23,-1,30,31,22,-1,31,23,22,-1,29,30,21,-1,30,22,21,-1,28,29,20,-1,29,21,20,-1,27,28,19,-1,28,20,19,-1,26,27,18,-1,27,19,18,-1,25,26,17,-1,26,18,17,-1,24,25,16,-1,25,17,16,-1}, 240);
CColor& Color1125 =  CColor();
Color1125.setColor(new float[]{1,0.850175,0.619341,0.355351,0.524064,0.318229,0.524064,0.445546,0.324575,0.743316,0.526441,0.409342,0.491979,0.0552575,0.0704159,1,0.681999,0.54096,0.807487,0.686505,0.50011,0.593583,0.504649,0.36763,0.315508,0.313602,0.196817}, 27);
IndexedFaceSet1124.setColor(&Color1125);

TextureCoordinate& TextureCoordinate1126 =  TextureCoordinate();
TextureCoordinate1126.setPoint(new float[]{-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.492647,1.01077,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.853538,0.519803,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.961038,-0.0036552,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,-0.162517,-0.00304385,0.475476,-0.00304385,0.475476,0.778361,-0.162517,0.778361,0.504165,0.32847,0.469612,0.512583,-0.0755638,0.33208,-0.0179748,0.505363,0.492647,1.01077,0.504165,1.76527,-0.181015,1.01077,-0.169497,1.76527,0.853538,0.519803,0.945681,0.794167,0.0502745,0.519803,-0.0543194,0.794167,0.961038,-0.0036552,0.963903,0.330845,-0.160914,-0.00365493,-0.158049,0.329099,0.853538,0.494336,-0.0476847,0.494336,0.488808,-0.0000450611,0.399935,0.328425,-0.167706,0.00717509,-0.0962619,0.335645,-0.0493093,2.49287,0.362268,2.49287,0.156479,2.66979,0.475476,0.778361,-0.162517,0.778361,-0.162517,-0.00304385,0.475476,-0.00304385,0.469612,0.512583,-0.0179748,0.505363,-0.0755638,0.33208,0.504165,0.32847,0.504165,1.76527,-0.169497,1.76527,-0.181015,1.01077,0.492647,1.01077,0.945681,0.794167,-0.0543194,0.794167,0.0502745,0.519803,0.853538,0.519803,0.963903,0.330845,-0.158049,0.329099,-0.160914,-0.00365493,0.961038,-0.0036552,0.853538,0.494336,-0.0476847,0.494336,0.362268,2.49287,0.156479,2.66979,-0.0493093,2.49287,0.399935,0.328425,-0.0962619,0.335645,-0.167706,0.00717509,0.488808,-0.0000450611}, 232);
IndexedFaceSet1124.setTexCoord(&TextureCoordinate1126);

Coordinate& Coordinate1127 =  Coordinate();
Coordinate1127.setPoint(new float[]{-11.77,-11.77,11.7701,11.77,-11.77,11.7701,11.77,-5.58188,11.7701,-11.77,-5.58188,11.7701,9.04266,-3.84456,9.04274,-9.04266,-3.84456,9.04274,9.04266,0.886834,9.04274,-9.04266,0.886833,9.04274,11.2574,1.60157,11.2575,-11.2574,1.60157,11.2575,11.2574,4.01769,11.2575,9.04266,5.27627,9.04274,-9.04266,5.27627,9.04274,7.59297,7.99569,7.59303,-7.59297,7.99569,7.59303,0,9.39676,0,11.7701,-11.77,-11.77,11.7701,-5.58188,-11.77,9.04275,-3.84456,-9.04266,9.04275,0.886834,-9.04266,11.2575,1.60157,-11.2574,11.2575,4.01769,-11.2574,9.04275,5.27627,-9.04266,7.59304,7.99569,-7.59296,-11.77,-11.77,-11.7701,-11.77,-5.58188,-11.7701,-9.04265,-3.84457,-9.04274,-9.04265,0.886837,-9.04274,-11.2574,1.60158,-11.2575,-11.2574,4.0177,-11.2575,-9.04265,5.27628,-9.04274,-7.59296,7.9957,-7.59304,-11.2575,4.01769,11.2574}, 99);
IndexedFaceSet1124.setCoord(&Coordinate1127);

Shape1121.setGeometry(&IndexedFaceSet1124);

Transform1120.addChild(&Shape1121);

LOD1119.addChildren(&Transform1120);

Transform& Transform1128 =  Transform();
Transform1128.setDEF(CString("alertEmpty"));
LOD1119.addChildren(&Transform1128);

Transform1118.addChild(&LOD1119);

LOD& LOD1129 =  LOD();
LOD1129.setRange(new float[]{40}, 1);
Transform& Transform1130 =  Transform();
Transform1130.setDEF(CString("proxyOn_36"));
ProximitySensor& ProximitySensor1131 =  ProximitySensor();
ProximitySensor1131.setSize(new float[]{25,100,25});
Transform1130.addChild(&ProximitySensor1131);

LOD1129.addChildren(&Transform1130);

Transform& Transform1132 =  Transform();
Transform1132.setDEF(CString("proxyOff_39"));
LOD1129.addChildren(&Transform1132);

Transform1118.addChild(&LOD1129);

Transform1070.addChild(&Transform1118);

Transform935.addChild(&Transform1070);

Transform& Transform1133 =  Transform();
Transform1133.setDEF(CString("temple_1"));
Transform& Transform1134 =  Transform();
Transform1134.setDEF(CString("temple02"));
Transform1134.setTranslation(new float[]{80,-40,-900});
LOD& LOD1135 =  LOD();
LOD1135.setRange(new float[]{400}, 1);
Transform& Transform1136 =  Transform();
Transform1136.setDEF(CString("temple_2"));
Transform& Transform1137 =  Transform();
Transform1137.setDEF(CString("m1_1"));
Transform1137.setTranslation(new float[]{-21.8605,0,21.8605});
Shape& Shape1138 =  Shape();
Appearance& Appearance1139 =  Appearance();
ImageTexture& ImageTexture1140 =  ImageTexture();
ImageTexture1140.setDEF(CString("_83"));
ImageTexture1140.setUrl(new CString[]{CString("stone.png")}, 1);
Appearance1139.addChild(&ImageTexture1140);

Shape1138.addChild(&Appearance1139);

IndexedFaceSet& IndexedFaceSet1141 =  IndexedFaceSet();
IndexedFaceSet1141.setColorIndex(new int[]{0,3,2,-1,0,3,3,-1,0,0,0,-1,0,3,0,-1,2,3,1,-1,2,3,3,-1,1,3,0,-1,3,0,0,-1}, 32);
IndexedFaceSet1141.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1141.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1142 =  CColor();
Color1142.setColor(new float[]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.283422,0.235955,0.180695,0.219251,0.217926,0.136771}, 12);
IndexedFaceSet1141.setColor(&Color1142);

TextureCoordinate& TextureCoordinate1143 =  TextureCoordinate();
TextureCoordinate1143.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1141.setTexCoord(&TextureCoordinate1143);

Coordinate& Coordinate1144 =  Coordinate();
Coordinate1144.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1141.setCoord(&Coordinate1144);

Shape1138.setGeometry(&IndexedFaceSet1141);

Transform1137.addChild(&Shape1138);

Transform1136.addChild(&Transform1137);

Transform& Transform1145 =  Transform();
Transform1145.setTranslation(new float[]{21.8605,0,21.8605});
Shape& Shape1146 =  Shape();
Appearance& Appearance1147 =  Appearance();
ImageTexture& ImageTexture1148 =  ImageTexture();
ImageTexture1148.setUSE(CString("_83"));
Appearance1147.addChild(&ImageTexture1148);

Shape1146.addChild(&Appearance1147);

IndexedFaceSet& IndexedFaceSet1149 =  IndexedFaceSet();
IndexedFaceSet1149.setColorIndex(new int[]{2,1,0,-1,2,1,1,-1,3,4,2,-1,4,1,2,-1,0,1,0,-1,0,1,1,-1,0,1,3,-1,1,4,3,-1}, 32);
IndexedFaceSet1149.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1149.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1150 =  CColor();
Color1150.setColor(new float[]{0.764706,0.636633,0.487534,0.219251,0.217926,0.136771,0.165775,0.138011,0.105689,0.0534759,0.0445198,0.0340933,0.561764,0.764706,0.555028}, 15);
IndexedFaceSet1149.setColor(&Color1150);

TextureCoordinate& TextureCoordinate1151 =  TextureCoordinate();
TextureCoordinate1151.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1149.setTexCoord(&TextureCoordinate1151);

Coordinate& Coordinate1152 =  Coordinate();
Coordinate1152.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1149.setCoord(&Coordinate1152);

Shape1146.setGeometry(&IndexedFaceSet1149);

Transform1145.addChild(&Shape1146);

Transform1136.addChild(&Transform1145);

Transform& Transform1153 =  Transform();
Transform1153.setTranslation(new float[]{21.8605,0,-21.8605});
Shape& Shape1154 =  Shape();
Appearance& Appearance1155 =  Appearance();
ImageTexture& ImageTexture1156 =  ImageTexture();
ImageTexture1156.setUSE(CString("_83"));
Appearance1155.addChild(&ImageTexture1156);

Shape1154.addChild(&Appearance1155);

IndexedFaceSet& IndexedFaceSet1157 =  IndexedFaceSet();
IndexedFaceSet1157.setColorIndex(new int[]{2,1,4,-1,2,1,1,-1,3,0,2,-1,0,1,2,-1,4,1,0,-1,4,1,1,-1,0,1,3,-1,1,0,3,-1}, 32);
IndexedFaceSet1157.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1157.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1158 =  CColor();
Color1158.setColor(new float[]{0.764706,0.636633,0.487534,0.219251,0.217926,0.136771,0.0387195,0.0681036,0.149733,0.0534759,0.0445198,0.0340933,0.192513,0.160271,0.122736}, 15);
IndexedFaceSet1157.setColor(&Color1158);

TextureCoordinate& TextureCoordinate1159 =  TextureCoordinate();
TextureCoordinate1159.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1157.setTexCoord(&TextureCoordinate1159);

Coordinate& Coordinate1160 =  Coordinate();
Coordinate1160.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1157.setCoord(&Coordinate1160);

Shape1154.setGeometry(&IndexedFaceSet1157);

Transform1153.addChild(&Shape1154);

Transform1136.addChild(&Transform1153);

Transform& Transform1161 =  Transform();
Transform1161.setTranslation(new float[]{-21.8605,0,-21.8605});
Shape& Shape1162 =  Shape();
Appearance& Appearance1163 =  Appearance();
ImageTexture& ImageTexture1164 =  ImageTexture();
ImageTexture1164.setUSE(CString("_83"));
Appearance1163.addChild(&ImageTexture1164);

Shape1162.addChild(&Appearance1163);

IndexedFaceSet& IndexedFaceSet1165 =  IndexedFaceSet();
IndexedFaceSet1165.setColorIndex(new int[]{4,5,2,-1,4,5,5,-1,0,0,4,-1,0,5,4,-1,2,3,1,-1,2,5,3,-1,1,3,0,-1,3,0,0,-1}, 32);
IndexedFaceSet1165.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1165.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1166 =  CColor();
Color1166.setColor(new float[]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.144385,0.120203,0.092052,0.764706,0.760817,0.648347,0.106952,0.0890395,0.0681866,0.219251,0.217926,0.136771}, 18);
IndexedFaceSet1165.setColor(&Color1166);

TextureCoordinate& TextureCoordinate1167 =  TextureCoordinate();
TextureCoordinate1167.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1165.setTexCoord(&TextureCoordinate1167);

Coordinate& Coordinate1168 =  Coordinate();
Coordinate1168.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1165.setCoord(&Coordinate1168);

Shape1162.setGeometry(&IndexedFaceSet1165);

Transform1161.addChild(&Shape1162);

Transform1136.addChild(&Transform1161);

Transform& Transform1169 =  Transform();
Transform1169.setTranslation(new float[]{-21.8605,0,21.8605});
Shape& Shape1170 =  Shape();
Appearance& Appearance1171 =  Appearance();
ImageTexture& ImageTexture1172 =  ImageTexture();
ImageTexture1172.setUSE(CString("_83"));
Appearance1171.addChild(&ImageTexture1172);

Shape1170.addChild(&Appearance1171);

IndexedFaceSet& IndexedFaceSet1173 =  IndexedFaceSet();
IndexedFaceSet1173.setColorIndex(new int[]{13,2,4,-1,13,1,2,-1,15,14,4,-1,15,12,14,-1,5,13,14,-1,13,4,14,-1,2,15,4,-1,2,3,15,-1,11,0,8,-1,10,7,0,-1,8,6,9,-1,7,6,0,-1,0,6,8,-1,0,6,7,-1,6,14,0,-1,14,6,0,-1,6,15,8,-1,15,6,8,-1,8,6,6,-1,8,6,6,-1,9,13,6,-1,9,6,13,-1}, 88);
IndexedFaceSet1173.setTexCoordIndex(new int32_t[]{21,12,16,-1,21,9,12,-1,19,15,17,-1,19,11,15,-1,8,21,15,-1,21,16,15,-1,12,19,17,-1,12,10,19,-1,4,6,7,-1,4,5,6,-1,0,2,3,-1,0,1,3,-1,0,1,3,-1,0,2,3,-1,1,14,3,-1,14,2,3,-1,1,18,3,-1,18,2,3,-1,0,13,2,-1,0,1,13,-1,0,20,2,-1,0,1,20,-1}, 88);
IndexedFaceSet1173.setCoordIndex(new int32_t[]{12,8,10,-1,12,6,8,-1,11,9,10,-1,11,2,9,-1,1,12,9,-1,12,10,9,-1,8,11,10,-1,8,4,11,-1,7,3,5,-1,7,0,3,-1,5,6,7,-1,0,1,3,-1,3,2,5,-1,7,1,0,-1,1,9,3,-1,9,2,3,-1,2,11,5,-1,11,4,5,-1,5,8,6,-1,5,4,8,-1,7,12,1,-1,7,6,12,-1}, 88);
CColor& Color1174 =  CColor();
Color1174.setColor(new float[]{0.764706,0.636633,0.487534,0.0481283,0.0400678,0.030684,0.406417,0.33835,0.259109,0.0802139,0.0667796,0.05114,0.352941,0.22673,0.215845,0.117647,0.0979435,0.0750053,0.379679,0.31609,0.242063,0.514736,0.764706,0.510734,0.764706,0.473992,0.366565,1,0.83252,0.637545,1,0.903846,0.702595,0.925134,0.828418,0.659464,0.0855615,0.0712316,0.0545493,0.331551,0.276023,0.211379,0.481283,0.400678,0.30684,0.55615,0.463006,0.354571}, 48);
IndexedFaceSet1173.setColor(&Color1174);

TextureCoordinate& TextureCoordinate1175 =  TextureCoordinate();
TextureCoordinate1175.setPoint(new float[]{0,0.999998,0,0,3.99998,0,3.99998,0.999998,0,5.02982,0,0,3.55502,0,3.55502,5.02982,0,0,0,5.0083,3.55599,5.0083,3.55599,0,1.778,5.0083,1.99999,0,1.99999,0,1.778,0,1.778,2.50415,1.778,2.50415,1.99999,0,3.55599,2.50415,1.99999,0,0,2.50415}, 44);
IndexedFaceSet1173.setTexCoord(&TextureCoordinate1175);

Coordinate& Coordinate1176 =  Coordinate();
Coordinate1176.setPoint(new float[]{-4.02939,22.3794,4.02939,-4.02939,17.3128,4.02939,47.7504,17.3128,4.02939,47.7504,22.3794,4.02939,47.7504,17.3128,-47.7504,47.7504,22.3794,-47.7504,-4.02939,17.3128,-47.7504,-4.02939,22.3794,-47.7504,21.8605,17.3128,-47.7504,21.8605,17.3128,4.02939,21.8605,17.3128,-21.8605,47.7504,17.3128,-21.8605,-4.02939,17.3128,-21.8605}, 39);
IndexedFaceSet1173.setCoord(&Coordinate1176);

Shape1170.setGeometry(&IndexedFaceSet1173);

Transform1169.addChild(&Shape1170);

Transform1136.addChild(&Transform1169);

LOD1135.addChildren(&Transform1136);

Transform& Transform1177 =  Transform();
Transform1177.setDEF(CString("objOff_27"));
LOD1135.addChildren(&Transform1177);

Transform1134.addChild(&LOD1135);

LOD& LOD1178 =  LOD();
LOD1178.setRange(new float[]{80}, 1);
Transform& Transform1179 =  Transform();
Transform1179.setDEF(CString("proxyOn_37"));
Script& Script1180 =  Script();
Script1180.setDEF(CString("_proxyPlugger_2"));
field& field1181 =  field();
field1181.setName(CString("alert"));
field1181.setAccessType(CString("outputOnly"));
field1181.setType(CString("SFTime"));
Script1180.addChild(&field1181);

field& field1182 =  field();
field1182.setName(CString("hitTime"));
field1182.setAccessType(CString("inputOnly"));
field1182.setType(CString("SFTime"));
Script1180.addChild(&field1182);


Script1180.setSourceCode(CString("vrmlscript:")+
_T("function hitTime(value, time)")+
_T("{")+
_T(" alert = time;")+
_T("}"));
Transform1179.addChild(&Script1180);

Transform& Transform1183 =  Transform();
Transform1183.setTranslation(new float[]{-21.8666,10,21.9072});
ProximitySensor& ProximitySensor1184 =  ProximitySensor();
ProximitySensor1184.setDEF(CString("_84"));
ProximitySensor1184.setSize(new float[]{8,20,8});
Transform1183.addChild(&ProximitySensor1184);

Transform1179.addChild(&Transform1183);

Transform& Transform1185 =  Transform();
Transform1185.setTranslation(new float[]{21.814,10,21.9072});
ProximitySensor& ProximitySensor1186 =  ProximitySensor();
ProximitySensor1186.setDEF(CString("_85"));
ProximitySensor1186.setSize(new float[]{8,20,8});
Transform1185.addChild(&ProximitySensor1186);

Transform1179.addChild(&Transform1185);

Transform& Transform1187 =  Transform();
Transform1187.setTranslation(new float[]{21.8018,10,-22.371});
ProximitySensor& ProximitySensor1188 =  ProximitySensor();
ProximitySensor1188.setDEF(CString("_86"));
ProximitySensor1188.setSize(new float[]{8,20,8});
Transform1187.addChild(&ProximitySensor1188);

Transform1179.addChild(&Transform1187);

Transform& Transform1189 =  Transform();
Transform1189.setTranslation(new float[]{-21.9527,10,-22.371});
ProximitySensor& ProximitySensor1190 =  ProximitySensor();
ProximitySensor1190.setDEF(CString("_87"));
ProximitySensor1190.setSize(new float[]{8,20,8});
Transform1189.addChild(&ProximitySensor1190);

Transform1179.addChild(&Transform1189);

Transform& Transform1191 =  Transform();
Transform1191.setTranslation(new float[]{0,20.0107,0});
ProximitySensor& ProximitySensor1192 =  ProximitySensor();
ProximitySensor1192.setDEF(CString("_88"));
ProximitySensor1192.setSize(new float[]{52,6,52});
Transform1191.addChild(&ProximitySensor1192);

Transform1179.addChild(&Transform1191);

LOD1178.addChildren(&Transform1179);

Transform& Transform1193 =  Transform();
Transform1193.setDEF(CString("proxyOff_40"));
LOD1178.addChildren(&Transform1193);

Transform1134.addChild(&LOD1178);

Transform1133.addChild(&Transform1134);

Transform& Transform1194 =  Transform();
Transform1194.setDEF(CString("temple01"));
Transform1194.setTranslation(new float[]{-50,-40,-600});
Transform& Transform1195 =  Transform();
Transform1195.setDEF(CString("objLOD"));
LOD& LOD1196 =  LOD();
LOD1196.setRange(new float[]{400}, 1);
Transform& Transform1197 =  Transform();
Transform1197.setDEF(CString("temple"));
Transform& Transform1198 =  Transform();
Transform1198.setDEF(CString("m1"));
Transform1198.setTranslation(new float[]{-21.8605,0,21.8605});
Shape& Shape1199 =  Shape();
Appearance& Appearance1200 =  Appearance();
ImageTexture& ImageTexture1201 =  ImageTexture();
ImageTexture1201.setUSE(CString("_83"));
Appearance1200.addChild(&ImageTexture1201);

Shape1199.addChild(&Appearance1200);

IndexedFaceSet& IndexedFaceSet1202 =  IndexedFaceSet();
IndexedFaceSet1202.setCreaseAngle(0.5);
IndexedFaceSet1202.setColorIndex(new int[]{0,0,2,-1,0,3,0,-1,0,0,0,-1,0,3,0,-1,2,4,1,-1,2,0,4,-1,1,4,0,-1,4,0,0,-1}, 32);
IndexedFaceSet1202.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1202.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1203 =  CColor();
Color1203.setColor(new float[]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.283422,0.235955,0.180695,0.606754,0.764706,0.629551,0.635935,0.764706,0.728866}, 15);
IndexedFaceSet1202.setColor(&Color1203);

TextureCoordinate& TextureCoordinate1204 =  TextureCoordinate();
TextureCoordinate1204.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1202.setTexCoord(&TextureCoordinate1204);

Coordinate& Coordinate1205 =  Coordinate();
Coordinate1205.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1202.setCoord(&Coordinate1205);

Shape1199.setGeometry(&IndexedFaceSet1202);

Transform1198.addChild(&Shape1199);

Transform1197.addChild(&Transform1198);

Transform& Transform1206 =  Transform();
Transform1206.setTranslation(new float[]{21.8605,0,21.8605});
Shape& Shape1207 =  Shape();
Appearance& Appearance1208 =  Appearance();
ImageTexture& ImageTexture1209 =  ImageTexture();
ImageTexture1209.setUSE(CString("_83"));
Appearance1208.addChild(&ImageTexture1209);

Shape1207.addChild(&Appearance1208);

IndexedFaceSet& IndexedFaceSet1210 =  IndexedFaceSet();
IndexedFaceSet1210.setCreaseAngle(0.5);
IndexedFaceSet1210.setColorIndex(new int[]{3,5,0,-1,3,1,5,-1,4,6,3,-1,6,1,3,-1,0,2,0,-1,0,5,2,-1,0,2,4,-1,2,6,4,-1}, 32);
IndexedFaceSet1210.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1210.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1211 =  CColor();
Color1211.setColor(new float[]{0.764706,0.636633,0.487534,0.764706,0.725459,0.60772,0.403634,0.717446,0.764706,0.165775,0.138011,0.105689,0.0534759,0.0445198,0.0340933,0.74341,0.764706,0.576841,0.561764,0.764706,0.555028}, 21);
IndexedFaceSet1210.setColor(&Color1211);

TextureCoordinate& TextureCoordinate1212 =  TextureCoordinate();
TextureCoordinate1212.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1210.setTexCoord(&TextureCoordinate1212);

Coordinate& Coordinate1213 =  Coordinate();
Coordinate1213.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1210.setCoord(&Coordinate1213);

Shape1207.setGeometry(&IndexedFaceSet1210);

Transform1206.addChild(&Shape1207);

Transform1197.addChild(&Transform1206);

Transform& Transform1214 =  Transform();
Transform1214.setTranslation(new float[]{21.8605,0,-21.8605});
Shape& Shape1215 =  Shape();
Appearance& Appearance1216 =  Appearance();
ImageTexture& ImageTexture1217 =  ImageTexture();
ImageTexture1217.setUSE(CString("_83"));
Appearance1216.addChild(&ImageTexture1217);

Shape1215.addChild(&Appearance1216);

IndexedFaceSet& IndexedFaceSet1218 =  IndexedFaceSet();
IndexedFaceSet1218.setCreaseAngle(0.5);
IndexedFaceSet1218.setColorIndex(new int[]{2,4,5,-1,2,1,4,-1,3,0,2,-1,0,1,2,-1,5,0,0,-1,5,4,0,-1,0,0,3,-1,0,0,3,-1}, 32);
IndexedFaceSet1218.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1218.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1219 =  CColor();
Color1219.setColor(new float[]{0.764706,0.636633,0.487534,0.521442,0.764706,0.52333,0.0387195,0.0681036,0.149733,0.0534759,0.0445198,0.0340933,0.74341,0.764706,0.576841,0.192513,0.160271,0.122736}, 18);
IndexedFaceSet1218.setColor(&Color1219);

TextureCoordinate& TextureCoordinate1220 =  TextureCoordinate();
TextureCoordinate1220.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1218.setTexCoord(&TextureCoordinate1220);

Coordinate& Coordinate1221 =  Coordinate();
Coordinate1221.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1218.setCoord(&Coordinate1221);

Shape1215.setGeometry(&IndexedFaceSet1218);

Transform1214.addChild(&Shape1215);

Transform1197.addChild(&Transform1214);

Transform& Transform1222 =  Transform();
Transform1222.setTranslation(new float[]{-21.8605,0,-21.8605});
Shape& Shape1223 =  Shape();
Appearance& Appearance1224 =  Appearance();
ImageTexture& ImageTexture1225 =  ImageTexture();
ImageTexture1225.setUSE(CString("_83"));
Appearance1224.addChild(&ImageTexture1225);

Shape1223.addChild(&Appearance1224);

IndexedFaceSet& IndexedFaceSet1226 =  IndexedFaceSet();
IndexedFaceSet1226.setCreaseAngle(0.5);
IndexedFaceSet1226.setColorIndex(new int[]{4,5,2,-1,4,0,5,-1,0,0,4,-1,0,0,4,-1,2,3,1,-1,2,5,3,-1,1,3,0,-1,3,0,0,-1}, 32);
IndexedFaceSet1226.setTexCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1,0,3,2,-1,0,1,3,-1,0,1,2,-1,1,3,2,-1}, 32);
IndexedFaceSet1226.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,6,7,0,-1,7,1,0,-1,2,5,4,-1,2,3,5,-1,4,5,6,-1,5,7,6,-1}, 32);
CColor& Color1227 =  CColor();
Color1227.setColor(new float[]{0.764706,0.636633,0.487534,0.149733,0.124655,0.0954613,0.144385,0.120203,0.092052,0.764706,0.760817,0.648347,0.106952,0.0890395,0.0681866,0.553848,0.86631,0.515876}, 18);
IndexedFaceSet1226.setColor(&Color1227);

TextureCoordinate& TextureCoordinate1228 =  TextureCoordinate();
TextureCoordinate1228.setPoint(new float[]{0,3.02056,0,0,0.999825,3.02056,0.999825,0}, 8);
IndexedFaceSet1226.setTexCoord(&TextureCoordinate1228);

Coordinate& Coordinate1229 =  Coordinate();
Coordinate1229.setPoint(new float[]{-3.13949,17.3128,3.13949,-3.13949,0,3.13949,3.13949,17.3128,3.13949,3.13949,0,3.13949,3.13949,17.3128,-3.13949,3.13949,0,-3.13949,-3.13949,17.3128,-3.13949,-3.13949,0,-3.13949}, 24);
IndexedFaceSet1226.setCoord(&Coordinate1229);

Shape1223.setGeometry(&IndexedFaceSet1226);

Transform1222.addChild(&Shape1223);

Transform1197.addChild(&Transform1222);

Transform& Transform1230 =  Transform();
Transform1230.setTranslation(new float[]{-21.8605,0,21.8605});
Shape& Shape1231 =  Shape();
Appearance& Appearance1232 =  Appearance();
ImageTexture& ImageTexture1233 =  ImageTexture();
ImageTexture1233.setUSE(CString("_83"));
Appearance1232.addChild(&ImageTexture1233);

Shape1231.addChild(&Appearance1232);

IndexedFaceSet& IndexedFaceSet1234 =  IndexedFaceSet();
IndexedFaceSet1234.setCreaseAngle(0.5);
IndexedFaceSet1234.setColorIndex(new int[]{13,2,4,-1,13,1,2,-1,15,14,4,-1,15,12,14,-1,5,13,14,-1,13,4,14,-1,2,15,4,-1,2,3,15,-1,11,0,8,-1,10,7,0,-1,8,6,9,-1,8,6,6,6,-1,7,6,0,-1,6,14,6,0,-1,0,6,8,-1,6,15,6,8,-1,0,6,7,-1,9,6,13,6,-1}, 76);
IndexedFaceSet1234.setTexCoordIndex(new int32_t[]{21,12,16,-1,21,9,12,-1,19,15,17,-1,19,11,15,-1,8,21,15,-1,21,16,15,-1,12,19,17,-1,12,10,19,-1,4,6,7,-1,4,5,6,-1,0,2,3,-1,0,1,13,2,-1,0,1,3,-1,1,14,2,3,-1,0,1,3,-1,1,18,2,3,-1,0,2,3,-1,0,1,20,2,-1}, 76);
IndexedFaceSet1234.setCoordIndex(new int32_t[]{12,8,10,-1,12,6,8,-1,11,9,10,-1,11,2,9,-1,1,12,9,-1,12,10,9,-1,8,11,10,-1,8,4,11,-1,7,3,5,-1,7,0,3,-1,5,6,7,-1,5,4,8,6,-1,0,1,3,-1,1,9,2,3,-1,3,2,5,-1,2,11,4,5,-1,7,1,0,-1,7,6,12,1,-1}, 76);
CColor& Color1235 =  CColor();
Color1235.setColor(new float[]{0.764706,0.636633,0.487534,0.0481283,0.0400678,0.030684,0.406417,0.33835,0.259109,0.0802139,0.0667796,0.05114,0.352941,0.22673,0.215845,0.117647,0.0979435,0.0750053,0.379679,0.31609,0.242063,0.514736,0.764706,0.510734,0.764706,0.473992,0.366565,1,0.83252,0.637545,1,0.903846,0.702595,0.925134,0.828418,0.659464,0.0855615,0.0712316,0.0545493,0.331551,0.276023,0.211379,0.481283,0.400678,0.30684,0.55615,0.463006,0.354571}, 48);
IndexedFaceSet1234.setColor(&Color1235);

TextureCoordinate& TextureCoordinate1236 =  TextureCoordinate();
TextureCoordinate1236.setPoint(new float[]{0,0.999998,0,0,3.99998,0,3.99998,0.999998,0,5.02982,0,0,3.55502,0,3.55502,5.02982,0,0,0,5.0083,3.55599,5.0083,3.55599,0,1.778,5.0083,1.99999,0,1.99999,0,1.778,0,1.778,2.50415,1.778,2.50415,1.99999,0,3.55599,2.50415,1.99999,0,0,2.50415}, 44);
IndexedFaceSet1234.setTexCoord(&TextureCoordinate1236);

Coordinate& Coordinate1237 =  Coordinate();
Coordinate1237.setPoint(new float[]{-4.02939,22.3794,4.02939,-4.02939,17.3128,4.02939,47.7504,17.3128,4.02939,47.7504,22.3794,4.02939,47.7504,17.3128,-47.7504,47.7504,22.3794,-47.7504,-4.02939,17.3128,-47.7504,-4.02939,22.3794,-47.7504,21.8605,17.3128,-47.7504,21.8605,17.3128,4.02939,21.8605,17.3128,-21.8605,47.7504,17.3128,-21.8605,-4.02939,17.3128,-21.8605}, 39);
IndexedFaceSet1234.setCoord(&Coordinate1237);

Shape1231.setGeometry(&IndexedFaceSet1234);

Transform1230.addChild(&Shape1231);

Transform1197.addChild(&Transform1230);

LOD1196.addChildren(&Transform1197);

Transform& Transform1238 =  Transform();
Transform1238.setDEF(CString("objOff_28"));
LOD1196.addChildren(&Transform1238);

Transform1195.addChild(&LOD1196);

Transform1194.addChild(&Transform1195);

Transform& Transform1239 =  Transform();
Transform1239.setDEF(CString("proxyLOD"));
LOD& LOD1240 =  LOD();
LOD1240.setRange(new float[]{80}, 1);
Transform& Transform1241 =  Transform();
Transform1241.setDEF(CString("proxyOn_38"));
Script& Script1242 =  Script();
Script1242.setDEF(CString("_proxyPlugger_3"));
field& field1243 =  field();
field1243.setName(CString("alert"));
field1243.setAccessType(CString("outputOnly"));
field1243.setType(CString("SFTime"));
Script1242.addChild(&field1243);

field& field1244 =  field();
field1244.setName(CString("hitTime"));
field1244.setAccessType(CString("inputOnly"));
field1244.setType(CString("SFTime"));
Script1242.addChild(&field1244);


Script1242.setSourceCode(CString("vrmlscript:")+
_T("function hitTime(value, time)")+
_T("{")+
_T(" alert = time;")+
_T("}"));
Transform1241.addChild(&Script1242);

Transform& Transform1245 =  Transform();
Transform1245.setDEF(CString("proxy1"));
Transform1245.setTranslation(new float[]{-21.8666,10,21.9072});
ProximitySensor& ProximitySensor1246 =  ProximitySensor();
ProximitySensor1246.setDEF(CString("_89"));
ProximitySensor1246.setSize(new float[]{8,20,8});
Transform1245.addChild(&ProximitySensor1246);

Transform1241.addChild(&Transform1245);

Transform& Transform1247 =  Transform();
Transform1247.setDEF(CString("proxy2"));
Transform1247.setTranslation(new float[]{21.814,10,21.9072});
ProximitySensor& ProximitySensor1248 =  ProximitySensor();
ProximitySensor1248.setDEF(CString("_90"));
ProximitySensor1248.setSize(new float[]{8,20,8});
Transform1247.addChild(&ProximitySensor1248);

Transform1241.addChild(&Transform1247);

Transform& Transform1249 =  Transform();
Transform1249.setDEF(CString("proxy3"));
Transform1249.setTranslation(new float[]{21.8018,10,-22.371});
ProximitySensor& ProximitySensor1250 =  ProximitySensor();
ProximitySensor1250.setDEF(CString("_91"));
ProximitySensor1250.setSize(new float[]{8,20,8});
Transform1249.addChild(&ProximitySensor1250);

Transform1241.addChild(&Transform1249);

Transform& Transform1251 =  Transform();
Transform1251.setDEF(CString("proxy4"));
Transform1251.setTranslation(new float[]{-21.9527,10,-22.371});
ProximitySensor& ProximitySensor1252 =  ProximitySensor();
ProximitySensor1252.setDEF(CString("_92"));
ProximitySensor1252.setSize(new float[]{8,20,8});
Transform1251.addChild(&ProximitySensor1252);

Transform1241.addChild(&Transform1251);

Transform& Transform1253 =  Transform();
Transform1253.setDEF(CString("proxy5"));
Transform1253.setTranslation(new float[]{0,20.0107,0});
ProximitySensor& ProximitySensor1254 =  ProximitySensor();
ProximitySensor1254.setDEF(CString("_93"));
ProximitySensor1254.setSize(new float[]{52,6,52});
Transform1253.addChild(&ProximitySensor1254);

Transform1241.addChild(&Transform1253);

LOD1240.addChildren(&Transform1241);

Transform& Transform1255 =  Transform();
Transform1255.setDEF(CString("proxyOff_41"));
LOD1240.addChildren(&Transform1255);

Transform1239.addChild(&LOD1240);

Transform1194.addChild(&Transform1239);

Transform1133.addChild(&Transform1194);

Transform& Transform1256 =  Transform();
Transform1256.setDEF(CString("temple03"));
Transform1256.setTranslation(new float[]{-70,-40,-1750});
LOD& LOD1257 =  LOD();
LOD1257.setRange(new float[]{400}, 1);
Inline& Inline1258 =  Inline();
Inline1258.setUrl(new CString[]{CString("temple.x3d")}, 1);
Inline1258.setBboxSize(new float[]{51.7798,22.3794,51.7798});
Inline1258.setBboxCenter(new float[]{0.00000476837,11.1897,-0.00000476837});
LOD1257.addChildren(Inline1258);

Transform& Transform1259 =  Transform();
Transform1259.setDEF(CString("objOff_29"));
LOD1257.addChildren(&Transform1259);

Transform1256.addChild(&LOD1257);

LOD& LOD1260 =  LOD();
LOD1260.setRange(new float[]{80}, 1);
Transform& Transform1261 =  Transform();
Transform1261.setDEF(CString("proxyOn_39"));
Script& Script1262 =  Script();
Script1262.setDEF(CString("_proxyPlugger_4"));
field& field1263 =  field();
field1263.setName(CString("alert"));
field1263.setAccessType(CString("outputOnly"));
field1263.setType(CString("SFTime"));
Script1262.addChild(&field1263);

field& field1264 =  field();
field1264.setName(CString("hitTime"));
field1264.setAccessType(CString("inputOnly"));
field1264.setType(CString("SFTime"));
Script1262.addChild(&field1264);


Script1262.setSourceCode(CString("vrmlscript:")+
_T("function hitTime(value, time)")+
_T("{")+
_T(" alert = time;")+
_T("}"));
Transform1261.addChild(&Script1262);

Transform& Transform1265 =  Transform();
Transform1265.setTranslation(new float[]{-21.8666,10,21.9072});
ProximitySensor& ProximitySensor1266 =  ProximitySensor();
ProximitySensor1266.setDEF(CString("_94"));
ProximitySensor1266.setSize(new float[]{8,20,8});
Transform1265.addChild(&ProximitySensor1266);

Transform1261.addChild(&Transform1265);

Transform& Transform1267 =  Transform();
Transform1267.setTranslation(new float[]{21.814,10,21.9072});
ProximitySensor& ProximitySensor1268 =  ProximitySensor();
ProximitySensor1268.setDEF(CString("_95"));
ProximitySensor1268.setSize(new float[]{8,20,8});
Transform1267.addChild(&ProximitySensor1268);

Transform1261.addChild(&Transform1267);

Transform& Transform1269 =  Transform();
Transform1269.setTranslation(new float[]{21.8018,10,-22.371});
ProximitySensor& ProximitySensor1270 =  ProximitySensor();
ProximitySensor1270.setDEF(CString("_96"));
ProximitySensor1270.setSize(new float[]{8,20,8});
Transform1269.addChild(&ProximitySensor1270);

Transform1261.addChild(&Transform1269);

Transform& Transform1271 =  Transform();
Transform1271.setTranslation(new float[]{-21.9527,10,-22.371});
ProximitySensor& ProximitySensor1272 =  ProximitySensor();
ProximitySensor1272.setDEF(CString("_97"));
ProximitySensor1272.setSize(new float[]{8,20,8});
Transform1271.addChild(&ProximitySensor1272);

Transform1261.addChild(&Transform1271);

Transform& Transform1273 =  Transform();
Transform1273.setTranslation(new float[]{0,20.0107,0});
ProximitySensor& ProximitySensor1274 =  ProximitySensor();
ProximitySensor1274.setDEF(CString("_98"));
ProximitySensor1274.setSize(new float[]{52,6,52});
Transform1273.addChild(&ProximitySensor1274);

Transform1261.addChild(&Transform1273);

LOD1260.addChildren(&Transform1261);

Transform& Transform1275 =  Transform();
Transform1275.setDEF(CString("proxyOff_42"));
LOD1260.addChildren(&Transform1275);

Transform1256.addChild(&LOD1260);

Transform1133.addChild(&Transform1256);

Transform935.addChild(&Transform1133);

Transform& Transform1276 =  Transform();
Transform1276.setDEF(CString("ende"));
LOD& LOD1277 =  LOD();
LOD1277.setCenter(new float[]{0,0,-2000});
LOD1277.setRange(new float[]{300}, 1);
Transform& Transform1278 =  Transform();
Transform1278.setDEF(CString("end_1"));
Transform& Transform1279 =  Transform();
Transform1279.setTranslation(new float[]{8.97198,48.6583,-2034.39});
Transform1279.setRotation(new float[]{0.00000162937,6.52521e-9,1,0.00730793});
Transform1279.setScaleOrientation(new float[]{-0.706693,0.706693,0.0341919,1.4921});
ProximitySensor& ProximitySensor1280 =  ProximitySensor();
ProximitySensor1280.setDEF(CString("_99"));
ProximitySensor1280.setSize(new float[]{85,100,200});
Transform1279.addChild(&ProximitySensor1280);

Transform1278.addChild(&Transform1279);

Transform& Transform1281 =  Transform();
Transform1281.setTranslation(new float[]{-80.4659,10,-2098.23});
ProximitySensor& ProximitySensor1282 =  ProximitySensor();
ProximitySensor1282.setDEF(CString("_100"));
ProximitySensor1282.setSize(new float[]{90,100,200});
Transform1281.addChild(&ProximitySensor1282);

Transform1278.addChild(&Transform1281);

Transform& Transform1283 =  Transform();
Transform1283.setTranslation(new float[]{98.7516,10,-2098.23});
ProximitySensor& ProximitySensor1284 =  ProximitySensor();
ProximitySensor1284.setDEF(CString("_101"));
ProximitySensor1284.setSize(new float[]{90,100,200});
Transform1283.addChild(&ProximitySensor1284);

Transform1278.addChild(&Transform1283);

Transform& Transform1285 =  Transform();
Transform& Transform1286 =  Transform();
Transform1286.setTranslation(new float[]{-74.402,-29.9417,-1847.95});
ProximitySensor& ProximitySensor1287 =  ProximitySensor();
ProximitySensor1287.setDEF(CString("_102"));
ProximitySensor1287.setSize(new float[]{90,25,20});
Transform1286.addChild(&ProximitySensor1287);

Transform1285.addChild(&Transform1286);

Transform& Transform1288 =  Transform();
Transform1288.setTranslation(new float[]{76.8736,-29.9417,-1847.95});
ProximitySensor& ProximitySensor1289 =  ProximitySensor();
ProximitySensor1289.setDEF(CString("_103"));
ProximitySensor1289.setSize(new float[]{90,25,20});
Transform1288.addChild(&ProximitySensor1289);

Transform1285.addChild(&Transform1288);

Transform1278.addChild(&Transform1285);

LOD1277.addChildren(&Transform1278);

Transform& Transform1290 =  Transform();
LOD1277.addChildren(&Transform1290);

Transform1276.addChild(&LOD1277);

Transform935.addChild(&Transform1276);

Scene8.addChild(&Transform935);

Transform& Transform1291 =  Transform();
Transform1291.setDEF(CString("KEY"));
Script& Script1292 =  Script();
Script1292.setDEF(CString("_keyScript"));
field& field1293 =  field();
field1293.setName(CString("keyFound"));
field1293.setAccessType(CString("outputOnly"));
field1293.setType(CString("SFTime"));
Script1292.addChild(&field1293);

field& field1294 =  field();
field1294.setName(CString("transparency_A"));
field1294.setAccessType(CString("outputOnly"));
field1294.setType(CString("SFFloat"));
Script1292.addChild(&field1294);

field& field1295 =  field();
field1295.setName(CString("transparency_R"));
field1295.setAccessType(CString("outputOnly"));
field1295.setType(CString("SFFloat"));
Script1292.addChild(&field1295);

field& field1296 =  field();
field1296.setName(CString("transparency_C"));
field1296.setAccessType(CString("outputOnly"));
field1296.setType(CString("SFFloat"));
Script1292.addChild(&field1296);

field& field1297 =  field();
field1297.setName(CString("transparency_A1"));
field1297.setAccessType(CString("outputOnly"));
field1297.setType(CString("SFFloat"));
Script1292.addChild(&field1297);

field& field1298 =  field();
field1298.setName(CString("transparency_D"));
field1298.setAccessType(CString("outputOnly"));
field1298.setType(CString("SFFloat"));
Script1292.addChild(&field1298);

field& field1299 =  field();
field1299.setName(CString("transparency_I"));
field1299.setAccessType(CString("outputOnly"));
field1299.setType(CString("SFFloat"));
Script1292.addChild(&field1299);

field& field1300 =  field();
field1300.setName(CString("transparency_A2"));
field1300.setAccessType(CString("outputOnly"));
field1300.setType(CString("SFFloat"));
Script1292.addChild(&field1300);

field& field1301 =  field();
field1301.setName(CString("keyTime_A"));
field1301.setAccessType(CString("inputOnly"));
field1301.setType(CString("SFTime"));
Script1292.addChild(&field1301);

field& field1302 =  field();
field1302.setName(CString("reset"));
field1302.setAccessType(CString("inputOnly"));
field1302.setType(CString("SFTime"));
Script1292.addChild(&field1302);

field& field1303 =  field();
field1303.setName(CString("keyTime_R"));
field1303.setAccessType(CString("inputOnly"));
field1303.setType(CString("SFTime"));
Script1292.addChild(&field1303);

field& field1304 =  field();
field1304.setName(CString("keyTime_C"));
field1304.setAccessType(CString("inputOnly"));
field1304.setType(CString("SFTime"));
Script1292.addChild(&field1304);

field& field1305 =  field();
field1305.setName(CString("keyTime_A1"));
field1305.setAccessType(CString("inputOnly"));
field1305.setType(CString("SFTime"));
Script1292.addChild(&field1305);

field& field1306 =  field();
field1306.setName(CString("keyTime_D"));
field1306.setAccessType(CString("inputOnly"));
field1306.setType(CString("SFTime"));
Script1292.addChild(&field1306);

field& field1307 =  field();
field1307.setName(CString("keyTime_I"));
field1307.setAccessType(CString("inputOnly"));
field1307.setType(CString("SFTime"));
Script1292.addChild(&field1307);

field& field1308 =  field();
field1308.setName(CString("keyTime_A2"));
field1308.setAccessType(CString("inputOnly"));
field1308.setType(CString("SFTime"));
Script1292.addChild(&field1308);


Script1292.setSourceCode(CString("vrmlscript:")+
_T("function keyTime_A(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_A = 0.2;")+
_T("}")+
_T("function keyTime_R(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_R = 0.2;")+
_T("}")+
_T("function keyTime_C(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_C = 0.2;")+
_T("}")+
_T("function keyTime_A1(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_A1 = 0.2;")+
_T("}")+
_T("function keyTime_D(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_D = 0.2;")+
_T("}")+
_T("function keyTime_I(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_I = 0.2;")+
_T("}")+
_T("function keyTime_A2(value, time)")+
_T("{")+
_T(" keyFound = time;")+
_T(" transparency_A2 = 0.2;")+
_T("}")+
_T("function reset(value, time)")+
_T("{")+
_T(" transparency_A = 0.9;")+
_T(" transparency_R = 0.9;")+
_T(" transparency_C = 0.9;")+
_T(" transparency_A1 = 0.9;")+
_T(" transparency_D = 0.9;")+
_T(" transparency_I = 0.9;")+
_T(" transparency_A2 = 0.9;")+
_T("}"));
Transform1291.addChild(&Script1292);

Transform& Transform1309 =  Transform();
Transform1309.setDEF(CString("Key_A_rcadia"));
Transform1309.setTranslation(new float[]{0,-25,-150});
LOD& LOD1310 =  LOD();
LOD1310.setRange(new float[]{200}, 1);
Transform& Transform1311 =  Transform();
Transform1311.setDEF(CString("objOn_27"));
Transform& Transform1312 =  Transform();
Transform1312.setDEF(CString("a"));
Transform1312.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1312.setScale(new float[]{1,1,0.999999});
Transform1312.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1312.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1313 =  Shape();
Appearance& Appearance1314 =  Appearance();
Material& Material1315 =  Material();
Appearance1314.addChild(&Material1315);

ImageTexture& ImageTexture1316 =  ImageTexture();
ImageTexture1316.setDEF(CString("_104"));
ImageTexture1316.setUrl(new CString[]{CString("keybox.png")}, 1);
Appearance1314.addChild(&ImageTexture1316);

Shape1313.addChild(&Appearance1314);

IndexedFaceSet& IndexedFaceSet1317 =  IndexedFaceSet();
IndexedFaceSet1317.setCreaseAngle(0.5);
IndexedFaceSet1317.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1317.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1318 =  TextureCoordinate();
TextureCoordinate1318.setPoint(new float[]{0.00253391,0.998925,0.00253391,0.495059,0.335491,0.998925,0.335491,0.495059}, 8);
IndexedFaceSet1317.setTexCoord(&TextureCoordinate1318);

Coordinate& Coordinate1319 =  Coordinate();
Coordinate1319.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1317.setCoord(&Coordinate1319);

Shape1313.setGeometry(&IndexedFaceSet1317);

Transform1312.addChild(&Shape1313);

Transform1311.addChild(&Transform1312);

LOD1310.addChildren(&Transform1311);

Transform& Transform1320 =  Transform();
Transform1320.setDEF(CString("objOff_30"));
LOD1310.addChildren(&Transform1320);

Transform1309.addChild(&LOD1310);

LOD& LOD1321 =  LOD();
LOD1321.setRange(new float[]{16}, 1);
Transform& Transform1322 =  Transform();
Transform1322.setDEF(CString("proxyOn"));
ProximitySensor& ProximitySensor1323 =  ProximitySensor();
ProximitySensor1323.setDEF(CString("_105"));
ProximitySensor1323.setSize(new float[]{12,12,12});
Transform1322.addChild(&ProximitySensor1323);

LOD1321.addChildren(&Transform1322);

Transform& Transform1324 =  Transform();
Transform1324.setDEF(CString("proxyOff_43"));
LOD1321.addChildren(&Transform1324);

Transform1309.addChild(&LOD1321);

Transform1291.addChild(&Transform1309);

Transform& Transform1325 =  Transform();
Transform1325.setDEF(CString("Key_a_R_cadia"));
Transform1325.setTranslation(new float[]{0,-15,-525});
LOD& LOD1326 =  LOD();
LOD1326.setRange(new float[]{200}, 1);
Transform& Transform1327 =  Transform();
Transform1327.setDEF(CString("objOn_28"));
Transform& Transform1328 =  Transform();
Transform1328.setDEF(CString("r"));
Transform1328.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1328.setScale(new float[]{1,1,0.999999});
Transform1328.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1328.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1329 =  Shape();
Appearance& Appearance1330 =  Appearance();
Material& Material1331 =  Material();
Appearance1330.addChild(&Material1331);

ImageTexture& ImageTexture1332 =  ImageTexture();
ImageTexture1332.setUSE(CString("_104"));
Appearance1330.addChild(&ImageTexture1332);

Shape1329.addChild(&Appearance1330);

IndexedFaceSet& IndexedFaceSet1333 =  IndexedFaceSet();
IndexedFaceSet1333.setCreaseAngle(0.5);
IndexedFaceSet1333.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1333.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1334 =  TextureCoordinate();
TextureCoordinate1334.setPoint(new float[]{0.336104,0.998991,0.336104,0.502419,0.663264,0.997977,0.663264,0.501405}, 8);
IndexedFaceSet1333.setTexCoord(&TextureCoordinate1334);

Coordinate& Coordinate1335 =  Coordinate();
Coordinate1335.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1333.setCoord(&Coordinate1335);

Shape1329.setGeometry(&IndexedFaceSet1333);

Transform1328.addChild(&Shape1329);

Transform1327.addChild(&Transform1328);

LOD1326.addChildren(&Transform1327);

Transform& Transform1336 =  Transform();
Transform1336.setDEF(CString("objOff_31"));
LOD1326.addChildren(&Transform1336);

Transform1325.addChild(&LOD1326);

LOD& LOD1337 =  LOD();
LOD1337.setRange(new float[]{16}, 1);
Transform& Transform1338 =  Transform();
ProximitySensor& ProximitySensor1339 =  ProximitySensor();
ProximitySensor1339.setDEF(CString("_106"));
ProximitySensor1339.setSize(new float[]{12,12,12});
Transform1338.addChild(&ProximitySensor1339);

LOD1337.addChildren(&Transform1338);

Transform& Transform1340 =  Transform();
Transform1340.setDEF(CString("proxyOff_44"));
LOD1337.addChildren(&Transform1340);

Transform1325.addChild(&LOD1337);

Transform1291.addChild(&Transform1325);

Transform& Transform1341 =  Transform();
Transform1341.setDEF(CString("Key_ar_C_adia"));
Transform1341.setTranslation(new float[]{-25,-10,-730});
LOD& LOD1342 =  LOD();
LOD1342.setRange(new float[]{200}, 1);
Transform& Transform1343 =  Transform();
Transform1343.setDEF(CString("objOn_29"));
Transform& Transform1344 =  Transform();
Transform1344.setDEF(CString("c"));
Transform1344.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1344.setScale(new float[]{1,1,0.999999});
Transform1344.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1344.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1345 =  Shape();
Appearance& Appearance1346 =  Appearance();
Material& Material1347 =  Material();
Appearance1346.addChild(&Material1347);

ImageTexture& ImageTexture1348 =  ImageTexture();
ImageTexture1348.setUSE(CString("_104"));
Appearance1346.addChild(&ImageTexture1348);

Shape1345.addChild(&Appearance1346);

IndexedFaceSet& IndexedFaceSet1349 =  IndexedFaceSet();
IndexedFaceSet1349.setCreaseAngle(0.5);
IndexedFaceSet1349.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1349.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1350 =  TextureCoordinate();
TextureCoordinate1350.setPoint(new float[]{0.665066,0.998344,0.665754,0.508506,0.996563,0.998344,0.999143,0.506804}, 8);
IndexedFaceSet1349.setTexCoord(&TextureCoordinate1350);

Coordinate& Coordinate1351 =  Coordinate();
Coordinate1351.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1349.setCoord(&Coordinate1351);

Shape1345.setGeometry(&IndexedFaceSet1349);

Transform1344.addChild(&Shape1345);

Transform1343.addChild(&Transform1344);

LOD1342.addChildren(&Transform1343);

Transform& Transform1352 =  Transform();
Transform1352.setDEF(CString("objOff_32"));
LOD1342.addChildren(&Transform1352);

Transform1341.addChild(&LOD1342);

LOD& LOD1353 =  LOD();
LOD1353.setRange(new float[]{16}, 1);
Transform& Transform1354 =  Transform();
ProximitySensor& ProximitySensor1355 =  ProximitySensor();
ProximitySensor1355.setDEF(CString("_107"));
ProximitySensor1355.setSize(new float[]{12,12,12});
Transform1354.addChild(&ProximitySensor1355);

LOD1353.addChildren(&Transform1354);

Transform& Transform1356 =  Transform();
Transform1356.setDEF(CString("proxyOff_45"));
LOD1353.addChildren(&Transform1356);

Transform1341.addChild(&LOD1353);

Transform1291.addChild(&Transform1341);

Transform& Transform1357 =  Transform();
Transform1357.setDEF(CString("Key_arc_A_dia"));
Transform1357.setTranslation(new float[]{50,-20,-840});
LOD& LOD1358 =  LOD();
LOD1358.setRange(new float[]{200}, 1);
Transform& Transform1359 =  Transform();
Transform1359.setDEF(CString("objOn_30"));
Transform& Transform1360 =  Transform();
Transform1360.setDEF(CString("_108"));
Transform1360.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1360.setScale(new float[]{1,1,0.999999});
Transform1360.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1360.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1361 =  Shape();
Appearance& Appearance1362 =  Appearance();
Material& Material1363 =  Material();
Appearance1362.addChild(&Material1363);

ImageTexture& ImageTexture1364 =  ImageTexture();
ImageTexture1364.setUSE(CString("_104"));
Appearance1362.addChild(&ImageTexture1364);

Shape1361.addChild(&Appearance1362);

IndexedFaceSet& IndexedFaceSet1365 =  IndexedFaceSet();
IndexedFaceSet1365.setCreaseAngle(0.5);
IndexedFaceSet1365.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1365.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1366 =  TextureCoordinate();
TextureCoordinate1366.setPoint(new float[]{0.0000199504,0.999917,0.0000199504,0.501042,0.335003,0.999917,0.335003,0.501042}, 8);
IndexedFaceSet1365.setTexCoord(&TextureCoordinate1366);

Coordinate& Coordinate1367 =  Coordinate();
Coordinate1367.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1365.setCoord(&Coordinate1367);

Shape1361.setGeometry(&IndexedFaceSet1365);

Transform1360.addChild(&Shape1361);

Transform1359.addChild(&Transform1360);

LOD1358.addChildren(&Transform1359);

Transform& Transform1368 =  Transform();
Transform1368.setDEF(CString("objOff_33"));
LOD1358.addChildren(&Transform1368);

Transform1357.addChild(&LOD1358);

LOD& LOD1369 =  LOD();
LOD1369.setRange(new float[]{16}, 1);
Transform& Transform1370 =  Transform();
ProximitySensor& ProximitySensor1371 =  ProximitySensor();
ProximitySensor1371.setDEF(CString("_109"));
ProximitySensor1371.setSize(new float[]{12,12,12});
Transform1370.addChild(&ProximitySensor1371);

LOD1369.addChildren(&Transform1370);

Transform& Transform1372 =  Transform();
Transform1372.setDEF(CString("proxyOff_46"));
LOD1369.addChildren(&Transform1372);

Transform1357.addChild(&LOD1369);

Transform1291.addChild(&Transform1357);

Transform& Transform1373 =  Transform();
Transform1373.setDEF(CString("Key_arca_D_ia"));
Transform1373.setTranslation(new float[]{-9.7,33,-1128});
LOD& LOD1374 =  LOD();
LOD1374.setRange(new float[]{200}, 1);
Transform& Transform1375 =  Transform();
Transform1375.setDEF(CString("objOn_31"));
Transform& Transform1376 =  Transform();
Transform1376.setDEF(CString("d"));
Transform1376.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1376.setScale(new float[]{1,1,0.999999});
Transform1376.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1376.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1377 =  Shape();
Appearance& Appearance1378 =  Appearance();
Material& Material1379 =  Material();
Appearance1378.addChild(&Material1379);

ImageTexture& ImageTexture1380 =  ImageTexture();
ImageTexture1380.setUSE(CString("_104"));
Appearance1378.addChild(&ImageTexture1380);

Shape1377.addChild(&Appearance1378);

IndexedFaceSet& IndexedFaceSet1381 =  IndexedFaceSet();
IndexedFaceSet1381.setCreaseAngle(0.5);
IndexedFaceSet1381.setColorIndex(new int[]{-1}, 1);
IndexedFaceSet1381.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1381.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1382 =  TextureCoordinate();
TextureCoordinate1382.setPoint(new float[]{0.00124982,0.499369,0.00124982,0.00196192,0.333756,0.499369,0.333756,0.00196192}, 8);
IndexedFaceSet1381.setTexCoord(&TextureCoordinate1382);

Coordinate& Coordinate1383 =  Coordinate();
Coordinate1383.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1381.setCoord(&Coordinate1383);

Shape1377.setGeometry(&IndexedFaceSet1381);

Transform1376.addChild(&Shape1377);

Transform1375.addChild(&Transform1376);

LOD1374.addChildren(&Transform1375);

Transform& Transform1384 =  Transform();
Transform1384.setDEF(CString("objOff_34"));
LOD1374.addChildren(&Transform1384);

Transform1373.addChild(&LOD1374);

LOD& LOD1385 =  LOD();
LOD1385.setRange(new float[]{16}, 1);
Transform& Transform1386 =  Transform();
ProximitySensor& ProximitySensor1387 =  ProximitySensor();
ProximitySensor1387.setDEF(CString("_110"));
ProximitySensor1387.setSize(new float[]{12,12,12});
Transform1386.addChild(&ProximitySensor1387);

LOD1385.addChildren(&Transform1386);

Transform& Transform1388 =  Transform();
Transform1388.setDEF(CString("proxyOff_47"));
LOD1385.addChildren(&Transform1388);

Transform1373.addChild(&LOD1385);

Transform1291.addChild(&Transform1373);

Transform& Transform1389 =  Transform();
Transform1389.setDEF(CString("Key_arcad_I_a"));
Transform1389.setTranslation(new float[]{20,-30,-1500});
LOD& LOD1390 =  LOD();
LOD1390.setRange(new float[]{200}, 1);
Transform& Transform1391 =  Transform();
Transform1391.setDEF(CString("objOn_32"));
Transform& Transform1392 =  Transform();
Transform1392.setDEF(CString("i"));
Transform1392.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1392.setScale(new float[]{1,1,0.999999});
Transform1392.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1392.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1393 =  Shape();
Appearance& Appearance1394 =  Appearance();
Material& Material1395 =  Material();
Appearance1394.addChild(&Material1395);

ImageTexture& ImageTexture1396 =  ImageTexture();
ImageTexture1396.setUSE(CString("_104"));
Appearance1394.addChild(&ImageTexture1396);

Shape1393.addChild(&Appearance1394);

IndexedFaceSet& IndexedFaceSet1397 =  IndexedFaceSet();
IndexedFaceSet1397.setCreaseAngle(0.5);
IndexedFaceSet1397.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1397.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1398 =  TextureCoordinate();
TextureCoordinate1398.setPoint(new float[]{0.336318,0.498275,0.336318,0.00156281,0.66133,0.498275,0.66133,0.00156281}, 8);
IndexedFaceSet1397.setTexCoord(&TextureCoordinate1398);

Coordinate& Coordinate1399 =  Coordinate();
Coordinate1399.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1397.setCoord(&Coordinate1399);

Shape1393.setGeometry(&IndexedFaceSet1397);

Transform1392.addChild(&Shape1393);

Transform1391.addChild(&Transform1392);

LOD1390.addChildren(&Transform1391);

Transform& Transform1400 =  Transform();
Transform1400.setDEF(CString("objOff_35"));
LOD1390.addChildren(&Transform1400);

Transform1389.addChild(&LOD1390);

LOD& LOD1401 =  LOD();
LOD1401.setRange(new float[]{16}, 1);
Transform& Transform1402 =  Transform();
ProximitySensor& ProximitySensor1403 =  ProximitySensor();
ProximitySensor1403.setDEF(CString("_111"));
ProximitySensor1403.setSize(new float[]{12,12,12});
Transform1402.addChild(&ProximitySensor1403);

LOD1401.addChildren(&Transform1402);

Transform& Transform1404 =  Transform();
Transform1404.setDEF(CString("proxyOff_48"));
LOD1401.addChildren(&Transform1404);

Transform1389.addChild(&LOD1401);

Transform1291.addChild(&Transform1389);

Transform& Transform1405 =  Transform();
Transform1405.setDEF(CString("Key_arcadi_A"));
Transform1405.setTranslation(new float[]{-80,-30,-1750});
LOD& LOD1406 =  LOD();
LOD1406.setRange(new float[]{200}, 1);
Transform& Transform1407 =  Transform();
Transform1407.setDEF(CString("objOn"));
Transform& Transform1408 =  Transform();
Transform1408.setDEF(CString("a_1"));
Transform1408.setTranslation(new float[]{-4.65661e-9,0,-2.32831e-8});
Transform1408.setScale(new float[]{1,1,0.999999});
Transform1408.setScaleOrientation(new float[]{0,1,0,0.018374});
Transform1408.setCenter(new float[]{0,0,0.0135851});
Shape& Shape1409 =  Shape();
Appearance& Appearance1410 =  Appearance();
Material& Material1411 =  Material();
Appearance1410.addChild(&Material1411);

ImageTexture& ImageTexture1412 =  ImageTexture();
ImageTexture1412.setUSE(CString("_104"));
Appearance1410.addChild(&ImageTexture1412);

Shape1409.addChild(&Appearance1410);

IndexedFaceSet& IndexedFaceSet1413 =  IndexedFaceSet();
IndexedFaceSet1413.setCreaseAngle(0.5);
IndexedFaceSet1413.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet1413.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
TextureCoordinate& TextureCoordinate1414 =  TextureCoordinate();
TextureCoordinate1414.setPoint(new float[]{0.00138337,0.998223,0.00138337,0.499435,0.329564,0.998223,0.329564,0.499435}, 8);
IndexedFaceSet1413.setTexCoord(&TextureCoordinate1414);

Coordinate& Coordinate1415 =  Coordinate();
Coordinate1415.setPoint(new float[]{-1.93702,1.93702,1.93702,-1.93702,-1.93702,1.93702,1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,1.93702,1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,1.93702,-1.93702,-1.93702,-1.93702,-1.93702}, 24);
IndexedFaceSet1413.setCoord(&Coordinate1415);

Shape1409.setGeometry(&IndexedFaceSet1413);

Transform1408.addChild(&Shape1409);

Transform1407.addChild(&Transform1408);

LOD1406.addChildren(&Transform1407);

Transform& Transform1416 =  Transform();
Transform1416.setDEF(CString("objOff"));
LOD1406.addChildren(&Transform1416);

Transform1405.addChild(&LOD1406);

LOD& LOD1417 =  LOD();
LOD1417.setRange(new float[]{16}, 1);
Transform& Transform1418 =  Transform();
ProximitySensor& ProximitySensor1419 =  ProximitySensor();
ProximitySensor1419.setDEF(CString("_112"));
ProximitySensor1419.setSize(new float[]{12,12,12});
Transform1418.addChild(&ProximitySensor1419);

LOD1417.addChildren(&Transform1418);

Transform& Transform1420 =  Transform();
Transform1420.setDEF(CString("proxyOff"));
LOD1417.addChildren(&Transform1420);

Transform1405.addChild(&LOD1417);

Transform1291.addChild(&Transform1405);

Scene8.addChild(&Transform1291);

Transform& Transform1421 =  Transform();
Transform1421.setDEF(CString("RESET"));
Transform& Transform1422 =  Transform();
Transform1422.setDEF(CString("reset_proxy"));
ProximitySensor& ProximitySensor1423 =  ProximitySensor();
ProximitySensor1423.setDEF(CString("_113"));
ProximitySensor1423.setSize(new float[]{500,200,50});
ProximitySensor1423.setCenter(new float[]{0,0,-50});
Transform1422.addChild(&ProximitySensor1423);

Transform1421.addChild(&Transform1422);

Scene8.addChild(&Transform1421);

Transform& Transform1424 =  Transform();
Transform1424.setDEF(CString("end"));
Transform1424.setTranslation(new float[]{0,-41.2016,-1848.23});
Shape& Shape1425 =  Shape();
Appearance& Appearance1426 =  Appearance();
PixelTexture& PixelTexture1427 =  PixelTexture();
PixelTexture1427.setUSE(CString("_79"));
Appearance1426.addChild(&PixelTexture1427);

TextureTransform& TextureTransform1428 =  TextureTransform();
TextureTransform1428.setScale(new float[]{3,1});
Appearance1426.setTextureTransform(TextureTransform1428);

Shape1425.addChild(&Appearance1426);

IndexedFaceSet& IndexedFaceSet1429 =  IndexedFaceSet();
IndexedFaceSet1429.setCreaseAngle(0.5);
IndexedFaceSet1429.setColorIndex(new int[]{23,0,0,23,-1,23,0,20,20,23,-1,22,0,0,22,-1,22,0,21,21,22,-1,19,0,0,4,-1,20,20,16,4,-1,21,21,15,4,-1,23,0,9,-1,0,9,9,-1,0,20,9,-1,16,0,18,-1,16,20,0,-1,23,18,0,-1,23,0,18,-1,0,19,18,-1,0,17,19,-1,0,0,17,-1,0,22,0,-1,0,15,17,-1,0,21,15,-1,0,9,21,-1,0,9,9,-1,0,22,9,-1,0,2,17,-1,11,17,15,-1,11,0,17,-1,0,0,18,-1,0,16,18,-1,0,11,16,-1,19,17,2,-1,19,0,18,-1,19,2,0,-1,3,2,0,-1,3,8,2,-1,8,10,0,-1,10,0,0,-1,8,8,2,-1,8,0,2,-1,6,14,7,-1,14,0,7,-1,11,8,8,-1,11,12,8,-1,3,0,0,-1,0,13,0,-1,29,4,1,-1,4,5,1,-1,4,1,5,-1,4,1,1,-1,1,5,24,1,-1,25,5,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,29,1,-1,1,1,1,29,-1,9,26,4,-1,9,9,26,-1,26,4,4,-1,26,1,4,-1,28,23,27,-1,23,29,27,-1,9,9,27,-1,9,28,27,-1,9,27,26,-1,9,9,27,-1,27,1,26,-1,27,29,1,-1}, 280);
IndexedFaceSet1429.setTexCoordIndex(new int32_t[]{0,7,9,8,-1,2,22,3,11,8,-1,2,7,9,12,-1,0,16,1,13,12,-1,19,7,9,10,-1,11,1,27,6,-1,13,3,23,6,-1,2,20,5,-1,20,1,5,-1,20,3,1,-1,28,21,30,-1,28,1,21,-1,0,29,21,-1,0,7,29,-1,7,17,29,-1,7,25,18,-1,7,15,25,-1,7,2,15,-1,15,24,26,-1,15,3,24,-1,14,3,1,-1,14,4,3,-1,14,0,4,-1,32,48,49,-1,47,49,50,-1,47,32,49,-1,51,34,54,-1,34,53,54,-1,34,52,53,-1,55,56,57,-1,55,58,59,-1,55,57,58,-1,41,26,31,-1,41,36,26,-1,38,44,30,-1,44,33,30,-1,36,38,26,-1,38,30,26,-1,46,28,45,-1,28,33,45,-1,37,39,35,-1,37,40,39,-1,42,31,43,-1,31,24,43,-1,66,67,69,-1,67,68,69,-1,74,76,77,-1,74,75,76,-1,72,73,79,78,-1,82,70,71,81,-1,64,65,80,-1,62,83,61,-1,80,65,63,-1,83,60,61,-1,83,80,63,60,-1,93,84,85,-1,93,94,84,-1,84,92,85,-1,84,91,92,-1,87,89,86,-1,89,90,86,-1,95,88,86,-1,88,87,86,-1,98,100,101,-1,98,99,100,-1,100,97,101,-1,100,96,97,-1}, 280);
IndexedFaceSet1429.setCoordIndex(new int32_t[]{2,9,11,10,-1,2,17,3,12,10,-1,4,9,11,13,-1,4,15,5,14,13,-1,16,9,11,8,-1,12,3,20,8,-1,14,5,18,8,-1,2,17,7,-1,17,1,7,-1,17,3,1,-1,20,17,21,-1,20,3,17,-1,2,21,17,-1,2,9,21,-1,9,16,21,-1,9,19,16,-1,9,15,19,-1,9,4,15,-1,15,18,19,-1,15,5,18,-1,15,0,5,-1,15,6,0,-1,15,4,6,-1,26,24,19,-1,25,19,18,-1,25,26,19,-1,23,27,21,-1,27,20,21,-1,27,22,20,-1,16,19,24,-1,16,23,21,-1,16,24,23,-1,32,24,26,-1,32,28,24,-1,30,34,23,-1,34,27,23,-1,28,30,24,-1,30,23,24,-1,35,22,34,-1,22,27,34,-1,29,30,28,-1,29,31,30,-1,32,26,33,-1,26,25,33,-1,39,38,34,-1,38,35,34,-1,37,32,33,-1,37,36,32,-1,30,31,41,40,-1,43,29,28,42,-1,28,32,42,-1,30,40,34,-1,42,32,36,-1,40,39,34,-1,40,42,36,39,-1,46,48,49,-1,46,44,48,-1,48,37,49,-1,48,36,37,-1,51,38,50,-1,38,39,50,-1,45,47,50,-1,47,51,50,-1,44,50,48,-1,44,45,50,-1,50,36,48,-1,50,39,36,-1}, 280);
CColor& Color1430 =  CColor();
Color1430.setColor(new float[]{1,0.939556,0.714648,0.326203,0.306486,0.23312,0.983871,1,0.967742,0.561836,0.953699,1,0.026738,0.0251218,0.0191082,0.347594,0.326584,0.248407,0.679848,1,0.781686,1,0.864424,0.769067,0.334983,0.844428,1,0,0,0,0.328753,0.606005,1,0.703471,1,0.777604,0.817521,1,0.863141,0.577863,1,0.672505,0.532258,1,0.638302,0.127904,0.181818,0.141382,0.176808,0.251337,0.19544,0.379679,0.35673,0.271337,0.28877,0.271316,0.206369,0.459893,0.432095,0.328662,0.128342,0.120585,0.0917195,0.187166,0.175853,0.133758,0.0106952,0.0100487,0.00764329,0.545455,0.389328,0.285514,0.308938,0.290265,0.220782,0.306292,0.287778,0.218891,0.508021,0.272311,0.225124,0.189182,0.283422,0.261376,0.251034,0.479134,0.486631,0.26738,0.182651,0.203471}, 90);
IndexedFaceSet1429.setColor(&Color1430);

TextureCoordinate& TextureCoordinate1431 =  TextureCoordinate();
TextureCoordinate1431.setPoint(new float[]{0.000289381,0.914646,0,0,0.997821,0.914646,1,0,1,0.5,0,0.5,0.5,0,0.499055,0.914646,0,1,0.5,1,0.5,0,1,0,1,1,0,0,0,0.484565,1,0.484565,0,0.484565,0.5,0.484565,0.5,0.484565,0.5,0.484565,1,0.484565,0,0.484565,1,0.484565,0.654926,0,0.654926,0,0.654926,0.484565,0.654926,0.484565,0.2756,0,0.275911,0.00629053,0.2756,0.484565,0.2756,0.484565,0.654926,0.318505,-0.0528288,0.315961,0.2756,0.326959,0.11793,0.322307,0.494771,0.321334,0.494771,0.321334,0.494772,0,0.45678,0.322005,0.45678,0.322005,0.45678,0,0.618776,0.319144,0.618776,0.319144,0.618776,0,0.319955,0.324422,0.31616,0.324895,0.316471,0.0050112,-0.0528288,0.00648928,-0.0528288,0.477311,0.155569,0.48165,0.155569,0.0108278,0.11793,0.469331,0.11793,0.0222758,0.327591,0.0147065,0.327591,0.461761,0.122834,0.816704,-0.0179857,0.816704,-0.0179857,0.312815,0.326802,0.312815,0.326802,0.816704,0.314747,0.78301,0.314747,0.330831,0.163151,0.330831,-0.0163331,0.78301,0.121058,0.330831,-0.0163331,0.330831,0.16229,0.324874,0.162036,0.00374681,-0.0343444,0.00902402,-0.0337149,0.323334,-0.0369114,0.00348967,-0.0369114,0.326943,-0.0356047,0.31915,-0.0356047,0.0104283,0.164911,0.0118563,0.164911,0.317834,-0.0564491,0.315131,-0.0564491,0.00915314,-0.0122198,0.31915,-0.0122198,0.0104283,0.121058,0.389037,-0.0115672,0.326943,-0.0115672,0.00348967,0.163151,0.385308,0.320763,0.331533,0.320763,0.00428096,0.320763,0.336945,0.320763,0.00428096,0.654903,0.00428096,-0.0133773,0.00428096,-0.0133773,0.336945,-0.0133773,0.331533,-0.0133773,0.00428096,0.654903,0.00428096,0.654903,0.331533,0.654903,0.336945,0.662134,0.665386,0.662553,0.348737,0.120704,0.332489,0.120284,0.649138,0.395822,0.645005,0.396241,0.328355}, 204);
IndexedFaceSet1429.setTexCoord(&TextureCoordinate1431);

Coordinate& Coordinate1432 =  Coordinate();
Coordinate1432.setPoint(new float[]{-150,0,152.189,150,0,152.189,150,123.873,-150,150,0,-150,-150,123.873,-150,-150,0,-150,-150,61.9367,152.189,150,61.9367,152.189,0,0,-150,0,123.873,-150,150,123.873,-150,0,123.873,-150,150,0,-150,-150,123.873,-150,-150,0,-150,-150,60.0245,-150,0,60.0245,-150,150,60.0245,-150,-46.4778,0,-150,-46.4778,60.0245,-150,67.3201,0,-150,67.3201,60.0245,-150,67.3201,0,-83,67.3201,60.0245,-83,-46.4778,60.0245,-83,-46.4778,0,-83,-46.4778,39.4542,-83,67.3201,40.2842,-83,1.56856,39.8046,-83,1.56855,0,-83,12.9661,39.8877,-83,12.9661,0,-83,-35.6327,39.5333,-83,-35.6327,0,-83,54.0136,40.1871,-83,54.0136,0,-83,-35.6327,39.5333,-150,-35.6327,0,-150,54.0136,0,-150,54.0136,40.1871,-150,12.9661,39.8877,-91.0719,12.9661,0,-91.0719,1.56856,39.8046,-91.6246,1.56855,0,-91.6246,-35.6327,39.5333,-416.13,54.0136,40.1871,-416.13,-35.6327,0,-416.13,54.0136,0,-416.13,-35.6327,39.5333,-283.065,-35.6327,0,-283.065,54.0136,40.1871,-283.065,54.0136,0,-283.065}, 156);
IndexedFaceSet1429.setCoord(&Coordinate1432);

Shape1425.setGeometry(&IndexedFaceSet1429);

Transform1424.addChild(&Shape1425);

Transform& Transform1433 =  Transform();
Transform1433.setTranslation(new float[]{-105.901,0,0});
Shape& Shape1434 =  Shape();
Appearance& Appearance1435 =  Appearance();
ImageTexture& ImageTexture1436 =  ImageTexture();
ImageTexture1436.setDEF(CString("_114"));
ImageTexture1436.setUrl(new CString[]{CString("t2.png")}, 1);
Appearance1435.addChild(&ImageTexture1436);

Shape1434.addChild(&Appearance1435);

IndexedFaceSet& IndexedFaceSet1437 =  IndexedFaceSet();
IndexedFaceSet1437.setCreaseAngle(0.5);
IndexedFaceSet1437.setColorIndex(new int[]{0,1,0,0,-1,2,0,3,0,-1,0,3,1,0,-1,0,0,0,2,-1,0,0,0,2,-1}, 25);
IndexedFaceSet1437.setTexCoordIndex(new int32_t[]{4,5,6,7,-1,8,9,10,11,-1,0,1,3,2,-1,0,1,3,2,-1,12,13,14,15,-1}, 25);
IndexedFaceSet1437.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1}, 25);
CColor& Color1438 =  CColor();
Color1438.setColor(new float[]{1,0.939556,0.714648,0.627891,0.727273,0.550929,1,0.753627,0.545516,0.802139,0.753654,0.573247}, 12);
IndexedFaceSet1437.setColor(&Color1438);

TextureCoordinate& TextureCoordinate1439 =  TextureCoordinate();
TextureCoordinate1439.setPoint(new float[]{0,0.987024,0,0,0.505941,0.987024,0.505941,0,0,0.983608,0,0,1.99952,0,1.99952,0.983608,0.0169232,0.992389,0.0169232,0.0125274,1.99368,0.0125274,1.99368,0.992389,0.00229359,0.996214,0.00751972,0.94246,1.98298,0.924542,1.97775,0.978296}, 32);
IndexedFaceSet1437.setTexCoord(&TextureCoordinate1439);

Coordinate& Coordinate1440 =  Coordinate();
Coordinate1440.setPoint(new float[]{-10,23.1551,10,-10,0,10,75.9007,23.1551,10,75.9007,0,10,75.9007,23.1551,-10,75.9007,0,-10,-10,23.1551,-10,-10,0,-10}, 24);
IndexedFaceSet1437.setCoord(&Coordinate1440);

Shape1434.setGeometry(&IndexedFaceSet1437);

Transform1433.addChild(&Shape1434);

Transform1424.addChild(&Transform1433);

Transform& Transform1441 =  Transform();
Transform1441.setTranslation(new float[]{43.048,0,-0.00000536442});
Transform1441.setScale(new float[]{1,0.999999,1});
Shape& Shape1442 =  Shape();
Appearance& Appearance1443 =  Appearance();
ImageTexture& ImageTexture1444 =  ImageTexture();
ImageTexture1444.setUSE(CString("_114"));
Appearance1443.addChild(&ImageTexture1444);

Shape1442.addChild(&Appearance1443);

IndexedFaceSet& IndexedFaceSet1445 =  IndexedFaceSet();
IndexedFaceSet1445.setCreaseAngle(0.5);
IndexedFaceSet1445.setColorIndex(new int[]{0,1,0,0,-1,2,0,3,0,-1,0,3,1,0,-1,0,0,0,2,-1,0,0,0,2,-1}, 25);
IndexedFaceSet1445.setTexCoordIndex(new int32_t[]{4,5,6,7,-1,8,9,10,11,-1,0,1,3,2,-1,0,1,3,2,-1,12,13,14,15,-1}, 25);
IndexedFaceSet1445.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1}, 25);
CColor& Color1446 =  CColor();
Color1446.setColor(new float[]{1,0.939556,0.714648,0.627891,0.727273,0.550929,1,0.753627,0.545516,0.802139,0.753654,0.573247}, 12);
IndexedFaceSet1445.setColor(&Color1446);

TextureCoordinate& TextureCoordinate1447 =  TextureCoordinate();
TextureCoordinate1447.setPoint(new float[]{0,0.987024,0,0,0.505941,0.987024,0.505941,0,0,0.983608,0,0,1.99952,0,1.99952,0.983608,0.0169232,0.992389,0.0169232,0.0125274,1.99368,0.0125274,1.99368,0.992389,0.00229359,0.996214,0.00751972,0.94246,1.98298,0.924542,1.97775,0.978296}, 32);
IndexedFaceSet1445.setTexCoord(&TextureCoordinate1447);

Coordinate& Coordinate1448 =  Coordinate();
Coordinate1448.setPoint(new float[]{-10,23.1551,10,-10,0,10,75.9007,23.1551,10,75.9007,0,10,75.9007,23.1551,-10,75.9007,0,-10,-10,23.1551,-10,-10,0,-10}, 24);
IndexedFaceSet1445.setCoord(&Coordinate1448);

Shape1442.setGeometry(&IndexedFaceSet1445);

Transform1441.addChild(&Shape1442);

Transform1424.addChild(&Transform1441);

Scene8.addChild(&Transform1424);

ROUTE& ROUTE1449 =  ROUTE();
ROUTE1449.setFromNode(CString("enterWorldScript"));
ROUTE1449.setFromField(CString("firstTime"));
ROUTE1449.setToNode(CString("enterWorldTimeSensor"));
ROUTE1449.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1449);

ROUTE& ROUTE1450 =  ROUTE();
ROUTE1450.setFromNode(CString("enterWorldTimeSensor"));
ROUTE1450.setFromField(CString("time"));
ROUTE1450.setToNode(CString("enterWorldScript"));
ROUTE1450.setToField(CString("triggerIn"));
Scene8.addChild(&ROUTE1450);

ROUTE& ROUTE1451 =  ROUTE();
ROUTE1451.setFromNode(CString("_19"));
ROUTE1451.setFromField(CString("enterTime"));
ROUTE1451.setToNode(CString("_countScript"));
ROUTE1451.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1451);

ROUTE& ROUTE1452 =  ROUTE();
ROUTE1452.setFromNode(CString("_21"));
ROUTE1452.setFromField(CString("enterTime"));
ROUTE1452.setToNode(CString("_countScript"));
ROUTE1452.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1452);

ROUTE& ROUTE1453 =  ROUTE();
ROUTE1453.setFromNode(CString("_23"));
ROUTE1453.setFromField(CString("enterTime"));
ROUTE1453.setToNode(CString("_countScript"));
ROUTE1453.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1453);

ROUTE& ROUTE1454 =  ROUTE();
ROUTE1454.setFromNode(CString("_25"));
ROUTE1454.setFromField(CString("enterTime"));
ROUTE1454.setToNode(CString("_countScript"));
ROUTE1454.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1454);

ROUTE& ROUTE1455 =  ROUTE();
ROUTE1455.setFromNode(CString("_27"));
ROUTE1455.setFromField(CString("enterTime"));
ROUTE1455.setToNode(CString("_countScript"));
ROUTE1455.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1455);

ROUTE& ROUTE1456 =  ROUTE();
ROUTE1456.setFromNode(CString("_31"));
ROUTE1456.setFromField(CString("enterTime"));
ROUTE1456.setToNode(CString("_countScript"));
ROUTE1456.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1456);

ROUTE& ROUTE1457 =  ROUTE();
ROUTE1457.setFromNode(CString("_29"));
ROUTE1457.setFromField(CString("enterTime"));
ROUTE1457.setToNode(CString("_countScript"));
ROUTE1457.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1457);

ROUTE& ROUTE1458 =  ROUTE();
ROUTE1458.setFromNode(CString("_37"));
ROUTE1458.setFromField(CString("enterTime"));
ROUTE1458.setToNode(CString("_countScript"));
ROUTE1458.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1458);

ROUTE& ROUTE1459 =  ROUTE();
ROUTE1459.setFromNode(CString("_41"));
ROUTE1459.setFromField(CString("enterTime"));
ROUTE1459.setToNode(CString("_countScript"));
ROUTE1459.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1459);

ROUTE& ROUTE1460 =  ROUTE();
ROUTE1460.setFromNode(CString("_43"));
ROUTE1460.setFromField(CString("enterTime"));
ROUTE1460.setToNode(CString("_countScript"));
ROUTE1460.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1460);

ROUTE& ROUTE1461 =  ROUTE();
ROUTE1461.setFromNode(CString("_44"));
ROUTE1461.setFromField(CString("enterTime"));
ROUTE1461.setToNode(CString("_countScript"));
ROUTE1461.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1461);

ROUTE& ROUTE1462 =  ROUTE();
ROUTE1462.setFromNode(CString("_53"));
ROUTE1462.setFromField(CString("enterTime"));
ROUTE1462.setToNode(CString("_countScript"));
ROUTE1462.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1462);

ROUTE& ROUTE1463 =  ROUTE();
ROUTE1463.setFromNode(CString("_52"));
ROUTE1463.setFromField(CString("enterTime"));
ROUTE1463.setToNode(CString("_countScript"));
ROUTE1463.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1463);

ROUTE& ROUTE1464 =  ROUTE();
ROUTE1464.setFromNode(CString("_50"));
ROUTE1464.setFromField(CString("enterTime"));
ROUTE1464.setToNode(CString("_countScript"));
ROUTE1464.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1464);

ROUTE& ROUTE1465 =  ROUTE();
ROUTE1465.setFromNode(CString("_48"));
ROUTE1465.setFromField(CString("enterTime"));
ROUTE1465.setToNode(CString("_countScript"));
ROUTE1465.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1465);

ROUTE& ROUTE1466 =  ROUTE();
ROUTE1466.setFromNode(CString("_46"));
ROUTE1466.setFromField(CString("enterTime"));
ROUTE1466.setToNode(CString("_countScript"));
ROUTE1466.setToField(CString("bonus_Blue"));
Scene8.addChild(&ROUTE1466);

ROUTE& ROUTE1467 =  ROUTE();
ROUTE1467.setFromNode(CString("_15"));
ROUTE1467.setFromField(CString("enterTime"));
ROUTE1467.setToNode(CString("_countScript"));
ROUTE1467.setToField(CString("bonus_Red"));
Scene8.addChild(&ROUTE1467);

ROUTE& ROUTE1468 =  ROUTE();
ROUTE1468.setFromNode(CString("_17"));
ROUTE1468.setFromField(CString("enterTime"));
ROUTE1468.setToNode(CString("_countScript"));
ROUTE1468.setToField(CString("bonus_Red"));
Scene8.addChild(&ROUTE1468);

ROUTE& ROUTE1469 =  ROUTE();
ROUTE1469.setFromNode(CString("_57"));
ROUTE1469.setFromField(CString("enterTime"));
ROUTE1469.setToNode(CString("_countScript"));
ROUTE1469.setToField(CString("bonus_Red"));
Scene8.addChild(&ROUTE1469);

ROUTE& ROUTE1470 =  ROUTE();
ROUTE1470.setFromNode(CString("_55"));
ROUTE1470.setFromField(CString("enterTime"));
ROUTE1470.setToNode(CString("_countScript"));
ROUTE1470.setToField(CString("bonus_Red"));
Scene8.addChild(&ROUTE1470);

ROUTE& ROUTE1471 =  ROUTE();
ROUTE1471.setFromNode(CString("_39"));
ROUTE1471.setFromField(CString("enterTime"));
ROUTE1471.setToNode(CString("_countScript"));
ROUTE1471.setToField(CString("bonus_Red"));
Scene8.addChild(&ROUTE1471);

ROUTE& ROUTE1472 =  ROUTE();
ROUTE1472.setFromNode(CString("_80"));
ROUTE1472.setFromField(CString("enterTime"));
ROUTE1472.setToNode(CString("_countScript"));
ROUTE1472.setToField(CString("alert"));
Scene8.addChild(&ROUTE1472);

ROUTE& ROUTE1473 =  ROUTE();
ROUTE1473.setFromNode(CString("_proxyPlugger_3"));
ROUTE1473.setFromField(CString("alert"));
ROUTE1473.setToNode(CString("_countScript"));
ROUTE1473.setToField(CString("alert"));
Scene8.addChild(&ROUTE1473);

ROUTE& ROUTE1474 =  ROUTE();
ROUTE1474.setFromNode(CString("_81"));
ROUTE1474.setFromField(CString("enterTime"));
ROUTE1474.setToNode(CString("_countScript"));
ROUTE1474.setToField(CString("alert"));
Scene8.addChild(&ROUTE1474);

ROUTE& ROUTE1475 =  ROUTE();
ROUTE1475.setFromNode(CString("_82"));
ROUTE1475.setFromField(CString("enterTime"));
ROUTE1475.setToNode(CString("_countScript"));
ROUTE1475.setToField(CString("alert"));
Scene8.addChild(&ROUTE1475);

ROUTE& ROUTE1476 =  ROUTE();
ROUTE1476.setFromNode(CString("_proxyPlugger_2"));
ROUTE1476.setFromField(CString("alert"));
ROUTE1476.setToNode(CString("_countScript"));
ROUTE1476.setToField(CString("alert"));
Scene8.addChild(&ROUTE1476);

ROUTE& ROUTE1477 =  ROUTE();
ROUTE1477.setFromNode(CString("_proxyPlugger_1"));
ROUTE1477.setFromField(CString("alert"));
ROUTE1477.setToNode(CString("_countScript"));
ROUTE1477.setToField(CString("alert"));
Scene8.addChild(&ROUTE1477);

ROUTE& ROUTE1478 =  ROUTE();
ROUTE1478.setFromNode(CString("_78"));
ROUTE1478.setFromField(CString("enterTime"));
ROUTE1478.setToNode(CString("_countScript"));
ROUTE1478.setToField(CString("alert"));
Scene8.addChild(&ROUTE1478);

ROUTE& ROUTE1479 =  ROUTE();
ROUTE1479.setFromNode(CString("_77"));
ROUTE1479.setFromField(CString("enterTime"));
ROUTE1479.setToNode(CString("_countScript"));
ROUTE1479.setToField(CString("alert"));
Scene8.addChild(&ROUTE1479);

ROUTE& ROUTE1480 =  ROUTE();
ROUTE1480.setFromNode(CString("_76"));
ROUTE1480.setFromField(CString("enterTime"));
ROUTE1480.setToNode(CString("_countScript"));
ROUTE1480.setToField(CString("alert"));
Scene8.addChild(&ROUTE1480);

ROUTE& ROUTE1481 =  ROUTE();
ROUTE1481.setFromNode(CString("_proxyPlugger_4"));
ROUTE1481.setFromField(CString("alert"));
ROUTE1481.setToNode(CString("_countScript"));
ROUTE1481.setToField(CString("alert"));
Scene8.addChild(&ROUTE1481);

ROUTE& ROUTE1482 =  ROUTE();
ROUTE1482.setFromNode(CString("_101"));
ROUTE1482.setFromField(CString("enterTime"));
ROUTE1482.setToNode(CString("_countScript"));
ROUTE1482.setToField(CString("alert"));
Scene8.addChild(&ROUTE1482);

ROUTE& ROUTE1483 =  ROUTE();
ROUTE1483.setFromNode(CString("_99"));
ROUTE1483.setFromField(CString("enterTime"));
ROUTE1483.setToNode(CString("_countScript"));
ROUTE1483.setToField(CString("alert"));
Scene8.addChild(&ROUTE1483);

ROUTE& ROUTE1484 =  ROUTE();
ROUTE1484.setFromNode(CString("_100"));
ROUTE1484.setFromField(CString("enterTime"));
ROUTE1484.setToNode(CString("_countScript"));
ROUTE1484.setToField(CString("alert"));
Scene8.addChild(&ROUTE1484);

ROUTE& ROUTE1485 =  ROUTE();
ROUTE1485.setFromNode(CString("_102"));
ROUTE1485.setFromField(CString("enterTime"));
ROUTE1485.setToNode(CString("_countScript"));
ROUTE1485.setToField(CString("alert"));
Scene8.addChild(&ROUTE1485);

ROUTE& ROUTE1486 =  ROUTE();
ROUTE1486.setFromNode(CString("_103"));
ROUTE1486.setFromField(CString("enterTime"));
ROUTE1486.setToNode(CString("_countScript"));
ROUTE1486.setToField(CString("alert"));
Scene8.addChild(&ROUTE1486);

ROUTE& ROUTE1487 =  ROUTE();
ROUTE1487.setFromNode(CString("_33"));
ROUTE1487.setFromField(CString("enterTime"));
ROUTE1487.setToNode(CString("_countScript"));
ROUTE1487.setToField(CString("bonus_Gold"));
Scene8.addChild(&ROUTE1487);

ROUTE& ROUTE1488 =  ROUTE();
ROUTE1488.setFromNode(CString("_35"));
ROUTE1488.setFromField(CString("enterTime"));
ROUTE1488.setToNode(CString("_countScript"));
ROUTE1488.setToField(CString("bonus_Gold"));
Scene8.addChild(&ROUTE1488);

ROUTE& ROUTE1489 =  ROUTE();
ROUTE1489.setFromNode(CString("_60"));
ROUTE1489.setFromField(CString("enterTime"));
ROUTE1489.setToNode(CString("_countScript"));
ROUTE1489.setToField(CString("bonus_Gold"));
Scene8.addChild(&ROUTE1489);

ROUTE& ROUTE1490 =  ROUTE();
ROUTE1490.setFromNode(CString("_62"));
ROUTE1490.setFromField(CString("enterTime"));
ROUTE1490.setToNode(CString("_countScript"));
ROUTE1490.setToField(CString("bonus_Gold"));
Scene8.addChild(&ROUTE1490);

ROUTE& ROUTE1491 =  ROUTE();
ROUTE1491.setFromNode(CString("_59"));
ROUTE1491.setFromField(CString("enterTime"));
ROUTE1491.setToNode(CString("_countScript"));
ROUTE1491.setToField(CString("bonus_Gold"));
Scene8.addChild(&ROUTE1491);

ROUTE& ROUTE1492 =  ROUTE();
ROUTE1492.setFromNode(CString("_keyScript"));
ROUTE1492.setFromField(CString("keyFound"));
ROUTE1492.setToNode(CString("_countScript"));
ROUTE1492.setToField(CString("key_Found"));
Scene8.addChild(&ROUTE1492);

ROUTE& ROUTE1493 =  ROUTE();
ROUTE1493.setFromNode(CString("_113"));
ROUTE1493.setFromField(CString("enterTime"));
ROUTE1493.setToNode(CString("_countScript"));
ROUTE1493.setToField(CString("resetCount"));
Scene8.addChild(&ROUTE1493);

ROUTE& ROUTE1494 =  ROUTE();
ROUTE1494.setFromNode(CString("camPositionInterp"));
ROUTE1494.setFromField(CString("value_changed"));
ROUTE1494.setToNode(CString("_cam_draggerScript"));
ROUTE1494.setToField(CString("translation_animIN"));
Scene8.addChild(&ROUTE1494);

ROUTE& ROUTE1495 =  ROUTE();
ROUTE1495.setFromNode(CString("plane_1"));
ROUTE1495.setFromField(CString("translation_changed"));
ROUTE1495.setToNode(CString("_cam_draggerScript"));
ROUTE1495.setToField(CString("translation_dragIN"));
Scene8.addChild(&ROUTE1495);

ROUTE& ROUTE1496 =  ROUTE();
ROUTE1496.setFromNode(CString("_countScript"));
ROUTE1496.setFromField(CString("alert_Signal"));
ROUTE1496.setToNode(CString("Time_1"));
ROUTE1496.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1496);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromNode(CString("Time_1"));
ROUTE1497.setFromField(CString("fraction_changed"));
ROUTE1497.setToNode(CString("alert_CAMTranslationInterp"));
ROUTE1497.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1497);

ROUTE& ROUTE1498 =  ROUTE();
ROUTE1498.setFromNode(CString("Time_1"));
ROUTE1498.setFromField(CString("fraction_changed"));
ROUTE1498.setToNode(CString("alert_CAMRotationInterp"));
ROUTE1498.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1498);

ROUTE& ROUTE1499 =  ROUTE();
ROUTE1499.setFromNode(CString("touchSensorTrigger"));
ROUTE1499.setFromField(CString("touchTime"));
ROUTE1499.setToNode(CString("Time_2"));
ROUTE1499.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1499);

ROUTE& ROUTE1500 =  ROUTE();
ROUTE1500.setFromNode(CString("Time_2"));
ROUTE1500.setFromField(CString("fraction_changed"));
ROUTE1500.setToNode(CString("camPositionInterp"));
ROUTE1500.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1500);

ROUTE& ROUTE1501 =  ROUTE();
ROUTE1501.setFromNode(CString("_cam_draggerScript"));
ROUTE1501.setFromField(CString("cameraOUT"));
ROUTE1501.setToNode(CString("cam"));
ROUTE1501.setToField(CString("set_position"));
Scene8.addChild(&ROUTE1501);

ROUTE& ROUTE1502 =  ROUTE();
ROUTE1502.setFromNode(CString("alert_CAMTranslationInterp"));
ROUTE1502.setFromField(CString("value_changed"));
ROUTE1502.setToNode(CString("alert_CAM"));
ROUTE1502.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1502);

ROUTE& ROUTE1503 =  ROUTE();
ROUTE1503.setFromNode(CString("alert_CAMRotationInterp"));
ROUTE1503.setFromField(CString("value_changed"));
ROUTE1503.setToNode(CString("alert_CAM"));
ROUTE1503.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1503);

ROUTE& ROUTE1504 =  ROUTE();
ROUTE1504.setFromNode(CString("_cam_draggerScript"));
ROUTE1504.setFromField(CString("cameraOUT"));
ROUTE1504.setToNode(CString("alert_CAM"));
ROUTE1504.setToField(CString("set_center"));
Scene8.addChild(&ROUTE1504);

ROUTE& ROUTE1505 =  ROUTE();
ROUTE1505.setFromNode(CString("prox"));
ROUTE1505.setFromField(CString("position_changed"));
ROUTE1505.setToNode(CString("prox"));
ROUTE1505.setToField(CString("set_center"));
Scene8.addChild(&ROUTE1505);

ROUTE& ROUTE1506 =  ROUTE();
ROUTE1506.setFromNode(CString("_countScript"));
ROUTE1506.setFromField(CString("alert_Signal"));
ROUTE1506.setToNode(CString("Time_3"));
ROUTE1506.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1506);

ROUTE& ROUTE1507 =  ROUTE();
ROUTE1507.setFromNode(CString("Time_3"));
ROUTE1507.setFromField(CString("fraction_changed"));
ROUTE1507.setToNode(CString("planeEmissiveColorInterp_1"));
ROUTE1507.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1507);

ROUTE& ROUTE1508 =  ROUTE();
ROUTE1508.setFromNode(CString("Time_3"));
ROUTE1508.setFromField(CString("fraction_changed"));
ROUTE1508.setToNode(CString("planeTransparencyInterp_1"));
ROUTE1508.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1508);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromNode(CString("_countScript"));
ROUTE1509.setFromField(CString("bonus_Signal"));
ROUTE1509.setToNode(CString("Time_4"));
ROUTE1509.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1509);

ROUTE& ROUTE1510 =  ROUTE();
ROUTE1510.setFromNode(CString("Time_4"));
ROUTE1510.setFromField(CString("fraction_changed"));
ROUTE1510.setToNode(CString("planeEmissiveColorInterp_2"));
ROUTE1510.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1510);

ROUTE& ROUTE1511 =  ROUTE();
ROUTE1511.setFromNode(CString("Time_4"));
ROUTE1511.setFromField(CString("fraction_changed"));
ROUTE1511.setToNode(CString("planeTransparencyInterp_2"));
ROUTE1511.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1511);

ROUTE& ROUTE1512 =  ROUTE();
ROUTE1512.setFromNode(CString("_countScript"));
ROUTE1512.setFromField(CString("key_Signal"));
ROUTE1512.setToNode(CString("Time_5"));
ROUTE1512.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1512);

ROUTE& ROUTE1513 =  ROUTE();
ROUTE1513.setFromNode(CString("Time_5"));
ROUTE1513.setFromField(CString("fraction_changed"));
ROUTE1513.setToNode(CString("planeEmissiveColorInterp_3"));
ROUTE1513.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1513);

ROUTE& ROUTE1514 =  ROUTE();
ROUTE1514.setFromNode(CString("Time_5"));
ROUTE1514.setFromField(CString("fraction_changed"));
ROUTE1514.setToNode(CString("planeTransparencyInterp_3"));
ROUTE1514.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1514);

ROUTE& ROUTE1515 =  ROUTE();
ROUTE1515.setFromNode(CString("planeEmissiveColorInterp_1"));
ROUTE1515.setFromField(CString("value_changed"));
ROUTE1515.setToNode(CString("_3"));
ROUTE1515.setToField(CString("set_emissiveColor"));
Scene8.addChild(&ROUTE1515);

ROUTE& ROUTE1516 =  ROUTE();
ROUTE1516.setFromNode(CString("planeEmissiveColorInterp_2"));
ROUTE1516.setFromField(CString("value_changed"));
ROUTE1516.setToNode(CString("_3"));
ROUTE1516.setToField(CString("set_emissiveColor"));
Scene8.addChild(&ROUTE1516);

ROUTE& ROUTE1517 =  ROUTE();
ROUTE1517.setFromNode(CString("planeEmissiveColorInterp_3"));
ROUTE1517.setFromField(CString("value_changed"));
ROUTE1517.setToNode(CString("_3"));
ROUTE1517.setToField(CString("set_emissiveColor"));
Scene8.addChild(&ROUTE1517);

ROUTE& ROUTE1518 =  ROUTE();
ROUTE1518.setFromNode(CString("planeTransparencyInterp_1"));
ROUTE1518.setFromField(CString("value_changed"));
ROUTE1518.setToNode(CString("_3"));
ROUTE1518.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1518);

ROUTE& ROUTE1519 =  ROUTE();
ROUTE1519.setFromNode(CString("planeTransparencyInterp_2"));
ROUTE1519.setFromField(CString("value_changed"));
ROUTE1519.setToNode(CString("_3"));
ROUTE1519.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1519);

ROUTE& ROUTE1520 =  ROUTE();
ROUTE1520.setFromNode(CString("planeTransparencyInterp_3"));
ROUTE1520.setFromField(CString("value_changed"));
ROUTE1520.setToNode(CString("_3"));
ROUTE1520.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1520);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromNode(CString("_1"));
ROUTE1521.setFromField(CString("translation_changed"));
ROUTE1521.setToNode(CString("plane_1"));
ROUTE1521.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromNode(CString("_countScript"));
ROUTE1522.setFromField(CString("counterDisplay"));
ROUTE1522.setToNode(CString("counter_1"));
ROUTE1522.setToField(CString("set_string"));
Scene8.addChild(&ROUTE1522);

ROUTE& ROUTE1523 =  ROUTE();
ROUTE1523.setFromNode(CString("_countScript"));
ROUTE1523.setFromField(CString("bonus_Signal"));
ROUTE1523.setToNode(CString("Sound1clip_1"));
ROUTE1523.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1523);

ROUTE& ROUTE1524 =  ROUTE();
ROUTE1524.setFromNode(CString("_countScript"));
ROUTE1524.setFromField(CString("alert_Signal"));
ROUTE1524.setToNode(CString("Sound1clip_2"));
ROUTE1524.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1524);

ROUTE& ROUTE1525 =  ROUTE();
ROUTE1525.setFromNode(CString("_countScript"));
ROUTE1525.setFromField(CString("key_Signal"));
ROUTE1525.setToNode(CString("Sound1clip_3"));
ROUTE1525.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1525);

ROUTE& ROUTE1526 =  ROUTE();
ROUTE1526.setFromNode(CString("_keyScript"));
ROUTE1526.setFromField(CString("transparency_A"));
ROUTE1526.setToNode(CString("_4"));
ROUTE1526.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1526);

ROUTE& ROUTE1527 =  ROUTE();
ROUTE1527.setFromNode(CString("_keyScript"));
ROUTE1527.setFromField(CString("transparency_R"));
ROUTE1527.setToNode(CString("_6"));
ROUTE1527.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1527);

ROUTE& ROUTE1528 =  ROUTE();
ROUTE1528.setFromNode(CString("_keyScript"));
ROUTE1528.setFromField(CString("transparency_C"));
ROUTE1528.setToNode(CString("_7"));
ROUTE1528.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1528);

ROUTE& ROUTE1529 =  ROUTE();
ROUTE1529.setFromNode(CString("_keyScript"));
ROUTE1529.setFromField(CString("transparency_A1"));
ROUTE1529.setToNode(CString("_8"));
ROUTE1529.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1529);

ROUTE& ROUTE1530 =  ROUTE();
ROUTE1530.setFromNode(CString("_keyScript"));
ROUTE1530.setFromField(CString("transparency_D"));
ROUTE1530.setToNode(CString("_10"));
ROUTE1530.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1530);

ROUTE& ROUTE1531 =  ROUTE();
ROUTE1531.setFromNode(CString("_keyScript"));
ROUTE1531.setFromField(CString("transparency_I"));
ROUTE1531.setToNode(CString("_11"));
ROUTE1531.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1531);

ROUTE& ROUTE1532 =  ROUTE();
ROUTE1532.setFromNode(CString("_keyScript"));
ROUTE1532.setFromField(CString("transparency_A2"));
ROUTE1532.setToNode(CString("_12"));
ROUTE1532.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1532);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromNode(CString("prox"));
ROUTE1533.setFromField(CString("position_changed"));
ROUTE1533.setToNode(CString("xform"));
ROUTE1533.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1533);

ROUTE& ROUTE1534 =  ROUTE();
ROUTE1534.setFromNode(CString("prox"));
ROUTE1534.setFromField(CString("orientation_changed"));
ROUTE1534.setToNode(CString("xform"));
ROUTE1534.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1534);

ROUTE& ROUTE1535 =  ROUTE();
ROUTE1535.setFromNode(CString("rotorRotationInterp"));
ROUTE1535.setFromField(CString("value_changed"));
ROUTE1535.setToNode(CString("objOn_1"));
ROUTE1535.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1535);

ROUTE& ROUTE1536 =  ROUTE();
ROUTE1536.setFromNode(CString("rotorRotationInterp"));
ROUTE1536.setFromField(CString("value_changed"));
ROUTE1536.setToNode(CString("_16"));
ROUTE1536.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1536);

ROUTE& ROUTE1537 =  ROUTE();
ROUTE1537.setFromNode(CString("rotorRotationInterp"));
ROUTE1537.setFromField(CString("value_changed"));
ROUTE1537.setToNode(CString("_18"));
ROUTE1537.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1537);

ROUTE& ROUTE1538 =  ROUTE();
ROUTE1538.setFromNode(CString("rotorRotationInterp"));
ROUTE1538.setFromField(CString("value_changed"));
ROUTE1538.setToNode(CString("_20"));
ROUTE1538.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1538);

ROUTE& ROUTE1539 =  ROUTE();
ROUTE1539.setFromNode(CString("rotorRotationInterp"));
ROUTE1539.setFromField(CString("value_changed"));
ROUTE1539.setToNode(CString("_22"));
ROUTE1539.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1539);

ROUTE& ROUTE1540 =  ROUTE();
ROUTE1540.setFromNode(CString("rotorRotationInterp"));
ROUTE1540.setFromField(CString("value_changed"));
ROUTE1540.setToNode(CString("_24"));
ROUTE1540.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1540);

ROUTE& ROUTE1541 =  ROUTE();
ROUTE1541.setFromNode(CString("rotorRotationInterp"));
ROUTE1541.setFromField(CString("value_changed"));
ROUTE1541.setToNode(CString("_26"));
ROUTE1541.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1541);

ROUTE& ROUTE1542 =  ROUTE();
ROUTE1542.setFromNode(CString("rotorRotationInterp"));
ROUTE1542.setFromField(CString("value_changed"));
ROUTE1542.setToNode(CString("_28"));
ROUTE1542.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1542);

ROUTE& ROUTE1543 =  ROUTE();
ROUTE1543.setFromNode(CString("rotorRotationInterp"));
ROUTE1543.setFromField(CString("value_changed"));
ROUTE1543.setToNode(CString("_30"));
ROUTE1543.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1543);

ROUTE& ROUTE1544 =  ROUTE();
ROUTE1544.setFromNode(CString("rotorRotationInterp"));
ROUTE1544.setFromField(CString("value_changed"));
ROUTE1544.setToNode(CString("_32"));
ROUTE1544.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1544);

ROUTE& ROUTE1545 =  ROUTE();
ROUTE1545.setFromNode(CString("rotorRotationInterp"));
ROUTE1545.setFromField(CString("value_changed"));
ROUTE1545.setToNode(CString("_34"));
ROUTE1545.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1545);

ROUTE& ROUTE1546 =  ROUTE();
ROUTE1546.setFromNode(CString("rotorRotationInterp"));
ROUTE1546.setFromField(CString("value_changed"));
ROUTE1546.setToNode(CString("_36"));
ROUTE1546.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1546);

ROUTE& ROUTE1547 =  ROUTE();
ROUTE1547.setFromNode(CString("rotorRotationInterp"));
ROUTE1547.setFromField(CString("value_changed"));
ROUTE1547.setToNode(CString("_38"));
ROUTE1547.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1547);

ROUTE& ROUTE1548 =  ROUTE();
ROUTE1548.setFromNode(CString("rotorRotationInterp"));
ROUTE1548.setFromField(CString("value_changed"));
ROUTE1548.setToNode(CString("_40"));
ROUTE1548.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1548);

ROUTE& ROUTE1549 =  ROUTE();
ROUTE1549.setFromNode(CString("rotorRotationInterp"));
ROUTE1549.setFromField(CString("value_changed"));
ROUTE1549.setToNode(CString("_42"));
ROUTE1549.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1549);

ROUTE& ROUTE1550 =  ROUTE();
ROUTE1550.setFromNode(CString("rotorRotationInterp"));
ROUTE1550.setFromField(CString("value_changed"));
ROUTE1550.setToNode(CString("bonusObj_11"));
ROUTE1550.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1550);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromNode(CString("rotorRotationInterp"));
ROUTE1551.setFromField(CString("value_changed"));
ROUTE1551.setToNode(CString("_45"));
ROUTE1551.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1551);

ROUTE& ROUTE1552 =  ROUTE();
ROUTE1552.setFromNode(CString("rotorRotationInterp"));
ROUTE1552.setFromField(CString("value_changed"));
ROUTE1552.setToNode(CString("_47"));
ROUTE1552.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1552);

ROUTE& ROUTE1553 =  ROUTE();
ROUTE1553.setFromNode(CString("rotorRotationInterp"));
ROUTE1553.setFromField(CString("value_changed"));
ROUTE1553.setToNode(CString("_49"));
ROUTE1553.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1553);

ROUTE& ROUTE1554 =  ROUTE();
ROUTE1554.setFromNode(CString("rotorRotationInterp"));
ROUTE1554.setFromField(CString("value_changed"));
ROUTE1554.setToNode(CString("_51"));
ROUTE1554.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1554);

ROUTE& ROUTE1555 =  ROUTE();
ROUTE1555.setFromNode(CString("rotorRotationInterp"));
ROUTE1555.setFromField(CString("value_changed"));
ROUTE1555.setToNode(CString("bonusObj_15"));
ROUTE1555.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1555);

ROUTE& ROUTE1556 =  ROUTE();
ROUTE1556.setFromNode(CString("rotorRotationInterp"));
ROUTE1556.setFromField(CString("value_changed"));
ROUTE1556.setToNode(CString("_54"));
ROUTE1556.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1556);

ROUTE& ROUTE1557 =  ROUTE();
ROUTE1557.setFromNode(CString("rotorRotationInterp"));
ROUTE1557.setFromField(CString("value_changed"));
ROUTE1557.setToNode(CString("_56"));
ROUTE1557.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1557);

ROUTE& ROUTE1558 =  ROUTE();
ROUTE1558.setFromNode(CString("rotorRotationInterp"));
ROUTE1558.setFromField(CString("value_changed"));
ROUTE1558.setToNode(CString("_58"));
ROUTE1558.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1558);

ROUTE& ROUTE1559 =  ROUTE();
ROUTE1559.setFromNode(CString("rotorRotationInterp"));
ROUTE1559.setFromField(CString("value_changed"));
ROUTE1559.setToNode(CString("_61"));
ROUTE1559.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1559);

ROUTE& ROUTE1560 =  ROUTE();
ROUTE1560.setFromNode(CString("enterWorldScript"));
ROUTE1560.setFromField(CString("startTime"));
ROUTE1560.setToNode(CString("Time_6"));
ROUTE1560.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1560);

ROUTE& ROUTE1561 =  ROUTE();
ROUTE1561.setFromNode(CString("Time_6"));
ROUTE1561.setFromField(CString("fraction_changed"));
ROUTE1561.setToNode(CString("rotorRotationInterp"));
ROUTE1561.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1561);

ROUTE& ROUTE1562 =  ROUTE();
ROUTE1562.setFromNode(CString("rotorRotationInterp"));
ROUTE1562.setFromField(CString("value_changed"));
ROUTE1562.setToNode(CString("bonusRotor"));
ROUTE1562.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1562);

ROUTE& ROUTE1563 =  ROUTE();
ROUTE1563.setFromNode(CString("_64"));
ROUTE1563.setFromField(CString("enterTime"));
ROUTE1563.setToNode(CString("_proxyPlugger_1"));
ROUTE1563.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1563);

ROUTE& ROUTE1564 =  ROUTE();
ROUTE1564.setFromNode(CString("_65"));
ROUTE1564.setFromField(CString("enterTime"));
ROUTE1564.setToNode(CString("_proxyPlugger_1"));
ROUTE1564.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1564);

ROUTE& ROUTE1565 =  ROUTE();
ROUTE1565.setFromNode(CString("_66"));
ROUTE1565.setFromField(CString("enterTime"));
ROUTE1565.setToNode(CString("_proxyPlugger_1"));
ROUTE1565.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1565);

ROUTE& ROUTE1566 =  ROUTE();
ROUTE1566.setFromNode(CString("_67"));
ROUTE1566.setFromField(CString("enterTime"));
ROUTE1566.setToNode(CString("_proxyPlugger_1"));
ROUTE1566.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1566);

ROUTE& ROUTE1567 =  ROUTE();
ROUTE1567.setFromNode(CString("_68"));
ROUTE1567.setFromField(CString("enterTime"));
ROUTE1567.setToNode(CString("_proxyPlugger_1"));
ROUTE1567.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1567);

ROUTE& ROUTE1568 =  ROUTE();
ROUTE1568.setFromNode(CString("_69"));
ROUTE1568.setFromField(CString("enterTime"));
ROUTE1568.setToNode(CString("_proxyPlugger_1"));
ROUTE1568.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1568);

ROUTE& ROUTE1569 =  ROUTE();
ROUTE1569.setFromNode(CString("_71"));
ROUTE1569.setFromField(CString("enterTime"));
ROUTE1569.setToNode(CString("_proxyPlugger_1"));
ROUTE1569.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1569);

ROUTE& ROUTE1570 =  ROUTE();
ROUTE1570.setFromNode(CString("_70"));
ROUTE1570.setFromField(CString("enterTime"));
ROUTE1570.setToNode(CString("_proxyPlugger_1"));
ROUTE1570.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1570);

ROUTE& ROUTE1571 =  ROUTE();
ROUTE1571.setFromNode(CString("_75"));
ROUTE1571.setFromField(CString("enterTime"));
ROUTE1571.setToNode(CString("_proxyPlugger_1"));
ROUTE1571.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1571);

ROUTE& ROUTE1572 =  ROUTE();
ROUTE1572.setFromNode(CString("_74"));
ROUTE1572.setFromField(CString("enterTime"));
ROUTE1572.setToNode(CString("_proxyPlugger_1"));
ROUTE1572.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1572);

ROUTE& ROUTE1573 =  ROUTE();
ROUTE1573.setFromNode(CString("_73"));
ROUTE1573.setFromField(CString("enterTime"));
ROUTE1573.setToNode(CString("_proxyPlugger_1"));
ROUTE1573.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1573);

ROUTE& ROUTE1574 =  ROUTE();
ROUTE1574.setFromNode(CString("_72"));
ROUTE1574.setFromField(CString("enterTime"));
ROUTE1574.setToNode(CString("_proxyPlugger_1"));
ROUTE1574.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1574);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromNode(CString("_88"));
ROUTE1575.setFromField(CString("enterTime"));
ROUTE1575.setToNode(CString("_proxyPlugger_2"));
ROUTE1575.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1575);

ROUTE& ROUTE1576 =  ROUTE();
ROUTE1576.setFromNode(CString("_87"));
ROUTE1576.setFromField(CString("enterTime"));
ROUTE1576.setToNode(CString("_proxyPlugger_2"));
ROUTE1576.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1576);

ROUTE& ROUTE1577 =  ROUTE();
ROUTE1577.setFromNode(CString("_86"));
ROUTE1577.setFromField(CString("enterTime"));
ROUTE1577.setToNode(CString("_proxyPlugger_2"));
ROUTE1577.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1577);

ROUTE& ROUTE1578 =  ROUTE();
ROUTE1578.setFromNode(CString("_85"));
ROUTE1578.setFromField(CString("enterTime"));
ROUTE1578.setToNode(CString("_proxyPlugger_2"));
ROUTE1578.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1578);

ROUTE& ROUTE1579 =  ROUTE();
ROUTE1579.setFromNode(CString("_84"));
ROUTE1579.setFromField(CString("enterTime"));
ROUTE1579.setToNode(CString("_proxyPlugger_2"));
ROUTE1579.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1579);

ROUTE& ROUTE1580 =  ROUTE();
ROUTE1580.setFromNode(CString("_93"));
ROUTE1580.setFromField(CString("enterTime"));
ROUTE1580.setToNode(CString("_proxyPlugger_3"));
ROUTE1580.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1580);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromNode(CString("_92"));
ROUTE1581.setFromField(CString("enterTime"));
ROUTE1581.setToNode(CString("_proxyPlugger_3"));
ROUTE1581.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1581);

ROUTE& ROUTE1582 =  ROUTE();
ROUTE1582.setFromNode(CString("_91"));
ROUTE1582.setFromField(CString("enterTime"));
ROUTE1582.setToNode(CString("_proxyPlugger_3"));
ROUTE1582.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1582);

ROUTE& ROUTE1583 =  ROUTE();
ROUTE1583.setFromNode(CString("_90"));
ROUTE1583.setFromField(CString("enterTime"));
ROUTE1583.setToNode(CString("_proxyPlugger_3"));
ROUTE1583.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1583);

ROUTE& ROUTE1584 =  ROUTE();
ROUTE1584.setFromNode(CString("_89"));
ROUTE1584.setFromField(CString("enterTime"));
ROUTE1584.setToNode(CString("_proxyPlugger_3"));
ROUTE1584.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1584);

ROUTE& ROUTE1585 =  ROUTE();
ROUTE1585.setFromNode(CString("_98"));
ROUTE1585.setFromField(CString("enterTime"));
ROUTE1585.setToNode(CString("_proxyPlugger_4"));
ROUTE1585.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1585);

ROUTE& ROUTE1586 =  ROUTE();
ROUTE1586.setFromNode(CString("_97"));
ROUTE1586.setFromField(CString("enterTime"));
ROUTE1586.setToNode(CString("_proxyPlugger_4"));
ROUTE1586.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1586);

ROUTE& ROUTE1587 =  ROUTE();
ROUTE1587.setFromNode(CString("_96"));
ROUTE1587.setFromField(CString("enterTime"));
ROUTE1587.setToNode(CString("_proxyPlugger_4"));
ROUTE1587.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1587);

ROUTE& ROUTE1588 =  ROUTE();
ROUTE1588.setFromNode(CString("_95"));
ROUTE1588.setFromField(CString("enterTime"));
ROUTE1588.setToNode(CString("_proxyPlugger_4"));
ROUTE1588.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1588);

ROUTE& ROUTE1589 =  ROUTE();
ROUTE1589.setFromNode(CString("_94"));
ROUTE1589.setFromField(CString("enterTime"));
ROUTE1589.setToNode(CString("_proxyPlugger_4"));
ROUTE1589.setToField(CString("hitTime"));
Scene8.addChild(&ROUTE1589);

ROUTE& ROUTE1590 =  ROUTE();
ROUTE1590.setFromNode(CString("_105"));
ROUTE1590.setFromField(CString("enterTime"));
ROUTE1590.setToNode(CString("_keyScript"));
ROUTE1590.setToField(CString("keyTime_A"));
Scene8.addChild(&ROUTE1590);

ROUTE& ROUTE1591 =  ROUTE();
ROUTE1591.setFromNode(CString("_113"));
ROUTE1591.setFromField(CString("enterTime"));
ROUTE1591.setToNode(CString("_keyScript"));
ROUTE1591.setToField(CString("reset"));
Scene8.addChild(&ROUTE1591);

ROUTE& ROUTE1592 =  ROUTE();
ROUTE1592.setFromNode(CString("_106"));
ROUTE1592.setFromField(CString("enterTime"));
ROUTE1592.setToNode(CString("_keyScript"));
ROUTE1592.setToField(CString("keyTime_R"));
Scene8.addChild(&ROUTE1592);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromNode(CString("_107"));
ROUTE1593.setFromField(CString("enterTime"));
ROUTE1593.setToNode(CString("_keyScript"));
ROUTE1593.setToField(CString("keyTime_C"));
Scene8.addChild(&ROUTE1593);

ROUTE& ROUTE1594 =  ROUTE();
ROUTE1594.setFromNode(CString("_109"));
ROUTE1594.setFromField(CString("enterTime"));
ROUTE1594.setToNode(CString("_keyScript"));
ROUTE1594.setToField(CString("keyTime_A1"));
Scene8.addChild(&ROUTE1594);

ROUTE& ROUTE1595 =  ROUTE();
ROUTE1595.setFromNode(CString("_110"));
ROUTE1595.setFromField(CString("enterTime"));
ROUTE1595.setToNode(CString("_keyScript"));
ROUTE1595.setToField(CString("keyTime_D"));
Scene8.addChild(&ROUTE1595);

ROUTE& ROUTE1596 =  ROUTE();
ROUTE1596.setFromNode(CString("_111"));
ROUTE1596.setFromField(CString("enterTime"));
ROUTE1596.setToNode(CString("_keyScript"));
ROUTE1596.setToField(CString("keyTime_I"));
Scene8.addChild(&ROUTE1596);

ROUTE& ROUTE1597 =  ROUTE();
ROUTE1597.setFromNode(CString("_112"));
ROUTE1597.setFromField(CString("enterTime"));
ROUTE1597.setToNode(CString("_keyScript"));
ROUTE1597.setToField(CString("keyTime_A2"));
Scene8.addChild(&ROUTE1597);

ROUTE& ROUTE1598 =  ROUTE();
ROUTE1598.setFromNode(CString("rotorRotationInterp"));
ROUTE1598.setFromField(CString("value_changed"));
ROUTE1598.setToNode(CString("objOn_27"));
ROUTE1598.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1598);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromNode(CString("rotorRotationInterp"));
ROUTE1599.setFromField(CString("value_changed"));
ROUTE1599.setToNode(CString("objOn_28"));
ROUTE1599.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1599);

ROUTE& ROUTE1600 =  ROUTE();
ROUTE1600.setFromNode(CString("rotorRotationInterp"));
ROUTE1600.setFromField(CString("value_changed"));
ROUTE1600.setToNode(CString("c"));
ROUTE1600.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1600);

ROUTE& ROUTE1601 =  ROUTE();
ROUTE1601.setFromNode(CString("rotorRotationInterp"));
ROUTE1601.setFromField(CString("value_changed"));
ROUTE1601.setToNode(CString("_108"));
ROUTE1601.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1601);

ROUTE& ROUTE1602 =  ROUTE();
ROUTE1602.setFromNode(CString("rotorRotationInterp"));
ROUTE1602.setFromField(CString("value_changed"));
ROUTE1602.setToNode(CString("d"));
ROUTE1602.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1602);

ROUTE& ROUTE1603 =  ROUTE();
ROUTE1603.setFromNode(CString("rotorRotationInterp"));
ROUTE1603.setFromField(CString("value_changed"));
ROUTE1603.setToNode(CString("i"));
ROUTE1603.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1603);

ROUTE& ROUTE1604 =  ROUTE();
ROUTE1604.setFromNode(CString("rotorRotationInterp"));
ROUTE1604.setFromField(CString("value_changed"));
ROUTE1604.setToNode(CString("a_1"));
ROUTE1604.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1604);

X3D0.setScene(&Scene8);

}
