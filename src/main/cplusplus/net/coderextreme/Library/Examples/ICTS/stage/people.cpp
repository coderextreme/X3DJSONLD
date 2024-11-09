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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("RandomSwitcher"));
ExternProtoDeclare8.setUrl(new CString[]{CString("RandomSwitcher_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("minValue"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("maxValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("whichChoice_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field12);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare13 =  ExternProtoDeclare();
ExternProtoDeclare13.setName(CString("NegSFVec3f"));
ExternProtoDeclare13.setUrl(new CString[]{CString("NegSFVec3f_proto.x3d")}, 1);
field& field14 =  field();
field14.setName(CString("set_SFVec3f"));
field14.setAccessType(CString("inputOnly"));
field14.setType(CString("SFVec3f"));
ExternProtoDeclare13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("value_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFVec3f"));
ExternProtoDeclare13.addChild(&field15);

Scene7.addChild(&ExternProtoDeclare13);

WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo16);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("people"));
Transform17.setBboxSize(new float[]{5,3.8,5});
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("RandomSwitcherHair"));
ProtoInstance& ProtoInstance19 =  ProtoInstance();
ProtoInstance19.setName(CString("RandomSwitcher"));
ProtoInstance19.setDEF(CString("_1"));
fieldValue& fieldValue20 =  fieldValue();
fieldValue20.setName(CString("maxValue"));
fieldValue20.setValue(CString("3"));
ProtoInstance19.addChild(&fieldValue20);

Transform18.addChild(&ProtoInstance19);

Transform17.addChild(&Transform18);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("RandomSwitcherBody"));
ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("RandomSwitcher"));
ProtoInstance22.setDEF(CString("_2"));
fieldValue& fieldValue23 =  fieldValue();
fieldValue23.setName(CString("maxValue"));
fieldValue23.setValue(CString("9"));
ProtoInstance22.addChild(&fieldValue23);

Transform21.addChild(&ProtoInstance22);

Transform17.addChild(&Transform21);

Scene7.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("nc"));
Collision& Collision25 =  Collision();
Collision25.setEnabled(False);
Transform& Transform26 =  Transform();
Billboard& Billboard27 =  Billboard();
Transform& Transform28 =  Transform();
Transform28.setDEF(CString("bil"));
LOD& LOD29 =  LOD();
LOD29.setCenter(new float[]{0,1.2,0});
LOD29.setRange(new float[]{0.660001,40}, 2);
Transform& Transform30 =  Transform();
Transform30.setDEF(CString("nearOff"));
LOD29.addChildren(&Transform30);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("hi"));
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("vSens"));
VisibilitySensor& VisibilitySensor33 =  VisibilitySensor();
VisibilitySensor33.setDEF(CString("_3"));
VisibilitySensor33.setSize(new float[]{1.2,1.7,1.2});
VisibilitySensor33.setCenter(new float[]{0,0.85,0});
Transform32.addChild(&VisibilitySensor33);

Transform31.addChild(&Transform32);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("else"));
Transform34.setTranslation(new float[]{0,-4.76837e-7,0});
Transform34.setCenter(new float[]{-0.000758275,0.842724,0.00417924});
Group& Group35 =  Group();
Group& Group36 =  Group();
Group36.setDEF(CString("hupf"));
TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("Time_1"));
TimeSensor37.setStartTime(973451004.016792);
TimeSensor37.setStopTime(1);
Group36.addChild(&TimeSensor37);

Group35.addChild(&Group36);

OrientationInterpolator& OrientationInterpolator38 =  OrientationInterpolator();
OrientationInterpolator38.setDEF(CString("ArmLRotationInterp"));
OrientationInterpolator38.setKey(new float[]{0,0.1,0.2,0.3,0.5,0.7,0.9,1}, 8);
OrientationInterpolator38.setKeyValue(new float[]{0,0,1,0,0.537984,0.0664556,0.840332,4.29341,-0.603678,0.0699418,-0.794154,2.31096,0.644597,-0.175593,0.744085,3.92248,0.561529,0.0208846,0.827194,4.23437,0.644597,-0.175593,0.744085,3.92248,0.537984,0.0664556,0.840332,4.29341,0,0,1,0}, 32);
Group35.addChild(&OrientationInterpolator38);

PositionInterpolator& PositionInterpolator39 =  PositionInterpolator();
PositionInterpolator39.setDEF(CString("ArmLScaleFactorInterp"));
PositionInterpolator39.setKey(new float[]{0}, 1);
PositionInterpolator39.setKeyValue(new float[]{1,0.999981,1}, 3);
Group35.addChild(&PositionInterpolator39);

OrientationInterpolator& OrientationInterpolator40 =  OrientationInterpolator();
OrientationInterpolator40.setDEF(CString("ArmLScaleOrientationInterp_1"));
OrientationInterpolator40.setKey(new float[]{0}, 1);
OrientationInterpolator40.setKeyValue(new float[]{0.875324,0.477336,-0.0771937,0.370578}, 4);
Group35.addChild(&OrientationInterpolator40);

PositionInterpolator& PositionInterpolator41 =  PositionInterpolator();
PositionInterpolator41.setDEF(CString("ArmLScaleInterp"));
PositionInterpolator41.setKey(new float[]{0}, 1);
PositionInterpolator41.setKeyValue(new float[]{1,0.999981,1}, 3);
Group35.addChild(&PositionInterpolator41);

OrientationInterpolator& OrientationInterpolator42 =  OrientationInterpolator();
OrientationInterpolator42.setDEF(CString("ArmLScaleOrientationInterp_2"));
OrientationInterpolator42.setKey(new float[]{0}, 1);
OrientationInterpolator42.setKeyValue(new float[]{0.914246,0.397429,-0.078765,0.367275}, 4);
Group35.addChild(&OrientationInterpolator42);

