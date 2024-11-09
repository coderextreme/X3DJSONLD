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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:18 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:18 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("BoolSwitch"));
ExternProtoDeclare8.setUrl(new CString[]{CString("BoolSwitch_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("isActive"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("wichChoice_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(CString("isOver"));
ExternProtoDeclare11.setUrl(new CString[]{CString("isOver_proto.x3d")}, 1);
field& field12 =  field();
field12.setName(CString("set_isOver"));
field12.setAccessType(CString("inputOnly"));
field12.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("set_hitPoint"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFVec3f"));
ExternProtoDeclare11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("isOver_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare11);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("True"));
ExternProtoDeclare15.setUrl(new CString[]{CString("True_proto.x3d")}, 1);
field& field16 =  field();
field16.setName(CString("set_SFBool"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("startTime"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field17);

Scene7.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare18 =  ExternProtoDeclare();
ExternProtoDeclare18.setName(CString("Switcher"));
ExternProtoDeclare18.setUrl(new CString[]{CString("Switcher_proto.x3d")}, 1);
field& field19 =  field();
field19.setName(CString("minValue"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFInt32"));
ExternProtoDeclare18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("maxValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
ExternProtoDeclare18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("prev"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ExternProtoDeclare18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("next"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ExternProtoDeclare18.addChild(&field22);

field& field23 =  field();
field23.setName(CString("offset"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFInt32"));
ExternProtoDeclare18.addChild(&field23);

field& field24 =  field();
field24.setName(CString("whichChoice_changed"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("SFInt32"));
ExternProtoDeclare18.addChild(&field24);

Scene7.addChild(&ExternProtoDeclare18);

ExternProtoDeclare& ExternProtoDeclare25 =  ExternProtoDeclare();
ExternProtoDeclare25.setName(CString("Gate"));
ExternProtoDeclare25.setUrl(new CString[]{CString("Gate_proto.x3d")}, 1);
field& field26 =  field();
field26.setName(CString("offset"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFBool"));
ExternProtoDeclare25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("isActive"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
ExternProtoDeclare25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("enterTime"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("exitTime"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field30);

Scene7.addChild(&ExternProtoDeclare25);

ExternProtoDeclare& ExternProtoDeclare31 =  ExternProtoDeclare();
ExternProtoDeclare31.setName(CString("Not"));
ExternProtoDeclare31.setUrl(new CString[]{CString("Not_proto.x3d")}, 1);
field& field32 =  field();
field32.setName(CString("set_SFBool"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFBool"));
ExternProtoDeclare31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("value_changed"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("SFBool"));
ExternProtoDeclare31.addChild(&field33);

Scene7.addChild(&ExternProtoDeclare31);

WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo34);

Transform& Transform35 =  Transform();
Transform35.setBboxSize(new float[]{1.288,0.8863,0.060779});
Transform35.setBboxCenter(new float[]{5.06639e-7,-2.23517e-7,-0.320511});
Scene7.addChild(&Transform35);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Window"));
Switch& Switch37 =  Switch();
Switch37.setDEF(CString("_1"));
Switch37.setWhichChoice(1);
Transform& Transform38 =  Transform();
TouchSensor& TouchSensor39 =  TouchSensor();
TouchSensor39.setDEF(CString("_2"));
Transform38.addChild(&TouchSensor39);

Inline& Inline40 =  Inline();
Inline40.setUrl(new CString[]{CString("else.x3d")}, 1);
Inline40.setBboxSize(new float[]{0.0412831,0.0412831,0.0});
Inline40.setBboxCenter(new float[]{-0.240425,-0.171864,-0.297753});
Transform38.addChild(&Inline40);

Switch37.addChild(&Transform38);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("on_1"));
Transform& Transform42 =  Transform();
Transform42.setDEF(CString("Zoom"));
PlaneSensor& PlaneSensor43 =  PlaneSensor();
PlaneSensor43.setDEF(CString("_3"));
PlaneSensor43.setMinPosition(new float[]{-0.17,0.0});
PlaneSensor43.setMaxPosition(new float[]{0.1488,0.0});
Transform42.addChild(&PlaneSensor43);

TouchSensor& TouchSensor44 =  TouchSensor();
TouchSensor44.setDEF(CString("_4"));
Transform42.addChild(&TouchSensor44);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("button_1"));
Transform45.setTranslation(new float[]{-0.0746069,-0.133511,0.0});
Transform45.setCenter(new float[]{-0.183921,-0.0639503,-0.296896});
Transform& Transform46 =  Transform();
Transform46.setDEF(CString("Zoom-Button"));
Inline& Inline47 =  Inline();
Inline47.setUrl(new CString[]{CString("zoom-button.gif.x3d")}, 1);
Inline47.setBboxSize(new float[]{0.0111772,0.0107642,0.0});
Inline47.setBboxCenter(new float[]{0.18564,-0.0653136,-0.29764});
Transform46.addChild(&Inline47);

Transform45.addChild(&Transform46);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("help_1"));
Switch& Switch49 =  Switch();
Switch49.setDEF(CString("_5"));
Switch49.setWhichChoice(1);
Transform& Transform50 =  Transform();
Transform50.setDEF(CString("isOver_1"));
Switch& Switch51 =  Switch();
Switch51.setDEF(CString("_6"));
Switch51.setWhichChoice(1);
Transform& Transform52 =  Transform();
Switch51.addChild(&Transform52);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("on_2"));
Transform53.setTranslation(new float[]{0.185434,-0.0657812,-0.303274});
Transform& Transform54 =  Transform();
Transform54.setDEF(CString("Zoom_1"));
Inline& Inline55 =  Inline();
Inline55.setUrl(new CString[]{CString("zoom.x3d")}, 1);
Inline55.setBboxSize(new float[]{0.000743108,0.000743108,0.0});
Inline55.setBboxCenter(new float[]{0.0,0.0,0.00636301});
Transform54.addChild(&Inline55);

Transform53.addChild(&Transform54);

Switch51.addChild(&Transform53);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("BoolSwitch_1"));
ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("BoolSwitch"));
ProtoInstance57.setDEF(CString("_7"));
Transform56.addChild(&ProtoInstance57);

Switch51.addChild(&Transform56);

Transform50.addChild(&Switch51);

Switch49.addChild(&Transform50);

Transform& Transform58 =  Transform();
Switch49.addChild(&Transform58);

Transform48.addChild(&Switch49);

Transform45.addChild(&Transform48);

Transform42.addChild(&Transform45);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("mouse_1"));
Switch& Switch60 =  Switch();
Switch60.setDEF(CString("_8"));
Switch60.setWhichChoice(0);
Transform& Transform61 =  Transform();
Switch60.addChild(&Transform61);

Transform& Transform62 =  Transform();
Transform62.setDEF(CString("on_3"));
Transform62.setTranslation(new float[]{-0.07,0.06,-0.30099});
Transform& Transform63 =  Transform();
Transform63.setUSE(CString("Zoom_1"));
Transform62.addChild(&Transform63);

Switch60.addChild(&Transform62);

Transform& Transform64 =  Transform();
Transform64.setDEF(CString("BoolSwitch_2"));
ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(CString("BoolSwitch"));
ProtoInstance65.setDEF(CString("_9"));
Transform64.addChild(&ProtoInstance65);

Switch60.addChild(&Transform64);

Transform59.addChild(&Switch60);

Transform42.addChild(&Transform59);

Transform41.addChild(&Transform42);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("Move_1"));
PlaneSensor& PlaneSensor67 =  PlaneSensor();
PlaneSensor67.setDEF(CString("_10"));
PlaneSensor67.setOffset(new float[]{-0.0746069,-0.133511,0.0});
PlaneSensor67.setMinPosition(new float[]{-0.0825515,-0.133799});
PlaneSensor67.setMaxPosition(new float[]{0.0756775,0.134533});
Transform66.addChild(&PlaneSensor67);

TouchSensor& TouchSensor68 =  TouchSensor();
TouchSensor68.setDEF(CString("_11"));
Transform66.addChild(&TouchSensor68);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("button_2"));
Transform69.setTranslation(new float[]{-0.0746069,-0.133511,0.0});
Transform69.setCenter(new float[]{-0.183921,-0.0639503,-0.296896});
Transform& Transform70 =  Transform();
Transform70.setDEF(CString("Content"));
Inline& Inline71 =  Inline();
Inline71.setUrl(new CString[]{CString("cinemaxx.x3d")}, 1);
Inline71.setBboxSize(new float[]{0.360011,0.120031,0.00349});
Inline71.setBboxCenter(new float[]{3.7998e-7,-4.65661e-7,-0.298245});
Transform70.addChild(&Inline71);

Transform69.addChild(&Transform70);

Transform& Transform72 =  Transform();
Transform72.setDEF(CString("Rahmen"));
Switch& Switch73 =  Switch();
Switch73.setDEF(CString("_12"));
Switch73.setWhichChoice(0);
Transform& Transform74 =  Transform();
Transform74.setDEF(CString("mouseOut"));
TouchSensor& TouchSensor75 =  TouchSensor();
TouchSensor75.setDEF(CString("_13"));
Transform74.addChild(&TouchSensor75);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("isOver_2"));
ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(CString("isOver"));
ProtoInstance77.setDEF(CString("_14"));
Transform76.addChild(&ProtoInstance77);

Transform74.addChild(&Transform76);

Transform& Transform78 =  Transform();
Transform78.setDEF(CString("True"));
ProtoInstance& ProtoInstance79 =  ProtoInstance();
ProtoInstance79.setName(CString("True"));
ProtoInstance79.setDEF(CString("_15"));
Transform78.addChild(&ProtoInstance79);

Transform74.addChild(&Transform78);

Transform& Transform80 =  Transform();
Transform80.setDEF(CString("fg"));
Transform80.setTranslation(new float[]{0.0756268,0.159199,-0.290121});
Transform80.setScale(new float[]{1.11103,1.2214,1.0});
Shape& Shape81 =  Shape();
IndexedFaceSet& IndexedFaceSet82 =  IndexedFaceSet();
IndexedFaceSet82.setCoordIndex(new int32_t[]{1,0,3,2,-1}, 5);
Coordinate& Coordinate83 =  Coordinate();
Coordinate83.setPoint(new float[]{-0.230846,-0.066663,0.0,-0.230846,-0.193214,0.0,0.101703,-0.193214,0.0,0.101703,-0.066663,0.0}, 12);
IndexedFaceSet82.setCoord(&Coordinate83);

Shape81.setGeometry(&IndexedFaceSet82);

Transform80.addChild(&Shape81);

Transform74.addChild(&Transform80);

Switch73.addChild(&Transform74);

Transform& Transform84 =  Transform();
Transform84.setDEF(CString("mouseOver"));
Transform& Transform85 =  Transform();
Transform85.setDEF(CString("bg"));
Transform85.setTranslation(new float[]{0.0819281,0.195895,-0.310268});
Transform85.setScale(new float[]{1.30637,1.49261,1.06768});
Shape& Shape86 =  Shape();
IndexedFaceSet& IndexedFaceSet87 =  IndexedFaceSet();
IndexedFaceSet87.setCoordIndex(new int32_t[]{1,0,3,2,-1}, 5);
Coordinate& Coordinate88 =  Coordinate();
Coordinate88.setPoint(new float[]{-0.230846,-0.066663,0.0,-0.230846,-0.193214,0.0,0.101703,-0.193214,0.0,0.101703,-0.066663,0.0}, 12);
IndexedFaceSet87.setCoord(&Coordinate88);

Shape86.setGeometry(&IndexedFaceSet87);

Transform85.addChild(&Shape86);

Transform84.addChild(&Transform85);

Inline& Inline89 =  Inline();
Inline89.setUrl(new CString[]{CString("border.x3d")}, 1);
Inline89.setBboxSize(new float[]{0.37516,0.141366,0.0000585616});
Inline89.setBboxCenter(new float[]{0.00364155,-6.55651e-7,-0.299961});
Transform84.addChild(&Inline89);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("Close_1"));
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setDEF(CString("_16"));
Transform90.addChild(&TouchSensor91);

Transform& Transform92 =  Transform();
Transform92.setDEF(CString("isOver"));
ProtoInstance& ProtoInstance93 =  ProtoInstance();
ProtoInstance93.setName(CString("isOver"));
ProtoInstance93.setDEF(CString("_17"));
Transform92.addChild(&ProtoInstance93);

Transform90.addChild(&Transform92);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("Close-Button"));
Inline& Inline95 =  Inline();
Inline95.setUrl(new CString[]{CString("close-button.x3d")}, 1);
Inline95.setBboxSize(new float[]{0.0111772,0.0107642,0.0});
Inline95.setBboxCenter(new float[]{0.18564,0.0653424,-0.29764});
Transform94.addChild(&Inline95);

Transform90.addChild(&Transform94);

Transform& Transform96 =  Transform();
Transform96.setDEF(CString("help"));
Switch& Switch97 =  Switch();
Switch97.setDEF(CString("_18"));
Switch97.setWhichChoice(1);
Transform& Transform98 =  Transform();
Switch97.addChild(&Transform98);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("Close"));
Inline& Inline100 =  Inline();
Inline100.setUrl(new CString[]{CString("close.x3d")}, 1);
Inline100.setBboxSize(new float[]{0.0162762,0.0162762,0.0});
Inline100.setBboxCenter(new float[]{0.183659,0.0636474,-0.296069});
Transform99.addChild(&Inline100);

Switch97.addChild(&Transform99);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("BoolSwitch_3"));
ProtoInstance& ProtoInstance102 =  ProtoInstance();
ProtoInstance102.setName(CString("BoolSwitch"));
ProtoInstance102.setDEF(CString("_19"));
Transform101.addChild(&ProtoInstance102);

Switch97.addChild(&Transform101);

Transform96.addChild(&Switch97);

Transform90.addChild(&Transform96);

Transform84.addChild(&Transform90);

Switch73.addChild(&Transform84);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("Switcher"));
ProtoInstance& ProtoInstance104 =  ProtoInstance();
ProtoInstance104.setName(CString("Switcher"));
ProtoInstance104.setDEF(CString("_20"));
Transform103.addChild(&ProtoInstance104);

Switch73.addChild(&Transform103);

Transform72.addChild(&Switch73);

Transform69.addChild(&Transform72);

Transform66.addChild(&Transform69);

Transform& Transform105 =  Transform();
Transform105.setDEF(CString("mouse"));
Switch& Switch106 =  Switch();
Switch106.setDEF(CString("_21"));
Switch106.setWhichChoice(-1);
Transform& Transform107 =  Transform();
Switch106.addChild(&Transform107);

Transform& Transform108 =  Transform();
Transform108.setDEF(CString("on_4"));
Transform& Transform109 =  Transform();
Transform109.setDEF(CString("Move"));
Inline& Inline110 =  Inline();
Inline110.setUrl(new CString[]{CString("move.x3d")}, 1);
Inline110.setBboxSize(new float[]{0.0313628,0.0313628,0.0});
Inline110.setBboxCenter(new float[]{0.0,0.0,0.005});
Transform109.addChild(&Inline110);

Transform108.addChild(&Transform109);

Switch106.addChild(&Transform108);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("BoolSwitch_4"));
ProtoInstance& ProtoInstance112 =  ProtoInstance();
ProtoInstance112.setName(CString("BoolSwitch"));
ProtoInstance112.setDEF(CString("_22"));
Transform111.addChild(&ProtoInstance112);

Switch106.addChild(&Transform111);

Transform105.addChild(&Switch106);

Transform66.addChild(&Transform105);

Transform41.addChild(&Transform66);

Transform& Transform113 =  Transform();
Transform113.setDEF(CString("_Script"));
Script& Script114 =  Script();
Script114.setDEF(CString("_scale"));
field& field115 =  field();
field115.setName(CString("scale_changed"));
field115.setAccessType(CString("outputOnly"));
field115.setType(CString("SFVec3f"));
Script114.addChild(&field115);

field& field116 =  field();
field116.setName(CString("minPosition_changed"));
field116.setAccessType(CString("outputOnly"));
field116.setType(CString("SFVec2f"));
Script114.addChild(&field116);

field& field117 =  field();
field117.setName(CString("maxPosition_changed"));
field117.setAccessType(CString("outputOnly"));
field117.setType(CString("SFVec2f"));
Script114.addChild(&field117);

field& field118 =  field();
field118.setName(CString("set_translation"));
field118.setAccessType(CString("inputOnly"));
field118.setType(CString("SFVec3f"));
Script114.addChild(&field118);

field& field119 =  field();
field119.setName(CString("isActive"));
field119.setAccessType(CString("inputOnly"));
field119.setType(CString("SFBool"));
Script114.addChild(&field119);

field& field120 =  field();
field120.setName(CString("minPosition"));
field120.setAccessType(CString("initializeOnly"));
field120.setType(CString("SFVec2f"));
field120.setValue(CString("-0.0825515 -0.133799"));
Script114.addChild(&field120);

field& field121 =  field();
field121.setName(CString("maxPosition"));
field121.setAccessType(CString("initializeOnly"));
field121.setType(CString("SFVec2f"));
field121.setValue(CString("0.0756775 0.134533"));
Script114.addChild(&field121);

field& field122 =  field();
field122.setName(CString("size"));
field122.setAccessType(CString("initializeOnly"));
field122.setType(CString("SFVec2f"));
field122.setValue(CString("0.3748 0.1414"));
Script114.addChild(&field122);


//Script114.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	minPosition_changed = minPosition;")+
//_T("	maxPosition_changed = maxPosition;")+
//_T("}")+
//_T("function set_translation(value, time)")+
//_T("{")+
//_T("	scale_changed = new SFVec3f(")+
//_T("		1 + value.x * 2.75,")+
//_T("		1 + value.x * 2.75,")+
//_T("		1")+
//_T("	);")+
//_T("}")+
//_T("function isActive(value, time)")+
//_T("{")+
//_T("	if (!value) {")+
//_T("		maxPosition_changed = new SFVec2f(")+
//_T("			maxPosition.x+ size.x - (size.x * scale_changed.x),")+
//_T("			maxPosition.y + size.y - (size.y * scale_changed.y)")+
//_T("		);")+
//_T("	}")+
//_T("}"));
Transform113.addChild(&Script114);

Transform41.addChild(&Transform113);

Switch37.addChild(&Transform41);

Transform& Transform123 =  Transform();
Transform123.setDEF(CString("BoolSwitch"));
ProtoInstance& ProtoInstance124 =  ProtoInstance();
ProtoInstance124.setName(CString("BoolSwitch"));
ProtoInstance124.setDEF(CString("_23"));
Transform123.addChild(&ProtoInstance124);

Switch37.addChild(&Transform123);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("Gate"));
ProtoInstance& ProtoInstance126 =  ProtoInstance();
ProtoInstance126.setName(CString("Gate"));
ProtoInstance126.setDEF(CString("_24"));
fieldValue& fieldValue127 =  fieldValue();
fieldValue127.setName(CString("offset"));
fieldValue127.setValue(CString("true"));
ProtoInstance126.addChild(&fieldValue127);

Transform125.addChild(&ProtoInstance126);

Switch37.addChild(&Transform125);

Transform& Transform128 =  Transform();
Transform128.setDEF(CString("OutTrue"));
ProtoInstance& ProtoInstance129 =  ProtoInstance();
ProtoInstance129.setName(CString("True"));
ProtoInstance129.setDEF(CString("_25"));
Transform128.addChild(&ProtoInstance129);

Switch37.addChild(&Transform128);

Transform36.addChild(&Switch37);

Scene7.addChild(&Transform36);

Transform& Transform130 =  Transform();
Transform130.setDEF(CString("Hide"));
Switch& Switch131 =  Switch();
Switch131.setDEF(CString("_26"));
Switch131.setWhichChoice(0);
Transform& Transform132 =  Transform();
Switch131.addChild(&Transform132);

Transform& Transform133 =  Transform();
TouchSensor& TouchSensor134 =  TouchSensor();
TouchSensor134.setDEF(CString("_27"));
Transform133.addChild(&TouchSensor134);

Transform& Transform135 =  Transform();
Transform135.setDEF(CString("Not"));
ProtoInstance& ProtoInstance136 =  ProtoInstance();
ProtoInstance136.setName(CString("Not"));
ProtoInstance136.setDEF(CString("_28"));
Transform135.addChild(&ProtoInstance136);

Transform133.addChild(&Transform135);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("on"));
Transform137.setTranslation(new float[]{0.250093,0.910024,-0.3509});
Transform137.setScale(new float[]{3.87311,7.0035,1.06768});
Shape& Shape138 =  Shape();
IndexedFaceSet& IndexedFaceSet139 =  IndexedFaceSet();
IndexedFaceSet139.setCoordIndex(new int32_t[]{1,0,3,2,-1}, 5);
Coordinate& Coordinate140 =  Coordinate();
Coordinate140.setPoint(new float[]{-0.230846,-0.066663,0.0,-0.230846,-0.193214,0.0,0.101703,-0.193214,0.0,0.101703,-0.066663,0.0}, 12);
IndexedFaceSet139.setCoord(&Coordinate140);

Shape138.setGeometry(&IndexedFaceSet139);

Transform137.addChild(&Shape138);

Transform133.addChild(&Transform137);

Switch131.addChild(&Transform133);

Transform130.addChild(&Switch131);

Scene7.addChild(&Transform130);

ROUTE& ROUTE141 =  ROUTE();
ROUTE141.setFromNode(CString("_4"));
ROUTE141.setFromField(CString("isOver"));
ROUTE141.setToNode(CString("_7"));
ROUTE141.setToField(CString("isActive"));
Scene7.addChild(&ROUTE141);

ROUTE& ROUTE142 =  ROUTE();
ROUTE142.setFromNode(CString("_7"));
ROUTE142.setFromField(CString("wichChoice_changed"));
ROUTE142.setToNode(CString("_6"));
ROUTE142.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE142);

ROUTE& ROUTE143 =  ROUTE();
ROUTE143.setFromNode(CString("_9"));
ROUTE143.setFromField(CString("wichChoice_changed"));
ROUTE143.setToNode(CString("_5"));
ROUTE143.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE143);

