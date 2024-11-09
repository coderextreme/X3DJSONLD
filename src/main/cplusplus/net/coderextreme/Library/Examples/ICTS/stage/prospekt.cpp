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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:17 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("isOver"));
ExternProtoDeclare8.setUrl(new CString[]{CString("isOver_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("set_isOver"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("set_hitPoint"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("isOver_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field11);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("True"));
ExternProtoDeclare12.setUrl(new CString[]{CString("True_proto.x3d")}, 1);
field& field13 =  field();
field13.setName(CString("set_SFBool"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFBool"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("startTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare12);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("Int"));
ExternProtoDeclare15.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field16 =  field();
field16.setName(CString("startTime"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("value_changed"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("keyValue"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field18);

Scene7.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("BoolSwitch"));
ExternProtoDeclare19.setUrl(new CString[]{CString("BoolSwitch_proto.x3d")}, 1);
field& field20 =  field();
field20.setName(CString("isActive"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFBool"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("wichChoice_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFInt32"));
ExternProtoDeclare19.addChild(&field21);

Scene7.addChild(&ExternProtoDeclare19);

WorldInfo& WorldInfo22 =  WorldInfo();
WorldInfo22.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo22);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("bbox"));
Transform23.setBboxSize(new float[]{3.5,3.5,3.5});
Scene7.addChild(&Transform23);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("bil"));
Billboard& Billboard25 =  Billboard();
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("ps"));
Transform26.setCenter(new float[]{0,0.747102,5.96046e-7});
Transform& Transform27 =  Transform();
Transform27.setDEF(CString("actionsLOD"));
LOD& LOD28 =  LOD();
LOD28.setRange(new float[]{2.5}, 1);
Transform& Transform29 =  Transform();
Transform& Transform30 =  Transform();
Transform30.setDEF(CString("actions_1"));
Switch& Switch31 =  Switch();
Switch31.setDEF(CString("_1"));
Switch31.setWhichChoice(0);
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("actions"));
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("pfeil"));
Transform& Transform34 =  Transform();
Transform34.setDEF(CString("arrow"));
Transform34.setTranslation(new float[]{-0.0060057,1.29494,0.000878274});
Transform34.setRotation(new float[]{-0.478323,0.873766,-0.0879755,0.414935});
Transform34.setScale(new float[]{1,0.330698,1});
Transform34.setScaleOrientation(new float[]{-5.60701e-8,-1,-4.77046e-8,0.160876});
Transform34.setCenter(new float[]{-0.00409863,0.00184226,0.0630002});
Group& Group35 =  Group();
Group& Group36 =  Group();
Group36.setDEF(CString("silberpfeil"));
TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("Time_1"));
TimeSensor37.setCycleInterval(5);
TimeSensor37.setLoop(True);
TimeSensor37.setStartTime(974241991.931775);
TimeSensor37.setStopTime(1);
Group36.addChild(&TimeSensor37);

Group35.addChild(&Group36);

Group& Group38 =  Group();
ScalarInterpolator& ScalarInterpolator39 =  ScalarInterpolator();
ScalarInterpolator39.setDEF(CString("_2"));
ScalarInterpolator39.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
ScalarInterpolator39.setKeyValue(new float[]{-1,-0.6,-0.2,0.2,0.6,1}, 6);
Group38.addChild(&ScalarInterpolator39);

ScalarInterpolator& ScalarInterpolator40 =  ScalarInterpolator();
ScalarInterpolator40.setDEF(CString("_3"));
ScalarInterpolator40.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
ScalarInterpolator40.setKeyValue(new float[]{0,0,0,0,0,0}, 6);
Group38.addChild(&ScalarInterpolator40);