PositionInterpolator& PositionInterpolator43 =  PositionInterpolator();
PositionInterpolator43.setDEF(CString("elseTranslationInterp"));
PositionInterpolator43.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9}, 10);
PositionInterpolator43.setKeyValue(new float[]{0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0,0,-4.76837e-7,0,0,0.0775681,0}, 30);
Group35.addChild(&PositionInterpolator43);

Transform34.addChild(&Group35);

Transform& Transform44 =  Transform();
Transform44.setDEF(CString("BodyO"));
Transform44.setTranslation(new float[]{4.65661e-10,1.49012e-7,-9.31323e-9});
Transform44.setScale(new float[]{1,0.999988,0.999988});
Transform44.setCenter(new float[]{-0.00316677,0.337015,0.00420856});
Transform& Transform45 =  Transform();
Transform45.setDEF(CString("body"));
Transform45.setCenter(new float[]{-0.000208497,0.681873,0.00420851});
Switch& Switch46 =  Switch();
Switch46.setDEF(CString("_4"));
Switch46.setWhichChoice(1);
Transform& Transform47 =  Transform();
Transform47.setDEF(CString("b0"));
Transform47.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform47.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setAmbientIntensity(0.148936);
Material50.setDiffuseColor(new float[]{1,1,1});
Material50.setShininess(0);
Appearance49.addChild(&Material50);

ImageTexture& ImageTexture51 =  ImageTexture();
ImageTexture51.setUrl(new CString[]{CString("shirt7.jpg")}, 1);
Appearance49.addChild(&ImageTexture51);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setConvex(False);
IndexedFaceSet52.setCreaseAngle(3.14159);
IndexedFaceSet52.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate53 =  TextureCoordinate();
TextureCoordinate53.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet52.setTexCoord(&TextureCoordinate53);

Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet52.setCoord(&Coordinate54);

Shape48.setGeometry(&IndexedFaceSet52);

Transform47.addChild(&Shape48);

Switch46.addChild(&Transform47);

Transform& Transform55 =  Transform();
Transform55.setDEF(CString("b1"));
Transform55.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform55.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setAmbientIntensity(0.148936);
Material58.setDiffuseColor(new float[]{1,1,1});
Material58.setShininess(0);
Appearance57.addChild(&Material58);

ImageTexture& ImageTexture59 =  ImageTexture();
ImageTexture59.setUrl(new CString[]{CString("army1.jpg")}, 1);
Appearance57.addChild(&ImageTexture59);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet60 =  IndexedFaceSet();
IndexedFaceSet60.setConvex(False);
IndexedFaceSet60.setCreaseAngle(3.14159);
IndexedFaceSet60.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate61 =  TextureCoordinate();
TextureCoordinate61.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet60.setTexCoord(&TextureCoordinate61);

Coordinate& Coordinate62 =  Coordinate();
Coordinate62.setDEF(CString("hbco"));
Coordinate62.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet60.setCoord(&Coordinate62);

Shape56.setGeometry(&IndexedFaceSet60);

Transform55.addChild(&Shape56);

Switch46.addChild(&Transform55);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("b2"));
Transform63.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform63.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Material66.setAmbientIntensity(0.148936);
Material66.setDiffuseColor(new float[]{1,1,1});
Material66.setShininess(0);
Appearance65.addChild(&Material66);

ImageTexture& ImageTexture67 =  ImageTexture();
ImageTexture67.setUrl(new CString[]{CString("cyber2.jpg")}, 1);
Appearance65.addChild(&ImageTexture67);

Shape64.addChild(&Appearance65);

IndexedFaceSet& IndexedFaceSet68 =  IndexedFaceSet();
IndexedFaceSet68.setConvex(False);
IndexedFaceSet68.setCreaseAngle(3.14159);
IndexedFaceSet68.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate69 =  TextureCoordinate();
TextureCoordinate69.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet68.setTexCoord(&TextureCoordinate69);

Coordinate& Coordinate70 =  Coordinate();
Coordinate70.setUSE(CString("hbco"));
IndexedFaceSet68.setCoord(&Coordinate70);

Shape64.setGeometry(&IndexedFaceSet68);

Transform63.addChild(&Shape64);

Switch46.addChild(&Transform63);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("b3"));
Transform71.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform71.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setAmbientIntensity(0.148936);
Material74.setDiffuseColor(new float[]{1,1,1});
Material74.setShininess(0);
Appearance73.addChild(&Material74);

ImageTexture& ImageTexture75 =  ImageTexture();
ImageTexture75.setUrl(new CString[]{CString("shirt8.jpg")}, 1);
Appearance73.addChild(&ImageTexture75);

Shape72.addChild(&Appearance73);

IndexedFaceSet& IndexedFaceSet76 =  IndexedFaceSet();
IndexedFaceSet76.setConvex(False);
IndexedFaceSet76.setCreaseAngle(3.14159);
IndexedFaceSet76.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate77 =  TextureCoordinate();
TextureCoordinate77.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet76.setTexCoord(&TextureCoordinate77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setUSE(CString("hbco"));
IndexedFaceSet76.setCoord(&Coordinate78);

Shape72.setGeometry(&IndexedFaceSet76);

Transform71.addChild(&Shape72);

Switch46.addChild(&Transform71);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("b4"));
Transform79.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform79.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setAmbientIntensity(0.148936);
Material82.setDiffuseColor(new float[]{1,1,1});
Material82.setShininess(0);
Appearance81.addChild(&Material82);

