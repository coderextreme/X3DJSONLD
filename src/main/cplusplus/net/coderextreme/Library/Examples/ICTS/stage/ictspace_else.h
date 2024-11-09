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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:07 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:07 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("NegSFVec3f"));
ExternProtoDeclare8.setUrl(new CString[]{CString("NegSFVec3f_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("set_SFVec3f"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("value_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field10);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(CString("RandomSwitcher"));
ExternProtoDeclare11.setUrl(new CString[]{CString("RandomSwitcher_proto.x3d")}, 1);
field& field12 =  field();
field12.setName(CString("minValue"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFInt32"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("maxValue"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("startTime"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field14);

field& field15 =  field();
field15.setName(CString("whichChoice_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFInt32"));
ExternProtoDeclare11.addChild(&field15);

Scene7.addChild(&ExternProtoDeclare11);

WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo16);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("hi"));
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("vSens"));
VisibilitySensor& VisibilitySensor19 =  VisibilitySensor();
VisibilitySensor19.setDEF(CString("_1"));
VisibilitySensor19.setSize(new float[]{1.2,1.7,1.2});
VisibilitySensor19.setCenter(new float[]{0.0,0.85,0.0});
Transform18.addChild(&VisibilitySensor19);

Transform17.addChild(&Transform18);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("else"));
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("BodyO"));
Transform21.setTranslation(new float[]{4.65661e-10,1.49012e-7,-9.31323e-9});
Transform21.setScale(new float[]{1.0,0.999988,0.999988});
Transform21.setCenter(new float[]{-0.00316677,0.337015,0.00420856});
Group& Group22 =  Group();
Group& Group23 =  Group();
Group23.setDEF(CString("breath30"));
TimeSensor& TimeSensor24 =  TimeSensor();
TimeSensor24.setDEF(CString("Time_1"));
TimeSensor24.setCycleInterval(3);
TimeSensor24.setLoop(true);
TimeSensor24.setStartTime(974684060.768);
TimeSensor24.setStopTime(1);
Group23.addChild(&TimeSensor24);

Group22.addChild(&Group23);

OrientationInterpolator& OrientationInterpolator25 =  OrientationInterpolator();
OrientationInterpolator25.setDEF(CString("BodyORotationInterp"));
OrientationInterpolator25.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator25.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.00182698,-1.0,0.0,0.0,0.00323889,-1.0,0.0,0.0,0.00468343,-1.0,0.0,0.0,0.00636641,-1.0,0.0,0.0,0.00799351,-1.0,0.0,0.0,0.00964279,-1.0,0.0,0.0,0.0112411,-1.0,0.0,0.0,0.0127328,-1.0,0.0,0.0,0.0140842,-1.0,0.0,0.0,0.0151604,-1.0,0.0,0.0,0.016002,-1.0,0.0,0.0,0.0168864,-1.0,0.0,0.0,0.0174966,-1.0,0.0,0.0,0.0178741,-1.0,0.0,0.0,0.0179937,-1.0,0.0,0.0,0.0178741,-1.0,0.0,0.0,0.0174966,-1.0,0.0,0.0,0.0168864,-1.0,0.0,0.0,0.016002,-1.0,0.0,0.0,0.0148264,-1.0,0.0,0.0,0.0132107,-1.0,0.0,0.0,0.0112411,-1.0,0.0,0.0,0.00908256,-1.0,0.0,0.0,0.00687073,-1.0,0.0,0.0,0.00468343,-1.0,0.0,0.0,0.00276214,-1.0,0.0,0.0,0.00119604,0.0,0.0,1.0,0.0}, 120);
Group22.addChild(&OrientationInterpolator25);

OrientationInterpolator& OrientationInterpolator26 =  OrientationInterpolator();
OrientationInterpolator26.setDEF(CString("ArmRRotationInterp"));
OrientationInterpolator26.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator26.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000976562,1.0,0.0,0.0,0.00195312,1.0,0.0,0.0,0.00292969,1.0,0.0,0.0,0.00396682,1.0,0.0,0.0,0.00497951,1.0,0.0,0.0,0.00605941,1.0,0.0,0.0,0.0070421,1.0,0.0,0.0,0.00799351,1.0,0.0,0.0,0.00881615,1.0,0.0,0.0,0.00946813,1.0,0.0,0.0,0.0100068,1.0,0.0,0.0,0.0105406,1.0,0.0,0.0,0.0109183,1.0,0.0,0.0,0.0111559,1.0,0.0,0.0,0.0112623,1.0,0.0,0.0,0.0111559,1.0,0.0,0.0,0.0109401,1.0,0.0,0.0,0.0105406,1.0,0.0,0.0,0.0100068,1.0,0.0,0.0,0.00929019,1.0,0.0,0.0,0.00825759,1.0,0.0,0.0,0.0070421,1.0,0.0,0.0,0.00565227,1.0,0.0,0.0,0.00425674,1.0,0.0,0.0,0.00292969,1.0,0.0,0.0,0.00169146,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0}, 120);
Group22.addChild(&OrientationInterpolator26);

OrientationInterpolator& OrientationInterpolator27 =  OrientationInterpolator();
OrientationInterpolator27.setDEF(CString("ArmLRotationInterp"));
OrientationInterpolator27.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator27.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.000976562,-1.0,0.0,0.0,0.00195312,-1.0,0.0,0.0,0.00292969,-1.0,0.0,0.0,0.00396682,-1.0,0.0,0.0,0.00497951,-1.0,0.0,0.0,0.00605941,-1.0,0.0,0.0,0.0070421,-1.0,0.0,0.0,0.00799351,-1.0,0.0,0.0,0.00881615,-1.0,0.0,0.0,0.00946813,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.0105406,-1.0,0.0,0.0,0.0109183,-1.0,0.0,0.0,0.0111559,-1.0,0.0,0.0,0.0112623,-1.0,0.0,0.0,0.0111559,-1.0,0.0,0.0,0.0109401,-1.0,0.0,0.0,0.0105406,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.00929019,-1.0,0.0,0.0,0.00825759,-1.0,0.0,0.0,0.0070421,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00425674,-1.0,0.0,0.0,0.00292969,-1.0,0.0,0.0,0.00169146,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0}, 120);
Group22.addChild(&OrientationInterpolator27);