Script& Script41 =  Script();
Script41.setDEF(CString("_4"));
field& field42 =  field();
field42.setName(CString("vec"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFVec2f"));
Script41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("xIn"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFFloat"));
Script41.addChild(&field43);

field& field44 =  field();
field44.setName(CString("yIn"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFFloat"));
Script41.addChild(&field44);

field& field45 =  field();
field45.setName(CString("xBuf"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFFloat"));
Script41.addChild(&field45);

field& field46 =  field();
field46.setName(CString("yBuf"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFFloat"));
Script41.addChild(&field46);


Script41.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group38.addChild(&Script41);

Group35.addChild(&Group38);

Transform34.addChild(&Group35);

TouchSensor& TouchSensor47 =  TouchSensor();
TouchSensor47.setDEF(CString("DefaultTouchSensor"));
TouchSensor47.setEnabled(False);
Transform34.addChild(&TouchSensor47);

Group& Group48 =  Group();
Group& Group49 =  Group();
Group49.setUSE(CString("silberpfeil"));
Group48.addChild(&Group49);

Group& Group50 =  Group();
ScalarInterpolator& ScalarInterpolator51 =  ScalarInterpolator();
ScalarInterpolator51.setDEF(CString("_5"));
ScalarInterpolator51.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
ScalarInterpolator51.setKeyValue(new float[]{-1,-0.8,-0.6,-0.4,-0.2,0,0.2,0.4,0.6,0.8,1}, 11);
Group50.addChild(&ScalarInterpolator51);

ScalarInterpolator& ScalarInterpolator52 =  ScalarInterpolator();
ScalarInterpolator52.setDEF(CString("_6"));
ScalarInterpolator52.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
ScalarInterpolator52.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,0}, 11);
Group50.addChild(&ScalarInterpolator52);

Script& Script53 =  Script();
Script53.setDEF(CString("_7"));
field& field54 =  field();
field54.setName(CString("vec"));
field54.setAccessType(CString("outputOnly"));
field54.setType(CString("SFVec2f"));
Script53.addChild(&field54);

field& field55 =  field();
field55.setName(CString("xIn"));
field55.setAccessType(CString("inputOnly"));
field55.setType(CString("SFFloat"));
Script53.addChild(&field55);

field& field56 =  field();
field56.setName(CString("yIn"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFFloat"));
Script53.addChild(&field56);

field& field57 =  field();
field57.setName(CString("xBuf"));
field57.setAccessType(CString("initializeOnly"));
field57.setType(CString("SFFloat"));
Script53.addChild(&field57);

field& field58 =  field();
field58.setName(CString("yBuf"));
field58.setAccessType(CString("initializeOnly"));
field58.setType(CString("SFFloat"));
Script53.addChild(&field58);


Script53.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group50.addChild(&Script53);

Group48.addChild(&Group50);

Transform34.addChild(&Group48);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
ImageTexture& ImageTexture61 =  ImageTexture();
ImageTexture61.setUrl(new CString[]{CString("reflect2.png")}, 1);
Appearance60.addChild(&ImageTexture61);

TextureTransform& TextureTransform62 =  TextureTransform();
TextureTransform62.setDEF(CString("_8"));
TextureTransform62.setTranslation(new float[]{-1,0});
Appearance60.setTextureTransform(TextureTransform62);

Shape59.addChild(&Appearance60);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setSolid(False);
IndexedFaceSet63.setCreaseAngle(0.5);
IndexedFaceSet63.setTexCoordIndex(new int32_t[]{38,34,9,10,8,-1,49,1,3,50,-1,0,64,65,2,-1,46,47,5,48,-1,61,62,63,4,-1,42,43,44,45,-1,51,7,52,53,-1,58,59,60,6,-1,54,55,56,57,-1,33,35,39,37,-1,29,32,36,31,-1,25,28,30,27,-1,13,22,24,26,23,-1,11,66,67,-1,40,9,10,-1,12,68,69,-1,41,8,10,-1}, 83);
IndexedFaceSet63.setCoordIndex(new int32_t[]{23,21,9,12,8,-1,14,1,3,16,-1,0,15,17,2,-1,16,3,5,18,-1,2,17,19,4,-1,18,5,7,20,-1,20,7,9,21,-1,4,19,22,6,-1,6,22,23,8,-1,20,21,23,22,-1,18,20,22,19,-1,16,18,19,17,-1,13,14,16,17,15,-1,10,24,12,-1,24,9,12,-1,11,25,12,-1,25,8,12,-1}, 83);
TextureCoordinate& TextureCoordinate64 =  TextureCoordinate();
TextureCoordinate64.setPoint(new float[]{0.521061,31.8085,0.480951,49.5791,0.474634,31.8078,0.434524,49.5784,0.41987,31.807,0.379759,49.5776,0.365105,31.8062,0.324995,49.5768,0.176536,11.485,0.126262,25.3339,0.113178,17.1606,0.144382,40.0254,0.248154,2.26738,0.353782,18.4125,0.307355,18.4118,0.307355,18.4118,0.25259,18.4109,0.25259,18.4109,0.197826,18.4102,0.197826,18.4102,0.151399,18.4095,0.151399,18.4095,0.341213,21.8747,0.366351,14.9502,0.294787,21.874,0.294787,21.874,0.319923,14.9495,0.319923,14.9495,0.240022,21.8732,0.240022,21.8732,0.265159,14.9487,0.265159,14.9487,0.185257,21.8724,0.185257,21.8724,0.13883,21.8717,0.13883,21.8717,0.210395,14.9479,0.210395,14.9479,0.163967,14.9472,0.163967,14.9472,0.104728,31.2658,0.201722,4.54713,0.392328,46.1154,0.379759,49.5776,0.324995,49.5768,0.337564,46.1146,0.447093,46.1162,0.434524,49.5784,0.392328,46.1154,0.49352,46.1169,0.447093,46.1162,0.337564,46.1146,0.278568,49.5761,0.291137,46.1139,0.365105,31.8062,0.352536,35.2684,0.306109,35.2677,0.318678,31.8055,0.41987,31.807,0.407301,35.2692,0.352536,35.2684,0.474634,31.8078,0.462065,35.27,0.407301,35.2692,0.508492,35.2707,0.462065,35.27,0.165916,34.0936,0.174366,19.9884,0.222968,9.20525,0.134424,21.8187}, 140);
IndexedFaceSet63.setTexCoord(&TextureCoordinate64);

Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{0.0707107,-0.0431802,0.0707107,0.0707107,0.0621705,0.0707107,0.0382683,-0.0431802,0.092388,0.0382683,0.0621705,0.092388,1.50996e-8,-0.0431802,0.1,1.50996e-8,0.0621705,0.1,-0.0382683,-0.0431802,0.092388,-0.0382683,0.0621705,0.092388,-0.0707107,-0.0431802,0.0707107,-0.0707107,0.0621705,0.0707107,-0.0707107,0.129565,0.0707107,-0.0707107,-0.124945,0.0707107,-0.100585,0,0.0260003,0.0707107,0.00949515,0.0707107,0.0707107,0.0488152,0.0707107,0.0707107,-0.0263115,0.0707107,0.0382683,0.0488152,0.092388,0.0382683,-0.0263115,0.092388,1.50996e-8,0.0488152,0.1,1.50996e-8,-0.0263115,0.1,-0.0382683,0.0488152,0.092388,-0.0707107,0.0488152,0.0707107,-0.0382683,-0.0263115,0.092388,-0.0707107,-0.0263115,0.0707107,-0.0707107,0.106162,0.0707107,-0.0707107,-0.0959576,0.0707107}, 78);
IndexedFaceSet63.setCoord(&Coordinate65);

Shape59.setGeometry(&IndexedFaceSet63);

Transform34.addChild(&Shape59);

Transform33.addChild(&Transform34);

Transform32.addChild(&Transform33);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor67 =  VisibilitySensor();
VisibilitySensor67.setDEF(CString("_9"));
VisibilitySensor67.setSize(new float[]{0.5,1,0.5});
VisibilitySensor67.setCenter(new float[]{0,1,0});
Transform66.addChild(&VisibilitySensor67);

Transform32.addChild(&Transform66);

Transform& Transform68 =  Transform();
Transform68.setDEF(CString("actionsOFF"));
TouchSensor& TouchSensor69 =  TouchSensor();
TouchSensor69.setDEF(CString("_10"));
Transform68.addChild(&TouchSensor69);

Transform& Transform70 =  Transform();
Transform70.setTranslation(new float[]{0.0903407,1.17448,-0.0168648});
Transform70.setRotation(new float[]{-0.0996761,0.990015,-0.0996771,1.58084});
Transform70.setScale(new float[]{0.187675,1.55976,1.09611});
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setAmbientIntensity(0);
Material73.setDiffuseColor(new float[]{0,0,0});
Material73.setEmissiveColor(new float[]{0.840426,0,0.0345712});
Material73.setTransparency(1);
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

IndexedFaceSet& IndexedFaceSet74 =  IndexedFaceSet();
IndexedFaceSet74.setCreaseAngle(0.5);
IndexedFaceSet74.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1}, 60);
Coordinate& Coordinate75 =  Coordinate();
Coordinate75.setPoint(new float[]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.0999994,-0.118889,-0.0337734,-0.0999994,-0.318889,-0.0337734,0.100001,-0.318889,-0.0337734,0.100001,-0.118889,-0.0337734,0.100001,-0.318889,-0.233773,0.100001,-0.118889,-0.233773,-0.0999994,-0.118889,-0.233773,-0.0999994,-0.318889,-0.233773}, 48);
IndexedFaceSet74.setCoord(&Coordinate75);

Shape71.setGeometry(&IndexedFaceSet74);

Transform70.addChild(&Shape71);

Transform68.addChild(&Transform70);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("isOver_off"));
ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(CString("isOver"));
ProtoInstance77.setDEF(CString("_11"));
Transform76.addChild(&ProtoInstance77);

Transform68.addChild(&Transform76);

Transform32.addChild(&Transform68);

Switch31.addChild(&Transform32);

Transform& Transform78 =  Transform();
Transform78.setDEF(CString("off"));
Transform& Transform79 =  Transform();
Transform79.setDEF(CString("actionsOn"));
TouchSensor& TouchSensor80 =  TouchSensor();
TouchSensor80.setDEF(CString("_12"));
Transform79.addChild(&TouchSensor80);

Transform& Transform81 =  Transform();
Transform81.setTranslation(new float[]{0.00357496,0.999758,0.0116803});
Transform81.setRotation(new float[]{1,0.00000226147,-0.00000184775,1.37011});
Transform81.setScale(new float[]{3.61696,0.117977,5.02173});
Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Material& Material84 =  Material();
Material84.setAmbientIntensity(0);
Material84.setDiffuseColor(new float[]{0,0,0});
Material84.setEmissiveColor(new float[]{0,0.199468,0.797872});
Material84.setTransparency(1);
Appearance83.addChild(&Material84);

Shape82.addChild(&Appearance83);

Box& Box85 =  Box();
Box85.setSize(new float[]{0.2,0.2,0.2});
Shape82.setGeometry(&Box85);

Transform81.addChild(&Shape82);

Transform79.addChild(&Transform81);

Transform& Transform86 =  Transform();
Transform86.setDEF(CString("True"));
ProtoInstance& ProtoInstance87 =  ProtoInstance();
ProtoInstance87.setName(CString("True"));
ProtoInstance87.setDEF(CString("_13"));
Transform86.addChild(&ProtoInstance87);

Transform79.addChild(&Transform86);

Transform& Transform88 =  Transform();
Transform88.setDEF(CString("Int"));
ProtoInstance& ProtoInstance89 =  ProtoInstance();
ProtoInstance89.setName(CString("Int"));
ProtoInstance89.setDEF(CString("_14"));
Transform88.addChild(&ProtoInstance89);

Transform79.addChild(&Transform88);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("isOver"));
ProtoInstance& ProtoInstance91 =  ProtoInstance();
ProtoInstance91.setName(CString("isOver"));
ProtoInstance91.setDEF(CString("_15"));
Transform90.addChild(&ProtoInstance91);

Transform79.addChild(&Transform90);

Transform78.addChild(&Transform79);

Switch31.addChild(&Transform78);

Transform30.addChild(&Switch31);

Transform29.addChild(&Transform30);

Transform& Transform92 =  Transform();
Transform92.setDEF(CString("c"));
Transform92.setTranslation(new float[]{0,1.78814e-7,-0.0180891});
Transform92.setScale(new float[]{1,1,0.775046});
Collision& Collision93 =  Collision();
Transform& Transform94 =  Transform();
Transform94.setTranslation(new float[]{-0.012183,0.76732,0.19756});
Transform94.setScale(new float[]{0.423045,0.516801,0.277972});
Shape& Shape95 =  Shape();
Box& Box96 =  Box();
Shape95.setGeometry(&Box96);

Transform94.addChild(&Shape95);

Collision93.addChildren(&Transform94);

Transform92.addChild(&Collision93);

Transform29.addChild(&Transform92);

LOD28.addChildren(&Transform29);

Transform& Transform97 =  Transform();
LOD28.addChildren(&Transform97);

Transform27.addChild(&LOD28);

Transform26.addChild(&Transform27);

Transform& Transform98 =  Transform();
Transform98.setDEF(CString("pp_1"));
Transform& Transform99 =  Transform();
Transform99.setDEF(CString("BoolSwitch"));
ProtoInstance& ProtoInstance100 =  ProtoInstance();
ProtoInstance100.setName(CString("BoolSwitch"));
ProtoInstance100.setDEF(CString("_16"));
Transform99.addChild(&ProtoInstance100);

Transform98.addChild(&Transform99);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("pp"));
Transform& Transform102 =  Transform();
Transform102.setRotation(new float[]{0,1,0,1.5708});
Transform102.setScale(new float[]{1,0.999999,1});
Transform& Transform103 =  Transform();
Transform103.setDEF(CString("book"));
Transform103.setTranslation(new float[]{0.00933547,1.17832,-0.0147909});
Transform103.setRotation(new float[]{-0.534678,0.6544,-0.534678,4.30052});
Transform103.setScale(new float[]{0.999999,0.999999,1});
Transform103.setScaleOrientation(new float[]{0.0595532,-0.26646,-0.962004,0.0519707});
Inline& Inline104 =  Inline();
Inline104.setUrl(new CString[]{CString("book.x3d")}, 1);
Inline104.setBboxSize(new float[]{0.6,0.1,0.4});
Transform103.addChild(&Inline104);

Transform102.addChild(&Transform103);

Transform& Transform105 =  Transform();
Transform105.setDEF(CString("link"));
Anchor& Anchor106 =  Anchor();
Anchor106.setDescription(CString("Klicken Sie hier fr mehr Informationen."));
Anchor106.setUrl(new CString[]{CString("javascript: function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"')\") } tmt_winLaunch('/3D/html/mbenz/placeholder.html', 'place','place','resizable=yes,width=623,height=454,left=0,top=0');")}, 1);
Anchor106.setParameter(new CString[]{CString("")}, 0);
Transform& Transform107 =  Transform();
Transform& Transform108 =  Transform();
Transform108.setTranslation(new float[]{-0.0595387,0.83215,-0.0466649});
Transform108.setRotation(new float[]{0.0996764,0.990015,0.0996764,4.70235});
Transform108.setScale(new float[]{0.20466,0.302438,0.312995});
Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Material& Material111 =  Material();
Material111.setAmbientIntensity(0);
Material111.setDiffuseColor(new float[]{0,0,0});
Material111.setShininess(0);
Material111.setTransparency(0.606383);
Appearance110.addChild(&Material111);

Shape109.addChild(&Appearance110);

IndexedFaceSet& IndexedFaceSet112 =  IndexedFaceSet();
IndexedFaceSet112.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate113 =  Coordinate();
Coordinate113.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet112.setCoord(&Coordinate113);

Shape109.setGeometry(&IndexedFaceSet112);

Transform108.addChild(&Shape109);

Transform107.addChild(&Transform108);

Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{-0.0607254,0.839906,-0.0558341});
Transform114.setRotation(new float[]{0.0996761,0.990015,0.099676,4.70235});
Transform114.setScale(new float[]{0.209212,0.312995,0.312995});
Transform114.setScaleOrientation(new float[]{1,-9.81192e-8,-1.25691e-7,4.71239});
Shape& Shape115 =  Shape();
Appearance& Appearance116 =  Appearance();
ImageTexture& ImageTexture117 =  ImageTexture();
ImageTexture117.setUrl(new CString[]{CString("poster1.jpg")}, 1);
Appearance116.addChild(&ImageTexture117);

Shape115.addChild(&Appearance116);

IndexedFaceSet& IndexedFaceSet118 =  IndexedFaceSet();
IndexedFaceSet118.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate119 =  TextureCoordinate();
TextureCoordinate119.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet118.setTexCoord(&TextureCoordinate119);

Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet118.setCoord(&Coordinate120);

Shape115.setGeometry(&IndexedFaceSet118);

Transform114.addChild(&Shape115);

Transform107.addChild(&Transform114);

Anchor106.addChild(&Transform107);

Transform105.addChild(&Anchor106);

Transform102.addChild(&Transform105);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("sta"));
Transform121.setTranslation(new float[]{0,0.683922,0});
Transform121.setScale(new float[]{0.25,0.675,0.25});
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
ImageTexture& ImageTexture124 =  ImageTexture();
ImageTexture124.setUrl(new CString[]{CString("reflect1.png")}, 1);
Appearance123.addChild(&ImageTexture124);

Shape122.addChild(&Appearance123);

IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setSolid(False);
IndexedFaceSet125.setCreaseAngle(0.5);
IndexedFaceSet125.setTexCoordIndex(new int32_t[]{4,5,19,-1,5,18,19,-1,36,38,39,-1,36,37,38,-1,2,16,0,-1,16,17,0,-1,19,3,1,-1,19,18,3,-1,2,7,16,-1,7,6,16,-1,7,5,6,-1,5,4,6,-1,40,41,10,-1,41,11,10,-1,42,43,13,-1,43,12,13,-1,34,35,14,-1,35,15,14,-1,20,24,26,-1,24,25,26,-1,27,29,33,-1,27,28,29,-1}, 88);
IndexedFaceSet125.setCoordIndex(new int32_t[]{8,9,1,-1,9,7,1,-1,2,5,4,-1,2,3,5,-1,6,0,4,-1,0,2,4,-1,1,5,3,-1,1,7,5,-1,6,11,0,-1,11,10,0,-1,11,9,10,-1,9,8,10,-1,10,11,12,-1,11,13,12,-1,8,9,15,-1,9,14,15,-1,3,5,16,-1,5,17,16,-1,18,19,21,-1,19,20,21,-1,22,24,25,-1,22,23,24,-1}, 88);
TextureCoordinate& TextureCoordinate126 =  TextureCoordinate();
TextureCoordinate126.setPoint(new float[]{0.145045,1.54965,0.135144,0.077854,0.145045,1.54965,0.252708,0.0454222,0.0813117,0.829969,0.198877,0.797538,0.0543957,1.20603,0.171961,1.1736,0.108228,0.453912,0.225792,0.42148,0.119832,2.42227,0.119832,3.01705,0.14019,2.95191,0.14019,2.35712,-0.217535,0.0384901,-0.217535,0.623365,0.0274798,1.58208,0.0274798,1.58208,0.252708,0.0454222,0.135144,0.077854,0.923948,6.7288,0.692961,5.0466,0.461974,3.3644,0.230987,1.6822,0,0,0.076052,0,1,6.7288,1,6.7288,0.076052,0,0,0,0.230987,1.6822,0.461974,3.3644,0.692961,5.0466,0.923948,6.7288,-0.357631,0.0384901,-0.357631,0.623365,-0.178828,0.0647557,-0.0329226,-0.00442973,-0.0312036,0.280277,-0.177109,0.349462,0.298983,1.86853,0.298983,2.46332,0.319341,1.80338,0.319341,2.39817}, 88);
IndexedFaceSet125.setTexCoord(&TextureCoordinate126);

Coordinate& Coordinate127 =  Coordinate();
Coordinate127.setPoint(new float[]{0.201083,1,1,-0.897416,-1,1,0.291503,1,1,-0.806997,-1,1,0.291503,1,-1,-0.806997,-1,-1,0.201083,1,-1,-0.897416,-1,-1,-0.348167,0,1,-0.348167,0,-1,-0.0735419,0.5,1,-0.0735419,0.5,-1,-0.308407,0.5,1,-0.308407,0.5,-1,-0.583032,0,-1,-0.583032,0,1,0.76518,-1,1,0.76518,-1,-1,0.201083,1,1,-0.897416,-1,1,-0.806997,-1,1,0.291503,1,1,0.291503,1,-1,-0.806997,-1,-1,-0.897416,-1,-1,0.201083,1,-1}, 78);
IndexedFaceSet125.setCoord(&Coordinate127);

Shape122.setGeometry(&IndexedFaceSet125);

Transform121.addChild(&Shape122);

Transform102.addChild(&Transform121);

Transform101.addChild(&Transform102);

Transform& Transform128 =  Transform();
Transform128.setDEF(CString("shadow"));
Transform128.setTranslation(new float[]{0,-1.86265e-8,-4.61459e-8});
Transform128.setRotation(new float[]{1,0,0,4.71239});
Transform128.setScale(new float[]{1.34486,1.34486,1.34486});
Shape& Shape129 =  Shape();
Appearance& Appearance130 =  Appearance();
ImageTexture& ImageTexture131 =  ImageTexture();
ImageTexture131.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance130.addChild(&ImageTexture131);

Shape129.addChild(&Appearance130);

IndexedFaceSet& IndexedFaceSet132 =  IndexedFaceSet();
IndexedFaceSet132.setCoordIndex(new int32_t[]{0,1,3,-1,1,2,3,-1}, 8);
TextureCoordinate& TextureCoordinate133 =  TextureCoordinate();
TextureCoordinate133.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet132.setTexCoord(&TextureCoordinate133);

Coordinate& Coordinate134 =  Coordinate();
Coordinate134.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet132.setCoord(&Coordinate134);

Shape129.setGeometry(&IndexedFaceSet132);

Transform128.addChild(&Shape129);

Transform101.addChild(&Transform128);

Transform98.addChild(&Transform101);

Transform26.addChild(&Transform98);

Billboard25.addChild(&Transform26);

Transform24.addChild(&Billboard25);

Scene7.addChild(&Transform24);

ROUTE& ROUTE135 =  ROUTE();
ROUTE135.setFromNode(CString("_9"));
ROUTE135.setFromField(CString("isActive"));
ROUTE135.setToNode(CString("Time_1"));
ROUTE135.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE135);

ROUTE& ROUTE136 =  ROUTE();
ROUTE136.setFromNode(CString("_9"));
ROUTE136.setFromField(CString("enterTime"));
ROUTE136.setToNode(CString("Time_1"));
ROUTE136.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE136);

ROUTE& ROUTE137 =  ROUTE();
ROUTE137.setFromNode(CString("Time_1"));
ROUTE137.setFromField(CString("fraction_changed"));
ROUTE137.setToNode(CString("_2"));
ROUTE137.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE137);