ImageTexture& ImageTexture83 =  ImageTexture();
ImageTexture83.setUrl(new CString[]{CString("shirt9.jpg")}, 1);
Appearance81.addChild(&ImageTexture83);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet84 =  IndexedFaceSet();
IndexedFaceSet84.setConvex(False);
IndexedFaceSet84.setCreaseAngle(3.14159);
IndexedFaceSet84.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate85 =  TextureCoordinate();
TextureCoordinate85.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet84.setTexCoord(&TextureCoordinate85);

Coordinate& Coordinate86 =  Coordinate();
Coordinate86.setUSE(CString("hbco"));
IndexedFaceSet84.setCoord(&Coordinate86);

Shape80.setGeometry(&IndexedFaceSet84);

Transform79.addChild(&Shape80);

Switch46.addChild(&Transform79);

Transform& Transform87 =  Transform();
Transform87.setDEF(CString("b5"));
Transform87.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform87.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape88 =  Shape();
Appearance& Appearance89 =  Appearance();
Material& Material90 =  Material();
Material90.setAmbientIntensity(0.148936);
Material90.setDiffuseColor(new float[]{1,1,1});
Material90.setShininess(0);
Appearance89.addChild(&Material90);

ImageTexture& ImageTexture91 =  ImageTexture();
ImageTexture91.setUrl(new CString[]{CString("shirt5.jpg")}, 1);
Appearance89.addChild(&ImageTexture91);

Shape88.addChild(&Appearance89);

IndexedFaceSet& IndexedFaceSet92 =  IndexedFaceSet();
IndexedFaceSet92.setConvex(False);
IndexedFaceSet92.setCreaseAngle(3.14159);
IndexedFaceSet92.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate93 =  TextureCoordinate();
TextureCoordinate93.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet92.setTexCoord(&TextureCoordinate93);

Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setUSE(CString("hbco"));
IndexedFaceSet92.setCoord(&Coordinate94);

Shape88.setGeometry(&IndexedFaceSet92);

Transform87.addChild(&Shape88);

Switch46.addChild(&Transform87);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("b6"));
Transform95.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform95.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
Material& Material98 =  Material();
Material98.setAmbientIntensity(0.148936);
Material98.setDiffuseColor(new float[]{1,1,1});
Material98.setShininess(0);
Appearance97.addChild(&Material98);

ImageTexture& ImageTexture99 =  ImageTexture();
ImageTexture99.setUrl(new CString[]{CString("shirt4.jpg")}, 1);
Appearance97.addChild(&ImageTexture99);

Shape96.addChild(&Appearance97);

IndexedFaceSet& IndexedFaceSet100 =  IndexedFaceSet();
IndexedFaceSet100.setConvex(False);
IndexedFaceSet100.setCreaseAngle(3.14159);
IndexedFaceSet100.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate101 =  TextureCoordinate();
TextureCoordinate101.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet100.setTexCoord(&TextureCoordinate101);

Coordinate& Coordinate102 =  Coordinate();
Coordinate102.setUSE(CString("hbco"));
IndexedFaceSet100.setCoord(&Coordinate102);

Shape96.setGeometry(&IndexedFaceSet100);

Transform95.addChild(&Shape96);

Switch46.addChild(&Transform95);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("b7"));
Transform103.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform103.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Material106.setAmbientIntensity(0.148936);
Material106.setDiffuseColor(new float[]{1,1,1});
Material106.setShininess(0);
Appearance105.addChild(&Material106);

ImageTexture& ImageTexture107 =  ImageTexture();
ImageTexture107.setUrl(new CString[]{CString("shirt2.jpg")}, 1);
Appearance105.addChild(&ImageTexture107);

Shape104.addChild(&Appearance105);

IndexedFaceSet& IndexedFaceSet108 =  IndexedFaceSet();
IndexedFaceSet108.setConvex(False);
IndexedFaceSet108.setCreaseAngle(3.14159);
IndexedFaceSet108.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate109 =  TextureCoordinate();
TextureCoordinate109.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet108.setTexCoord(&TextureCoordinate109);

Coordinate& Coordinate110 =  Coordinate();
Coordinate110.setUSE(CString("hbco"));
IndexedFaceSet108.setCoord(&Coordinate110);

Shape104.setGeometry(&IndexedFaceSet108);

Transform103.addChild(&Shape104);

Switch46.addChild(&Transform103);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("b8"));
Transform111.setTranslation(new float[]{0,-0.00000226496,-1.72294e-8});
Transform111.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Material& Material114 =  Material();
Material114.setAmbientIntensity(0.148936);
Material114.setDiffuseColor(new float[]{1,1,1});
Material114.setShininess(0);
Appearance113.addChild(&Material114);

ImageTexture& ImageTexture115 =  ImageTexture();
ImageTexture115.setUrl(new CString[]{CString("cyber4.jpg")}, 1);
Appearance113.addChild(&ImageTexture115);

Shape112.addChild(&Appearance113);

IndexedFaceSet& IndexedFaceSet116 =  IndexedFaceSet();
IndexedFaceSet116.setConvex(False);
IndexedFaceSet116.setCreaseAngle(3.14159);
IndexedFaceSet116.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate117 =  TextureCoordinate();
TextureCoordinate117.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet116.setTexCoord(&TextureCoordinate117);

Coordinate& Coordinate118 =  Coordinate();
Coordinate118.setUSE(CString("hbco"));
IndexedFaceSet116.setCoord(&Coordinate118);

Shape112.setGeometry(&IndexedFaceSet116);

Transform111.addChild(&Shape112);

