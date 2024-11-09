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
ExternProtoDeclare8.setName(CString("Switcher"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Switcher_proto.x3d")}, 1);
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
field11.setName(CString("prev"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("next"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("offset"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("whichChoice_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("RandomSwitcher"));
ExternProtoDeclare15.setUrl(new CString[]{CString("RandomSwitcher_proto.x3d")}, 1);
field& field16 =  field();
field16.setName(CString("minValue"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("maxValue"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("startTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("whichChoice_changed"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field19);

Scene7.addChild(&ExternProtoDeclare15);

WorldInfo& WorldInfo20 =  WorldInfo();
WorldInfo20.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo20);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("screensplat"));
TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("_1"));
TimeSensor22.setLoop(True);
TimeSensor22.setStartTime(974763620.45387);
Transform21.addChild(&TimeSensor22);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("MSwitch"));
Switch& Switch24 =  Switch();
Switch24.setDEF(CString("_2"));
Switch24.setWhichChoice(1);
Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform25.setScale(new float[]{0.945694,0.828292,0.894065});
Group& Group26 =  Group();
Group& Group27 =  Group();
Group27.setDEF(CString("zoom"));
TimeSensor& TimeSensor28 =  TimeSensor();
TimeSensor28.setDEF(CString("Time_1"));
TimeSensor28.setCycleInterval(4);
TimeSensor28.setLoop(True);
TimeSensor28.setStartTime(974763620.45387);
TimeSensor28.setStopTime(1);
Group27.addChild(&TimeSensor28);

Group26.addChild(&Group27);

Group& Group29 =  Group();
ScalarInterpolator& ScalarInterpolator30 =  ScalarInterpolator();
ScalarInterpolator30.setDEF(CString("_3"));
ScalarInterpolator30.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator30.setKeyValue(new float[]{0.5,0.5545,0.616,0.6815,0.748,0.8125,0.872,0.9235,0.964,0.9905,1,0.9905,0.964,0.9235,0.872,0.8125,0.748,0.6815,0.616,0.5545,0.5}, 21);
Group29.addChild(&ScalarInterpolator30);

ScalarInterpolator& ScalarInterpolator31 =  ScalarInterpolator();
ScalarInterpolator31.setDEF(CString("_4"));
ScalarInterpolator31.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator31.setKeyValue(new float[]{0.5,0.5545,0.616,0.6815,0.748,0.8125,0.872,0.9235,0.964,0.9905,1,0.9905,0.964,0.9235,0.872,0.8125,0.748,0.6815,0.616,0.5545,0.5}, 21);
Group29.addChild(&ScalarInterpolator31);

Script& Script32 =  Script();
Script32.setDEF(CString("_5"));
field& field33 =  field();
field33.setName(CString("vec"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("SFVec2f"));
Script32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("xIn"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFFloat"));
Script32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("yIn"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFFloat"));
Script32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("xBuf"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFFloat"));
Script32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("yBuf"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFFloat"));
Script32.addChild(&field37);


Script32.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group29.addChild(&Script32);

Group26.addChild(&Group29);

Group& Group38 =  Group();
ScalarInterpolator& ScalarInterpolator39 =  ScalarInterpolator();
ScalarInterpolator39.setDEF(CString("_6"));
ScalarInterpolator39.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator39.setKeyValue(new float[]{-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5}, 21);
Group38.addChild(&ScalarInterpolator39);

ScalarInterpolator& ScalarInterpolator40 =  ScalarInterpolator();
ScalarInterpolator40.setDEF(CString("_7"));
ScalarInterpolator40.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator40.setKeyValue(new float[]{-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5,-0.5}, 21);
Group38.addChild(&ScalarInterpolator40);

Script& Script41 =  Script();
Script41.setDEF(CString("_8"));
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

Group26.addChild(&Group38);

Transform25.addChild(&Group26);

Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setUrl(new CString[]{CString("cmaxx1.jpg")}, 1);
Appearance48.addChild(&ImageTexture49);

TextureTransform& TextureTransform50 =  TextureTransform();
TextureTransform50.setDEF(CString("t"));
TextureTransform50.setScale(new float[]{0.5,0.5});
TextureTransform50.setCenter(new float[]{-0.5,-0.5});
Appearance48.setTextureTransform(TextureTransform50);

Shape47.addChild(&Appearance48);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setDEF(CString("i"));
IndexedFaceSet51.setSolid(False);
IndexedFaceSet51.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate52 =  TextureCoordinate();
TextureCoordinate52.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet51.setTexCoord(&TextureCoordinate52);

Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet51.setCoord(&Coordinate53);

Shape47.setGeometry(&IndexedFaceSet51);

Transform25.addChild(&Shape47);

Switch24.addChild(&Transform25);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform54.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
ImageTexture& ImageTexture57 =  ImageTexture();
ImageTexture57.setUrl(new CString[]{CString("cmaxx3.jpg")}, 1);
Appearance56.addChild(&ImageTexture57);

TextureTransform& TextureTransform58 =  TextureTransform();
TextureTransform58.setUSE(CString("t"));
Appearance56.setTextureTransform(TextureTransform58);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet59 =  IndexedFaceSet();
IndexedFaceSet59.setUSE(CString("i"));
Shape55.setGeometry(&IndexedFaceSet59);

Transform54.addChild(&Shape55);

Switch24.addChild(&Transform54);

Transform& Transform60 =  Transform();
Transform60.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform60.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
ImageTexture& ImageTexture63 =  ImageTexture();
ImageTexture63.setUrl(new CString[]{CString("fball2__2.jpg")}, 1);
Appearance62.addChild(&ImageTexture63);

TextureTransform& TextureTransform64 =  TextureTransform();
TextureTransform64.setUSE(CString("t"));
Appearance62.setTextureTransform(TextureTransform64);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet65 =  IndexedFaceSet();
IndexedFaceSet65.setUSE(CString("i"));
Shape61.setGeometry(&IndexedFaceSet65);

Transform60.addChild(&Shape61);

Switch24.addChild(&Transform60);

Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform66.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
ImageTexture& ImageTexture69 =  ImageTexture();
ImageTexture69.setUrl(new CString[]{CString("mbenz1.jpg")}, 1);
Appearance68.addChild(&ImageTexture69);

TextureTransform& TextureTransform70 =  TextureTransform();
TextureTransform70.setUSE(CString("t"));
Appearance68.setTextureTransform(TextureTransform70);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet71 =  IndexedFaceSet();
IndexedFaceSet71.setUSE(CString("i"));
Shape67.setGeometry(&IndexedFaceSet71);

Transform66.addChild(&Shape67);

Switch24.addChild(&Transform66);

Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform72.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape73 =  Shape();
Appearance& Appearance74 =  Appearance();
ImageTexture& ImageTexture75 =  ImageTexture();
ImageTexture75.setUrl(new CString[]{CString("mbenz4__2.jpg")}, 1);
Appearance74.addChild(&ImageTexture75);

TextureTransform& TextureTransform76 =  TextureTransform();
TextureTransform76.setUSE(CString("t"));
Appearance74.setTextureTransform(TextureTransform76);

Shape73.addChild(&Appearance74);

IndexedFaceSet& IndexedFaceSet77 =  IndexedFaceSet();
IndexedFaceSet77.setUSE(CString("i"));
Shape73.setGeometry(&IndexedFaceSet77);

Transform72.addChild(&Shape73);

Switch24.addChild(&Transform72);

Transform& Transform78 =  Transform();
Transform78.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform78.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape79 =  Shape();
Appearance& Appearance80 =  Appearance();
ImageTexture& ImageTexture81 =  ImageTexture();
ImageTexture81.setUrl(new CString[]{CString("mcdon3__2.jpg")}, 1);
Appearance80.addChild(&ImageTexture81);

TextureTransform& TextureTransform82 =  TextureTransform();
TextureTransform82.setUSE(CString("t"));
Appearance80.setTextureTransform(TextureTransform82);

Shape79.addChild(&Appearance80);

IndexedFaceSet& IndexedFaceSet83 =  IndexedFaceSet();
IndexedFaceSet83.setUSE(CString("i"));
Shape79.setGeometry(&IndexedFaceSet83);

Transform78.addChild(&Shape79);

Switch24.addChild(&Transform78);

Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform84.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
ImageTexture& ImageTexture87 =  ImageTexture();
ImageTexture87.setUrl(new CString[]{CString("pbank1__2.jpg")}, 1);
Appearance86.addChild(&ImageTexture87);

TextureTransform& TextureTransform88 =  TextureTransform();
TextureTransform88.setUSE(CString("t"));
Appearance86.setTextureTransform(TextureTransform88);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet89 =  IndexedFaceSet();
IndexedFaceSet89.setUSE(CString("i"));
Shape85.setGeometry(&IndexedFaceSet89);

Transform84.addChild(&Shape85);

Switch24.addChild(&Transform84);

Transform& Transform90 =  Transform();
Transform90.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform90.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape91 =  Shape();
Appearance& Appearance92 =  Appearance();
ImageTexture& ImageTexture93 =  ImageTexture();
ImageTexture93.setUrl(new CString[]{CString("pbank5.jpg")}, 1);
Appearance92.addChild(&ImageTexture93);

TextureTransform& TextureTransform94 =  TextureTransform();
TextureTransform94.setUSE(CString("t"));
Appearance92.setTextureTransform(TextureTransform94);

Shape91.addChild(&Appearance92);

IndexedFaceSet& IndexedFaceSet95 =  IndexedFaceSet();
IndexedFaceSet95.setUSE(CString("i"));
Shape91.setGeometry(&IndexedFaceSet95);

Transform90.addChild(&Shape91);

Switch24.addChild(&Transform90);

Transform& Transform96 =  Transform();
Transform96.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform96.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape97 =  Shape();
Appearance& Appearance98 =  Appearance();
ImageTexture& ImageTexture99 =  ImageTexture();
ImageTexture99.setUrl(new CString[]{CString("pman3__2.jpg")}, 1);
Appearance98.addChild(&ImageTexture99);

TextureTransform& TextureTransform100 =  TextureTransform();
TextureTransform100.setUSE(CString("t"));
Appearance98.setTextureTransform(TextureTransform100);

Shape97.addChild(&Appearance98);

IndexedFaceSet& IndexedFaceSet101 =  IndexedFaceSet();
IndexedFaceSet101.setUSE(CString("i"));
Shape97.setGeometry(&IndexedFaceSet101);

Transform96.addChild(&Shape97);

Switch24.addChild(&Transform96);

Transform& Transform102 =  Transform();
Transform102.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform102.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape103 =  Shape();
Appearance& Appearance104 =  Appearance();
ImageTexture& ImageTexture105 =  ImageTexture();
ImageTexture105.setUrl(new CString[]{CString("pman4.jpg")}, 1);
Appearance104.addChild(&ImageTexture105);

TextureTransform& TextureTransform106 =  TextureTransform();
TextureTransform106.setUSE(CString("t"));
Appearance104.setTextureTransform(TextureTransform106);

Shape103.addChild(&Appearance104);

IndexedFaceSet& IndexedFaceSet107 =  IndexedFaceSet();
IndexedFaceSet107.setUSE(CString("i"));
Shape103.setGeometry(&IndexedFaceSet107);

Transform102.addChild(&Shape103);

Switch24.addChild(&Transform102);

Transform& Transform108 =  Transform();
Transform108.setDEF(CString("s1"));
Transform& Transform109 =  Transform();
Transform109.setDEF(CString("splat"));
TimeSensor& TimeSensor110 =  TimeSensor();
TimeSensor110.setDEF(CString("_9"));
TimeSensor110.setCycleInterval(0.25);
TimeSensor110.setLoop(True);
TimeSensor110.setStartTime(974760807.698432);
Transform109.addChild(&TimeSensor110);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("splatswitch"));
Switch& Switch112 =  Switch();
Switch112.setDEF(CString("_10"));
Switch112.setWhichChoice(0);
Transform& Transform113 =  Transform();
Transform113.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform113.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape114 =  Shape();
Appearance& Appearance115 =  Appearance();
ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setUrl(new CString[]{CString("fx.1.png")}, 1);
Appearance115.addChild(&ImageTexture116);

TextureTransform& TextureTransform117 =  TextureTransform();
TextureTransform117.setUSE(CString("t"));
Appearance115.setTextureTransform(TextureTransform117);

Shape114.addChild(&Appearance115);

IndexedFaceSet& IndexedFaceSet118 =  IndexedFaceSet();
IndexedFaceSet118.setUSE(CString("i"));
Shape114.setGeometry(&IndexedFaceSet118);

Transform113.addChild(&Shape114);

Switch112.addChild(&Transform113);

Transform& Transform119 =  Transform();
Transform119.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform119.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
ImageTexture& ImageTexture122 =  ImageTexture();
ImageTexture122.setUrl(new CString[]{CString("fx.2.png")}, 1);
Appearance121.addChild(&ImageTexture122);

TextureTransform& TextureTransform123 =  TextureTransform();
TextureTransform123.setUSE(CString("t"));
Appearance121.setTextureTransform(TextureTransform123);

Shape120.addChild(&Appearance121);

IndexedFaceSet& IndexedFaceSet124 =  IndexedFaceSet();
IndexedFaceSet124.setUSE(CString("i"));
Shape120.setGeometry(&IndexedFaceSet124);

Transform119.addChild(&Shape120);

Switch112.addChild(&Transform119);

Transform& Transform125 =  Transform();
Transform125.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform125.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape126 =  Shape();
Appearance& Appearance127 =  Appearance();
ImageTexture& ImageTexture128 =  ImageTexture();
ImageTexture128.setUrl(new CString[]{CString("fx.3.png")}, 1);
Appearance127.addChild(&ImageTexture128);

TextureTransform& TextureTransform129 =  TextureTransform();
TextureTransform129.setUSE(CString("t"));
Appearance127.setTextureTransform(TextureTransform129);

Shape126.addChild(&Appearance127);

IndexedFaceSet& IndexedFaceSet130 =  IndexedFaceSet();
IndexedFaceSet130.setUSE(CString("i"));
Shape126.setGeometry(&IndexedFaceSet130);

Transform125.addChild(&Shape126);

Switch112.addChild(&Transform125);

Transform& Transform131 =  Transform();
Transform131.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform131.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape132 =  Shape();
Appearance& Appearance133 =  Appearance();
ImageTexture& ImageTexture134 =  ImageTexture();
ImageTexture134.setUrl(new CString[]{CString("fx.4.png")}, 1);
Appearance133.addChild(&ImageTexture134);

TextureTransform& TextureTransform135 =  TextureTransform();
TextureTransform135.setUSE(CString("t"));
Appearance133.setTextureTransform(TextureTransform135);

Shape132.addChild(&Appearance133);

IndexedFaceSet& IndexedFaceSet136 =  IndexedFaceSet();
IndexedFaceSet136.setUSE(CString("i"));
Shape132.setGeometry(&IndexedFaceSet136);

Transform131.addChild(&Shape132);

Switch112.addChild(&Transform131);

Transform& Transform137 =  Transform();
Transform137.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform137.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
ImageTexture& ImageTexture140 =  ImageTexture();
ImageTexture140.setUrl(new CString[]{CString("fx.5.png")}, 1);
Appearance139.addChild(&ImageTexture140);

TextureTransform& TextureTransform141 =  TextureTransform();
TextureTransform141.setUSE(CString("t"));
Appearance139.setTextureTransform(TextureTransform141);

Shape138.addChild(&Appearance139);

IndexedFaceSet& IndexedFaceSet142 =  IndexedFaceSet();
IndexedFaceSet142.setUSE(CString("i"));
Shape138.setGeometry(&IndexedFaceSet142);

Transform137.addChild(&Shape138);

Switch112.addChild(&Transform137);

Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform143.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
ImageTexture& ImageTexture146 =  ImageTexture();
ImageTexture146.setUrl(new CString[]{CString("fx.6.png")}, 1);
Appearance145.addChild(&ImageTexture146);

TextureTransform& TextureTransform147 =  TextureTransform();
TextureTransform147.setUSE(CString("t"));
Appearance145.setTextureTransform(TextureTransform147);

Shape144.addChild(&Appearance145);

IndexedFaceSet& IndexedFaceSet148 =  IndexedFaceSet();
IndexedFaceSet148.setUSE(CString("i"));
Shape144.setGeometry(&IndexedFaceSet148);

Transform143.addChild(&Shape144);

Switch112.addChild(&Transform143);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform149.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
ImageTexture& ImageTexture152 =  ImageTexture();
ImageTexture152.setUrl(new CString[]{CString("fx.7.png")}, 1);
Appearance151.addChild(&ImageTexture152);

TextureTransform& TextureTransform153 =  TextureTransform();
TextureTransform153.setUSE(CString("t"));
Appearance151.setTextureTransform(TextureTransform153);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet154 =  IndexedFaceSet();
IndexedFaceSet154.setUSE(CString("i"));
Shape150.setGeometry(&IndexedFaceSet154);

Transform149.addChild(&Shape150);

Switch112.addChild(&Transform149);

Transform& Transform155 =  Transform();
Transform155.setTranslation(new float[]{-0.063843,-0.0512635,-0.0515666});
Transform155.setScale(new float[]{0.945694,0.828292,0.894065});
Shape& Shape156 =  Shape();
Appearance& Appearance157 =  Appearance();
ImageTexture& ImageTexture158 =  ImageTexture();
ImageTexture158.setUrl(new CString[]{CString("fx.8.png")}, 1);
Appearance157.addChild(&ImageTexture158);

TextureTransform& TextureTransform159 =  TextureTransform();
TextureTransform159.setUSE(CString("t"));
Appearance157.setTextureTransform(TextureTransform159);

Shape156.addChild(&Appearance157);

IndexedFaceSet& IndexedFaceSet160 =  IndexedFaceSet();
IndexedFaceSet160.setUSE(CString("i"));
Shape156.setGeometry(&IndexedFaceSet160);

Transform155.addChild(&Shape156);

Switch112.addChild(&Transform155);

Transform111.addChild(&Switch112);

Transform109.addChild(&Transform111);

Transform& Transform161 =  Transform();
Transform161.setDEF(CString("Switcher"));
ProtoInstance& ProtoInstance162 =  ProtoInstance();
ProtoInstance162.setName(CString("Switcher"));
ProtoInstance162.setDEF(CString("_11"));
fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("maxValue"));
fieldValue163.setValue(CString("7"));
ProtoInstance162.addChild(&fieldValue163);

Transform161.addChild(&ProtoInstance162);

Transform109.addChild(&Transform161);

Transform& Transform164 =  Transform();
Transform164.setDEF(CString("vs_1"));
VisibilitySensor& VisibilitySensor165 =  VisibilitySensor();
VisibilitySensor165.setDEF(CString("_12"));
VisibilitySensor165.setSize(new float[]{1,0.8,0.01});
VisibilitySensor165.setCenter(new float[]{-0.05,-0.05,-0.05});
Transform164.addChild(&VisibilitySensor165);

Transform109.addChild(&Transform164);

Transform108.addChild(&Transform109);

Switch24.addChild(&Transform108);

Transform& Transform166 =  Transform();
Transform166.setDEF(CString("s2"));
Transform& Transform167 =  Transform();
Transform167.setUSE(CString("splat"));
Transform166.addChild(&Transform167);

Switch24.addChild(&Transform166);

Transform& Transform168 =  Transform();
Transform168.setDEF(CString("s3"));
Transform& Transform169 =  Transform();
Transform169.setUSE(CString("splat"));
Transform168.addChild(&Transform169);

Switch24.addChild(&Transform168);

Transform& Transform170 =  Transform();
Transform170.setDEF(CString("s4"));
Transform& Transform171 =  Transform();
Transform171.setUSE(CString("splat"));
Transform170.addChild(&Transform171);

Switch24.addChild(&Transform170);

Transform& Transform172 =  Transform();
Transform172.setDEF(CString("s5"));
Transform& Transform173 =  Transform();
Transform173.setUSE(CString("splat"));
Transform172.addChild(&Transform173);

Switch24.addChild(&Transform172);

Transform& Transform174 =  Transform();
Transform174.setDEF(CString("s6"));
Transform& Transform175 =  Transform();
Transform175.setUSE(CString("splat"));
Transform174.addChild(&Transform175);

Switch24.addChild(&Transform174);

Transform& Transform176 =  Transform();
Transform176.setDEF(CString("s7"));
Transform& Transform177 =  Transform();
Transform177.setUSE(CString("splat"));
Transform176.addChild(&Transform177);

Switch24.addChild(&Transform176);

Transform23.addChild(&Switch24);

Transform21.addChild(&Transform23);

Transform& Transform178 =  Transform();
Transform178.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor179 =  VisibilitySensor();
VisibilitySensor179.setDEF(CString("_13"));
VisibilitySensor179.setSize(new float[]{1,0.8,0.05});
VisibilitySensor179.setCenter(new float[]{0,-0.05,-0.05});
Transform178.addChild(&VisibilitySensor179);

Transform21.addChild(&Transform178);

Transform& Transform180 =  Transform();
Transform180.setDEF(CString("RandomSwitcher"));
ProtoInstance& ProtoInstance181 =  ProtoInstance();
ProtoInstance181.setName(CString("RandomSwitcher"));
ProtoInstance181.setDEF(CString("_14"));
fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(CString("maxValue"));
fieldValue182.setValue(CString("12"));
ProtoInstance181.addChild(&fieldValue182);

Transform180.addChild(&ProtoInstance181);

Transform21.addChild(&Transform180);

Scene7.addChild(&Transform21);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("_13"));
ROUTE183.setFromField(CString("isActive"));
ROUTE183.setToNode(CString("_1"));
ROUTE183.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("_13"));
ROUTE184.setFromField(CString("enterTime"));
ROUTE184.setToNode(CString("_1"));
ROUTE184.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("_13"));
ROUTE185.setFromField(CString("isActive"));
ROUTE185.setToNode(CString("Time_1"));
ROUTE185.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE185);

ROUTE& ROUTE186 =  ROUTE();
ROUTE186.setFromNode(CString("_13"));
ROUTE186.setFromField(CString("enterTime"));
ROUTE186.setToNode(CString("Time_1"));
ROUTE186.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE186);

ROUTE& ROUTE187 =  ROUTE();
ROUTE187.setFromNode(CString("Time_1"));
ROUTE187.setFromField(CString("fraction_changed"));
ROUTE187.setToNode(CString("_3"));
ROUTE187.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE187);

ROUTE& ROUTE188 =  ROUTE();
ROUTE188.setFromNode(CString("Time_1"));
ROUTE188.setFromField(CString("fraction_changed"));
ROUTE188.setToNode(CString("_4"));
ROUTE188.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE188);

ROUTE& ROUTE189 =  ROUTE();
ROUTE189.setFromNode(CString("_3"));
ROUTE189.setFromField(CString("value_changed"));
ROUTE189.setToNode(CString("_5"));
ROUTE189.setToField(CString("xIn"));
Scene7.addChild(&ROUTE189);

ROUTE& ROUTE190 =  ROUTE();
ROUTE190.setFromNode(CString("_4"));
ROUTE190.setFromField(CString("value_changed"));
ROUTE190.setToNode(CString("_5"));
ROUTE190.setToField(CString("yIn"));
Scene7.addChild(&ROUTE190);

ROUTE& ROUTE191 =  ROUTE();
ROUTE191.setFromNode(CString("Time_1"));
ROUTE191.setFromField(CString("fraction_changed"));
ROUTE191.setToNode(CString("_6"));
ROUTE191.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE191);

ROUTE& ROUTE192 =  ROUTE();
ROUTE192.setFromNode(CString("Time_1"));
ROUTE192.setFromField(CString("fraction_changed"));
ROUTE192.setToNode(CString("_7"));
ROUTE192.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE192);

ROUTE& ROUTE193 =  ROUTE();
ROUTE193.setFromNode(CString("_6"));
ROUTE193.setFromField(CString("value_changed"));
ROUTE193.setToNode(CString("_8"));
ROUTE193.setToField(CString("xIn"));
Scene7.addChild(&ROUTE193);

ROUTE& ROUTE194 =  ROUTE();
ROUTE194.setFromNode(CString("_7"));
ROUTE194.setFromField(CString("value_changed"));
ROUTE194.setToNode(CString("_8"));
ROUTE194.setToField(CString("yIn"));
Scene7.addChild(&ROUTE194);

ROUTE& ROUTE195 =  ROUTE();
ROUTE195.setFromNode(CString("_5"));
ROUTE195.setFromField(CString("vec"));
ROUTE195.setToNode(CString("t"));
ROUTE195.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE195);

