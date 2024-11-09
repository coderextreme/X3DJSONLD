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
Transform17.setDEF(CString("scout"));
Transform17.setBboxSize(new float[]{5.0,3.8,5.0});
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

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("nc"));
Collision& Collision25 =  Collision();
Collision25.setEnabled(false);
Transform& Transform26 =  Transform();
Billboard& Billboard27 =  Billboard();
Transform& Transform28 =  Transform();
Transform28.setDEF(CString("bil"));
LOD& LOD29 =  LOD();
LOD29.setCenter(new float[]{0.0,1.2,0.0});
LOD29.setRange(new float[]{0.66,6.0,66.0}, 3);
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
VisibilitySensor33.setCenter(new float[]{0.0,0.85,0.0});
Transform32.addChild(&VisibilitySensor33);

Transform31.addChild(&Transform32);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("else"));
Transform& Transform35 =  Transform();
Transform35.setDEF(CString("BodyO"));
Transform35.setTranslation(new float[]{4.65661e-10,1.49012e-7,-9.31323e-9});
Transform35.setScale(new float[]{1.0,0.999988,0.999988});
Transform35.setCenter(new float[]{-0.00316677,0.337015,0.00420856});
Group& Group36 =  Group();
Group& Group37 =  Group();
Group37.setDEF(CString("breath30"));
TimeSensor& TimeSensor38 =  TimeSensor();
TimeSensor38.setDEF(CString("Time_1"));
TimeSensor38.setEnabled(false);
TimeSensor38.setCycleInterval(3);
TimeSensor38.setLoop(true);
TimeSensor38.setStartTime(966384274.309139);
TimeSensor38.setStopTime(1);
Group37.addChild(&TimeSensor38);

Group36.addChild(&Group37);

OrientationInterpolator& OrientationInterpolator39 =  OrientationInterpolator();
OrientationInterpolator39.setDEF(CString("BodyORotationInterp"));
OrientationInterpolator39.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator39.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.00182698,-1.0,0.0,0.0,0.00323889,-1.0,0.0,0.0,0.00468343,-1.0,0.0,0.0,0.00636641,-1.0,0.0,0.0,0.00799351,-1.0,0.0,0.0,0.00964279,-1.0,0.0,0.0,0.0112411,-1.0,0.0,0.0,0.0127328,-1.0,0.0,0.0,0.0140842,-1.0,0.0,0.0,0.0151604,-1.0,0.0,0.0,0.016002,-1.0,0.0,0.0,0.0168864,-1.0,0.0,0.0,0.0174966,-1.0,0.0,0.0,0.0178741,-1.0,0.0,0.0,0.0179937,-1.0,0.0,0.0,0.0178741,-1.0,0.0,0.0,0.0174966,-1.0,0.0,0.0,0.0168864,-1.0,0.0,0.0,0.016002,-1.0,0.0,0.0,0.0148264,-1.0,0.0,0.0,0.0132107,-1.0,0.0,0.0,0.0112411,-1.0,0.0,0.0,0.00908256,-1.0,0.0,0.0,0.00687073,-1.0,0.0,0.0,0.00468343,-1.0,0.0,0.0,0.00276214,-1.0,0.0,0.0,0.00119604,0.0,0.0,1.0,0.0}, 120);
Group36.addChild(&OrientationInterpolator39);

OrientationInterpolator& OrientationInterpolator40 =  OrientationInterpolator();
OrientationInterpolator40.setDEF(CString("ArmRRotationInterp"));
OrientationInterpolator40.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator40.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000976562,1.0,0.0,0.0,0.00195312,1.0,0.0,0.0,0.00292969,1.0,0.0,0.0,0.00396682,1.0,0.0,0.0,0.00497951,1.0,0.0,0.0,0.00605941,1.0,0.0,0.0,0.0070421,1.0,0.0,0.0,0.00799351,1.0,0.0,0.0,0.00881615,1.0,0.0,0.0,0.00946813,1.0,0.0,0.0,0.0100068,1.0,0.0,0.0,0.0105406,1.0,0.0,0.0,0.0109183,1.0,0.0,0.0,0.0111559,1.0,0.0,0.0,0.0112623,1.0,0.0,0.0,0.0111559,1.0,0.0,0.0,0.0109401,1.0,0.0,0.0,0.0105406,1.0,0.0,0.0,0.0100068,1.0,0.0,0.0,0.00929019,1.0,0.0,0.0,0.00825759,1.0,0.0,0.0,0.0070421,1.0,0.0,0.0,0.00565227,1.0,0.0,0.0,0.00425674,1.0,0.0,0.0,0.00292969,1.0,0.0,0.0,0.00169146,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0}, 120);
Group36.addChild(&OrientationInterpolator40);

OrientationInterpolator& OrientationInterpolator41 =  OrientationInterpolator();
OrientationInterpolator41.setDEF(CString("ArmLRotationInterp"));
OrientationInterpolator41.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator41.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.000976562,-1.0,0.0,0.0,0.00195312,-1.0,0.0,0.0,0.00292969,-1.0,0.0,0.0,0.00396682,-1.0,0.0,0.0,0.00497951,-1.0,0.0,0.0,0.00605941,-1.0,0.0,0.0,0.0070421,-1.0,0.0,0.0,0.00799351,-1.0,0.0,0.0,0.00881615,-1.0,0.0,0.0,0.00946813,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.0105406,-1.0,0.0,0.0,0.0109183,-1.0,0.0,0.0,0.0111559,-1.0,0.0,0.0,0.0112623,-1.0,0.0,0.0,0.0111559,-1.0,0.0,0.0,0.0109401,-1.0,0.0,0.0,0.0105406,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.00929019,-1.0,0.0,0.0,0.00825759,-1.0,0.0,0.0,0.0070421,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00425674,-1.0,0.0,0.0,0.00292969,-1.0,0.0,0.0,0.00169146,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0}, 120);
Group36.addChild(&OrientationInterpolator41);

OrientationInterpolator& OrientationInterpolator42 =  OrientationInterpolator();
OrientationInterpolator42.setDEF(CString("headORotationInterp"));
OrientationInterpolator42.setKey(new float[]{0.0,0.0333333,0.0666667,0.1,0.133333,0.166667,0.2,0.233333,0.266667,0.3,0.333333,0.366667,0.4,0.433333,0.466667,0.5,0.533333,0.566667,0.6,0.633334,0.666667,0.703704,0.740741,0.777778,0.814815,0.851852,0.888889,0.925926,0.962963,1.0}, 30);
OrientationInterpolator42.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.000690534,-1.0,0.0,0.0,0.00138107,-1.0,0.0,0.0,0.00218366,-1.0,0.0,0.0,0.00338291,-1.0,0.0,0.0,0.00442158,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00676583,-1.0,0.0,0.0,0.00775123,-1.0,0.0,0.0,0.00867988,-1.0,0.0,0.0,0.00936687,-1.0,0.0,0.0,0.00981434,-1.0,0.0,0.0,0.0100068,-1.0,0.0,0.0,0.00961803,-1.0,0.0,0.0,0.00867988,-1.0,0.0,0.0,0.00724239,-1.0,0.0,0.0,0.00565227,-1.0,0.0,0.0,0.00390625,-1.0,0.0,0.0,0.00218366,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000690534,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 120);
Group36.addChild(&OrientationInterpolator42);

Transform35.addChild(&Group36);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("body_1"));
Transform43.setCenter(new float[]{-0.000208497,0.681873,0.00420851});
Switch& Switch44 =  Switch();
Switch44.setDEF(CString("_4"));
Switch44.setWhichChoice(2);
Transform& Transform45 =  Transform();
Transform45.setDEF(CString("b0"));
Transform45.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform45.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setAmbientIntensity(0.148936);
Material48.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material48.setShininess(0);
Appearance47.addChild(&Material48);

ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setUrl(new CString[]{CString("shirt7.jpg")}, 1);
Appearance47.addChild(&ImageTexture49);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet50 =  IndexedFaceSet();
IndexedFaceSet50.setConvex(false);
IndexedFaceSet50.setCreaseAngle(3.14159);
IndexedFaceSet50.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate51 =  TextureCoordinate();
TextureCoordinate51.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet50.setTexCoord(&TextureCoordinate51);

Coordinate& Coordinate52 =  Coordinate();
Coordinate52.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet50.setCoord(&Coordinate52);

Shape46.setGeometry(&IndexedFaceSet50);

Transform45.addChild(&Shape46);

Switch44.addChild(&Transform45);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("b1"));
Transform53.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform53.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0.148936);
Material56.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material56.setShininess(0);
Appearance55.addChild(&Material56);

ImageTexture& ImageTexture57 =  ImageTexture();
ImageTexture57.setUrl(new CString[]{CString("army1.jpg")}, 1);
Appearance55.addChild(&ImageTexture57);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setConvex(false);
IndexedFaceSet58.setCreaseAngle(3.14159);
IndexedFaceSet58.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate59 =  TextureCoordinate();
TextureCoordinate59.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet58.setTexCoord(&TextureCoordinate59);

Coordinate& Coordinate60 =  Coordinate();
Coordinate60.setDEF(CString("hbco"));
Coordinate60.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet58.setCoord(&Coordinate60);

Shape54.setGeometry(&IndexedFaceSet58);

Transform53.addChild(&Shape54);

Switch44.addChild(&Transform53);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("b2"));
Transform61.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform61.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setAmbientIntensity(0.148936);
Material64.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material64.setShininess(0);
Appearance63.addChild(&Material64);

ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setUrl(new CString[]{CString("cyber2.jpg")}, 1);
Appearance63.addChild(&ImageTexture65);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet66 =  IndexedFaceSet();
IndexedFaceSet66.setConvex(false);
IndexedFaceSet66.setCreaseAngle(3.14159);
IndexedFaceSet66.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate67 =  TextureCoordinate();
TextureCoordinate67.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet66.setTexCoord(&TextureCoordinate67);

Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setUSE(CString("hbco"));
IndexedFaceSet66.setCoord(&Coordinate68);

Shape62.setGeometry(&IndexedFaceSet66);

Transform61.addChild(&Shape62);

Switch44.addChild(&Transform61);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("b3"));
Transform69.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform69.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape70 =  Shape();
Appearance& Appearance71 =  Appearance();
Material& Material72 =  Material();
Material72.setAmbientIntensity(0.148936);
Material72.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material72.setShininess(0);
Appearance71.addChild(&Material72);

ImageTexture& ImageTexture73 =  ImageTexture();
ImageTexture73.setUrl(new CString[]{CString("shirt8.jpg")}, 1);
Appearance71.addChild(&ImageTexture73);

Shape70.addChild(&Appearance71);

IndexedFaceSet& IndexedFaceSet74 =  IndexedFaceSet();
IndexedFaceSet74.setConvex(false);
IndexedFaceSet74.setCreaseAngle(3.14159);
IndexedFaceSet74.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate75 =  TextureCoordinate();
TextureCoordinate75.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet74.setTexCoord(&TextureCoordinate75);

Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setUSE(CString("hbco"));
IndexedFaceSet74.setCoord(&Coordinate76);

Shape70.setGeometry(&IndexedFaceSet74);

Transform69.addChild(&Shape70);

Switch44.addChild(&Transform69);

Transform& Transform77 =  Transform();
Transform77.setDEF(CString("b4"));
Transform77.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform77.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Material80.setAmbientIntensity(0.148936);
Material80.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material80.setShininess(0);
Appearance79.addChild(&Material80);

ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUrl(new CString[]{CString("shirt9.jpg")}, 1);
Appearance79.addChild(&ImageTexture81);

Shape78.addChild(&Appearance79);

IndexedFaceSet& IndexedFaceSet82 =  IndexedFaceSet();
IndexedFaceSet82.setConvex(false);
IndexedFaceSet82.setCreaseAngle(3.14159);
IndexedFaceSet82.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate83 =  TextureCoordinate();
TextureCoordinate83.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet82.setTexCoord(&TextureCoordinate83);

Coordinate& Coordinate84 =  Coordinate();
Coordinate84.setUSE(CString("hbco"));
IndexedFaceSet82.setCoord(&Coordinate84);

Shape78.setGeometry(&IndexedFaceSet82);

Transform77.addChild(&Shape78);

Switch44.addChild(&Transform77);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("b5"));
Transform85.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform85.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Material& Material88 =  Material();
Material88.setAmbientIntensity(0.148936);
Material88.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material88.setShininess(0);
Appearance87.addChild(&Material88);

ImageTexture& ImageTexture89 =  ImageTexture();
ImageTexture89.setUrl(new CString[]{CString("shirt5.jpg")}, 1);
Appearance87.addChild(&ImageTexture89);

Shape86.addChild(&Appearance87);

IndexedFaceSet& IndexedFaceSet90 =  IndexedFaceSet();
IndexedFaceSet90.setConvex(false);
IndexedFaceSet90.setCreaseAngle(3.14159);
IndexedFaceSet90.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate91 =  TextureCoordinate();
TextureCoordinate91.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet90.setTexCoord(&TextureCoordinate91);

Coordinate& Coordinate92 =  Coordinate();
Coordinate92.setUSE(CString("hbco"));
IndexedFaceSet90.setCoord(&Coordinate92);

Shape86.setGeometry(&IndexedFaceSet90);

Transform85.addChild(&Shape86);

Switch44.addChild(&Transform85);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("b6"));
Transform93.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform93.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape94 =  Shape();
Appearance& Appearance95 =  Appearance();
Material& Material96 =  Material();
Material96.setAmbientIntensity(0.148936);
Material96.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material96.setShininess(0);
Appearance95.addChild(&Material96);

ImageTexture& ImageTexture97 =  ImageTexture();
ImageTexture97.setUrl(new CString[]{CString("shirt4.jpg")}, 1);
Appearance95.addChild(&ImageTexture97);

Shape94.addChild(&Appearance95);

IndexedFaceSet& IndexedFaceSet98 =  IndexedFaceSet();
IndexedFaceSet98.setConvex(false);
IndexedFaceSet98.setCreaseAngle(3.14159);
IndexedFaceSet98.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate99 =  TextureCoordinate();
TextureCoordinate99.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet98.setTexCoord(&TextureCoordinate99);

Coordinate& Coordinate100 =  Coordinate();
Coordinate100.setUSE(CString("hbco"));
IndexedFaceSet98.setCoord(&Coordinate100);

Shape94.setGeometry(&IndexedFaceSet98);

Transform93.addChild(&Shape94);

Switch44.addChild(&Transform93);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("b7"));
Transform101.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform101.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Material& Material104 =  Material();
Material104.setAmbientIntensity(0.148936);
Material104.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material104.setShininess(0);
Appearance103.addChild(&Material104);

ImageTexture& ImageTexture105 =  ImageTexture();
ImageTexture105.setUrl(new CString[]{CString("shirt2.jpg")}, 1);
Appearance103.addChild(&ImageTexture105);

Shape102.addChild(&Appearance103);

IndexedFaceSet& IndexedFaceSet106 =  IndexedFaceSet();
IndexedFaceSet106.setConvex(false);
IndexedFaceSet106.setCreaseAngle(3.14159);
IndexedFaceSet106.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate107 =  TextureCoordinate();
TextureCoordinate107.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet106.setTexCoord(&TextureCoordinate107);

Coordinate& Coordinate108 =  Coordinate();
Coordinate108.setUSE(CString("hbco"));
IndexedFaceSet106.setCoord(&Coordinate108);

Shape102.setGeometry(&IndexedFaceSet106);

Transform101.addChild(&Shape102);

Switch44.addChild(&Transform101);