OrientationInterpolator& OrientationInterpolator28 =  OrientationInterpolator();
OrientationInterpolator28.setDEF(CString("headORotationInterp"));
OrientationInterpolator28.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator28.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.00138107,-1.0,0.0,0.0,0.00218366,-1.0,0.0,0.0,0.00338291,-1.0,0.0,0.0,0.00442158,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00676583,-1.0,0.0,0.0,0.00775123,-1.0,0.0,0.0,0.00867988,-1.0,0.0,0.0,0.00936687,-1.0,0.0,0.0,0.00981434,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.00961803,-1.0,0.0,0.0,0.00867988,-1.0,0.0,0.0,0.00724239,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00390625,-1.0,0.0,0.0,0.00218366,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 120);
Group22.addChild(&OrientationInterpolator28);

Transform21.addChild(&Group22);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("body"));
Transform29.setCenter(new float[]{-0.000208497,0.681873,0.00420851});
Switch& Switch30 =  Switch();
Switch30.setWhichChoice(0);
Transform& Transform31 =  Transform();
Transform31.setDEF(CString("b0"));
Transform31.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform31.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setAmbientIntensity(0.148936);
Material34.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material34.setShininess(0);
Appearance33.addChild(&Material34);

ImageTexture& ImageTexture35 =  ImageTexture();
ImageTexture35.setDEF(CString("_2"));
ImageTexture35.setUrl(new CString[]{CString("shirt7.jpg")}, 1);
Appearance33.addChild(&ImageTexture35);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setConvex(false);
IndexedFaceSet36.setCreaseAngle(3.14159);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate37 =  TextureCoordinate();
TextureCoordinate37.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet36.setTexCoord(&TextureCoordinate37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape32.setGeometry(&IndexedFaceSet36);

Transform31.addChild(&Shape32);

Switch30.addChild(&Transform31);

Transform29.addChild(&Switch30);

Transform21.addChild(&Transform29);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("ArmR"));
Transform39.setTranslation(new float[]{-5.96046e-8,3.57628e-7,2.98023e-8});
Transform39.setScale(new float[]{1.0,0.999991,0.999991});
Transform39.setCenter(new float[]{0.289521,1.00008,0.0239703});
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("armR"));
Transform40.setTranslation(new float[]{-1.49012e-7,-1.78814e-7,7.45058e-8});
Transform40.setScale(new float[]{0.999999,0.99999,0.99999});
Transform40.setCenter(new float[]{0.295036,0.973184,0.0197765});
Group& Group41 =  Group();
Group& Group42 =  Group();
Group42.setDEF(CString("armR-swing20"));
TimeSensor& TimeSensor43 =  TimeSensor();
TimeSensor43.setDEF(CString("Time_2"));
TimeSensor43.setCycleInterval(4.5);
TimeSensor43.setLoop(true);
TimeSensor43.setStartTime(974684060.768);
TimeSensor43.setStopTime(1);
Group42.addChild(&TimeSensor43);

Group41.addChild(&Group42);

OrientationInterpolator& OrientationInterpolator44 =  OrientationInterpolator();
OrientationInterpolator44.setDEF(CString("armRRotationInterp"));
OrientationInterpolator44.setKey(new float[]{0.0,0.0266666,0.0533332,0.0799998,0.106666,0.133333,0.158333,0.183333,0.208333,0.233333,0.258333,0.283333,0.308333,0.333333,0.355555,0.377778,0.4,0.422222,0.444445,0.466667,0.488889,0.511111,0.533334,0.555556,0.578948,0.60234,0.625731,0.649123,0.672515,0.695907,0.719298,0.74269,0.766082,0.789474,0.812866,0.836257,0.859649,0.883041,0.906433,0.929825,0.953216,0.976608,1.0}, 43);
OrientationInterpolator44.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0110486,-1.0,0.0,0.0,0.0283205,-1.0,0.0,0.0,0.0460809,-1.0,0.0,0.0,0.0585592,-1.0,0.0,0.0,0.0599993,-1.0,0.0,0.0,0.052382,-1.0,0.0,0.0,0.0384355,-1.0,0.0,0.0,0.0202741,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0202741,1.0,0.0,0.0,0.0384355,1.0,0.0,0.0,0.052382,1.0,0.0,0.0,0.0599993,1.0,0.0,0.0,0.0610199,1.0,0.0,0.0,0.0585592,1.0,0.0,0.0,0.0533383,1.0,0.0,0.0,0.0460809,1.0,0.0,0.0,0.0374998,1.0,0.0,0.0,0.0283205,1.0,0.0,0.0,0.0192609,1.0,0.0,0.0,0.0110486,1.0,0.0,0.0,0.00431238,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.00119604,-1.0,0.0,0.0,0.00258374,-1.0,0.0,0.0,0.00338291,-1.0,0.0,0.0,0.00396682,-1.0,0.0,0.0,0.00425674,-1.0,0.0,0.0,0.00436732,-1.0,0.0,0.0,0.00436732,-1.0,0.0,0.0,0.00420035,-1.0,0.0,0.0,0.00390625,-1.0,0.0,0.0,0.00358812,-1.0,0.0,0.0,0.00300997,-1.0,0.0,0.0,0.00258374,-1.0,0.0,0.0,0.00195312,-1.0,0.0,0.0,0.00154408,-1.0,0.0,0.0,0.00119604,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 172);
Group41.addChild(&OrientationInterpolator44);

Transform40.addChild(&Group41);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("oarmR"));
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDEF(CString("_3"));
Material48.setAmbientIntensity(0.255319);
Material48.setDiffuseColor(new float[]{1.0,0.600935,0.355765});
Material48.setShininess(0);
Appearance47.addChild(&Material48);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet49 =  IndexedFaceSet();
IndexedFaceSet49.setSolid(false);
IndexedFaceSet49.setConvex(false);
IndexedFaceSet49.setCreaseAngle(3.14159);
IndexedFaceSet49.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate50 =  Coordinate();
Coordinate50.setPoint(new float[]{0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417}, 54);
IndexedFaceSet49.setCoord(&Coordinate50);

Shape46.setGeometry(&IndexedFaceSet49);

Transform45.addChild(&Shape46);

Transform40.addChild(&Transform45);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("handR"));
Transform51.setCenter(new float[]{0.386713,0.551949,0.0217319});
Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setUSE(CString("_3"));
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