ROUTE& ROUTE144 =  ROUTE();
ROUTE144.setFromNode(CString("button_2"));
ROUTE144.setFromField(CString("translation_changed"));
ROUTE144.setToNode(CString("button_1"));
ROUTE144.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE144);

ROUTE& ROUTE145 =  ROUTE();
ROUTE145.setFromNode(CString("button_2"));
ROUTE145.setFromField(CString("scale_changed"));
ROUTE145.setToNode(CString("button_1"));
ROUTE145.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE145);

ROUTE& ROUTE146 =  ROUTE();
ROUTE146.setFromNode(CString("button_2"));
ROUTE146.setFromField(CString("center_changed"));
ROUTE146.setToNode(CString("button_1"));
ROUTE146.setToField(CString("set_center"));
Scene7.addChild(&ROUTE146);

ROUTE& ROUTE147 =  ROUTE();
ROUTE147.setFromNode(CString("_3"));
ROUTE147.setFromField(CString("trackPoint_changed"));
ROUTE147.setToNode(CString("on_3"));
ROUTE147.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE147);

ROUTE& ROUTE148 =  ROUTE();
ROUTE148.setFromNode(CString("_3"));
ROUTE148.setFromField(CString("isActive"));
ROUTE148.setToNode(CString("_9"));
ROUTE148.setToField(CString("isActive"));
Scene7.addChild(&ROUTE148);