ROUTE& ROUTE138 =  ROUTE();
ROUTE138.setFromNode(CString("Time_1"));
ROUTE138.setFromField(CString("fraction_changed"));
ROUTE138.setToNode(CString("_3"));
ROUTE138.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE138);

ROUTE& ROUTE139 =  ROUTE();
ROUTE139.setFromNode(CString("_2"));
ROUTE139.setFromField(CString("value_changed"));
ROUTE139.setToNode(CString("_4"));
ROUTE139.setToField(CString("xIn"));
Scene7.addChild(&ROUTE139);

ROUTE& ROUTE140 =  ROUTE();
ROUTE140.setFromNode(CString("_3"));
ROUTE140.setFromField(CString("value_changed"));
ROUTE140.setToNode(CString("_4"));
ROUTE140.setToField(CString("yIn"));
Scene7.addChild(&ROUTE140);

ROUTE& ROUTE141 =  ROUTE();
ROUTE141.setFromNode(CString("Time_1"));
ROUTE141.setFromField(CString("fraction_changed"));
ROUTE141.setToNode(CString("_5"));
ROUTE141.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE141);

ROUTE& ROUTE142 =  ROUTE();
ROUTE142.setFromNode(CString("Time_1"));
ROUTE142.setFromField(CString("fraction_changed"));
ROUTE142.setToNode(CString("_6"));
ROUTE142.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE142);