Switch46.addChild(&Transform111);

Transform& Transform119 =  Transform();
Transform119.setDEF(CString("b9"));
Transform119.setTranslation(new float[]{0,2.86491e-11,2.16716e-13});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Material& Material122 =  Material();
Material122.setAmbientIntensity(0.148936);
Material122.setDiffuseColor(new float[]{1,1,1});
Material122.setShininess(0);
Appearance121.addChild(&Material122);

ImageTexture& ImageTexture123 =  ImageTexture();
ImageTexture123.setUrl(new CString[]{CString("shirt3.jpg")}, 1);
Appearance121.addChild(&ImageTexture123);

Shape120.addChild(&Appearance121);

IndexedFaceSet& IndexedFaceSet124 =  IndexedFaceSet();
IndexedFaceSet124.setConvex(False);
IndexedFaceSet124.setCreaseAngle(3.14159);
IndexedFaceSet124.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate125 =  TextureCoordinate();
TextureCoordinate125.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet124.setTexCoord(&TextureCoordinate125);

Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setUSE(CString("hbco"));
IndexedFaceSet124.setCoord(&Coordinate126);

Shape120.setGeometry(&IndexedFaceSet124);

Transform119.addChild(&Shape120);

Switch46.addChild(&Transform119);

Transform45.addChild(&Switch46);

Transform44.addChild(&Transform45);

Transform& Transform127 =  Transform();
Transform127.setDEF(CString("ArmR"));
Transform127.setTranslation(new float[]{-5.96046e-8,3.57628e-7,2.98023e-8});
Transform127.setScale(new float[]{1,0.999991,0.999991});
Transform127.setCenter(new float[]{0.289521,1.00008,0.0239703});
Transform& Transform128 =  Transform();
Transform128.setDEF(CString("armR"));
Transform128.setTranslation(new float[]{-1.49012e-7,-1.78814e-7,7.45058e-8});
Transform128.setScale(new float[]{0.999999,0.99999,0.99999});
Transform128.setCenter(new float[]{0.295036,0.973184,0.0197765});
Transform& Transform129 =  Transform();
Transform129.setDEF(CString("oarmR"));
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
Material& Material132 =  Material();
Material132.setDEF(CString("_5"));
Material132.setAmbientIntensity(0.255319);
Material132.setDiffuseColor(new float[]{1,0.600935,0.355765});
Material132.setShininess(0);
Appearance131.addChild(&Material132);

Shape130.addChild(&Appearance131);

IndexedFaceSet& IndexedFaceSet133 =  IndexedFaceSet();
IndexedFaceSet133.setSolid(False);
IndexedFaceSet133.setConvex(False);
IndexedFaceSet133.setCreaseAngle(3.14159);
IndexedFaceSet133.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate134 =  Coordinate();
Coordinate134.setPoint(new float[]{0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417}, 54);
IndexedFaceSet133.setCoord(&Coordinate134);

Shape130.setGeometry(&IndexedFaceSet133);

Transform129.addChild(&Shape130);

Transform128.addChild(&Transform129);

Transform& Transform135 =  Transform();
Transform135.setDEF(CString("handR"));
Transform135.setCenter(new float[]{0.386713,0.551949,0.0217319});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Material138.setUSE(CString("_5"));
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

IndexedFaceSet& IndexedFaceSet139 =  IndexedFaceSet();
IndexedFaceSet139.setSolid(False);
IndexedFaceSet139.setConvex(False);
IndexedFaceSet139.setCreaseAngle(3.14159);
IndexedFaceSet139.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate140 =  Coordinate();
Coordinate140.setPoint(new float[]{0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045}, 84);
IndexedFaceSet139.setCoord(&Coordinate140);

Shape136.setGeometry(&IndexedFaceSet139);

Transform135.addChild(&Shape136);

Transform128.addChild(&Transform135);

Transform127.addChild(&Transform128);

Transform44.addChild(&Transform127);

Transform& Transform141 =  Transform();
Transform141.setDEF(CString("ArmL"));
Transform141.setTranslation(new float[]{0.00000184774,0.0000013113,2.98023e-7});
Transform141.setScale(new float[]{1,0.999981,1});
Transform141.setScaleOrientation(new float[]{0.875324,0.477336,-0.0771937,0.370578});
Transform141.setCenter(new float[]{-0.298867,0.995243,-0.0108316});
Transform& Transform142 =  Transform();
Transform142.setDEF(CString("armL"));
Transform142.setTranslation(new float[]{-1.19209e-7,2.38419e-7,9.31323e-10});
Transform142.setCenter(new float[]{-0.305306,0.988041,-0.0116445});
Transform& Transform143 =  Transform();
Transform143.setDEF(CString("oarmL"));
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Material& Material146 =  Material();
Material146.setUSE(CString("_5"));
Appearance145.addChild(&Material146);

Shape144.addChild(&Appearance145);

IndexedFaceSet& IndexedFaceSet147 =  IndexedFaceSet();
IndexedFaceSet147.setSolid(False);
IndexedFaceSet147.setConvex(False);
IndexedFaceSet147.setCreaseAngle(3.14159);
IndexedFaceSet147.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742}, 54);
IndexedFaceSet147.setCoord(&Coordinate148);

Shape144.setGeometry(&IndexedFaceSet147);

Transform143.addChild(&Shape144);

Transform142.addChild(&Transform143);