ROUTE& ROUTE149 =  ROUTE();
ROUTE149.setFromNode(CString("_9"));
ROUTE149.setFromField(CString("wichChoice_changed"));
ROUTE149.setToNode(CString("_8"));
ROUTE149.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE149);

ROUTE& ROUTE150 =  ROUTE();
ROUTE150.setFromNode(CString("_scale"));
ROUTE150.setFromField(CString("minPosition_changed"));
ROUTE150.setToNode(CString("_10"));
ROUTE150.setToField(CString("set_minPosition"));
Scene7.addChild(&ROUTE150);

ROUTE& ROUTE151 =  ROUTE();
ROUTE151.setFromNode(CString("_scale"));
ROUTE151.setFromField(CString("maxPosition_changed"));
ROUTE151.setToNode(CString("_10"));
ROUTE151.setToField(CString("set_maxPosition"));
Scene7.addChild(&ROUTE151);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromNode(CString("button_2"));
ROUTE152.setFromField(CString("translation_changed"));
ROUTE152.setToNode(CString("_10"));
ROUTE152.setToField(CString("set_offset"));
Scene7.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromNode(CString("_13"));
ROUTE153.setFromField(CString("isOver"));
ROUTE153.setToNode(CString("_14"));
ROUTE153.setToField(CString("set_isOver"));
Scene7.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromNode(CString("_13"));
ROUTE154.setFromField(CString("hitPoint_changed"));
ROUTE154.setToNode(CString("_14"));
ROUTE154.setToField(CString("set_hitPoint"));
Scene7.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromNode(CString("_14"));
ROUTE155.setFromField(CString("isOver_changed"));
ROUTE155.setToNode(CString("_15"));
ROUTE155.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE155);