Transform& Transform109 =  Transform();
Transform109.setDEF(CString("b8"));
Transform109.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform109.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
Material& Material112 =  Material();
Material112.setAmbientIntensity(0.148936);
Material112.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material112.setShininess(0);
Appearance111.addChild(&Material112);

ImageTexture& ImageTexture113 =  ImageTexture();
ImageTexture113.setUrl(new CString[]{CString("cyber4.jpg")}, 1);
Appearance111.addChild(&ImageTexture113);

Shape110.addChild(&Appearance111);

IndexedFaceSet& IndexedFaceSet114 =  IndexedFaceSet();
IndexedFaceSet114.setConvex(false);
IndexedFaceSet114.setCreaseAngle(3.14159);
IndexedFaceSet114.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate115 =  TextureCoordinate();
TextureCoordinate115.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet114.setTexCoord(&TextureCoordinate115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setUSE(CString("hbco"));
IndexedFaceSet114.setCoord(&Coordinate116);

Shape110.setGeometry(&IndexedFaceSet114);

Transform109.addChild(&Shape110);

Switch44.addChild(&Transform109);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("b9"));
Transform117.setTranslation(new float[]{0.0,2.86491e-11,2.16716e-13});
Shape& Shape118 =  Shape();
Appearance& Appearance119 =  Appearance();
Material& Material120 =  Material();
Material120.setAmbientIntensity(0.148936);
Material120.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material120.setShininess(0);
Appearance119.addChild(&Material120);

ImageTexture& ImageTexture121 =  ImageTexture();
ImageTexture121.setUrl(new CString[]{CString("shirt3.jpg")}, 1);
Appearance119.addChild(&ImageTexture121);

Shape118.addChild(&Appearance119);

IndexedFaceSet& IndexedFaceSet122 =  IndexedFaceSet();
IndexedFaceSet122.setConvex(false);
IndexedFaceSet122.setCreaseAngle(3.14159);
IndexedFaceSet122.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate123 =  TextureCoordinate();
TextureCoordinate123.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet122.setTexCoord(&TextureCoordinate123);

Coordinate& Coordinate124 =  Coordinate();
Coordinate124.setUSE(CString("hbco"));
IndexedFaceSet122.setCoord(&Coordinate124);

Shape118.setGeometry(&IndexedFaceSet122);

Transform117.addChild(&Shape118);

Switch44.addChild(&Transform117);

Transform43.addChild(&Switch44);

Transform35.addChild(&Transform43);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("ArmR"));
Transform125.setTranslation(new float[]{-5.96046e-8,3.57628e-7,2.98023e-8});
Transform125.setScale(new float[]{1.0,0.999991,0.999991});
Transform125.setCenter(new float[]{0.289521,1.00008,0.0239703});
Transform& Transform126 =  Transform();
Transform126.setDEF(CString("armR"));
Transform126.setTranslation(new float[]{-1.49012e-7,-1.78814e-7,7.45058e-8});
Transform126.setScale(new float[]{0.999999,0.99999,0.99999});
Transform126.setCenter(new float[]{0.295036,0.973184,0.0197765});
Group& Group127 =  Group();
Group& Group128 =  Group();
Group128.setDEF(CString("armR-swing20"));
TimeSensor& TimeSensor129 =  TimeSensor();
TimeSensor129.setDEF(CString("Time_2"));
TimeSensor129.setEnabled(false);
TimeSensor129.setCycleInterval(4.5);
TimeSensor129.setLoop(true);
TimeSensor129.setStartTime(966384274.309139);
TimeSensor129.setStopTime(1);
Group128.addChild(&TimeSensor129);

Group127.addChild(&Group128);

OrientationInterpolator& OrientationInterpolator130 =  OrientationInterpolator();
OrientationInterpolator130.setDEF(CString("armRRotationInterp"));
OrientationInterpolator130.setKey(new float[]{0.0,0.0266666,0.0533332,0.0799998,0.106666,0.133333,0.158333,0.183333,0.208333,0.233333,0.258333,0.283333,0.308333,0.333333,0.355555,0.377778,0.4,0.422222,0.444445,0.466667,0.488889,0.511111,0.533334,0.555556,0.578948,0.60234,0.625731,0.649123,0.672515,0.695907,0.719298,0.74269,0.766082,0.789474,0.812866,0.836257,0.859649,0.883041,0.906433,0.929825,0.953216,0.976608,1.0}, 43);
OrientationInterpolator130.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0110486,-1.0,0.0,0.0,0.0283205,-1.0,0.0,0.0,0.0460809,-1.0,0.0,0.0,0.0585592,-1.0,0.0,0.0,0.0599993,-1.0,0.0,0.0,0.052382,-1.0,0.0,0.0,0.0384355,-1.0,0.0,0.0,0.0202741,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0202741,1.0,0.0,0.0,0.0384355,1.0,0.0,0.0,0.052382,1.0,0.0,0.0,0.0599993,1.0,0.0,0.0,0.0610199,1.0,0.0,0.0,0.0585592,1.0,0.0,0.0,0.0533383,1.0,0.0,0.0,0.0460809,1.0,0.0,0.0,0.0374998,1.0,0.0,0.0,0.0283205,1.0,0.0,0.0,0.0192609,1.0,0.0,0.0,0.0110486,1.0,0.0,0.0,0.00431238,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.00119604,-1.0,0.0,0.0,0.00258374,-1.0,0.0,0.0,0.00338291,-1.0,0.0,0.0,0.00396682,-1.0,0.0,0.0,0.00425674,-1.0,0.0,0.0,0.00436732,-1.0,0.0,0.0,0.00436732,-1.0,0.0,0.0,0.00420035,-1.0,0.0,0.0,0.00390625,-1.0,0.0,0.0,0.00358812,-1.0,0.0,0.0,0.00300997,-1.0,0.0,0.0,0.00258374,-1.0,0.0,0.0,0.00195312,-1.0,0.0,0.0,0.00154408,-1.0,0.0,0.0,0.00119604,-1.0,0.0,0.0,0.000690534,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 172);
Group127.addChild(&OrientationInterpolator130);

Transform126.addChild(&Group127);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("oarmR"));
Shape& Shape132 =  Shape();
Appearance& Appearance133 =  Appearance();
Material& Material134 =  Material();
Material134.setDEF(CString("_5"));
Material134.setAmbientIntensity(0.255319);
Material134.setDiffuseColor(new float[]{1.0,0.600935,0.355765});
Material134.setShininess(0);
Appearance133.addChild(&Material134);

Shape132.addChild(&Appearance133);

IndexedFaceSet& IndexedFaceSet135 =  IndexedFaceSet();
IndexedFaceSet135.setSolid(false);
IndexedFaceSet135.setConvex(false);
IndexedFaceSet135.setCreaseAngle(3.14159);
IndexedFaceSet135.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate136 =  Coordinate();
Coordinate136.setPoint(new float[]{0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417}, 54);
IndexedFaceSet135.setCoord(&Coordinate136);

Shape132.setGeometry(&IndexedFaceSet135);

Transform131.addChild(&Shape132);

Transform126.addChild(&Transform131);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("handR"));
Transform137.setCenter(new float[]{0.386713,0.551949,0.0217319});
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
Material& Material140 =  Material();
Material140.setUSE(CString("_5"));
Appearance139.addChild(&Material140);

Shape138.addChild(&Appearance139);

IndexedFaceSet& IndexedFaceSet141 =  IndexedFaceSet();
IndexedFaceSet141.setSolid(false);
IndexedFaceSet141.setConvex(false);
IndexedFaceSet141.setCreaseAngle(3.14159);
IndexedFaceSet141.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate142 =  Coordinate();
Coordinate142.setPoint(new float[]{0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045}, 84);
IndexedFaceSet141.setCoord(&Coordinate142);

Shape138.setGeometry(&IndexedFaceSet141);

Transform137.addChild(&Shape138);

Transform126.addChild(&Transform137);

Transform125.addChild(&Transform126);

Transform35.addChild(&Transform125);

Transform& Transform143 =  Transform();
Transform143.setDEF(CString("ArmL"));
Transform143.setTranslation(new float[]{2.98023e-8,0.0,-2.98023e-8});
Transform143.setCenter(new float[]{-0.298867,0.995243,-0.0108316});
Transform& Transform144 =  Transform();
Transform144.setDEF(CString("armL"));
Transform144.setTranslation(new float[]{-1.19209e-7,2.38419e-7,9.31323e-10});
Transform144.setCenter(new float[]{-0.305306,0.988041,-0.0116445});
Group& Group145 =  Group();
Group& Group146 =  Group();
Group146.setDEF(CString("armL-swing37"));
TimeSensor& TimeSensor147 =  TimeSensor();
TimeSensor147.setDEF(CString("Time_3"));
TimeSensor147.setEnabled(false);
TimeSensor147.setCycleInterval(3.7);
TimeSensor147.setLoop(true);
TimeSensor147.setStartTime(966384274.309139);
TimeSensor147.setStopTime(1);
Group146.addChild(&TimeSensor147);

Group145.addChild(&Group146);

OrientationInterpolator& OrientationInterpolator148 =  OrientationInterpolator();
OrientationInterpolator148.setDEF(CString("armLRotationInterp"));
OrientationInterpolator148.setKey(new float[]{0.0,0.0287162,0.0574324,0.0861486,0.114865,0.143581,0.172297,0.201013,0.22973,0.258446,0.287162,0.315878,0.344594,0.37331,0.402027,0.430743,0.459459,0.486486,0.513513,0.54054,0.567567,0.594594,0.621621,0.648648,0.675676,0.702703,0.72973,0.756757,0.783784,0.810811,0.837838,0.864865,0.891892,0.918919,0.945946,0.972973,1.0}, 37);
OrientationInterpolator148.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.000690534,0.0,0.0,1.0,0.00138107,0.0,0.0,1.0,0.00239208,0.0,0.0,1.0,0.00371864,0.0,0.0,1.0,0.00497951,0.0,0.0,1.0,0.00636641,0.0,0.0,1.0,0.00775123,0.0,0.0,1.0,0.00913491,0.0,0.0,1.0,0.0105179,0.0,0.0,1.0,0.0118603,0.0,0.0,1.0,0.0130655,0.0,0.0,1.0,0.0141349,0.0,0.0,1.0,0.0150182,0.0,0.0,1.0,0.0157163,0.0,0.0,1.0,0.0161503,0.0,0.0,1.0,0.0162972,0.0,0.0,1.0,0.0161945,0.0,0.0,1.0,0.0159123,0.0,0.0,1.0,0.0154717,0.0,0.0,1.0,0.0148586,0.0,0.0,1.0,0.0141349,0.0,0.0,1.0,0.0132827,0.0,0.0,1.0,0.0123334,0.0,0.0,1.0,0.0113256,0.0,0.0,1.0,0.0102887,0.0,0.0,1.0,0.00916098,0.0,0.0,1.0,0.00802329,0.0,0.0,1.0,0.00690534,0.0,0.0,1.0,0.00581854,0.0,0.0,1.0,0.00468343,0.0,0.0,1.0,0.00371864,0.0,0.0,1.0,0.00267443,0.0,0.0,1.0,0.00195312,0.0,0.0,1.0,0.00119604,0.0,0.0,1.0,0.000690534,0.0,0.0,1.0,0.0}, 148);
Group145.addChild(&OrientationInterpolator148);

Transform144.addChild(&Group145);

Transform& Transform149 =  Transform();
Transform149.setDEF(CString("oarmL"));
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_5"));
Appearance151.addChild(&Material152);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet153 =  IndexedFaceSet();
IndexedFaceSet153.setSolid(false);
IndexedFaceSet153.setConvex(false);
IndexedFaceSet153.setCreaseAngle(3.14159);
IndexedFaceSet153.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1,3,2,12,13,-1,2,5,14,12,-1,5,7,15,14,-1,7,9,16,15,-1,9,11,17,16,-1,11,3,13,17,-1}, 60);
Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742}, 54);
IndexedFaceSet153.setCoord(&Coordinate154);

Shape150.setGeometry(&IndexedFaceSet153);

Transform149.addChild(&Shape150);

Transform144.addChild(&Transform149);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("handL"));
Transform155.setTranslation(new float[]{2.98023e-8,0.0,4.65661e-10});
Transform155.setScale(new float[]{0.999996,0.999998,1.0});
Transform155.setScaleOrientation(new float[]{0.0,0.0,-1.0,0.739374});
Transform155.setCenter(new float[]{-0.394827,0.544969,-0.00705719});
Group& Group156 =  Group();
Group& Group157 =  Group();
Group157.setDEF(CString("handR70"));
TimeSensor& TimeSensor158 =  TimeSensor();
TimeSensor158.setDEF(CString("Time_4"));
TimeSensor158.setEnabled(false);
TimeSensor158.setCycleInterval(7);
TimeSensor158.setLoop(true);
TimeSensor158.setStartTime(966384274.309139);
TimeSensor158.setStopTime(1);
Group157.addChild(&TimeSensor158);

Group156.addChild(&Group157);

OrientationInterpolator& OrientationInterpolator159 =  OrientationInterpolator();
OrientationInterpolator159.setDEF(CString("handLRotationInterp"));
OrientationInterpolator159.setKey(new float[]{0.0,0.642857,1.0}, 3);
OrientationInterpolator159.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.179019,0.0,0.0,1.0,0.0}, 12);
Group156.addChild(&OrientationInterpolator159);

Transform155.addChild(&Group156);

Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setUSE(CString("_5"));
Appearance161.addChild(&Material162);

Shape160.addChild(&Appearance161);

IndexedFaceSet& IndexedFaceSet163 =  IndexedFaceSet();
IndexedFaceSet163.setSolid(false);
IndexedFaceSet163.setConvex(false);
IndexedFaceSet163.setCreaseAngle(3.14159);
IndexedFaceSet163.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,0,3,-1,4,1,3,-1,5,6,3,-1,3,6,4,-1,4,6,7,-1,6,8,7,-1,1,4,9,-1,4,7,9,-1,1,9,10,-1,10,9,11,-1,7,8,12,-1,8,13,12,-1,8,11,13,-1,11,14,13,-1,12,13,15,-1,13,14,15,-1,7,12,15,-1,11,15,14,-1,9,7,15,-1,9,15,11,-1,5,3,16,-1,2,16,3,-1,5,16,6,-1,6,17,8,-1,8,17,11,-1,17,10,11,-1,10,18,1,-1,18,10,17,-1,1,18,2,-1,17,6,19,-1,6,16,19,-1,19,18,17,-1,19,16,20,-1,21,20,16,-1,2,22,16,-1,16,22,21,-1,22,2,23,-1,2,18,23,-1,18,19,23,-1,19,20,23,-1,20,24,23,-1,20,25,24,-1,21,25,20,-1,21,26,25,-1,22,26,21,-1,22,23,26,-1,24,25,27,-1,25,26,27,-1,23,24,27,-1,23,27,26,-1}, 208);
Coordinate& Coordinate164 =  Coordinate();
Coordinate164.setPoint(new float[]{-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637}, 84);
IndexedFaceSet163.setCoord(&Coordinate164);

Shape160.setGeometry(&IndexedFaceSet163);

Transform155.addChild(&Shape160);

Transform144.addChild(&Transform155);

Transform143.addChild(&Transform144);

Transform35.addChild(&Transform143);

