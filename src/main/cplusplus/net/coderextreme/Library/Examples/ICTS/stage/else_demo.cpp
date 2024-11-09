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
Transform17.setDEF(CString("demo-Else"));
Transform17.setBboxSize(new float[]{8,8,8});
Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{-0.0181905,0.111785,0.0454207});
Billboard& Billboard19 =  Billboard();
Transform& Transform20 =  Transform();
Transform20.setDEF(CString("nc"));
Transform20.setTranslation(new float[]{0.0181905,-0.111785,-0.0454207});
Collision& Collision21 =  Collision();
Collision21.setEnabled(False);
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("bil"));
LOD& LOD23 =  LOD();
LOD23.setCenter(new float[]{0,1.2,0});
LOD23.setRange(new float[]{1,6,50}, 3);
Transform& Transform24 =  Transform();
Transform24.setDEF(CString("nearOff"));
LOD23.addChildren(&Transform24);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("hi"));
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("vSens"));
VisibilitySensor& VisibilitySensor27 =  VisibilitySensor();
VisibilitySensor27.setDEF(CString("_1"));
VisibilitySensor27.setSize(new float[]{1.2,1.7,1.2});
VisibilitySensor27.setCenter(new float[]{0,0.85,0});
Transform26.addChild(&VisibilitySensor27);

Transform25.addChild(&Transform26);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("else"));
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("BodyO"));
Transform29.setTranslation(new float[]{4.65661e-10,1.49012e-7,-9.31323e-9});
Transform29.setScale(new float[]{1,0.999988,0.999988});
Transform29.setCenter(new float[]{-0.00316677,0.337015,0.00420856});
Group& Group30 =  Group();
Group& Group31 =  Group();
Group31.setDEF(CString("breath30"));
TimeSensor& TimeSensor32 =  TimeSensor();
TimeSensor32.setDEF(CString("Time_1"));
TimeSensor32.setEnabled(False);
TimeSensor32.setCycleInterval(3);
TimeSensor32.setLoop(True);
TimeSensor32.setStartTime(971799363.056414);
TimeSensor32.setStopTime(1);
Group31.addChild(&TimeSensor32);

Group30.addChild(&Group31);

OrientationInterpolator& OrientationInterpolator33 =  OrientationInterpolator();
OrientationInterpolator33.setDEF(CString("BodyORotationInterp"));
OrientationInterpolator33.setKey(new float[]{0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1}, 30);
OrientationInterpolator33.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.00182698,-1,0,0,0.00323889,-1,0,0,0.00468343,-1,0,0,0.00636641,-1,0,0,0.00799351,-1,0,0,0.00964279,-1,0,0,0.0112411,-1,0,0,0.0127328,-1,0,0,0.0140842,-1,0,0,0.0151604,-1,0,0,0.016002,-1,0,0,0.0168864,-1,0,0,0.0174966,-1,0,0,0.0178741,-1,0,0,0.0179937,-1,0,0,0.0178741,-1,0,0,0.0174966,-1,0,0,0.0168864,-1,0,0,0.016002,-1,0,0,0.0148264,-1,0,0,0.0132107,-1,0,0,0.0112411,-1,0,0,0.00908256,-1,0,0,0.00687073,-1,0,0,0.00468343,-1,0,0,0.00276214,-1,0,0,0.00119604,0,0,1,0}, 120);
Group30.addChild(&OrientationInterpolator33);

OrientationInterpolator& OrientationInterpolator34 =  OrientationInterpolator();
OrientationInterpolator34.setDEF(CString("ArmRRotationInterp"));
OrientationInterpolator34.setKey(new float[]{0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1}, 30);
OrientationInterpolator34.setKeyValue(new float[]{0,0,1,0,1,0,0,0.000690534,1,0,0,0.000976562,1,0,0,0.00195312,1,0,0,0.00292969,1,0,0,0.00396682,1,0,0,0.00497951,1,0,0,0.00605941,1,0,0,0.0070421,1,0,0,0.00799351,1,0,0,0.00881615,1,0,0,0.00946813,1,0,0,0.0100068,1,0,0,0.0105406,1,0,0,0.0109183,1,0,0,0.0111559,1,0,0,0.0112623,1,0,0,0.0111559,1,0,0,0.0109401,1,0,0,0.0105406,1,0,0,0.0100068,1,0,0,0.00929019,1,0,0,0.00825759,1,0,0,0.0070421,1,0,0,0.00565227,1,0,0,0.00425674,1,0,0,0.00292969,1,0,0,0.00169146,1,0,0,0.000690534,0,0,1,0}, 120);
Group30.addChild(&OrientationInterpolator34);

OrientationInterpolator& OrientationInterpolator35 =  OrientationInterpolator();
OrientationInterpolator35.setDEF(CString("ArmLRotationInterp"));
OrientationInterpolator35.setKey(new float[]{0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1}, 30);
OrientationInterpolator35.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.000976562,-1,0,0,0.00195312,-1,0,0,0.00292969,-1,0,0,0.00396682,-1,0,0,0.00497951,-1,0,0,0.00605941,-1,0,0,0.0070421,-1,0,0,0.00799351,-1,0,0,0.00881615,-1,0,0,0.00946813,-1,0,0,0.0100068,-1,0,0,0.0105406,-1,0,0,0.0109183,-1,0,0,0.0111559,-1,0,0,0.0112623,-1,0,0,0.0111559,-1,0,0,0.0109401,-1,0,0,0.0105406,-1,0,0,0.0100068,-1,0,0,0.00929019,-1,0,0,0.00825759,-1,0,0,0.0070421,-1,0,0,0.00565227,-1,0,0,0.00425674,-1,0,0,0.00292969,-1,0,0,0.00169146,-1,0,0,0.000690534,0,0,1,0}, 120);
Group30.addChild(&OrientationInterpolator35);

OrientationInterpolator& OrientationInterpolator36 =  OrientationInterpolator();
OrientationInterpolator36.setDEF(CString("headORotationInterp"));
OrientationInterpolator36.setKey(new float[]{0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1}, 30);
OrientationInterpolator36.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.000690534,-1,0,0,0.00138107,-1,0,0,0.00218366,-1,0,0,0.00338291,-1,0,0,0.00442158,-1,0,0,0.00565227,-1,0,0,0.00676583,-1,0,0,0.00775123,-1,0,0,0.00867988,-1,0,0,0.00936687,-1,0,0,0.00981434,-1,0,0,0.0100068,-1,0,0,0.00961803,-1,0,0,0.00867988,-1,0,0,0.00724239,-1,0,0,0.00565227,-1,0,0,0.00390625,-1,0,0,0.00218366,-1,0,0,0.000690534,0,0,1,0,1,0,0,0.000690534,1,0,0,0.000690534,1,0,0,0.000690534,0,0,1,0,0,0,1,0,1,0,0,0.000690534,0,0,1,0,0,0,1,0,0,0,1,0}, 120);
Group30.addChild(&OrientationInterpolator36);

Transform29.addChild(&Group30);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("body"));
Transform37.setCenter(new float[]{-0.000208497,0.681873,0.00420851});
Switch& Switch38 =  Switch();
Switch38.setWhichChoice(0);
Transform& Transform39 =  Transform();
Transform39.setDEF(CString("b0"));
Transform39.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform39.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setAmbientIntensity(0.148936);
Material42.setDiffuseColor(new float[]{1,1,1});
Material42.setShininess(0);
Appearance41.addChild(&Material42);

ImageTexture& ImageTexture43 =  ImageTexture();
ImageTexture43.setDEF(CString("_2"));
ImageTexture43.setUrl(new CString[]{CString("shirt7.jpg")}, 1);
Appearance41.addChild(&ImageTexture43);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet44 =  IndexedFaceSet();
IndexedFaceSet44.setConvex(False);
IndexedFaceSet44.setCreaseAngle(3.14159);
IndexedFaceSet44.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate45 =  TextureCoordinate();
TextureCoordinate45.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet44.setTexCoord(&TextureCoordinate45);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet44.setCoord(&Coordinate46);

Shape40.setGeometry(&IndexedFaceSet44);

Transform39.addChild(&Shape40);

Switch38.addChild(&Transform39);

Transform37.addChild(&Switch38);

Transform29.addChild(&Transform37);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("ArmR"));
Transform47.setTranslation(new float[]{-5.96046e-8,3.57628e-7,2.98023e-8});
Transform47.setScale(new float[]{1,0.999991,0.999991});
Transform47.setCenter(new float[]{0.289521,1.00008,0.0239703});
Transform& Transform48 =  Transform();
Transform48.setDEF(CString("armR"));
Transform48.setTranslation(new float[]{-1.49012e-7,-1.78814e-7,7.45058e-8});
Transform48.setScale(new float[]{0.999999,0.99999,0.99999});
Transform48.setCenter(new float[]{0.295036,0.973184,0.0197765});
Group& Group49 =  Group();
Group& Group50 =  Group();
Group50.setDEF(CString("armR-swing20"));
TimeSensor& TimeSensor51 =  TimeSensor();
TimeSensor51.setDEF(CString("Time_2"));
TimeSensor51.setEnabled(False);
TimeSensor51.setCycleInterval(4.5);
TimeSensor51.setLoop(True);
TimeSensor51.setStartTime(971799363.056414);
TimeSensor51.setStopTime(1);
Group50.addChild(&TimeSensor51);

Group49.addChild(&Group50);