ROUTE& ROUTE156 =  ROUTE();
ROUTE156.setFromNode(CString("_16"));
ROUTE156.setFromField(CString("isOver"));
ROUTE156.setToNode(CString("_17"));
ROUTE156.setToField(CString("set_isOver"));
Scene7.addChild(&ROUTE156);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromNode(CString("_16"));
ROUTE157.setFromField(CString("hitPoint_changed"));
ROUTE157.setToNode(CString("_17"));
ROUTE157.setToField(CString("set_hitPoint"));
Scene7.addChild(&ROUTE157);

ROUTE& ROUTE158 =  ROUTE();
ROUTE158.setFromNode(CString("_16"));
ROUTE158.setFromField(CString("isActive"));
ROUTE158.setToNode(CString("_19"));
ROUTE158.setToField(CString("isActive"));
Scene7.addChild(&ROUTE158);

ROUTE& ROUTE159 =  ROUTE();
ROUTE159.setFromNode(CString("_17"));
ROUTE159.setFromField(CString("isOver_changed"));
ROUTE159.setToNode(CString("_19"));
ROUTE159.setToField(CString("isActive"));
Scene7.addChild(&ROUTE159);

ROUTE& ROUTE160 =  ROUTE();
ROUTE160.setFromNode(CString("_19"));
ROUTE160.setFromField(CString("wichChoice_changed"));
ROUTE160.setToNode(CString("_18"));
ROUTE160.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE160);