Transform& Transform165 =  Transform();
Transform165.setDEF(CString("Head"));
Transform165.setTranslation(new float[]{-3.72529e-8,-0.00000107288,1.49012e-8});
Transform165.setScale(new float[]{0.999986,0.999952,0.999969});
Transform165.setScaleOrientation(new float[]{0.272252,0.962065,-0.0175875,0.748075});
Transform165.setCenter(new float[]{-0.00422851,1.04834,0.00417849});
Group& Group166 =  Group();
Group& Group167 =  Group();
Group167.setDEF(CString("head"));
TimeSensor& TimeSensor168 =  TimeSensor();
TimeSensor168.setDEF(CString("Time_5"));
TimeSensor168.setEnabled(false);
TimeSensor168.setCycleInterval(20);
TimeSensor168.setLoop(true);
TimeSensor168.setStartTime(966384274.309139);
TimeSensor168.setStopTime(1);
Group167.addChild(&TimeSensor168);

Group166.addChild(&Group167);

OrientationInterpolator& OrientationInterpolator169 =  OrientationInterpolator();
OrientationInterpolator169.setDEF(CString("HeadRotationInterp"));
OrientationInterpolator169.setKey(new float[]{0.0,0.05,0.1,0.15,0.2,0.25,0.3,0.366667,0.433333,0.5,0.55,0.65,0.7,0.75,0.8,0.9,0.95,1.0}, 18);
OrientationInterpolator169.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.00000827175,0.0000022421,1.0,0.000976562,0.00000827175,0.0000022421,1.0,0.00308816,0.00000827175,0.0000022421,1.0,0.00352105,0.0,0.0,1.0,0.0,-0.00000827175,-0.0000022421,-1.0,0.0496813,0.0,0.0,1.0,0.0,0.349332,0.85517,0.38295,0.0108526,0.374536,0.916873,0.138083,0.0202623,0.0,0.0,1.0,0.0,-0.377728,-0.92469,-0.0476497,0.271169,-0.377728,-0.92469,-0.0476497,0.271169,-0.24416,0.963031,-0.113827,0.384429,-0.24416,0.963031,-0.113827,0.384429,-0.611809,0.790638,-0.0241082,0.381038,-0.24416,0.963031,-0.113827,0.384429,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 72);
Group166.addChild(&OrientationInterpolator169);

Transform165.addChild(&Group166);

Transform& Transform170 =  Transform();
Transform170.setDEF(CString("headU"));
Shape& Shape171 =  Shape();
Appearance& Appearance172 =  Appearance();
Material& Material173 =  Material();
Material173.setUSE(CString("_5"));
Appearance172.addChild(&Material173);

Shape171.addChild(&Appearance172);

IndexedFaceSet& IndexedFaceSet174 =  IndexedFaceSet();
IndexedFaceSet174.setSolid(false);
IndexedFaceSet174.setConvex(false);
IndexedFaceSet174.setCreaseAngle(1.53973);
IndexedFaceSet174.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,20,21,6,4,-1,21,22,8,6,-1,22,23,10,8,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1}, 136);
Coordinate& Coordinate175 =  Coordinate();
Coordinate175.setPoint(new float[]{-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751}, 102);
IndexedFaceSet174.setCoord(&Coordinate175);

Shape171.setGeometry(&IndexedFaceSet174);

Transform170.addChild(&Shape171);

Transform165.addChild(&Transform170);

Transform& Transform176 =  Transform();
Transform176.setDEF(CString("headO"));
Transform176.setTranslation(new float[]{2.32831e-10,2.38419e-7,3.35276e-8});
Transform176.setCenter(new float[]{-0.00371499,1.24837,0.029451});
Transform& Transform177 =  Transform();
Transform177.setDEF(CString("augen"));
Transform177.setCenter(new float[]{-0.015762,1.38316,0.30789});
Group& Group178 =  Group();
Group& Group179 =  Group();
Group179.setDEF(CString("zwinker"));
TimeSensor& TimeSensor180 =  TimeSensor();
TimeSensor180.setDEF(CString("Time_6"));
TimeSensor180.setEnabled(false);
TimeSensor180.setCycleInterval(12);
TimeSensor180.setLoop(true);
TimeSensor180.setStartTime(966384274.309139);
TimeSensor180.setStopTime(1);
Group179.addChild(&TimeSensor180);

Group178.addChild(&Group179);

ColorInterpolator& ColorInterpolator181 =  ColorInterpolator();
ColorInterpolator181.setDEF(CString("augenDiffuseColorInterp"));
ColorInterpolator181.setKey(new float[]{0.0,0.14999,0.15,0.166657,0.166667,0.39999,0.4,0.416657,0.416667,0.733323,0.733333,0.74999,0.75,0.766657,0.766667,0.783323,0.783333,0.99999,1.0}, 19);
ColorInterpolator181.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765,1.0,0.600935,0.355765,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.600935,0.355765}, 57);
Group178.addChild(&ColorInterpolator181);

Transform177.addChild(&Group178);

Shape& Shape182 =  Shape();
Appearance& Appearance183 =  Appearance();
Material& Material184 =  Material();
Material184.setDEF(CString("_6"));
Material184.setAmbientIntensity(0.255319);
Material184.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material184.setShininess(0);
Appearance183.addChild(&Material184);

Shape182.addChild(&Appearance183);

IndexedFaceSet& IndexedFaceSet185 =  IndexedFaceSet();
IndexedFaceSet185.setSolid(false);
IndexedFaceSet185.setConvex(false);
IndexedFaceSet185.setCreaseAngle(1.60186);
IndexedFaceSet185.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,4,0,2,-1,5,4,2,-1,6,5,2,-1,3,6,2,-1,1,0,7,-1,0,4,7,-1,3,1,7,-1,4,5,7,-1,6,3,7,-1,5,6,7,-1,8,9,10,-1,9,11,10,-1,12,8,10,-1,13,12,10,-1,14,13,10,-1,11,14,10,-1,9,8,15,-1,8,12,15,-1,11,9,15,-1,12,13,15,-1,14,11,15,-1,13,14,15,-1}, 96);
Coordinate& Coordinate186 =  Coordinate();
Coordinate186.setPoint(new float[]{-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.125367,1.36426,0.280492,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0964625,1.36426,0.291701,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 48);
IndexedFaceSet185.setCoord(&Coordinate186);

Shape182.setGeometry(&IndexedFaceSet185);

Transform177.addChild(&Shape182);

Transform176.addChild(&Transform177);

Transform& Transform187 =  Transform();
Transform187.setDEF(CString("haar"));
Switch& Switch188 =  Switch();
Switch188.setDEF(CString("_7"));
Switch188.setWhichChoice(1);
Transform& Transform189 =  Transform();
Transform189.setDEF(CString("h1"));
Shape& Shape190 =  Shape();
Appearance& Appearance191 =  Appearance();
Material& Material192 =  Material();
Material192.setAmbientIntensity(0.148936);
Material192.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material192.setShininess(0);
Appearance191.addChild(&Material192);

ImageTexture& ImageTexture193 =  ImageTexture();
ImageTexture193.setUrl(new CString[]{CString("hair1.jpg")}, 1);
Appearance191.addChild(&ImageTexture193);

Shape190.addChild(&Appearance191);

IndexedFaceSet& IndexedFaceSet194 =  IndexedFaceSet();
IndexedFaceSet194.setSolid(false);
IndexedFaceSet194.setConvex(false);
IndexedFaceSet194.setCreaseAngle(3.14159);
IndexedFaceSet194.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate195 =  TextureCoordinate();
TextureCoordinate195.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet194.setTexCoord(&TextureCoordinate195);

Coordinate& Coordinate196 =  Coordinate();
Coordinate196.setDEF(CString("hhco"));
Coordinate196.setPoint(new float[]{0.238211,1.471,-0.220467,0.198251,1.55876,0.0313386,0.377841,1.43577,-0.00714531,0.134999,1.579,-0.0903402,-0.18314,1.60778,0.146798,-0.247618,1.60732,0.00880936,-0.411981,1.43577,-0.0470541,-0.214767,1.471,-0.243355,-0.125196,1.579,-0.103488,0.0158279,1.48493,-0.313164,0.00725975,1.58699,-0.143594,-0.00227428,1.65935,0.0674612,0.277193,1.31523,-0.28818,0.404551,1.27447,-0.0431701,0.349909,1.23012,0.213632,-0.369653,1.23012,0.177274,-0.340793,1.21799,0.175881,-0.296545,1.38244,0.180247,-0.313821,1.40203,0.187276,-0.39813,1.27447,-0.0837286,-0.246724,1.31523,-0.314648,0.0199828,1.33133,-0.395392,-0.101431,1.54401,0.270843,-0.0769222,1.4973,0.225338,0.0538245,1.4973,0.231944,0.293354,1.40203,0.217955,0.350422,1.14933,-0.0780944,0.332594,1.1399,-0.0774054,0.263445,1.1857,-0.274314,0.321337,1.21799,0.209338,0.37957,1.26148,-0.042198,0.307546,1.09211,0.193511,0.329131,1.10101,0.196722,-0.364571,1.14933,-0.114222,-0.340485,1.10101,0.162887,-0.318688,1.09211,0.161868,-0.346907,1.1399,-0.11174,-0.373375,1.26148,-0.0802434,-0.224667,1.19678,-0.311133,-0.213683,1.1857,-0.298422,0.0189626,1.21513,-0.375202,0.0181397,1.20332,-0.358916,0.275653,1.19678,-0.285857,0.0803699,1.55286,0.386279,0.0342505,1.58699,0.341122,-0.00180715,1.38328,0.368284,0.145419,1.52038,0.403749,0.149685,1.48603,0.349656,0.052231,1.44079,0.328486,-0.0276137,1.65405,0.180214,0.0210674,1.63967,0.24235,0.16156,1.59305,0.254132,0.216021,1.45452,0.294783,0.213277,1.43423,0.279438,0.276874,1.38244,0.209221,0.0328324,1.49261,0.284621,0.16156,1.59305,0.254132,0.0214095,1.6383,0.244912,0.293354,1.40203,0.217955,0.216021,1.45452,0.294783,0.216021,1.45452,0.294783,0.276874,1.38244,0.209221,0.218313,1.45296,0.292504,0.219894,1.45189,0.290931}, 192);
IndexedFaceSet194.setCoord(&Coordinate196);

Shape190.setGeometry(&IndexedFaceSet194);

Transform189.addChild(&Shape190);

Switch188.addChild(&Transform189);

Transform& Transform197 =  Transform();
Transform197.setDEF(CString("h2"));
Transform197.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform197.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape198 =  Shape();
Appearance& Appearance199 =  Appearance();
Material& Material200 =  Material();
Material200.setAmbientIntensity(0.148936);
Material200.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material200.setShininess(0);
Appearance199.addChild(&Material200);

ImageTexture& ImageTexture201 =  ImageTexture();
ImageTexture201.setUrl(new CString[]{CString("hair2.jpg")}, 1);
Appearance199.addChild(&ImageTexture201);

Shape198.addChild(&Appearance199);

IndexedFaceSet& IndexedFaceSet202 =  IndexedFaceSet();
IndexedFaceSet202.setSolid(false);
IndexedFaceSet202.setConvex(false);
IndexedFaceSet202.setCreaseAngle(3.14159);
IndexedFaceSet202.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate203 =  TextureCoordinate();
TextureCoordinate203.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet202.setTexCoord(&TextureCoordinate203);

Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setUSE(CString("hhco"));
IndexedFaceSet202.setCoord(&Coordinate204);

Shape198.setGeometry(&IndexedFaceSet202);

Transform197.addChild(&Shape198);

Switch188.addChild(&Transform197);

Transform& Transform205 =  Transform();
Transform205.setDEF(CString("h3"));
Transform205.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform205.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape206 =  Shape();
Appearance& Appearance207 =  Appearance();
Material& Material208 =  Material();
Material208.setAmbientIntensity(0.148936);
Material208.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material208.setShininess(0);
Appearance207.addChild(&Material208);

ImageTexture& ImageTexture209 =  ImageTexture();
ImageTexture209.setUrl(new CString[]{CString("hair3.jpg")}, 1);
Appearance207.addChild(&ImageTexture209);

Shape206.addChild(&Appearance207);

IndexedFaceSet& IndexedFaceSet210 =  IndexedFaceSet();
IndexedFaceSet210.setSolid(false);
IndexedFaceSet210.setConvex(false);
IndexedFaceSet210.setCreaseAngle(3.14159);
IndexedFaceSet210.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate211 =  TextureCoordinate();
TextureCoordinate211.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet210.setTexCoord(&TextureCoordinate211);

Coordinate& Coordinate212 =  Coordinate();
Coordinate212.setUSE(CString("hhco"));
IndexedFaceSet210.setCoord(&Coordinate212);

Shape206.setGeometry(&IndexedFaceSet210);

Transform205.addChild(&Shape206);

Switch188.addChild(&Transform205);

Transform& Transform213 =  Transform();
Transform213.setDEF(CString("h4"));
Transform213.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform213.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Material& Material216 =  Material();
Material216.setAmbientIntensity(0.148936);
Material216.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material216.setShininess(0);
Appearance215.addChild(&Material216);

ImageTexture& ImageTexture217 =  ImageTexture();
ImageTexture217.setUrl(new CString[]{CString("hair4.jpg")}, 1);
Appearance215.addChild(&ImageTexture217);

Shape214.addChild(&Appearance215);

IndexedFaceSet& IndexedFaceSet218 =  IndexedFaceSet();
IndexedFaceSet218.setSolid(false);
IndexedFaceSet218.setConvex(false);
IndexedFaceSet218.setCreaseAngle(3.14159);
IndexedFaceSet218.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate219 =  TextureCoordinate();
TextureCoordinate219.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet218.setTexCoord(&TextureCoordinate219);

Coordinate& Coordinate220 =  Coordinate();
Coordinate220.setUSE(CString("hhco"));
IndexedFaceSet218.setCoord(&Coordinate220);

Shape214.setGeometry(&IndexedFaceSet218);

Transform213.addChild(&Shape214);

Switch188.addChild(&Transform213);

Transform187.addChild(&Switch188);

Transform176.addChild(&Transform187);

Transform& Transform221 =  Transform();
Transform221.setDEF(CString("ohead"));
Shape& Shape222 =  Shape();
Appearance& Appearance223 =  Appearance();
Material& Material224 =  Material();
Material224.setUSE(CString("_5"));
Appearance223.addChild(&Material224);

Shape222.addChild(&Appearance223);

IndexedFaceSet& IndexedFaceSet225 =  IndexedFaceSet();
IndexedFaceSet225.setSolid(false);
IndexedFaceSet225.setConvex(false);
IndexedFaceSet225.setCreaseAngle(1.53973);
IndexedFaceSet225.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,3,2,8,-1,2,5,9,8,-1,7,9,5,-1,10,11,12,13,-1,11,14,15,12,-1}, 38);
Coordinate& Coordinate226 =  Coordinate();
Coordinate226.setPoint(new float[]{-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829}, 48);
IndexedFaceSet225.setCoord(&Coordinate226);

Shape222.setGeometry(&IndexedFaceSet225);

Transform221.addChild(&Shape222);

Transform176.addChild(&Transform221);

Transform165.addChild(&Transform176);

Transform35.addChild(&Transform165);

Transform34.addChild(&Transform35);

Transform& Transform227 =  Transform();
Transform227.setDEF(CString("BeinL"));
Transform227.setCenter(new float[]{-0.198186,0.30347,-0.0111347});
Transform& Transform228 =  Transform();
Transform228.setDEF(CString("beinL"));
Shape& Shape229 =  Shape();
Appearance& Appearance230 =  Appearance();
Material& Material231 =  Material();
Material231.setUSE(CString("_5"));
Appearance230.addChild(&Material231);

Shape229.addChild(&Appearance230);