ROUTE& ROUTE143 =  ROUTE();
ROUTE143.setFromNode(CString("_5"));
ROUTE143.setFromField(CString("value_changed"));
ROUTE143.setToNode(CString("_7"));
ROUTE143.setToField(CString("xIn"));
Scene7.addChild(&ROUTE143);

ROUTE& ROUTE144 =  ROUTE();
ROUTE144.setFromNode(CString("_6"));
ROUTE144.setFromField(CString("value_changed"));
ROUTE144.setToNode(CString("_7"));
ROUTE144.setToField(CString("yIn"));
Scene7.addChild(&ROUTE144);

ROUTE& ROUTE145 =  ROUTE();
ROUTE145.setFromNode(CString("_4"));
ROUTE145.setFromField(CString("vec"));
ROUTE145.setToNode(CString("_8"));
ROUTE145.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE145);

ROUTE& ROUTE146 =  ROUTE();
ROUTE146.setFromNode(CString("_7"));
ROUTE146.setFromField(CString("vec"));
ROUTE146.setToNode(CString("_8"));
ROUTE146.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE146);

ROUTE& ROUTE147 =  ROUTE();
ROUTE147.setFromNode(CString("_10"));
ROUTE147.setFromField(CString("isOver"));
ROUTE147.setToNode(CString("_11"));
ROUTE147.setToField(CString("set_isOver"));
Scene7.addChild(&ROUTE147);