IndexedFaceSet& IndexedFaceSet55 =  IndexedFaceSet();
IndexedFaceSet55.setSolid(false);
IndexedFaceSet55.setConvex(false);
IndexedFaceSet55.setCreaseAngle(3.14159);
IndexedFaceSet55.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate56 =  Coordinate();
Coordinate56.setPoint(new float[]{0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045}, 84);
IndexedFaceSet55.setCoord(&Coordinate56);

Shape52.setGeometry(&IndexedFaceSet55);

Transform51.addChild(&Shape52);

Transform40.addChild(&Transform51);

Transform39.addChild(&Transform40);

Transform21.addChild(&Transform39);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("ArmL"));
Transform57.setTranslation(new float[]{2.98023e-8,0.0,-2.98023e-8});
Transform57.setCenter(new float[]{-0.298867,0.995243,-0.0108316});
Transform& Transform58 =  Transform();
Transform58.setDEF(CString("armL"));
Transform58.setTranslation(new float[]{-1.19209e-7,2.38419e-7,9.31323e-10});
Transform58.setCenter(new float[]{-0.305306,0.988041,-0.0116445});
Group& Group59 =  Group();
Group& Group60 =  Group();
Group60.setDEF(CString("armL-swing37"));
TimeSensor& TimeSensor61 =  TimeSensor();
TimeSensor61.setDEF(CString("Time_3"));
TimeSensor61.setCycleInterval(3.7);
TimeSensor61.setLoop(true);
TimeSensor61.setStartTime(974684060.768);
TimeSensor61.setStopTime(1);
Group60.addChild(&TimeSensor61);

Group59.addChild(&Group60);

OrientationInterpolator& OrientationInterpolator62 =  OrientationInterpolator();
OrientationInterpolator62.setDEF(CString("armLRotationInterp"));
OrientationInterpolator62.setKey(new float[]{0.0,0.0287162,0.0574324,0.0861486,0.114865,0.143581,0.172297,0.201013,0.22973,0.258446,0.287162,0.315878,0.344594,0.37331,0.402027,0.430743,0.459459,0.486486,0.513513,0.54054,0.567567,0.594594,0.621621,0.648648,0.675676,0.702703,0.72973,0.756757,0.783784,0.810811,0.837838,0.864865,0.891892,0.918919,0.945946,0.972973,1.0}, 37);
OrientationInterpolator62.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.000690534,0.0,0.0,1.0,0.00138107,0.0,0.0,1.0,0.00239208,0.0,0.0,1.0,0.00371864,0.0,0.0,1.0,0.00497951,0.0,0.0,1.0,0.00636641,0.0,0.0,1.0,0.00775123,0.0,0.0,1.0,0.00913491,0.0,0.0,1.0,0.0105179,0.0,0.0,1.0,0.0118603,0.0,0.0,1.0,0.0130655,0.0,0.0,1.0,0.0141349,0.0,0.0,1.0,0.0150182,0.0,0.0,1.0,0.0157163,0.0,0.0,1.0,0.0161503,0.0,0.0,1.0,0.0162972,0.0,0.0,1.0,0.0161945,0.0,0.0,1.0,0.0159123,0.0,0.0,1.0,0.0154717,0.0,0.0,1.0,0.0148586,0.0,0.0,1.0,0.0141349,0.0,0.0,1.0,0.0132827,0.0,0.0,1.0,0.0123334,0.0,0.0,1.0,0.0113256,0.0,0.0,1.0,0.0102887,0.0,0.0,1.0,0.00916098,0.0,0.0,1.0,0.00802329,0.0,0.0,1.0,0.00690534,0.0,0.0,1.0,0.00581854,0.0,0.0,1.0,0.00468343,0.0,0.0,1.0,0.00371864,0.0,0.0,1.0,0.00267443,0.0,0.0,1.0,0.00195312,0.0,0.0,1.0,0.00119604,0.0,0.0,1.0,0.000690534,0.0,0.0,1.0,0.0}, 148);
Group59.addChild(&OrientationInterpolator62);

Transform58.addChild(&Group59);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("oarmL"));
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
Coordinate68.setPoint(new float[]{-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742}, 54);
IndexedFaceSet67.setCoord(&Coordinate68);

Shape64.setGeometry(&IndexedFaceSet67);

Transform63.addChild(&Shape64);

Transform58.addChild(&Transform63);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("handL"));
Transform69.setTranslation(new float[]{2.98023e-8,0.0,4.65661e-10});
Transform69.setScale(new float[]{0.999996,0.999998,1.0});
Transform69.setScaleOrientation(new float[]{0.0,0.0,-1.0,0.739374});
Transform69.setCenter(new float[]{-0.394827,0.544969,-0.00705719});
Group& Group70 =  Group();
Group& Group71 =  Group();
Group71.setDEF(CString("handR70"));
TimeSensor& TimeSensor72 =  TimeSensor();
TimeSensor72.setDEF(CString("Time_4"));
TimeSensor72.setCycleInterval(7);
TimeSensor72.setLoop(true);
TimeSensor72.setStartTime(974684060.768);
TimeSensor72.setStopTime(1);
Group71.addChild(&TimeSensor72);

Group70.addChild(&Group71);

OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(CString("handLRotationInterp"));
OrientationInterpolator73.setKey(new float[]{0.0,0.642857,1.0}, 3);
OrientationInterpolator73.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.179019,0.0,0.0,1.0,0.0}, 12);
Group70.addChild(&OrientationInterpolator73);

Transform69.addChild(&Group70);

Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Material76.setUSE(CString("_3"));
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

IndexedFaceSet& IndexedFaceSet77 =  IndexedFaceSet();
IndexedFaceSet77.setSolid(false);
IndexedFaceSet77.setConvex(false);
IndexedFaceSet77.setCreaseAngle(3.14159);
IndexedFaceSet77.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637}, 84);
IndexedFaceSet77.setCoord(&Coordinate78);

Shape74.setGeometry(&IndexedFaceSet77);

Transform69.addChild(&Shape74);

Transform58.addChild(&Transform69);

Transform57.addChild(&Transform58);