IndexedFaceSet& IndexedFaceSet232 =  IndexedFaceSet();
IndexedFaceSet232.setSolid(false);
IndexedFaceSet232.setConvex(false);
IndexedFaceSet232.setCreaseAngle(3.14159);
IndexedFaceSet232.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate233 =  Coordinate();
Coordinate233.setPoint(new float[]{-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464}, 36);
IndexedFaceSet232.setCoord(&Coordinate233);

Shape229.setGeometry(&IndexedFaceSet232);

Transform228.addChild(&Shape229);

Transform227.addChild(&Transform228);

Transform& Transform234 =  Transform();
Transform234.setDEF(CString("fussL"));
Transform234.setCenter(new float[]{-0.198186,0.1544,-0.00509336});
Shape& Shape235 =  Shape();
Appearance& Appearance236 =  Appearance();
Material& Material237 =  Material();
Material237.setDEF(CString("_8"));
Material237.setAmbientIntensity(0.148936);
Material237.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material237.setShininess(0);
Appearance236.addChild(&Material237);

ImageTexture& ImageTexture238 =  ImageTexture();
ImageTexture238.setDEF(CString("_9"));
ImageTexture238.setUrl(new CString[]{CString("shoes1.jpg")}, 1);
Appearance236.addChild(&ImageTexture238);

Shape235.addChild(&Appearance236);

IndexedFaceSet& IndexedFaceSet239 =  IndexedFaceSet();
IndexedFaceSet239.setSolid(false);
IndexedFaceSet239.setConvex(false);
IndexedFaceSet239.setCreaseAngle(3.14159);
IndexedFaceSet239.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate240 =  TextureCoordinate();
TextureCoordinate240.setPoint(new float[]{0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 22);
IndexedFaceSet239.setTexCoord(&TextureCoordinate240);

Coordinate& Coordinate241 =  Coordinate();
Coordinate241.setPoint(new float[]{-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572}, 33);
IndexedFaceSet239.setCoord(&Coordinate241);

Shape235.setGeometry(&IndexedFaceSet239);

Transform234.addChild(&Shape235);

Transform227.addChild(&Transform234);

Transform34.addChild(&Transform227);

Transform& Transform242 =  Transform();
Transform242.setDEF(CString("BeinR"));
Transform242.setCenter(new float[]{0.196713,0.303457,0.0297802});
Transform& Transform243 =  Transform();
Transform243.setDEF(CString("beinR"));
Shape& Shape244 =  Shape();
Appearance& Appearance245 =  Appearance();
Material& Material246 =  Material();
Material246.setUSE(CString("_5"));
Appearance245.addChild(&Material246);

Shape244.addChild(&Appearance245);

IndexedFaceSet& IndexedFaceSet247 =  IndexedFaceSet();
IndexedFaceSet247.setSolid(false);
IndexedFaceSet247.setConvex(false);
IndexedFaceSet247.setCreaseAngle(3.14159);
IndexedFaceSet247.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,0,3,11,-1}, 30);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619}, 36);
IndexedFaceSet247.setCoord(&Coordinate248);

Shape244.setGeometry(&IndexedFaceSet247);

Transform243.addChild(&Shape244);

Transform242.addChild(&Transform243);

Transform& Transform249 =  Transform();
Transform249.setDEF(CString("fussR"));
Transform249.setTranslation(new float[]{-1.49012e-8,-1.49012e-8,-5.58794e-9});
Transform249.setScale(new float[]{1.0,0.999999,0.999999});
Transform249.setCenter(new float[]{0.196713,0.157104,0.00995016});
Group& Group250 =  Group();
Group& Group251 =  Group();
Group251.setDEF(CString("fussL94"));
TimeSensor& TimeSensor252 =  TimeSensor();
TimeSensor252.setDEF(CString("Time_7"));
TimeSensor252.setEnabled(false);
TimeSensor252.setCycleInterval(9.4);
TimeSensor252.setLoop(true);
TimeSensor252.setStartTime(966384274.309139);
TimeSensor252.setStopTime(1);
Group251.addChild(&TimeSensor252);

Group250.addChild(&Group251);

OrientationInterpolator& OrientationInterpolator253 =  OrientationInterpolator();
OrientationInterpolator253.setDEF(CString("fussLRotationInterp"));
OrientationInterpolator253.setKey(new float[]{0.0,0.0106383,0.0319149,0.0425532,0.0638298,1.0}, 6);
OrientationInterpolator253.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0923411,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0923411,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
Group250.addChild(&OrientationInterpolator253);

Transform249.addChild(&Group250);

Shape& Shape254 =  Shape();
Appearance& Appearance255 =  Appearance();
Material& Material256 =  Material();
Material256.setUSE(CString("_8"));
Appearance255.addChild(&Material256);

ImageTexture& ImageTexture257 =  ImageTexture();
ImageTexture257.setUSE(CString("_9"));
Appearance255.addChild(&ImageTexture257);

Shape254.addChild(&Appearance255);

IndexedFaceSet& IndexedFaceSet258 =  IndexedFaceSet();
IndexedFaceSet258.setSolid(false);
IndexedFaceSet258.setConvex(false);
IndexedFaceSet258.setCreaseAngle(3.14159);
IndexedFaceSet258.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1}, 54);
TextureCoordinate& TextureCoordinate259 =  TextureCoordinate();
TextureCoordinate259.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869}, 22);
IndexedFaceSet258.setTexCoord(&TextureCoordinate259);

Coordinate& Coordinate260 =  Coordinate();
Coordinate260.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012}, 33);
IndexedFaceSet258.setCoord(&Coordinate260);

Shape254.setGeometry(&IndexedFaceSet258);

Transform249.addChild(&Shape254);

Transform242.addChild(&Transform249);

Transform34.addChild(&Transform242);

Transform31.addChild(&Transform34);

Transform& Transform261 =  Transform();
Transform261.setDEF(CString("lightanim"));
Transform& Transform262 =  Transform();
Transform262.setDEF(CString("NegSFVec3f"));
ProtoInstance& ProtoInstance263 =  ProtoInstance();
ProtoInstance263.setName(CString("NegSFVec3f"));
ProtoInstance263.setDEF(CString("_10"));
Transform262.addChild(&ProtoInstance263);

Transform261.addChild(&Transform262);

Transform& Transform264 =  Transform();
Transform264.setDEF(CString("glowObj"));
Transform264.setTranslation(new float[]{-0.33413,0.504434,0.401033});
Group& Group265 =  Group();
Group& Group266 =  Group();
Group266.setDEF(CString("lightAnim"));
TimeSensor& TimeSensor267 =  TimeSensor();
TimeSensor267.setDEF(CString("Time_8"));
TimeSensor267.setEnabled(false);
TimeSensor267.setCycleInterval(10);
TimeSensor267.setLoop(true);
TimeSensor267.setStartTime(966384274.309139);
TimeSensor267.setStopTime(1);
Group266.addChild(&TimeSensor267);

Group265.addChild(&Group266);

PositionInterpolator& PositionInterpolator268 =  PositionInterpolator();
PositionInterpolator268.setDEF(CString("glowObjTranslationInterp"));
PositionInterpolator268.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.1625,0.175,0.1875,0.2,0.2125,0.225,0.2375,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.56,0.57,0.58,0.59,0.6,0.6125,0.625,0.6375,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.0}, 95);
PositionInterpolator268.setKeyValue(new float[]{-0.33413,0.504434,0.401033,-0.366685,0.597163,0.401033,-0.402491,0.688294,0.401033,-0.436671,0.780225,0.401033,-0.464348,0.87535,0.401033,-0.480644,0.976067,0.401033,-0.493855,1.09228,0.401033,-0.507232,1.2224,0.401033,-0.508332,1.35156,0.401033,-0.48471,1.4649,0.401033,-0.423924,1.54755,0.401033,-0.303983,1.59897,0.401033,-0.133183,1.62907,0.401033,0.0554915,1.63866,0.401033,0.229055,1.62857,0.401033,0.354524,1.59959,0.401033,0.438165,1.51958,0.401033,0.47502,1.39778,0.401033,0.483079,1.26852,0.401033,0.480335,1.16611,0.401033,0.453936,1.10362,0.401033,0.400168,1.06144,0.401033,0.350736,1.02488,0.401033,0.337341,0.97925,0.401033,0.371542,0.93221,0.401033,0.43594,0.880849,0.401033,0.509691,0.827639,0.401033,0.571948,0.77505,0.401033,0.601868,0.725554,0.401033,0.576427,0.639923,0.401033,0.509146,0.537981,0.401033,0.439099,0.475437,0.401033,0.405357,0.507998,0.401033,0.424248,0.642987,0.401033,0.471532,0.858511,0.401033,0.526969,1.10724,0.401033,0.57032,1.34185,0.401033,0.581347,1.51502,0.401033,0.540464,1.6423,0.401033,0.462611,1.71775,0.401033,0.370422,1.75673,0.401033,0.28653,1.77466,0.401033,0.230004,1.76519,0.401033,0.174951,1.72786,0.401033,0.119885,1.67931,0.401033,0.0633189,1.6362,0.401033,0.00376511,1.6152,0.401033,-0.0616264,1.62909,0.401033,-0.131865,1.66678,0.401033,-0.202673,1.70906,0.401033,-0.269776,1.73674,0.401033,-0.328897,1.73063,0.401033,-0.380457,1.67929,0.401033,-0.427308,1.59551,0.401033,-0.468816,1.49646,0.401033,-0.504349,1.39926,0.401033,-0.533274,1.32108,0.401033,-0.562405,1.25072,0.401033,-0.583337,1.19383,0.401033,-0.591667,1.14555,0.401033,-0.582988,1.10103,0.401033,-0.552301,1.06948,0.401033,-0.500875,1.04349,0.401033,-0.4449,1.01989,0.401033,-0.400566,0.99549,0.401033,-0.384061,0.967107,0.401033,-0.424511,0.926628,0.401033,-0.511123,0.876176,0.401033,-0.60021,0.82792,0.401033,-0.648084,0.794032,0.401033,-0.611058,0.786681,0.401033,-0.448253,0.822071,0.401033,-0.188794,0.892089,0.401033,0.106001,0.972429,0.401033,0.374813,1.03879,0.401033,0.556325,1.06686,0.401033,0.649525,1.03346,0.401033,0.695294,0.954786,0.401033,0.695145,0.865624,0.401033,0.65059,0.800753,0.401033,0.563142,0.794955,0.401033,0.340559,0.915958,0.401033,0.0141816,1.12557,0.401033,-0.310395,1.32618,0.401033,-0.527574,1.42018,0.401033,-0.589646,1.38078,0.401033,-0.588062,1.27176,0.401033,-0.548995,1.12644,0.401034,-0.498622,0.978172,0.401034,-0.463118,0.86029,0.401034,-0.44145,0.776061,0.401034,-0.416169,0.703257,0.401034,-0.388823,0.636983,0.401033,-0.36096,0.572341,0.401033,-0.33413,0.504434,0.401033}, 285);
Group265.addChild(&PositionInterpolator268);

Transform264.addChild(&Group265);

Transform& Transform269 =  Transform();
Transform269.setScale(new float[]{0.354068,0.354068,0.354068});
Shape& Shape270 =  Shape();
Appearance& Appearance271 =  Appearance();
ImageTexture& ImageTexture272 =  ImageTexture();
ImageTexture272.setUrl(new CString[]{CString("bp-glow.png")}, 1);
Appearance271.addChild(&ImageTexture272);

Shape270.addChild(&Appearance271);

IndexedFaceSet& IndexedFaceSet273 =  IndexedFaceSet();
IndexedFaceSet273.setSolid(false);
IndexedFaceSet273.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate274 =  TextureCoordinate();
TextureCoordinate274.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet273.setTexCoord(&TextureCoordinate274);

Coordinate& Coordinate275 =  Coordinate();
Coordinate275.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet273.setCoord(&Coordinate275);

Shape270.setGeometry(&IndexedFaceSet273);

Transform269.addChild(&Shape270);

Transform264.addChild(&Transform269);

Transform261.addChild(&Transform264);

Transform31.addChild(&Transform261);

DirectionalLight& DirectionalLight276 =  DirectionalLight();
DirectionalLight276.setDEF(CString("Light1_1"));
DirectionalLight276.setOn(false);
DirectionalLight276.setColor(new float[]{0.984854,1.0,0.86639});
DirectionalLight276.setAmbientIntensity(0.83);
DirectionalLight276.setDirection(new float[]{-0.290119,-0.956991,6.55651e-7});
Transform31.addChild(&DirectionalLight276);

Transform& Transform277 =  Transform();
Transform277.setDEF(CString("shadow"));
Transform277.setTranslation(new float[]{0.0606028,0.0,0.0});
Transform277.setCenter(new float[]{0.0,0.00748548,0.0});
Group& Group278 =  Group();
Group& Group279 =  Group();
Group279.setUSE(CString("lightAnim"));
Group278.addChild(&Group279);

PositionInterpolator& PositionInterpolator280 =  PositionInterpolator();
PositionInterpolator280.setDEF(CString("shadowTranslationInterp"));
PositionInterpolator280.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.161111,0.172222,0.183333,0.194444,0.205556,0.216667,0.227778,0.238889,0.25,0.26,0.27,0.28,0.29,0.3,0.3125,0.325,0.3375,0.35,0.36,0.37,0.38,0.39,0.4,0.4125,0.425,0.4375,0.45,0.46,0.47,0.48,0.49,0.5,0.51,0.52,0.53,0.54,0.55,0.561111,0.572222,0.583333,0.594444,0.605555,0.616666,0.627778,0.638889,0.65,0.66,0.67,0.68,0.69,0.7,0.71,0.72,0.73,0.74,0.75,0.76,0.77,0.78,0.79,0.8,0.81,0.82,0.83,0.84,0.85,0.8625,0.875,0.8875,0.9,0.91,0.92,0.93,0.94,0.95,0.96,0.97,0.98,0.99,1.0}, 96);
PositionInterpolator280.setKeyValue(new float[]{0.0606028,0.0,0.0,0.0620456,0.0,0.0,0.0657328,0.0,0.0,0.0707025,0.0,0.0,0.0759928,0.0,0.0,0.0806419,0.0,0.0,0.0836878,0.0,0.0,0.0841687,0.0,0.0,0.0811228,0.0,0.0,0.0735881,0.0,0.0,0.0606028,0.0,0.0,0.0280673,0.0,0.0,-0.0273849,0.0,0.0,-0.0906162,0.0,0.0,-0.146489,0.0,0.0,-0.179866,0.0,0.0,-0.194758,0.0,0.0,-0.20256,0.0,0.0,-0.204902,0.0,0.0,-0.203415,0.0,0.0,-0.199731,0.0,0.0,-0.195481,0.0,0.0,-0.192295,0.0,0.0,-0.191805,0.0,0.0,-0.195641,0.0,0.0,-0.204941,3.57627e-10,0.00229102,-0.219377,1.07288e-9,0.00687306,-0.236419,1.60932e-9,0.0103096,-0.253537,1.43051e-9,0.00916412,-0.268201,0.0,0.0,-0.285397,-5.06405e-9,-0.0324412,-0.302762,-1.25728e-8,-0.0805438,-0.316192,-1.93831e-8,-0.124172,-0.321581,-2.23517e-8,-0.143189,-0.319259,-2.03848e-8,-0.130588,-0.31248,-1.55568e-8,-0.0996596,-0.301524,-9.47714e-9,-0.0607123,-0.286671,-3.75511e-9,-0.0240559,-0.268201,0.0,0.0,-0.235508,1.5716e-9,0.010068,-0.193879,1.39698e-9,0.00894931,-0.152292,5.2387e-10,0.003356,-0.119726,0.0,0.0,-0.10026,0.0,0.0,-0.0819169,0.0,0.0,-0.0646286,0.0,0.0,-0.0483273,0.0,0.0,-0.0329454,0.0,0.0,-0.0184151,0.0,0.0,-0.0046687,0.0,0.0,0.00836163,0.0,0.0,0.0207436,0.0,0.0,0.0325451,0.0,0.0,0.0452685,-1.63523e-10,-0.0000278565,0.0576262,-5.72332e-10,-0.000097498,0.0693452,-1.10378e-9,-0.000188032,0.0801522,-1.63524e-9,-0.000278566,0.0897741,-2.04405e-9,-0.000348208,0.0979377,-2.20758e-9,-0.000376065,0.10437,-2.00318e-9,-0.000341246,0.108797,-1.30821e-9,-0.000222857,0.110947,0.0,0.0,0.10567,2.92062e-9,0.000497534,0.091483,7.86779e-9,0.00134029,0.0733361,1.35898e-8,0.00231505,0.0561786,1.8835e-8,0.00320858,0.0449604,2.23517e-8,0.00380766,0.0445898,2.37822e-8,0.00405135,0.0517671,2.3961e-8,0.00408181,0.0591297,2.34246e-8,0.00399043,0.059315,2.27093e-8,0.00386858,0.0449604,2.23517e-8,0.00380766,0.00871627,2.33054e-8,0.00577162,-0.044509,2.52127e-8,0.00969954,-0.103691,2.66432e-8,0.0126455,-0.157805,2.61664e-8,0.0116635,-0.195827,2.23517e-8,0.00380766,-0.219561,1.32918e-8,-0.0180579,-0.236356,-5.95957e-11,-0.0519692,-0.243507,-1.48415e-8,-0.0872225,-0.238305,-2.81929e-8,-0.113114,-0.218046,-3.72529e-8,-0.11894,-0.154854,-4.14438e-8,-0.085552,-0.0596362,-4.09782e-8,-0.0229158,0.0336579,-3.86499e-8,0.0418322,0.0910799,-3.72529e-8,0.0815556,0.0972784,-3.78489e-8,0.0864236,0.0792818,-3.9041e-8,0.0765137,0.0498091,-3.99351e-8,0.0586527,0.0215791,-3.96371e-8,0.0396676,0.00731076,-3.72529e-8,0.026385,0.00919724,-3.21865e-8,0.0192657,0.0187591,-2.5034e-8,0.0137584,0.032707,-1.66893e-8,0.0091723,0.0477513,-8.04667e-9,0.00481645,0.0606028,0.0,0.0}, 288);
Group278.addChild(&PositionInterpolator280);