ROUTE& ROUTE196 =  ROUTE();
ROUTE196.setFromNode(CString("_8"));
ROUTE196.setFromField(CString("vec"));
ROUTE196.setToNode(CString("t"));
ROUTE196.setToField(CString("set_center"));
Scene7.addChild(&ROUTE196);

ROUTE& ROUTE197 =  ROUTE();
ROUTE197.setFromNode(CString("_12"));
ROUTE197.setFromField(CString("isActive"));
ROUTE197.setToNode(CString("_9"));
ROUTE197.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE197);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("_12"));
ROUTE198.setFromField(CString("enterTime"));
ROUTE198.setToNode(CString("_9"));
ROUTE198.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("_11"));
ROUTE199.setFromField(CString("whichChoice_changed"));
ROUTE199.setToNode(CString("_10"));
ROUTE199.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE199);

ROUTE& ROUTE200 =  ROUTE();
ROUTE200.setFromNode(CString("_9"));
ROUTE200.setFromField(CString("cycleTime"));
ROUTE200.setToNode(CString("_11"));
ROUTE200.setToField(CString("set_next"));
Scene7.addChild(&ROUTE200);

ROUTE& ROUTE201 =  ROUTE();
ROUTE201.setFromNode(CString("_14"));
ROUTE201.setFromField(CString("whichChoice_changed"));
ROUTE201.setToNode(CString("_2"));
ROUTE201.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE201);

ROUTE& ROUTE202 =  ROUTE();
ROUTE202.setFromNode(CString("_1"));
ROUTE202.setFromField(CString("cycleTime"));
ROUTE202.setToNode(CString("_14"));
ROUTE202.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE202);

X3D0.setScene(&Scene7);

}
