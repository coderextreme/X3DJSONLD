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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:25 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:25 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("CheckBox"));
ExternProtoDeclare8.setUrl(new CString[]{CString("CheckBox_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("enabled"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("on"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("touchTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isActive"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("whichChoice"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("choice"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("Button"));
ExternProtoDeclare15.setUrl(new CString[]{CString("Button_proto.x3d")}, 1);
field& field16 =  field();
field16.setName(CString("enabled"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("isActive"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("isOver"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("isOut"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field19);

field& field20 =  field();
field20.setName(CString("hitNormal_changed"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFVec3f"));
ExternProtoDeclare15.addChild(&field20);

field& field21 =  field();
field21.setName(CString("hitPoint_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFVec3f"));
ExternProtoDeclare15.addChild(&field21);

field& field22 =  field();
field22.setName(CString("hitTexCoord_changed"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFVec2f"));
ExternProtoDeclare15.addChild(&field22);

field& field23 =  field();
field23.setName(CString("touchTime"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field23);

field& field24 =  field();
field24.setName(CString("downTime"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field24);

field& field25 =  field();
field25.setName(CString("overTime"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field25);

field& field26 =  field();
field26.setName(CString("outTime"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field26);

field& field27 =  field();
field27.setName(CString("whichChoice"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field27);

field& field28 =  field();
field28.setName(CString("choice"));
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("MFNode"));
ExternProtoDeclare15.addChild(&field28);

Scene7.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare29 =  ExternProtoDeclare();
ExternProtoDeclare29.setName(CString("RadioButton"));
ExternProtoDeclare29.setUrl(new CString[]{CString("RadioButton_proto.x3d")}, 1);
field& field30 =  field();
field30.setName(CString("enabled"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFBool"));
ExternProtoDeclare29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("touchTime"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFTime"));
ExternProtoDeclare29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("whichChoice"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFInt32"));
ExternProtoDeclare29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("choice"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("MFNode"));
ExternProtoDeclare29.addChild(&field33);

Scene7.addChild(&ExternProtoDeclare29);

ExternProtoDeclare& ExternProtoDeclare34 =  ExternProtoDeclare();
ExternProtoDeclare34.setName(CString("Delay"));
ExternProtoDeclare34.setUrl(new CString[]{CString("Delay_proto.x3d")}, 1);
field& field35 =  field();
field35.setName(CString("cycleInterval"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFTime"));
ExternProtoDeclare34.addChild(&field35);

field& field36 =  field();
field36.setName(CString("enabled"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFBool"));
ExternProtoDeclare34.addChild(&field36);

field& field37 =  field();
field37.setName(CString("startTime"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFTime"));
ExternProtoDeclare34.addChild(&field37);

field& field38 =  field();
field38.setName(CString("stopTime"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFTime"));
ExternProtoDeclare34.addChild(&field38);

field& field39 =  field();
field39.setName(CString("isActive"));
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFBool"));
ExternProtoDeclare34.addChild(&field39);

field& field40 =  field();
field40.setName(CString("exitTime"));
field40.setAccessType(CString("outputOnly"));
field40.setType(CString("SFTime"));
ExternProtoDeclare34.addChild(&field40);

Scene7.addChild(&ExternProtoDeclare34);

ExternProtoDeclare& ExternProtoDeclare41 =  ExternProtoDeclare();
ExternProtoDeclare41.setName(CString("Random"));
ExternProtoDeclare41.setUrl(new CString[]{CString("Random_proto.x3d")}, 1);
field& field42 =  field();
field42.setName(CString("minValue"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFInt32"));
ExternProtoDeclare41.addChild(&field42);

field& field43 =  field();
field43.setName(CString("maxValue"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFInt32"));
ExternProtoDeclare41.addChild(&field43);

field& field44 =  field();
field44.setName(CString("numValues"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFInt32"));
ExternProtoDeclare41.addChild(&field44);

field& field45 =  field();
field45.setName(CString("startTime"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFTime"));
ExternProtoDeclare41.addChild(&field45);

field& field46 =  field();
field46.setName(CString("stopTime"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFTime"));
ExternProtoDeclare41.addChild(&field46);

field& field47 =  field();
field47.setName(CString("whichChoice_changed"));
field47.setAccessType(CString("outputOnly"));
field47.setType(CString("SFInt32"));
ExternProtoDeclare41.addChild(&field47);

field& field48 =  field();
field48.setName(CString("fraction_changed"));
field48.setAccessType(CString("outputOnly"));
field48.setType(CString("SFFloat"));
ExternProtoDeclare41.addChild(&field48);

Scene7.addChild(&ExternProtoDeclare41);

ExternProtoDeclare& ExternProtoDeclare49 =  ExternProtoDeclare();
ExternProtoDeclare49.setName(CString("RandomDelay"));
ExternProtoDeclare49.setUrl(new CString[]{CString("RandomDelay_proto.x3d")}, 1);
field& field50 =  field();
field50.setName(CString("minInterval"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFTime"));
ExternProtoDeclare49.addChild(&field50);

field& field51 =  field();
field51.setName(CString("maxInterval"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFTime"));
ExternProtoDeclare49.addChild(&field51);

field& field52 =  field();
field52.setName(CString("enabled"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFBool"));
ExternProtoDeclare49.addChild(&field52);

field& field53 =  field();
field53.setName(CString("startTime"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFTime"));
ExternProtoDeclare49.addChild(&field53);

field& field54 =  field();
field54.setName(CString("stopTime"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFTime"));
ExternProtoDeclare49.addChild(&field54);

field& field55 =  field();
field55.setName(CString("isActive"));
field55.setAccessType(CString("outputOnly"));
field55.setType(CString("SFBool"));
ExternProtoDeclare49.addChild(&field55);

field& field56 =  field();
field56.setName(CString("exitTime"));
field56.setAccessType(CString("outputOnly"));
field56.setType(CString("SFTime"));
ExternProtoDeclare49.addChild(&field56);

Scene7.addChild(&ExternProtoDeclare49);

ExternProtoDeclare& ExternProtoDeclare57 =  ExternProtoDeclare();
ExternProtoDeclare57.setName(CString("Scene"));
ExternProtoDeclare57.setUrl(new CString[]{CString("Scene_proto.x3d")}, 1);
field& field58 =  field();
field58.setName(CString("enabled"));
field58.setAccessType(CString("inputOutput"));
field58.setType(CString("SFBool"));
ExternProtoDeclare57.addChild(&field58);

field& field59 =  field();
field59.setName(CString("startTime"));
field59.setAccessType(CString("inputOutput"));
field59.setType(CString("SFTime"));
ExternProtoDeclare57.addChild(&field59);

field& field60 =  field();
field60.setName(CString("stopTime"));
field60.setAccessType(CString("inputOutput"));
field60.setType(CString("SFTime"));
ExternProtoDeclare57.addChild(&field60);

field& field61 =  field();
field61.setName(CString("isActive"));
field61.setAccessType(CString("outputOnly"));
field61.setType(CString("SFBool"));
ExternProtoDeclare57.addChild(&field61);

field& field62 =  field();
field62.setName(CString("enterTime"));
field62.setAccessType(CString("outputOnly"));
field62.setType(CString("SFTime"));
ExternProtoDeclare57.addChild(&field62);

field& field63 =  field();
field63.setName(CString("exitTime"));
field63.setAccessType(CString("outputOnly"));
field63.setType(CString("SFTime"));
ExternProtoDeclare57.addChild(&field63);

field& field64 =  field();
field64.setName(CString("interface"));
field64.setAccessType(CString("inputOutput"));
field64.setType(CString("MFNode"));
ExternProtoDeclare57.addChild(&field64);

Scene7.addChild(&ExternProtoDeclare57);

ExternProtoDeclare& ExternProtoDeclare65 =  ExternProtoDeclare();
ExternProtoDeclare65.setName(CString("Bool"));
ExternProtoDeclare65.setUrl(new CString[]{CString("Bool_proto.x3d")}, 1);
field& field66 =  field();
field66.setName(CString("value"));
field66.setAccessType(CString("inputOutput"));
field66.setType(CString("SFBool"));
ExternProtoDeclare65.addChild(&field66);

field& field67 =  field();
field67.setName(CString("startTime"));
field67.setAccessType(CString("inputOutput"));
field67.setType(CString("SFTime"));
ExternProtoDeclare65.addChild(&field67);

field& field68 =  field();
field68.setName(CString("bool"));
field68.setAccessType(CString("outputOnly"));
field68.setType(CString("SFBool"));
ExternProtoDeclare65.addChild(&field68);

Scene7.addChild(&ExternProtoDeclare65);

ExternProtoDeclare& ExternProtoDeclare69 =  ExternProtoDeclare();
ExternProtoDeclare69.setName(CString("Int"));
ExternProtoDeclare69.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field70 =  field();
field70.setName(CString("value"));
field70.setAccessType(CString("inputOutput"));
field70.setType(CString("SFInt32"));
ExternProtoDeclare69.addChild(&field70);

field& field71 =  field();
field71.setName(CString("startTime"));
field71.setAccessType(CString("inputOutput"));
field71.setType(CString("SFTime"));
ExternProtoDeclare69.addChild(&field71);

field& field72 =  field();
field72.setName(CString("int"));
field72.setAccessType(CString("outputOnly"));
field72.setType(CString("SFInt32"));
ExternProtoDeclare69.addChild(&field72);

Scene7.addChild(&ExternProtoDeclare69);

WorldInfo& WorldInfo73 =  WorldInfo();
WorldInfo73.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by Titania")}, 2);
Scene7.addChild(&WorldInfo73);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("cams"));
Group& Group75 =  Group();
Group& Group76 =  Group();
Group76.setDEF(CString("open-cams"));
TimeSensor& TimeSensor77 =  TimeSensor();
TimeSensor77.setDEF(CString("Time_1"));
TimeSensor77.setStopTime(1);
Group76.addChild(&TimeSensor77);

Group75.addChild(&Group76);

PositionInterpolator& PositionInterpolator78 =  PositionInterpolator();
PositionInterpolator78.setDEF(CString("cambuttonTranslationInterp_1"));
PositionInterpolator78.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator78.setKeyValue(new float[]{0,0,0,-0.0627401,0,0,-0.12548,0,0,-0.162883,0,0,-0.17485,0,0,-0.179504,0,0,-0.178839,0,0,-0.17485,0,0,-0.169531,0,0,-0.164877,0,0,-0.162883,0,0}, 33);
Group75.addChild(&PositionInterpolator78);

ScalarInterpolator& ScalarInterpolator79 =  ScalarInterpolator();
ScalarInterpolator79.setDEF(CString("fadebgTransparencyInterp"));
ScalarInterpolator79.setKey(new float[]{0,0.08,0.12}, 3);
ScalarInterpolator79.setKeyValue(new float[]{1,1,0.5}, 3);
Group75.addChild(&ScalarInterpolator79);

PositionInterpolator& PositionInterpolator80 =  PositionInterpolator();
PositionInterpolator80.setDEF(CString("cam-menuTranslationInterp_1"));
PositionInterpolator80.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator80.setKeyValue(new float[]{0.25,0,0,0.180548,0,0,0.106415,0,0,0.041645,0,0,0.000286184,0,0,-0.0170551,0,0,-0.0219106,0,0,-0.0184424,0,0,-0.0108122,0,0,-0.00318206,0,0,0.000286184,0,0}, 33);
Group75.addChild(&PositionInterpolator80);

Transform74.addChild(&Group75);

Group& Group81 =  Group();
Group& Group82 =  Group();
Group82.setDEF(CString("close-cams"));
TimeSensor& TimeSensor83 =  TimeSensor();
TimeSensor83.setDEF(CString("Time_2"));
TimeSensor83.setCycleInterval(0.7);
TimeSensor83.setStopTime(1);
Group82.addChild(&TimeSensor83);

Group81.addChild(&Group82);

PositionInterpolator& PositionInterpolator84 =  PositionInterpolator();
PositionInterpolator84.setDEF(CString("cambuttonTranslationInterp_2"));
PositionInterpolator84.setKey(new float[]{0,0.142857,0.285714,0.428572,0.571429,0.714286,1}, 7);
PositionInterpolator84.setKeyValue(new float[]{-0.162883,0,0,-0.133642,0,0,-0.103577,0,0,-0.0739234,0,0,-0.0459178,0,0,-0.0207953,0,0,0,0,0}, 21);
Group81.addChild(&PositionInterpolator84);

PositionInterpolator& PositionInterpolator85 =  PositionInterpolator();
PositionInterpolator85.setDEF(CString("cam-menuTranslationInterp_2"));
PositionInterpolator85.setKey(new float[]{0,0.142857,0.285714,0.428571,0.571429,0.714286,0.857143,1}, 8);
PositionInterpolator85.setKeyValue(new float[]{0.000286184,0,0,0.0359596,0,0,0.071633,0,0,0.107306,0,0,0.14298,0,0,0.178653,0,0,0.214327,0,0,0.25,0,0}, 24);
Group81.addChild(&PositionInterpolator85);

Transform74.addChild(&Group81);

Transform& Transform86 =  Transform();
Transform86.setDEF(CString("button"));
Transform& Transform87 =  Transform();
Transform87.setDEF(CString("CheckBox"));
ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(CString("CheckBox"));
ProtoInstance88.setDEF(CString("_1"));
fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("choice"));
ProtoInstance& ProtoInstance90 =  ProtoInstance();
ProtoInstance90.setName(CString("Button"));
ProtoInstance90.setDEF(CString("OffButton_1"));
fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("choice"));
Inline& Inline92 =  Inline();
Inline92.setDEF(CString("_2"));
Inline92.setUrl(new CString[]{CString("camButton.x3d")}, 1);
Inline92.setBboxSize(new float[]{0.0500588,0.020502,0});
Inline92.setBboxCenter(new float[]{0.119113,0.113344,-0.299736});
fieldValue91.addChild(Inline92);

ProtoInstance90.addChild(&fieldValue91);

fieldValue89.addChild(&ProtoInstance90);

ProtoInstance& ProtoInstance93 =  ProtoInstance();
ProtoInstance93.setName(CString("Button"));
ProtoInstance93.setDEF(CString("OnButton_1"));
fieldValue& fieldValue94 =  fieldValue();
fieldValue94.setName(CString("choice"));
Inline& Inline95 =  Inline();
Inline95.setUSE(CString("_2"));
fieldValue94.addChild(Inline95);

ProtoInstance93.addChild(&fieldValue94);

fieldValue89.addChild(&ProtoInstance93);

ProtoInstance88.addChild(&fieldValue89);

Transform87.addChild(&ProtoInstance88);

Transform86.addChild(&Transform87);

Transform74.addChild(&Transform86);

Transform& Transform96 =  Transform();
Transform96.setDEF(CString("menu_1"));
Transform96.setTranslation(new float[]{0.25,0,0});
Inline& Inline97 =  Inline();
Inline97.setUrl(new CString[]{CString("aminLabel.x3d")}, 1);
Inline97.setBboxSize(new float[]{0.0310576,0.0203932,0});
Inline97.setBboxCenter(new float[]{0.0201922,0.114095,-0.299906});
Transform96.addChild(&Inline97);

Inline& Inline98 =  Inline();
Inline98.setUrl(new CString[]{CString("viewLabel.x3d")}, 1);
Inline98.setBboxSize(new float[]{0.0255517,0.0203932,0});
Inline98.setBboxCenter(new float[]{0.0936732,0.114095,-0.299906});
Transform96.addChild(&Inline98);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("RadioButton_1"));
ProtoInstance& ProtoInstance100 =  ProtoInstance();
ProtoInstance100.setName(CString("RadioButton"));
ProtoInstance100.setDEF(CString("_3"));
fieldValue& fieldValue101 =  fieldValue();
fieldValue101.setName(CString("whichChoice"));
fieldValue101.setValue(CString("-1"));
ProtoInstance100.addChild(&fieldValue101);

fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(CString("choice"));
ProtoInstance& ProtoInstance103 =  ProtoInstance();
ProtoInstance103.setName(CString("CheckBox"));
ProtoInstance103.setDEF(CString("_4"));
fieldValue& fieldValue104 =  fieldValue();
fieldValue104.setName(CString("choice"));
ProtoInstance& ProtoInstance105 =  ProtoInstance();
ProtoInstance105.setName(CString("Button"));
ProtoInstance105.setDEF(CString("OffButton_2"));
fieldValue& fieldValue106 =  fieldValue();
fieldValue106.setName(CString("choice"));
Inline& Inline107 =  Inline();
Inline107.setDEF(CString("_5"));
Inline107.setUrl(new CString[]{CString("a1.x3d")}, 1);
Inline107.setBboxSize(new float[]{0.0150586,0.0203932,0});
Inline107.setBboxCenter(new float[]{0.0200617,0.113587,-0.299906});
fieldValue106.addChild(Inline107);

ProtoInstance105.addChild(&fieldValue106);

fieldValue104.addChild(&ProtoInstance105);

Inline& Inline108 =  Inline();
Inline108.setDEF(CString("_6"));
Inline108.setUrl(new CString[]{CString("a1on.x3d")}, 1);
Inline108.setBboxSize(new float[]{0.0150586,0.0203932,0});
Inline108.setBboxCenter(new float[]{0.0200617,0.113587,-0.299906});
fieldValue104.addChild(Inline108);

ProtoInstance103.addChild(&fieldValue104);

fieldValue102.addChild(&ProtoInstance103);

ProtoInstance& ProtoInstance109 =  ProtoInstance();
ProtoInstance109.setName(CString("CheckBox"));
ProtoInstance109.setDEF(CString("_7"));
fieldValue& fieldValue110 =  fieldValue();
fieldValue110.setName(CString("choice"));
ProtoInstance& ProtoInstance111 =  ProtoInstance();
ProtoInstance111.setName(CString("Button"));
ProtoInstance111.setDEF(CString("OffButton_3"));
fieldValue& fieldValue112 =  fieldValue();
fieldValue112.setName(CString("choice"));
Inline& Inline113 =  Inline();
Inline113.setDEF(CString("_8"));
Inline113.setUrl(new CString[]{CString("a2.x3d")}, 1);
Inline113.setBboxSize(new float[]{0.0150589,0.0203932,0});
Inline113.setBboxCenter(new float[]{0.0351205,0.113587,-0.299906});
fieldValue112.addChild(Inline113);

ProtoInstance111.addChild(&fieldValue112);

fieldValue110.addChild(&ProtoInstance111);

Inline& Inline114 =  Inline();
Inline114.setDEF(CString("_9"));
Inline114.setUrl(new CString[]{CString("a2on.x3d")}, 1);
Inline114.setBboxSize(new float[]{0.0150589,0.0203932,0});
Inline114.setBboxCenter(new float[]{0.0351205,0.113587,-0.299906});
fieldValue110.addChild(Inline114);

ProtoInstance109.addChild(&fieldValue110);

fieldValue102.addChild(&ProtoInstance109);

ProtoInstance& ProtoInstance115 =  ProtoInstance();
ProtoInstance115.setName(CString("CheckBox"));
ProtoInstance115.setDEF(CString("_10"));
fieldValue& fieldValue116 =  fieldValue();
fieldValue116.setName(CString("choice"));
ProtoInstance& ProtoInstance117 =  ProtoInstance();
ProtoInstance117.setName(CString("Button"));
ProtoInstance117.setDEF(CString("OffButton_4"));
fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(CString("choice"));
Inline& Inline119 =  Inline();
Inline119.setDEF(CString("_11"));
Inline119.setUrl(new CString[]{CString("a3.x3d")}, 1);
Inline119.setBboxSize(new float[]{0.0150589,0.0203932,0});
Inline119.setBboxCenter(new float[]{0.0501794,0.113587,-0.299906});
fieldValue118.addChild(Inline119);

ProtoInstance117.addChild(&fieldValue118);

fieldValue116.addChild(&ProtoInstance117);

Inline& Inline120 =  Inline();
Inline120.setDEF(CString("_12"));
Inline120.setUrl(new CString[]{CString("a3on.x3d")}, 1);
Inline120.setBboxSize(new float[]{0.0150589,0.0203932,0});
Inline120.setBboxCenter(new float[]{0.0501794,0.113587,-0.299906});
fieldValue116.addChild(Inline120);

ProtoInstance115.addChild(&fieldValue116);

fieldValue102.addChild(&ProtoInstance115);

ProtoInstance& ProtoInstance121 =  ProtoInstance();
ProtoInstance121.setName(CString("CheckBox"));
ProtoInstance121.setDEF(CString("_13"));
fieldValue& fieldValue122 =  fieldValue();
fieldValue122.setName(CString("choice"));
ProtoInstance& ProtoInstance123 =  ProtoInstance();
ProtoInstance123.setName(CString("Button"));
ProtoInstance123.setDEF(CString("OffButton_5"));
fieldValue& fieldValue124 =  fieldValue();
fieldValue124.setName(CString("choice"));
Inline& Inline125 =  Inline();
Inline125.setDEF(CString("_14"));
Inline125.setUrl(new CString[]{CString("c1.x3d")}, 1);
Inline125.setBboxSize(new float[]{2,0.6,2});
Inline125.setBboxCenter(new float[]{0,-0.2,0});
fieldValue124.addChild(Inline125);

ProtoInstance123.addChild(&fieldValue124);

fieldValue122.addChild(&ProtoInstance123);

Inline& Inline126 =  Inline();
Inline126.setDEF(CString("_15"));
Inline126.setUrl(new CString[]{CString("c1on.x3d")}, 1);
Inline126.setBboxSize(new float[]{2,0.6,2});
Inline126.setBboxCenter(new float[]{0,-0.2,0});
fieldValue122.addChild(Inline126);

ProtoInstance121.addChild(&fieldValue122);

fieldValue102.addChild(&ProtoInstance121);

ProtoInstance& ProtoInstance127 =  ProtoInstance();
ProtoInstance127.setName(CString("CheckBox"));
ProtoInstance127.setDEF(CString("_16"));
fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(CString("choice"));
ProtoInstance& ProtoInstance129 =  ProtoInstance();
ProtoInstance129.setName(CString("Button"));
ProtoInstance129.setDEF(CString("OffButton_6"));
fieldValue& fieldValue130 =  fieldValue();
fieldValue130.setName(CString("choice"));
Inline& Inline131 =  Inline();
Inline131.setDEF(CString("_17"));
Inline131.setUrl(new CString[]{CString("c2.x3d")}, 1);
Inline131.setBboxSize(new float[]{2,0.6,2});
Inline131.setBboxCenter(new float[]{0,-0.2,0});
fieldValue130.addChild(Inline131);

ProtoInstance129.addChild(&fieldValue130);

fieldValue128.addChild(&ProtoInstance129);

Inline& Inline132 =  Inline();
Inline132.setDEF(CString("_18"));
Inline132.setUrl(new CString[]{CString("c2on.x3d")}, 1);
Inline132.setBboxSize(new float[]{2,0.6,2});
Inline132.setBboxCenter(new float[]{0,-0.2,0});
fieldValue128.addChild(Inline132);

ProtoInstance127.addChild(&fieldValue128);

fieldValue102.addChild(&ProtoInstance127);

ProtoInstance& ProtoInstance133 =  ProtoInstance();
ProtoInstance133.setName(CString("CheckBox"));
ProtoInstance133.setDEF(CString("_19"));
fieldValue& fieldValue134 =  fieldValue();
fieldValue134.setName(CString("choice"));
ProtoInstance& ProtoInstance135 =  ProtoInstance();
ProtoInstance135.setName(CString("Button"));
ProtoInstance135.setDEF(CString("OffButton_7"));
fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("choice"));
Inline& Inline137 =  Inline();
Inline137.setDEF(CString("_20"));
Inline137.setUrl(new CString[]{CString("c3.x3d")}, 1);
Inline137.setBboxSize(new float[]{2,0.6,2});
Inline137.setBboxCenter(new float[]{0,-0.2,0});
fieldValue136.addChild(Inline137);

ProtoInstance135.addChild(&fieldValue136);

fieldValue134.addChild(&ProtoInstance135);

Inline& Inline138 =  Inline();
Inline138.setDEF(CString("_21"));
Inline138.setUrl(new CString[]{CString("c3on.x3d")}, 1);
Inline138.setBboxSize(new float[]{2,0.6,2});
Inline138.setBboxCenter(new float[]{0,-0.2,0});
fieldValue134.addChild(Inline138);

ProtoInstance133.addChild(&fieldValue134);

fieldValue102.addChild(&ProtoInstance133);

ProtoInstance& ProtoInstance139 =  ProtoInstance();
ProtoInstance139.setName(CString("CheckBox"));
ProtoInstance139.setDEF(CString("_22"));
fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(CString("choice"));
ProtoInstance& ProtoInstance141 =  ProtoInstance();
ProtoInstance141.setName(CString("Button"));
ProtoInstance141.setDEF(CString("OffButton_8"));
fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(CString("choice"));
Inline& Inline143 =  Inline();
Inline143.setDEF(CString("_23"));
Inline143.setUrl(new CString[]{CString("c4.x3d")}, 1);
Inline143.setBboxSize(new float[]{2,0.6,2});
Inline143.setBboxCenter(new float[]{0,-0.2,0});
fieldValue142.addChild(Inline143);

ProtoInstance141.addChild(&fieldValue142);

fieldValue140.addChild(&ProtoInstance141);

Inline& Inline144 =  Inline();
Inline144.setDEF(CString("_24"));
Inline144.setUrl(new CString[]{CString("c4on.x3d")}, 1);
Inline144.setBboxSize(new float[]{2,0.6,2});
Inline144.setBboxCenter(new float[]{0,-0.2,0});
fieldValue140.addChild(Inline144);

ProtoInstance139.addChild(&fieldValue140);

fieldValue102.addChild(&ProtoInstance139);

ProtoInstance100.addChild(&fieldValue102);

Transform99.addChild(&ProtoInstance100);

Transform96.addChild(&Transform99);

Transform74.addChild(&Transform96);

Transform& Transform145 =  Transform();
Transform145.setDEF(CString("Delay_1"));
ProtoInstance& ProtoInstance146 =  ProtoInstance();
ProtoInstance146.setName(CString("Delay"));
ProtoInstance146.setDEF(CString("_25"));
fieldValue& fieldValue147 =  fieldValue();
fieldValue147.setName(CString("cycleInterval"));
fieldValue147.setValue(CString("60"));
ProtoInstance146.addChild(&fieldValue147);

fieldValue& fieldValue148 =  fieldValue();
fieldValue148.setName(CString("startTime"));
fieldValue148.setValue(CString("1"));
ProtoInstance146.addChild(&fieldValue148);

Transform145.addChild(&ProtoInstance146);

Transform74.addChild(&Transform145);

Transform& Transform149 =  Transform();
Transform149.setDEF(CString("Random_1"));
ProtoInstance& ProtoInstance150 =  ProtoInstance();
ProtoInstance150.setName(CString("Random"));
ProtoInstance150.setDEF(CString("_26"));
fieldValue& fieldValue151 =  fieldValue();
fieldValue151.setName(CString("maxValue"));
fieldValue151.setValue(CString("6"));
ProtoInstance150.addChild(&fieldValue151);

fieldValue& fieldValue152 =  fieldValue();
fieldValue152.setName(CString("numValues"));
fieldValue152.setValue(CString("7"));
ProtoInstance150.addChild(&fieldValue152);

Transform149.addChild(&ProtoInstance150);

Transform74.addChild(&Transform149);

Transform& Transform153 =  Transform();
Transform153.setDEF(CString("RandomDelay"));
ProtoInstance& ProtoInstance154 =  ProtoInstance();
ProtoInstance154.setName(CString("RandomDelay"));
ProtoInstance154.setDEF(CString("_27"));
fieldValue& fieldValue155 =  fieldValue();
fieldValue155.setName(CString("minInterval"));
fieldValue155.setValue(CString("10"));
ProtoInstance154.addChild(&fieldValue155);

fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(CString("maxInterval"));
fieldValue156.setValue(CString("40"));
ProtoInstance154.addChild(&fieldValue156);

fieldValue& fieldValue157 =  fieldValue();
fieldValue157.setName(CString("stopTime"));
fieldValue157.setValue(CString("1"));
ProtoInstance154.addChild(&fieldValue157);

Transform153.addChild(&ProtoInstance154);

Transform74.addChild(&Transform153);

Scene7.addChild(&Transform74);

Transform& Transform158 =  Transform();
Transform158.setDEF(CString("movs"));
Group& Group159 =  Group();
Group& Group160 =  Group();
Group160.setDEF(CString("mov-open"));
TimeSensor& TimeSensor161 =  TimeSensor();
TimeSensor161.setDEF(CString("Time_3"));
TimeSensor161.setStopTime(1);
Group160.addChild(&TimeSensor161);

Group159.addChild(&Group160);

PositionInterpolator& PositionInterpolator162 =  PositionInterpolator();
PositionInterpolator162.setDEF(CString("moviesTranslationInterp_1"));
PositionInterpolator162.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.733333,0.866667,1}, 10);
PositionInterpolator162.setKeyValue(new float[]{0,0,0,0,-0.0350546,0,0,-0.0723312,0,0,-0.109608,0,0,-0.144662,0,0,-0.175273,0,0,-0.199217,0,0,-0.210897,0,0,-0.204801,0,0,-0.198704,0}, 30);
Group159.addChild(&PositionInterpolator162);

PositionInterpolator& PositionInterpolator163 =  PositionInterpolator();
PositionInterpolator163.setDEF(CString("buttonTranslationInterp_1"));
PositionInterpolator163.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator163.setKeyValue(new float[]{0,0,0,0,-0.0553082,0,0,-0.114345,0,0,-0.165925,0,0,-0.198861,0,0,-0.212671,0,0,-0.216538,0,0,-0.213776,0,0,-0.207699,0,0,-0.201623,0,0,-0.198861,0}, 33);
Group159.addChild(&PositionInterpolator163);

Transform158.addChild(&Group159);

Group& Group164 =  Group();
Group& Group165 =  Group();
Group165.setDEF(CString("mov-close"));
TimeSensor& TimeSensor166 =  TimeSensor();
TimeSensor166.setDEF(CString("Time_4"));
TimeSensor166.setCycleInterval(0.5);
TimeSensor166.setStopTime(1);
Group165.addChild(&TimeSensor166);

Group164.addChild(&Group165);

PositionInterpolator& PositionInterpolator167 =  PositionInterpolator();
PositionInterpolator167.setDEF(CString("moviesTranslationInterp_2"));
PositionInterpolator167.setKey(new float[]{0,0.2,0.4,0.6,0.8,0.99999,1}, 7);
PositionInterpolator167.setKeyValue(new float[]{0,-0.198704,0,0,-0.149028,0,0,-0.099352,0,0,-0.049676,0,0,0,0,0,0,0,0,0,0}, 21);
Group164.addChild(&PositionInterpolator167);

PositionInterpolator& PositionInterpolator168 =  PositionInterpolator();
PositionInterpolator168.setDEF(CString("buttonTranslationInterp_2"));
PositionInterpolator168.setKey(new float[]{0,0.2,0.4,0.6,0.8,1}, 6);
PositionInterpolator168.setKeyValue(new float[]{0,-0.198861,0,0,-0.159089,0,0,-0.119317,0,0,-0.0795444,0,0,-0.0397722,0,0,0,0}, 18);
Group164.addChild(&PositionInterpolator168);

Transform158.addChild(&Group164);

Transform& Transform169 =  Transform();
Transform169.setDEF(CString("CheckBox_1"));
ProtoInstance& ProtoInstance170 =  ProtoInstance();
ProtoInstance170.setName(CString("CheckBox"));
ProtoInstance170.setDEF(CString("_28"));
fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(CString("choice"));
ProtoInstance& ProtoInstance172 =  ProtoInstance();
ProtoInstance172.setName(CString("Button"));
ProtoInstance172.setDEF(CString("OffButton_9"));
fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(CString("choice"));
Inline& Inline174 =  Inline();
Inline174.setDEF(CString("_29"));
Inline174.setUrl(new CString[]{CString("movButton.x3d")}, 1);
Inline174.setBboxSize(new float[]{0.0497668,0.020502,0});
Inline174.setBboxCenter(new float[]{0.192424,0.113851,-0.299736});
fieldValue173.addChild(Inline174);

ProtoInstance172.addChild(&fieldValue173);

fieldValue171.addChild(&ProtoInstance172);

ProtoInstance& ProtoInstance175 =  ProtoInstance();
ProtoInstance175.setName(CString("Button"));
ProtoInstance175.setDEF(CString("OnButton_2"));
fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(CString("choice"));
Inline& Inline177 =  Inline();
Inline177.setUSE(CString("_29"));
fieldValue176.addChild(Inline177);

ProtoInstance175.addChild(&fieldValue176);

fieldValue171.addChild(&ProtoInstance175);

ProtoInstance170.addChild(&fieldValue171);

Transform169.addChild(&ProtoInstance170);

Transform158.addChild(&Transform169);

Transform& Transform178 =  Transform();
Transform178.setDEF(CString("menu_2"));
Inline& Inline179 =  Inline();
Inline179.setUrl(new CString[]{CString("m.x3d")}, 1);
Inline179.setBboxSize(new float[]{0.0495934,0.0223366,0});
Inline179.setBboxCenter(new float[]{0.192385,0.311653,-0.299671});
Transform178.addChild(&Inline179);

Transform& Transform180 =  Transform();
Transform180.setDEF(CString("RadioButton"));
ProtoInstance& ProtoInstance181 =  ProtoInstance();
ProtoInstance181.setName(CString("RadioButton"));
ProtoInstance181.setDEF(CString("_30"));
fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(CString("whichChoice"));
fieldValue182.setValue(CString("-1"));
ProtoInstance181.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(CString("choice"));
ProtoInstance& ProtoInstance184 =  ProtoInstance();
ProtoInstance184.setName(CString("CheckBox"));
ProtoInstance184.setDEF(CString("_31"));
fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(CString("choice"));
ProtoInstance& ProtoInstance186 =  ProtoInstance();
ProtoInstance186.setName(CString("Button"));
ProtoInstance186.setDEF(CString("_32"));
fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("choice"));
Inline& Inline188 =  Inline();
Inline188.setDEF(CString("_33"));
Inline188.setUrl(new CString[]{CString("m1.x3d")}, 1);
Inline188.setBboxSize(new float[]{0.0495934,0.0298137,0});
Inline188.setBboxCenter(new float[]{0.192385,0.285578,-0.299671});
fieldValue187.addChild(Inline188);

ProtoInstance186.addChild(&fieldValue187);

fieldValue185.addChild(&ProtoInstance186);

Inline& Inline189 =  Inline();
Inline189.setDEF(CString("_34"));
Inline189.setUrl(new CString[]{CString("m1on.x3d")}, 1);
Inline189.setBboxSize(new float[]{0.0495934,0.0298137,0});
Inline189.setBboxCenter(new float[]{0.192385,0.285578,-0.299671});
fieldValue185.addChild(Inline189);

ProtoInstance184.addChild(&fieldValue185);

fieldValue183.addChild(&ProtoInstance184);

ProtoInstance& ProtoInstance190 =  ProtoInstance();
ProtoInstance190.setName(CString("CheckBox"));
ProtoInstance190.setDEF(CString("_35"));
fieldValue& fieldValue191 =  fieldValue();
fieldValue191.setName(CString("choice"));
ProtoInstance& ProtoInstance192 =  ProtoInstance();
ProtoInstance192.setName(CString("Button"));
ProtoInstance192.setDEF(CString("_36"));
fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(CString("choice"));
Inline& Inline194 =  Inline();
Inline194.setDEF(CString("_37"));
Inline194.setUrl(new CString[]{CString("m2.x3d")}, 1);
Inline194.setBboxSize(new float[]{0.0495934,0.0291023,0});
Inline194.setBboxCenter(new float[]{0.192385,0.25612,-0.299671});
fieldValue193.addChild(Inline194);

ProtoInstance192.addChild(&fieldValue193);

fieldValue191.addChild(&ProtoInstance192);

Inline& Inline195 =  Inline();
Inline195.setDEF(CString("_38"));
Inline195.setUrl(new CString[]{CString("m2on.x3d")}, 1);
Inline195.setBboxSize(new float[]{0.0495934,0.0291023,0});
Inline195.setBboxCenter(new float[]{0.192385,0.25612,-0.299671});
fieldValue191.addChild(Inline195);

ProtoInstance190.addChild(&fieldValue191);

fieldValue183.addChild(&ProtoInstance190);

ProtoInstance& ProtoInstance196 =  ProtoInstance();
ProtoInstance196.setName(CString("CheckBox"));
ProtoInstance196.setDEF(CString("_39"));
fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(CString("choice"));
ProtoInstance& ProtoInstance198 =  ProtoInstance();
ProtoInstance198.setName(CString("Button"));
ProtoInstance198.setDEF(CString("_40"));
fieldValue& fieldValue199 =  fieldValue();
fieldValue199.setName(CString("choice"));
Inline& Inline200 =  Inline();
Inline200.setDEF(CString("_41"));
Inline200.setUrl(new CString[]{CString("m3.x3d")}, 1);
Inline200.setBboxSize(new float[]{0.0495934,0.0291023,0});
Inline200.setBboxCenter(new float[]{0.192385,0.227018,-0.299671});
fieldValue199.addChild(Inline200);

ProtoInstance198.addChild(&fieldValue199);

fieldValue197.addChild(&ProtoInstance198);

Inline& Inline201 =  Inline();
Inline201.setDEF(CString("_42"));
Inline201.setUrl(new CString[]{CString("m3on.x3d")}, 1);
Inline201.setBboxSize(new float[]{0.0495934,0.0291023,0});
Inline201.setBboxCenter(new float[]{0.192385,0.227018,-0.299671});
fieldValue197.addChild(Inline201);

ProtoInstance196.addChild(&fieldValue197);

fieldValue183.addChild(&ProtoInstance196);

ProtoInstance& ProtoInstance202 =  ProtoInstance();
ProtoInstance202.setName(CString("CheckBox"));
ProtoInstance202.setDEF(CString("_43"));
fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(CString("choice"));
ProtoInstance& ProtoInstance204 =  ProtoInstance();
ProtoInstance204.setName(CString("Button"));
ProtoInstance204.setDEF(CString("_44"));
fieldValue& fieldValue205 =  fieldValue();
fieldValue205.setName(CString("choice"));
Inline& Inline206 =  Inline();
Inline206.setDEF(CString("_45"));
Inline206.setUrl(new CString[]{CString("m4.x3d")}, 1);
Inline206.setBboxSize(new float[]{0.0495934,0.0296559,0});
Inline206.setBboxCenter(new float[]{0.192385,0.197639,-0.299671});
fieldValue205.addChild(Inline206);

ProtoInstance204.addChild(&fieldValue205);

fieldValue203.addChild(&ProtoInstance204);

Inline& Inline207 =  Inline();
Inline207.setDEF(CString("_46"));
Inline207.setUrl(new CString[]{CString("m4on.x3d")}, 1);
Inline207.setBboxSize(new float[]{0.0495934,0.0296559,0});
Inline207.setBboxCenter(new float[]{0.192385,0.197639,-0.299671});
fieldValue203.addChild(Inline207);

ProtoInstance202.addChild(&fieldValue203);

fieldValue183.addChild(&ProtoInstance202);

ProtoInstance& ProtoInstance208 =  ProtoInstance();
ProtoInstance208.setName(CString("CheckBox"));
ProtoInstance208.setDEF(CString("_47"));
fieldValue& fieldValue209 =  fieldValue();
fieldValue209.setName(CString("choice"));
ProtoInstance& ProtoInstance210 =  ProtoInstance();
ProtoInstance210.setName(CString("Button"));
ProtoInstance210.setDEF(CString("_48"));
fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(CString("choice"));
Inline& Inline212 =  Inline();
Inline212.setDEF(CString("_49"));
Inline212.setUrl(new CString[]{CString("m5.x3d")}, 1);
Inline212.setBboxSize(new float[]{0.0495934,0.0291813,0});
Inline212.setBboxCenter(new float[]{0.192385,0.16822,-0.299671});
fieldValue211.addChild(Inline212);

ProtoInstance210.addChild(&fieldValue211);

fieldValue209.addChild(&ProtoInstance210);

Inline& Inline213 =  Inline();
Inline213.setDEF(CString("_50"));
Inline213.setUrl(new CString[]{CString("m5on.x3d")}, 1);
Inline213.setBboxSize(new float[]{0.0495934,0.0291813,0});
Inline213.setBboxCenter(new float[]{0.192385,0.16822,-0.299671});
fieldValue209.addChild(Inline213);

ProtoInstance208.addChild(&fieldValue209);

fieldValue183.addChild(&ProtoInstance208);

ProtoInstance& ProtoInstance214 =  ProtoInstance();
ProtoInstance214.setName(CString("CheckBox"));
ProtoInstance214.setDEF(CString("_51"));
fieldValue& fieldValue215 =  fieldValue();
fieldValue215.setName(CString("choice"));
ProtoInstance& ProtoInstance216 =  ProtoInstance();
ProtoInstance216.setName(CString("Button"));
ProtoInstance216.setDEF(CString("_52"));
fieldValue& fieldValue217 =  fieldValue();
fieldValue217.setName(CString("choice"));
Inline& Inline218 =  Inline();
Inline218.setDEF(CString("_53"));
Inline218.setUrl(new CString[]{CString("m6.x3d")}, 1);
Inline218.setBboxSize(new float[]{0.0495934,0.0291811,0});
Inline218.setBboxCenter(new float[]{0.192385,0.139039,-0.299671});
fieldValue217.addChild(Inline218);

ProtoInstance216.addChild(&fieldValue217);

fieldValue215.addChild(&ProtoInstance216);

Inline& Inline219 =  Inline();
Inline219.setDEF(CString("_54"));
Inline219.setUrl(new CString[]{CString("m6on.x3d")}, 1);
Inline219.setBboxSize(new float[]{0.0495934,0.0291811,0});
Inline219.setBboxCenter(new float[]{0.192385,0.139039,-0.299671});
fieldValue215.addChild(Inline219);

ProtoInstance214.addChild(&fieldValue215);

fieldValue183.addChild(&ProtoInstance214);

ProtoInstance181.addChild(&fieldValue183);

Transform180.addChild(&ProtoInstance181);

Transform178.addChild(&Transform180);

Transform158.addChild(&Transform178);

Transform& Transform220 =  Transform();
Transform220.setDEF(CString("Delay"));
ProtoInstance& ProtoInstance221 =  ProtoInstance();
ProtoInstance221.setName(CString("Delay"));
ProtoInstance221.setDEF(CString("_55"));
fieldValue& fieldValue222 =  fieldValue();
fieldValue222.setName(CString("cycleInterval"));
fieldValue222.setValue(CString("600"));
ProtoInstance221.addChild(&fieldValue222);

Transform220.addChild(&ProtoInstance221);

Transform158.addChild(&Transform220);

Transform& Transform223 =  Transform();
Transform223.setDEF(CString("Random"));
ProtoInstance& ProtoInstance224 =  ProtoInstance();
ProtoInstance224.setName(CString("Random"));
ProtoInstance224.setDEF(CString("_56"));
fieldValue& fieldValue225 =  fieldValue();
fieldValue225.setName(CString("maxValue"));
fieldValue225.setValue(CString("5"));
ProtoInstance224.addChild(&fieldValue225);

fieldValue& fieldValue226 =  fieldValue();
fieldValue226.setName(CString("numValues"));
fieldValue226.setValue(CString("6"));
ProtoInstance224.addChild(&fieldValue226);

Transform223.addChild(&ProtoInstance224);

Transform158.addChild(&Transform223);

Scene7.addChild(&Transform158);

Transform& Transform227 =  Transform();
Transform227.setDEF(CString("Scene"));
ProtoInstance& ProtoInstance228 =  ProtoInstance();
ProtoInstance228.setName(CString("Scene"));
fieldValue& fieldValue229 =  fieldValue();
fieldValue229.setName(CString("interface"));
ProtoInstance& ProtoInstance230 =  ProtoInstance();
ProtoInstance230.setName(CString("Bool"));
ProtoInstance230.setDEF(CString("_57"));
fieldValue229.addChild(&ProtoInstance230);

ProtoInstance& ProtoInstance231 =  ProtoInstance();
ProtoInstance231.setName(CString("Bool"));
ProtoInstance231.setDEF(CString("_58"));
fieldValue229.addChild(&ProtoInstance231);

ProtoInstance& ProtoInstance232 =  ProtoInstance();
ProtoInstance232.setName(CString("Bool"));
ProtoInstance232.setDEF(CString("_59"));
fieldValue229.addChild(&ProtoInstance232);

ProtoInstance& ProtoInstance233 =  ProtoInstance();
ProtoInstance233.setName(CString("Bool"));
ProtoInstance233.setDEF(CString("_60"));
fieldValue229.addChild(&ProtoInstance233);

ProtoInstance& ProtoInstance234 =  ProtoInstance();
ProtoInstance234.setName(CString("Bool"));
ProtoInstance234.setDEF(CString("_61"));
fieldValue229.addChild(&ProtoInstance234);

ProtoInstance& ProtoInstance235 =  ProtoInstance();
ProtoInstance235.setName(CString("Bool"));
ProtoInstance235.setDEF(CString("_62"));
fieldValue229.addChild(&ProtoInstance235);

ProtoInstance& ProtoInstance236 =  ProtoInstance();
ProtoInstance236.setName(CString("Bool"));
ProtoInstance236.setDEF(CString("_63"));
fieldValue229.addChild(&ProtoInstance236);

ProtoInstance& ProtoInstance237 =  ProtoInstance();
ProtoInstance237.setName(CString("Int"));
ProtoInstance237.setDEF(CString("_64"));
fieldValue229.addChild(&ProtoInstance237);

ProtoInstance228.addChild(&fieldValue229);

Transform227.addChild(&ProtoInstance228);

Scene7.addChild(&Transform227);

Sound& Sound238 =  Sound();
Sound238.setDEF(CString("open"));
Sound238.setMinBack(3);
Sound238.setMinFront(3);
Sound238.setMaxBack(30);
Sound238.setMaxFront(30);
AudioClip& AudioClip239 =  AudioClip();
AudioClip239.setDEF(CString("open_1"));
AudioClip239.setDescription(CString("open"));
AudioClip239.setUrl(new CString[]{CString(", "), CString("open.aiffopen.wav")}, 2);
Sound238.setSource(AudioClip239);

Scene7.addChild(&Sound238);

Sound& Sound240 =  Sound();
Sound240.setDEF(CString("close"));
Sound240.setMinBack(3);
Sound240.setMinFront(3);
Sound240.setMaxBack(30);
Sound240.setMaxFront(30);
AudioClip& AudioClip241 =  AudioClip();
AudioClip241.setDEF(CString("close_1"));
AudioClip241.setDescription(CString("close"));
AudioClip241.setUrl(new CString[]{CString(", "), CString("close.aiffclose.wav")}, 2);
Sound240.setSource(AudioClip241);

Scene7.addChild(&Sound240);

Sound& Sound242 =  Sound();
Sound242.setDEF(CString("ok"));
Sound242.setIntensity(0.5);
Sound242.setMinBack(3);
Sound242.setMinFront(3);
Sound242.setMaxBack(30);
Sound242.setMaxFront(30);
AudioClip& AudioClip243 =  AudioClip();
AudioClip243.setDEF(CString("ok_1"));
AudioClip243.setDescription(CString("ok"));
AudioClip243.setUrl(new CString[]{CString(", "), CString("ok.aiffok.wav")}, 2);
Sound242.setSource(AudioClip243);

Scene7.addChild(&Sound242);

ProtoInstance& ProtoInstance244 =  ProtoInstance();
ProtoInstance244.setName(CString("Delay"));
ProtoInstance244.setDEF(CString("MovieDelay"));
fieldValue& fieldValue245 =  fieldValue();
fieldValue245.setName(CString("cycleInterval"));
fieldValue245.setValue(CString("300"));
ProtoInstance244.addChild(&fieldValue245);

fieldValue& fieldValue246 =  fieldValue();
fieldValue246.setName(CString("startTime"));
fieldValue246.setValue(CString("1"));
ProtoInstance244.addChild(&fieldValue246);

Scene7.addChild(&ProtoInstance244);

ProtoInstance& ProtoInstance247 =  ProtoInstance();
ProtoInstance247.setName(CString("Random"));
ProtoInstance247.setDEF(CString("MovieRandom"));
fieldValue& fieldValue248 =  fieldValue();
fieldValue248.setName(CString("maxValue"));
fieldValue248.setValue(CString("5"));
ProtoInstance247.addChild(&fieldValue248);

Scene7.addChild(&ProtoInstance247);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromNode(CString("MovieDelay"));
ROUTE249.setFromField(CString("exitTime"));
ROUTE249.setToNode(CString("MovieDelay"));
ROUTE249.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromNode(CString("MovieDelay"));
ROUTE250.setFromField(CString("exitTime"));
ROUTE250.setToNode(CString("MovieRandom"));
ROUTE250.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromNode(CString("MovieRandom"));
ROUTE251.setFromField(CString("whichChoice_changed"));
ROUTE251.setToNode(CString("_30"));
ROUTE251.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE251);

ROUTE& ROUTE252 =  ROUTE();
ROUTE252.setFromNode(CString("_30"));
ROUTE252.setFromField(CString("touchTime"));
ROUTE252.setToNode(CString("MovieDelay"));
ROUTE252.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE252);

ROUTE& ROUTE253 =  ROUTE();
ROUTE253.setFromNode(CString("OffButton_1"));
ROUTE253.setFromField(CString("downTime"));
ROUTE253.setToNode(CString("Time_1"));
ROUTE253.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE253);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromNode(CString("Time_1"));
ROUTE254.setFromField(CString("fraction_changed"));
ROUTE254.setToNode(CString("cambuttonTranslationInterp_1"));
ROUTE254.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromNode(CString("Time_1"));
ROUTE255.setFromField(CString("fraction_changed"));
ROUTE255.setToNode(CString("fadebgTransparencyInterp"));
ROUTE255.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE255);

ROUTE& ROUTE256 =  ROUTE();
ROUTE256.setFromNode(CString("Time_1"));
ROUTE256.setFromField(CString("fraction_changed"));
ROUTE256.setToNode(CString("cam-menuTranslationInterp_1"));
ROUTE256.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE256);

ROUTE& ROUTE257 =  ROUTE();
ROUTE257.setFromNode(CString("OnButton_1"));
ROUTE257.setFromField(CString("downTime"));
ROUTE257.setToNode(CString("Time_2"));
ROUTE257.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE257);

ROUTE& ROUTE258 =  ROUTE();
ROUTE258.setFromNode(CString("Time_2"));
ROUTE258.setFromField(CString("fraction_changed"));
ROUTE258.setToNode(CString("cambuttonTranslationInterp_2"));
ROUTE258.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE258);

ROUTE& ROUTE259 =  ROUTE();
ROUTE259.setFromNode(CString("Time_2"));
ROUTE259.setFromField(CString("fraction_changed"));
ROUTE259.setToNode(CString("cam-menuTranslationInterp_2"));
ROUTE259.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE259);

ROUTE& ROUTE260 =  ROUTE();
ROUTE260.setFromNode(CString("OffButton_1"));
ROUTE260.setFromField(CString("downTime"));
ROUTE260.setToNode(CString("_1"));
ROUTE260.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE260);

ROUTE& ROUTE261 =  ROUTE();
ROUTE261.setFromNode(CString("OnButton_1"));
ROUTE261.setFromField(CString("downTime"));
ROUTE261.setToNode(CString("_1"));
ROUTE261.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE261);

ROUTE& ROUTE262 =  ROUTE();
ROUTE262.setFromNode(CString("cambuttonTranslationInterp_1"));
ROUTE262.setFromField(CString("value_changed"));
ROUTE262.setToNode(CString("button"));
ROUTE262.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE262);

ROUTE& ROUTE263 =  ROUTE();
ROUTE263.setFromNode(CString("cambuttonTranslationInterp_2"));
ROUTE263.setFromField(CString("value_changed"));
ROUTE263.setToNode(CString("button"));
ROUTE263.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE263);

ROUTE& ROUTE264 =  ROUTE();
ROUTE264.setFromNode(CString("OffButton_2"));
ROUTE264.setFromField(CString("touchTime"));
ROUTE264.setToNode(CString("_4"));
ROUTE264.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE264);

ROUTE& ROUTE265 =  ROUTE();
ROUTE265.setFromNode(CString("OffButton_3"));
ROUTE265.setFromField(CString("touchTime"));
ROUTE265.setToNode(CString("_7"));
ROUTE265.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE265);

ROUTE& ROUTE266 =  ROUTE();
ROUTE266.setFromNode(CString("OffButton_4"));
ROUTE266.setFromField(CString("touchTime"));
ROUTE266.setToNode(CString("_10"));
ROUTE266.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE266);

ROUTE& ROUTE267 =  ROUTE();
ROUTE267.setFromNode(CString("OffButton_5"));
ROUTE267.setFromField(CString("touchTime"));
ROUTE267.setToNode(CString("_13"));
ROUTE267.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE267);

ROUTE& ROUTE268 =  ROUTE();
ROUTE268.setFromNode(CString("OffButton_6"));
ROUTE268.setFromField(CString("touchTime"));
ROUTE268.setToNode(CString("_16"));
ROUTE268.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromNode(CString("OffButton_7"));
ROUTE269.setFromField(CString("touchTime"));
ROUTE269.setToNode(CString("_19"));
ROUTE269.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE269);

ROUTE& ROUTE270 =  ROUTE();
ROUTE270.setFromNode(CString("OffButton_8"));
ROUTE270.setFromField(CString("touchTime"));
ROUTE270.setToNode(CString("_22"));
ROUTE270.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE270);

ROUTE& ROUTE271 =  ROUTE();
ROUTE271.setFromNode(CString("_26"));
ROUTE271.setFromField(CString("whichChoice_changed"));
ROUTE271.setToNode(CString("_3"));
ROUTE271.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE271);

ROUTE& ROUTE272 =  ROUTE();
ROUTE272.setFromNode(CString("cam-menuTranslationInterp_1"));
ROUTE272.setFromField(CString("value_changed"));
ROUTE272.setToNode(CString("menu_1"));
ROUTE272.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE272);

ROUTE& ROUTE273 =  ROUTE();
ROUTE273.setFromNode(CString("cam-menuTranslationInterp_2"));
ROUTE273.setFromField(CString("value_changed"));
ROUTE273.setToNode(CString("menu_1"));
ROUTE273.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE273);

ROUTE& ROUTE274 =  ROUTE();
ROUTE274.setFromNode(CString("_3"));
ROUTE274.setFromField(CString("touchTime"));
ROUTE274.setToNode(CString("_25"));
ROUTE274.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE274);

ROUTE& ROUTE275 =  ROUTE();
ROUTE275.setFromNode(CString("_30"));
ROUTE275.setFromField(CString("touchTime"));
ROUTE275.setToNode(CString("_25"));
ROUTE275.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE275);

ROUTE& ROUTE276 =  ROUTE();
ROUTE276.setFromNode(CString("_25"));
ROUTE276.setFromField(CString("exitTime"));
ROUTE276.setToNode(CString("_26"));
ROUTE276.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE276);

ROUTE& ROUTE277 =  ROUTE();
ROUTE277.setFromNode(CString("_27"));
ROUTE277.setFromField(CString("exitTime"));
ROUTE277.setToNode(CString("_26"));
ROUTE277.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE277);

ROUTE& ROUTE278 =  ROUTE();
ROUTE278.setFromNode(CString("_25"));
ROUTE278.setFromField(CString("exitTime"));
ROUTE278.setToNode(CString("_27"));
ROUTE278.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE278);

ROUTE& ROUTE279 =  ROUTE();
ROUTE279.setFromNode(CString("_27"));
ROUTE279.setFromField(CString("exitTime"));
ROUTE279.setToNode(CString("_27"));
ROUTE279.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE279);

ROUTE& ROUTE280 =  ROUTE();
ROUTE280.setFromNode(CString("_25"));
ROUTE280.setFromField(CString("startTime_changed"));
ROUTE280.setToNode(CString("_27"));
ROUTE280.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE280);

ROUTE& ROUTE281 =  ROUTE();
ROUTE281.setFromNode(CString("OffButton_9"));
ROUTE281.setFromField(CString("downTime"));
ROUTE281.setToNode(CString("Time_3"));
ROUTE281.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE281);

ROUTE& ROUTE282 =  ROUTE();
ROUTE282.setFromNode(CString("Time_3"));
ROUTE282.setFromField(CString("fraction_changed"));
ROUTE282.setToNode(CString("moviesTranslationInterp_1"));
ROUTE282.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE282);

ROUTE& ROUTE283 =  ROUTE();
ROUTE283.setFromNode(CString("Time_3"));
ROUTE283.setFromField(CString("fraction_changed"));
ROUTE283.setToNode(CString("buttonTranslationInterp_1"));
ROUTE283.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE283);

ROUTE& ROUTE284 =  ROUTE();
ROUTE284.setFromNode(CString("OnButton_2"));
ROUTE284.setFromField(CString("downTime"));
ROUTE284.setToNode(CString("Time_4"));
ROUTE284.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE284);

ROUTE& ROUTE285 =  ROUTE();
ROUTE285.setFromNode(CString("Time_4"));
ROUTE285.setFromField(CString("fraction_changed"));
ROUTE285.setToNode(CString("moviesTranslationInterp_2"));
ROUTE285.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE285);

ROUTE& ROUTE286 =  ROUTE();
ROUTE286.setFromNode(CString("Time_4"));
ROUTE286.setFromField(CString("fraction_changed"));
ROUTE286.setToNode(CString("buttonTranslationInterp_2"));
ROUTE286.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE286);

ROUTE& ROUTE287 =  ROUTE();
ROUTE287.setFromNode(CString("OffButton_9"));
ROUTE287.setFromField(CString("downTime"));
ROUTE287.setToNode(CString("_28"));
ROUTE287.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE287);

ROUTE& ROUTE288 =  ROUTE();
ROUTE288.setFromNode(CString("OnButton_2"));
ROUTE288.setFromField(CString("downTime"));
ROUTE288.setToNode(CString("_28"));
ROUTE288.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE288);

ROUTE& ROUTE289 =  ROUTE();
ROUTE289.setFromNode(CString("buttonTranslationInterp_1"));
ROUTE289.setFromField(CString("value_changed"));
ROUTE289.setToNode(CString("CheckBox_1"));
ROUTE289.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE289);

ROUTE& ROUTE290 =  ROUTE();
ROUTE290.setFromNode(CString("buttonTranslationInterp_2"));
ROUTE290.setFromField(CString("value_changed"));
ROUTE290.setToNode(CString("CheckBox_1"));
ROUTE290.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE290);

ROUTE& ROUTE291 =  ROUTE();
ROUTE291.setFromNode(CString("_32"));
ROUTE291.setFromField(CString("touchTime"));
ROUTE291.setToNode(CString("_31"));
ROUTE291.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE291);