ROUTE& ROUTE148 =  ROUTE();
ROUTE148.setFromNode(CString("_10"));
ROUTE148.setFromField(CString("hitPoint_changed"));
ROUTE148.setToNode(CString("_11"));
ROUTE148.setToField(CString("set_hitPoint"));
Scene7.addChild(&ROUTE148);

ROUTE& ROUTE149 =  ROUTE();
ROUTE149.setFromNode(CString("_15"));
ROUTE149.setFromField(CString("isOver_changed"));
ROUTE149.setToNode(CString("_13"));
ROUTE149.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE149);

ROUTE& ROUTE150 =  ROUTE();
ROUTE150.setFromNode(CString("_13"));
ROUTE150.setFromField(CString("startTime"));
ROUTE150.setToNode(CString("_14"));
ROUTE150.setToField(CString("startTime"));
Scene7.addChild(&ROUTE150);

ROUTE& ROUTE151 =  ROUTE();
ROUTE151.setFromNode(CString("_12"));
ROUTE151.setFromField(CString("isOver"));
ROUTE151.setToNode(CString("_15"));
ROUTE151.setToField(CString("set_isOver"));
Scene7.addChild(&ROUTE151);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromNode(CString("_12"));
ROUTE152.setFromField(CString("hitPoint_changed"));
ROUTE152.setToNode(CString("_15"));
ROUTE152.setToField(CString("set_hitPoint"));
Scene7.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromNode(CString("_14"));
ROUTE153.setFromField(CString("value_changed"));
ROUTE153.setToNode(CString("_1"));
ROUTE153.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromNode(CString("_16"));
ROUTE154.setFromField(CString("wichChoice_changed"));
ROUTE154.setToNode(CString("_1"));
ROUTE154.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromNode(CString("_11"));
ROUTE155.setFromField(CString("isOver_changed"));
ROUTE155.setToNode(CString("_16"));
ROUTE155.setToField(CString("isActive"));
Scene7.addChild(&ROUTE155);

X3D0.setScene(&Scene7);

}