OrientationInterpolator& OrientationInterpolator52 =  OrientationInterpolator();
OrientationInterpolator52.setDEF(CString("armRRotationInterp"));
OrientationInterpolator52.setKey(new float[]{0,0.0266666,0.0533332,0.0799998,0.106666,0.133333,0.158333,0.183333,0.208333,0.233333,0.258333,0.283333,0.308333,0.333333,0.355555,0.377778,0.4,0.422222,0.444445,0.466667,0.488889,0.511111,0.533334,0.555556,0.578948,0.60234,0.625731,0.649123,0.672515,0.695907,0.719298,0.74269,0.766082,0.789474,0.812866,0.836257,0.859649,0.883041,0.906433,0.929825,0.953216,0.976608,1}, 43);
OrientationInterpolator52.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.0110486,-1,0,0,0.0283205,-1,0,0,0.0460809,-1,0,0,0.0585592,-1,0,0,0.0599993,-1,0,0,0.052382,-1,0,0,0.0384355,-1,0,0,0.0202741,0,0,1,0,1,0,0,0.0202741,1,0,0,0.0384355,1,0,0,0.052382,1,0,0,0.0599993,1,0,0,0.0610199,1,0,0,0.0585592,1,0,0,0.0533383,1,0,0,0.0460809,1,0,0,0.0374998,1,0,0,0.0283205,1,0,0,0.0192609,1,0,0,0.0110486,1,0,0,0.00431238,0,0,1,0,-1,0,0,0.00119604,-1,0,0,0.00258374,-1,0,0,0.00338291,-1,0,0,0.00396682,-1,0,0,0.00425674,-1,0,0,0.00436732,-1,0,0,0.00436732,-1,0,0,0.00420035,-1,0,0,0.00390625,-1,0,0,0.00358812,-1,0,0,0.00300997,-1,0,0,0.00258374,-1,0,0,0.00195312,-1,0,0,0.00154408,-1,0,0,0.00119604,-1,0,0,0.000690534,0,0,1,0,0,0,1,0,0,0,1,0}, 172);
Group49.addChild(&OrientationInterpolator52);

Transform48.addChild(&Group49);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("oarmR"));
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setDEF(CString("_3"));
Material56.setAmbientIntensity(0.255319);
Material56.setDiffuseColor(new float[]{1,0.600935,0.355765});
Material56.setShininess(0);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setSolid(False);
IndexedFaceSet57.setConvex(False);
IndexedFaceSet57.setCreaseAngle(3.14159);
IndexedFaceSet57.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417}, 54);
IndexedFaceSet57.setCoord(&Coordinate58);

Shape54.setGeometry(&IndexedFaceSet57);

Transform53.addChild(&Shape54);

Transform48.addChild(&Transform53);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("handR"));
Transform59.setCenter(new float[]{0.386713,0.551949,0.0217319});
Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Material62.setUSE(CString("_3"));
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setSolid(False);
IndexedFaceSet63.setConvex(False);
IndexedFaceSet63.setCreaseAngle(3.14159);
IndexedFaceSet63.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate64 =  Coordinate();
Coordinate64.setPoint(new float[]{0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045}, 84);
IndexedFaceSet63.setCoord(&Coordinate64);

Shape60.setGeometry(&IndexedFaceSet63);

Transform59.addChild(&Shape60);

Transform48.addChild(&Transform59);

Transform47.addChild(&Transform48);

Transform29.addChild(&Transform47);

Transform& Transform65 =  Transform();
Transform65.setDEF(CString("ArmL"));
Transform65.setTranslation(new float[]{2.98023e-8,0,-2.98023e-8});
Transform65.setCenter(new float[]{-0.298867,0.995243,-0.0108316});
Transform& Transform66 =  Transform();
Transform66.setDEF(CString("armL"));
Transform66.setTranslation(new float[]{-1.19209e-7,2.38419e-7,9.31323e-10});
Transform66.setCenter(new float[]{-0.305306,0.988041,-0.0116445});
Group& Group67 =  Group();
Group& Group68 =  Group();
Group68.setDEF(CString("armL-swing37"));
TimeSensor& TimeSensor69 =  TimeSensor();
TimeSensor69.setDEF(CString("Time_3"));
TimeSensor69.setEnabled(False);
TimeSensor69.setCycleInterval(3.7);
TimeSensor69.setLoop(True);
TimeSensor69.setStartTime(971799363.056414);
TimeSensor69.setStopTime(1);
Group68.addChild(&TimeSensor69);

Group67.addChild(&Group68);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("armLRotationInterp"));
OrientationInterpolator70.setKey(new float[]{0,0.0287162,0.0574324,0.0861486,0.114865,0.143581,0.172297,0.201013,0.22973,0.258446,0.287162,0.315878,0.344594,0.37331,0.402027,0.430743,0.459459,0.486486,0.513513,0.54054,0.567567,0.594594,0.621621,0.648648,0.675676,0.702703,0.72973,0.756757,0.783784,0.810811,0.837838,0.864865,0.891892,0.918919,0.945946,0.972973,1}, 37);
OrientationInterpolator70.setKeyValue(new float[]{0,0,1,0,0,0,1,0.000690534,0,0,1,0.00138107,0,0,1,0.00239208,0,0,1,0.00371864,0,0,1,0.00497951,0,0,1,0.00636641,0,0,1,0.00775123,0,0,1,0.00913491,0,0,1,0.0105179,0,0,1,0.0118603,0,0,1,0.0130655,0,0,1,0.0141349,0,0,1,0.0150182,0,0,1,0.0157163,0,0,1,0.0161503,0,0,1,0.0162972,0,0,1,0.0161945,0,0,1,0.0159123,0,0,1,0.0154717,0,0,1,0.0148586,0,0,1,0.0141349,0,0,1,0.0132827,0,0,1,0.0123334,0,0,1,0.0113256,0,0,1,0.0102887,0,0,1,0.00916098,0,0,1,0.00802329,0,0,1,0.00690534,0,0,1,0.00581854,0,0,1,0.00468343,0,0,1,0.00371864,0,0,1,0.00267443,0,0,1,0.00195312,0,0,1,0.00119604,0,0,1,0.000690534,0,0,1,0}, 148);
Group67.addChild(&OrientationInterpolator70);

Transform66.addChild(&Group67);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("oarmL"));
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setUSE(CString("_3"));
Appearance73.addChild(&Material74);

Shape72.addChild(&Appearance73);

IndexedFaceSet& IndexedFaceSet75 =  IndexedFaceSet();
IndexedFaceSet75.setSolid(False);
IndexedFaceSet75.setConvex(False);
IndexedFaceSet75.setCreaseAngle(3.14159);
IndexedFaceSet75.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[]{-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742}, 54);
IndexedFaceSet75.setCoord(&Coordinate76);

Shape72.setGeometry(&IndexedFaceSet75);

Transform71.addChild(&Shape72);

Transform66.addChild(&Transform71);

Transform& Transform77 =  Transform();
Transform77.setDEF(CString("handL"));
Transform77.setTranslation(new float[]{2.98023e-8,0,4.65661e-10});
Transform77.setScale(new float[]{0.999996,0.999998,1});
Transform77.setScaleOrientation(new float[]{0,0,-1,0.739374});
Transform77.setCenter(new float[]{-0.394827,0.544969,-0.00705719});
Group& Group78 =  Group();
Group& Group79 =  Group();
Group79.setDEF(CString("handR70"));
TimeSensor& TimeSensor80 =  TimeSensor();
TimeSensor80.setDEF(CString("Time_4"));
TimeSensor80.setEnabled(False);
TimeSensor80.setCycleInterval(7);
TimeSensor80.setLoop(True);
TimeSensor80.setStartTime(971799363.056414);
TimeSensor80.setStopTime(1);
Group79.addChild(&TimeSensor80);

Group78.addChild(&Group79);

OrientationInterpolator& OrientationInterpolator81 =  OrientationInterpolator();
OrientationInterpolator81.setDEF(CString("handLRotationInterp"));
OrientationInterpolator81.setKey(new float[]{0,0.642857,1}, 3);
OrientationInterpolator81.setKeyValue(new float[]{0,0,1,0,0,0,1,0.179019,0,0,1,0}, 12);
Group78.addChild(&OrientationInterpolator81);

Transform77.addChild(&Group78);

Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Material& Material84 =  Material();
Material84.setUSE(CString("_3"));
Appearance83.addChild(&Material84);

Shape82.addChild(&Appearance83);

IndexedFaceSet& IndexedFaceSet85 =  IndexedFaceSet();
IndexedFaceSet85.setSolid(False);
IndexedFaceSet85.setConvex(False);
IndexedFaceSet85.setCreaseAngle(3.14159);
IndexedFaceSet85.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setPoint(new float[]{-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637}, 84);
IndexedFaceSet85.setCoord(&Coordinate86);

Shape82.setGeometry(&IndexedFaceSet85);

Transform77.addChild(&Shape82);

Transform66.addChild(&Transform77);

Transform65.addChild(&Transform66);

Transform29.addChild(&Transform65);

Transform& Transform87 =  Transform();
Transform87.setDEF(CString("Head"));
Transform87.setTranslation(new float[]{-3.72529e-8,-0.00000107288,1.49012e-8});
Transform87.setScale(new float[]{0.999986,0.999952,0.999969});
Transform87.setScaleOrientation(new float[]{0.274337,0.961459,-0.0183508,0.745642});
Transform87.setCenter(new float[]{-0.00422851,1.04834,0.00417849});
Group& Group88 =  Group();
Group& Group89 =  Group();
Group89.setDEF(CString("head"));
TimeSensor& TimeSensor90 =  TimeSensor();
TimeSensor90.setDEF(CString("Time_5"));
TimeSensor90.setEnabled(False);
TimeSensor90.setCycleInterval(20);
TimeSensor90.setLoop(True);
TimeSensor90.setStartTime(971799363.056414);
TimeSensor90.setStopTime(1);
Group89.addChild(&TimeSensor90);

Group88.addChild(&Group89);

OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(CString("HeadRotationInterp"));
OrientationInterpolator91.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.366667,0.433333,0.5,0.55,0.65,0.7,0.75,0.8,0.9,0.95,1}, 18);
OrientationInterpolator91.setKeyValue(new float[]{0,0,1,0,0.00000827175,0.0000022421,1,0.000976562,0.00000827175,0.0000022421,1,0.00308816,0.00000827175,0.0000022421,1,0.00352105,0,0,1,0,-0.00000827175,-0.0000022421,-1,0.0496813,0,0,1,0,0.349332,0.85517,0.38295,0.0108526,0.374536,0.916873,0.138083,0.0202623,0,0,1,0,-0.377728,-0.92469,-0.0476497,0.271169,-0.377728,-0.92469,-0.0476497,0.271169,-0.24416,0.963031,-0.113827,0.384429,-0.24416,0.963031,-0.113827,0.384429,-0.611809,0.790638,-0.0241082,0.381038,-0.24416,0.963031,-0.113827,0.384429,0,0,1,0,0,0,1,0}, 72);
Group88.addChild(&OrientationInterpolator91);