ROUTE& ROUTE292 =  ROUTE();
ROUTE292.setFromNode(CString("_36"));
ROUTE292.setFromField(CString("touchTime"));
ROUTE292.setToNode(CString("_35"));
ROUTE292.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE292);

ROUTE& ROUTE293 =  ROUTE();
ROUTE293.setFromNode(CString("_40"));
ROUTE293.setFromField(CString("touchTime"));
ROUTE293.setToNode(CString("_39"));
ROUTE293.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE293);

ROUTE& ROUTE294 =  ROUTE();
ROUTE294.setFromNode(CString("_44"));
ROUTE294.setFromField(CString("touchTime"));
ROUTE294.setToNode(CString("_43"));
ROUTE294.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE294);

ROUTE& ROUTE295 =  ROUTE();
ROUTE295.setFromNode(CString("_48"));
ROUTE295.setFromField(CString("touchTime"));
ROUTE295.setToNode(CString("_47"));
ROUTE295.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE295);

ROUTE& ROUTE296 =  ROUTE();
ROUTE296.setFromNode(CString("_52"));
ROUTE296.setFromField(CString("touchTime"));
ROUTE296.setToNode(CString("_51"));
ROUTE296.setToField(CString("set_touchTime"));
Scene7.addChild(&ROUTE296);