Transform21.addChild(&Transform57);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("Head"));
Transform79.setTranslation(new float[]{-3.72529e-8,-0.00000107288,1.49012e-8});
Transform79.setScale(new float[]{0.999986,0.999952,0.999969});
Transform79.setScaleOrientation(new float[]{0.274337,0.961459,-0.0183508,0.745642});
Transform79.setCenter(new float[]{-0.00422851,1.04834,0.00417849});
Group& Group80 =  Group();
Group& Group81 =  Group();
Group81.setDEF(CString("head"));
TimeSensor& TimeSensor82 =  TimeSensor();
TimeSensor82.setDEF(CString("Time_5"));
TimeSensor82.setCycleInterval(20);
TimeSensor82.setLoop(true);
TimeSensor82.setStartTime(974684060.768);
TimeSensor82.setStopTime(1);
Group81.addChild(&TimeSensor82);

Group80.addChild(&Group81);

OrientationInterpolator& OrientationInterpolator83 =  OrientationInterpolator();
OrientationInterpolator83.setDEF(CString("HeadRotationInterp"));
OrientationInterpolator83.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.366667,0.433333,0.5,0.55,0.65,0.7,0.75,0.8,0.9,0.95,1.0}, 18);
OrientationInterpolator83.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.00000827175,0.0000022421,1.0,0.000976562,0.00000827175,0.0000022421,1.0,0.00308816,0.00000827175,0.0000022421,1.0,0.00352105,0.0,0.0,1.0,0.0,-0.00000827175,-0.0000022421,-1.0,0.0496813,0.0,0.0,1.0,0.0,0.349332,0.85517,0.38295,0.0108526,0.374536,0.916873,0.138083,0.0202623,0.0,0.0,1.0,0.0,-0.377728,-0.92469,-0.0476497,0.271169,-0.377728,-0.92469,-0.0476497,0.271169,-0.24416,0.963031,-0.113827,0.384429,-0.24416,0.963031,-0.113827,0.384429,-0.611809,0.790638,-0.0241082,0.381038,-0.24416,0.963031,-0.113827,0.384429,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 72);
Group80.addChild(&OrientationInterpolator83);

Transform79.addChild(&Group80);

Transform& Transform84 =  Transform();
Transform84.setDEF(CString("headU"));
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Material& Material87 =  Material();
Material87.setUSE(CString("_3"));
Appearance86.addChild(&Material87);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet88 =  IndexedFaceSet();
IndexedFaceSet88.setSolid(false);
IndexedFaceSet88.setConvex(false);
IndexedFaceSet88.setCreaseAngle(1.53973);
IndexedFaceSet88.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,21,22,8,6,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1,20,6,4,-1,20,21,6,-1,22,23,8,-1,23,10,8,-1}, 142);
Coordinate& Coordinate89 =  Coordinate();
Coordinate89.setPoint(new float[]{-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751}, 102);
IndexedFaceSet88.setCoord(&Coordinate89);

Shape85.setGeometry(&IndexedFaceSet88);

Transform84.addChild(&Shape85);

Transform79.addChild(&Transform84);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("headO"));
Transform90.setTranslation(new float[]{2.32831e-10,2.38419e-7,3.35276e-8});
Transform90.setCenter(new float[]{-0.00371499,1.24837,0.029451});
Transform& Transform91 =  Transform();
Transform91.setDEF(CString("augen"));
Transform91.setCenter(new float[]{-0.015762,1.38316,0.30789});
Group& Group92 =  Group();
Group& Group93 =  Group();
Group93.setDEF(CString("zwinker"));
TimeSensor& TimeSensor94 =  TimeSensor();
TimeSensor94.setDEF(CString("Time_6"));
TimeSensor94.setCycleInterval(12);
TimeSensor94.setLoop(true);
TimeSensor94.setStartTime(974684060.768);
TimeSensor94.setStopTime(1);
Group93.addChild(&TimeSensor94);

Group92.addChild(&Group93);

ColorInterpolator& ColorInterpolator95 =  ColorInterpolator();
ColorInterpolator95.setDEF(CString("augenDiffuseColorInterp"));
ColorInterpolator95.setKey(new float[]{0.0,0.14999,0.15,0.166657,0.166667,0.39999,0.4,0.416657,0.416667,0.733323,0.733333,0.74999,0.75,0.766657,0.766667,0.783323,0.783333,0.99999,1.0}, 19);
ColorInterpolator95.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765}, 57);
Group92.addChild(&ColorInterpolator95);

Transform91.addChild(&Group92);

Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
Material& Material98 =  Material();
Material98.setDEF(CString("_4"));
Material98.setAmbientIntensity(0.255319);
Material98.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material98.setShininess(0);
Appearance97.addChild(&Material98);

Shape96.addChild(&Appearance97);

IndexedFaceSet& IndexedFaceSet99 =  IndexedFaceSet();
IndexedFaceSet99.setSolid(false);
IndexedFaceSet99.setConvex(false);
IndexedFaceSet99.setCreaseAngle(1.60186);
IndexedFaceSet99.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate100 =  Coordinate();
Coordinate100.setPoint(new float[]{-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 48);
IndexedFaceSet99.setCoord(&Coordinate100);

Shape96.setGeometry(&IndexedFaceSet99);

Transform91.addChild(&Shape96);

Transform90.addChild(&Transform91);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("ohead"));
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Material& Material104 =  Material();
Material104.setUSE(CString("_3"));
Appearance103.addChild(&Material104);

Shape102.addChild(&Appearance103);

IndexedFaceSet& IndexedFaceSet105 =  IndexedFaceSet();
IndexedFaceSet105.setSolid(false);
IndexedFaceSet105.setConvex(false);
IndexedFaceSet105.setCreaseAngle(1.53973);
IndexedFaceSet105.setCoordIndex(new int32_t[]{1,4,5,2,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1,4,6,5,-1,6,7,5,-1,0,2,3,-1,0,1,2,-1}, 44);
Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setPoint(new float[]{-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829}, 48);
IndexedFaceSet105.setCoord(&Coordinate106);

Shape102.setGeometry(&IndexedFaceSet105);

Transform101.addChild(&Shape102);

Transform90.addChild(&Transform101);

Transform& Transform107 =  Transform();
Transform107.setTranslation(new float[]{-5.44125e-7,-0.0000529289,-0.00000404613});
Transform107.setScale(new float[]{1.00002,1.00006,1.00004});
Transform107.setScaleOrientation(new float[]{0.393582,0.918606,-0.0354517,0.468778});
Transform& Transform108 =  Transform();
Transform108.setDEF(CString("rink"));
Transform108.setTranslation(new float[]{0.0,0.028349,0.0});
Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Material& Material111 =  Material();
Material111.setDEF(CString("lambert5"));
Material111.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material111.setShininess(0);
Appearance110.addChild(&Material111);