Transform277.addChild(&Group278);

Transform& Transform281 =  Transform();
Transform281.setTranslation(new float[]{0.0,0.00748548,0.0});
Transform281.setRotation(new float[]{-1.0,0.0,0.0,1.5708});
Transform281.setScale(new float[]{1.53335,1.53335,1.53335});
Shape& Shape282 =  Shape();
Appearance& Appearance283 =  Appearance();
ImageTexture& ImageTexture284 =  ImageTexture();
ImageTexture284.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance283.addChild(&ImageTexture284);

Shape282.addChild(&Appearance283);

IndexedFaceSet& IndexedFaceSet285 =  IndexedFaceSet();
IndexedFaceSet285.setSolid(false);
IndexedFaceSet285.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate286 =  TextureCoordinate();
TextureCoordinate286.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet285.setTexCoord(&TextureCoordinate286);

Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet285.setCoord(&Coordinate287);

Shape282.setGeometry(&IndexedFaceSet285);

Transform281.addChild(&Shape282);

Transform277.addChild(&Transform281);

Transform31.addChild(&Transform277);

LOD29.addChildren(&Transform31);

Transform& Transform288 =  Transform();
Transform288.setDEF(CString("med"));
Transform& Transform289 =  Transform();
Transform289.setDEF(CString("hair"));
Switch& Switch290 =  Switch();
Switch290.setDEF(CString("_11"));
Switch290.setWhichChoice(1);
Transform& Transform291 =  Transform();
Transform291.setDEF(CString("lll_1"));
Shape& Shape292 =  Shape();
Appearance& Appearance293 =  Appearance();
ImageTexture& ImageTexture294 =  ImageTexture();
ImageTexture294.setUrl(new CString[]{CString("hair1__2.jpg")}, 1);
Appearance293.addChild(&ImageTexture294);

Shape292.addChild(&Appearance293);

IndexedFaceSet& IndexedFaceSet295 =  IndexedFaceSet();
IndexedFaceSet295.setSolid(false);
IndexedFaceSet295.setConvex(false);
IndexedFaceSet295.setCreaseAngle(3.14159);
IndexedFaceSet295.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate296 =  TextureCoordinate();
TextureCoordinate296.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet295.setTexCoord(&TextureCoordinate296);

Coordinate& Coordinate297 =  Coordinate();
Coordinate297.setDEF(CString("hairco"));
Coordinate297.setPoint(new float[]{0.238211,1.471,-0.220467,0.198251,1.55876,0.0313386,0.377841,1.43577,-0.00714531,0.134999,1.579,-0.0903402,-0.18314,1.60778,0.146798,-0.247618,1.60732,0.00880936,-0.411981,1.43577,-0.0470541,-0.214767,1.471,-0.243355,-0.125196,1.579,-0.103488,0.0158279,1.48493,-0.313164,0.00725975,1.58699,-0.143594,-0.00227428,1.65935,0.0674612,0.277193,1.31523,-0.28818,0.404551,1.27447,-0.0431701,0.349909,1.23012,0.213632,-0.369653,1.23012,0.177274,-0.340793,1.21799,0.175881,-0.296545,1.38244,0.180247,-0.313821,1.40203,0.187276,-0.39813,1.27447,-0.0837286,-0.246724,1.31523,-0.314648,0.0199828,1.33133,-0.395392,-0.101431,1.54401,0.270843,-0.0769222,1.4973,0.225338,0.0538245,1.4973,0.231944,0.293354,1.40203,0.217955,0.350422,1.14933,-0.0780944,0.332594,1.1399,-0.0774054,0.263445,1.1857,-0.274314,0.321337,1.21799,0.209338,0.37957,1.26148,-0.042198,0.307546,1.09211,0.193511,0.329131,1.10101,0.196722,-0.364571,1.14933,-0.114222,-0.340485,1.10101,0.162887,-0.318688,1.09211,0.161868,-0.346907,1.1399,-0.11174,-0.373375,1.26148,-0.0802434,-0.224667,1.19678,-0.311133,-0.213683,1.1857,-0.298422,0.0189626,1.21513,-0.375202,0.0181397,1.20332,-0.358916,0.275653,1.19678,-0.285857,0.0803699,1.55286,0.386279,0.0342505,1.58699,0.341122,-0.00180715,1.38328,0.368284,0.145419,1.52038,0.403749,0.149685,1.48603,0.349656,0.052231,1.44079,0.328486,-0.0276137,1.65405,0.180214,0.0210674,1.63967,0.24235,0.16156,1.59305,0.254132,0.216021,1.45452,0.294783,0.213277,1.43423,0.279438,0.276874,1.38244,0.209221,0.0328324,1.49261,0.284621,0.16156,1.59305,0.254132,0.0214095,1.6383,0.244912,0.293354,1.40203,0.217955,0.216021,1.45452,0.294783,0.216021,1.45452,0.294783,0.276874,1.38244,0.209221,0.218313,1.45296,0.292504,0.219894,1.45189,0.290931}, 192);
IndexedFaceSet295.setCoord(&Coordinate297);

Shape292.setGeometry(&IndexedFaceSet295);

Transform291.addChild(&Shape292);

Switch290.addChild(&Transform291);

Transform& Transform298 =  Transform();
Transform298.setDEF(CString("lll_2"));
Transform298.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform298.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape299 =  Shape();
Appearance& Appearance300 =  Appearance();
ImageTexture& ImageTexture301 =  ImageTexture();
ImageTexture301.setUrl(new CString[]{CString("hair2__2.jpg")}, 1);
Appearance300.addChild(&ImageTexture301);

Shape299.addChild(&Appearance300);

IndexedFaceSet& IndexedFaceSet302 =  IndexedFaceSet();
IndexedFaceSet302.setSolid(false);
IndexedFaceSet302.setConvex(false);
IndexedFaceSet302.setCreaseAngle(3.14159);
IndexedFaceSet302.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate303 =  TextureCoordinate();
TextureCoordinate303.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet302.setTexCoord(&TextureCoordinate303);

Coordinate& Coordinate304 =  Coordinate();
Coordinate304.setUSE(CString("hairco"));
IndexedFaceSet302.setCoord(&Coordinate304);

Shape299.setGeometry(&IndexedFaceSet302);

Transform298.addChild(&Shape299);

Switch290.addChild(&Transform298);

Transform& Transform305 =  Transform();
Transform305.setDEF(CString("lll_3"));
Transform305.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform305.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape306 =  Shape();
Appearance& Appearance307 =  Appearance();
ImageTexture& ImageTexture308 =  ImageTexture();
ImageTexture308.setUrl(new CString[]{CString("hair3__2.jpg")}, 1);
Appearance307.addChild(&ImageTexture308);

Shape306.addChild(&Appearance307);

IndexedFaceSet& IndexedFaceSet309 =  IndexedFaceSet();
IndexedFaceSet309.setSolid(false);
IndexedFaceSet309.setConvex(false);
IndexedFaceSet309.setCreaseAngle(3.14159);
IndexedFaceSet309.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate310 =  TextureCoordinate();
TextureCoordinate310.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet309.setTexCoord(&TextureCoordinate310);

Coordinate& Coordinate311 =  Coordinate();
Coordinate311.setUSE(CString("hairco"));
IndexedFaceSet309.setCoord(&Coordinate311);

Shape306.setGeometry(&IndexedFaceSet309);

Transform305.addChild(&Shape306);

Switch290.addChild(&Transform305);

Transform& Transform312 =  Transform();
Transform312.setDEF(CString("lll"));
Transform312.setTranslation(new float[]{2.32831e-10,-0.00000274181,-5.7742e-8});
Transform312.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape313 =  Shape();
Appearance& Appearance314 =  Appearance();
ImageTexture& ImageTexture315 =  ImageTexture();
ImageTexture315.setUrl(new CString[]{CString("hair4__2.jpg")}, 1);
Appearance314.addChild(&ImageTexture315);

Shape313.addChild(&Appearance314);

IndexedFaceSet& IndexedFaceSet316 =  IndexedFaceSet();
IndexedFaceSet316.setSolid(false);
IndexedFaceSet316.setConvex(false);
IndexedFaceSet316.setCreaseAngle(3.14159);
IndexedFaceSet316.setCoordIndex(new int32_t[]{0,1,2,-1,3,1,0,-1,4,5,6,-1,5,7,6,-1,5,8,7,-1,8,9,7,-1,8,10,9,-1,10,0,9,-1,10,3,0,-1,11,1,3,-1,11,3,10,-1,11,10,8,-1,11,8,5,-1,11,5,4,-1,0,2,12,-1,12,2,13,-1,2,14,13,-1,15,16,17,-1,18,6,15,-1,4,6,18,-1,15,17,18,-1,15,6,19,-1,20,6,7,-1,6,20,19,-1,7,21,20,-1,7,9,21,-1,9,0,21,-1,21,0,12,-1,22,4,18,-1,17,22,18,-1,22,17,23,-1,22,23,24,-1,2,1,25,-1,26,13,14,-1,26,27,28,-1,27,29,30,-1,29,27,31,-1,32,27,26,-1,32,31,27,-1,26,14,32,-1,31,32,29,-1,29,32,14,-1,33,15,19,-1,15,33,34,-1,34,16,15,-1,34,35,16,-1,36,34,33,-1,34,36,35,-1,36,16,35,-1,36,37,16,-1,38,33,19,-1,38,19,20,-1,39,33,38,-1,33,39,36,-1,40,39,38,-1,40,38,20,-1,40,20,21,-1,12,40,21,-1,40,41,39,-1,40,28,41,-1,26,28,42,-1,28,40,42,-1,26,42,13,-1,42,40,12,-1,13,42,12,-1,43,44,45,-1,46,43,45,-1,46,45,47,-1,47,45,48,-1,49,4,22,-1,11,4,49,-1,11,49,50,-1,49,22,50,-1,1,11,51,-1,11,50,51,-1,51,52,1,-1,53,52,47,-1,53,47,48,-1,48,24,53,-1,24,54,53,-1,44,55,45,-1,22,55,44,-1,45,55,48,-1,24,55,22,-1,55,24,48,-1,56,51,43,46,-1,57,50,22,44,-1,51,50,57,43,-1,57,44,43,-1,2,25,58,14,-1,59,60,52,51,56,46,-1,60,59,46,47,52,-1,54,61,14,58,25,-1,14,61,54,29,-1,54,62,52,53,-1,62,63,25,1,52,-1,25,63,62,54,-1}, 404);
TextureCoordinate& TextureCoordinate317 =  TextureCoordinate();
TextureCoordinate317.setPoint(new float[]{-0.43768,0.170132,1.4132,0.649556,1.32795,0.314171,-0.425694,0.560826,0.05919,1.34393,0.041869,1.04894,0.224554,0.764946,0.030322,0.481631,-0.097567,0.800467,-0.178127,0.237035,-0.254196,0.615007,-0.404514,1.0851,-0.462143,-0.104461,1.25251,0.093729,1.08507,0.355195,0.48174,0.734339,0.497418,0.713065,0.455548,0.971204,0.441222,0.99857,0.295172,0.546465,0.120909,0.26065,-0.101194,-0.019199,0.902752,1.33131,0.895409,1.29181,1.12408,1.05454,1.16391,0.569866,1.16626,-0.078092,1.14899,-0.094595,1.45066,-0.286705,1.06742,0.348192,1.2399,0.072245,0.998827,0.234645,1.01389,0.240655,0.342249,0.374405,0.521091,0.56585,0.532089,0.546158,0.3503,0.353934,0.304805,0.522865,0.192977,0.126006,0.205368,0.108722,-0.007776,-0.169885,0.012224,-0.18961,1.46758,-0.264348,1.09624,1.05134,1.12738,1.14563,0.907606,0.944368,1.09874,0.948547,1.10055,0.902993,1.00637,0.97151,1.45222,1.26201,1.29754,1.20035,1.2482,0.94891,1.13412,0.768093,1.12637,0.738981,1.15001,0.551298,1.05816,1.0758,1.2482,0.94891,1.29207,1.19994,1.16391,0.569866,1.13412,0.768093,1.13412,0.768093,1.15001,0.551298,1.13506,0.762421,1.13571,0.758496}, 128);
IndexedFaceSet316.setTexCoord(&TextureCoordinate317);

Coordinate& Coordinate318 =  Coordinate();
Coordinate318.setUSE(CString("hairco"));
IndexedFaceSet316.setCoord(&Coordinate318);

Shape313.setGeometry(&IndexedFaceSet316);

Transform312.addChild(&Shape313);

Switch290.addChild(&Transform312);

Transform289.addChild(&Switch290);

Transform288.addChild(&Transform289);

Transform& Transform319 =  Transform();
Transform319.setDEF(CString("body"));
Transform319.setCenter(new float[]{-0.000208497,0.681873,0.00420851});
Switch& Switch320 =  Switch();
Switch320.setDEF(CString("_12"));
Switch320.setWhichChoice(2);
Transform& Transform321 =  Transform();
Transform321.setDEF(CString("pp_1"));
Transform321.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform321.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape322 =  Shape();
Appearance& Appearance323 =  Appearance();
ImageTexture& ImageTexture324 =  ImageTexture();
ImageTexture324.setUrl(new CString[]{CString("shirt7__2.jpg")}, 1);
Appearance323.addChild(&ImageTexture324);