ROUTE& ROUTE297 =  ROUTE();
ROUTE297.setFromNode(CString("_56"));
ROUTE297.setFromField(CString("whichChoice_changed"));
ROUTE297.setToNode(CString("_30"));
ROUTE297.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE297);

ROUTE& ROUTE298 =  ROUTE();
ROUTE298.setFromNode(CString("moviesTranslationInterp_1"));
ROUTE298.setFromField(CString("value_changed"));
ROUTE298.setToNode(CString("menu_2"));
ROUTE298.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE298);

ROUTE& ROUTE299 =  ROUTE();
ROUTE299.setFromNode(CString("moviesTranslationInterp_2"));
ROUTE299.setFromField(CString("value_changed"));
ROUTE299.setToNode(CString("menu_2"));
ROUTE299.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE299);

ROUTE& ROUTE300 =  ROUTE();
ROUTE300.setFromNode(CString("_25"));
ROUTE300.setFromField(CString("startTime_changed"));
ROUTE300.setToNode(CString("_55"));
ROUTE300.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE300);

ROUTE& ROUTE301 =  ROUTE();
ROUTE301.setFromNode(CString("_55"));
ROUTE301.setFromField(CString("exitTime"));
ROUTE301.setToNode(CString("_55"));
ROUTE301.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE301);