ROUTE& ROUTE161 =  ROUTE();
ROUTE161.setFromNode(CString("_16"));
ROUTE161.setFromField(CString("touchTime"));
ROUTE161.setToNode(CString("_20"));
ROUTE161.setToField(CString("set_next"));
Scene7.addChild(&ROUTE161);

ROUTE& ROUTE162 =  ROUTE();
ROUTE162.setFromNode(CString("_15"));
ROUTE162.setFromField(CString("startTime"));
ROUTE162.setToNode(CString("_20"));
ROUTE162.setToField(CString("set_next"));
Scene7.addChild(&ROUTE162);

ROUTE& ROUTE163 =  ROUTE();
ROUTE163.setFromNode(CString("_25"));
ROUTE163.setFromField(CString("startTime"));
ROUTE163.setToNode(CString("_20"));
ROUTE163.setToField(CString("set_next"));
Scene7.addChild(&ROUTE163);

ROUTE& ROUTE164 =  ROUTE();
ROUTE164.setFromNode(CString("_20"));
ROUTE164.setFromField(CString("whichChoice_changed"));
ROUTE164.setToNode(CString("_12"));
ROUTE164.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE164);

ROUTE& ROUTE165 =  ROUTE();
ROUTE165.setFromNode(CString("_10"));
ROUTE165.setFromField(CString("translation_changed"));
ROUTE165.setToNode(CString("button_2"));
ROUTE165.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE165);