ImageTexture& ImageTexture112 =  ImageTexture();
ImageTexture112.setUSE(CString("_2"));
Appearance110.addChild(&ImageTexture112);

TextureTransform& TextureTransform113 =  TextureTransform();
Appearance110.setTextureTransform(TextureTransform113);

Shape109.addChild(&Appearance110);

IndexedFaceSet& IndexedFaceSet114 =  IndexedFaceSet();
IndexedFaceSet114.setDEF(CString("Zopf_1Geo"));
IndexedFaceSet114.setSolid(false);
IndexedFaceSet114.setConvex(false);
IndexedFaceSet114.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1}, 40);
IndexedFaceSet114.setCoordIndex(new int32_t[]{37,38,45,44,-1,38,39,46,45,-1,39,30,47,46,-1,30,37,44,47,-1,43,42,49,48,-1,42,40,50,49,-1,40,26,51,50,-1,26,43,48,51,-1}, 40);
TextureCoordinate& TextureCoordinate115 =  TextureCoordinate();
TextureCoordinate115.setPoint(new float[]{0.690574,1.0,0.0,0.0,0.567945,0.224343,1.0,0.86435,0.0,0.0,1.0,0.362955,0.65401,1.0,0.046135,0.804669,0.679085,0.0,1.0,1.0,0.216635,0.826022,0.0,0.173867,1.0,1.0,0.0,0.525038,0.022697,0.0,0.63959,0.312118,0.0,0.516747,1.0,0.0,0.888076,0.696512,0.252242,1.0,1.0,0.0,0.483805,1.0,0.0,0.875815,0.30111,0.221757,1.0,0.44566,0.0,1.0,0.266616,0.374904,0.922961,0.0,0.0,1.0,0.259479,0.0,1.0,0.155422,0.787196,0.824045}, 64);
IndexedFaceSet114.setTexCoord(&TextureCoordinate115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setDEF(CString("ZopfGeoPoints"));
Coordinate116.setPoint(new float[]{-0.1684,1.1251,-0.1828,-0.258,1.1397,-0.0283,-0.3784,1.3897,-0.0448,-0.247,1.4055,-0.2913,-0.3248,1.1669,0.1848,-0.2812,1.328,0.1869,0.3248,1.1669,0.1848,0.2812,1.328,0.1869,0.258,1.1397,-0.0283,0.3784,1.3897,-0.0448,0.1684,1.1251,-0.1828,0.247,1.4055,-0.2913,0.0,1.1193,-0.2438,0.0,1.4118,-0.3886,-0.2167,1.544,0.0203,-0.1414,1.5659,-0.1081,-0.1905,1.519,0.1664,-0.0641,1.4405,0.2202,0.0641,1.4405,0.2202,0.1905,1.519,0.1664,0.2167,1.544,0.0203,0.1414,1.5659,-0.1081,0.0,1.5746,-0.1588,0.0,1.5869,0.0664,0.0641,1.4405,0.2202,-0.2862,1.1445,-0.3518,-0.4384,1.1694,-0.0892,-0.4006,1.1915,0.1983,0.4006,1.1915,0.1983,0.332,1.3742,0.2128,0.4384,1.1694,-0.0892,0.2862,1.1445,-0.3518,0.0,1.1347,-0.4555,-0.0815,1.508,0.2524,0.0815,1.508,0.2524,-0.332,1.3742,0.2128,0.3804,1.2451,0.2026,0.4185,1.2427,-0.0744,0.4034,1.2436,0.0351,0.4229,1.1784,0.0288,-0.4084,1.2795,-0.067,-0.3663,1.2829,0.2056,-0.3874,1.2812,0.0693,-0.4195,1.1804,0.0545,0.4573,1.2409,-0.0555,0.4467,1.2416,0.0213,0.4597,1.1987,0.0171,0.4705,1.1923,-0.0653,-0.4553,1.2049,0.0412,-0.4327,1.275,0.0515,-0.4478,1.2739,-0.0456,-0.4686,1.197,-0.0611,0.602,1.2923,-0.0652,0.5806,1.2838,0.165,0.5761,1.142,0.1513,0.5901,1.1092,-0.1702,-0.574,1.1168,0.1118,-0.6545,1.2285,0.1333,-0.6563,1.2767,-0.0322,-0.5574,1.0654,-0.0724,0.7888,1.1467,-0.1045,0.8171,1.1615,0.1241,0.7001,1.0526,0.1133,0.6497,1.0292,-0.13,-0.6929,1.0444,0.1121,-0.8678,1.1585,0.1286,-0.8314,1.131,-0.0399,-0.6903,1.0759,-0.0569,0.8909,0.9723,0.0492,-0.8608,0.898,0.0533}, 210);
IndexedFaceSet114.setCoord(&Coordinate116);

Shape109.setGeometry(&IndexedFaceSet114);

Transform108.addChild(&Shape109);

Transform107.addChild(&Transform108);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("zobb"));
Transform117.setTranslation(new float[]{0.0,0.0292042,0.0});
Shape& Shape118 =  Shape();
Appearance& Appearance119 =  Appearance();
Material& Material120 =  Material();
Material120.setAmbientIntensity(0.148936);
Material120.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material120.setShininess(0);
Appearance119.addChild(&Material120);

ImageTexture& ImageTexture121 =  ImageTexture();
ImageTexture121.setUrl(new CString[]{CString("hair3.jpg")}, 1);
Appearance119.addChild(&ImageTexture121);

Shape118.addChild(&Appearance119);