ROUTE& ROUTE302 =  ROUTE();
ROUTE302.setFromNode(CString("_55"));
ROUTE302.setFromField(CString("exitTime"));
ROUTE302.setToNode(CString("_56"));
ROUTE302.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE302);

ROUTE& ROUTE303 =  ROUTE();
ROUTE303.setFromNode(CString("_4"));
ROUTE303.setFromField(CString("isActive"));
ROUTE303.setToNode(CString("_57"));
ROUTE303.setToField(CString("set_value"));
Scene7.addChild(&ROUTE303);

ROUTE& ROUTE304 =  ROUTE();
ROUTE304.setFromNode(CString("_7"));
ROUTE304.setFromField(CString("isActive"));
ROUTE304.setToNode(CString("_58"));
ROUTE304.setToField(CString("set_value"));
Scene7.addChild(&ROUTE304);

ROUTE& ROUTE305 =  ROUTE();
ROUTE305.setFromNode(CString("_10"));
ROUTE305.setFromField(CString("isActive"));
ROUTE305.setToNode(CString("_59"));
ROUTE305.setToField(CString("set_value"));
Scene7.addChild(&ROUTE305);

ROUTE& ROUTE306 =  ROUTE();
ROUTE306.setFromNode(CString("_13"));
ROUTE306.setFromField(CString("isActive"));
ROUTE306.setToNode(CString("_60"));
ROUTE306.setToField(CString("set_value"));
Scene7.addChild(&ROUTE306);