ROUTE& ROUTE166 =  ROUTE();
ROUTE166.setFromNode(CString("_scale"));
ROUTE166.setFromField(CString("scale_changed"));
ROUTE166.setToNode(CString("button_2"));
ROUTE166.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE166);

ROUTE& ROUTE167 =  ROUTE();
ROUTE167.setFromNode(CString("_10"));
ROUTE167.setFromField(CString("trackPoint_changed"));
ROUTE167.setToNode(CString("on_4"));
ROUTE167.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE167);

ROUTE& ROUTE168 =  ROUTE();
ROUTE168.setFromNode(CString("_10"));
ROUTE168.setFromField(CString("isActive"));
ROUTE168.setToNode(CString("_22"));
ROUTE168.setToField(CString("isActive"));
Scene7.addChild(&ROUTE168);

ROUTE& ROUTE169 =  ROUTE();
ROUTE169.setFromNode(CString("_22"));
ROUTE169.setFromField(CString("wichChoice_changed"));
ROUTE169.setToNode(CString("_21"));
ROUTE169.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE169);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromNode(CString("_3"));
ROUTE170.setFromField(CString("translation_changed"));
ROUTE170.setToNode(CString("_scale"));
ROUTE170.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromNode(CString("_3"));
ROUTE171.setFromField(CString("isActive"));
ROUTE171.setToNode(CString("_scale"));
ROUTE171.setToField(CString("isActive"));
Scene7.addChild(&ROUTE171);