IndexedFaceSet& IndexedFaceSet122 =  IndexedFaceSet();
IndexedFaceSet122.setDEF(CString("Zopf_0Geo"));
IndexedFaceSet122.setSolid(false);
IndexedFaceSet122.setConvex(false);
IndexedFaceSet122.setCreaseAngle(3.14159);
IndexedFaceSet122.setTexCoordIndex(new int32_t[]{0,1,2,3,4,-1,3,2,5,-1,6,7,8,-1,9,10,11,12,13,-1,10,14,15,11,-1,14,0,4,15,-1,4,3,16,17,-1,3,18,19,16,-1,6,12,20,21,-1,12,11,22,20,-1,11,15,23,22,-1,15,4,17,23,-1,17,16,24,-1,16,19,24,-1,19,25,24,-1,25,26,24,-1,26,21,24,-1,21,20,24,-1,20,22,24,-1,22,23,24,-1,23,17,24,-1,18,25,19,-1,26,6,21,-1,27,28,1,0,-1,28,29,30,31,-1,29,32,18,33,30,-1,34,9,35,-1,36,37,38,7,6,-1,34,39,10,9,-1,39,40,14,10,-1,40,27,0,14,-1,41,42,26,25,-1,42,43,26,-1,32,41,25,18,-1,43,36,6,26,-1,35,8,38,-1,12,8,13,-1,6,8,12,-1,38,8,7,-1,34,35,38,37,-1,33,5,30,-1,3,5,18,-1,18,5,33,-1,30,5,31,-1,28,31,1,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,44,47,51,-1,52,53,54,55,-1,53,56,57,54,-1,56,58,59,57,-1,58,52,55,59,-1,47,46,60,61,-1,46,49,62,60,-1,49,51,63,62,-1,51,47,61,63,-1,55,54,64,65,-1,54,57,66,64,-1,57,59,67,66,-1,59,55,65,67,-1,61,60,68,-1,60,62,68,-1,62,63,68,-1,63,61,68,-1,65,64,69,-1,64,66,69,-1,66,67,69,-1,67,65,69,-1}, 317);
IndexedFaceSet122.setCoordIndex(new int32_t[]{25,26,40,2,3,-1,2,40,42,-1,29,36,38,-1,30,31,11,9,37,-1,31,32,13,11,-1,32,25,3,13,-1,3,2,14,15,-1,2,35,16,14,-1,29,9,20,19,-1,9,11,21,20,-1,11,13,22,21,-1,13,3,15,22,-1,15,14,23,-1,14,16,23,-1,16,33,23,-1,33,34,23,-1,34,19,23,-1,19,20,23,-1,20,21,23,-1,21,22,23,-1,22,15,23,-1,35,33,16,-1,34,29,19,-1,0,1,26,25,-1,1,4,27,43,-1,4,5,35,41,27,-1,8,30,39,-1,7,6,28,36,29,-1,8,10,31,30,-1,10,12,32,31,-1,12,0,25,32,-1,17,24,34,33,-1,24,18,34,-1,5,17,33,35,-1,18,7,29,34,-1,39,38,28,-1,9,38,37,-1,29,38,9,-1,28,38,36,-1,8,39,28,6,-1,41,42,27,-1,2,42,35,-1,35,42,41,-1,27,42,43,-1,1,43,26,-1,44,45,53,52,-1,45,46,54,53,-1,46,47,55,54,-1,47,44,52,55,-1,48,49,57,56,-1,49,50,58,57,-1,50,51,59,58,-1,51,48,56,59,-1,52,53,61,60,-1,53,54,62,61,-1,54,55,63,62,-1,55,52,60,63,-1,56,57,65,64,-1,57,58,66,65,-1,58,59,67,66,-1,59,56,64,67,-1,60,61,68,-1,61,62,68,-1,62,63,68,-1,63,60,68,-1,64,65,69,-1,65,66,69,-1,66,67,69,-1,67,64,69,-1}, 317);
TextureCoordinate& TextureCoordinate123 =  TextureCoordinate();
TextureCoordinate123.setPoint(new float[]{-0.068547,0.872124,-0.020551,0.425052,0.059979,0.393538,0.148429,0.367115,0.198279,0.811704,0.066599,0.189525,0.904281,0.089649,1.0178,0.117728,1.02218,0.342888,1.0796,0.535033,1.1488,1.0005,0.82432,0.924406,0.904327,0.467078,1.02495,0.514031,-0.35648,1.28924,0.458452,1.16062,0.332759,0.281563,0.388526,0.500874,0.163623,0.004864,0.35103,0.060602,0.722095,0.339913,0.723582,0.111419,0.647314,0.546034,0.511997,0.619668,0.530739,0.22761,0.458273,-0.070208,0.63899,-0.045619,-0.148572,0.67691,-0.085115,0.283391,-0.038014,0.000047,-0.005182,0.044134,-0.013473,0.22309,0.138058,-0.029942,0.074425,0.013763,1.14582,0.375798,1.07153,0.360206,0.928249,0.053058,1.08942,0.088695,1.0595,0.138545,1.23813,0.78914,-0.410732,1.03121,0.457308,-0.126729,0.64525,-0.103044,0.64525,-0.103044,1.02619,0.490816,1.02445,0.381282,0.986364,0.278011,0.9959,0.590054,1.05445,0.390603,1.07755,0.288507,1.0599,0.504617,1.10032,0.625072,0.006724,0.254479,0.057637,0.234766,0.065423,0.179132,-0.041901,0.173796,0.053775,0.368203,0.051418,0.435719,0.00092,0.389516,-0.060689,0.47768,1.05807,0.337845,1.06611,0.556562,1.1102,0.313135,1.13038,0.575842,-0.003132,0.239253,-0.062702,0.211561,-0.009185,0.432311,-0.073194,0.453691,1.1199,0.446211,-0.093739,0.311262}, 140);
IndexedFaceSet122.setTexCoord(&TextureCoordinate123);

Coordinate& Coordinate124 =  Coordinate();
Coordinate124.setUSE(CString("ZopfGeoPoints"));
IndexedFaceSet122.setCoord(&Coordinate124);

Shape118.setGeometry(&IndexedFaceSet122);

Transform117.addChild(&Shape118);

Transform107.addChild(&Transform117);

Transform90.addChild(&Transform107);

Transform79.addChild(&Transform90);

Transform21.addChild(&Transform79);

Transform20.addChild(&Transform21);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("BeinL"));
Transform125.setCenter(new float[]{-0.198186,0.30347,-0.0111347});
Transform& Transform126 =  Transform();
Transform126.setDEF(CString("beinL"));
Shape& Shape127 =  Shape();
Appearance& Appearance128 =  Appearance();
Material& Material129 =  Material();
Material129.setUSE(CString("_3"));
Appearance128.addChild(&Material129);

Shape127.addChild(&Appearance128);

IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setSolid(false);
IndexedFaceSet130.setConvex(false);
IndexedFaceSet130.setCreaseAngle(3.14159);
IndexedFaceSet130.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate131 =  Coordinate();
Coordinate131.setPoint(new float[]{-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464}, 36);
IndexedFaceSet130.setCoord(&Coordinate131);

Shape127.setGeometry(&IndexedFaceSet130);

Transform126.addChild(&Shape127);