ROUTE& ROUTE307 =  ROUTE();
ROUTE307.setFromNode(CString("_16"));
ROUTE307.setFromField(CString("isActive"));
ROUTE307.setToNode(CString("_61"));
ROUTE307.setToField(CString("set_value"));
Scene7.addChild(&ROUTE307);

ROUTE& ROUTE308 =  ROUTE();
ROUTE308.setFromNode(CString("_19"));
ROUTE308.setFromField(CString("isActive"));
ROUTE308.setToNode(CString("_62"));
ROUTE308.setToField(CString("set_value"));
Scene7.addChild(&ROUTE308);

ROUTE& ROUTE309 =  ROUTE();
ROUTE309.setFromNode(CString("_22"));
ROUTE309.setFromField(CString("isActive"));
ROUTE309.setToNode(CString("_63"));
ROUTE309.setToField(CString("set_value"));
Scene7.addChild(&ROUTE309);

ROUTE& ROUTE310 =  ROUTE();
ROUTE310.setFromNode(CString("_30"));
ROUTE310.setFromField(CString("whichChoice_changed"));
ROUTE310.setToNode(CString("_64"));
ROUTE310.setToField(CString("set_value"));
Scene7.addChild(&ROUTE310);

ROUTE& ROUTE311 =  ROUTE();
ROUTE311.setFromNode(CString("OffButton_1"));
ROUTE311.setFromField(CString("downTime"));
ROUTE311.setToNode(CString("open_1"));
ROUTE311.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE311);