Transform87.addChild(&Group88);

Transform& Transform92 =  Transform();
Transform92.setDEF(CString("headU"));
Shape& Shape93 =  Shape();
Appearance& Appearance94 =  Appearance();
Material& Material95 =  Material();
Material95.setUSE(CString("_3"));
Appearance94.addChild(&Material95);

Shape93.addChild(&Appearance94);

IndexedFaceSet& IndexedFaceSet96 =  IndexedFaceSet();
IndexedFaceSet96.setSolid(False);
IndexedFaceSet96.setConvex(False);
IndexedFaceSet96.setCreaseAngle(1.53973);
IndexedFaceSet96.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,21,22,8,6,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1,20,6,4,-1,20,21,6,-1,22,23,8,-1,23,10,8,-1}, 142);
Coordinate& Coordinate97 =  Coordinate();
Coordinate97.setPoint(new float[]{-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751}, 102);
IndexedFaceSet96.setCoord(&Coordinate97);

Shape93.setGeometry(&IndexedFaceSet96);

Transform92.addChild(&Shape93);

Transform87.addChild(&Transform92);

Transform& Transform98 =  Transform();
Transform98.setDEF(CString("headO"));
Transform98.setTranslation(new float[]{2.32831e-10,2.38419e-7,3.35276e-8});
Transform98.setCenter(new float[]{-0.00371499,1.24837,0.029451});
Transform& Transform99 =  Transform();
Transform99.setDEF(CString("augen_1"));
Transform99.setCenter(new float[]{-0.015762,1.38316,0.30789});
Group& Group100 =  Group();
Group& Group101 =  Group();
Group101.setDEF(CString("zwinker"));
TimeSensor& TimeSensor102 =  TimeSensor();
TimeSensor102.setDEF(CString("Time_6"));
TimeSensor102.setEnabled(False);
TimeSensor102.setCycleInterval(12);
TimeSensor102.setLoop(True);
TimeSensor102.setStartTime(971799363.056414);
TimeSensor102.setStopTime(1);
Group101.addChild(&TimeSensor102);

Group100.addChild(&Group101);

ColorInterpolator& ColorInterpolator103 =  ColorInterpolator();
ColorInterpolator103.setDEF(CString("augenDiffuseColorInterp"));
ColorInterpolator103.setKey(new float[]{0,0.14999,0.15,0.166657,0.166667,0.39999,0.4,0.416657,0.416667,0.733323,0.733333,0.74999,0.75,0.766657,0.766667,0.783323,0.783333,0.99999,1}, 19);
ColorInterpolator103.setKeyValue(new float[]{0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765,1,0.600935,0.355765,0,0,0,0,0,0,1,0.600935,0.355765}, 57);
Group100.addChild(&ColorInterpolator103);

Transform99.addChild(&Group100);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setDEF(CString("_4"));
Material106.setAmbientIntensity(0.255319);
Material106.setDiffuseColor(new float[]{0,0,0});
Material106.setShininess(0);
Appearance105.addChild(&Material106);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet107 =  IndexedFaceSet();
IndexedFaceSet107.setSolid(False);
IndexedFaceSet107.setConvex(False);
IndexedFaceSet107.setCreaseAngle(1.60186);
IndexedFaceSet107.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setPoint(new float[]{-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 48);
IndexedFaceSet107.setCoord(&Coordinate108);

Shape104.setGeometry(&IndexedFaceSet107);

Transform99.addChild(&Shape104);

Transform98.addChild(&Transform99);

Transform& Transform109 =  Transform();
Transform109.setDEF(CString("ohead"));
Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
Material& Material112 =  Material();
Material112.setUSE(CString("_3"));
Appearance111.addChild(&Material112);

Shape110.addChild(&Appearance111);

IndexedFaceSet& IndexedFaceSet113 =  IndexedFaceSet();
IndexedFaceSet113.setSolid(False);
IndexedFaceSet113.setConvex(False);
IndexedFaceSet113.setCreaseAngle(1.53973);
IndexedFaceSet113.setCoordIndex(new int32_t[]{1,4,5,2,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1,4,6,5,-1,6,7,5,-1,0,2,3,-1,0,1,2,-1}, 44);
Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829}, 48);
IndexedFaceSet113.setCoord(&Coordinate114);

Shape110.setGeometry(&IndexedFaceSet113);

Transform109.addChild(&Shape110);

Transform98.addChild(&Transform109);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("_5"));
Transform115.setTranslation(new float[]{-5.44125e-7,-0.0000529289,-0.00000404613});
Transform115.setScale(new float[]{1.00002,1.00006,1.00004});
Transform115.setScaleOrientation(new float[]{0.393582,0.918606,-0.0354517,0.468778});
Transform& Transform116 =  Transform();
Transform116.setDEF(CString("rink"));
Transform116.setTranslation(new float[]{0,0.028349,0});
Shape& Shape117 =  Shape();
Appearance& Appearance118 =  Appearance();
Material& Material119 =  Material();
Material119.setDEF(CString("lambert5"));
Material119.setDiffuseColor(new float[]{0,0,0});
Material119.setShininess(0);
Appearance118.addChild(&Material119);

ImageTexture& ImageTexture120 =  ImageTexture();
ImageTexture120.setUSE(CString("_2"));
Appearance118.addChild(&ImageTexture120);

TextureTransform& TextureTransform121 =  TextureTransform();
Appearance118.setTextureTransform(TextureTransform121);

Shape117.addChild(&Appearance118);

IndexedFaceSet& IndexedFaceSet122 =  IndexedFaceSet();
IndexedFaceSet122.setDEF(CString("Zopf_1Geo"));
IndexedFaceSet122.setSolid(False);
IndexedFaceSet122.setConvex(False);
IndexedFaceSet122.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1}, 40);
IndexedFaceSet122.setCoordIndex(new int32_t[]{37,38,45,44,-1,38,39,46,45,-1,39,30,47,46,-1,30,37,44,47,-1,43,42,49,48,-1,42,40,50,49,-1,40,26,51,50,-1,26,43,48,51,-1}, 40);
TextureCoordinate& TextureCoordinate123 =  TextureCoordinate();
TextureCoordinate123.setPoint(new float[]{0.690574,1,0,0,0.567945,0.224343,1,0.86435,0,0,1,0.362955,0.65401,1,0.046135,0.804669,0.679085,0,1,1,0.216635,0.826022,0,0.173867,1,1,0,0.525038,0.022697,0,0.63959,0.312118,0,0.516747,1,0,0.888076,0.696512,0.252242,1,1,0,0.483805,1,0,0.875815,0.30111,0.221757,1,0.44566,0,1,0.266616,0.374904,0.922961,0,0,1,0.259479,0,1,0.155422,0.787196,0.824045}, 64);
IndexedFaceSet122.setTexCoord(&TextureCoordinate123);

Coordinate& Coordinate124 =  Coordinate();
Coordinate124.setDEF(CString("ZopfGeoPoints"));
Coordinate124.setPoint(new float[]{-0.1684,1.1251,-0.1828,-0.258,1.1397,-0.0283,-0.3784,1.3897,-0.0448,-0.247,1.4055,-0.2913,-0.3248,1.1669,0.1848,-0.2812,1.328,0.1869,0.3248,1.1669,0.1848,0.2812,1.328,0.1869,0.258,1.1397,-0.0283,0.3784,1.3897,-0.0448,0.1684,1.1251,-0.1828,0.247,1.4055,-0.2913,0,1.1193,-0.2438,0,1.4118,-0.3886,-0.2167,1.544,0.0203,-0.1414,1.5659,-0.1081,-0.1905,1.519,0.1664,-0.0641,1.4405,0.2202,0.0641,1.4405,0.2202,0.1905,1.519,0.1664,0.2167,1.544,0.0203,0.1414,1.5659,-0.1081,0,1.5746,-0.1588,0,1.5869,0.0664,0.0641,1.4405,0.2202,-0.2862,1.1445,-0.3518,-0.4384,1.1694,-0.0892,-0.4006,1.1915,0.1983,0.4006,1.1915,0.1983,0.332,1.3742,0.2128,0.4384,1.1694,-0.0892,0.2862,1.1445,-0.3518,0,1.1347,-0.4555,-0.0815,1.508,0.2524,0.0815,1.508,0.2524,-0.332,1.3742,0.2128,0.3804,1.2451,0.2026,0.4185,1.2427,-0.0744,0.4034,1.2436,0.0351,0.4229,1.1784,0.0288,-0.4084,1.2795,-0.067,-0.3663,1.2829,0.2056,-0.3874,1.2812,0.0693,-0.4195,1.1804,0.0545,0.4573,1.2409,-0.0555,0.4467,1.2416,0.0213,0.4597,1.1987,0.0171,0.4705,1.1923,-0.0653,-0.4553,1.2049,0.0412,-0.4327,1.275,0.0515,-0.4478,1.2739,-0.0456,-0.4686,1.197,-0.0611,0.602,1.2923,-0.0652,0.5806,1.2838,0.165,0.5761,1.142,0.1513,0.5901,1.1092,-0.1702,-0.574,1.1168,0.1118,-0.6545,1.2285,0.1333,-0.6563,1.2767,-0.0322,-0.5574,1.0654,-0.0724,0.7888,1.1467,-0.1045,0.8171,1.1615,0.1241,0.7001,1.0526,0.1133,0.6497,1.0292,-0.13,-0.6929,1.0444,0.1121,-0.8678,1.1585,0.1286,-0.8314,1.131,-0.0399,-0.6903,1.0759,-0.0569,0.8909,0.9723,0.0492,-0.8608,0.898,0.0533}, 210);
IndexedFaceSet122.setCoord(&Coordinate124);

Shape117.setGeometry(&IndexedFaceSet122);

Transform116.addChild(&Shape117);

Transform115.addChild(&Transform116);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("zobb"));
Transform125.setTranslation(new float[]{0,0.0292042,0});
Shape& Shape126 =  Shape();
Appearance& Appearance127 =  Appearance();
Material& Material128 =  Material();
Material128.setAmbientIntensity(0.148936);
Material128.setDiffuseColor(new float[]{1,1,1});
Material128.setShininess(0);
Appearance127.addChild(&Material128);