Shape322.addChild(&Appearance323);

IndexedFaceSet& IndexedFaceSet325 =  IndexedFaceSet();
IndexedFaceSet325.setConvex(false);
IndexedFaceSet325.setCreaseAngle(3.14159);
IndexedFaceSet325.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate326 =  TextureCoordinate();
TextureCoordinate326.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet325.setTexCoord(&TextureCoordinate326);

Coordinate& Coordinate327 =  Coordinate();
Coordinate327.setDEF(CString("bodyco"));
Coordinate327.setPoint(new float[]{-0.000208552,0.294697,0.00420859,0.11916,0.294697,-0.192769,0.291843,0.294697,-0.1065,-0.0991141,0.294697,-0.203798,-0.279613,0.294697,-0.135375,-0.29226,0.294697,0.114918,-0.119578,0.294697,0.201186,0.098697,0.294697,0.212215,0.279196,0.294697,0.143793,0.128998,0.566613,-0.208999,0.315909,0.566613,-0.115624,-0.107266,0.566613,-0.220938,-0.302637,0.566613,-0.146878,-0.316326,0.566613,0.124041,-0.129416,0.566613,0.217417,0.106849,0.566613,0.229355,0.30222,0.566613,0.155295,0.11916,0.838529,-0.192769,0.291843,0.838529,-0.1065,-0.0991141,0.838529,-0.203798,-0.279613,0.838529,-0.135375,-0.29226,0.838529,0.114918,-0.119578,0.838529,0.201186,0.098697,0.838529,0.212215,0.279196,0.838529,0.143793,0.0838125,1.06905,-0.134437,0.205357,1.06905,-0.0737165,-0.069826,1.06905,-0.142201,-0.196872,1.06905,-0.0940406,-0.205774,1.06905,0.0821336,-0.0842296,1.06905,0.142855,0.0694089,1.06905,0.150618,0.196455,1.06905,0.102458,0.311883,1.03239,0.0841429,0.163163,1.01084,0.0766283,0.172199,0.880558,0.0967575,0.345495,0.908876,0.105514,0.158852,1.08548,0.0122996,0.350359,1.04432,0.0219226,0.318351,1.03636,-0.0438592,0.169631,1.01084,-0.0513739,0.353945,0.908876,-0.0617335,0.18065,0.880558,-0.0704899,0.41444,0.940543,0.0251604,-0.172616,0.880558,-0.08834,-0.345912,0.908876,-0.0970965,-0.3123,1.03636,-0.0757255,-0.16358,1.01084,-0.0682109,-0.414857,0.940543,-0.0167431,-0.350776,1.04432,-0.0135052,-0.354362,0.908876,0.0701507,-0.318768,1.03239,0.0522767,-0.181067,0.880558,0.0789071,-0.170048,1.01084,0.0597913,-0.159275,1.08548,-0.00377521}, 165);
IndexedFaceSet325.setCoord(&Coordinate327);

Shape322.setGeometry(&IndexedFaceSet325);

Transform321.addChild(&Shape322);

Switch320.addChild(&Transform321);

Transform& Transform328 =  Transform();
Transform328.setDEF(CString("pp_2"));
Transform328.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform328.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape329 =  Shape();
Appearance& Appearance330 =  Appearance();
ImageTexture& ImageTexture331 =  ImageTexture();
ImageTexture331.setUrl(new CString[]{CString("army1__2.jpg")}, 1);
Appearance330.addChild(&ImageTexture331);

Shape329.addChild(&Appearance330);

IndexedFaceSet& IndexedFaceSet332 =  IndexedFaceSet();
IndexedFaceSet332.setConvex(false);
IndexedFaceSet332.setCreaseAngle(3.14159);
IndexedFaceSet332.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate333 =  TextureCoordinate();
TextureCoordinate333.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet332.setTexCoord(&TextureCoordinate333);

Coordinate& Coordinate334 =  Coordinate();
Coordinate334.setUSE(CString("bodyco"));
IndexedFaceSet332.setCoord(&Coordinate334);

Shape329.setGeometry(&IndexedFaceSet332);

Transform328.addChild(&Shape329);

Switch320.addChild(&Transform328);

Transform& Transform335 =  Transform();
Transform335.setDEF(CString("pp_3"));
Transform335.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform335.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape336 =  Shape();
Appearance& Appearance337 =  Appearance();
ImageTexture& ImageTexture338 =  ImageTexture();
ImageTexture338.setUrl(new CString[]{CString("cyber2__2.jpg")}, 1);
Appearance337.addChild(&ImageTexture338);

Shape336.addChild(&Appearance337);

IndexedFaceSet& IndexedFaceSet339 =  IndexedFaceSet();
IndexedFaceSet339.setConvex(false);
IndexedFaceSet339.setCreaseAngle(3.14159);
IndexedFaceSet339.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate340 =  TextureCoordinate();
TextureCoordinate340.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet339.setTexCoord(&TextureCoordinate340);

Coordinate& Coordinate341 =  Coordinate();
Coordinate341.setUSE(CString("bodyco"));
IndexedFaceSet339.setCoord(&Coordinate341);

Shape336.setGeometry(&IndexedFaceSet339);

Transform335.addChild(&Shape336);

Switch320.addChild(&Transform335);

Transform& Transform342 =  Transform();
Transform342.setDEF(CString("pp_4"));
Transform342.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform342.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape343 =  Shape();
Appearance& Appearance344 =  Appearance();
ImageTexture& ImageTexture345 =  ImageTexture();
ImageTexture345.setUrl(new CString[]{CString("shirt8__2.jpg")}, 1);
Appearance344.addChild(&ImageTexture345);

Shape343.addChild(&Appearance344);

IndexedFaceSet& IndexedFaceSet346 =  IndexedFaceSet();
IndexedFaceSet346.setConvex(false);
IndexedFaceSet346.setCreaseAngle(3.14159);
IndexedFaceSet346.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate347 =  TextureCoordinate();
TextureCoordinate347.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet346.setTexCoord(&TextureCoordinate347);

Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setUSE(CString("bodyco"));
IndexedFaceSet346.setCoord(&Coordinate348);

Shape343.setGeometry(&IndexedFaceSet346);

Transform342.addChild(&Shape343);

Switch320.addChild(&Transform342);

Transform& Transform349 =  Transform();
Transform349.setDEF(CString("pp_5"));
Transform349.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform349.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape350 =  Shape();
Appearance& Appearance351 =  Appearance();
ImageTexture& ImageTexture352 =  ImageTexture();
ImageTexture352.setUrl(new CString[]{CString("shirt9__2.jpg")}, 1);
Appearance351.addChild(&ImageTexture352);

Shape350.addChild(&Appearance351);

IndexedFaceSet& IndexedFaceSet353 =  IndexedFaceSet();
IndexedFaceSet353.setConvex(false);
IndexedFaceSet353.setCreaseAngle(3.14159);
IndexedFaceSet353.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate354 =  TextureCoordinate();
TextureCoordinate354.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet353.setTexCoord(&TextureCoordinate354);

Coordinate& Coordinate355 =  Coordinate();
Coordinate355.setUSE(CString("bodyco"));
IndexedFaceSet353.setCoord(&Coordinate355);

Shape350.setGeometry(&IndexedFaceSet353);

Transform349.addChild(&Shape350);

Switch320.addChild(&Transform349);

Transform& Transform356 =  Transform();
Transform356.setDEF(CString("pp_6"));
Transform356.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform356.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape357 =  Shape();
Appearance& Appearance358 =  Appearance();
ImageTexture& ImageTexture359 =  ImageTexture();
ImageTexture359.setUrl(new CString[]{CString("shirt5__2.jpg")}, 1);
Appearance358.addChild(&ImageTexture359);

Shape357.addChild(&Appearance358);

IndexedFaceSet& IndexedFaceSet360 =  IndexedFaceSet();
IndexedFaceSet360.setConvex(false);
IndexedFaceSet360.setCreaseAngle(3.14159);
IndexedFaceSet360.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate361 =  TextureCoordinate();
TextureCoordinate361.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet360.setTexCoord(&TextureCoordinate361);

Coordinate& Coordinate362 =  Coordinate();
Coordinate362.setUSE(CString("bodyco"));
IndexedFaceSet360.setCoord(&Coordinate362);

Shape357.setGeometry(&IndexedFaceSet360);

Transform356.addChild(&Shape357);

Switch320.addChild(&Transform356);

Transform& Transform363 =  Transform();
Transform363.setDEF(CString("pp_7"));
Transform363.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform363.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape364 =  Shape();
Appearance& Appearance365 =  Appearance();
ImageTexture& ImageTexture366 =  ImageTexture();
ImageTexture366.setUrl(new CString[]{CString("shirt4__2.jpg")}, 1);
Appearance365.addChild(&ImageTexture366);

Shape364.addChild(&Appearance365);

IndexedFaceSet& IndexedFaceSet367 =  IndexedFaceSet();
IndexedFaceSet367.setConvex(false);
IndexedFaceSet367.setCreaseAngle(3.14159);
IndexedFaceSet367.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate368 =  TextureCoordinate();
TextureCoordinate368.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet367.setTexCoord(&TextureCoordinate368);

Coordinate& Coordinate369 =  Coordinate();
Coordinate369.setUSE(CString("bodyco"));
IndexedFaceSet367.setCoord(&Coordinate369);

Shape364.setGeometry(&IndexedFaceSet367);

Transform363.addChild(&Shape364);

Switch320.addChild(&Transform363);

Transform& Transform370 =  Transform();
Transform370.setDEF(CString("pp_8"));
Transform370.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform370.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape371 =  Shape();
Appearance& Appearance372 =  Appearance();
ImageTexture& ImageTexture373 =  ImageTexture();
ImageTexture373.setUrl(new CString[]{CString("shirt2__2.jpg")}, 1);
Appearance372.addChild(&ImageTexture373);

Shape371.addChild(&Appearance372);

IndexedFaceSet& IndexedFaceSet374 =  IndexedFaceSet();
IndexedFaceSet374.setConvex(false);
IndexedFaceSet374.setCreaseAngle(3.14159);
IndexedFaceSet374.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate375 =  TextureCoordinate();
TextureCoordinate375.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet374.setTexCoord(&TextureCoordinate375);

Coordinate& Coordinate376 =  Coordinate();
Coordinate376.setUSE(CString("bodyco"));
IndexedFaceSet374.setCoord(&Coordinate376);

Shape371.setGeometry(&IndexedFaceSet374);

Transform370.addChild(&Shape371);

Switch320.addChild(&Transform370);

Transform& Transform377 =  Transform();
Transform377.setDEF(CString("pp_9"));
Transform377.setTranslation(new float[]{0.0,-0.00000226496,-1.72294e-8});
Transform377.setScale(new float[]{1.0,1.00001,1.00001});
Shape& Shape378 =  Shape();
Appearance& Appearance379 =  Appearance();
ImageTexture& ImageTexture380 =  ImageTexture();
ImageTexture380.setUrl(new CString[]{CString("cyber4__2.jpg")}, 1);
Appearance379.addChild(&ImageTexture380);

Shape378.addChild(&Appearance379);

IndexedFaceSet& IndexedFaceSet381 =  IndexedFaceSet();
IndexedFaceSet381.setConvex(false);
IndexedFaceSet381.setCreaseAngle(3.14159);
IndexedFaceSet381.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate382 =  TextureCoordinate();
TextureCoordinate382.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet381.setTexCoord(&TextureCoordinate382);

Coordinate& Coordinate383 =  Coordinate();
Coordinate383.setUSE(CString("bodyco"));
IndexedFaceSet381.setCoord(&Coordinate383);

Shape378.setGeometry(&IndexedFaceSet381);

Transform377.addChild(&Shape378);

Switch320.addChild(&Transform377);

Transform& Transform384 =  Transform();
Transform384.setDEF(CString("pp"));
Transform384.setTranslation(new float[]{0.0,2.86491e-11,2.16716e-13});
Shape& Shape385 =  Shape();
Appearance& Appearance386 =  Appearance();
ImageTexture& ImageTexture387 =  ImageTexture();
ImageTexture387.setUrl(new CString[]{CString("shirt3__2.jpg")}, 1);
Appearance386.addChild(&ImageTexture387);

Shape385.addChild(&Appearance386);

IndexedFaceSet& IndexedFaceSet388 =  IndexedFaceSet();
IndexedFaceSet388.setConvex(false);
IndexedFaceSet388.setCreaseAngle(3.14159);
IndexedFaceSet388.setCoordIndex(new int32_t[]{0,1,2,-1,0,3,1,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,2,8,-1,2,1,9,10,-1,1,3,11,9,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,8,16,15,-1,8,2,10,16,-1,10,9,17,18,-1,9,11,19,17,-1,11,12,20,19,-1,12,13,21,20,-1,13,14,22,21,-1,14,15,23,22,-1,15,16,24,23,-1,16,10,18,24,-1,18,17,25,26,-1,17,19,27,25,-1,19,20,28,27,-1,20,21,29,28,-1,21,22,30,29,-1,22,23,31,30,-1,23,24,32,31,-1,24,18,26,32,-1,33,34,35,36,-1,37,34,33,-1,37,33,38,-1,37,38,39,-1,37,39,40,-1,40,39,41,42,-1,39,38,43,41,-1,38,33,36,43,-1,44,45,46,47,-1,45,48,49,46,-1,48,50,51,49,-1,50,52,53,51,-1,47,46,54,-1,46,49,54,-1,49,51,54,-1,51,53,54,-1}, 224);
TextureCoordinate& TextureCoordinate389 =  TextureCoordinate();
TextureCoordinate389.setPoint(new float[]{0.510524,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.387193,0.0148574,0.187637,0.0148574,0.187637,0.0148574,0.387193,0.0148574,0.633855,0.0148574,0.833411,0.0148574,0.644019,0.345083,0.860018,0.345083,0.377029,0.345083,0.16103,0.345083,0.16103,0.345083,0.377029,0.345083,0.644019,0.345083,0.860018,0.345083,0.633855,0.675309,0.833411,0.675309,0.387193,0.675309,0.187637,0.675309,0.187637,0.675309,0.387193,0.675309,0.633855,0.675309,0.833411,0.675309,0.597334,0.95527,0.737793,0.95527,0.423714,0.95527,0.283255,0.95527,0.283255,0.95527,0.423714,0.95527,0.597334,0.95527,0.737793,0.95527,0.866856,0.910744,0.698797,0.88457,0.710128,0.726354,0.90596,0.760746,0.690273,0.975219,0.906682,0.925237,0.866856,0.915564,0.698797,0.88457,0.90596,0.760746,0.710128,0.726354,0.979097,0.799201,0.31092,0.726354,0.115088,0.760746,0.154192,0.915564,0.322251,0.88457,0.0419507,0.799201,0.114366,0.925237,0.115088,0.760746,0.154192,0.910744,0.31092,0.726354,0.322251,0.88457,0.330775,0.975219}, 110);
IndexedFaceSet388.setTexCoord(&TextureCoordinate389);

Coordinate& Coordinate390 =  Coordinate();
Coordinate390.setUSE(CString("bodyco"));
IndexedFaceSet388.setCoord(&Coordinate390);

Shape385.setGeometry(&IndexedFaceSet388);

Transform384.addChild(&Shape385);

Switch320.addChild(&Transform384);

Transform319.addChild(&Switch320);

Transform288.addChild(&Transform319);