ROUTE& ROUTE312 =  ROUTE();
ROUTE312.setFromNode(CString("OffButton_9"));
ROUTE312.setFromField(CString("downTime"));
ROUTE312.setToNode(CString("open_1"));
ROUTE312.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE312);

ROUTE& ROUTE313 =  ROUTE();
ROUTE313.setFromNode(CString("OnButton_1"));
ROUTE313.setFromField(CString("downTime"));
ROUTE313.setToNode(CString("close_1"));
ROUTE313.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE313);

ROUTE& ROUTE314 =  ROUTE();
ROUTE314.setFromNode(CString("OnButton_2"));
ROUTE314.setFromField(CString("downTime"));
ROUTE314.setToNode(CString("close_1"));
ROUTE314.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE314);

ROUTE& ROUTE315 =  ROUTE();
ROUTE315.setFromNode(CString("_3"));
ROUTE315.setFromField(CString("touchTime"));
ROUTE315.setToNode(CString("ok_1"));
ROUTE315.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE315);

ROUTE& ROUTE316 =  ROUTE();
ROUTE316.setFromNode(CString("_30"));
ROUTE316.setFromField(CString("touchTime"));
ROUTE316.setToNode(CString("ok_1"));
ROUTE316.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE316);

X3D0.setScene(&Scene7);

}