ImageTexture& ImageTexture129 =  ImageTexture();
ImageTexture129.setUrl(new CString[]{CString("hair3.jpg")}, 1);
Appearance127.addChild(&ImageTexture129);

Shape126.addChild(&Appearance127);

IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setDEF(CString("Zopf_0Geo"));
IndexedFaceSet130.setSolid(False);
IndexedFaceSet130.setConvex(False);
IndexedFaceSet130.setCreaseAngle(3.14159);
IndexedFaceSet130.setTexCoordIndex(new int32_t[]{0,1,2,3,4,-1,3,2,5,-1,6,7,8,-1,9,10,11,12,13,-1,10,14,15,11,-1,14,0,4,15,-1,4,3,16,17,-1,3,18,19,16,-1,6,12,20,21,-1,12,11,22,20,-1,11,15,23,22,-1,15,4,17,23,-1,17,16,24,-1,16,19,24,-1,19,25,24,-1,25,26,24,-1,26,21,24,-1,21,20,24,-1,20,22,24,-1,22,23,24,-1,23,17,24,-1,18,25,19,-1,26,6,21,-1,27,28,1,0,-1,28,29,30,31,-1,29,32,18,33,30,-1,34,9,35,-1,36,37,38,7,6,-1,34,39,10,9,-1,39,40,14,10,-1,40,27,0,14,-1,41,42,26,25,-1,42,43,26,-1,32,41,25,18,-1,43,36,6,26,-1,35,8,38,-1,12,8,13,-1,6,8,12,-1,38,8,7,-1,34,35,38,37,-1,33,5,30,-1,3,5,18,-1,18,5,33,-1,30,5,31,-1,28,31,1,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,44,47,51,-1,52,53,54,55,-1,53,56,57,54,-1,56,58,59,57,-1,58,52,55,59,-1,47,46,60,61,-1,46,49,62,60,-1,49,51,63,62,-1,51,47,61,63,-1,55,54,64,65,-1,54,57,66,64,-1,57,59,67,66,-1,59,55,65,67,-1,61,60,68,-1,60,62,68,-1,62,63,68,-1,63,61,68,-1,65,64,69,-1,64,66,69,-1,66,67,69,-1,67,65,69,-1}, 317);
IndexedFaceSet130.setCoordIndex(new int32_t[]{25,26,40,2,3,-1,2,40,42,-1,29,36,38,-1,30,31,11,9,37,-1,31,32,13,11,-1,32,25,3,13,-1,3,2,14,15,-1,2,35,16,14,-1,29,9,20,19,-1,9,11,21,20,-1,11,13,22,21,-1,13,3,15,22,-1,15,14,23,-1,14,16,23,-1,16,33,23,-1,33,34,23,-1,34,19,23,-1,19,20,23,-1,20,21,23,-1,21,22,23,-1,22,15,23,-1,35,33,16,-1,34,29,19,-1,0,1,26,25,-1,1,4,27,43,-1,4,5,35,41,27,-1,8,30,39,-1,7,6,28,36,29,-1,8,10,31,30,-1,10,12,32,31,-1,12,0,25,32,-1,17,24,34,33,-1,24,18,34,-1,5,17,33,35,-1,18,7,29,34,-1,39,38,28,-1,9,38,37,-1,29,38,9,-1,28,38,36,-1,8,39,28,6,-1,41,42,27,-1,2,42,35,-1,35,42,41,-1,27,42,43,-1,1,43,26,-1,44,45,53,52,-1,45,46,54,53,-1,46,47,55,54,-1,47,44,52,55,-1,48,49,57,56,-1,49,50,58,57,-1,50,51,59,58,-1,51,48,56,59,-1,52,53,61,60,-1,53,54,62,61,-1,54,55,63,62,-1,55,52,60,63,-1,56,57,65,64,-1,57,58,66,65,-1,58,59,67,66,-1,59,56,64,67,-1,60,61,68,-1,61,62,68,-1,62,63,68,-1,63,60,68,-1,64,65,69,-1,65,66,69,-1,66,67,69,-1,67,64,69,-1}, 317);
TextureCoordinate& TextureCoordinate131 =  TextureCoordinate();
TextureCoordinate131.setPoint(new float[]{-0.068547,0.872124,-0.020551,0.425052,0.059979,0.393538,0.148429,0.367115,0.198279,0.811704,0.066599,0.189525,0.904281,0.089649,1.0178,0.117728,1.02218,0.342888,1.0796,0.535033,1.1488,1.0005,0.82432,0.924406,0.904327,0.467078,1.02495,0.514031,-0.35648,1.28924,0.458452,1.16062,0.332759,0.281563,0.388526,0.500874,0.163623,0.004864,0.35103,0.060602,0.722095,0.339913,0.723582,0.111419,0.647314,0.546034,0.511997,0.619668,0.530739,0.22761,0.458273,-0.070208,0.63899,-0.045619,-0.148572,0.67691,-0.085115,0.283391,-0.038014,0.000047,-0.005182,0.044134,-0.013473,0.22309,0.138058,-0.029942,0.074425,0.013763,1.14582,0.375798,1.07153,0.360206,0.928249,0.053058,1.08942,0.088695,1.0595,0.138545,1.23813,0.78914,-0.410732,1.03121,0.457308,-0.126729,0.64525,-0.103044,0.64525,-0.103044,1.02619,0.490816,1.02445,0.381282,0.986364,0.278011,0.9959,0.590054,1.05445,0.390603,1.07755,0.288507,1.0599,0.504617,1.10032,0.625072,0.006724,0.254479,0.057637,0.234766,0.065423,0.179132,-0.041901,0.173796,0.053775,0.368203,0.051418,0.435719,0.00092,0.389516,-0.060689,0.47768,1.05807,0.337845,1.06611,0.556562,1.1102,0.313135,1.13038,0.575842,-0.003132,0.239253,-0.062702,0.211561,-0.009185,0.432311,-0.073194,0.453691,1.1199,0.446211,-0.093739,0.311262}, 140);
IndexedFaceSet130.setTexCoord(&TextureCoordinate131);

Coordinate& Coordinate132 =  Coordinate();
Coordinate132.setUSE(CString("ZopfGeoPoints"));
IndexedFaceSet130.setCoord(&Coordinate132);

Shape126.setGeometry(&IndexedFaceSet130);

Transform125.addChild(&Shape126);

Transform115.addChild(&Transform125);

Transform98.addChild(&Transform115);

Transform87.addChild(&Transform98);

Transform29.addChild(&Transform87);

Transform28.addChild(&Transform29);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("BeinL"));
Transform133.setCenter(new float[]{-0.198186,0.30347,-0.0111347});
Transform& Transform134 =  Transform();
Transform134.setDEF(CString("beinL"));
Shape& Shape135 =  Shape();
Appearance& Appearance136 =  Appearance();
Material& Material137 =  Material();
Material137.setUSE(CString("_3"));
Appearance136.addChild(&Material137);

Shape135.addChild(&Appearance136);

IndexedFaceSet& IndexedFaceSet138 =  IndexedFaceSet();
IndexedFaceSet138.setSolid(False);
IndexedFaceSet138.setConvex(False);
IndexedFaceSet138.setCreaseAngle(3.14159);
IndexedFaceSet138.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setPoint(new float[]{-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464}, 36);
IndexedFaceSet138.setCoord(&Coordinate139);

Shape135.setGeometry(&IndexedFaceSet138);

Transform134.addChild(&Shape135);

Transform133.addChild(&Transform134);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("fussL"));
Transform140.setCenter(new float[]{-0.198186,0.1544,-0.00509336});
Shape& Shape141 =  Shape();
Appearance& Appearance142 =  Appearance();
Material& Material143 =  Material();
Material143.setDEF(CString("_6"));
Material143.setAmbientIntensity(0.148936);
Material143.setDiffuseColor(new float[]{1,1,1});
Material143.setShininess(0);
Appearance142.addChild(&Material143);

ImageTexture& ImageTexture144 =  ImageTexture();
ImageTexture144.setDEF(CString("_7"));
ImageTexture144.setUrl(new CString[]{CString("shoes1.jpg")}, 1);
Appearance142.addChild(&ImageTexture144);

Shape141.addChild(&Appearance142);

IndexedFaceSet& IndexedFaceSet145 =  IndexedFaceSet();
IndexedFaceSet145.setSolid(False);
IndexedFaceSet145.setConvex(False);
IndexedFaceSet145.setCreaseAngle(3.14159);
IndexedFaceSet145.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate146 =  TextureCoordinate();
TextureCoordinate146.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet145.setTexCoord(&TextureCoordinate146);

Coordinate& Coordinate147 =  Coordinate();
Coordinate147.setPoint(new float[]{-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572}, 33);
IndexedFaceSet145.setCoord(&Coordinate147);

Shape141.setGeometry(&IndexedFaceSet145);

Transform140.addChild(&Shape141);

Transform133.addChild(&Transform140);

Transform28.addChild(&Transform133);

Transform& Transform148 =  Transform();
Transform148.setDEF(CString("BeinR"));
Transform148.setCenter(new float[]{0.196713,0.303457,0.0297802});
Transform& Transform149 =  Transform();
Transform149.setDEF(CString("beinR"));
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_3"));
Appearance151.addChild(&Material152);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet153 =  IndexedFaceSet();
IndexedFaceSet153.setSolid(False);
IndexedFaceSet153.setConvex(False);
IndexedFaceSet153.setCreaseAngle(3.14159);
IndexedFaceSet153.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619}, 36);
IndexedFaceSet153.setCoord(&Coordinate154);

Shape150.setGeometry(&IndexedFaceSet153);

Transform149.addChild(&Shape150);

Transform148.addChild(&Transform149);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("fussR"));
Transform155.setTranslation(new float[]{-1.49012e-8,-1.49012e-8,-5.58794e-9});
Transform155.setScale(new float[]{1,0.999999,0.999999});
Transform155.setCenter(new float[]{0.196713,0.157104,0.00995016});
Group& Group156 =  Group();
Group& Group157 =  Group();
Group157.setDEF(CString("fussL94"));
TimeSensor& TimeSensor158 =  TimeSensor();
TimeSensor158.setDEF(CString("Time_7"));
TimeSensor158.setEnabled(False);
TimeSensor158.setCycleInterval(9.4);
TimeSensor158.setLoop(True);
TimeSensor158.setStartTime(971799363.056414);
TimeSensor158.setStopTime(1);
Group157.addChild(&TimeSensor158);