Transform& Transform149 =  Transform();
Transform149.setDEF(CString("handL"));
Transform149.setTranslation(new float[]{2.98023e-8,0,4.65661e-10});
Transform149.setScale(new float[]{0.999996,0.999998,1});
Transform149.setScaleOrientation(new float[]{0,0,-1,0.725978});
Transform149.setCenter(new float[]{-0.394827,0.544969,-0.00705719});
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_5"));
Appearance151.addChild(&Material152);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet153 =  IndexedFaceSet();
IndexedFaceSet153.setSolid(False);
IndexedFaceSet153.setConvex(False);
IndexedFaceSet153.setCreaseAngle(3.14159);
IndexedFaceSet153.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637}, 84);
IndexedFaceSet153.setCoord(&Coordinate154);

Shape150.setGeometry(&IndexedFaceSet153);

Transform149.addChild(&Shape150);

Transform142.addChild(&Transform149);

Transform141.addChild(&Transform142);

Transform44.addChild(&Transform141);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("Head"));
Transform155.setTranslation(new float[]{-3.72529e-8,-0.00000107288,1.49012e-8});
Transform155.setScale(new float[]{0.999986,0.999952,0.999969});
Transform155.setScaleOrientation(new float[]{0.272252,0.962065,-0.0175875,0.748075});
Transform155.setCenter(new float[]{-0.00422851,1.04834,0.00417849});
Transform& Transform156 =  Transform();
Transform156.setDEF(CString("headU"));
Shape& Shape157 =  Shape();
Appearance& Appearance158 =  Appearance();
Material& Material159 =  Material();
Material159.setUSE(CString("_5"));
Appearance158.addChild(&Material159);

Shape157.addChild(&Appearance158);

IndexedFaceSet& IndexedFaceSet160 =  IndexedFaceSet();
IndexedFaceSet160.setSolid(False);
IndexedFaceSet160.setConvex(False);
IndexedFaceSet160.setCreaseAngle(1.53973);
IndexedFaceSet160.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,20,21,6,4,-1,21,22,8,6,-1,22,23,10,8,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1}, 136);
Coordinate& Coordinate161 =  Coordinate();
Coordinate161.setPoint(new float[]{-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751}, 102);
IndexedFaceSet160.setCoord(&Coordinate161);

Shape157.setGeometry(&IndexedFaceSet160);

Transform156.addChild(&Shape157);

Transform155.addChild(&Transform156);

Transform& Transform162 =  Transform();
Transform162.setDEF(CString("headO"));
Transform162.setTranslation(new float[]{2.32831e-10,2.38419e-7,3.35276e-8});
Transform162.setCenter(new float[]{-0.00371499,1.24837,0.029451});
Transform& Transform163 =  Transform();
Transform163.setDEF(CString("augen"));
Transform163.setCenter(new float[]{-0.015762,1.38316,0.30789});
Shape& Shape164 =  Shape();
Appearance& Appearance165 =  Appearance();
Material& Material166 =  Material();
Material166.setAmbientIntensity(0.255319);
Material166.setDiffuseColor(new float[]{0,0,0});
Material166.setShininess(0);
Appearance165.addChild(&Material166);

Shape164.addChild(&Appearance165);