Transform& Transform391 =  Transform();
Transform391.setDEF(CString("fuss"));
Transform391.setCenter(new float[]{0.196713,0.157104,0.00995016});
Shape& Shape392 =  Shape();
Appearance& Appearance393 =  Appearance();
ImageTexture& ImageTexture394 =  ImageTexture();
ImageTexture394.setUrl(new CString[]{CString("shoes1__2.jpg")}, 1);
Appearance393.addChild(&ImageTexture394);

Shape392.addChild(&Appearance393);

IndexedFaceSet& IndexedFaceSet395 =  IndexedFaceSet();
IndexedFaceSet395.setSolid(false);
IndexedFaceSet395.setConvex(false);
IndexedFaceSet395.setCreaseAngle(3.14159);
IndexedFaceSet395.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,4,-1,2,1,5,6,-1,1,0,7,5,-1,0,3,8,7,-1,3,4,9,8,-1,4,2,6,9,-1,6,5,10,-1,5,7,10,-1,9,6,10,-1,7,8,10,-1,8,9,10,-1,11,12,13,-1,14,11,13,15,-1,13,12,16,17,-1,12,11,18,16,-1,11,14,19,18,-1,14,15,20,19,-1,15,13,17,20,-1,17,16,21,-1,16,18,21,-1,20,17,21,-1,18,19,21,-1,19,20,21,-1}, 108);
TextureCoordinate& TextureCoordinate396 =  TextureCoordinate();
TextureCoordinate396.setPoint(new float[]{0.889627,0.175124,0.303885,0.175124,-0.002426,0.175124,0.945325,0.175124,0.394006,0.175124,0.303885,0.406152,-0.002426,0.406152,0.889627,0.406152,0.945325,0.406152,0.394006,0.406152,0.712842,0.720869,0.876434,0.159927,0.340653,0.159927,0.034117,0.159927,0.90103,0.159927,0.380449,0.159927,0.340653,0.393931,0.034117,0.393931,0.876434,0.393931,0.90103,0.393931,0.380449,0.393931,0.695412,0.712703}, 44);
IndexedFaceSet395.setTexCoord(&TextureCoordinate396);

Coordinate& Coordinate397 =  Coordinate();
Coordinate397.setPoint(new float[]{0.0802752,0.0261305,-0.0354679,0.1098,0.0261305,0.16031,0.253723,0.0261305,0.234615,0.205952,0.0261305,-0.0821597,0.313151,0.0261305,0.0847615,0.1098,0.099594,0.16031,0.253723,0.0995942,0.234615,0.0802752,0.099594,-0.0354679,0.205952,0.0995942,-0.0821597,0.313148,0.0995942,0.0847608,0.183369,0.199669,0.00304012,-0.0762838,0.0261305,-0.0433776,-0.12539,0.0261305,0.148428,-0.276072,0.0261305,0.207848,-0.196614,0.0261305,-0.102499,-0.320089,0.0261305,0.0527676,-0.12539,0.099594,0.148428,-0.276072,0.099594,0.207848,-0.0762838,0.099594,-0.0433776,-0.196614,0.099594,-0.102499,-0.320089,0.099594,0.0527676,-0.182733,0.199669,-0.0154572}, 66);
IndexedFaceSet395.setCoord(&Coordinate397);

Shape392.setGeometry(&IndexedFaceSet395);

Transform391.addChild(&Shape392);

Transform288.addChild(&Transform391);

Transform& Transform398 =  Transform();
Transform398.setDEF(CString("notex"));
Shape& Shape399 =  Shape();
Appearance& Appearance400 =  Appearance();
Shape399.addChild(&Appearance400);

IndexedFaceSet& IndexedFaceSet401 =  IndexedFaceSet();
IndexedFaceSet401.setSolid(false);
IndexedFaceSet401.setConvex(false);
IndexedFaceSet401.setCreaseAngle(1.53973);
IndexedFaceSet401.setColorIndex(new int[]{5,5,5,5,-1,5,2,2,5,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,2,2,2,-1,2,5,5,2,-1,5,5,5,5,-1,5,5,5,5,-1,5,5,5,5,-1,5,5,2,5,-1,5,5,2,2,-1,5,5,2,2,-1,5,2,2,2,-1,2,5,2,2,-1,5,5,5,2,-1,5,5,5,5,-1,5,5,5,5,-1,2,5,5,-1,2,5,5,-1,2,5,2,-1,2,5,5,-1,2,2,2,-1,2,2,5,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,6,0,0,0,-1,0,6,0,0,-1,0,0,5,0,-1,0,5,5,5,-1,5,0,0,5,-1,0,3,3,0,-1,3,5,5,3,-1,5,0,0,5,-1,0,5,5,0,-1,5,5,5,5,-1,5,0,3,5,-1,0,3,3,3,-1,3,5,5,3,-1,5,0,0,5,-1,0,8,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,8,0,3,-1,3,0,0,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,0,0,0,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,3,3,8,-1,7,7,7,-1,8,3,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,0,3,0,-1,3,3,0,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,0,0,0,-1,0,5,5,0,-1,5,5,5,5,-1,5,0,0,5,-1,0,3,3,0,-1,3,5,5,3,-1,5,0,0,5,-1,0,5,5,0,-1,5,5,5,5,-1,5,0,0,5,-1,3,3,3,3,-1,3,5,5,3,-1,5,0,0,5,-1,3,8,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,3,0,-1,0,3,0,-1,0,3,0,-1,3,0,0,-1,7,7,7,-1,7,7,7,-1,8,0,3,-1,3,0,3,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,3,0,0,-1,7,7,7,-1,0,0,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,3,3,8,-1,7,7,7,-1,8,3,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,0,3,3,-1,3,3,3,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,0,0,0,-1,0,0,0,-1,7,7,7,-1,7,7,7,-1,0,3,0,-1,7,7,7,-1,7,7,7,-1,7,7,7,-1,3,0,0,-1,6,3,3,6,-1,3,3,3,3,-1,3,6,6,3,-1,6,3,3,-1,3,3,3,3,-1,6,3,3,-1,1,1,6,1,-1,1,0,1,6,-1,7,7,7,7,-1,7,7,7,7,-1,7,3,3,7,-1,3,3,3,3,-1,3,7,7,3,-1,7,7,7,7,-1,7,7,7,7,-1,7,7,7,7,-1,7,3,3,7,-1,3,3,3,3,-1,3,7,7,3,-1,7,7,7,7,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1}, 818);
IndexedFaceSet401.setCoordIndex(new int32_t[]{0,1,2,3,-1,1,4,5,2,-1,4,6,7,5,-1,6,8,9,7,-1,8,10,11,9,-1,10,12,13,11,-1,12,14,15,13,-1,14,16,17,15,-1,16,0,3,17,-1,18,19,1,0,-1,19,20,4,1,-1,20,21,6,4,-1,21,22,8,6,-1,22,23,10,8,-1,23,24,12,10,-1,24,25,14,12,-1,25,26,16,14,-1,26,18,0,16,-1,27,3,2,-1,27,17,3,-1,27,2,5,-1,27,15,17,-1,27,5,7,-1,27,13,15,-1,27,7,9,-1,27,9,11,-1,27,11,13,-1,28,29,30,31,-1,32,28,31,33,-1,34,35,36,37,-1,35,38,39,36,-1,38,40,41,39,-1,40,42,43,41,-1,42,44,45,43,-1,44,34,37,45,-1,37,36,46,47,-1,36,39,48,46,-1,39,41,49,48,-1,41,43,50,49,-1,43,45,51,50,-1,45,37,47,51,-1,52,53,54,-1,52,54,55,-1,53,52,55,-1,56,53,55,-1,57,58,55,-1,55,58,56,-1,56,58,59,-1,58,60,59,-1,53,56,61,-1,56,59,61,-1,53,61,62,-1,62,61,63,-1,59,60,64,-1,60,65,64,-1,60,63,65,-1,63,66,65,-1,64,65,67,-1,65,66,67,-1,59,64,67,-1,63,67,66,-1,61,59,67,-1,61,67,63,-1,57,55,68,-1,54,68,55,-1,57,68,58,-1,58,69,60,-1,60,69,63,-1,69,62,63,-1,62,70,53,-1,70,62,69,-1,53,70,54,-1,69,58,71,-1,58,68,71,-1,71,70,69,-1,71,68,72,-1,73,72,68,-1,54,74,68,-1,68,74,73,-1,74,54,75,-1,54,70,75,-1,70,71,75,-1,71,72,75,-1,72,76,75,-1,72,77,76,-1,73,77,72,-1,73,78,77,-1,74,78,73,-1,74,75,78,-1,76,77,79,-1,77,78,79,-1,75,76,79,-1,75,79,78,-1,80,81,82,83,-1,81,84,85,82,-1,84,86,87,85,-1,86,88,89,87,-1,88,90,91,89,-1,90,80,83,91,-1,83,82,92,93,-1,82,85,94,92,-1,85,87,95,94,-1,87,89,96,95,-1,89,91,97,96,-1,91,83,93,97,-1,98,99,100,-1,98,100,101,-1,99,98,101,-1,102,99,101,-1,103,104,101,-1,101,104,102,-1,102,104,105,-1,104,106,105,-1,99,102,107,-1,102,105,107,-1,99,107,108,-1,108,107,109,-1,105,106,110,-1,106,111,110,-1,106,109,111,-1,109,112,111,-1,110,111,113,-1,111,112,113,-1,105,110,113,-1,109,113,112,-1,107,105,113,-1,107,113,109,-1,103,101,114,-1,100,114,101,-1,103,114,104,-1,104,115,106,-1,106,115,109,-1,115,108,109,-1,108,116,99,-1,116,108,115,-1,99,116,100,-1,115,104,117,-1,104,114,117,-1,117,116,115,-1,117,114,118,-1,119,118,114,-1,100,120,114,-1,114,120,119,-1,120,100,121,-1,100,116,121,-1,116,117,121,-1,117,118,121,-1,118,122,121,-1,118,123,122,-1,119,123,118,-1,119,124,123,-1,120,124,119,-1,120,121,124,-1,122,123,125,-1,123,124,125,-1,121,122,125,-1,121,125,124,-1,126,127,128,129,-1,127,130,131,128,-1,130,132,133,131,-1,129,128,134,-1,128,131,135,134,-1,133,135,131,-1,136,137,138,139,-1,137,140,141,138,-1,142,143,144,145,-1,143,146,147,144,-1,146,148,149,147,-1,148,150,151,149,-1,150,152,153,151,-1,152,142,145,153,-1,154,155,156,157,-1,155,158,159,156,-1,158,160,161,159,-1,160,162,163,161,-1,162,164,165,163,-1,164,154,157,165,-1,167,166,172,-1,166,169,172,-1,168,167,172,-1,169,170,172,-1,171,168,172,-1,170,171,172,-1,174,173,179,-1,173,176,179,-1,175,174,179,-1,176,177,179,-1,178,175,179,-1,177,178,179,-1}, 818);
CColor& Color402 =  CColor();
Color402.setColor(new float[]{0.342246,0.205668,0.121759,0.15508,0.0931931,0.0551721,0.026738,0.0160678,0.00951245,0.326203,0.196027,0.116052,0.0,0.0,0.0,0.0588235,0.0353493,0.0209274,0.139037,0.0835525,0.0494648,0.0695187,0.0417763,0.0247323,0.26738,0.160678,0.0951242}, 27);
IndexedFaceSet401.setColor(&Color402);

Coordinate& Coordinate403 =  Coordinate();
Coordinate403.setPoint(new float[]{-0.185084,1.18501,-0.25572,-0.299241,1.15428,-0.0816153,-0.17181,1.07361,-0.0660587,-0.1059,1.09135,-0.166579,-0.273054,1.11933,0.124255,-0.156691,1.05343,0.0528012,-0.118775,1.09653,0.265558,-0.0676166,1.04026,0.134382,0.0914099,1.09653,0.276179,0.0537344,1.04026,0.140514,0.259147,1.11933,0.151146,0.150578,1.05343,0.0683272,0.305952,1.15428,-0.0510356,0.177602,1.07361,-0.0484034,0.209926,1.18501,-0.23576,0.12216,1.09135,-0.155055,0.0160012,1.19715,-0.316595,0.0101969,1.09836,-0.201725,-0.214733,1.29616,-0.275216,-0.346547,1.26068,-0.0741751,-0.316309,1.22032,0.163541,-0.138161,1.19399,0.326703,0.104533,1.19399,0.338966,0.298222,1.22032,0.194593,0.352267,1.26068,-0.0388648,0.241389,1.29616,-0.252168,0.0174621,1.31017,-0.345508,0.00160435,1.04027,-0.0316719,0.298222,1.22032,0.194593,0.104533,1.19399,0.338966,-0.138161,1.19399,0.326703,-0.316309,1.22032,0.163541,0.352267,1.26068,-0.0388648,-0.346547,1.26068,-0.0741751,0.371632,0.519521,-0.0174813,0.416478,0.527191,-0.0152153,0.401579,0.737476,-0.0159681,0.356729,0.729804,-0.0182343,0.436911,0.531029,0.025319,0.422012,0.741316,0.0245661,0.412496,0.527191,0.0635869,0.397597,0.737476,0.0628343,0.367651,0.519521,0.0613209,0.352747,0.729804,0.0605681,0.347215,0.515681,0.0207867,0.332314,0.725968,0.0200336,0.342185,0.941099,-0.0132207,0.303861,0.934543,-0.0151571,0.359644,0.944376,0.0214145,0.338782,0.941099,0.0541134,0.300459,0.934543,0.052177,0.282999,0.931264,0.0175417,0.439239,0.562608,0.10403,0.480247,0.455886,0.106102,0.385697,0.541986,0.101324,0.445969,0.562608,-0.0291666,0.486977,0.455886,-0.0270945,0.392428,0.541986,-0.031872,0.433433,0.435264,-0.0298,0.46109,0.366328,-0.0270686,0.431046,0.385179,-0.0285869,0.454494,0.366328,0.103467,0.426705,0.435264,0.103397,0.42445,0.385179,0.101949,0.406836,0.339632,-0.0166607,0.390122,0.36978,-0.0175052,0.384904,0.36978,0.0857665,0.401618,0.339631,0.086611,0.3899,0.541986,0.0181451,0.430908,0.435264,0.0202172,0.409609,0.479748,0.102533,0.413812,0.479748,0.0193533,0.369843,0.472156,0.0298096,0.327615,0.478996,0.0276758,0.324603,0.478996,0.0872916,0.366831,0.472156,0.0894254,0.348305,0.409759,0.0455307,0.32291,0.406286,0.0442475,0.321108,0.406286,0.0799213,0.346503,0.409759,0.0812045,-0.367972,0.519528,-0.0548534,-0.412817,0.527198,-0.0571194,-0.397918,0.737483,-0.0563665,-0.353071,0.729811,-0.0541004,-0.437232,0.531036,-0.018851,-0.422336,0.741323,-0.0180983,-0.416799,0.527198,0.0216836,-0.4019,0.737483,0.0224364,-0.371953,0.519528,0.0239496,-0.357052,0.729811,0.0247025,-0.347539,0.515688,-0.0143189,-0.332638,0.725976,-0.013566,-0.339104,0.941106,-0.0476459,-0.30078,0.934551,-0.0457094,-0.359965,0.944384,-0.0149468,-0.342506,0.941106,0.0196887,-0.304182,0.934551,0.0216252,-0.283323,0.931271,-0.0110742,-0.447488,0.562608,0.0592249,-0.488495,0.455885,0.0571529,-0.393946,0.541986,0.0619303,-0.440758,0.562608,-0.0739726,-0.481765,0.455885,-0.0760446,-0.387215,0.541986,-0.0712672,-0.428223,0.435263,-0.0733392,-0.456013,0.366327,-0.0734097,-0.425969,0.385177,-0.0718917,-0.462609,0.366327,0.0571272,-0.434953,0.435263,0.0598583,-0.432565,0.385177,0.0586452,-0.403084,0.339631,-0.0575858,-0.38637,0.369779,-0.0567413,-0.391589,0.369779,0.0465314,-0.408302,0.339631,0.0456869,-0.389743,0.541986,-0.0212498,-0.43075,0.435263,-0.0233218,-0.417857,0.479749,0.0607221,-0.413654,0.479749,-0.022458,-0.370966,0.472155,-0.00762292,-0.328735,0.478995,-0.00548907,-0.331748,0.478995,0.0541274,-0.373978,0.472155,0.0519935,-0.35112,0.409757,0.0101894,-0.325725,0.406285,0.0114726,-0.327528,0.406285,0.0471469,-0.352923,0.409757,0.0458637,-0.340796,1.216,0.175995,-0.148843,1.18854,0.351662,-0.130318,1.35602,0.332573,-0.296541,1.38098,0.180229,0.112652,1.18854,0.364876,0.0961447,1.35602,0.344017,0.321334,1.216,0.209457,0.276877,1.38098,0.209206,-0.076921,1.49603,0.225372,0.0538259,1.49603,0.231979,-0.148843,1.18854,0.351662,-0.340796,1.216,0.175995,0.321334,1.216,0.209457,0.112652,1.18854,0.364876,-0.373372,1.26099,-0.0802231,0.379572,1.26099,-0.0421829,0.168078,0.106482,-0.0267912,0.213576,0.106482,-0.0244922,0.213576,0.316276,-0.0244922,0.168078,0.316276,-0.0267912,0.234334,0.106482,0.0160597,0.234334,0.316276,0.0160598,0.209594,0.106482,0.0543128,0.209594,0.316276,0.0543128,0.164096,0.106482,0.0520138,0.164096,0.316276,0.0520138,0.143338,0.106482,0.0114618,0.143338,0.316276,0.0114619,-0.164513,0.106482,-0.0435966,-0.210011,0.106482,-0.0458956,-0.210011,0.316276,-0.0458956,-0.164513,0.316276,-0.0435966,-0.234751,0.106482,-0.00764256,-0.234751,0.316276,-0.00764256,-0.213993,0.106482,0.0329094,-0.213993,0.316276,0.0329094,-0.168495,0.106482,0.0352084,-0.168495,0.316276,0.0352084,-0.143755,0.106482,-0.00304464,-0.143755,0.316276,-0.00304464,-0.12938,1.4244,0.272227,-0.103304,1.4181,0.298261,-0.115202,1.37687,0.327042,-0.167361,1.38946,0.274976,-0.179259,1.34822,0.303757,-0.153183,1.34192,0.329791,-0.152338,1.3963,0.315258,0.101288,1.4244,0.283882,0.0727208,1.4181,0.307155,0.0816569,1.37687,0.336989,0.138799,1.38946,0.290446,0.147735,1.34822,0.32028,0.119168,1.34192,0.343553,0.119792,1.3963,0.329011}, 540);
IndexedFaceSet401.setCoord(&Coordinate403);