Transform125.addChild(&Transform126);

Transform& Transform132 =  Transform();
Transform132.setDEF(CString("fussL"));
Transform132.setCenter(new float[]{-0.198186,0.1544,-0.00509336});
Shape& Shape133 =  Shape();
Appearance& Appearance134 =  Appearance();
Material& Material135 =  Material();
Material135.setDEF(CString("_5"));
Material135.setAmbientIntensity(0.148936);
Material135.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material135.setShininess(0);
Appearance134.addChild(&Material135);

ImageTexture& ImageTexture136 =  ImageTexture();
ImageTexture136.setDEF(CString("_6"));
ImageTexture136.setUrl(new CString[]{CString("shoes1.jpg")}, 1);
Appearance134.addChild(&ImageTexture136);

Shape133.addChild(&Appearance134);

IndexedFaceSet& IndexedFaceSet137 =  IndexedFaceSet();
IndexedFaceSet137.setSolid(false);
IndexedFaceSet137.setConvex(false);
IndexedFaceSet137.setCreaseAngle(3.14159);
IndexedFaceSet137.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate138 =  TextureCoordinate();
TextureCoordinate138.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet137.setTexCoord(&TextureCoordinate138);

Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setPoint(new float[]{-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572}, 33);
IndexedFaceSet137.setCoord(&Coordinate139);

Shape133.setGeometry(&IndexedFaceSet137);

Transform132.addChild(&Shape133);

Transform125.addChild(&Transform132);

Transform20.addChild(&Transform125);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("BeinR"));
Transform140.setCenter(new float[]{0.196713,0.303457,0.0297802});
Transform& Transform141 =  Transform();
Transform141.setDEF(CString("beinR"));
Shape& Shape142 =  Shape();
Appearance& Appearance143 =  Appearance();
Material& Material144 =  Material();
Material144.setUSE(CString("_3"));
Appearance143.addChild(&Material144);

Shape142.addChild(&Appearance143);

IndexedFaceSet& IndexedFaceSet145 =  IndexedFaceSet();
IndexedFaceSet145.setSolid(false);
IndexedFaceSet145.setConvex(false);
IndexedFaceSet145.setCreaseAngle(3.14159);
IndexedFaceSet145.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate146 =  Coordinate();
Coordinate146.setPoint(new float[]{0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619}, 36);
IndexedFaceSet145.setCoord(&Coordinate146);

Shape142.setGeometry(&IndexedFaceSet145);

Transform141.addChild(&Shape142);

Transform140.addChild(&Transform141);

Transform& Transform147 =  Transform();
Transform147.setDEF(CString("fussR"));
Transform147.setTranslation(new float[]{-1.49012e-8,-1.49012e-8,-5.58794e-9});
Transform147.setScale(new float[]{1.0,0.999999,0.999999});
Transform147.setCenter(new float[]{0.196713,0.157104,0.00995016});
Group& Group148 =  Group();
Group& Group149 =  Group();
Group149.setDEF(CString("fussL94"));
TimeSensor& TimeSensor150 =  TimeSensor();
TimeSensor150.setDEF(CString("Time_7"));
TimeSensor150.setCycleInterval(9.4);
TimeSensor150.setLoop(true);
TimeSensor150.setStartTime(974684060.768);
TimeSensor150.setStopTime(1);
Group149.addChild(&TimeSensor150);

Group148.addChild(&Group149);

OrientationInterpolator& OrientationInterpolator151 =  OrientationInterpolator();
OrientationInterpolator151.setDEF(CString("fussLRotationInterp"));
OrientationInterpolator151.setKey(new float[]{0.0,0.0106383,0.0319149,0.0425532,0.0638298,1.0}, 6);
OrientationInterpolator151.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0923411,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0923411,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
Group148.addChild(&OrientationInterpolator151);

Transform147.addChild(&Group148);

Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
Material& Material154 =  Material();
Material154.setUSE(CString("_5"));
Appearance153.addChild(&Material154);

ImageTexture& ImageTexture155 =  ImageTexture();
ImageTexture155.setUSE(CString("_6"));
Appearance153.addChild(&ImageTexture155);

Shape152.addChild(&Appearance153);

IndexedFaceSet& IndexedFaceSet156 =  IndexedFaceSet();
IndexedFaceSet156.setSolid(false);
IndexedFaceSet156.setConvex(false);
IndexedFaceSet156.setCreaseAngle(3.14159);
IndexedFaceSet156.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate157 =  TextureCoordinate();
TextureCoordinate157.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869}, 22);
IndexedFaceSet156.setTexCoord(&TextureCoordinate157);

Coordinate& Coordinate158 =  Coordinate();
Coordinate158.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012}, 33);
IndexedFaceSet156.setCoord(&Coordinate158);

Shape152.setGeometry(&IndexedFaceSet156);

Transform147.addChild(&Shape152);

Transform140.addChild(&Transform147);

Transform20.addChild(&Transform140);

Transform17.addChild(&Transform20);

Transform& Transform159 =  Transform();
Transform159.setDEF(CString("shadow"));
Transform159.setTranslation(new float[]{0.0606028,0.0,0.0});
Transform159.setCenter(new float[]{0.0,0.00748548,0.0});
Transform& Transform160 =  Transform();
Transform160.setTranslation(new float[]{0.0,0.00748548,0.0});
Transform160.setRotation(new float[]{1.0,0.0,0.0,4.71239});
Transform160.setScale(new float[]{1.53335,1.53335,1.53335});
Shape& Shape161 =  Shape();
Appearance& Appearance162 =  Appearance();
ImageTexture& ImageTexture163 =  ImageTexture();
ImageTexture163.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance162.addChild(&ImageTexture163);

Shape161.addChild(&Appearance162);

IndexedFaceSet& IndexedFaceSet164 =  IndexedFaceSet();
IndexedFaceSet164.setSolid(false);
IndexedFaceSet164.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate165 =  TextureCoordinate();
TextureCoordinate165.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet164.setTexCoord(&TextureCoordinate165);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet164.setCoord(&Coordinate166);

Shape161.setGeometry(&IndexedFaceSet164);

Transform160.addChild(&Shape161);

Transform159.addChild(&Transform160);

Transform17.addChild(&Transform159);

Scene7.addChild(&Transform17);