Group156.addChild(&Group157);

OrientationInterpolator& OrientationInterpolator159 =  OrientationInterpolator();
OrientationInterpolator159.setDEF(CString("fussLRotationInterp"));
OrientationInterpolator159.setKey(new float[]{0,0.0106383,0.0319149,0.0425532,0.0638298,1}, 6);
OrientationInterpolator159.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.0923411,0,0,1,0,-1,0,0,0.0923411,0,0,1,0,0,0,1,0}, 24);
Group156.addChild(&OrientationInterpolator159);

Transform155.addChild(&Group156);

Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setUSE(CString("_6"));
Appearance161.addChild(&Material162);

ImageTexture& ImageTexture163 =  ImageTexture();
ImageTexture163.setUSE(CString("_7"));
Appearance161.addChild(&ImageTexture163);

Shape160.addChild(&Appearance161);

IndexedFaceSet& IndexedFaceSet164 =  IndexedFaceSet();
IndexedFaceSet164.setSolid(False);
IndexedFaceSet164.setConvex(False);
IndexedFaceSet164.setCreaseAngle(3.14159);
IndexedFaceSet164.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate165 =  TextureCoordinate();
TextureCoordinate165.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869}, 22);
IndexedFaceSet164.setTexCoord(&TextureCoordinate165);

Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012}, 33);
IndexedFaceSet164.setCoord(&Coordinate166);

Shape160.setGeometry(&IndexedFaceSet164);

Transform155.addChild(&Shape160);

Transform148.addChild(&Transform155);

Transform28.addChild(&Transform148);

Transform25.addChild(&Transform28);

Transform& Transform167 =  Transform();
Transform167.setDEF(CString("lightanim"));
Transform& Transform168 =  Transform();
Transform168.setDEF(CString("NegSFVec3f"));
ProtoInstance& ProtoInstance169 =  ProtoInstance();
ProtoInstance169.setName(CString("NegSFVec3f"));
ProtoInstance169.setDEF(CString("_8"));
Transform168.addChild(&ProtoInstance169);

Transform167.addChild(&Transform168);

Transform& Transform170 =  Transform();
Transform170.setDEF(CString("glowObj"));
Transform170.setTranslation(new float[]{-0.33413,0.504434,0.401033});
Group& Group171 =  Group();
Group& Group172 =  Group();
Group172.setDEF(CString("lightAnim"));
TimeSensor& TimeSensor173 =  TimeSensor();
TimeSensor173.setDEF(CString("Time_8"));
TimeSensor173.setEnabled(False);
TimeSensor173.setCycleInterval(10);
TimeSensor173.setLoop(True);
TimeSensor173.setStartTime(971799363.056414);
TimeSensor173.setStopTime(1);
Group172.addChild(&TimeSensor173);

Group171.addChild(&Group172);

PositionInterpolator& PositionInterpolator174 =  PositionInterpolator();
PositionInterpolator174.setDEF(CString("glowObjTranslationInterp"));
PositionInterpolator174.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.1625,0.175,0.1875,0.2,0.2125,0.225,0.2375,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.6125,0.625,0.6375,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 95);
PositionInterpolator174.setKeyValue(new float[]{-0.33413,0.504434,0.401033,-0.366685,0.597163,0.401033,-0.402491,0.688294,0.401033,-0.436671,0.780225,0.401033,-0.464348,0.87535,0.401033,-0.480644,0.976067,0.401033,-0.493855,1.09228,0.401033,-0.507232,1.2224,0.401033,-0.508332,1.35156,0.401033,-0.48471,1.4649,0.401033,-0.423924,1.54755,0.401033,-0.303983,1.59897,0.401033,-0.133183,1.62907,0.401033,0.0554915,1.63866,0.401033,0.229055,1.62857,0.401033,0.354524,1.59959,0.401033,0.438165,1.51958,0.401033,0.47502,1.39778,0.401033,0.483079,1.26852,0.401033,0.480335,1.16611,0.401033,0.453936,1.10362,0.401033,0.400168,1.06144,0.401033,0.350736,1.02488,0.401033,0.337341,0.97925,0.401033,0.371542,0.93221,0.401033,0.43594,0.880849,0.401033,0.509691,0.827639,0.401033,0.571948,0.77505,0.401033,0.601868,0.725554,0.401033,0.576427,0.639923,0.401033,0.509146,0.537981,0.401033,0.439099,0.475437,0.401033,0.405357,0.507998,0.401033,0.424248,0.642987,0.401033,0.471532,0.858511,0.401033,0.526969,1.10724,0.401033,0.57032,1.34185,0.401033,0.581347,1.51502,0.401033,0.540464,1.6423,0.401033,0.462611,1.71775,0.401033,0.370422,1.75673,0.401033,0.28653,1.77466,0.401033,0.230004,1.76519,0.401033,0.174951,1.72786,0.401033,0.119885,1.67931,0.401033,0.0633189,1.6362,0.401033,0.00376511,1.6152,0.401033,-0.0616264,1.62909,0.401033,-0.131865,1.66678,0.401033,-0.202673,1.70906,0.401033,-0.269776,1.73674,0.401033,-0.328897,1.73063,0.401033,-0.380457,1.67929,0.401033,-0.427308,1.59551,0.401033,-0.468816,1.49646,0.401033,-0.504349,1.39926,0.401033,-0.533274,1.32108,0.401033,-0.562405,1.25072,0.401033,-0.583337,1.19383,0.401033,-0.591667,1.14555,0.401033,-0.582988,1.10103,0.401033,-0.552301,1.06948,0.401033,-0.500875,1.04349,0.401033,-0.4449,1.01989,0.401033,-0.400566,0.99549,0.401033,-0.384061,0.967107,0.401033,-0.424511,0.926628,0.401033,-0.511123,0.876176,0.401033,-0.60021,0.82792,0.401033,-0.648084,0.794032,0.401033,-0.611058,0.786681,0.401033,-0.448253,0.822071,0.401033,-0.188794,0.892089,0.401033,0.106001,0.972429,0.401033,0.374813,1.03879,0.401033,0.556325,1.06686,0.401033,0.649525,1.03346,0.401033,0.695294,0.954786,0.401033,0.695145,0.865624,0.401033,0.65059,0.800753,0.401033,0.563142,0.794955,0.401033,0.340559,0.915958,0.401033,0.0141816,1.12557,0.401033,-0.310395,1.32618,0.401033,-0.527574,1.42018,0.401033,-0.589646,1.38078,0.401033,-0.588062,1.27176,0.401033,-0.548995,1.12644,0.401034,-0.498622,0.978172,0.401034,-0.463118,0.86029,0.401034,-0.44145,0.776061,0.401034,-0.416169,0.703257,0.401034,-0.388823,0.636983,0.401033,-0.36096,0.572341,0.401033,-0.33413,0.504434,0.401033}, 285);
Group171.addChild(&PositionInterpolator174);

Transform170.addChild(&Group171);

Transform& Transform175 =  Transform();
Transform175.setScale(new float[]{0.354068,0.354068,0.354068});
Shape& Shape176 =  Shape();
Appearance& Appearance177 =  Appearance();
ImageTexture& ImageTexture178 =  ImageTexture();
ImageTexture178.setUrl(new CString[]{CString("bp-glow.png")}, 1);
Appearance177.addChild(&ImageTexture178);

Shape176.addChild(&Appearance177);

IndexedFaceSet& IndexedFaceSet179 =  IndexedFaceSet();
IndexedFaceSet179.setSolid(False);
IndexedFaceSet179.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate180 =  TextureCoordinate();
TextureCoordinate180.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet179.setTexCoord(&TextureCoordinate180);

Coordinate& Coordinate181 =  Coordinate();
Coordinate181.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet179.setCoord(&Coordinate181);

Shape176.setGeometry(&IndexedFaceSet179);

Transform175.addChild(&Shape176);

Transform170.addChild(&Transform175);

Transform167.addChild(&Transform170);

Transform25.addChild(&Transform167);

DirectionalLight& DirectionalLight182 =  DirectionalLight();
DirectionalLight182.setDEF(CString("Light1_1"));
DirectionalLight182.setOn(False);
DirectionalLight182.setColor(new float[]{0.984854,1,0.86639});
DirectionalLight182.setAmbientIntensity(0.83);
DirectionalLight182.setDirection(new float[]{-0.290119,-0.956991,6.55651e-7});
Transform25.addChild(&DirectionalLight182);

Transform& Transform183 =  Transform();
Transform183.setDEF(CString("shadow"));
Transform183.setTranslation(new float[]{0.0606028,0,0});
Transform183.setCenter(new float[]{0,0.00748548,0});
Group& Group184 =  Group();
Group& Group185 =  Group();
Group185.setUSE(CString("lightAnim"));
Group184.addChild(&Group185);