IndexedFaceSet& IndexedFaceSet167 =  IndexedFaceSet();
IndexedFaceSet167.setSolid(False);
IndexedFaceSet167.setConvex(False);
IndexedFaceSet167.setCreaseAngle(1.60186);
IndexedFaceSet167.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate168 =  Coordinate();
Coordinate168.setPoint(new float[]{-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 48);
IndexedFaceSet167.setCoord(&Coordinate168);

Shape164.setGeometry(&IndexedFaceSet167);

Transform163.addChild(&Shape164);

Transform162.addChild(&Transform163);

Transform& Transform169 =  Transform();
Transform169.setDEF(CString("haar"));
Switch& Switch170 =  Switch();
Switch170.setDEF(CString("_6"));
Switch170.setWhichChoice(1);
Transform& Transform171 =  Transform();
Transform171.setDEF(CString("h1"));
Shape& Shape172 =  Shape();
Appearance& Appearance173 =  Appearance();
Material& Material174 =  Material();
Material174.setAmbientIntensity(0.148936);
Material174.setDiffuseColor(new float[]{1,1,1});
Material174.setShininess(0);
Appearance173.addChild(&Material174);

ImageTexture& ImageTexture175 =  ImageTexture();
ImageTexture175.setUrl(new CString[]{CString("hair1.jpg")}, 1);
Appearance173.addChild(&ImageTexture175);

Shape172.addChild(&Appearance173);

IndexedFaceSet& IndexedFaceSet176 =  IndexedFaceSet();
IndexedFaceSet176.setSolid(False);
IndexedFaceSet176.setConvex(False);
IndexedFaceSet176.setCreaseAngle(3.14159);
IndexedFaceSet176.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate177 =  TextureCoordinate();
TextureCoordinate177.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet176.setTexCoord(&TextureCoordinate177);

Coordinate& Coordinate178 =  Coordinate();
Coordinate178.setDEF(CString("hhco"));
Coordinate178.setPoint(new float[]{0.238211,1.471,-0.220467,0.198251,1.55876,0.0313386,0.377841,1.43577,-0.00714531,0.134999,1.579,-0.0903402,-0.18314,1.60778,0.146798,-0.247618,1.60732,0.00880936,-0.411981,1.43577,-0.0470541,-0.214767,1.471,-0.243355,-0.125196,1.579,-0.103488,0.0158279,1.48493,-0.313164,0.00725975,1.58699,-0.143594,-0.00227428,1.65935,0.0674612,0.277193,1.31523,-0.28818,0.404551,1.27447,-0.0431701,0.349909,1.23012,0.213632,-0.369653,1.23012,0.177274,-0.340793,1.21799,0.175881,-0.296545,1.38244,0.180247,-0.313821,1.40203,0.187276,-0.39813,1.27447,-0.0837286,-0.246724,1.31523,-0.314648,0.0199828,1.33133,-0.395392,-0.101431,1.54401,0.270843,-0.0769222,1.4973,0.225338,0.0538245,1.4973,0.231944,0.293354,1.40203,0.217955,0.350422,1.14933,-0.0780944,0.332594,1.1399,-0.0774054,0.263445,1.1857,-0.274314,0.321337,1.21799,0.209338,0.37957,1.26148,-0.042198,0.307546,1.09211,0.193511,0.329131,1.10101,0.196722,-0.364571,1.14933,-0.114222,-0.340485,1.10101,0.162887,-0.318688,1.09211,0.161868,-0.346907,1.1399,-0.11174,-0.373375,1.26148,-0.0802434,-0.224667,1.19678,-0.311133,-0.213683,1.1857,-0.298422,0.0189626,1.21513,-0.375202,0.0181397,1.20332,-0.358916,0.275653,1.19678,-0.285857,0.0803699,1.55286,0.386279,0.0342505,1.58699,0.341122,-0.00180715,1.38328,0.368284,0.145419,1.52038,0.403749,0.149685,1.48603,0.349656,0.052231,1.44079,0.328486,-0.0276137,1.65405,0.180214,0.0210674,1.63967,0.24235,0.16156,1.59305,0.254132,0.216021,1.45452,0.294783,0.213277,1.43423,0.279438,0.276874,1.38244,0.209221,0.0328324,1.49261,0.284621,0.16156,1.59305,0.254132,0.0214095,1.6383,0.244912,0.293354,1.40203,0.217955,0.216021,1.45452,0.294783,0.216021,1.45452,0.294783,0.276874,1.38244,0.209221,0.218313,1.45296,0.292504,0.219894,1.45189,0.290931}, 192);
IndexedFaceSet176.setCoord(&Coordinate178);

Shape172.setGeometry(&IndexedFaceSet176);

Transform171.addChild(&Shape172);

Switch170.addChild(&Transform171);

Transform& Transform179 =  Transform();
Transform179.setDEF(CString("h2"));
Transform179.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform179.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape180 =  Shape();
Appearance& Appearance181 =  Appearance();
Material& Material182 =  Material();
Material182.setAmbientIntensity(0.148936);
Material182.setDiffuseColor(new float[]{1,1,1});
Material182.setShininess(0);
Appearance181.addChild(&Material182);

ImageTexture& ImageTexture183 =  ImageTexture();
ImageTexture183.setUrl(new CString[]{CString("hair2.jpg")}, 1);
Appearance181.addChild(&ImageTexture183);

Shape180.addChild(&Appearance181);

IndexedFaceSet& IndexedFaceSet184 =  IndexedFaceSet();
IndexedFaceSet184.setSolid(False);
IndexedFaceSet184.setConvex(False);
IndexedFaceSet184.setCreaseAngle(3.14159);
IndexedFaceSet184.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate185 =  TextureCoordinate();
TextureCoordinate185.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet184.setTexCoord(&TextureCoordinate185);

Coordinate& Coordinate186 =  Coordinate();
Coordinate186.setUSE(CString("hhco"));
IndexedFaceSet184.setCoord(&Coordinate186);

Shape180.setGeometry(&IndexedFaceSet184);

Transform179.addChild(&Shape180);

Switch170.addChild(&Transform179);

Transform& Transform187 =  Transform();
Transform187.setDEF(CString("h3"));
Transform187.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform187.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape188 =  Shape();
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Material190.setAmbientIntensity(0.148936);
Material190.setDiffuseColor(new float[]{1,1,1});
Material190.setShininess(0);
Appearance189.addChild(&Material190);

ImageTexture& ImageTexture191 =  ImageTexture();
ImageTexture191.setUrl(new CString[]{CString("hair3.jpg")}, 1);
Appearance189.addChild(&ImageTexture191);

Shape188.addChild(&Appearance189);

IndexedFaceSet& IndexedFaceSet192 =  IndexedFaceSet();
IndexedFaceSet192.setSolid(False);
IndexedFaceSet192.setConvex(False);
IndexedFaceSet192.setCreaseAngle(3.14159);
IndexedFaceSet192.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate193 =  TextureCoordinate();
TextureCoordinate193.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet192.setTexCoord(&TextureCoordinate193);

Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setUSE(CString("hhco"));
IndexedFaceSet192.setCoord(&Coordinate194);

Shape188.setGeometry(&IndexedFaceSet192);

Transform187.addChild(&Shape188);

Switch170.addChild(&Transform187);

Transform& Transform195 =  Transform();
Transform195.setDEF(CString("h4"));
Transform195.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform195.setScale(new float[]{1,1.00001,1.00001});
Shape& Shape196 =  Shape();
Appearance& Appearance197 =  Appearance();
Material& Material198 =  Material();
Material198.setAmbientIntensity(0.148936);
Material198.setDiffuseColor(new float[]{1,1,1});
Material198.setShininess(0);
Appearance197.addChild(&Material198);

ImageTexture& ImageTexture199 =  ImageTexture();
ImageTexture199.setUrl(new CString[]{CString("hair4.jpg")}, 1);
Appearance197.addChild(&ImageTexture199);

Shape196.addChild(&Appearance197);

IndexedFaceSet& IndexedFaceSet200 =  IndexedFaceSet();
IndexedFaceSet200.setSolid(False);
IndexedFaceSet200.setConvex(False);
IndexedFaceSet200.setCreaseAngle(3.14159);
IndexedFaceSet200.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate201 =  TextureCoordinate();
TextureCoordinate201.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet200.setTexCoord(&TextureCoordinate201);

Coordinate& Coordinate202 =  Coordinate();
Coordinate202.setUSE(CString("hhco"));
IndexedFaceSet200.setCoord(&Coordinate202);

Shape196.setGeometry(&IndexedFaceSet200);

Transform195.addChild(&Shape196);

Switch170.addChild(&Transform195);

Transform169.addChild(&Switch170);

Transform162.addChild(&Transform169);

Transform& Transform203 =  Transform();
Transform203.setDEF(CString("ohead"));
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setUSE(CString("_5"));
Appearance205.addChild(&Material206);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet207 =  IndexedFaceSet();
IndexedFaceSet207.setSolid(False);
IndexedFaceSet207.setConvex(False);
IndexedFaceSet207.setCreaseAngle(1.53973);
IndexedFaceSet207.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1}, 38);
Coordinate& Coordinate208 =  Coordinate();
Coordinate208.setPoint(new float[]{-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829}, 48);
IndexedFaceSet207.setCoord(&Coordinate208);