ROUTE& ROUTE172 =  ROUTE();
ROUTE172.setFromNode(CString("_24"));
ROUTE172.setFromField(CString("isActive"));
ROUTE172.setToNode(CString("_23"));
ROUTE172.setToField(CString("isActive"));
Scene7.addChild(&ROUTE172);

ROUTE& ROUTE173 =  ROUTE();
ROUTE173.setFromNode(CString("_24"));
ROUTE173.setFromField(CString("isActive"));
ROUTE173.setToNode(CString("_24"));
ROUTE173.setToField(CString("set_offset"));
Scene7.addChild(&ROUTE173);

ROUTE& ROUTE174 =  ROUTE();
ROUTE174.setFromNode(CString("_16"));
ROUTE174.setFromField(CString("touchTime"));
ROUTE174.setToNode(CString("_24"));
ROUTE174.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE174);

ROUTE& ROUTE175 =  ROUTE();
ROUTE175.setFromNode(CString("_2"));
ROUTE175.setFromField(CString("touchTime"));
ROUTE175.setToNode(CString("_24"));
ROUTE175.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE175);

ROUTE& ROUTE176 =  ROUTE();
ROUTE176.setFromNode(CString("_27"));
ROUTE176.setFromField(CString("isOver"));
ROUTE176.setToNode(CString("_25"));
ROUTE176.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE176);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("_23"));
ROUTE177.setFromField(CString("wichChoice_changed"));
ROUTE177.setToNode(CString("_1"));
ROUTE177.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("_28"));
ROUTE178.setFromField(CString("value_changed"));
ROUTE178.setToNode(CString("_27"));
ROUTE178.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("_11"));
ROUTE179.setFromField(CString("isOver"));
ROUTE179.setToNode(CString("_28"));
ROUTE179.setToField(CString("set_SFBool"));
Scene7.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("_20"));
ROUTE180.setFromField(CString("whichChoice_changed"));
ROUTE180.setToNode(CString("_26"));
ROUTE180.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE180);

X3D0.setScene(&Scene7);

//}