PositionInterpolator& PositionInterpolator186 =  PositionInterpolator();
PositionInterpolator186.setDEF(CString("shadowTranslationInterp"));
PositionInterpolator186.setKey(new float[]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.161111,0.172222,0.183333,0.194444,0.205556,0.216667,0.227778,0.238889,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.561111,0.572222,0.583333,0.594444,0.605555,0.616666,0.627778,0.638889,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1}, 96);
PositionInterpolator186.setKeyValue(new float[]{0.0606028,0,0,0.0620456,0,0,0.0657328,0,0,0.0707025,0,0,0.0759928,0,0,0.0806419,0,0,0.0836878,0,0,0.0841687,0,0,0.0811228,0,0,0.0735881,0,0,0.0606028,0,0,0.0280673,0,0,-0.0273849,0,0,-0.0906162,0,0,-0.146489,0,0,-0.179866,0,0,-0.194758,0,0,-0.20256,0,0,-0.204902,0,0,-0.203415,0,0,-0.199731,0,0,-0.195481,0,0,-0.192295,0,0,-0.191805,0,0,-0.195641,0,0,-0.204941,3.57627e-10,0.00229102,-0.219377,1.07288e-9,0.00687306,-0.236419,1.60932e-9,0.0103096,-0.253537,1.43051e-9,0.00916412,-0.268201,0,0,-0.285397,-5.06405e-9,-0.0324412,-0.302762,-1.25728e-8,-0.0805438,-0.316192,-1.93831e-8,-0.124172,-0.321581,-2.23517e-8,-0.143189,-0.319259,-2.03848e-8,-0.130588,-0.31248,-1.55568e-8,-0.0996596,-0.301524,-9.47714e-9,-0.0607123,-0.286671,-3.75511e-9,-0.0240559,-0.268201,0,0,-0.235508,1.5716e-9,0.010068,-0.193879,1.39698e-9,0.00894931,-0.152292,5.2387e-10,0.003356,-0.119726,0,0,-0.10026,0,0,-0.0819169,0,0,-0.0646286,0,0,-0.0483273,0,0,-0.0329454,0,0,-0.0184151,0,0,-0.0046687,0,0,0.00836163,0,0,0.0207436,0,0,0.0325451,0,0,0.0452685,-1.63523e-10,-0.0000278565,0.0576262,-5.72332e-10,-0.000097498,0.0693452,-1.10378e-9,-0.000188032,0.0801522,-1.63524e-9,-0.000278566,0.0897741,-2.04405e-9,-0.000348208,0.0979377,-2.20758e-9,-0.000376065,0.10437,-2.00318e-9,-0.000341246,0.108797,-1.30821e-9,-0.000222857,0.110947,0,0,0.10567,2.92062e-9,0.000497534,0.091483,7.86779e-9,0.00134029,0.0733361,1.35898e-8,0.00231505,0.0561786,1.8835e-8,0.00320858,0.0449604,2.23517e-8,0.00380766,0.0445898,2.37822e-8,0.00405135,0.0517671,2.3961e-8,0.00408181,0.0591297,2.34246e-8,0.00399043,0.059315,2.27093e-8,0.00386858,0.0449604,2.23517e-8,0.00380766,0.00871627,2.33054e-8,0.00577162,-0.044509,2.52127e-8,0.00969954,-0.103691,2.66432e-8,0.0126455,-0.157805,2.61664e-8,0.0116635,-0.195827,2.23517e-8,0.00380766,-0.219561,1.32918e-8,-0.0180579,-0.236356,-5.95957e-11,-0.0519692,-0.243507,-1.48415e-8,-0.0872225,-0.238305,-2.81929e-8,-0.113114,-0.218046,-3.72529e-8,-0.11894,-0.154854,-4.14438e-8,-0.085552,-0.0596362,-4.09782e-8,-0.0229158,0.0336579,-3.86499e-8,0.0418322,0.0910799,-3.72529e-8,0.0815556,0.0972784,-3.78489e-8,0.0864236,0.0792818,-3.9041e-8,0.0765137,0.0498091,-3.99351e-8,0.0586527,0.0215791,-3.96371e-8,0.0396676,0.00731076,-3.72529e-8,0.026385,0.00919724,-3.21865e-8,0.0192657,0.0187591,-2.5034e-8,0.0137584,0.032707,-1.66893e-8,0.0091723,0.0477513,-8.04667e-9,0.00481645,0.0606028,0,0}, 288);
Group184.addChild(&PositionInterpolator186);

Transform183.addChild(&Group184);

Transform& Transform187 =  Transform();
Transform187.setTranslation(new float[]{0,0.00748548,0});
Transform187.setRotation(new float[]{1,0,0,4.71239});
Transform187.setScale(new float[]{1.53335,1.53335,1.53335});
Shape& Shape188 =  Shape();
Appearance& Appearance189 =  Appearance();
ImageTexture& ImageTexture190 =  ImageTexture();
ImageTexture190.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance189.addChild(&ImageTexture190);

Shape188.addChild(&Appearance189);

IndexedFaceSet& IndexedFaceSet191 =  IndexedFaceSet();
IndexedFaceSet191.setSolid(False);
IndexedFaceSet191.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate192 =  TextureCoordinate();
TextureCoordinate192.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet191.setTexCoord(&TextureCoordinate192);

Coordinate& Coordinate193 =  Coordinate();
Coordinate193.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet191.setCoord(&Coordinate193);

Shape188.setGeometry(&IndexedFaceSet191);

Transform187.addChild(&Shape188);

Transform183.addChild(&Transform187);

Transform25.addChild(&Transform183);

LOD23.addChildren(&Transform25);

Transform& Transform194 =  Transform();
Transform194.setDEF(CString("elsemed"));
Transform& Transform195 =  Transform();
Transform195.setDEF(CString("_9"));
Transform& Transform196 =  Transform();
Transform196.setDEF(CString("augen"));
Transform196.setTranslation(new float[]{-0.00000267476,-0.0000300407,-0.0000121295});
Transform196.setScale(new float[]{0.999983,0.99994,0.99996});
Transform196.setScaleOrientation(new float[]{0.389658,0.920197,-0.0374716,0.475181});
Transform196.setCenter(new float[]{-0.015762,1.38316,0.30789});
Shape& Shape197 =  Shape();
Appearance& Appearance198 =  Appearance();
Material& Material199 =  Material();
Material199.setAmbientIntensity(0.255319);
Material199.setDiffuseColor(new float[]{0,0,0});
Material199.setShininess(0);
Appearance198.addChild(&Material199);

Shape197.addChild(&Appearance198);

IndexedFaceSet& IndexedFaceSet200 =  IndexedFaceSet();
IndexedFaceSet200.setSolid(False);
IndexedFaceSet200.setConvex(False);
IndexedFaceSet200.setCreaseAngle(1.60186);
IndexedFaceSet200.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 48);
IndexedFaceSet200.setCoord(&Coordinate201);

Shape197.setGeometry(&IndexedFaceSet200);

Transform196.addChild(&Shape197);

Transform195.addChild(&Transform196);

Transform& Transform202 =  Transform();
Transform202.setUSE(CString("_5"));
Transform195.addChild(&Transform202);