Shape204.setGeometry(&IndexedFaceSet207);

Transform203.addChild(&Shape204);

Transform162.addChild(&Transform203);

Transform155.addChild(&Transform162);

Transform44.addChild(&Transform155);

Transform34.addChild(&Transform44);

Transform& Transform209 =  Transform();
Transform209.setDEF(CString("BeinL"));
Transform209.setCenter(new float[]{-0.198186,0.30347,-0.0111347});
Transform& Transform210 =  Transform();
Transform210.setDEF(CString("beinL"));
Shape& Shape211 =  Shape();
Appearance& Appearance212 =  Appearance();
Material& Material213 =  Material();
Material213.setUSE(CString("_5"));
Appearance212.addChild(&Material213);

Shape211.addChild(&Appearance212);

IndexedFaceSet& IndexedFaceSet214 =  IndexedFaceSet();
IndexedFaceSet214.setSolid(False);
IndexedFaceSet214.setConvex(False);
IndexedFaceSet214.setCreaseAngle(3.14159);
IndexedFaceSet214.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate215 =  Coordinate();
Coordinate215.setPoint(new float[]{-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464}, 36);
IndexedFaceSet214.setCoord(&Coordinate215);

Shape211.setGeometry(&IndexedFaceSet214);

Transform210.addChild(&Shape211);

Transform209.addChild(&Transform210);

Transform& Transform216 =  Transform();
Transform216.setDEF(CString("fussL"));
Transform216.setCenter(new float[]{-0.198186,0.1544,-0.00509336});
Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setDEF(CString("_7"));
Material219.setAmbientIntensity(0.148936);
Material219.setDiffuseColor(new float[]{1,1,1});
Material219.setShininess(0);
Appearance218.addChild(&Material219);

ImageTexture& ImageTexture220 =  ImageTexture();
ImageTexture220.setDEF(CString("_8"));
ImageTexture220.setUrl(new CString[]{CString("shoes1.jpg")}, 1);
Appearance218.addChild(&ImageTexture220);

Shape217.addChild(&Appearance218);

IndexedFaceSet& IndexedFaceSet221 =  IndexedFaceSet();
IndexedFaceSet221.setSolid(False);
IndexedFaceSet221.setConvex(False);
IndexedFaceSet221.setCreaseAngle(3.14159);
IndexedFaceSet221.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate222 =  TextureCoordinate();
TextureCoordinate222.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet221.setTexCoord(&TextureCoordinate222);

Coordinate& Coordinate223 =  Coordinate();
Coordinate223.setPoint(new float[]{-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572}, 33);
IndexedFaceSet221.setCoord(&Coordinate223);

Shape217.setGeometry(&IndexedFaceSet221);

Transform216.addChild(&Shape217);

Transform209.addChild(&Transform216);

Transform34.addChild(&Transform209);

Transform& Transform224 =  Transform();
Transform224.setDEF(CString("BeinR"));
Transform224.setCenter(new float[]{0.196713,0.303457,0.0297802});
Transform& Transform225 =  Transform();
Transform225.setDEF(CString("beinR"));
Shape& Shape226 =  Shape();
Appearance& Appearance227 =  Appearance();
Material& Material228 =  Material();
Material228.setUSE(CString("_5"));
Appearance227.addChild(&Material228);

Shape226.addChild(&Appearance227);

IndexedFaceSet& IndexedFaceSet229 =  IndexedFaceSet();
IndexedFaceSet229.setSolid(False);
IndexedFaceSet229.setConvex(False);
IndexedFaceSet229.setCreaseAngle(3.14159);
IndexedFaceSet229.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619}, 36);
IndexedFaceSet229.setCoord(&Coordinate230);

Shape226.setGeometry(&IndexedFaceSet229);

Transform225.addChild(&Shape226);

Transform224.addChild(&Transform225);

Transform& Transform231 =  Transform();
Transform231.setDEF(CString("fussR"));
Transform231.setTranslation(new float[]{-1.49012e-8,-1.49012e-8,-5.58794e-9});
Transform231.setScale(new float[]{1,0.999999,0.999999});
Transform231.setCenter(new float[]{0.196713,0.157104,0.00995016});
Shape& Shape232 =  Shape();
Appearance& Appearance233 =  Appearance();
Material& Material234 =  Material();
Material234.setUSE(CString("_7"));
Appearance233.addChild(&Material234);

ImageTexture& ImageTexture235 =  ImageTexture();
ImageTexture235.setUSE(CString("_8"));
Appearance233.addChild(&ImageTexture235);