Shape399.setGeometry(&IndexedFaceSet401);

Transform398.addChild(&Shape399);

Transform288.addChild(&Transform398);

LOD29.addChildren(&Transform288);

Transform& Transform404 =  Transform();
LOD29.addChildren(&Transform404);

Transform28.addChild(&LOD29);

Billboard27.addChild(&Transform28);

Transform26.addChild(&Billboard27);

Collision25.addChildren(&Transform26);

Transform24.addChild(&Collision25);

Transform17.addChild(&Transform24);

Scene7.addChild(&Transform17);

ROUTE& ROUTE405 =  ROUTE();
ROUTE405.setFromNode(CString("_3"));
ROUTE405.setFromField(CString("isActive"));
ROUTE405.setToNode(CString("Time_1"));
ROUTE405.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE405);

ROUTE& ROUTE406 =  ROUTE();
ROUTE406.setFromNode(CString("_3"));
ROUTE406.setFromField(CString("enterTime"));
ROUTE406.setToNode(CString("Time_1"));
ROUTE406.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE406);

ROUTE& ROUTE407 =  ROUTE();
ROUTE407.setFromNode(CString("Time_1"));
ROUTE407.setFromField(CString("fraction_changed"));
ROUTE407.setToNode(CString("BodyORotationInterp"));
ROUTE407.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE407);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromNode(CString("Time_1"));
ROUTE408.setFromField(CString("fraction_changed"));
ROUTE408.setToNode(CString("ArmRRotationInterp"));
ROUTE408.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromNode(CString("Time_1"));
ROUTE409.setFromField(CString("fraction_changed"));
ROUTE409.setToNode(CString("ArmLRotationInterp"));
ROUTE409.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE409);

ROUTE& ROUTE410 =  ROUTE();
ROUTE410.setFromNode(CString("Time_1"));
ROUTE410.setFromField(CString("fraction_changed"));
ROUTE410.setToNode(CString("headORotationInterp"));
ROUTE410.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE410);

ROUTE& ROUTE411 =  ROUTE();
ROUTE411.setFromNode(CString("_2"));
ROUTE411.setFromField(CString("whichChoice_changed"));
ROUTE411.setToNode(CString("_4"));
ROUTE411.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE411);

ROUTE& ROUTE412 =  ROUTE();
ROUTE412.setFromNode(CString("_3"));
ROUTE412.setFromField(CString("isActive"));
ROUTE412.setToNode(CString("Time_2"));
ROUTE412.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE412);

ROUTE& ROUTE413 =  ROUTE();
ROUTE413.setFromNode(CString("_3"));
ROUTE413.setFromField(CString("enterTime"));
ROUTE413.setToNode(CString("Time_2"));
ROUTE413.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE413);

ROUTE& ROUTE414 =  ROUTE();
ROUTE414.setFromNode(CString("Time_2"));
ROUTE414.setFromField(CString("fraction_changed"));
ROUTE414.setToNode(CString("armRRotationInterp"));
ROUTE414.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE414);

ROUTE& ROUTE415 =  ROUTE();
ROUTE415.setFromNode(CString("armRRotationInterp"));
ROUTE415.setFromField(CString("value_changed"));
ROUTE415.setToNode(CString("armR"));
ROUTE415.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE415);

ROUTE& ROUTE416 =  ROUTE();
ROUTE416.setFromNode(CString("ArmRRotationInterp"));
ROUTE416.setFromField(CString("value_changed"));
ROUTE416.setToNode(CString("ArmR"));
ROUTE416.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE416);

ROUTE& ROUTE417 =  ROUTE();
ROUTE417.setFromNode(CString("_3"));
ROUTE417.setFromField(CString("isActive"));
ROUTE417.setToNode(CString("Time_3"));
ROUTE417.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE417);

ROUTE& ROUTE418 =  ROUTE();
ROUTE418.setFromNode(CString("_3"));
ROUTE418.setFromField(CString("enterTime"));
ROUTE418.setToNode(CString("Time_3"));
ROUTE418.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE418);

ROUTE& ROUTE419 =  ROUTE();
ROUTE419.setFromNode(CString("Time_3"));
ROUTE419.setFromField(CString("fraction_changed"));
ROUTE419.setToNode(CString("armLRotationInterp"));
ROUTE419.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE419);

ROUTE& ROUTE420 =  ROUTE();
ROUTE420.setFromNode(CString("_3"));
ROUTE420.setFromField(CString("isActive"));
ROUTE420.setToNode(CString("Time_4"));
ROUTE420.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE420);

ROUTE& ROUTE421 =  ROUTE();
ROUTE421.setFromNode(CString("_3"));
ROUTE421.setFromField(CString("enterTime"));
ROUTE421.setToNode(CString("Time_4"));
ROUTE421.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE421);

ROUTE& ROUTE422 =  ROUTE();
ROUTE422.setFromNode(CString("Time_4"));
ROUTE422.setFromField(CString("fraction_changed"));
ROUTE422.setToNode(CString("handLRotationInterp"));
ROUTE422.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE422);

ROUTE& ROUTE423 =  ROUTE();
ROUTE423.setFromNode(CString("handLRotationInterp"));
ROUTE423.setFromField(CString("value_changed"));
ROUTE423.setToNode(CString("handL"));
ROUTE423.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE423);

ROUTE& ROUTE424 =  ROUTE();
ROUTE424.setFromNode(CString("armLRotationInterp"));
ROUTE424.setFromField(CString("value_changed"));
ROUTE424.setToNode(CString("armL"));
ROUTE424.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE424);

ROUTE& ROUTE425 =  ROUTE();
ROUTE425.setFromNode(CString("ArmLRotationInterp"));
ROUTE425.setFromField(CString("value_changed"));
ROUTE425.setToNode(CString("ArmL"));
ROUTE425.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE425);

ROUTE& ROUTE426 =  ROUTE();
ROUTE426.setFromNode(CString("_3"));
ROUTE426.setFromField(CString("isActive"));
ROUTE426.setToNode(CString("Time_5"));
ROUTE426.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE426);

ROUTE& ROUTE427 =  ROUTE();
ROUTE427.setFromNode(CString("_3"));
ROUTE427.setFromField(CString("enterTime"));
ROUTE427.setToNode(CString("Time_5"));
ROUTE427.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE427);

ROUTE& ROUTE428 =  ROUTE();
ROUTE428.setFromNode(CString("Time_5"));
ROUTE428.setFromField(CString("fraction_changed"));
ROUTE428.setToNode(CString("HeadRotationInterp"));
ROUTE428.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE428);

ROUTE& ROUTE429 =  ROUTE();
ROUTE429.setFromNode(CString("_3"));
ROUTE429.setFromField(CString("isActive"));
ROUTE429.setToNode(CString("Time_6"));
ROUTE429.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE429);

ROUTE& ROUTE430 =  ROUTE();
ROUTE430.setFromNode(CString("_3"));
ROUTE430.setFromField(CString("enterTime"));
ROUTE430.setToNode(CString("Time_6"));
ROUTE430.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE430);

ROUTE& ROUTE431 =  ROUTE();
ROUTE431.setFromNode(CString("Time_6"));
ROUTE431.setFromField(CString("fraction_changed"));
ROUTE431.setToNode(CString("augenDiffuseColorInterp"));
ROUTE431.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE431);

ROUTE& ROUTE432 =  ROUTE();
ROUTE432.setFromNode(CString("augenDiffuseColorInterp"));
ROUTE432.setFromField(CString("value_changed"));
ROUTE432.setToNode(CString("_6"));
ROUTE432.setToField(CString("set_diffuseColor"));
Scene7.addChild(&ROUTE432);

ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromNode(CString("_1"));
ROUTE433.setFromField(CString("whichChoice_changed"));
ROUTE433.setToNode(CString("_7"));
ROUTE433.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromNode(CString("headORotationInterp"));
ROUTE434.setFromField(CString("value_changed"));
ROUTE434.setToNode(CString("headO"));
ROUTE434.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE434);

ROUTE& ROUTE435 =  ROUTE();
ROUTE435.setFromNode(CString("HeadRotationInterp"));
ROUTE435.setFromField(CString("value_changed"));
ROUTE435.setToNode(CString("Head"));
ROUTE435.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE435);

ROUTE& ROUTE436 =  ROUTE();
ROUTE436.setFromNode(CString("BodyORotationInterp"));
ROUTE436.setFromField(CString("value_changed"));
ROUTE436.setToNode(CString("BodyO"));
ROUTE436.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE436);

ROUTE& ROUTE437 =  ROUTE();
ROUTE437.setFromNode(CString("_3"));
ROUTE437.setFromField(CString("isActive"));
ROUTE437.setToNode(CString("Time_7"));
ROUTE437.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE437);

ROUTE& ROUTE438 =  ROUTE();
ROUTE438.setFromNode(CString("_3"));
ROUTE438.setFromField(CString("enterTime"));
ROUTE438.setToNode(CString("Time_7"));
ROUTE438.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE438);

ROUTE& ROUTE439 =  ROUTE();
ROUTE439.setFromNode(CString("Time_7"));
ROUTE439.setFromField(CString("fraction_changed"));
ROUTE439.setToNode(CString("fussLRotationInterp"));
ROUTE439.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE439);

ROUTE& ROUTE440 =  ROUTE();
ROUTE440.setFromNode(CString("fussLRotationInterp"));
ROUTE440.setFromField(CString("value_changed"));
ROUTE440.setToNode(CString("fussR"));
ROUTE440.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE440);

ROUTE& ROUTE441 =  ROUTE();
ROUTE441.setFromNode(CString("glowObjTranslationInterp"));
ROUTE441.setFromField(CString("value_changed"));
ROUTE441.setToNode(CString("_10"));
ROUTE441.setToField(CString("set_SFVec3f"));
Scene7.addChild(&ROUTE441);

ROUTE& ROUTE442 =  ROUTE();
ROUTE442.setFromNode(CString("_3"));
ROUTE442.setFromField(CString("isActive"));
ROUTE442.setToNode(CString("Time_8"));
ROUTE442.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE442);

ROUTE& ROUTE443 =  ROUTE();
ROUTE443.setFromNode(CString("_3"));
ROUTE443.setFromField(CString("enterTime"));
ROUTE443.setToNode(CString("Time_8"));
ROUTE443.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE443);

ROUTE& ROUTE444 =  ROUTE();
ROUTE444.setFromNode(CString("Time_8"));
ROUTE444.setFromField(CString("fraction_changed"));
ROUTE444.setToNode(CString("glowObjTranslationInterp"));
ROUTE444.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE444);

ROUTE& ROUTE445 =  ROUTE();
ROUTE445.setFromNode(CString("glowObjTranslationInterp"));
ROUTE445.setFromField(CString("value_changed"));
ROUTE445.setToNode(CString("glowObj"));
ROUTE445.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE445);

ROUTE& ROUTE446 =  ROUTE();
ROUTE446.setFromNode(CString("_3"));
ROUTE446.setFromField(CString("isActive"));
ROUTE446.setToNode(CString("Light1_1"));
ROUTE446.setToField(CString("set_on"));
Scene7.addChild(&ROUTE446);

ROUTE& ROUTE447 =  ROUTE();
ROUTE447.setFromNode(CString("_10"));
ROUTE447.setFromField(CString("value_changed"));
ROUTE447.setToNode(CString("Light1_1"));
ROUTE447.setToField(CString("set_direction"));
Scene7.addChild(&ROUTE447);

ROUTE& ROUTE448 =  ROUTE();
ROUTE448.setFromNode(CString("Time_8"));
ROUTE448.setFromField(CString("fraction_changed"));
ROUTE448.setToNode(CString("shadowTranslationInterp"));
ROUTE448.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE448);

ROUTE& ROUTE449 =  ROUTE();
ROUTE449.setFromNode(CString("shadowTranslationInterp"));
ROUTE449.setFromField(CString("value_changed"));
ROUTE449.setToNode(CString("shadow"));
ROUTE449.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE449);

ROUTE& ROUTE450 =  ROUTE();
ROUTE450.setFromNode(CString("_1"));
ROUTE450.setFromField(CString("whichChoice_changed"));
ROUTE450.setToNode(CString("_11"));
ROUTE450.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE450);

ROUTE& ROUTE451 =  ROUTE();
ROUTE451.setFromNode(CString("_2"));
ROUTE451.setFromField(CString("whichChoice_changed"));
ROUTE451.setToNode(CString("_12"));
ROUTE451.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE451);

X3D0.setScene(&Scene7);

//}