Transform& Transform203 =  Transform();
Transform203.setDEF(CString("arm"));
Transform203.setTranslation(new float[]{-8.9407e-8,0.00000441074,1.21072e-8});
Transform203.setScale(new float[]{1,0.999988,0.999988});
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setAmbientIntensity(0.255319);
Material206.setDiffuseColor(new float[]{1,0.600935,0.355765});
Material206.setShininess(0);
Appearance205.addChild(&Material206);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet207 =  IndexedFaceSet();
IndexedFaceSet207.setSolid(False);
IndexedFaceSet207.setConvex(False);
IndexedFaceSet207.setCreaseAngle(1.83783);
IndexedFaceSet207.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1,18,19,20,21,-1,19,22,23,20,-1,22,24,25,23,-1,24,26,27,25,-1,26,28,29,27,-1,28,18,21,29,-1,21,20,30,31,-1,20,23,32,30,-1,23,25,33,32,-1,25,27,34,33,-1,27,29,35,34,-1,29,21,31,35,-1,36,37,38,-1,36,38,39,-1,37,36,39,-1,40,37,39,-1,41,42,39,-1,39,42,40,-1,40,42,43,-1,42,44,43,-1,37,40,45,-1,40,43,45,-1,37,45,46,-1,46,45,47,-1,43,44,48,-1,44,49,48,-1,44,47,49,-1,47,50,49,-1,48,49,51,-1,49,50,51,-1,43,48,51,-1,47,51,50,-1,45,43,51,-1,45,51,47,-1,41,39,52,-1,38,52,39,-1,41,52,42,-1,42,53,44,-1,44,53,47,-1,53,46,47,-1,46,54,37,-1,54,46,53,-1,37,54,38,-1,53,42,55,-1,42,52,55,-1,55,54,53,-1,55,52,56,-1,57,56,52,-1,38,58,52,-1,52,58,57,-1,58,38,59,-1,38,54,59,-1,54,55,59,-1,55,56,59,-1,56,60,59,-1,56,61,60,-1,57,61,56,-1,57,62,61,-1,58,62,57,-1,58,59,62,-1,60,61,63,-1,61,62,63,-1,59,60,63,-1,59,63,62,-1,64,65,66,-1,64,66,67,-1,65,64,67,-1,68,65,67,-1,69,70,67,-1,67,70,68,-1,68,70,71,-1,70,72,71,-1,65,68,73,-1,68,71,73,-1,65,73,74,-1,74,73,75,-1,71,72,76,-1,72,77,76,-1,72,75,77,-1,75,78,77,-1,76,77,79,-1,77,78,79,-1,71,76,79,-1,75,79,78,-1,73,71,79,-1,73,79,75,-1,69,67,80,-1,66,80,67,-1,69,80,70,-1,70,81,72,-1,72,81,75,-1,81,74,75,-1,74,82,65,-1,82,74,81,-1,65,82,66,-1,81,70,83,-1,70,80,83,-1,83,82,81,-1,83,80,84,-1,85,84,80,-1,66,86,80,-1,80,86,85,-1,86,66,87,-1,66,82,87,-1,82,83,87,-1,83,84,87,-1,84,88,87,-1,84,89,88,-1,85,89,84,-1,85,90,89,-1,86,90,85,-1,86,87,90,-1,88,89,91,-1,89,90,91,-1,87,88,91,-1,87,91,90,-1,92,93,94,95,-1,93,96,97,94,-1,96,98,99,97,-1,98,100,101,99,-1,100,102,103,101,-1,102,92,95,103,-1,104,105,106,107,-1,105,108,109,106,-1,108,110,111,109,-1,110,112,113,111,-1,112,114,115,113,-1,114,104,107,115,-1,117,120,121,118,-1,119,118,124,-1,118,121,125,124,-1,123,125,121,-1,126,127,128,129,-1,127,130,131,128,-1,132,133,134,135,-1,133,136,137,134,-1,136,138,139,137,-1,138,140,141,139,-1,140,142,143,141,-1,142,144,145,143,-1,144,146,147,145,-1,146,148,149,147,-1,148,132,135,149,-1,150,151,133,132,-1,151,152,136,133,-1,153,154,140,138,-1,155,156,144,142,-1,156,157,146,144,-1,157,158,148,146,-1,158,150,132,148,-1,159,135,134,-1,159,149,135,-1,159,134,137,-1,159,147,149,-1,159,137,139,-1,159,145,147,-1,159,139,141,-1,159,143,145,-1,159,141,143,-1,160,161,162,163,-1,164,160,163,165,-1,116,117,119,-1,117,118,119,-1,120,123,121,-1,120,122,123,-1,154,142,140,-1,154,155,142,-1,152,153,136,-1,153,138,136,-1}, 782);
Coordinate& Coordinate208 =  Coordinate();
Coordinate208.setPoint(new float[]{-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742,0.371632,0.51953,-0.0174804,0.416478,0.5272,-0.0152145,0.401579,0.737481,-0.0159672,0.356729,0.729809,-0.0182334,0.436911,0.531038,0.0253191,0.422012,0.741321,0.0245662,0.412496,0.5272,0.0635862,0.397597,0.737481,0.0628337,0.367651,0.51953,0.0613203,0.352747,0.729809,0.0605675,0.347215,0.51569,0.0207869,0.332314,0.725973,0.0200338,0.342185,0.9411,-0.0132199,0.303861,0.934544,-0.0151563,0.359644,0.944377,0.0214146,0.338782,0.9411,0.0541129,0.300459,0.934544,0.0521766,0.282999,0.931265,0.0175419,0.439239,0.562616,0.104029,0.480247,0.455896,0.106101,0.385697,0.541994,0.101323,0.445969,0.562616,-0.0291655,0.486977,0.455896,-0.0270934,0.392428,0.541994,-0.0318708,0.433433,0.435274,-0.0297989,0.46109,0.36634,-0.0270675,0.431046,0.38519,-0.0285858,0.454494,0.36634,0.103466,0.426705,0.435274,0.103396,0.42445,0.38519,0.101948,0.406836,0.339644,-0.0166598,0.390122,0.369792,-0.0175043,0.384904,0.369792,0.0857654,0.401618,0.339643,0.0866099,0.3899,0.541994,0.0181453,0.430908,0.435274,0.0202174,0.409609,0.479758,0.102532,0.413812,0.479758,0.0193535,0.369843,0.472166,0.0298096,0.327615,0.479006,0.0276758,0.324603,0.479006,0.0872905,0.366831,0.472166,0.0894243,0.348305,0.40977,0.0455304,0.32291,0.406297,0.0442472,0.321108,0.406297,0.0799203,0.346503,0.40977,0.0812035,-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339632,-0.0575858,-0.38637,0.36978,-0.0567413,-0.391589,0.36978,0.0465314,-0.408302,0.339632,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406286,0.0114726,-0.327528,0.406286,0.0471469,-0.352923,0.409757,0.0458637,-0.164513,0.106479,-0.0435971,-0.210011,0.106479,-0.0458962,-0.210011,0.316275,-0.0458962,-0.164513,0.316275,-0.0435971,-0.234751,0.106479,-0.00764266,-0.234751,0.316275,-0.00764266,-0.213993,0.106479,0.0329098,-0.213993,0.316275,0.0329098,-0.168495,0.106479,0.0352088,-0.168495,0.316275,0.0352088,-0.143755,0.106479,-0.00304469,-0.143755,0.316275,-0.00304469,0.168078,0.106479,-0.0267915,0.213576,0.106479,-0.0244925,0.213576,0.316275,-0.0244925,0.168078,0.316275,-0.0267915,0.234334,0.106479,0.0160599,0.234334,0.316275,0.01606,0.209594,0.106479,0.0543134,0.209594,0.316275,0.0543134,0.164096,0.106479,0.0520144,0.164096,0.316275,0.0520144,0.143338,0.106479,0.0114619,0.143338,0.316275,0.011462,-0.34079,1.21599,0.175993,-0.148843,1.18853,0.351654,-0.130318,1.356,0.332565,-0.296536,1.38096,0.180226,0.112646,1.18853,0.364866,0.0961394,1.356,0.344007,0.321325,1.21599,0.209449,0.276869,1.38096,0.209197,-0.0769216,1.49601,0.225366,0.0538224,1.49601,0.231971,-0.148843,1.18853,0.351654,-0.34079,1.21599,0.175993,0.321325,1.21599,0.209449,0.112646,1.18853,0.364866,-0.373363,1.26098,-0.0802187,0.379564,1.26098,-0.0421857,-0.185078,1.185,-0.255713,-0.299234,1.15427,-0.0816111,-0.171806,1.07361,-0.0660556,-0.105896,1.09135,-0.166574,-0.273049,1.11933,0.124254,-0.156688,1.05343,0.0528013,-0.118775,1.09653,0.265553,-0.0676163,1.04026,0.134379,0.0914055,1.09653,0.276171,0.053732,1.04026,0.14051,0.25914,1.11932,0.15114,0.150574,1.05343,0.0683244,0.305946,1.15427,-0.0510372,0.177599,1.07361,-0.0484037,0.209923,1.185,-0.235756,0.122159,1.09135,-0.155052,0.0160036,1.19714,-0.316588,0.0101984,1.09836,-0.20172,-0.214726,1.29615,-0.275208,-0.346539,1.26067,-0.0741711,-0.316304,1.22031,0.163539,-0.138161,1.19398,0.326696,0.104528,1.19398,0.338957,0.298214,1.22031,0.194585,0.35226,1.26067,-0.0388675,0.241386,1.29615,-0.252165,0.0174646,1.31016,-0.345501,0.0016046,1.04027,-0.031671,0.298214,1.22031,0.194585,0.104528,1.19398,0.338957,-0.138161,1.19398,0.326696,-0.316304,1.22031,0.163539,0.35226,1.26067,-0.0388675,-0.346539,1.26067,-0.0741711}, 498);
IndexedFaceSet207.setCoord(&Coordinate208);

Shape204.setGeometry(&IndexedFaceSet207);

Transform203.addChild(&Shape204);

Transform195.addChild(&Transform203);

Transform& Transform209 =  Transform();
Transform209.setDEF(CString("fuss"));
Transform209.setTranslation(new float[]{-1.49012e-8,-1.49012e-8,-5.58794e-9});
Transform209.setScale(new float[]{1,0.999999,0.999999});
Transform209.setCenter(new float[]{0.196713,0.157104,0.00995016});
Shape& Shape210 =  Shape();
Appearance& Appearance211 =  Appearance();
Material& Material212 =  Material();
Material212.setAmbientIntensity(0.148936);
Material212.setDiffuseColor(new float[]{1,1,1});
Material212.setShininess(0);
Appearance211.addChild(&Material212);

ImageTexture& ImageTexture213 =  ImageTexture();
ImageTexture213.setUSE(CString("_7"));
Appearance211.addChild(&ImageTexture213);

Shape210.addChild(&Appearance211);

IndexedFaceSet& IndexedFaceSet214 =  IndexedFaceSet();
IndexedFaceSet214.setSolid(False);
IndexedFaceSet214.setConvex(False);
IndexedFaceSet214.setCreaseAngle(3.14159);
IndexedFaceSet214.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1,11,12,13,-1,14,11,13,15,-1,13,12,16,17,-1,12,11,18,16,-1,11,14,19,18,-1,14,15,20,19,-1,15,13,17,20,-1,17,16,21,-1,16,18,21,-1,20,17,21,-1,18,19,21,-1,19,20,21,-1}, 108);
TextureCoordinate& TextureCoordinate215 =  TextureCoordinate();
TextureCoordinate215.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869,0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 44);
IndexedFaceSet214.setTexCoord(&TextureCoordinate215);

Coordinate& Coordinate216 =  Coordinate();
Coordinate216.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012,-0.0762838,0.0261304,-0.0433776,-0.12539,0.0261304,0.148428,-0.276072,0.0261304,0.207848,-0.196614,0.0261304,-0.102499,-0.320089,0.0261304,0.0527677,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527677,-0.182733,0.199669,-0.0154572}, 66);
IndexedFaceSet214.setCoord(&Coordinate216);

Shape210.setGeometry(&IndexedFaceSet214);

Transform209.addChild(&Shape210);

Transform195.addChild(&Transform209);

Transform& Transform217 =  Transform();
Transform217.setDEF(CString("wanst"));
Transform217.setTranslation(new float[]{4.65661e-10,0.00000190739,2.3749e-8});
Transform217.setScale(new float[]{1,0.999998,0.999998});
Shape& Shape218 =  Shape();
Appearance& Appearance219 =  Appearance();
Material& Material220 =  Material();
Material220.setAmbientIntensity(0.148936);
Material220.setDiffuseColor(new float[]{1,1,1});
Material220.setShininess(0);
Appearance219.addChild(&Material220);

ImageTexture& ImageTexture221 =  ImageTexture();
ImageTexture221.setUSE(CString("_2"));
Appearance219.addChild(&ImageTexture221);

Shape218.addChild(&Appearance219);

IndexedFaceSet& IndexedFaceSet222 =  IndexedFaceSet();
IndexedFaceSet222.setConvex(False);
IndexedFaceSet222.setCreaseAngle(3.14159);
IndexedFaceSet222.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate223 =  TextureCoordinate();
TextureCoordinate223.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet222.setTexCoord(&TextureCoordinate223);

Coordinate& Coordinate224 =  Coordinate();
Coordinate224.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet222.setCoord(&Coordinate224);

Shape218.setGeometry(&IndexedFaceSet222);

Transform217.addChild(&Shape218);

Transform195.addChild(&Transform217);

Transform194.addChild(&Transform195);

DirectionalLight& DirectionalLight225 =  DirectionalLight();
DirectionalLight225.setDEF(CString("Light2"));
DirectionalLight225.setIntensity(0.398058);
DirectionalLight225.setAmbientIntensity(0.32);
DirectionalLight225.setDirection(new float[]{-0.0936099,-0.634248,-0.767442});
Transform194.addChild(&DirectionalLight225);

Transform& Transform226 =  Transform();
Transform226.setTranslation(new float[]{-0.00080239,0.0334261,-0.00961764});
Transform226.setRotation(new float[]{-0.0457164,-1.19215e-8,0.998954,3.14159});
Transform226.setScale(new float[]{1,1,0.999999});
Transform226.setScaleOrientation(new float[]{-0.00000258262,1,-0.0000427738,0.00834376});
Transform& Transform227 =  Transform();
Transform227.setUSE(CString("_9"));
Transform226.addChild(&Transform227);

Transform194.addChild(&Transform226);

LOD23.addChildren(&Transform194);