Shape232.addChild(&Appearance233);

IndexedFaceSet& IndexedFaceSet236 =  IndexedFaceSet();
IndexedFaceSet236.setSolid(False);
IndexedFaceSet236.setConvex(False);
IndexedFaceSet236.setCreaseAngle(3.14159);
IndexedFaceSet236.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate237 =  TextureCoordinate();
TextureCoordinate237.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869}, 22);
IndexedFaceSet236.setTexCoord(&TextureCoordinate237);

Coordinate& Coordinate238 =  Coordinate();
Coordinate238.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012}, 33);
IndexedFaceSet236.setCoord(&Coordinate238);

Shape232.setGeometry(&IndexedFaceSet236);

Transform231.addChild(&Shape232);

Transform224.addChild(&Transform231);

Transform34.addChild(&Transform224);

Transform31.addChild(&Transform34);

Transform& Transform239 =  Transform();
Transform239.setDEF(CString("shadow"));
Transform239.setTranslation(new float[]{0.0606028,0,0});
Transform239.setCenter(new float[]{0,0.00748548,0});
Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0,0.00748548,0});
Transform240.setRotation(new float[]{-1,0,0,1.5708});
Transform240.setScale(new float[]{1.53335,1.53335,1.53335});
Shape& Shape241 =  Shape();
Appearance& Appearance242 =  Appearance();
ImageTexture& ImageTexture243 =  ImageTexture();
ImageTexture243.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance242.addChild(&ImageTexture243);

Shape241.addChild(&Appearance242);

IndexedFaceSet& IndexedFaceSet244 =  IndexedFaceSet();
IndexedFaceSet244.setSolid(False);
IndexedFaceSet244.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate245 =  TextureCoordinate();
TextureCoordinate245.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet244.setTexCoord(&TextureCoordinate245);

Coordinate& Coordinate246 =  Coordinate();
Coordinate246.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet244.setCoord(&Coordinate246);

Shape241.setGeometry(&IndexedFaceSet244);

Transform240.addChild(&Shape241);

Transform239.addChild(&Transform240);

Transform31.addChild(&Transform239);

LOD29.addChildren(&Transform31);

Transform& Transform247 =  Transform();
LOD29.addChildren(&Transform247);

Transform28.addChild(&LOD29);

Billboard27.addChild(&Transform28);

Transform26.addChild(&Billboard27);

Collision25.addChildren(&Transform26);

Transform24.addChild(&Collision25);

Scene7.addChild(&Transform24);

Viewpoint& Viewpoint248 =  Viewpoint();
Viewpoint248.setDEF(CString("VP1"));
Viewpoint248.setPosition(new float[]{-0.372997,1.43562,2.55648});
Viewpoint248.setOrientation(new float[]{-0.823815,-0.566765,-0.0103506,0.245828});
Scene7.addChild(&Viewpoint248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromNode(CString("_3"));
ROUTE249.setFromField(CString("enterTime"));
ROUTE249.setToNode(CString("Time_1"));
ROUTE249.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromNode(CString("Time_1"));
ROUTE250.setFromField(CString("fraction_changed"));
ROUTE250.setToNode(CString("ArmLRotationInterp"));
ROUTE250.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromNode(CString("Time_1"));
ROUTE251.setFromField(CString("fraction_changed"));
ROUTE251.setToNode(CString("ArmLScaleFactorInterp"));
ROUTE251.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromNode(CString("Time_1"));
ROUTE252.setFromField(CString("fraction_changed"));
ROUTE252.setToNode(CString("ArmLScaleOrientationInterp_1"));
ROUTE252.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromNode(CString("Time_1"));
ROUTE253.setFromField(CString("fraction_changed"));
ROUTE253.setToNode(CString("ArmLScaleInterp"));
ROUTE253.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromNode(CString("Time_1"));
ROUTE254.setFromField(CString("fraction_changed"));
ROUTE254.setToNode(CString("ArmLScaleOrientationInterp_2"));
ROUTE254.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromNode(CString("Time_1"));
ROUTE255.setFromField(CString("fraction_changed"));
ROUTE255.setToNode(CString("elseTranslationInterp"));
ROUTE255.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromNode(CString("_2"));
ROUTE256.setFromField(CString("whichChoice_changed"));
ROUTE256.setToNode(CString("_4"));
ROUTE256.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromNode(CString("ArmLRotationInterp"));
ROUTE257.setFromField(CString("value_changed"));
ROUTE257.setToNode(CString("ArmL"));
ROUTE257.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE257);

ROUTE& ROUTE258 =  ROUTE();
ROUTE258.setFromNode(CString("ArmLScaleFactorInterp"));
ROUTE258.setFromField(CString("value_changed"));
ROUTE258.setToNode(CString("ArmL"));
ROUTE258.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromNode(CString("ArmLScaleOrientationInterp_1"));
ROUTE259.setFromField(CString("value_changed"));
ROUTE259.setToNode(CString("ArmL"));
ROUTE259.setToField(CString("set_scaleOrientation"));
Scene7.addChild(&ROUTE259);

ROUTE& ROUTE260 =  ROUTE();
ROUTE260.setFromNode(CString("_1"));
ROUTE260.setFromField(CString("whichChoice_changed"));
ROUTE260.setToNode(CString("_6"));
ROUTE260.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE260);

ROUTE& ROUTE261 =  ROUTE();
ROUTE261.setFromNode(CString("elseTranslationInterp"));
ROUTE261.setFromField(CString("value_changed"));
ROUTE261.setToNode(CString("else"));
ROUTE261.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE261);

X3D0.setScene(&Scene7);

}