ROUTE& ROUTE167 =  ROUTE();
ROUTE167.setFromNode(CString("_1"));
ROUTE167.setFromField(CString("isActive"));
ROUTE167.setToNode(CString("Time_1"));
ROUTE167.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE167);

ROUTE& ROUTE168 =  ROUTE();
ROUTE168.setFromNode(CString("_1"));
ROUTE168.setFromField(CString("enterTime"));
ROUTE168.setToNode(CString("Time_1"));
ROUTE168.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE168);

ROUTE& ROUTE169 =  ROUTE();
ROUTE169.setFromNode(CString("Time_1"));
ROUTE169.setFromField(CString("fraction_changed"));
ROUTE169.setToNode(CString("BodyORotationInterp"));
ROUTE169.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE169);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromNode(CString("Time_1"));
ROUTE170.setFromField(CString("fraction_changed"));
ROUTE170.setToNode(CString("ArmRRotationInterp"));
ROUTE170.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromNode(CString("Time_1"));
ROUTE171.setFromField(CString("fraction_changed"));
ROUTE171.setToNode(CString("ArmLRotationInterp"));
ROUTE171.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE171);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromNode(CString("Time_1"));
ROUTE172.setFromField(CString("fraction_changed"));
ROUTE172.setToNode(CString("headORotationInterp"));
ROUTE172.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE172);

ROUTE& ROUTE173 =  ROUTE();
ROUTE173.setFromNode(CString("_1"));
ROUTE173.setFromField(CString("isActive"));
ROUTE173.setToNode(CString("Time_2"));
ROUTE173.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE173);

ROUTE& ROUTE174 =  ROUTE();
ROUTE174.setFromNode(CString("_1"));
ROUTE174.setFromField(CString("enterTime"));
ROUTE174.setToNode(CString("Time_2"));
ROUTE174.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE174);

ROUTE& ROUTE175 =  ROUTE();
ROUTE175.setFromNode(CString("Time_2"));
ROUTE175.setFromField(CString("fraction_changed"));
ROUTE175.setToNode(CString("armRRotationInterp"));
ROUTE175.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE175);

ROUTE& ROUTE176 =  ROUTE();
ROUTE176.setFromNode(CString("armRRotationInterp"));
ROUTE176.setFromField(CString("value_changed"));
ROUTE176.setToNode(CString("armR"));
ROUTE176.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE176);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("ArmRRotationInterp"));
ROUTE177.setFromField(CString("value_changed"));
ROUTE177.setToNode(CString("ArmR"));
ROUTE177.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("_1"));
ROUTE178.setFromField(CString("isActive"));
ROUTE178.setToNode(CString("Time_3"));
ROUTE178.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("_1"));
ROUTE179.setFromField(CString("enterTime"));
ROUTE179.setToNode(CString("Time_3"));
ROUTE179.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("Time_3"));
ROUTE180.setFromField(CString("fraction_changed"));
ROUTE180.setToNode(CString("armLRotationInterp"));
ROUTE180.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE180);

ROUTE& ROUTE181 =  ROUTE();
ROUTE181.setFromNode(CString("_1"));
ROUTE181.setFromField(CString("isActive"));
ROUTE181.setToNode(CString("Time_4"));
ROUTE181.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE181);

ROUTE& ROUTE182 =  ROUTE();
ROUTE182.setFromNode(CString("_1"));
ROUTE182.setFromField(CString("enterTime"));
ROUTE182.setToNode(CString("Time_4"));
ROUTE182.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE182);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("Time_4"));
ROUTE183.setFromField(CString("fraction_changed"));
ROUTE183.setToNode(CString("handLRotationInterp"));
ROUTE183.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("handLRotationInterp"));
ROUTE184.setFromField(CString("value_changed"));
ROUTE184.setToNode(CString("handL"));
ROUTE184.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("armLRotationInterp"));
ROUTE185.setFromField(CString("value_changed"));
ROUTE185.setToNode(CString("armL"));
ROUTE185.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("ArmLRotationInterp"));
ROUTE186.setFromField(CString("value_changed"));
ROUTE186.setToNode(CString("ArmL"));
ROUTE186.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("_1"));
ROUTE187.setFromField(CString("isActive"));
ROUTE187.setToNode(CString("Time_5"));
ROUTE187.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("_1"));
ROUTE188.setFromField(CString("enterTime"));
ROUTE188.setToNode(CString("Time_5"));
ROUTE188.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("Time_5"));
ROUTE189.setFromField(CString("fraction_changed"));
ROUTE189.setToNode(CString("HeadRotationInterp"));
ROUTE189.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_1"));
ROUTE190.setFromField(CString("isActive"));
ROUTE190.setToNode(CString("Time_6"));
ROUTE190.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("_1"));
ROUTE191.setFromField(CString("enterTime"));
ROUTE191.setToNode(CString("Time_6"));
ROUTE191.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("Time_6"));
ROUTE192.setFromField(CString("fraction_changed"));
ROUTE192.setToNode(CString("augenDiffuseColorInterp"));
ROUTE192.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("augenDiffuseColorInterp"));
ROUTE193.setFromField(CString("value_changed"));
ROUTE193.setToNode(CString("_4"));
ROUTE193.setToField(CString("set_diffuseColor"));
Scene7.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("headORotationInterp"));
ROUTE194.setFromField(CString("value_changed"));
ROUTE194.setToNode(CString("headO"));
ROUTE194.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("HeadRotationInterp"));
ROUTE195.setFromField(CString("value_changed"));
ROUTE195.setToNode(CString("Head"));
ROUTE195.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("BodyORotationInterp"));
ROUTE196.setFromField(CString("value_changed"));
ROUTE196.setToNode(CString("BodyO"));
ROUTE196.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("_1"));
ROUTE197.setFromField(CString("isActive"));
ROUTE197.setToNode(CString("Time_7"));
ROUTE197.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("_1"));
ROUTE198.setFromField(CString("enterTime"));
ROUTE198.setToNode(CString("Time_7"));
ROUTE198.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("Time_7"));
ROUTE199.setFromField(CString("fraction_changed"));
ROUTE199.setToNode(CString("fussLRotationInterp"));
ROUTE199.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE199);

ROUTE& ROUTE200 =  ROUTE();
ROUTE200.setFromNode(CString("fussLRotationInterp"));
ROUTE200.setFromField(CString("value_changed"));
ROUTE200.setToNode(CString("fussR"));
ROUTE200.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE200);

X3D0.setScene(&Scene7);

//}