Transform& Transform228 =  Transform();
LOD23.addChildren(&Transform228);

Transform22.addChild(&LOD23);

Collision21.addChildren(&Transform22);

Transform20.addChild(&Collision21);

Billboard19.addChild(&Transform20);

Transform18.addChild(&Billboard19);

Transform17.addChild(&Transform18);

Scene7.addChild(&Transform17);

ROUTE& ROUTE229 =  ROUTE();
ROUTE229.setFromNode(CString("_1"));
ROUTE229.setFromField(CString("isActive"));
ROUTE229.setToNode(CString("Time_1"));
ROUTE229.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE229);

ROUTE& ROUTE230 =  ROUTE();
ROUTE230.setFromNode(CString("_1"));
ROUTE230.setFromField(CString("enterTime"));
ROUTE230.setToNode(CString("Time_1"));
ROUTE230.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE230);

ROUTE& ROUTE231 =  ROUTE();
ROUTE231.setFromNode(CString("Time_1"));
ROUTE231.setFromField(CString("fraction_changed"));
ROUTE231.setToNode(CString("BodyORotationInterp"));
ROUTE231.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE231);

ROUTE& ROUTE232 =  ROUTE();
ROUTE232.setFromNode(CString("Time_1"));
ROUTE232.setFromField(CString("fraction_changed"));
ROUTE232.setToNode(CString("ArmRRotationInterp"));
ROUTE232.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE232);

ROUTE& ROUTE233 =  ROUTE();
ROUTE233.setFromNode(CString("Time_1"));
ROUTE233.setFromField(CString("fraction_changed"));
ROUTE233.setToNode(CString("ArmLRotationInterp"));
ROUTE233.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE233);

ROUTE& ROUTE234 =  ROUTE();
ROUTE234.setFromNode(CString("Time_1"));
ROUTE234.setFromField(CString("fraction_changed"));
ROUTE234.setToNode(CString("headORotationInterp"));
ROUTE234.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE234);

ROUTE& ROUTE235 =  ROUTE();
ROUTE235.setFromNode(CString("_1"));
ROUTE235.setFromField(CString("isActive"));
ROUTE235.setToNode(CString("Time_2"));
ROUTE235.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE235);

ROUTE& ROUTE236 =  ROUTE();
ROUTE236.setFromNode(CString("_1"));
ROUTE236.setFromField(CString("enterTime"));
ROUTE236.setToNode(CString("Time_2"));
ROUTE236.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE236);

ROUTE& ROUTE237 =  ROUTE();
ROUTE237.setFromNode(CString("Time_2"));
ROUTE237.setFromField(CString("fraction_changed"));
ROUTE237.setToNode(CString("armRRotationInterp"));
ROUTE237.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE237);

ROUTE& ROUTE238 =  ROUTE();
ROUTE238.setFromNode(CString("armRRotationInterp"));
ROUTE238.setFromField(CString("value_changed"));
ROUTE238.setToNode(CString("armR"));
ROUTE238.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE238);

ROUTE& ROUTE239 =  ROUTE();
ROUTE239.setFromNode(CString("ArmRRotationInterp"));
ROUTE239.setFromField(CString("value_changed"));
ROUTE239.setToNode(CString("ArmR"));
ROUTE239.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE239);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromNode(CString("_1"));
ROUTE240.setFromField(CString("isActive"));
ROUTE240.setToNode(CString("Time_3"));
ROUTE240.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromNode(CString("_1"));
ROUTE241.setFromField(CString("enterTime"));
ROUTE241.setToNode(CString("Time_3"));
ROUTE241.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE241);

ROUTE& ROUTE242 =  ROUTE();
ROUTE242.setFromNode(CString("Time_3"));
ROUTE242.setFromField(CString("fraction_changed"));
ROUTE242.setToNode(CString("armLRotationInterp"));
ROUTE242.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE242);

ROUTE& ROUTE243 =  ROUTE();
ROUTE243.setFromNode(CString("_1"));
ROUTE243.setFromField(CString("isActive"));
ROUTE243.setToNode(CString("Time_4"));
ROUTE243.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE243);

ROUTE& ROUTE244 =  ROUTE();
ROUTE244.setFromNode(CString("_1"));
ROUTE244.setFromField(CString("enterTime"));
ROUTE244.setToNode(CString("Time_4"));
ROUTE244.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE244);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromNode(CString("Time_4"));
ROUTE245.setFromField(CString("fraction_changed"));
ROUTE245.setToNode(CString("handLRotationInterp"));
ROUTE245.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromNode(CString("handLRotationInterp"));
ROUTE246.setFromField(CString("value_changed"));
ROUTE246.setToNode(CString("handL"));
ROUTE246.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromNode(CString("armLRotationInterp"));
ROUTE247.setFromField(CString("value_changed"));
ROUTE247.setToNode(CString("armL"));
ROUTE247.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromNode(CString("ArmLRotationInterp"));
ROUTE248.setFromField(CString("value_changed"));
ROUTE248.setToNode(CString("ArmL"));
ROUTE248.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromNode(CString("_1"));
ROUTE249.setFromField(CString("isActive"));
ROUTE249.setToNode(CString("Time_5"));
ROUTE249.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromNode(CString("_1"));
ROUTE250.setFromField(CString("enterTime"));
ROUTE250.setToNode(CString("Time_5"));
ROUTE250.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromNode(CString("Time_5"));
ROUTE251.setFromField(CString("fraction_changed"));
ROUTE251.setToNode(CString("HeadRotationInterp"));
ROUTE251.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromNode(CString("_1"));
ROUTE252.setFromField(CString("isActive"));
ROUTE252.setToNode(CString("Time_6"));
ROUTE252.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromNode(CString("_1"));
ROUTE253.setFromField(CString("enterTime"));
ROUTE253.setToNode(CString("Time_6"));
ROUTE253.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromNode(CString("Time_6"));
ROUTE254.setFromField(CString("fraction_changed"));
ROUTE254.setToNode(CString("augenDiffuseColorInterp"));
ROUTE254.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromNode(CString("augenDiffuseColorInterp"));
ROUTE255.setFromField(CString("value_changed"));
ROUTE255.setToNode(CString("_4"));
ROUTE255.setToField(CString("set_diffuseColor"));
Scene7.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromNode(CString("headORotationInterp"));
ROUTE256.setFromField(CString("value_changed"));
ROUTE256.setToNode(CString("headO"));
ROUTE256.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromNode(CString("HeadRotationInterp"));
ROUTE257.setFromField(CString("value_changed"));
ROUTE257.setToNode(CString("Head"));
ROUTE257.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE257);

ROUTE& ROUTE258 =  ROUTE();
ROUTE258.setFromNode(CString("BodyORotationInterp"));
ROUTE258.setFromField(CString("value_changed"));
ROUTE258.setToNode(CString("BodyO"));
ROUTE258.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromNode(CString("_1"));
ROUTE259.setFromField(CString("isActive"));
ROUTE259.setToNode(CString("Time_7"));
ROUTE259.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE259);

ROUTE& ROUTE260 =  ROUTE();
ROUTE260.setFromNode(CString("_1"));
ROUTE260.setFromField(CString("enterTime"));
ROUTE260.setToNode(CString("Time_7"));
ROUTE260.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE260);

ROUTE& ROUTE261 =  ROUTE();
ROUTE261.setFromNode(CString("Time_7"));
ROUTE261.setFromField(CString("fraction_changed"));
ROUTE261.setToNode(CString("fussLRotationInterp"));
ROUTE261.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE261);

ROUTE& ROUTE262 =  ROUTE();
ROUTE262.setFromNode(CString("fussLRotationInterp"));
ROUTE262.setFromField(CString("value_changed"));
ROUTE262.setToNode(CString("fussR"));
ROUTE262.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE262);

ROUTE& ROUTE263 =  ROUTE();
ROUTE263.setFromNode(CString("glowObjTranslationInterp"));
ROUTE263.setFromField(CString("value_changed"));
ROUTE263.setToNode(CString("_8"));
ROUTE263.setToField(CString("set_SFVec3f"));
Scene7.addChild(&ROUTE263);

ROUTE& ROUTE264 =  ROUTE();
ROUTE264.setFromNode(CString("_1"));
ROUTE264.setFromField(CString("isActive"));
ROUTE264.setToNode(CString("Time_8"));
ROUTE264.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE264);

ROUTE& ROUTE265 =  ROUTE();
ROUTE265.setFromNode(CString("_1"));
ROUTE265.setFromField(CString("enterTime"));
ROUTE265.setToNode(CString("Time_8"));
ROUTE265.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE265);

ROUTE& ROUTE266 =  ROUTE();
ROUTE266.setFromNode(CString("Time_8"));
ROUTE266.setFromField(CString("fraction_changed"));
ROUTE266.setToNode(CString("glowObjTranslationInterp"));
ROUTE266.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE266);

ROUTE& ROUTE267 =  ROUTE();
ROUTE267.setFromNode(CString("glowObjTranslationInterp"));
ROUTE267.setFromField(CString("value_changed"));
ROUTE267.setToNode(CString("glowObj"));
ROUTE267.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE267);

ROUTE& ROUTE268 =  ROUTE();
ROUTE268.setFromNode(CString("_1"));
ROUTE268.setFromField(CString("isActive"));
ROUTE268.setToNode(CString("Light1_1"));
ROUTE268.setToField(CString("set_on"));
Scene7.addChild(&ROUTE268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromNode(CString("_8"));
ROUTE269.setFromField(CString("value_changed"));
ROUTE269.setToNode(CString("Light1_1"));
ROUTE269.setToField(CString("set_direction"));
Scene7.addChild(&ROUTE269);

ROUTE& ROUTE270 =  ROUTE();
ROUTE270.setFromNode(CString("Time_8"));
ROUTE270.setFromField(CString("fraction_changed"));
ROUTE270.setToNode(CString("shadowTranslationInterp"));
ROUTE270.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE270);

ROUTE& ROUTE271 =  ROUTE();
ROUTE271.setFromNode(CString("shadowTranslationInterp"));
ROUTE271.setFromField(CString("value_changed"));
ROUTE271.setToNode(CString("shadow"));
ROUTE271.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE271);

X3D0.setScene(&Scene7);

}
