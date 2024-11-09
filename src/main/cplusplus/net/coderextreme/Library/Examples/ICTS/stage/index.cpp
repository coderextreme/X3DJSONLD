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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:19 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:19 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("ICTS Homepage"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("BoolSwitch"));
ExternProtoDeclare9.setUrl(new CString[]{CString("BoolSwitch_proto.x3d")}, 1);
field& field10 =  field();
field10.setName(CString("isActive"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("wichChoice_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFInt32"));
ExternProtoDeclare9.addChild(&field11);

Scene8.addChild(&ExternProtoDeclare9);

ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("Int"));
ExternProtoDeclare12.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field13 =  field();
field13.setName(CString("startTime"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFTime"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("value_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field14);

field& field15 =  field();
field15.setName(CString("keyValue"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field15);

Scene8.addChild(&ExternProtoDeclare12);

ExternProtoDeclare& ExternProtoDeclare16 =  ExternProtoDeclare();
ExternProtoDeclare16.setName(CString("JavaScript"));
ExternProtoDeclare16.setUrl(new CString[]{CString("JavaScript_proto.x3d")}, 1);
field& field17 =  field();
field17.setName(CString("startTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("javascript"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFString"));
ExternProtoDeclare16.addChild(&field18);

Scene8.addChild(&ExternProtoDeclare16);

ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("Not"));
ExternProtoDeclare19.setUrl(new CString[]{CString("Not_proto.x3d")}, 1);
field& field20 =  field();
field20.setName(CString("set_SFBool"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFBool"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("value_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFBool"));
ExternProtoDeclare19.addChild(&field21);

Scene8.addChild(&ExternProtoDeclare19);

ExternProtoDeclare& ExternProtoDeclare22 =  ExternProtoDeclare();
ExternProtoDeclare22.setName(CString("Float"));
ExternProtoDeclare22.setUrl(new CString[]{CString("Float_proto.x3d")}, 1);
field& field23 =  field();
field23.setName(CString("startTime"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("value_changed"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("SFFloat"));
ExternProtoDeclare22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("keyValue"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFFloat"));
ExternProtoDeclare22.addChild(&field25);

Scene8.addChild(&ExternProtoDeclare22);

ExternProtoDeclare& ExternProtoDeclare26 =  ExternProtoDeclare();
ExternProtoDeclare26.setName(CString("Bool"));
ExternProtoDeclare26.setUrl(new CString[]{CString("Bool_proto.x3d")}, 1);
field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
ExternProtoDeclare26.addChild(&field27);

field& field28 =  field();
field28.setName(CString("value_changed"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
ExternProtoDeclare26.addChild(&field28);

field& field29 =  field();
field29.setName(CString("keyValue"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFBool"));
ExternProtoDeclare26.addChild(&field29);

Scene8.addChild(&ExternProtoDeclare26);

ExternProtoDeclare& ExternProtoDeclare30 =  ExternProtoDeclare();
ExternProtoDeclare30.setName(CString("Switcher"));
ExternProtoDeclare30.setUrl(new CString[]{CString("Switcher_proto.x3d")}, 1);
field& field31 =  field();
field31.setName(CString("minValue"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFInt32"));
ExternProtoDeclare30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("maxValue"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFInt32"));
ExternProtoDeclare30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("prev"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFTime"));
ExternProtoDeclare30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("next"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFTime"));
ExternProtoDeclare30.addChild(&field34);

field& field35 =  field();
field35.setName(CString("offset"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFInt32"));
ExternProtoDeclare30.addChild(&field35);

field& field36 =  field();
field36.setName(CString("whichChoice_changed"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFInt32"));
ExternProtoDeclare30.addChild(&field36);

Scene8.addChild(&ExternProtoDeclare30);

ExternProtoDeclare& ExternProtoDeclare37 =  ExternProtoDeclare();
ExternProtoDeclare37.setName(CString("False"));
ExternProtoDeclare37.setUrl(new CString[]{CString("False_proto.x3d")}, 1);
field& field38 =  field();
field38.setName(CString("set_SFBool"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFBool"));
ExternProtoDeclare37.addChild(&field38);

field& field39 =  field();
field39.setName(CString("startTime"));
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFTime"));
ExternProtoDeclare37.addChild(&field39);

Scene8.addChild(&ExternProtoDeclare37);

ExternProtoDeclare& ExternProtoDeclare40 =  ExternProtoDeclare();
ExternProtoDeclare40.setName(CString("Or"));
ExternProtoDeclare40.setUrl(new CString[]{CString("Or_proto.x3d")}, 1);
field& field41 =  field();
field41.setName(CString("value1"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFBool"));
ExternProtoDeclare40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("value2"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFBool"));
ExternProtoDeclare40.addChild(&field42);

field& field43 =  field();
field43.setName(CString("value_changed"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFBool"));
ExternProtoDeclare40.addChild(&field43);

Scene8.addChild(&ExternProtoDeclare40);

ExternProtoDeclare& ExternProtoDeclare44 =  ExternProtoDeclare();
ExternProtoDeclare44.setName(CString("Translation"));
ExternProtoDeclare44.setUrl(new CString[]{CString("Translation_proto.x3d")}, 1);
field& field45 =  field();
field45.setName(CString("startTime"));
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("SFTime"));
ExternProtoDeclare44.addChild(&field45);

field& field46 =  field();
field46.setName(CString("value_changed"));
field46.setAccessType(CString("outputOnly"));
field46.setType(CString("SFVec3f"));
ExternProtoDeclare44.addChild(&field46);

field& field47 =  field();
field47.setName(CString("translation"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFVec3f"));
ExternProtoDeclare44.addChild(&field47);

Scene8.addChild(&ExternProtoDeclare44);

ExternProtoDeclare& ExternProtoDeclare48 =  ExternProtoDeclare();
ExternProtoDeclare48.setName(CString("Delay"));
ExternProtoDeclare48.setUrl(new CString[]{CString("Delay_proto.x3d")}, 1);
field& field49 =  field();
field49.setName(CString("cycleInterval"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFTime"));
ExternProtoDeclare48.addChild(&field49);

field& field50 =  field();
field50.setName(CString("enabled"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFBool"));
ExternProtoDeclare48.addChild(&field50);

field& field51 =  field();
field51.setName(CString("startTime"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFTime"));
ExternProtoDeclare48.addChild(&field51);

field& field52 =  field();
field52.setName(CString("stopTime"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFTime"));
ExternProtoDeclare48.addChild(&field52);

field& field53 =  field();
field53.setName(CString("isActive"));
field53.setAccessType(CString("outputOnly"));
field53.setType(CString("SFBool"));
ExternProtoDeclare48.addChild(&field53);

field& field54 =  field();
field54.setName(CString("exitTime"));
field54.setAccessType(CString("outputOnly"));
field54.setType(CString("SFTime"));
ExternProtoDeclare48.addChild(&field54);

Scene8.addChild(&ExternProtoDeclare48);

ExternProtoDeclare& ExternProtoDeclare55 =  ExternProtoDeclare();
ExternProtoDeclare55.setName(CString("True"));
ExternProtoDeclare55.setUrl(new CString[]{CString("True_proto.x3d")}, 1);
field& field56 =  field();
field56.setName(CString("set_SFBool"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFBool"));
ExternProtoDeclare55.addChild(&field56);

field& field57 =  field();
field57.setName(CString("startTime"));
field57.setAccessType(CString("outputOnly"));
field57.setType(CString("SFTime"));
ExternProtoDeclare55.addChild(&field57);

Scene8.addChild(&ExternProtoDeclare55);

ExternProtoDeclare& ExternProtoDeclare58 =  ExternProtoDeclare();
ExternProtoDeclare58.setName(CString("ToggleAnim"));
ExternProtoDeclare58.setUrl(new CString[]{CString("ToggleAnim_proto.x3d")}, 1);
field& field59 =  field();
field59.setName(CString("direction"));
field59.setAccessType(CString("inputOutput"));
field59.setType(CString("SFBool"));
ExternProtoDeclare58.addChild(&field59);

field& field60 =  field();
field60.setName(CString("startTime"));
field60.setAccessType(CString("inputOnly"));
field60.setType(CString("SFTime"));
ExternProtoDeclare58.addChild(&field60);

field& field61 =  field();
field61.setName(CString("forward"));
field61.setAccessType(CString("inputOnly"));
field61.setType(CString("SFTime"));
ExternProtoDeclare58.addChild(&field61);

field& field62 =  field();
field62.setName(CString("back"));
field62.setAccessType(CString("inputOnly"));
field62.setType(CString("SFTime"));
ExternProtoDeclare58.addChild(&field62);

field& field63 =  field();
field63.setName(CString("state_changed"));
field63.setAccessType(CString("outputOnly"));
field63.setType(CString("SFBool"));
ExternProtoDeclare58.addChild(&field63);

field& field64 =  field();
field64.setName(CString("set_isActive"));
field64.setAccessType(CString("inputOnly"));
field64.setType(CString("SFBool"));
ExternProtoDeclare58.addChild(&field64);

field& field65 =  field();
field65.setName(CString("forwardTimer"));
field65.setAccessType(CString("initializeOnly"));
field65.setType(CString("SFNode"));
ExternProtoDeclare58.addChild(&field65);

field& field66 =  field();
field66.setName(CString("backTimer"));
field66.setAccessType(CString("initializeOnly"));
field66.setType(CString("SFNode"));
ExternProtoDeclare58.addChild(&field66);

Scene8.addChild(&ExternProtoDeclare58);

ExternProtoDeclare& ExternProtoDeclare67 =  ExternProtoDeclare();
ExternProtoDeclare67.setName(CString("AnimGate"));
ExternProtoDeclare67.setUrl(new CString[]{CString("AnimGate_proto.x3d")}, 1);
field& field68 =  field();
field68.setName(CString("offset"));
field68.setAccessType(CString("inputOutput"));
field68.setType(CString("SFBool"));
ExternProtoDeclare67.addChild(&field68);

field& field69 =  field();
field69.setName(CString("startTime"));
field69.setAccessType(CString("inputOutput"));
field69.setType(CString("SFTime"));
ExternProtoDeclare67.addChild(&field69);

field& field70 =  field();
field70.setName(CString("isActive"));
field70.setAccessType(CString("outputOnly"));
field70.setType(CString("SFBool"));
ExternProtoDeclare67.addChild(&field70);

field& field71 =  field();
field71.setName(CString("state"));
field71.setAccessType(CString("outputOnly"));
field71.setType(CString("SFBool"));
ExternProtoDeclare67.addChild(&field71);

field& field72 =  field();
field72.setName(CString("enterTime"));
field72.setAccessType(CString("outputOnly"));
field72.setType(CString("SFTime"));
ExternProtoDeclare67.addChild(&field72);

field& field73 =  field();
field73.setName(CString("exitTime"));
field73.setAccessType(CString("outputOnly"));
field73.setType(CString("SFTime"));
ExternProtoDeclare67.addChild(&field73);

field& field74 =  field();
field74.setName(CString("anim"));
field74.setAccessType(CString("inputOnly"));
field74.setType(CString("SFBool"));
ExternProtoDeclare67.addChild(&field74);

Scene8.addChild(&ExternProtoDeclare67);

ExternProtoDeclare& ExternProtoDeclare75 =  ExternProtoDeclare();
ExternProtoDeclare75.setName(CString("LoadVrmlFromURL"));
ExternProtoDeclare75.setUrl(new CString[]{CString("LoadVrmlFromURL_proto.x3d")}, 1);
field& field76 =  field();
field76.setName(CString("url"));
field76.setAccessType(CString("inputOutput"));
field76.setType(CString("MFString"));
ExternProtoDeclare75.addChild(&field76);

field& field77 =  field();
field77.setName(CString("parameter"));
field77.setAccessType(CString("inputOutput"));
field77.setType(CString("MFString"));
ExternProtoDeclare75.addChild(&field77);

field& field78 =  field();
field78.setName(CString("startTime"));
field78.setAccessType(CString("inputOnly"));
field78.setType(CString("SFTime"));
ExternProtoDeclare75.addChild(&field78);

field& field79 =  field();
field79.setName(CString("isActive"));
field79.setAccessType(CString("outputOnly"));
field79.setType(CString("SFBool"));
ExternProtoDeclare75.addChild(&field79);

field& field80 =  field();
field80.setName(CString("exitTime"));
field80.setAccessType(CString("outputOnly"));
field80.setType(CString("SFTime"));
ExternProtoDeclare75.addChild(&field80);

field& field81 =  field();
field81.setName(CString("children_changed"));
field81.setAccessType(CString("outputOnly"));
field81.setType(CString("MFNode"));
ExternProtoDeclare75.addChild(&field81);

Scene8.addChild(&ExternProtoDeclare75);

ExternProtoDeclare& ExternProtoDeclare82 =  ExternProtoDeclare();
ExternProtoDeclare82.setName(CString("Gate"));
ExternProtoDeclare82.setUrl(new CString[]{CString("Gate_proto.x3d")}, 1);
field& field83 =  field();
field83.setName(CString("offset"));
field83.setAccessType(CString("inputOutput"));
field83.setType(CString("SFBool"));
ExternProtoDeclare82.addChild(&field83);

field& field84 =  field();
field84.setName(CString("startTime"));
field84.setAccessType(CString("inputOutput"));
field84.setType(CString("SFTime"));
ExternProtoDeclare82.addChild(&field84);

field& field85 =  field();
field85.setName(CString("isActive"));
field85.setAccessType(CString("outputOnly"));
field85.setType(CString("SFBool"));
ExternProtoDeclare82.addChild(&field85);

field& field86 =  field();
field86.setName(CString("enterTime"));
field86.setAccessType(CString("outputOnly"));
field86.setType(CString("SFTime"));
ExternProtoDeclare82.addChild(&field86);

field& field87 =  field();
field87.setName(CString("exitTime"));
field87.setAccessType(CString("outputOnly"));
field87.setType(CString("SFTime"));
ExternProtoDeclare82.addChild(&field87);

Scene8.addChild(&ExternProtoDeclare82);

WorldInfo& WorldInfo88 =  WorldInfo();
WorldInfo88.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene8.addChild(&WorldInfo88);

TimeSensor& TimeSensor89 =  TimeSensor();
TimeSensor89.setDEF(CString("enterWorldTimeSensor"));
TimeSensor89.setLoop(True);
TimeSensor89.setStartTime(1);
Scene8.addChild(&TimeSensor89);

Script& Script90 =  Script();
Script90.setDEF(CString("enterWorldScript"));
field& field91 =  field();
field91.setName(CString("startTime"));
field91.setAccessType(CString("outputOnly"));
field91.setType(CString("SFTime"));
Script90.addChild(&field91);

field& field92 =  field();
field92.setName(CString("firstTime"));
field92.setAccessType(CString("outputOnly"));
field92.setType(CString("SFBool"));
Script90.addChild(&field92);

field& field93 =  field();
field93.setName(CString("triggerIn"));
field93.setAccessType(CString("inputOnly"));
field93.setType(CString("SFTime"));
Script90.addChild(&field93);


Script90.setSourceCode(CString("vrmlscript:function triggerIn(value, time) {")+
_T("         // fire off a single round                                     ")+
_T("         startTime = value;                                             ")+
_T("         firstTime = FALSE;                                             ")+
_T("       }"));
Scene8.addChild(&Script90);

Switch& Switch94 =  Switch();
Switch94.setDEF(CString("_1"));
Switch94.setWhichChoice(0);
Transform& Transform95 =  Transform();
Transform95.setDEF(CString("home"));
NavigationInfo& NavigationInfo96 =  NavigationInfo();
NavigationInfo96.setDEF(CString("_NoneNavInfo"));
NavigationInfo96.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo96.setAvatarSize(new float[]{0.1,1.6,0.75}, 3);
NavigationInfo96.setHeadlight(False);
NavigationInfo96.setTransitionType(new CString[]{CString("TELEPORT")}, 1);
Transform95.addChild(&NavigationInfo96);

Viewpoint& Viewpoint97 =  Viewpoint();
Viewpoint97.setDEF(CString("VP1"));
Viewpoint97.setPosition(new float[]{0,0,0});
Viewpoint97.setFieldOfView(1.2);
Transform95.addChild(&Viewpoint97);

Transform& Transform98 =  Transform();
Transform98.setDEF(CString("bg"));
Background& Background99 =  Background();
Background99.setDEF(CString("ictspace"));
Background99.setSkyColor(new float[]{1,0.992157,0.937255}, 3);
Transform98.addChild(&Background99);

Transform95.addChild(&Transform98);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("hud"));
Transform& Transform101 =  Transform();
Transform101.setDEF(CString("ProximitySensor"));
ProximitySensor& ProximitySensor102 =  ProximitySensor();
ProximitySensor102.setDEF(CString("_2"));
ProximitySensor102.setSize(new float[]{10000,10000,10000});
Transform101.addChild(&ProximitySensor102);

Transform100.addChild(&Transform101);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("HUD_1"));
Collision& Collision104 =  Collision();
Collision104.setEnabled(False);
Transform& Transform105 =  Transform();
Transform105.setDEF(CString("HUDObj_1"));
Viewpoint& Viewpoint106 =  Viewpoint();
Viewpoint106.setDEF(CString("HUDVP1"));
Viewpoint106.setPosition(new float[]{0,0,0});
Viewpoint106.setFieldOfView(0.9);
Transform105.addChild(&Viewpoint106);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("hudSwitch"));
Switch& Switch108 =  Switch();
Switch108.setDEF(CString("_3"));
Switch108.setWhichChoice(0);
Transform& Transform109 =  Transform();
Transform109.setDEF(CString("intro_1"));
Transform& Transform110 =  Transform();
Transform110.setDEF(CString("WorldVS_1"));
VisibilitySensor& VisibilitySensor111 =  VisibilitySensor();
VisibilitySensor111.setDEF(CString("_4"));
VisibilitySensor111.setSize(new float[]{1,1,1});
Transform110.addChild(&VisibilitySensor111);

Transform109.addChild(&Transform110);

Switch108.addChild(&Transform109);

Transform& Transform112 =  Transform();
Transform112.setDEF(CString("main_1"));
Transform& Transform113 =  Transform();
Transform113.setDEF(CString("links"));
Transform113.setTranslation(new float[]{0.0475474,0.0809899,-0.323283});
Transform113.setScale(new float[]{0.009,0.0176058,0.01});
Shape& Shape114 =  Shape();
Appearance& Appearance115 =  Appearance();
ImageTexture& ImageTexture116 =  ImageTexture();
ImageTexture116.setUrl(new CString[]{CString("links.png")}, 1);
Appearance115.addChild(&ImageTexture116);

Shape114.addChild(&Appearance115);

IndexedFaceSet& IndexedFaceSet117 =  IndexedFaceSet();
IndexedFaceSet117.setSolid(False);
IndexedFaceSet117.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate118 =  TextureCoordinate();
TextureCoordinate118.setDEF(CString("standartTC"));
TextureCoordinate118.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet117.setTexCoord(&TextureCoordinate118);

Coordinate& Coordinate119 =  Coordinate();
Coordinate119.setPoint(new float[]{-15.9375,-0.5,0,15.9375,-0.5,0,15.9375,0.5,0,-15.9375,0.5,0}, 12);
IndexedFaceSet117.setCoord(&Coordinate119);

Shape114.setGeometry(&IndexedFaceSet117);

Transform113.addChild(&Shape114);

Transform112.addChild(&Transform113);

Transform& Transform120 =  Transform();
Transform120.setDEF(CString("bogen_1"));
Transform& Transform121 =  Transform();
Transform121.setDEF(CString("Logo_1"));
Transform& Transform122 =  Transform();
Transform122.setDEF(CString("logo"));
Transform122.setTranslation(new float[]{0.0870504,0.129622,-0.319956});
Transform122.setScale(new float[]{0.0546357,0.0546356,0.0546344});
Shape& Shape123 =  Shape();
Appearance& Appearance124 =  Appearance();
ImageTexture& ImageTexture125 =  ImageTexture();
ImageTexture125.setUrl(new CString[]{CString("ictspacelogo.png")}, 1);
Appearance124.addChild(&ImageTexture125);

Shape123.addChild(&Appearance124);

IndexedFaceSet& IndexedFaceSet126 =  IndexedFaceSet();
IndexedFaceSet126.setSolid(False);
IndexedFaceSet126.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate127 =  TextureCoordinate();
TextureCoordinate127.setUSE(CString("standartTC"));
IndexedFaceSet126.setTexCoord(&TextureCoordinate127);

Coordinate& Coordinate128 =  Coordinate();
Coordinate128.setPoint(new float[]{-2,-0.5,0,2,-0.5,0,2,0.5,0,-2,0.5,0}, 12);
IndexedFaceSet126.setCoord(&Coordinate128);

Shape123.setGeometry(&IndexedFaceSet126);

Transform122.addChild(&Shape123);

Transform121.addChild(&Transform122);

Transform120.addChild(&Transform121);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("Links_1"));
Transform& Transform130 =  Transform();
Transform130.setDEF(CString("mainlinks"));
Transform130.setTranslation(new float[]{-0.132653,0.145043,-0.319956});
Transform130.setScale(new float[]{0.0140654,0.0140654,0.0140655});
Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
ImageTexture& ImageTexture133 =  ImageTexture();
ImageTexture133.setUrl(new CString[]{CString("mainlinks.png")}, 1);
Appearance132.addChild(&ImageTexture133);

Shape131.addChild(&Appearance132);

IndexedFaceSet& IndexedFaceSet134 =  IndexedFaceSet();
IndexedFaceSet134.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate135 =  TextureCoordinate();
TextureCoordinate135.setUSE(CString("standartTC"));
IndexedFaceSet134.setTexCoord(&TextureCoordinate135);

Coordinate& Coordinate136 =  Coordinate();
Coordinate136.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet134.setCoord(&Coordinate136);

Shape131.setGeometry(&IndexedFaceSet134);

Transform130.addChild(&Shape131);

Transform129.addChild(&Transform130);

Transform120.addChild(&Transform129);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("BogenBg_1"));
Transform& Transform138 =  Transform();
Transform138.setDEF(CString("bogenbg"));
Transform138.setTranslation(new float[]{0.000491872,0.110098,-0.320037});
Transform138.setScale(new float[]{0.100301,0.100301,0.100301});
Inline& Inline139 =  Inline();
Inline139.setUrl(new CString[]{CString("bogen.x3d")}, 1);
Inline139.setBboxSize(new float[]{5,1,0.1});
Transform138.addChild(&Inline139);

Transform137.addChild(&Transform138);

Transform120.addChild(&Transform137);

Transform112.addChild(&Transform120);

Transform& Transform140 =  Transform();
Transform140.setDEF(CString("buttons_1"));
Switch& Switch141 =  Switch();
Switch141.setDEF(CString("_5"));
Switch141.setWhichChoice(0);
Transform& Transform142 =  Transform();
Transform142.setDEF(CString("buttons_2"));
Transform142.setTranslation(new float[]{-0.0237496,0,0});
Transform& Transform143 =  Transform();
Transform143.setDEF(CString("btn_products"));
Transform143.setTranslation(new float[]{0.0144372,0,0});
TouchSensor& TouchSensor144 =  TouchSensor();
TouchSensor144.setDEF(CString("_6"));
Transform143.addChild(&TouchSensor144);

Transform& Transform145 =  Transform();
Transform145.setTranslation(new float[]{-0.0585385,0.0811492,-0.318633});
Transform145.setRotation(new float[]{1,0,0,1.5708});
Transform145.setScale(new float[]{2.49483,0.000999999,0.525184});
Shape& Shape146 =  Shape();
IndexedFaceSet& IndexedFaceSet147 =  IndexedFaceSet();
IndexedFaceSet147.setCcw(False);
IndexedFaceSet147.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet147.setCoord(&Coordinate148);

Shape146.setGeometry(&IndexedFaceSet147);

Transform145.addChild(&Shape146);

Transform143.addChild(&Transform145);

Transform142.addChild(&Transform143);

Transform& Transform149 =  Transform();
Transform149.setDEF(CString("btn_partner"));
Transform149.setTranslation(new float[]{0.0144372,0,0});
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDEF(CString("_7"));
Transform149.addChild(&TouchSensor150);

Transform& Transform151 =  Transform();
Transform151.setTranslation(new float[]{-0.00303705,0.0810343,-0.318633});
Transform151.setRotation(new float[]{1,0,0,1.5708});
Transform151.setScale(new float[]{2.32294,0.000999999,0.525184});
Shape& Shape152 =  Shape();
IndexedFaceSet& IndexedFaceSet153 =  IndexedFaceSet();
IndexedFaceSet153.setCcw(False);
IndexedFaceSet153.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate154 =  Coordinate();
Coordinate154.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet153.setCoord(&Coordinate154);

Shape152.setGeometry(&IndexedFaceSet153);

Transform151.addChild(&Shape152);

Transform149.addChild(&Transform151);

Transform142.addChild(&Transform149);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("btn_tour"));
Transform155.setTranslation(new float[]{0.0144372,0,0});
TouchSensor& TouchSensor156 =  TouchSensor();
TouchSensor156.setDEF(CString("_8"));
Transform155.addChild(&TouchSensor156);

Transform& Transform157 =  Transform();
Transform157.setTranslation(new float[]{0.0617583,0.0810343,-0.318633});
Transform157.setRotation(new float[]{1,0,0,1.5708});
Transform157.setScale(new float[]{3.13024,0.001,0.525184});
Shape& Shape158 =  Shape();
IndexedFaceSet& IndexedFaceSet159 =  IndexedFaceSet();
IndexedFaceSet159.setCcw(False);
IndexedFaceSet159.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate160 =  Coordinate();
Coordinate160.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet159.setCoord(&Coordinate160);

Shape158.setGeometry(&IndexedFaceSet159);

Transform157.addChild(&Shape158);

Transform155.addChild(&Transform157);

Transform142.addChild(&Transform155);

Transform& Transform161 =  Transform();
Transform161.setDEF(CString("btn_contact"));
Transform161.setTranslation(new float[]{0.0144372,0,0});
TouchSensor& TouchSensor162 =  TouchSensor();
TouchSensor162.setDEF(CString("_9"));
Transform161.addChild(&TouchSensor162);

Transform& Transform163 =  Transform();
Transform163.setTranslation(new float[]{0.126145,0.0814531,-0.318633});
Transform163.setRotation(new float[]{1,0,0,1.5708});
Transform163.setScale(new float[]{2.32294,0.001,0.525184});
Shape& Shape164 =  Shape();
IndexedFaceSet& IndexedFaceSet165 =  IndexedFaceSet();
IndexedFaceSet165.setCcw(False);
IndexedFaceSet165.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet165.setCoord(&Coordinate166);

Shape164.setGeometry(&IndexedFaceSet165);

Transform163.addChild(&Shape164);

Transform161.addChild(&Transform163);

Transform142.addChild(&Transform161);

Transform& Transform167 =  Transform();
Transform167.setDEF(CString("btn_press"));
Transform167.setTranslation(new float[]{0.0144372,0,0});
TouchSensor& TouchSensor168 =  TouchSensor();
TouchSensor168.setDEF(CString("_10"));
Transform167.addChild(&TouchSensor168);

Transform& Transform169 =  Transform();
Transform169.setTranslation(new float[]{0.177305,0.0814531,-0.318633});
Transform169.setRotation(new float[]{1,0,0,1.5708});
Transform169.setScale(new float[]{2.03881,0.000999999,0.525184});
Shape& Shape170 =  Shape();
IndexedFaceSet& IndexedFaceSet171 =  IndexedFaceSet();
IndexedFaceSet171.setCcw(False);
IndexedFaceSet171.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate172 =  Coordinate();
Coordinate172.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet171.setCoord(&Coordinate172);

Shape170.setGeometry(&IndexedFaceSet171);

Transform169.addChild(&Shape170);

Transform167.addChild(&Transform169);

Transform142.addChild(&Transform167);

Transform& Transform173 =  Transform();
Transform173.setDEF(CString("btn_start"));
Transform173.setTranslation(new float[]{0.0237496,0,0});
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDEF(CString("_11"));
Transform173.addChild(&TouchSensor174);

Transform& Transform175 =  Transform();
Transform175.setTranslation(new float[]{-0.177979,0.144998,-0.318633});
Transform175.setRotation(new float[]{1,0,0,1.5708});
Transform175.setScale(new float[]{1.26611,0.001,0.525184});
Shape& Shape176 =  Shape();
IndexedFaceSet& IndexedFaceSet177 =  IndexedFaceSet();
IndexedFaceSet177.setCcw(False);
IndexedFaceSet177.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate178 =  Coordinate();
Coordinate178.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet177.setCoord(&Coordinate178);

Shape176.setGeometry(&IndexedFaceSet177);

Transform175.addChild(&Shape176);

Transform173.addChild(&Transform175);

Transform142.addChild(&Transform173);

Transform& Transform179 =  Transform();
Transform179.setDEF(CString("vs_1"));
Transform179.setTranslation(new float[]{0.0237496,0,0});
VisibilitySensor& VisibilitySensor180 =  VisibilitySensor();
VisibilitySensor180.setDEF(CString("_12"));
VisibilitySensor180.setSize(new float[]{1,1,1});
Transform179.addChild(&VisibilitySensor180);

Transform142.addChild(&Transform179);

Switch141.addChild(&Transform142);

Transform& Transform181 =  Transform();
Transform181.setDEF(CString("off_1"));
Switch141.addChild(&Transform181);

Transform& Transform182 =  Transform();
Transform182.setDEF(CString("BoolSwitch_1"));
ProtoInstance& ProtoInstance183 =  ProtoInstance();
ProtoInstance183.setName(CString("BoolSwitch"));
ProtoInstance183.setDEF(CString("_13"));
Transform182.addChild(&ProtoInstance183);

Switch141.addChild(&Transform182);

Transform140.addChild(&Switch141);

Transform112.addChild(&Transform140);

Transform& Transform184 =  Transform();
Transform184.setDEF(CString("contact_1"));
Transform184.setTranslation(new float[]{0,0.243747,-0.00803587});
Transform184.setScale(new float[]{1.06353,1.06353,1.06352});
Transform184.setCenter(new float[]{0.13587,-0.00936141,-0.318623});
Group& Group185 =  Group();
Group& Group186 =  Group();
Group186.setDEF(CString("contactOn"));
TimeSensor& TimeSensor187 =  TimeSensor();
TimeSensor187.setDEF(CString("Time_1"));
TimeSensor187.setEnabled(False);
TimeSensor187.setCycleInterval(1.5);
TimeSensor187.setStartTime(974706513.503);
TimeSensor187.setStopTime(1);
Group186.addChild(&TimeSensor187);

Group185.addChild(&Group186);

PositionInterpolator& PositionInterpolator188 =  PositionInterpolator();
PositionInterpolator188.setDEF(CString("contactTranslationInterp_1"));
PositionInterpolator188.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1}, 15);
PositionInterpolator188.setKeyValue(new float[]{0,0.243747,-0.00803587,0,0.219119,-0.00803587,0,0.193375,-0.00803587,0,0.166994,-0.00803587,0,0.140453,-0.00803587,0,0.114231,-0.00803587,0,0.0888063,-0.00803587,0,0.0646566,-0.00803587,0,0.0422603,-0.00803587,0,0.0220957,-0.00803587,0,0.00464095,-0.00803587,0,-0.00656714,-0.00803587,0,-0.00532179,-0.00803587,0,0.000904921,-0.00803587,0,0.00464095,-0.00803587}, 45);
Group185.addChild(&PositionInterpolator188);

Transform184.addChild(&Group185);

Group& Group189 =  Group();
Group& Group190 =  Group();
Group190.setDEF(CString("contactOff"));
TimeSensor& TimeSensor191 =  TimeSensor();
TimeSensor191.setDEF(CString("Time_2"));
TimeSensor191.setStartTime(974706942.69);
TimeSensor191.setStopTime(1);
Group190.addChild(&TimeSensor191);

Group189.addChild(&Group190);

PositionInterpolator& PositionInterpolator192 =  PositionInterpolator();
PositionInterpolator192.setDEF(CString("contactTranslationInterp_2"));
PositionInterpolator192.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator192.setKeyValue(new float[]{0,0.00464095,-0.00803587,-0.00302758,0.00464095,-0.00803587,-0.00908275,0.00464095,-0.00803587,-0.0136241,0.00464095,-0.00803587,-0.0121103,0.00464095,-0.00803587,0,0.00464095,-0.00803587,0.0257345,0.00464095,-0.00803587,0.0620655,0.00464095,-0.00803587,0.104452,0.00464095,-0.00803587,0.148352,0.00464095,-0.00803587,0.189224,0.00464095,-0.00803587}, 33);
Group189.addChild(&PositionInterpolator192);

Transform184.addChild(&Group189);

Transform& Transform193 =  Transform();
Transform193.setDEF(CString("address"));
Transform193.setTranslation(new float[]{0.114059,-0.00936141,-0.318623});
Transform193.setScale(new float[]{0.129717,0.129717,0.129717});
Shape& Shape194 =  Shape();
Appearance& Appearance195 =  Appearance();
ImageTexture& ImageTexture196 =  ImageTexture();
ImageTexture196.setUrl(new CString[]{CString("contact.png")}, 1);
Appearance195.addChild(&ImageTexture196);

Shape194.addChild(&Appearance195);

IndexedFaceSet& IndexedFaceSet197 =  IndexedFaceSet();
IndexedFaceSet197.setSolid(False);
IndexedFaceSet197.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate198 =  TextureCoordinate();
TextureCoordinate198.setUSE(CString("standartTC"));
IndexedFaceSet197.setTexCoord(&TextureCoordinate198);

Coordinate& Coordinate199 =  Coordinate();
Coordinate199.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet197.setCoord(&Coordinate199);

Shape194.setGeometry(&IndexedFaceSet197);

Transform193.addChild(&Shape194);

Transform184.addChild(&Transform193);

Transform& Transform200 =  Transform();
Transform200.setDEF(CString("info-email"));
Transform200.setCenter(new float[]{0.104098,0.000912426,-0.315485});
Anchor& Anchor201 =  Anchor();
Anchor201.setUrl(new CString[]{CString("mailto:info@ictspace.com")}, 1);
Anchor201.setParameter(new CString[]{CString("")}, 0);
Transform& Transform202 =  Transform();
Transform202.setTranslation(new float[]{0.104098,-0.00965457,-0.315485});
Transform202.setRotation(new float[]{1,0,0,1.5708});
Transform202.setScale(new float[]{5.0919,0.001,0.614247});
Transform202.setCenter(new float[]{0,0.010567,0});
Shape& Shape203 =  Shape();
IndexedFaceSet& IndexedFaceSet204 =  IndexedFaceSet();
IndexedFaceSet204.setCcw(False);
IndexedFaceSet204.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet204.setCoord(&Coordinate205);

Shape203.setGeometry(&IndexedFaceSet204);

Transform202.addChild(&Shape203);

Anchor201.addChild(&Transform202);

Transform200.addChild(&Anchor201);

Transform184.addChild(&Transform200);

Transform112.addChild(&Transform184);

Transform& Transform206 =  Transform();
Transform206.setDEF(CString("btn_VS_Switch"));
Switch& Switch207 =  Switch();
Switch207.setDEF(CString("_14"));
Switch207.setWhichChoice(5);
Transform& Transform208 =  Transform();
Transform208.setDEF(CString("products_1"));
Transform& Transform209 =  Transform();
Transform209.setDEF(CString("vs_2"));
VisibilitySensor& VisibilitySensor210 =  VisibilitySensor();
VisibilitySensor210.setDEF(CString("_15"));
VisibilitySensor210.setSize(new float[]{1,1,1});
Transform209.addChild(&VisibilitySensor210);

Transform208.addChild(&Transform209);

Transform& Transform211 =  Transform();
Transform211.setDEF(CString("Int_1"));
ProtoInstance& ProtoInstance212 =  ProtoInstance();
ProtoInstance212.setName(CString("Int"));
ProtoInstance212.setDEF(CString("_16"));
Transform211.addChild(&ProtoInstance212);

Transform208.addChild(&Transform211);

Transform& Transform213 =  Transform();
Transform213.setDEF(CString("tx-products"));
Transform213.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform213.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
ImageTexture& ImageTexture216 =  ImageTexture();
ImageTexture216.setUrl(new CString[]{CString("tx-products.png")}, 1);
Appearance215.addChild(&ImageTexture216);

Shape214.addChild(&Appearance215);

IndexedFaceSet& IndexedFaceSet217 =  IndexedFaceSet();
IndexedFaceSet217.setSolid(False);
IndexedFaceSet217.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate218 =  TextureCoordinate();
TextureCoordinate218.setUSE(CString("standartTC"));
IndexedFaceSet217.setTexCoord(&TextureCoordinate218);

Coordinate& Coordinate219 =  Coordinate();
Coordinate219.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet217.setCoord(&Coordinate219);

Shape214.setGeometry(&IndexedFaceSet217);

Transform213.addChild(&Shape214);

Transform208.addChild(&Transform213);

Switch207.addChild(&Transform208);

Transform& Transform220 =  Transform();
Transform220.setDEF(CString("partners"));
Transform& Transform221 =  Transform();
Transform221.setDEF(CString("vs_3"));
VisibilitySensor& VisibilitySensor222 =  VisibilitySensor();
VisibilitySensor222.setDEF(CString("_17"));
VisibilitySensor222.setSize(new float[]{1,1,1});
Transform221.addChild(&VisibilitySensor222);

Transform220.addChild(&Transform221);

Transform& Transform223 =  Transform();
Transform223.setDEF(CString("Int_2"));
ProtoInstance& ProtoInstance224 =  ProtoInstance();
ProtoInstance224.setName(CString("Int"));
ProtoInstance224.setDEF(CString("_18"));
fieldValue& fieldValue225 =  fieldValue();
fieldValue225.setName(CString("keyValue"));
fieldValue225.setValue(CString("1"));
ProtoInstance224.addChild(&fieldValue225);

Transform223.addChild(&ProtoInstance224);

Transform220.addChild(&Transform223);

Transform& Transform226 =  Transform();
Transform226.setDEF(CString("tx-partners"));
Transform226.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform226.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape227 =  Shape();
Appearance& Appearance228 =  Appearance();
ImageTexture& ImageTexture229 =  ImageTexture();
ImageTexture229.setUrl(new CString[]{CString("tx-partners.png")}, 1);
Appearance228.addChild(&ImageTexture229);

Shape227.addChild(&Appearance228);

IndexedFaceSet& IndexedFaceSet230 =  IndexedFaceSet();
IndexedFaceSet230.setSolid(False);
IndexedFaceSet230.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate231 =  TextureCoordinate();
TextureCoordinate231.setUSE(CString("standartTC"));
IndexedFaceSet230.setTexCoord(&TextureCoordinate231);

Coordinate& Coordinate232 =  Coordinate();
Coordinate232.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet230.setCoord(&Coordinate232);

Shape227.setGeometry(&IndexedFaceSet230);

Transform226.addChild(&Shape227);

Transform220.addChild(&Transform226);

Switch207.addChild(&Transform220);

Transform& Transform233 =  Transform();
Transform233.setDEF(CString("tour_1"));
Transform& Transform234 =  Transform();
Transform234.setDEF(CString("Int_3"));
ProtoInstance& ProtoInstance235 =  ProtoInstance();
ProtoInstance235.setName(CString("Int"));
ProtoInstance235.setDEF(CString("_19"));
fieldValue& fieldValue236 =  fieldValue();
fieldValue236.setName(CString("keyValue"));
fieldValue236.setValue(CString("2"));
ProtoInstance235.addChild(&fieldValue236);

Transform234.addChild(&ProtoInstance235);

Transform233.addChild(&Transform234);

Transform& Transform237 =  Transform();
Transform237.setDEF(CString("vs_4"));
VisibilitySensor& VisibilitySensor238 =  VisibilitySensor();
VisibilitySensor238.setDEF(CString("_20"));
VisibilitySensor238.setSize(new float[]{1,1,1});
Transform237.addChild(&VisibilitySensor238);

Transform233.addChild(&Transform237);

Transform& Transform239 =  Transform();
Transform239.setDEF(CString("tx-tour"));
Transform239.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform239.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape240 =  Shape();
Appearance& Appearance241 =  Appearance();
ImageTexture& ImageTexture242 =  ImageTexture();
ImageTexture242.setUrl(new CString[]{CString("tx-tour.png")}, 1);
Appearance241.addChild(&ImageTexture242);

Shape240.addChild(&Appearance241);

IndexedFaceSet& IndexedFaceSet243 =  IndexedFaceSet();
IndexedFaceSet243.setSolid(False);
IndexedFaceSet243.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate244 =  TextureCoordinate();
TextureCoordinate244.setUSE(CString("standartTC"));
IndexedFaceSet243.setTexCoord(&TextureCoordinate244);

Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet243.setCoord(&Coordinate245);

Shape240.setGeometry(&IndexedFaceSet243);

Transform239.addChild(&Shape240);

Transform233.addChild(&Transform239);

Switch207.addChild(&Transform233);

Transform& Transform246 =  Transform();
Transform246.setDEF(CString("contact"));
Transform& Transform247 =  Transform();
Transform247.setDEF(CString("Int_4"));
ProtoInstance& ProtoInstance248 =  ProtoInstance();
ProtoInstance248.setName(CString("Int"));
ProtoInstance248.setDEF(CString("_21"));
fieldValue& fieldValue249 =  fieldValue();
fieldValue249.setName(CString("keyValue"));
fieldValue249.setValue(CString("3"));
ProtoInstance248.addChild(&fieldValue249);

Transform247.addChild(&ProtoInstance248);

Transform246.addChild(&Transform247);

Transform& Transform250 =  Transform();
Transform250.setDEF(CString("vs_5"));
VisibilitySensor& VisibilitySensor251 =  VisibilitySensor();
VisibilitySensor251.setDEF(CString("_22"));
VisibilitySensor251.setSize(new float[]{1,1,1});
Transform250.addChild(&VisibilitySensor251);

Transform246.addChild(&Transform250);

Transform& Transform252 =  Transform();
Transform252.setDEF(CString("tx-contact"));
Transform252.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform252.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape253 =  Shape();
Appearance& Appearance254 =  Appearance();
ImageTexture& ImageTexture255 =  ImageTexture();
ImageTexture255.setUrl(new CString[]{CString("tx-contact.png")}, 1);
Appearance254.addChild(&ImageTexture255);

Shape253.addChild(&Appearance254);

IndexedFaceSet& IndexedFaceSet256 =  IndexedFaceSet();
IndexedFaceSet256.setSolid(False);
IndexedFaceSet256.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate257 =  TextureCoordinate();
TextureCoordinate257.setUSE(CString("standartTC"));
IndexedFaceSet256.setTexCoord(&TextureCoordinate257);

Coordinate& Coordinate258 =  Coordinate();
Coordinate258.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet256.setCoord(&Coordinate258);

Shape253.setGeometry(&IndexedFaceSet256);

Transform252.addChild(&Shape253);

Transform246.addChild(&Transform252);

Transform& Transform259 =  Transform();
Transform259.setDEF(CString("else-email"));
Anchor& Anchor260 =  Anchor();
Anchor260.setUrl(new CString[]{CString("mailto:else@ictspace.com")}, 1);
Anchor260.setParameter(new CString[]{CString("")}, 0);
Transform& Transform261 =  Transform();
Transform261.setTranslation(new float[]{-0.0358914,-0.136748,-0.315496});
Transform261.setRotation(new float[]{1,0,0,1.5708});
Transform261.setScale(new float[]{3.2972,0.001,0.525183});
Shape& Shape262 =  Shape();
Appearance& Appearance263 =  Appearance();
Material& Material264 =  Material();
Material264.setAmbientIntensity(0);
Material264.setDiffuseColor(new float[]{0,0,0});
Material264.setEmissiveColor(new float[]{1,0.198091,0.138355});
Material264.setShininess(0);
Material264.setTransparency(0.574468);
Appearance263.addChild(&Material264);

Shape262.addChild(&Appearance263);

IndexedFaceSet& IndexedFaceSet265 =  IndexedFaceSet();
IndexedFaceSet265.setCcw(False);
IndexedFaceSet265.setCreaseAngle(0.5);
IndexedFaceSet265.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet265.setCoord(&Coordinate266);

Shape262.setGeometry(&IndexedFaceSet265);

Transform261.addChild(&Shape262);

Anchor260.addChild(&Transform261);

Transform259.addChild(&Anchor260);

Transform246.addChild(&Transform259);

Switch207.addChild(&Transform246);

Transform& Transform267 =  Transform();
Transform267.setDEF(CString("press"));
Transform& Transform268 =  Transform();
Transform268.setDEF(CString("Int_5"));
ProtoInstance& ProtoInstance269 =  ProtoInstance();
ProtoInstance269.setName(CString("Int"));
ProtoInstance269.setDEF(CString("_23"));
fieldValue& fieldValue270 =  fieldValue();
fieldValue270.setName(CString("keyValue"));
fieldValue270.setValue(CString("4"));
ProtoInstance269.addChild(&fieldValue270);

Transform268.addChild(&ProtoInstance269);

Transform267.addChild(&Transform268);

Transform& Transform271 =  Transform();
Transform271.setDEF(CString("vs_6"));
VisibilitySensor& VisibilitySensor272 =  VisibilitySensor();
VisibilitySensor272.setDEF(CString("_24"));
VisibilitySensor272.setSize(new float[]{1,1,1});
Transform271.addChild(&VisibilitySensor272);

Transform267.addChild(&Transform271);

Transform& Transform273 =  Transform();
Transform273.setDEF(CString("tx-press"));
Transform273.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform273.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape274 =  Shape();
Appearance& Appearance275 =  Appearance();
ImageTexture& ImageTexture276 =  ImageTexture();
ImageTexture276.setUrl(new CString[]{CString("tx-press.png")}, 1);
Appearance275.addChild(&ImageTexture276);

Shape274.addChild(&Appearance275);

IndexedFaceSet& IndexedFaceSet277 =  IndexedFaceSet();
IndexedFaceSet277.setSolid(False);
IndexedFaceSet277.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate278 =  TextureCoordinate();
TextureCoordinate278.setUSE(CString("standartTC"));
IndexedFaceSet277.setTexCoord(&TextureCoordinate278);

Coordinate& Coordinate279 =  Coordinate();
Coordinate279.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet277.setCoord(&Coordinate279);

Shape274.setGeometry(&IndexedFaceSet277);

Transform273.addChild(&Shape274);

Transform267.addChild(&Transform273);

Transform& Transform280 =  Transform();
Transform280.setDEF(CString("press-email"));
Anchor& Anchor281 =  Anchor();
Anchor281.setUrl(new CString[]{CString("mailto:press@ictspace.com")}, 1);
Anchor281.setParameter(new CString[]{CString("")}, 0);
Transform& Transform282 =  Transform();
Transform282.setTranslation(new float[]{0.0256334,-0.14803,-0.315486});
Transform282.setRotation(new float[]{1,0,0,1.5708});
Transform282.setScale(new float[]{3.77344,0.001,0.514131});
Transform282.setCenter(new float[]{0,0.010567,0});
Shape& Shape283 =  Shape();
Appearance& Appearance284 =  Appearance();
Material& Material285 =  Material();
Material285.setAmbientIntensity(0);
Material285.setDiffuseColor(new float[]{0,0,0});
Material285.setEmissiveColor(new float[]{1,0.198091,0.138355});
Material285.setShininess(0);
Material285.setTransparency(0.574468);
Appearance284.addChild(&Material285);

Shape283.addChild(&Appearance284);

IndexedFaceSet& IndexedFaceSet286 =  IndexedFaceSet();
IndexedFaceSet286.setCcw(False);
IndexedFaceSet286.setCreaseAngle(0.5);
IndexedFaceSet286.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet286.setCoord(&Coordinate287);

Shape283.setGeometry(&IndexedFaceSet286);

Transform282.addChild(&Shape283);

Anchor281.addChild(&Transform282);

Transform280.addChild(&Anchor281);

Transform267.addChild(&Transform280);

Switch207.addChild(&Transform267);

Transform& Transform288 =  Transform();
Transform288.setDEF(CString("off_2"));
Transform& Transform289 =  Transform();
Transform289.setDEF(CString("sprechblase"));
Transform& Transform290 =  Transform();
Transform290.setDEF(CString("tx-else"));
Transform290.setTranslation(new float[]{-0.0143146,-0.123688,-0.318623});
Transform290.setScale(new float[]{0.04,0.04,0.04});
Shape& Shape291 =  Shape();
Appearance& Appearance292 =  Appearance();
ImageTexture& ImageTexture293 =  ImageTexture();
ImageTexture293.setUrl(new CString[]{CString("tx-else.png")}, 1);
Appearance292.addChild(&ImageTexture293);

Shape291.addChild(&Appearance292);

IndexedFaceSet& IndexedFaceSet294 =  IndexedFaceSet();
IndexedFaceSet294.setSolid(False);
IndexedFaceSet294.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate295 =  TextureCoordinate();
TextureCoordinate295.setUSE(CString("standartTC"));
IndexedFaceSet294.setTexCoord(&TextureCoordinate295);

Coordinate& Coordinate296 =  Coordinate();
Coordinate296.setPoint(new float[]{-4,-0.5,0,4,-0.5,0,4,0.5,0,-4,0.5,0}, 12);
IndexedFaceSet294.setCoord(&Coordinate296);

Shape291.setGeometry(&IndexedFaceSet294);

Transform290.addChild(&Shape291);

Transform289.addChild(&Transform290);

Transform288.addChild(&Transform289);

Transform& Transform297 =  Transform();
Transform297.setDEF(CString("Int_6"));
ProtoInstance& ProtoInstance298 =  ProtoInstance();
ProtoInstance298.setName(CString("Int"));
ProtoInstance298.setDEF(CString("_25"));
fieldValue& fieldValue299 =  fieldValue();
fieldValue299.setName(CString("keyValue"));
fieldValue299.setValue(CString("5"));
ProtoInstance298.addChild(&fieldValue299);

Transform297.addChild(&ProtoInstance298);

Transform288.addChild(&Transform297);

Switch207.addChild(&Transform288);

Transform206.addChild(&Switch207);

Transform112.addChild(&Transform206);

Transform& Transform300 =  Transform();
Transform300.setDEF(CString("partnerlogos"));
Transform300.setTranslation(new float[]{0,0.281232,0});
Transform300.setCenter(new float[]{0.132599,-0.0107453,-0.326659});
Group& Group301 =  Group();
Group& Group302 =  Group();
Group302.setDEF(CString("partnersOn"));
TimeSensor& TimeSensor303 =  TimeSensor();
TimeSensor303.setDEF(CString("Time_3"));
TimeSensor303.setCycleInterval(1.5);
TimeSensor303.setStartTime(974696431.946);
TimeSensor303.setStopTime(1);
Group302.addChild(&TimeSensor303);

Group301.addChild(&Group302);

PositionInterpolator& PositionInterpolator304 =  PositionInterpolator();
PositionInterpolator304.setDEF(CString("partnerlogosTranslationInterp_1"));
PositionInterpolator304.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1}, 15);
PositionInterpolator304.setKeyValue(new float[]{0,0.281232,0,0,0.252265,0,0,0.221986,0,0,0.190957,0,0,0.15974,0,0,0.128898,0,0,0.0989937,0,0,0.0705892,0,0,0.0442472,0,0,0.0205299,0,0,0,0,0,-0.0131827,0,0,-0.011718,0,0,-0.00439425,0,0,0,0}, 45);
Group301.addChild(&PositionInterpolator304);

PositionInterpolator& PositionInterpolator305 =  PositionInterpolator();
PositionInterpolator305.setDEF(CString("vrzoneTranslationInterp"));
PositionInterpolator305.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator305.setKeyValue(new float[]{0,0.1006,0,0,0.0917694,0,0,0.0827213,0,0,0.0735283,0,0,0.0642627,0,0,0.0549972,0,0,0.0458042,0,0,0.0367561,0,0,0.0279255,0,0,0.0193848,0,0,0.0112065,0,0,0.00346305,0,0,-0.003773,0,0,-0.00638233,0,0,-0.003773,0}, 45);
Group301.addChild(&PositionInterpolator305);

PositionInterpolator& PositionInterpolator306 =  PositionInterpolator();
PositionInterpolator306.setDEF(CString("runpixTranslationInterp"));
PositionInterpolator306.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator306.setKeyValue(new float[]{0,0.0814713,0,0,0.0743054,0,0,0.066963,0,0,0.059503,0,0,0.0519842,0,0,0.0444653,0,0,0.0370053,0,0,0.029663,0,0,0.022497,0,0,0.0155664,0,0,0.00892982,0,0,0.00264617,0,0,-0.00322578,0,0,-0.00534321,0,0,-0.00322578,0}, 45);
Group301.addChild(&PositionInterpolator306);

PositionInterpolator& PositionInterpolator307 =  PositionInterpolator();
PositionInterpolator307.setDEF(CString("vrgardenTranslationInterp"));
PositionInterpolator307.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator307.setKeyValue(new float[]{0,0.0614131,0,0,0.0560971,0,0,0.0506502,0,0,0.0451161,0,0,0.0395383,0,0,0.0339605,0,0,0.0284263,0,0,0.0229794,0,0,0.0176634,0,0,0.012522,0,0,0.00759868,0,0,0.00293719,0,0,-0.00141887,0,0,-0.00298967,0,0,-0.00141887,0}, 45);
Group301.addChild(&PositionInterpolator307);

PositionInterpolator& PositionInterpolator308 =  PositionInterpolator();
PositionInterpolator308.setDEF(CString("noizeloopTranslationInterp"));
PositionInterpolator308.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator308.setKeyValue(new float[]{0,0.0368479,0,0,0.0337769,0,0,0.0306303,0,0,0.0274333,0,0,0.0242111,0,0,0.0209888,0,0,0.0177918,0,0,0.0146452,0,0,0.0115742,0,0,0.00860409,0,0,0.00575996,0,0,0.00306707,0,0,0.000550628,0,0,-0.000356804,0,0,0.000550628,0}, 45);
Group301.addChild(&PositionInterpolator308);

PositionInterpolator& PositionInterpolator309 =  PositionInterpolator();
PositionInterpolator309.setDEF(CString("cozzmoTranslationInterp"));
PositionInterpolator309.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator309.setKeyValue(new float[]{0,0.0327529,0,0,0.0301928,0,0,0.0275697,0,0,0.0249046,0,0,0.0222184,0,0,0.0195323,0,0,0.0168671,0,0,0.014244,0,0,0.0116839,0,0,0.00920792,0,0,0.00683696,0,0,0.00459208,0,0,0.00249429,0,0,0.00173782,0,0,0.00249429,0}, 45);
Group301.addChild(&PositionInterpolator309);

PositionInterpolator& PositionInterpolator310 =  PositionInterpolator();
PositionInterpolator310.setDEF(CString("kpnquestTranslationInterp"));
PositionInterpolator310.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.9,1}, 15);
PositionInterpolator310.setKeyValue(new float[]{0,0.0183293,0,0,0.0167554,0,0,0.0151428,0,0,0.0135044,0,0,0.011853,0,0,0.0102017,0,0,0.00856323,0,0,0.00695062,0,0,0.00537677,0,0,0.00385459,0,0,0.00239699,0,0,0.00101691,0,0,-0.000272743,0,0,-0.000737794,0,0,-0.000272743,0}, 45);
Group301.addChild(&PositionInterpolator310);

Transform300.addChild(&Group301);

Group& Group311 =  Group();
Group& Group312 =  Group();
Group312.setDEF(CString("partnersOff"));
TimeSensor& TimeSensor313 =  TimeSensor();
TimeSensor313.setDEF(CString("Time_4"));
TimeSensor313.setStartTime(974696437.05);
TimeSensor313.setStopTime(1);
Group312.addChild(&TimeSensor313);

Group311.addChild(&Group312);

PositionInterpolator& PositionInterpolator314 =  PositionInterpolator();
PositionInterpolator314.setDEF(CString("partnerlogosTranslationInterp_2"));
PositionInterpolator314.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator314.setKeyValue(new float[]{0,2.79397e-9,0,-0.00424392,2.79397e-9,0,-0.0127318,2.79397e-9,0,-0.0190976,2.79397e-9,0,-0.0169757,2.79397e-9,0,0,2.79397e-9,0,0.0360733,2.79397e-9,0,0.0870004,2.79397e-9,0,0.146415,2.79397e-9,0,0.207952,2.79397e-9,0,0.265245,2.79397e-9,0}, 33);
Group311.addChild(&PositionInterpolator314);

Transform300.addChild(&Group311);

Transform& Transform315 =  Transform();
Transform315.setDEF(CString("vrzone"));
Transform315.setTranslation(new float[]{0,0.1006,0});
Transform315.setCenter(new float[]{0.132599,0.0620392,-0.326659});
TouchSensor& TouchSensor316 =  TouchSensor();
TouchSensor316.setDEF(CString("_26"));
Transform315.addChild(&TouchSensor316);

Transform& Transform317 =  Transform();
Transform317.setDEF(CString("v"));
Transform317.setTranslation(new float[]{0.111763,0.0620392,-0.326659});
Transform317.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape318 =  Shape();
Appearance& Appearance319 =  Appearance();
ImageTexture& ImageTexture320 =  ImageTexture();
ImageTexture320.setUrl(new CString[]{CString("3dvrzone.gif")}, 1);
Appearance319.addChild(&ImageTexture320);

Shape318.addChild(&Appearance319);

IndexedFaceSet& IndexedFaceSet321 =  IndexedFaceSet();
IndexedFaceSet321.setSolid(False);
IndexedFaceSet321.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate322 =  TextureCoordinate();
TextureCoordinate322.setUSE(CString("standartTC"));
IndexedFaceSet321.setTexCoord(&TextureCoordinate322);

Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet321.setCoord(&Coordinate323);

Shape318.setGeometry(&IndexedFaceSet321);

Transform317.addChild(&Shape318);

Transform315.addChild(&Transform317);

Transform& Transform324 =  Transform();
Transform324.setDEF(CString("JavaScript"));
ProtoInstance& ProtoInstance325 =  ProtoInstance();
ProtoInstance325.setName(CString("JavaScript"));
ProtoInstance325.setDEF(CString("_27"));
fieldValue& fieldValue326 =  fieldValue();
fieldValue326.setName(CString("javascript"));
fieldValue326.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.3dvrzone.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance325.addChild(&fieldValue326);

Transform324.addChild(&ProtoInstance325);

Transform315.addChild(&Transform324);

Transform300.addChild(&Transform315);

Transform& Transform327 =  Transform();
Transform327.setDEF(CString("runpix"));
Transform327.setTranslation(new float[]{0,0.0814713,0});
Transform327.setCenter(new float[]{0.132599,0.0338049,-0.326659});
TouchSensor& TouchSensor328 =  TouchSensor();
TouchSensor328.setDEF(CString("_28"));
Transform327.addChild(&TouchSensor328);

Transform& Transform329 =  Transform();
Transform329.setDEF(CString("r"));
Transform329.setTranslation(new float[]{0.111763,0.0338049,-0.326659});
Transform329.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape330 =  Shape();
Appearance& Appearance331 =  Appearance();
ImageTexture& ImageTexture332 =  ImageTexture();
ImageTexture332.setUrl(new CString[]{CString("running_pixel.gif")}, 1);
Appearance331.addChild(&ImageTexture332);

Shape330.addChild(&Appearance331);

IndexedFaceSet& IndexedFaceSet333 =  IndexedFaceSet();
IndexedFaceSet333.setSolid(False);
IndexedFaceSet333.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate334 =  TextureCoordinate();
TextureCoordinate334.setUSE(CString("standartTC"));
IndexedFaceSet333.setTexCoord(&TextureCoordinate334);

Coordinate& Coordinate335 =  Coordinate();
Coordinate335.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet333.setCoord(&Coordinate335);

Shape330.setGeometry(&IndexedFaceSet333);

Transform329.addChild(&Shape330);

Transform327.addChild(&Transform329);

Transform& Transform336 =  Transform();
Transform336.setDEF(CString("OpenWindow_1"));
ProtoInstance& ProtoInstance337 =  ProtoInstance();
ProtoInstance337.setName(CString("JavaScript"));
ProtoInstance337.setDEF(CString("_29"));
fieldValue& fieldValue338 =  fieldValue();
fieldValue338.setName(CString("javascript"));
fieldValue338.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.running-pixels.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance337.addChild(&fieldValue338);

Transform336.addChild(&ProtoInstance337);

Transform327.addChild(&Transform336);

Transform300.addChild(&Transform327);

Transform& Transform339 =  Transform();
Transform339.setDEF(CString("vrgarden"));
Transform339.setTranslation(new float[]{0,0.0614131,0});
Transform339.setCenter(new float[]{0.132599,0.0049289,-0.326659});
TouchSensor& TouchSensor340 =  TouchSensor();
TouchSensor340.setDEF(CString("_30"));
Transform339.addChild(&TouchSensor340);

Transform& Transform341 =  Transform();
Transform341.setTranslation(new float[]{0.111763,0.0049289,-0.326659});
Transform341.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape342 =  Shape();
Appearance& Appearance343 =  Appearance();
ImageTexture& ImageTexture344 =  ImageTexture();
ImageTexture344.setUrl(new CString[]{CString("vrgarden.gif")}, 1);
Appearance343.addChild(&ImageTexture344);

Shape342.addChild(&Appearance343);

IndexedFaceSet& IndexedFaceSet345 =  IndexedFaceSet();
IndexedFaceSet345.setSolid(False);
IndexedFaceSet345.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate346 =  TextureCoordinate();
TextureCoordinate346.setUSE(CString("standartTC"));
IndexedFaceSet345.setTexCoord(&TextureCoordinate346);

Coordinate& Coordinate347 =  Coordinate();
Coordinate347.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet345.setCoord(&Coordinate347);

Shape342.setGeometry(&IndexedFaceSet345);

Transform341.addChild(&Shape342);

Transform339.addChild(&Transform341);

Transform& Transform348 =  Transform();
Transform348.setDEF(CString("OpenWindow_2"));
Transform348.setTranslation(new float[]{0,-0.342645,0});
ProtoInstance& ProtoInstance349 =  ProtoInstance();
ProtoInstance349.setName(CString("JavaScript"));
ProtoInstance349.setDEF(CString("_31"));
fieldValue& fieldValue350 =  fieldValue();
fieldValue350.setName(CString("javascript"));
fieldValue350.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.vr-garden.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance349.addChild(&fieldValue350);

Transform348.addChild(&ProtoInstance349);

Transform339.addChild(&Transform348);

Transform300.addChild(&Transform339);

Transform& Transform351 =  Transform();
Transform351.setDEF(CString("noizeloop"));
Transform351.setTranslation(new float[]{0,0.0368479,0});
Transform351.setCenter(new float[]{0.132599,-0.0241594,-0.326659});
TouchSensor& TouchSensor352 =  TouchSensor();
TouchSensor352.setDEF(CString("_32"));
Transform351.addChild(&TouchSensor352);

Transform& Transform353 =  Transform();
Transform353.setTranslation(new float[]{0.111763,-0.0241594,-0.326659});
Transform353.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape354 =  Shape();
Appearance& Appearance355 =  Appearance();
ImageTexture& ImageTexture356 =  ImageTexture();
ImageTexture356.setUrl(new CString[]{CString("noizeloop.gif")}, 1);
Appearance355.addChild(&ImageTexture356);

Shape354.addChild(&Appearance355);

IndexedFaceSet& IndexedFaceSet357 =  IndexedFaceSet();
IndexedFaceSet357.setSolid(False);
IndexedFaceSet357.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate358 =  TextureCoordinate();
TextureCoordinate358.setUSE(CString("standartTC"));
IndexedFaceSet357.setTexCoord(&TextureCoordinate358);

Coordinate& Coordinate359 =  Coordinate();
Coordinate359.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet357.setCoord(&Coordinate359);

Shape354.setGeometry(&IndexedFaceSet357);

Transform353.addChild(&Shape354);

Transform351.addChild(&Transform353);

Transform& Transform360 =  Transform();
Transform360.setDEF(CString("OpenWindow_3"));
ProtoInstance& ProtoInstance361 =  ProtoInstance();
ProtoInstance361.setName(CString("JavaScript"));
ProtoInstance361.setDEF(CString("_33"));
fieldValue& fieldValue362 =  fieldValue();
fieldValue362.setName(CString("javascript"));
fieldValue362.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.noizeloop.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance361.addChild(&fieldValue362);

Transform360.addChild(&ProtoInstance361);

Transform351.addChild(&Transform360);

Transform300.addChild(&Transform351);

Transform& Transform363 =  Transform();
Transform363.setDEF(CString("cozzmo"));
Transform363.setTranslation(new float[]{0,0.0327529,0});
Transform363.setCenter(new float[]{0.132599,-0.0534602,-0.326659});
TouchSensor& TouchSensor364 =  TouchSensor();
TouchSensor364.setDEF(CString("_34"));
Transform363.addChild(&TouchSensor364);

Transform& Transform365 =  Transform();
Transform365.setDEF(CString("c"));
Transform365.setTranslation(new float[]{0.111763,-0.0534602,-0.326659});
Transform365.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape366 =  Shape();
Appearance& Appearance367 =  Appearance();
ImageTexture& ImageTexture368 =  ImageTexture();
ImageTexture368.setUrl(new CString[]{CString("cozzmo.gif")}, 1);
Appearance367.addChild(&ImageTexture368);

Shape366.addChild(&Appearance367);

IndexedFaceSet& IndexedFaceSet369 =  IndexedFaceSet();
IndexedFaceSet369.setSolid(False);
IndexedFaceSet369.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate370 =  TextureCoordinate();
TextureCoordinate370.setUSE(CString("standartTC"));
IndexedFaceSet369.setTexCoord(&TextureCoordinate370);

Coordinate& Coordinate371 =  Coordinate();
Coordinate371.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet369.setCoord(&Coordinate371);

Shape366.setGeometry(&IndexedFaceSet369);

Transform365.addChild(&Shape366);

Transform363.addChild(&Transform365);

Transform& Transform372 =  Transform();
Transform372.setDEF(CString("OpenWindow_4"));
ProtoInstance& ProtoInstance373 =  ProtoInstance();
ProtoInstance373.setName(CString("JavaScript"));
ProtoInstance373.setDEF(CString("_35"));
fieldValue& fieldValue374 =  fieldValue();
fieldValue374.setName(CString("javascript"));
fieldValue374.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.cozzmo.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance373.addChild(&fieldValue374);

Transform372.addChild(&ProtoInstance373);

Transform363.addChild(&Transform372);

Transform300.addChild(&Transform363);

Transform& Transform375 =  Transform();
Transform375.setDEF(CString("kpnquest"));
Transform375.setTranslation(new float[]{0,0.0183293,0});
Transform375.setCenter(new float[]{0.132599,-0.0789655,-0.326659});
TouchSensor& TouchSensor376 =  TouchSensor();
TouchSensor376.setDEF(CString("_36"));
Transform375.addChild(&TouchSensor376);

Transform& Transform377 =  Transform();
Transform377.setTranslation(new float[]{0.111763,-0.0788067,-0.326659});
Transform377.setScale(new float[]{0.0256282,0.0256282,0.0256278});
Shape& Shape378 =  Shape();
Appearance& Appearance379 =  Appearance();
ImageTexture& ImageTexture380 =  ImageTexture();
ImageTexture380.setUrl(new CString[]{CString("kpnquest.gif")}, 1);
Appearance379.addChild(&ImageTexture380);

Shape378.addChild(&Appearance379);

IndexedFaceSet& IndexedFaceSet381 =  IndexedFaceSet();
IndexedFaceSet381.setSolid(False);
IndexedFaceSet381.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate382 =  TextureCoordinate();
TextureCoordinate382.setUSE(CString("standartTC"));
IndexedFaceSet381.setTexCoord(&TextureCoordinate382);

Coordinate& Coordinate383 =  Coordinate();
Coordinate383.setPoint(new float[]{-2.6771,-0.5,0,2.6771,-0.5,0,2.6771,0.5,0,-2.6771,0.5,0}, 12);
IndexedFaceSet381.setCoord(&Coordinate383);

Shape378.setGeometry(&IndexedFaceSet381);

Transform377.addChild(&Shape378);

Transform375.addChild(&Transform377);

Transform& Transform384 =  Transform();
Transform384.setDEF(CString("OpenWindow_5"));
ProtoInstance& ProtoInstance385 =  ProtoInstance();
ProtoInstance385.setName(CString("JavaScript"));
ProtoInstance385.setDEF(CString("_37"));
fieldValue& fieldValue386 =  fieldValue();
fieldValue386.setName(CString("javascript"));
fieldValue386.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"http://www.kpnqwest.com/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance385.addChild(&fieldValue386);

Transform384.addChild(&ProtoInstance385);

Transform375.addChild(&Transform384);

Transform300.addChild(&Transform375);

Transform112.addChild(&Transform300);

Transform& Transform387 =  Transform();
Transform387.setDEF(CString("WorldVS_2"));
VisibilitySensor& VisibilitySensor388 =  VisibilitySensor();
VisibilitySensor388.setDEF(CString("_38"));
VisibilitySensor388.setSize(new float[]{1,1,1});
Transform387.addChild(&VisibilitySensor388);

Transform112.addChild(&Transform387);

Switch108.addChild(&Transform112);

Transform& Transform389 =  Transform();
Transform389.setDEF(CString("tour_2"));
Transform& Transform390 =  Transform();
Transform390.setDEF(CString("bogen"));
Transform& Transform391 =  Transform();
Transform391.setDEF(CString("Logo"));
Transform& Transform392 =  Transform();
Transform392.setUSE(CString("logo"));
Transform391.addChild(&Transform392);

Transform390.addChild(&Transform391);

Transform& Transform393 =  Transform();
Transform393.setDEF(CString("Links"));
Transform& Transform394 =  Transform();
Transform394.setUSE(CString("mainlinks"));
Transform393.addChild(&Transform394);

Transform390.addChild(&Transform393);

Transform& Transform395 =  Transform();
Transform395.setDEF(CString("BogenBg"));
Transform& Transform396 =  Transform();
Transform396.setUSE(CString("bogenbg"));
Transform395.addChild(&Transform396);

Transform390.addChild(&Transform395);

Transform389.addChild(&Transform390);

Transform& Transform397 =  Transform();
Transform397.setDEF(CString("buttons"));
Switch& Switch398 =  Switch();
Switch398.setDEF(CString("_39"));
Switch398.setWhichChoice(0);
Transform& Transform399 =  Transform();
Transform399.setDEF(CString("on_1"));
Transform& Transform400 =  Transform();
Transform400.setDEF(CString("Start"));
TouchSensor& TouchSensor401 =  TouchSensor();
TouchSensor401.setDEF(CString("_40"));
Transform400.addChild(&TouchSensor401);

Transform& Transform402 =  Transform();
Transform402.setTranslation(new float[]{-0.17925,0.144998,-0.318633});
Transform402.setRotation(new float[]{1,0,0,1.5708});
Transform402.setScale(new float[]{1.26611,0.001,0.525184});
Shape& Shape403 =  Shape();
Appearance& Appearance404 =  Appearance();
Material& Material405 =  Material();
Material405.setAmbientIntensity(0);
Material405.setDiffuseColor(new float[]{0,0,0});
Material405.setEmissiveColor(new float[]{1,0.198091,0.138355});
Material405.setShininess(0);
Material405.setTransparency(0.574468);
Appearance404.addChild(&Material405);

Shape403.addChild(&Appearance404);

IndexedFaceSet& IndexedFaceSet406 =  IndexedFaceSet();
IndexedFaceSet406.setCcw(False);
IndexedFaceSet406.setCreaseAngle(0.5);
IndexedFaceSet406.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate407 =  Coordinate();
Coordinate407.setPoint(new float[]{-0.0105672,0.010567,-0.0105672,-0.0105672,0.010567,0.0105672,0.0105672,0.010567,0.0105672,0.0105672,0.010567,-0.0105672}, 12);
IndexedFaceSet406.setCoord(&Coordinate407);

Shape403.setGeometry(&IndexedFaceSet406);

Transform402.addChild(&Shape403);

Transform400.addChild(&Transform402);

Transform399.addChild(&Transform400);

Switch398.addChild(&Transform399);

Transform& Transform408 =  Transform();
Switch398.addChild(&Transform408);

Transform& Transform409 =  Transform();
Transform409.setDEF(CString("BoolSwitch_2"));
ProtoInstance& ProtoInstance410 =  ProtoInstance();
ProtoInstance410.setName(CString("BoolSwitch"));
ProtoInstance410.setDEF(CString("_41"));
Transform409.addChild(&ProtoInstance410);

Switch398.addChild(&Transform409);

Transform397.addChild(&Switch398);

Transform389.addChild(&Transform397);

Transform& Transform411 =  Transform();
Transform411.setDEF(CString("arrows_1"));
Transform& Transform412 =  Transform();
Transform412.setDEF(CString("prev_1"));
TouchSensor& TouchSensor413 =  TouchSensor();
TouchSensor413.setDEF(CString("_42"));
Transform412.addChild(&TouchSensor413);

Transform& Transform414 =  Transform();
Transform414.setDEF(CString("anim_1"));
Transform414.setTranslation(new float[]{-0.190719,-0.445116,-0.320257});
Transform414.setRotation(new float[]{0,0,1,3.14159});
Transform414.setScale(new float[]{0.113542,0.113541,0.113542});
Transform414.setCenter(new float[]{-0.229076,0.316017,-0.00255765});
Group& Group415 =  Group();
Group& Group416 =  Group();
Group416.setDEF(CString("arrowin"));
TimeSensor& TimeSensor417 =  TimeSensor();
TimeSensor417.setDEF(CString("Time_5"));
TimeSensor417.setEnabled(False);
TimeSensor417.setStopTime(1);
Group416.addChild(&TimeSensor417);

Group415.addChild(&Group416);

PositionInterpolator& PositionInterpolator418 =  PositionInterpolator();
PositionInterpolator418.setDEF(CString("animTranslationInterp_1"));
PositionInterpolator418.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator418.setKeyValue(new float[]{-0.190719,-0.445116,-0.320257,-0.176411,-0.454811,-0.343095,-0.162102,-0.464506,-0.365933,-0.147794,-0.4742,-0.388772,-0.133486,-0.483895,-0.41161,-0.119178,-0.49359,-0.434448,-0.104869,-0.503285,-0.457286,-0.090561,-0.51298,-0.480124,-0.0762527,-0.522674,-0.502963,-0.0619444,-0.532369,-0.525801,-0.0476361,-0.542064,-0.548639}, 33);
Group415.addChild(&PositionInterpolator418);

Transform414.addChild(&Group415);

Transform& Transform419 =  Transform();
Transform419.setDEF(CString("arrow-clone"));
Transform419.setCenter(new float[]{-0.229076,0.316017,-0.00255765});
Transform& Transform420 =  Transform();
Transform420.setCenter(new float[]{0,0.316017,-0.00255765});
Transform& Transform421 =  Transform();
Transform421.setDEF(CString("_43"));
Transform421.setTranslation(new float[]{0,0.316017,0.0111511});
Transform421.setScale(new float[]{1,1,0.18657});
Transform421.setCenter(new float[]{0,0,-0.0137088});
Shape& Shape422 =  Shape();
Appearance& Appearance423 =  Appearance();
Material& Material424 =  Material();
Material424.setAmbientIntensity(0.653913);
Material424.setDiffuseColor(new float[]{0,0.225255,0.244681});
Material424.setSpecularColor(new float[]{0.359185,1,0.985078});
Material424.setShininess(0.148936);
Appearance423.addChild(&Material424);

Shape422.addChild(&Appearance423);

IndexedFaceSet& IndexedFaceSet425 =  IndexedFaceSet();
IndexedFaceSet425.setCoordIndex(new int32_t[]{2,0,4,5,-1,4,1,3,5,-1,7,6,8,-1,0,2,3,1,-1,5,3,2,-1,6,7,4,0,-1,8,6,0,1,-1,7,8,1,4,-1}, 38);
Coordinate& Coordinate426 =  Coordinate();
Coordinate426.setPoint(new float[]{-0.116667,0.116667,0,-0.116667,-0.116667,0,-0.116667,0.116667,-0.116667,-0.116667,-0.116667,-0.116667,0.116667,0,0,0.116667,0,-0.116667,-0.108933,0.102479,0.0892494,0.09533,0.000347482,0.0892494,-0.108933,-0.101784,0.0892494}, 27);
IndexedFaceSet425.setCoord(&Coordinate426);

Shape422.setGeometry(&IndexedFaceSet425);

Transform421.addChild(&Shape422);

Transform420.addChild(&Transform421);

Transform419.addChild(&Transform420);

Transform& Transform427 =  Transform();
Transform427.setCenter(new float[]{-0.231315,0.316017,-0.00255765});
Transform& Transform428 =  Transform();
Transform428.setTranslation(new float[]{-0.231315,2.38419e-7,0});
Transform428.setCenter(new float[]{0,0.316017,-0.00255765});
Transform& Transform429 =  Transform();
Transform429.setCenter(new float[]{0,0.316017,-0.00255765});
Transform& Transform430 =  Transform();
Transform430.setUSE(CString("_43"));
Transform429.addChild(&Transform430);

Transform428.addChild(&Transform429);

Transform427.addChild(&Transform428);

Transform419.addChild(&Transform427);

Transform& Transform431 =  Transform();
Transform431.setTranslation(new float[]{-0.458152,2.38419e-7,0});
Transform& Transform432 =  Transform();
Transform432.setUSE(CString("_43"));
Transform431.addChild(&Transform432);

Transform419.addChild(&Transform431);

Transform414.addChild(&Transform419);

Transform412.addChild(&Transform414);

Transform411.addChild(&Transform412);

Transform& Transform433 =  Transform();
Transform433.setDEF(CString("next_1"));
TouchSensor& TouchSensor434 =  TouchSensor();
TouchSensor434.setDEF(CString("_44"));
Transform433.addChild(&TouchSensor434);

Transform& Transform435 =  Transform();
Transform435.setDEF(CString("anim_2"));
Transform435.setTranslation(new float[]{0.648843,-0.445116,-0.320257});
Transform435.setScale(new float[]{0.113542,0.113542,0.113542});
Transform435.setCenter(new float[]{-0.229076,0.316017,-0.00255765});
Group& Group436 =  Group();
Group& Group437 =  Group();
Group437.setUSE(CString("arrowin"));
Group436.addChild(&Group437);

PositionInterpolator& PositionInterpolator438 =  PositionInterpolator();
PositionInterpolator438.setDEF(CString("animTranslationInterp_2"));
PositionInterpolator438.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator438.setKeyValue(new float[]{0.648843,-0.445116,-0.320257,0.634081,-0.454811,-0.343095,0.61932,-0.464506,-0.365933,0.604558,-0.474201,-0.388771,0.589797,-0.483896,-0.411609,0.575035,-0.493591,-0.434447,0.560273,-0.503285,-0.457286,0.545512,-0.51298,-0.480124,0.53075,-0.522675,-0.502962,0.515989,-0.53237,-0.5258,0.501227,-0.542065,-0.548638}, 33);
Group436.addChild(&PositionInterpolator438);

Transform435.addChild(&Group436);

Transform& Transform439 =  Transform();
Transform439.setUSE(CString("arrow-clone"));
Transform435.addChild(&Transform439);

Transform433.addChild(&Transform435);

Transform411.addChild(&Transform433);

Transform& Transform440 =  Transform();
Transform440.setDEF(CString("BackTimer"));
TimeSensor& TimeSensor441 =  TimeSensor();
TimeSensor441.setDEF(CString("_45"));
Transform440.addChild(&TimeSensor441);

ScalarInterpolator& ScalarInterpolator442 =  ScalarInterpolator();
ScalarInterpolator442.setDEF(CString("_46"));
ScalarInterpolator442.setKey(new float[]{0,1}, 2);
ScalarInterpolator442.setKeyValue(new float[]{1,0}, 2);
Transform440.addChild(&ScalarInterpolator442);

Transform411.addChild(&Transform440);

Transform& Transform443 =  Transform();
Transform443.setDEF(CString("NoTouch_1"));
ProtoInstance& ProtoInstance444 =  ProtoInstance();
ProtoInstance444.setName(CString("Not"));
ProtoInstance444.setDEF(CString("_47"));
Transform443.addChild(&ProtoInstance444);

Transform411.addChild(&Transform443);

Transform389.addChild(&Transform411);

Transform& Transform445 =  Transform();
Transform445.setDEF(CString("WorldVS"));
VisibilitySensor& VisibilitySensor446 =  VisibilitySensor();
VisibilitySensor446.setDEF(CString("_48"));
VisibilitySensor446.setSize(new float[]{10,10,10});
Transform445.addChild(&VisibilitySensor446);

Transform389.addChild(&Transform445);

PointLight& PointLight447 =  PointLight();
PointLight447.setDEF(CString("Light3"));
PointLight447.setOn(False);
PointLight447.setLocation(new float[]{0,-0.183173,-0.367193});
Transform389.addChild(&PointLight447);

Transform& Transform448 =  Transform();
Transform448.setDEF(CString("Float"));
ProtoInstance& ProtoInstance449 =  ProtoInstance();
ProtoInstance449.setName(CString("Float"));
ProtoInstance449.setDEF(CString("_49"));
Transform448.addChild(&ProtoInstance449);

Transform389.addChild(&Transform448);

Transform& Transform450 =  Transform();
Transform450.setDEF(CString("Bool"));
ProtoInstance& ProtoInstance451 =  ProtoInstance();
ProtoInstance451.setName(CString("Bool"));
ProtoInstance451.setDEF(CString("_50"));
Transform450.addChild(&ProtoInstance451);

Transform389.addChild(&Transform450);

Transform& Transform452 =  Transform();
Transform452.setDEF(CString("isActiveVS"));
Switch& Switch453 =  Switch();
Switch453.setDEF(CString("_51"));
Switch453.setWhichChoice(0);
Transform& Transform454 =  Transform();
Transform454.setDEF(CString("customer"));
Transform& Transform455 =  Transform();
Transform455.setDEF(CString("vs_7"));
VisibilitySensor& VisibilitySensor456 =  VisibilitySensor();
VisibilitySensor456.setSize(new float[]{1,1,1});
Transform455.addChild(&VisibilitySensor456);

Transform454.addChild(&Transform455);

Transform& Transform457 =  Transform();
Transform457.setTranslation(new float[]{0.18788,0.0920431,-0.319956});
Transform457.setScale(new float[]{0.00273303,0.00273303,0.00273304});
Shape& Shape458 =  Shape();
Appearance& Appearance459 =  Appearance();
Material& Material460 =  Material();
Appearance459.addChild(&Material460);

Shape458.addChild(&Appearance459);

Text& Text461 =  Text();
Text461.setString(new CString[]{CString("Customer")}, 1);
Text461.setLength(new float[]{0}, 1);
CFontStyle& FontStyle462 =  CFontStyle();
FontStyle462.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle462.setSize(6);
FontStyle462.setJustify(new CString[]{CString("END")}, 1);
Text461.setFontStyle(&FontStyle462);

Shape458.setGeometry(&Text461);

Transform457.addChild(&Shape458);

Transform454.addChild(&Transform457);

Switch453.addChild(&Transform454);

Transform& Transform463 =  Transform();
Transform463.setDEF(CString("games"));
Transform& Transform464 =  Transform();
Transform464.setDEF(CString("vs_8"));
VisibilitySensor& VisibilitySensor465 =  VisibilitySensor();
VisibilitySensor465.setSize(new float[]{1,1,1});
Transform464.addChild(&VisibilitySensor465);

Transform463.addChild(&Transform464);

Transform& Transform466 =  Transform();
Transform466.setTranslation(new float[]{0.188454,0.0920431,-0.319956});
Transform466.setScale(new float[]{0.00273303,0.00273303,0.00273304});
Shape& Shape467 =  Shape();
Appearance& Appearance468 =  Appearance();
Material& Material469 =  Material();
Appearance468.addChild(&Material469);

Shape467.addChild(&Appearance468);

Text& Text470 =  Text();
Text470.setString(new CString[]{CString("Games")}, 1);
Text470.setLength(new float[]{0}, 1);
CFontStyle& FontStyle471 =  CFontStyle();
FontStyle471.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle471.setSize(6);
FontStyle471.setJustify(new CString[]{CString("END")}, 1);
Text470.setFontStyle(&FontStyle471);

Shape467.setGeometry(&Text470);

Transform466.addChild(&Shape467);

Transform463.addChild(&Transform466);

Switch453.addChild(&Transform463);

Transform& Transform472 =  Transform();
Transform472.setDEF(CString("Switcher_1"));
ProtoInstance& ProtoInstance473 =  ProtoInstance();
ProtoInstance473.setName(CString("Switcher"));
ProtoInstance473.setDEF(CString("_52"));
Transform472.addChild(&ProtoInstance473);

Switch453.addChild(&Transform472);

Transform452.addChild(&Switch453);

Transform389.addChild(&Transform452);

Transform& Transform474 =  Transform();
Transform474.setDEF(CString("Int_7"));
ProtoInstance& ProtoInstance475 =  ProtoInstance();
ProtoInstance475.setName(CString("Int"));
ProtoInstance475.setDEF(CString("_53"));
Transform474.addChild(&ProtoInstance475);

Transform389.addChild(&Transform474);

Transform& Transform476 =  Transform();
Transform476.setDEF(CString("Float1"));
ProtoInstance& ProtoInstance477 =  ProtoInstance();
ProtoInstance477.setName(CString("Float"));
ProtoInstance477.setDEF(CString("_54"));
fieldValue& fieldValue478 =  fieldValue();
fieldValue478.setName(CString("keyValue"));
fieldValue478.setValue(CString("1"));
ProtoInstance477.addChild(&fieldValue478);

Transform476.addChild(&ProtoInstance477);

Transform389.addChild(&Transform476);

Switch108.addChild(&Transform389);

Transform& Transform479 =  Transform();
Transform479.setDEF(CString("entertainment_1"));
Switch108.addChild(&Transform479);

Transform& Transform480 =  Transform();
Transform480.setDEF(CString("logicTalk_1"));
Switch108.addChild(&Transform480);

Transform& Transform481 =  Transform();
Transform481.setDEF(CString("exit_1"));
Switch108.addChild(&Transform481);

Transform107.addChild(&Switch108);

Transform105.addChild(&Transform107);

Transform& Transform482 =  Transform();
Transform482.setDEF(CString("fadeSwitch"));
Switch& Switch483 =  Switch();
Switch483.setDEF(CString("_55"));
Switch483.setWhichChoice(0);
Transform& Transform484 =  Transform();
Transform484.setDEF(CString("off_3"));
Switch483.addChild(&Transform484);

Transform& Transform485 =  Transform();
Transform485.setDEF(CString("fade"));
Transform& Transform486 =  Transform();
Transform486.setDEF(CString("fade_1"));
Transform486.setTranslation(new float[]{0,0,-0.3});
Transform486.setScale(new float[]{5.39505,5.39505,5.3947});
Group& Group487 =  Group();
Group& Group488 =  Group();
Group488.setDEF(CString("fadeOut"));
TimeSensor& TimeSensor489 =  TimeSensor();
TimeSensor489.setDEF(CString("Time_6"));
TimeSensor489.setCycleInterval(2);
TimeSensor489.setStopTime(1);
Group488.addChild(&TimeSensor489);

Group487.addChild(&Group488);

ScalarInterpolator& ScalarInterpolator490 =  ScalarInterpolator();
ScalarInterpolator490.setDEF(CString("fadeTransparencyInterp"));
ScalarInterpolator490.setKey(new float[]{0,0.333333,1}, 3);
ScalarInterpolator490.setKeyValue(new float[]{0,0,1}, 3);
Group487.addChild(&ScalarInterpolator490);

Transform486.addChild(&Group487);

Shape& Shape491 =  Shape();
Appearance& Appearance492 =  Appearance();
Material& Material493 =  Material();
Material493.setDEF(CString("_56"));
Material493.setAmbientIntensity(0);
Material493.setDiffuseColor(new float[]{0,0,0});
Material493.setEmissiveColor(new float[]{1,0.992157,0.937255});
Material493.setShininess(0);
Material493.setTransparency(0.234043);
Appearance492.addChild(&Material493);

Shape491.addChild(&Appearance492);

IndexedFaceSet& IndexedFaceSet494 =  IndexedFaceSet();
IndexedFaceSet494.setCreaseAngle(0.5);
IndexedFaceSet494.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate495 =  Coordinate();
Coordinate495.setPoint(new float[]{-0.383129,0.383129,0,-0.383129,-0.383129,0,0.383129,-0.383129,0,0.383129,0.383129,0}, 12);
IndexedFaceSet494.setCoord(&Coordinate495);

Shape491.setGeometry(&IndexedFaceSet494);

Transform486.addChild(&Shape491);

Transform485.addChild(&Transform486);

Transform& Transform496 =  Transform();
Transform496.setDEF(CString("TourEndeTimer"));
TimeSensor& TimeSensor497 =  TimeSensor();
TimeSensor497.setDEF(CString("_57"));
Transform496.addChild(&TimeSensor497);

ScalarInterpolator& ScalarInterpolator498 =  ScalarInterpolator();
ScalarInterpolator498.setDEF(CString("_58"));
ScalarInterpolator498.setKey(new float[]{0,1}, 2);
ScalarInterpolator498.setKeyValue(new float[]{1,0}, 2);
Transform496.addChild(&ScalarInterpolator498);

Transform& Transform499 =  Transform();
Transform499.setDEF(CString("False_1"));
ProtoInstance& ProtoInstance500 =  ProtoInstance();
ProtoInstance500.setName(CString("False"));
ProtoInstance500.setDEF(CString("_59"));
Transform499.addChild(&ProtoInstance500);

Transform496.addChild(&Transform499);

Transform485.addChild(&Transform496);

Transform& Transform501 =  Transform();
Transform501.setDEF(CString("Or"));
ProtoInstance& ProtoInstance502 =  ProtoInstance();
ProtoInstance502.setName(CString("Or"));
ProtoInstance502.setDEF(CString("_60"));
Transform501.addChild(&ProtoInstance502);

Transform485.addChild(&Transform501);

Transform& Transform503 =  Transform();
Transform503.setDEF(CString("False_2"));
ProtoInstance& ProtoInstance504 =  ProtoInstance();
ProtoInstance504.setName(CString("False"));
ProtoInstance504.setDEF(CString("_61"));
Transform503.addChild(&ProtoInstance504);

Transform485.addChild(&Transform503);

Switch483.addChild(&Transform485);

Transform& Transform505 =  Transform();
Transform505.setDEF(CString("BoolSwitch_3"));
ProtoInstance& ProtoInstance506 =  ProtoInstance();
ProtoInstance506.setName(CString("BoolSwitch"));
ProtoInstance506.setDEF(CString("_62"));
Transform505.addChild(&ProtoInstance506);

Switch483.addChild(&Transform505);

Transform& Transform507 =  Transform();
Transform507.setDEF(CString("TranslationHome"));
ProtoInstance& ProtoInstance508 =  ProtoInstance();
ProtoInstance508.setName(CString("Translation"));
ProtoInstance508.setDEF(CString("_63"));
fieldValue& fieldValue509 =  fieldValue();
fieldValue509.setName(CString("translation"));
fieldValue509.setValue(CString("0 0 -0.3"));
ProtoInstance508.addChild(&fieldValue509);

Transform507.addChild(&ProtoInstance508);

Switch483.addChild(&Transform507);

Transform& Transform510 =  Transform();
Transform510.setDEF(CString("TranslationTour"));
ProtoInstance& ProtoInstance511 =  ProtoInstance();
ProtoInstance511.setName(CString("Translation"));
ProtoInstance511.setDEF(CString("_64"));
fieldValue& fieldValue512 =  fieldValue();
fieldValue512.setName(CString("translation"));
fieldValue512.setValue(CString("0 0 -0.320859"));
ProtoInstance511.addChild(&fieldValue512);

Transform510.addChild(&ProtoInstance511);

Switch483.addChild(&Transform510);

Transform482.addChild(&Switch483);

Transform105.addChild(&Transform482);

Transform& Transform513 =  Transform();
Transform513.setDEF(CString("tv-save"));
Shape& Shape514 =  Shape();
Appearance& Appearance515 =  Appearance();
Material& Material516 =  Material();
Material516.setAmbientIntensity(0);
Material516.setDiffuseColor(new float[]{0,0,0});
Material516.setEmissiveColor(new float[]{1,0.992157,0.937255});
Material516.setShininess(0);
Appearance515.addChild(&Material516);

Shape514.addChild(&Appearance515);

IndexedFaceSet& IndexedFaceSet517 =  IndexedFaceSet();
IndexedFaceSet517.setSolid(False);
IndexedFaceSet517.setCoordIndex(new int32_t[]{7,0,3,5,-1,1,6,4,2,-1}, 10);
Coordinate& Coordinate518 =  Coordinate();
Coordinate518.setPoint(new float[]{-1.31881,0.247757,-0.318437,1.31411,0.201625,-0.318437,1.31416,-0.193801,-0.318437,-1.32207,-0.236228,-0.318437,0.22166,-0.193513,-0.318437,-0.223839,-0.243562,-0.318437,0.222163,0.200806,-0.318437,-0.221137,0.241529,-0.318437}, 24);
IndexedFaceSet517.setCoord(&Coordinate518);

Shape514.setGeometry(&IndexedFaceSet517);

Transform513.addChild(&Shape514);

Transform105.addChild(&Transform513);

Transform& Transform519 =  Transform();
Transform519.setDEF(CString("EnterWorld"));
Script& Script520 =  Script();
Script520.setDEF(CString("_enterWorldScript"));
field& field521 =  field();
field521.setName(CString("isActive"));
field521.setAccessType(CString("outputOnly"));
field521.setType(CString("SFBool"));
Script520.addChild(&field521);

field& field522 =  field();
field522.setName(CString("isBound"));
field522.setAccessType(CString("outputOnly"));
field522.setType(CString("SFBool"));
Script520.addChild(&field522);

field& field523 =  field();
field523.setName(CString("set_startTime"));
field523.setAccessType(CString("inputOnly"));
field523.setType(CString("SFTime"));
Script520.addChild(&field523);


Script520.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	isActive = FALSE;")+
_T("	isBound  = TRUE;")+
_T("}"));
Transform519.addChild(&Script520);

VisibilitySensor& VisibilitySensor524 =  VisibilitySensor();
VisibilitySensor524.setDEF(CString("_65"));
VisibilitySensor524.setSize(new float[]{1,1,1});
Transform519.addChild(&VisibilitySensor524);

Transform105.addChild(&Transform519);

Collision104.addChildren(&Transform105);

Transform103.addChild(&Collision104);

Transform100.addChild(&Transform103);

Transform95.addChild(&Transform100);

Transform& Transform525 =  Transform();
Transform525.setDEF(CString("worlds"));
Switch& Switch526 =  Switch();
Switch526.setDEF(CString("_66"));
Switch526.setWhichChoice(0);
Transform& Transform527 =  Transform();
Transform527.setDEF(CString("intro_2"));
Transform527.setCenter(new float[]{-0.627419,0.746411,-0.0483251});
Fog& Fog528 =  Fog();
Fog528.setDEF(CString("fog"));
Fog528.setColor(new float[]{1,0.992157,0.937255});
Fog528.setVisibilityRange(10);
Transform527.addChild(&Fog528);

Transform& Transform529 =  Transform();
Transform529.setDEF(CString("VP"));
Group& Group530 =  Group();
Group& Group531 =  Group();
Group531.setDEF(CString("introAnim_1"));
TimeSensor& TimeSensor532 =  TimeSensor();
TimeSensor532.setDEF(CString("Time_7"));
TimeSensor532.setEnabled(False);
TimeSensor532.setCycleInterval(10);
TimeSensor532.setStartTime(975708736.463);
TimeSensor532.setStopTime(1);
Group531.addChild(&TimeSensor532);

Group530.addChild(&Group531);

PositionInterpolator& PositionInterpolator533 =  PositionInterpolator();
PositionInterpolator533.setDEF(CString("introVPPositionInterp"));
PositionInterpolator533.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator533.setKeyValue(new float[]{0,0,0,-0.0473186,0.0988719,0.36376,-0.0946372,0.197744,0.72752,-0.141956,0.296616,1.09128,-0.189274,0.395488,1.45504,-0.236593,0.494359,1.8188,-0.283912,0.593231,2.18256,-0.33123,0.692103,2.54632,-0.378549,0.790975,2.91008,-0.425867,0.889847,3.27384,-0.473186,0.988719,3.6376}, 33);
Group530.addChild(&PositionInterpolator533);

OrientationInterpolator& OrientationInterpolator534 =  OrientationInterpolator();
OrientationInterpolator534.setDEF(CString("introVPOrientationInterp"));
OrientationInterpolator534.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator534.setKeyValue(new float[]{0,0,1,0,-0.0510349,-0.99869,0.00370363,0.030423,-0.0510349,-0.99869,0.00370363,0.0722762,-0.0510349,-0.99869,0.00370363,0.12268,-0.0510349,-0.99869,0.00370363,0.17879,-0.0510349,-0.99869,0.00370363,0.237753,-0.0510349,-0.99869,0.00370363,0.296715,-0.0510349,-0.99869,0.00370363,0.352825,-0.0510349,-0.99869,0.00370363,0.403228,-0.0510349,-0.99869,0.00370363,0.445073,-0.0510349,-0.99869,0.00370363,0.475505}, 44);
Group530.addChild(&OrientationInterpolator534);

Transform529.addChild(&Group530);

Viewpoint& Viewpoint535 =  Viewpoint();
Viewpoint535.setDEF(CString("introVP"));
Viewpoint535.setPosition(new float[]{0,0,0});
Viewpoint535.setFieldOfView(0.9);
Transform529.addChild(&Viewpoint535);

Transform527.addChild(&Transform529);

Transform& Transform536 =  Transform();
Transform536.setDEF(CString("introAnim_2"));
Transform536.setTranslation(new float[]{0,0,-13.0803});
Transform536.setCenter(new float[]{-0.627419,0.746411,-0.0483251});
Group& Group537 =  Group();
Group& Group538 =  Group();
Group538.setUSE(CString("introAnim_1"));
Group537.addChild(&Group538);

PositionInterpolator& PositionInterpolator539 =  PositionInterpolator();
PositionInterpolator539.setDEF(CString("introAnimTranslationInterp"));
PositionInterpolator539.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator539.setKeyValue(new float[]{0,0,-13.0803,0,0,-10.6645,0,0,-8.2486,0,0,-5.83275,0,0,-3.4169,0,0,-1.00105,0,0,1.4148,0,0,3.83065,0,0,6.2465,0,0,8.66235,0,0,11.0782}, 33);
Group537.addChild(&PositionInterpolator539);

Transform536.addChild(&Group537);

Transform& Transform540 =  Transform();
Transform540.setDEF(CString("intro"));
Inline& Inline541 =  Inline();
Inline541.setUrl(new CString[]{CString("intro.x3d")}, 1);
Inline541.setBboxSize(new float[]{4.4777,4.4777,14.359});
Inline541.setBboxCenter(new float[]{-0.627419,0.746411,-0.0483251});
Transform540.addChild(&Inline541);

Transform536.addChild(&Transform540);

Transform& Transform542 =  Transform();
Transform542.setDEF(CString("False_3"));
Transform542.setTranslation(new float[]{0,0,7.54828});
ProtoInstance& ProtoInstance543 =  ProtoInstance();
ProtoInstance543.setName(CString("False"));
ProtoInstance543.setDEF(CString("_67"));
Transform542.addChild(&ProtoInstance543);

Transform536.addChild(&Transform542);

Transform527.addChild(&Transform536);

Transform& Transform544 =  Transform();
Transform544.setDEF(CString("Delay_1"));
ProtoInstance& ProtoInstance545 =  ProtoInstance();
ProtoInstance545.setName(CString("Delay"));
ProtoInstance545.setDEF(CString("_68"));
Transform544.addChild(&ProtoInstance545);

Transform527.addChild(&Transform544);

Transform& Transform546 =  Transform();
Transform546.setDEF(CString("Int_8"));
ProtoInstance& ProtoInstance547 =  ProtoInstance();
ProtoInstance547.setName(CString("Int"));
ProtoInstance547.setDEF(CString("_69"));
fieldValue& fieldValue548 =  fieldValue();
fieldValue548.setName(CString("keyValue"));
fieldValue548.setValue(CString("1"));
ProtoInstance547.addChild(&fieldValue548);

Transform546.addChild(&ProtoInstance547);

Transform527.addChild(&Transform546);

Switch526.addChild(&Transform527);

Transform& Transform549 =  Transform();
Transform549.setDEF(CString("main"));
PointLight& PointLight550 =  PointLight();
PointLight550.setDEF(CString("Light1_1"));
PointLight550.setOn(False);
PointLight550.setAmbientIntensity(0.97);
PointLight550.setLocation(new float[]{-1.46759,1.58188,1.17452});
Transform549.addChild(&PointLight550);

Transform& Transform551 =  Transform();
Transform551.setDEF(CString("vp_1"));
Group& Group552 =  Group();
Group& Group553 =  Group();
Group553.setDEF(CString("mainVPAnim"));
TimeSensor& TimeSensor554 =  TimeSensor();
TimeSensor554.setDEF(CString("Time_8"));
TimeSensor554.setEnabled(False);
TimeSensor554.setCycleInterval(30);
TimeSensor554.setLoop(True);
TimeSensor554.setStartTime(975708380.516);
TimeSensor554.setStopTime(1);
Group553.addChild(&TimeSensor554);

Group552.addChild(&Group553);

PositionInterpolator& PositionInterpolator555 =  PositionInterpolator();
PositionInterpolator555.setDEF(CString("welcomeVPPositionInterp"));
PositionInterpolator555.setKey(new float[]{0,0.5,1}, 3);
PositionInterpolator555.setKeyValue(new float[]{-2.22921,0.857818,3.76941,-1.86072,0.802714,3.92474,-2.22921,0.857818,3.76941}, 9);
Group552.addChild(&PositionInterpolator555);

OrientationInterpolator& OrientationInterpolator556 =  OrientationInterpolator();
OrientationInterpolator556.setDEF(CString("welcomeVPOrientationInterp"));
OrientationInterpolator556.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator556.setKeyValue(new float[]{0.050208,-0.997883,0.0413286,0.423377,0.105529,-0.991116,0.0809456,0.293047,0.050208,-0.997883,0.0413286,0.423377}, 12);
Group552.addChild(&OrientationInterpolator556);

Transform551.addChild(&Group552);

Transform& Transform557 =  Transform();
Group& Group558 =  Group();
Group& Group559 =  Group();
Group559.setDEF(CString("mainEnde"));
TimeSensor& TimeSensor560 =  TimeSensor();
TimeSensor560.setDEF(CString("Time_9"));
TimeSensor560.setStopTime(1);
Group559.addChild(&TimeSensor560);

Group558.addChild(&Group559);

PositionInterpolator& PositionInterpolator561 =  PositionInterpolator();
PositionInterpolator561.setDEF(CString("mainVPPositionInterp"));
PositionInterpolator561.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator561.setKeyValue(new float[]{-2.22921,0.857818,3.76941,-1.74273,0.915437,3.42012,-1.25625,0.973056,3.07083,-0.769776,1.03068,2.72154,-0.283298,1.08829,2.37225,0.20318,1.14591,2.02296,0.689658,1.20353,1.67367,1.17614,1.26115,1.32438,1.66261,1.31877,0.975085,2.14909,1.37639,0.625794,2.63557,1.43401,0.276504}, 33);
Group558.addChild(&PositionInterpolator561);

OrientationInterpolator& OrientationInterpolator562 =  OrientationInterpolator();
OrientationInterpolator562.setDEF(CString("mainVPOrientationInterp"));
OrientationInterpolator562.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator562.setKeyValue(new float[]{0.050208,-0.997883,0.0413286,0.423377,0.0520933,-0.997805,0.0408755,0.432081,0.0545664,-0.997697,0.0402808,0.444053,0.0573762,-0.997567,0.0396047,0.458476,0.0603061,-0.997422,0.0388993,0.474537,0.0631818,-0.99727,0.0382064,0.491418,0.0658697,-0.997121,0.0375584,0.508303,0.0682698,-0.996981,0.0369794,0.524374,0.070306,-0.996858,0.0364879,0.538813,0.0719171,-0.996757,0.0360989,0.550802,0.0730464,-0.996685,0.0358261,0.559522}, 44);
Group558.addChild(&OrientationInterpolator562);

Transform557.addChild(&Group558);

Viewpoint& Viewpoint563 =  Viewpoint();
Viewpoint563.setDEF(CString("mainVP"));
Viewpoint563.setPosition(new float[]{-2.22921,0.857818,3.76941});
Viewpoint563.setOrientation(new float[]{0.050208,-0.997883,0.0413286,0.423377});
Viewpoint563.setFieldOfView(0.9);
Transform557.addChild(&Viewpoint563);

Transform551.addChild(&Transform557);

Transform& Transform564 =  Transform();
Transform564.setDEF(CString("Delay"));
ProtoInstance& ProtoInstance565 =  ProtoInstance();
ProtoInstance565.setName(CString("Delay"));
ProtoInstance565.setDEF(CString("_70"));
fieldValue& fieldValue566 =  fieldValue();
fieldValue566.setName(CString("cycleInterval"));
fieldValue566.setValue(CString("0.6"));
ProtoInstance565.addChild(&fieldValue566);

Transform564.addChild(&ProtoInstance565);

Transform551.addChild(&Transform564);

Transform549.addChild(&Transform551);

Transform& Transform567 =  Transform();
Transform567.setDEF(CString("elseTouch"));
TouchSensor& TouchSensor568 =  TouchSensor();
TouchSensor568.setDEF(CString("_71"));
TouchSensor568.setEnabled(False);
Transform567.addChild(&TouchSensor568);

Transform& Transform569 =  Transform();
Transform569.setDEF(CString("else_1"));
Transform569.setTranslation(new float[]{-1.7015,0,0});
Inline& Inline570 =  Inline();
Inline570.setUrl(new CString[]{CString("ictspace-else.x3d")}, 1);
Inline570.setBboxSize(new float[]{1.7587,1.7,1.53335});
Inline570.setBboxCenter(new float[]{0.0115501,0.85,0});
Transform569.addChild(&Inline570);

Transform567.addChild(&Transform569);

Transform549.addChild(&Transform567);

Transform& Transform571 =  Transform();
Transform571.setDEF(CString("Grid_1"));
Transform& Transform572 =  Transform();
Transform572.setDEF(CString("grid"));
Transform572.setTranslation(new float[]{0,-1.78516e-8,0});
Transform572.setRotation(new float[]{0,1,0,1.5708});
Transform572.setScale(new float[]{26.5342,26.5365,26.5342});
Shape& Shape573 =  Shape();
Appearance& Appearance574 =  Appearance();
Material& Material575 =  Material();
Material575.setAmbientIntensity(0);
Material575.setDiffuseColor(new float[]{0,0,0});
Material575.setEmissiveColor(new float[]{1,0.775525,0.355765});
Material575.setShininess(0);
Appearance574.addChild(&Material575);

Shape573.addChild(&Appearance574);

IndexedLineSet& IndexedLineSet576 =  IndexedLineSet();
IndexedLineSet576.setCoordIndex(new int32_t[]{25,9,28,27,-1,28,11,26,27,-1,13,29,27,26,-1,29,2,25,27,-1,26,11,32,31,-1,32,10,30,31,-1,4,33,31,30,-1,33,13,26,31,-1,30,10,36,35,-1,36,16,34,35,-1,14,37,35,34,-1,37,4,30,35,-1,38,14,34,40,-1,34,16,39,40,-1,17,41,40,39,-1,41,1,38,40,-1,42,12,44,43,-1,44,11,28,43,-1,9,45,43,28,-1,45,7,42,43,-1,46,18,49,48,-1,49,19,47,48,-1,21,50,48,47,-1,50,3,46,48,-1,47,19,52,51,-1,52,12,42,51,-1,7,53,51,42,-1,53,21,47,51,-1,54,10,32,55,-1,32,11,44,55,-1,12,56,55,44,-1,56,6,54,55,-1,57,15,59,58,-1,59,16,36,58,-1,10,54,58,36,-1,54,6,57,58,-1,39,16,59,61,-1,59,15,60,61,-1,8,62,61,60,-1,62,17,39,61,-1,63,20,65,64,-1,65,19,49,64,-1,18,66,64,49,-1,66,5,63,64,-1,56,12,52,67,-1,52,19,65,67,-1,20,68,67,65,-1,68,6,56,67,-1,68,20,71,70,-1,71,23,69,70,-1,15,57,70,69,-1,57,6,68,70,-1,60,15,69,73,-1,69,23,72,73,-1,24,74,73,72,-1,74,8,60,73,-1,75,22,77,76,-1,77,23,71,76,-1,20,63,76,71,-1,63,5,75,76,-1,72,23,77,79,-1,77,22,78,79,-1,0,80,79,78,-1,80,24,72,79,-1}, 320);
Coordinate& Coordinate577 =  Coordinate();
Coordinate577.setPoint(new float[]{-0.1,-7.45058e-9,-0.1,-0.1,-7.45058e-9,0.1,0.1,-7.45058e-9,0.1,0.1,-7.45058e-9,-0.1,0,-7.45058e-9,0.1,0,-7.45058e-9,-0.1,0,-7.45058e-9,0,0.1,-7.45058e-9,0,-0.1,-7.45058e-9,0,0.1,-7.45058e-9,0.05,0,-7.45058e-9,0.05,0.05,-7.45058e-9,0.05,0.05,-7.45058e-9,0,0.05,-7.45058e-9,0.1,-0.05,-7.45058e-9,0.1,-0.05,-7.45058e-9,0,-0.05,-7.45058e-9,0.05,-0.1,-7.45058e-9,0.05,0.05,-7.45058e-9,-0.1,0.05,-7.45058e-9,-0.05,0,-7.45058e-9,-0.05,0.1,-7.45058e-9,-0.05,-0.05,-7.45058e-9,-0.1,-0.05,-7.45058e-9,-0.05,-0.1,-7.45058e-9,-0.05,0.1,-7.45058e-9,0.075,0.05,-7.45058e-9,0.075,0.075,-7.45058e-9,0.075,0.075,-7.45058e-9,0.05,0.075,-7.45058e-9,0.1,0,-7.45058e-9,0.075,0.025,-7.45058e-9,0.075,0.025,-7.45058e-9,0.05,0.025,-7.45058e-9,0.1,-0.05,-7.45058e-9,0.075,-0.025,-7.45058e-9,0.075,-0.025,-7.45058e-9,0.05,-0.025,-7.45058e-9,0.1,-0.075,-7.45058e-9,0.1,-0.075,-7.45058e-9,0.05,-0.075,-7.45058e-9,0.075,-0.1,-7.45058e-9,0.075,0.075,-7.45058e-9,0,0.075,-7.45058e-9,0.025,0.05,-7.45058e-9,0.025,0.1,-7.45058e-9,0.025,0.075,-7.45058e-9,-0.1,0.075,-7.45058e-9,-0.05,0.075,-7.45058e-9,-0.075,0.05,-7.45058e-9,-0.075,0.1,-7.45058e-9,-0.075,0.075,-7.45058e-9,-0.025,0.05,-7.45058e-9,-0.025,0.1,-7.45058e-9,-0.025,0,-7.45058e-9,0.025,0.025,-7.45058e-9,0.025,0.025,-7.45058e-9,0,-0.025,-7.45058e-9,0,-0.025,-7.45058e-9,0.025,-0.05,-7.45058e-9,0.025,-0.075,-7.45058e-9,0,-0.075,-7.45058e-9,0.025,-0.1,-7.45058e-9,0.025,0,-7.45058e-9,-0.075,0.025,-7.45058e-9,-0.075,0.025,-7.45058e-9,-0.05,0.025,-7.45058e-9,-0.1,0.025,-7.45058e-9,-0.025,0,-7.45058e-9,-0.025,-0.05,-7.45058e-9,-0.025,-0.025,-7.45058e-9,-0.025,-0.025,-7.45058e-9,-0.05,-0.075,-7.45058e-9,-0.05,-0.075,-7.45058e-9,-0.025,-0.1,-7.45058e-9,-0.025,-0.025,-7.45058e-9,-0.1,-0.025,-7.45058e-9,-0.075,-0.05,-7.45058e-9,-0.075,-0.075,-7.45058e-9,-0.1,-0.075,-7.45058e-9,-0.075,-0.1,-7.45058e-9,-0.075}, 243);
IndexedLineSet576.setCoord(&Coordinate577);

Shape573.setGeometry(&IndexedLineSet576);

Transform572.addChild(&Shape573);

Transform571.addChild(&Transform572);

Transform549.addChild(&Transform571);

Transform& Transform578 =  Transform();
Transform578.setDEF(CString("products"));
Transform578.setTranslation(new float[]{-0.921911,0,-1.1704});
Transform578.setRotation(new float[]{0,-1,0,0.500215});
Transform& Transform579 =  Transform();
Transform579.setDEF(CString("shadow"));
Transform579.setTranslation(new float[]{2,3.99814,0.0000108924});
Transform579.setRotation(new float[]{-1,0,0,1.5708});
Transform579.setScale(new float[]{4.02995,1.67762,1.67762});
Transform579.setScaleOrientation(new float[]{1,3.02335e-7,-9.40648e-8,4.71239});
Group& Group580 =  Group();
Group& Group581 =  Group();
Group581.setDEF(CString("productsOn"));
TimeSensor& TimeSensor582 =  TimeSensor();
TimeSensor582.setDEF(CString("Time_10"));
TimeSensor582.setEnabled(False);
TimeSensor582.setCycleInterval(1.5);
TimeSensor582.setStartTime(975605392.963);
TimeSensor582.setStopTime(1);
Group581.addChild(&TimeSensor582);

Group580.addChild(&Group581);

PositionInterpolator& PositionInterpolator583 =  PositionInterpolator();
PositionInterpolator583.setDEF(CString("shadowScaleFactorInterp_1"));
PositionInterpolator583.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.68,0.76,0.84,0.92,1}, 15);
PositionInterpolator583.setKeyValue(new float[]{4.02995,1.67762,1.67762,3.79891,1.58144,1.58144,3.55471,1.47978,1.47978,3.30392,1.37538,1.37538,3.05312,1.27098,1.27098,2.80892,1.16932,1.16932,2.57788,1.07314,1.07314,2.3666,0.985185,0.985185,2.18166,0.908197,0.908197,2.02965,0.844916,0.844916,1.92723,0.802282,0.802282,1.91443,0.796952,0.796952,1.95284,0.81294,0.81294,2.00405,0.834257,0.834257,2.02965,0.844916,0.844916}, 45);
Group580.addChild(&PositionInterpolator583);

PositionInterpolator& PositionInterpolator584 =  PositionInterpolator();
PositionInterpolator584.setDEF(CString("shadowTranslationInterp_1"));
PositionInterpolator584.setKey(new float[]{0,0.0666567,0.0666667}, 3);
PositionInterpolator584.setKeyValue(new float[]{2,3.99814,0.0000108924,2,3.99814,0.0000108924,2,0.0175842,6.06873e-8}, 9);
Group580.addChild(&PositionInterpolator584);

OrientationInterpolator& OrientationInterpolator585 =  OrientationInterpolator();
OrientationInterpolator585.setDEF(CString("shadowRotationInterp_1"));
OrientationInterpolator585.setKey(new float[]{0,0.6,0.7,0.8,0.9,1}, 6);
OrientationInterpolator585.setKeyValue(new float[]{-1,0,0,1.5708,-1,1.10182e-8,5.26843e-9,1.57077,-0.892267,0.319259,0.319269,1.68451,-0.577344,0.577345,0.577362,2.09438,-0.245274,0.685497,0.685517,2.66053,1.15258e-7,0.707097,0.707117,3.14159}, 24);
Group580.addChild(&OrientationInterpolator585);

Transform579.addChild(&Group580);

Group& Group586 =  Group();
Group& Group587 =  Group();
Group587.setDEF(CString("productsOff"));
TimeSensor& TimeSensor588 =  TimeSensor();
TimeSensor588.setDEF(CString("Time_11"));
TimeSensor588.setStartTime(975605394.883);
TimeSensor588.setStopTime(1);
Group587.addChild(&TimeSensor588);

Group586.addChild(&Group587);

PositionInterpolator& PositionInterpolator589 =  PositionInterpolator();
PositionInterpolator589.setDEF(CString("shadowTranslationInterp_2"));
PositionInterpolator589.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator589.setKeyValue(new float[]{2,0.0175842,6.06873e-8,1.9137,0.0175842,1.48864e-8,1.76987,0.0175842,-6.14484e-8,1.7411,0.0175842,-7.67153e-8,2,0.0175842,6.06873e-8,2.55402,0.0175842,3.54718e-7,3.26146,0.0175842,7.30172e-7,4.07118,0.0175842,0.00000115991,4.93204,0.0175842,0.00000161679,5.7929,0.0175842,0.00000207366,6.60262,0.0175842,0.0000025034}, 33);
Group586.addChild(&PositionInterpolator589);

OrientationInterpolator& OrientationInterpolator590 =  OrientationInterpolator();
OrientationInterpolator590.setDEF(CString("shadowRotationInterp_2"));
OrientationInterpolator590.setKey(new float[]{0,0.1,0.2,0.3,0.4}, 5);
OrientationInterpolator590.setKeyValue(new float[]{1.15258e-7,0.707097,0.707117,3.14159,1.15258e-7,0.707097,0.707117,3.14159,1.15258e-7,0.707097,0.707117,3.14159,1.15258e-7,0.707097,0.707117,3.14159,1.15258e-7,0.707097,0.707117,3.14159}, 20);
Group586.addChild(&OrientationInterpolator590);

PositionInterpolator& PositionInterpolator591 =  PositionInterpolator();
PositionInterpolator591.setDEF(CString("shadowScaleFactorInterp_2"));
PositionInterpolator591.setKey(new float[]{1.19209e-7,0.133333,0.266667,0.4}, 4);
PositionInterpolator591.setKeyValue(new float[]{2.02965,0.844916,0.844916,2.02965,0.844916,0.844916,2.02965,0.844916,0.844916,2.02965,0.844916,0.844916}, 12);
Group586.addChild(&PositionInterpolator591);

Transform579.addChild(&Group586);

Group& Group592 =  Group();
Group& Group593 =  Group();
Group593.setDEF(CString("tvzoomIn"));
TimeSensor& TimeSensor594 =  TimeSensor();
TimeSensor594.setDEF(CString("iTime_1"));
TimeSensor594.setCycleInterval(0.5);
Group593.addChild(&TimeSensor594);

Group592.addChild(&Group593);

PositionInterpolator& PositionInterpolator595 =  PositionInterpolator();
PositionInterpolator595.setDEF(CString("shadowScaleFactorInterp_3"));
PositionInterpolator595.setKey(new float[]{0,0.2,0.4,0.6,1}, 5);
PositionInterpolator595.setKeyValue(new float[]{2.02965,0.844916,0.844916,2.3035,0.958917,0.958917,2.57735,1.07292,1.07292,2.78413,1.159,1.159,2.78413,1.159,1.159}, 15);
Group592.addChild(&PositionInterpolator595);

PositionInterpolator& PositionInterpolator596 =  PositionInterpolator();
PositionInterpolator596.setDEF(CString("shadowTranslationInterp_3"));
PositionInterpolator596.setKey(new float[]{0,0.2,0.4,0.6,1}, 5);
PositionInterpolator596.setKeyValue(new float[]{2,0.0239871,6.06873e-8,2.13692,0.0177299,0.0570001,2.27385,0.0114728,0.114,2.37724,0.00674796,0.157041,2.37724,0.00674796,0.157041}, 15);
Group592.addChild(&PositionInterpolator596);

Transform579.addChild(&Group592);

Group& Group597 =  Group();
Group& Group598 =  Group();
Group598.setDEF(CString("tvzoomOut"));
TimeSensor& TimeSensor599 =  TimeSensor();
TimeSensor599.setDEF(CString("oTime_1"));
TimeSensor599.setCycleInterval(0.3);
Group598.addChild(&TimeSensor599);

Group597.addChild(&Group598);

PositionInterpolator& PositionInterpolator600 =  PositionInterpolator();
PositionInterpolator600.setDEF(CString("shadowTranslationInterp_4"));
PositionInterpolator600.setKey(new float[]{0,0.333333,0.666667,1}, 4);
PositionInterpolator600.setKeyValue(new float[]{2.37724,0.00674796,0.157041,2,0.0239871,6.06873e-8,1.96856,0.0254237,-0.0130867,2,0.0239871,6.06873e-8}, 12);
Group597.addChild(&PositionInterpolator600);

PositionInterpolator& PositionInterpolator601 =  PositionInterpolator();
PositionInterpolator601.setDEF(CString("shadowScaleFactorInterp_4"));
PositionInterpolator601.setKey(new float[]{0,0.333333,0.666667,1}, 4);
PositionInterpolator601.setKeyValue(new float[]{2.78413,1.159,1.159,2.02965,0.844916,0.844916,1.96678,0.818742,0.818742,2.02965,0.844916,0.844916}, 12);
Group597.addChild(&PositionInterpolator601);

Transform579.addChild(&Group597);

Shape& Shape602 =  Shape();
Appearance& Appearance603 =  Appearance();
ImageTexture& ImageTexture604 =  ImageTexture();
ImageTexture604.setUrl(new CString[]{CString("shadow70-128.png")}, 1);
Appearance603.addChild(&ImageTexture604);

Shape602.addChild(&Appearance603);

IndexedFaceSet& IndexedFaceSet605 =  IndexedFaceSet();
IndexedFaceSet605.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate606 =  TextureCoordinate();
TextureCoordinate606.setUSE(CString("standartTC"));
IndexedFaceSet605.setTexCoord(&TextureCoordinate606);

Coordinate& Coordinate607 =  Coordinate();
Coordinate607.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet605.setCoord(&Coordinate607);

Shape602.setGeometry(&IndexedFaceSet605);

Transform579.addChild(&Shape602);

Transform578.addChild(&Transform579);

Transform& Transform608 =  Transform();
Transform608.setDEF(CString("teeveeAnim"));
Transform608.setTranslation(new float[]{0,3.70574,-2.98023e-8});
Transform608.setRotation(new float[]{0,1,0,3.14159});
Transform608.setScale(new float[]{0.999995,0.999998,0.999995});
Transform608.setCenter(new float[]{2,1.19941,-0.304619});
Group& Group609 =  Group();
Group& Group610 =  Group();
Group610.setUSE(CString("productsOn"));
Group609.addChild(&Group610);

PositionInterpolator& PositionInterpolator611 =  PositionInterpolator();
PositionInterpolator611.setDEF(CString("teeveeTranslationInterp_1"));
PositionInterpolator611.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.68,0.76,0.84,0.92,1}, 15);
PositionInterpolator611.setKeyValue(new float[]{0,3.70574,0,0,3.27772,0,0,2.82531,0,0,2.36069,0,0,1.89608,0,0,1.44366,0,0,1.01565,0,0,0.624231,0,0,0.281615,0,0,0,0,0,-0.189734,0,0,-0.213451,0,0,-0.1423,0,0,-0.0474335,0,0,0,0}, 45);
Group609.addChild(&PositionInterpolator611);

OrientationInterpolator& OrientationInterpolator612 =  OrientationInterpolator();
OrientationInterpolator612.setDEF(CString("teeveeRotationInterp_1"));
OrientationInterpolator612.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533333,0.6,0.7,0.8,0.9,1}, 14);
OrientationInterpolator612.setKeyValue(new float[]{0,1,0,3.14159,0,1,0,3.13297,0,1,0,3.11142,0,1,0,3.08341,0,1,0,3.0554,0,1,0,3.03385,0,1,0,3.02523,0,1,0,3.03601,0,1,0,3.07264,0,1,0,3.14159,0,1,0,3.82882,0,1,0,4.71239,0,1,0,5.59596,0,0,1,0}, 56);
Group609.addChild(&OrientationInterpolator612);

Transform608.addChild(&Group609);

Group& Group613 =  Group();
Group& Group614 =  Group();
Group614.setUSE(CString("productsOff"));
Group613.addChild(&Group614);

PositionInterpolator& PositionInterpolator615 =  PositionInterpolator();
PositionInterpolator615.setDEF(CString("teeveeTranslationInterp_2"));
PositionInterpolator615.setKey(new float[]{1.19209e-7,0.133333,0.266667,0.4,0.5,0.6,0.7,0.8,0.9,1}, 10);
PositionInterpolator615.setKeyValue(new float[]{0,0,0,-0.136374,0,-6.53443e-8,-0.272748,0,-1.30689e-7,0,0,0,0.554019,0,2.65461e-7,1.26146,0,6.04435e-7,2.07118,0,9.92417e-7,2.93204,0,0.0000014049,3.7929,0,0.00000181739,4.60262,0,0.00000220537}, 30);
Group613.addChild(&PositionInterpolator615);

OrientationInterpolator& OrientationInterpolator616 =  OrientationInterpolator();
OrientationInterpolator616.setDEF(CString("teeveeRotationInterp_2"));
OrientationInterpolator616.setKey(new float[]{0,0.1,0.2,0.3,0.4}, 5);
OrientationInterpolator616.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 20);
Group613.addChild(&OrientationInterpolator616);

Transform608.addChild(&Group613);

Group& Group617 =  Group();
Group& Group618 =  Group();
Group618.setUSE(CString("tvzoomIn"));
Group617.addChild(&Group618);

PositionInterpolator& PositionInterpolator619 =  PositionInterpolator();
PositionInterpolator619.setDEF(CString("teeveeScaleFactorInterp_1"));
PositionInterpolator619.setKey(new float[]{0,0.2,0.4,0.6,1}, 5);
PositionInterpolator619.setKeyValue(new float[]{0.999995,0.999998,0.999995,1.18458,1.18458,1.18458,1.36916,1.36916,1.36916,1.50854,1.50854,1.50854,1.50854,1.50854,1.50854}, 15);
Group617.addChild(&PositionInterpolator619);

PositionInterpolator& PositionInterpolator620 =  PositionInterpolator();
PositionInterpolator620.setDEF(CString("teeveeTranslationInterp_3"));
PositionInterpolator620.setKey(new float[]{0,0.2,0.4,0.6,1}, 5);
PositionInterpolator620.setKeyValue(new float[]{-2.38419e-7,-4.76837e-7,0,0.142684,-0.10189,0.0410181,0.285369,-0.20378,0.0820362,0.39311,-0.280717,0.113009,0.39311,-0.280717,0.113009}, 15);
Group617.addChild(&PositionInterpolator620);

Transform608.addChild(&Group617);

Group& Group621 =  Group();
Group& Group622 =  Group();
Group622.setUSE(CString("tvzoomOut"));
Group621.addChild(&Group622);

PositionInterpolator& PositionInterpolator623 =  PositionInterpolator();
PositionInterpolator623.setDEF(CString("teeveeTranslationInterp_4"));
PositionInterpolator623.setKey(new float[]{0,0.333333,0.666667,1}, 4);
PositionInterpolator623.setKeyValue(new float[]{0.39311,-0.280717,0.113009,-2.38419e-7,-4.76837e-7,0,-0.0327594,0.0233926,-0.00941742,-2.38419e-7,-4.76837e-7,0}, 12);
Group621.addChild(&PositionInterpolator623);

PositionInterpolator& PositionInterpolator624 =  PositionInterpolator();
PositionInterpolator624.setDEF(CString("teeveeScaleFactorInterp_2"));
PositionInterpolator624.setKey(new float[]{0,0.333333,0.666667,1}, 4);
PositionInterpolator624.setKeyValue(new float[]{1.50854,1.50854,1.50854,0.999995,0.999998,0.999995,0.957616,0.957619,0.957616,0.999995,0.999998,0.999995}, 12);
Group621.addChild(&PositionInterpolator624);

Transform608.addChild(&Group621);

Transform& Transform625 =  Transform();
Transform625.setDEF(CString("TouchTV"));
Transform625.setCenter(new float[]{1.99999,1.19941,-0.30659});
TouchSensor& TouchSensor626 =  TouchSensor();
TouchSensor626.setDEF(CString("_72"));
TouchSensor626.setEnabled(False);
Transform625.addChild(&TouchSensor626);

Transform& Transform627 =  Transform();
Transform627.setDEF(CString("False"));
ProtoInstance& ProtoInstance628 =  ProtoInstance();
ProtoInstance628.setName(CString("False"));
ProtoInstance628.setDEF(CString("_73"));
Transform627.addChild(&ProtoInstance628);

Transform625.addChild(&Transform627);

Transform& Transform629 =  Transform();
Transform629.setDEF(CString("True"));
ProtoInstance& ProtoInstance630 =  ProtoInstance();
ProtoInstance630.setName(CString("True"));
ProtoInstance630.setDEF(CString("_74"));
Transform629.addChild(&ProtoInstance630);

Transform625.addChild(&Transform629);

Transform& Transform631 =  Transform();
Transform631.setDEF(CString("tvmaster"));
Transform& Transform632 =  Transform();
Transform632.setDEF(CString("teevee"));
Transform632.setTranslation(new float[]{2.0535,1.26393,-0.0167225});
Transform632.setScale(new float[]{1.24494,1.24494,1.24494});
Transform632.setCenter(new float[]{-0.002251,0,-0.093948});
TimeSensor& TimeSensor633 =  TimeSensor();
TimeSensor633.setDEF(CString("delete_1"));
TimeSensor633.setLoop(True);
TimeSensor633.setStartTime(1);
Transform632.addChild(&TimeSensor633);

Group& Group634 =  Group();
Transform& Transform635 =  Transform();
Transform635.setDEF(CString("tv-apparat"));
Transform635.setTranslation(new float[]{2.98023e-8,0,-1.04308e-7});
Transform635.setScale(new float[]{1,0.999999,1});
Transform635.setCenter(new float[]{-0.002251,0,-0.093948});
Group& Group636 =  Group();
Group& Group637 =  Group();
Group637.setDEF(CString("dreh"));
TimeSensor& TimeSensor638 =  TimeSensor();
TimeSensor638.setDEF(CString("Time_12"));
TimeSensor638.setEnabled(False);
TimeSensor638.setCycleInterval(10);
TimeSensor638.setLoop(True);
TimeSensor638.setStartTime(975712014.339);
TimeSensor638.setStopTime(1);
Group637.addChild(&TimeSensor638);

Group636.addChild(&Group637);

OrientationInterpolator& OrientationInterpolator639 =  OrientationInterpolator();
OrientationInterpolator639.setDEF(CString("screenRotationInterp"));
OrientationInterpolator639.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
OrientationInterpolator639.setKeyValue(new float[]{0,0,1,0,0,-1,0,0.0561011,0,-1,0,0.141584,0,-1,0,0.232412,0,-1,0,0.304541,0,-1,0,0.333926,0,-1,0,0.310196,0,-1,0,0.249378,0,-1,0,0.167035,0,-1,0,0.0787199,0,0,1,0,0,1,0,0.0807566,0,1,0,0.173917,0,1,0,0.26205,0,1,0,0.327715,0,1,0,0.353479,0,1,0,0.322372,0,1,0,0.246022,0,1,0,0.149875,0,1,0,0.0593841,0,0,1,0}, 84);
Group636.addChild(&OrientationInterpolator639);

Group& Group640 =  Group();
ScalarInterpolator& ScalarInterpolator641 =  ScalarInterpolator();
ScalarInterpolator641.setDEF(CString("_75"));
ScalarInterpolator641.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator641.setKeyValue(new float[]{0,-0.0464,-0.0992,-0.1488,-0.1856,-0.2,-0.1856,-0.1488,-0.0992,-0.0464,0,0.0464,0.0992,0.1488,0.1856,0.2,0.1856,0.1488,0.0992,0.0464,0}, 21);
Group640.addChild(&ScalarInterpolator641);

ScalarInterpolator& ScalarInterpolator642 =  ScalarInterpolator();
ScalarInterpolator642.setDEF(CString("_76"));
ScalarInterpolator642.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator642.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, 21);
Group640.addChild(&ScalarInterpolator642);

Script& Script643 =  Script();
Script643.setDEF(CString("_77"));
field& field644 =  field();
field644.setName(CString("vec"));
field644.setAccessType(CString("outputOnly"));
field644.setType(CString("SFVec2f"));
Script643.addChild(&field644);

field& field645 =  field();
field645.setName(CString("xIn"));
field645.setAccessType(CString("inputOnly"));
field645.setType(CString("SFFloat"));
Script643.addChild(&field645);

field& field646 =  field();
field646.setName(CString("yIn"));
field646.setAccessType(CString("inputOnly"));
field646.setType(CString("SFFloat"));
Script643.addChild(&field646);

field& field647 =  field();
field647.setName(CString("xBuf"));
field647.setAccessType(CString("initializeOnly"));
field647.setType(CString("SFFloat"));
Script643.addChild(&field647);

field& field648 =  field();
field648.setName(CString("yBuf"));
field648.setAccessType(CString("initializeOnly"));
field648.setType(CString("SFFloat"));
Script643.addChild(&field648);


Script643.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group640.addChild(&Script643);

Group636.addChild(&Group640);

Group& Group649 =  Group();
ScalarInterpolator& ScalarInterpolator650 =  ScalarInterpolator();
ScalarInterpolator650.setDEF(CString("_78"));
ScalarInterpolator650.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator650.setKeyValue(new float[]{0,-0.05104,-0.10912,-0.16368,-0.20416,-0.22,-0.20608,-0.16944,-0.11776,-0.05872,0,0.0712,0.16,0.2472,0.3136,0.34,0.31552,0.25296,0.16864,0.0788799,0}, 21);
Group649.addChild(&ScalarInterpolator650);

ScalarInterpolator& ScalarInterpolator651 =  ScalarInterpolator();
ScalarInterpolator651.setDEF(CString("_79"));
ScalarInterpolator651.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
ScalarInterpolator651.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, 21);
Group649.addChild(&ScalarInterpolator651);

Script& Script652 =  Script();
Script652.setDEF(CString("_80"));
field& field653 =  field();
field653.setName(CString("vec"));
field653.setAccessType(CString("outputOnly"));
field653.setType(CString("SFVec2f"));
Script652.addChild(&field653);

field& field654 =  field();
field654.setName(CString("xIn"));
field654.setAccessType(CString("inputOnly"));
field654.setType(CString("SFFloat"));
Script652.addChild(&field654);

field& field655 =  field();
field655.setName(CString("yIn"));
field655.setAccessType(CString("inputOnly"));
field655.setType(CString("SFFloat"));
Script652.addChild(&field655);

field& field656 =  field();
field656.setName(CString("xBuf"));
field656.setAccessType(CString("initializeOnly"));
field656.setType(CString("SFFloat"));
Script652.addChild(&field656);

field& field657 =  field();
field657.setName(CString("yBuf"));
field657.setAccessType(CString("initializeOnly"));
field657.setType(CString("SFFloat"));
Script652.addChild(&field657);


Script652.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group649.addChild(&Script652);

Group636.addChild(&Group649);

Transform635.addChild(&Group636);

TouchSensor& TouchSensor658 =  TouchSensor();
TouchSensor658.setDEF(CString("delete"));
TouchSensor658.setEnabled(False);
Transform635.addChild(&TouchSensor658);

Transform& Transform659 =  Transform();
Transform659.setDEF(CString("mtv"));
Transform& Transform660 =  Transform();
Transform660.setDEF(CString("glass"));
Transform660.setTranslation(new float[]{2.98023e-8,1.11759e-8,0.0068568});
Transform660.setScale(new float[]{0.973129,0.973129,0.973129});
Transform660.setCenter(new float[]{-0.063843,-0.047877,-0.038982});
Shape& Shape661 =  Shape();
Appearance& Appearance662 =  Appearance();
Material& Material663 =  Material();
Material663.setAmbientIntensity(0);
Material663.setDiffuseColor(new float[]{0,0,0});
Material663.setSpecularColor(new float[]{1,1,1});
Material663.setShininess(0.531915);
Material663.setTransparency(0.691489);
Appearance662.addChild(&Material663);

Shape661.addChild(&Appearance662);

IndexedFaceSet& IndexedFaceSet664 =  IndexedFaceSet();
IndexedFaceSet664.setSolid(False);
IndexedFaceSet664.setConvex(False);
IndexedFaceSet664.setCreaseAngle(3.14159);
IndexedFaceSet664.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,4,5,-1,1,5,2,-1,4,6,7,-1,4,7,5,-1,6,8,7,-1,7,8,9,-1,3,2,10,-1,3,10,11,-1,5,10,2,-1,10,5,16,-1,5,7,12,-1,7,9,13,-1,7,13,12,-1,11,10,14,-1,11,14,15,-1,16,5,12,-1,10,16,14,-1,16,12,17,-1,12,13,18,-1,12,18,17,-1,15,14,19,-1,19,14,20,-1,14,16,21,-1,14,21,20,-1,16,17,22,-1,16,22,21,-1,17,23,22,-1,17,18,23,-1}, 120);
Coordinate& Coordinate665 =  Coordinate();
Coordinate665.setPoint(new float[]{-0.542886,-0.454513,-0.058469,-0.303365,-0.454513,-0.058469,-0.303365,-0.251195,-0.019495,-0.542886,-0.251195,-0.058469,-0.0638428,-0.454513,-0.058469,-0.0638428,-0.251195,-0.019495,0.175679,-0.454513,-0.058469,0.175679,-0.251195,-0.019495,0.4152,-0.454513,-0.058469,0.4152,-0.251195,-0.058469,-0.303365,-0.0478775,-0.019495,-0.542886,-0.0478775,-0.058469,0.175679,-0.0478775,-0.019495,0.4152,-0.0478775,-0.058469,-0.303365,0.155441,-0.019495,-0.542886,0.155441,-0.058469,-0.0638428,0.155441,-0.019495,0.175679,0.155441,-0.019495,0.4152,0.155441,-0.058469,-0.542886,0.358759,-0.058469,-0.303365,0.358759,-0.058469,-0.0638428,0.358759,-0.058469,0.175679,0.358759,-0.058469,0.4152,0.358759,-0.058469}, 72);
IndexedFaceSet664.setCoord(&Coordinate665);

Shape661.setGeometry(&IndexedFaceSet664);

Transform660.addChild(&Shape661);

Transform659.addChild(&Transform660);

Transform& Transform666 =  Transform();
Transform666.setDEF(CString("chassis"));
Transform666.setTranslation(new float[]{1.19209e-7,0,-2.98023e-8});
Transform666.setCenter(new float[]{-0.002251,0,-0.0568805});
Shape& Shape667 =  Shape();
Appearance& Appearance668 =  Appearance();
Material& Material669 =  Material();
Material669.setAmbientIntensity(0);
Material669.setDiffuseColor(new float[]{0.61,0.61,0.61});
Material669.setSpecularColor(new float[]{0.998393,1,0.622082});
Material669.setEmissiveColor(new float[]{0.00155561,0.0368184,0.0425532});
Material669.setShininess(0.170213);
Appearance668.addChild(&Material669);

ImageTexture& ImageTexture670 =  ImageTexture();
ImageTexture670.setUrl(new CString[]{CString("reflect2.png")}, 1);
Appearance668.addChild(&ImageTexture670);

TextureTransform& TextureTransform671 =  TextureTransform();
TextureTransform671.setDEF(CString("_81"));
Appearance668.setTextureTransform(TextureTransform671);

Shape667.addChild(&Appearance668);

IndexedFaceSet& IndexedFaceSet672 =  IndexedFaceSet();
IndexedFaceSet672.setConvex(False);
IndexedFaceSet672.setCreaseAngle(1.32872);
IndexedFaceSet672.setTexCoordIndex(new int32_t[]{133,128,127,-1,133,127,135,-1,136,137,131,-1,136,131,134,-1,138,139,140,-1,138,140,132,-1,0,1,2,-1,3,0,4,-1,2,4,0,-1,4,5,3,-1,2,6,4,-1,6,7,8,-1,6,8,4,-1,5,4,8,-1,8,9,5,-1,9,8,10,-1,7,10,8,-1,10,11,9,-1,1,12,13,-1,13,2,1,-1,14,3,5,-1,12,14,15,-1,5,15,14,-1,15,13,12,-1,5,9,15,-1,16,7,6,-1,6,17,16,-1,17,6,2,-1,2,13,17,-1,9,11,18,-1,9,18,15,-1,13,15,18,-1,18,17,13,-1,17,18,19,-1,11,19,18,-1,19,16,17,-1,11,20,19,-1,10,7,21,-1,11,10,22,-1,21,22,10,-1,22,20,11,-1,7,16,23,-1,23,21,7,-1,16,19,24,-1,20,24,19,-1,24,23,16,-1,20,22,25,-1,20,25,26,-1,22,21,27,-1,22,27,25,-1,27,21,23,-1,27,23,28,-1,28,23,24,-1,28,24,29,-1,20,26,29,-1,20,29,24,-1,26,25,30,-1,26,30,31,-1,27,32,30,-1,27,30,25,-1,32,27,28,-1,32,28,33,-1,33,28,29,-1,33,29,34,-1,26,31,34,-1,26,34,29,-1,30,32,35,-1,30,35,36,-1,31,30,36,-1,31,36,37,-1,36,35,38,-1,38,39,36,-1,37,36,39,-1,39,38,40,-1,39,41,37,-1,41,39,42,-1,40,42,39,-1,42,43,41,-1,32,33,44,-1,32,44,35,-1,33,34,45,-1,33,45,44,-1,31,37,45,-1,31,45,34,-1,37,41,45,-1,46,40,38,-1,38,47,46,-1,47,38,35,-1,35,44,47,-1,41,43,48,-1,41,48,45,-1,44,45,48,-1,48,47,44,-1,47,48,49,-1,43,49,48,-1,49,46,47,-1,43,50,49,-1,42,40,51,-1,43,42,52,-1,51,52,42,-1,52,50,43,-1,52,51,53,-1,52,53,54,-1,55,50,52,-1,55,52,54,-1,40,46,56,-1,56,51,40,-1,46,49,57,-1,50,57,49,-1,57,56,46,-1,51,56,58,-1,51,58,53,-1,56,57,59,-1,56,59,58,-1,57,50,55,-1,57,55,59,-1,54,53,60,-1,54,60,61,-1,62,55,54,-1,62,54,61,-1,53,58,63,-1,53,63,60,-1,59,55,62,-1,59,62,64,-1,58,59,64,-1,58,64,63,-1,65,66,67,-1,67,68,69,-1,67,69,65,-1,70,65,69,-1,69,71,70,-1,71,69,72,-1,68,72,69,-1,72,73,71,-1,74,75,76,-1,76,77,78,-1,76,78,74,-1,66,74,78,-1,78,67,66,-1,67,78,79,-1,77,79,78,-1,79,68,67,-1,72,68,80,-1,73,72,81,-1,80,81,72,-1,81,82,73,-1,81,80,83,-1,82,81,84,-1,83,84,81,-1,84,85,82,-1,77,86,79,-1,68,79,87,-1,86,87,79,-1,87,80,68,-1,86,88,87,-1,80,87,89,-1,88,89,87,-1,89,83,80,-1,83,90,91,-1,83,91,84,-1,84,91,92,-1,84,92,85,-1,93,90,83,-1,93,83,89,-1,93,89,88,-1,93,88,94,-1,90,157,156,-1,90,156,91,-1,91,156,159,-1,91,159,92,-1,179,157,90,-1,179,90,93,-1,179,93,94,-1,179,94,168,-1,95,96,97,-1,204,199,95,-1,204,95,97,-1,199,201,98,-1,199,98,95,-1,98,99,95,-1,96,95,99,-1,99,98,100,-1,101,102,103,-1,102,101,210,-1,102,210,203,-1,102,203,204,-1,102,204,97,-1,97,104,102,-1,104,97,96,-1,103,102,104,-1,99,105,96,-1,100,106,99,-1,105,99,106,-1,106,100,107,-1,106,108,105,-1,107,109,106,-1,108,106,109,-1,109,107,110,-1,103,104,111,-1,96,112,104,-1,112,96,105,-1,111,104,112,-1,111,112,113,-1,105,114,112,-1,114,105,108,-1,113,112,114,-1,109,110,115,-1,109,115,116,-1,116,115,150,-1,116,150,149,-1,108,109,116,-1,108,116,117,-1,117,116,149,-1,117,149,152,-1,114,108,117,-1,114,117,118,-1,113,114,118,-1,113,118,119,-1,118,117,152,-1,118,152,176,-1,119,118,176,-1,119,176,174,-1,181,183,120,-1,120,212,121,-1,120,121,181,-1,186,181,121,-1,121,122,186,-1,122,121,211,-1,212,211,121,-1,211,216,122,-1,190,192,123,-1,123,221,124,-1,123,124,190,-1,183,190,124,-1,124,120,183,-1,120,124,220,-1,221,220,124,-1,220,212,120,-1,125,126,127,-1,125,127,128,-1,129,126,125,-1,129,125,130,-1,441,442,443,-1,438,439,440,-1,447,448,449,-1,450,451,452,-1,453,454,455,-1,133,135,136,-1,133,136,134,-1,395,396,397,-1,392,393,394,-1,138,132,131,-1,138,131,137,-1,389,390,391,-1,386,387,388,-1,129,130,140,-1,444,445,446,-1,129,140,139,-1,410,411,412,-1,413,414,415,-1,416,417,418,-1,401,402,403,-1,419,420,421,-1,398,399,400,-1,407,408,409,-1,404,405,406,-1,434,435,436,-1,141,145,146,-1,425,426,427,-1,430,431,432,-1,142,147,437,-1,428,144,429,-1,422,423,424,-1,143,148,433,-1,300,301,302,-1,303,304,305,-1,306,307,308,-1,153,309,310,-1,246,247,248,-1,343,344,345,-1,379,380,160,-1,346,347,348,-1,249,250,251,-1,349,350,351,-1,291,292,293,-1,294,295,296,-1,311,312,313,-1,316,162,317,-1,314,151,315,-1,252,253,254,-1,255,256,257,-1,258,259,260,-1,261,262,263,-1,164,384,385,-1,155,165,166,-1,381,382,383,-1,352,353,354,-1,355,356,357,-1,318,319,320,-1,321,322,323,-1,171,163,324,-1,358,359,360,-1,264,265,266,-1,361,362,363,-1,167,364,365,-1,267,268,269,-1,270,271,272,-1,273,274,275,-1,366,173,367,-1,325,326,327,-1,161,328,329,-1,330,331,332,-1,333,170,169,-1,334,335,336,-1,337,338,339,-1,154,340,341,-1,177,175,342,-1,297,298,299,-1,172,368,369,-1,276,277,278,-1,279,280,281,-1,370,371,372,-1,158,373,374,-1,375,376,377,-1,282,283,284,-1,178,180,378,-1,285,286,287,-1,288,289,290,-1,181,182,183,-1,182,181,184,-1,182,184,185,-1,186,184,181,-1,184,186,187,-1,187,188,184,-1,185,184,188,-1,188,187,189,-1,190,191,192,-1,191,190,193,-1,183,193,190,-1,193,183,182,-1,191,193,194,-1,182,195,193,-1,195,182,185,-1,194,193,195,-1,188,196,185,-1,189,197,188,-1,196,188,197,-1,197,189,198,-1,199,200,201,-1,197,202,196,-1,203,202,204,-1,205,204,202,-1,204,205,199,-1,202,197,205,-1,200,199,205,-1,198,205,197,-1,205,198,200,-1,194,195,206,-1,185,207,195,-1,207,185,196,-1,206,195,207,-1,206,207,208,-1,208,207,209,-1,196,209,207,-1,209,196,202,-1,202,203,209,-1,208,209,210,-1,210,209,203,-1,211,212,213,-1,213,214,215,-1,213,215,211,-1,216,211,215,-1,215,217,216,-1,217,215,218,-1,214,218,215,-1,218,219,217,-1,220,221,222,-1,222,223,224,-1,222,224,220,-1,212,220,224,-1,224,213,212,-1,213,224,225,-1,223,225,224,-1,225,214,213,-1,218,214,226,-1,219,218,227,-1,226,227,218,-1,227,228,219,-1,227,226,229,-1,229,230,227,-1,228,227,230,-1,230,229,231,-1,230,232,228,-1,232,230,233,-1,231,233,230,-1,233,234,232,-1,223,235,225,-1,214,225,236,-1,235,236,225,-1,236,226,214,-1,235,237,236,-1,237,238,239,-1,237,239,236,-1,226,236,239,-1,239,229,226,-1,229,239,240,-1,238,240,239,-1,240,231,229,-1,240,238,241,-1,240,241,242,-1,231,240,242,-1,238,234,243,-1,238,243,241,-1,234,233,244,-1,234,244,243,-1,233,231,245,-1,231,242,245,-1,233,245,244,-1}, 1672);
IndexedFaceSet672.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,5,6,-1,4,6,7,-1,8,9,10,-1,8,10,11,-1,12,13,14,-1,15,12,16,-1,14,16,12,-1,16,17,15,-1,14,18,16,-1,18,19,20,-1,18,20,16,-1,17,16,20,-1,20,21,17,-1,21,20,22,-1,19,22,20,-1,22,23,21,-1,13,24,25,-1,25,14,13,-1,26,15,17,-1,24,26,27,-1,17,27,26,-1,27,25,24,-1,17,21,27,-1,28,19,18,-1,18,29,28,-1,29,18,14,-1,14,25,29,-1,21,23,30,-1,21,30,27,-1,25,27,30,-1,30,29,25,-1,29,30,31,-1,23,31,30,-1,31,28,29,-1,23,32,31,-1,22,19,33,-1,23,22,34,-1,33,34,22,-1,34,32,23,-1,19,28,35,-1,35,33,19,-1,28,31,36,-1,32,36,31,-1,36,35,28,-1,32,34,37,-1,32,37,38,-1,34,33,39,-1,34,39,37,-1,39,33,35,-1,39,35,40,-1,40,35,36,-1,40,36,41,-1,32,38,41,-1,32,41,36,-1,38,37,42,-1,38,42,43,-1,39,44,42,-1,39,42,37,-1,44,39,40,-1,44,40,45,-1,45,40,41,-1,45,41,46,-1,38,43,46,-1,38,46,41,-1,42,44,47,-1,42,47,48,-1,43,42,48,-1,43,48,49,-1,48,47,50,-1,50,51,48,-1,49,48,51,-1,51,50,52,-1,51,53,49,-1,53,51,54,-1,52,54,51,-1,54,55,53,-1,44,45,56,-1,44,56,47,-1,45,46,57,-1,45,57,56,-1,43,49,57,-1,43,57,46,-1,49,53,57,-1,58,52,50,-1,50,59,58,-1,59,50,47,-1,47,56,59,-1,53,55,60,-1,53,60,57,-1,56,57,60,-1,60,59,56,-1,59,60,61,-1,55,61,60,-1,61,58,59,-1,55,62,61,-1,54,52,63,-1,55,54,64,-1,63,64,54,-1,64,62,55,-1,64,63,65,-1,64,65,66,-1,67,62,64,-1,67,64,66,-1,52,58,68,-1,68,63,52,-1,58,61,69,-1,62,69,61,-1,69,68,58,-1,63,68,70,-1,63,70,65,-1,68,69,71,-1,68,71,70,-1,69,62,67,-1,69,67,71,-1,66,65,72,-1,66,72,73,-1,74,67,66,-1,74,66,73,-1,65,70,75,-1,65,75,72,-1,71,67,74,-1,71,74,76,-1,70,71,76,-1,70,76,75,-1,77,78,79,-1,79,80,81,-1,79,81,77,-1,82,77,81,-1,81,83,82,-1,83,81,84,-1,80,84,81,-1,84,85,83,-1,86,87,88,-1,88,89,90,-1,88,90,86,-1,78,86,90,-1,90,79,78,-1,79,90,91,-1,89,91,90,-1,91,80,79,-1,84,80,92,-1,85,84,93,-1,92,93,84,-1,93,94,85,-1,93,92,95,-1,94,93,96,-1,95,96,93,-1,96,97,94,-1,89,98,91,-1,80,91,99,-1,98,99,91,-1,99,92,80,-1,98,100,99,-1,92,99,101,-1,100,101,99,-1,101,95,92,-1,95,102,103,-1,95,103,96,-1,96,103,104,-1,96,104,97,-1,105,102,95,-1,105,95,101,-1,105,101,100,-1,105,100,106,-1,102,107,108,-1,102,108,103,-1,103,108,109,-1,103,109,104,-1,110,107,102,-1,110,102,105,-1,110,105,106,-1,110,106,111,-1,112,113,114,-1,115,116,112,-1,115,112,114,-1,116,117,118,-1,116,118,112,-1,118,119,112,-1,113,112,119,-1,119,118,120,-1,121,122,123,-1,122,121,124,-1,122,124,125,-1,122,125,115,-1,122,115,114,-1,114,126,122,-1,126,114,113,-1,123,122,126,-1,119,127,113,-1,120,128,119,-1,127,119,128,-1,128,120,129,-1,128,130,127,-1,129,131,128,-1,130,128,131,-1,131,129,132,-1,123,126,133,-1,113,134,126,-1,134,113,127,-1,133,126,134,-1,133,134,135,-1,127,136,134,-1,136,127,130,-1,135,134,136,-1,131,132,137,-1,131,137,138,-1,138,137,139,-1,138,139,140,-1,130,131,138,-1,130,138,141,-1,141,138,140,-1,141,140,142,-1,136,130,141,-1,136,141,143,-1,135,136,143,-1,135,143,144,-1,143,141,142,-1,143,142,145,-1,144,143,145,-1,144,145,146,-1,147,148,149,-1,149,150,151,-1,149,151,147,-1,152,147,151,-1,151,153,152,-1,153,151,154,-1,150,154,151,-1,154,155,153,-1,156,157,158,-1,158,159,160,-1,158,160,156,-1,148,156,160,-1,160,149,148,-1,149,160,161,-1,159,161,160,-1,161,150,149,-1,162,163,164,-1,162,164,165,-1,166,163,162,-1,166,162,167,-1,162,165,168,-1,162,168,169,-1,167,162,169,-1,165,170,171,-1,165,171,168,-1,170,172,173,-1,170,173,171,-1,172,164,174,-1,172,174,173,-1,175,169,168,-1,175,168,174,-1,163,166,176,-1,163,176,175,-1,166,167,177,-1,167,169,177,-1,166,177,176,-1,178,164,163,-1,174,164,178,-1,178,163,179,-1,163,175,180,-1,163,180,179,-1,175,174,181,-1,174,178,181,-1,175,181,180,-1,178,179,182,-1,178,182,183,-1,181,178,183,-1,179,180,184,-1,179,184,182,-1,180,181,185,-1,181,183,185,-1,180,185,184,-1,186,187,188,-1,189,186,190,-1,188,190,186,-1,190,191,189,-1,188,192,190,-1,193,194,195,-1,192,196,197,-1,196,193,197,-1,192,197,190,-1,195,197,193,-1,191,190,197,-1,197,195,191,-1,187,198,199,-1,200,199,198,-1,199,188,187,-1,200,201,199,-1,201,202,199,-1,188,199,202,-1,202,192,188,-1,201,203,202,-1,192,202,203,-1,203,196,192,-1,196,203,204,-1,196,204,205,-1,198,206,200,-1,207,208,206,-1,208,200,206,-1,205,204,209,-1,207,209,208,-1,209,204,210,-1,204,203,210,-1,209,210,208,-1,200,208,210,-1,210,201,200,-1,201,210,203,-1,198,187,211,-1,198,211,206,-1,206,211,212,-1,212,207,206,-1,213,189,191,-1,211,213,214,-1,191,214,213,-1,214,212,211,-1,191,195,214,-1,209,215,205,-1,215,209,207,-1,207,212,215,-1,216,205,215,-1,195,194,217,-1,194,216,217,-1,195,217,214,-1,215,217,216,-1,212,214,217,-1,217,215,212,-1,218,219,220,-1,219,218,221,-1,219,221,222,-1,223,221,218,-1,221,223,224,-1,224,225,221,-1,222,221,225,-1,225,224,226,-1,227,228,229,-1,228,227,230,-1,220,230,227,-1,230,220,219,-1,228,230,231,-1,219,232,230,-1,232,219,222,-1,231,230,232,-1,225,233,222,-1,226,234,225,-1,233,225,234,-1,234,226,235,-1,236,237,238,-1,234,239,233,-1,240,239,241,-1,242,241,239,-1,241,242,236,-1,239,234,242,-1,237,236,242,-1,235,242,234,-1,242,235,237,-1,231,232,243,-1,222,244,232,-1,244,222,233,-1,243,232,244,-1,243,244,245,-1,245,244,246,-1,233,246,244,-1,246,233,239,-1,239,240,246,-1,245,246,247,-1,247,246,240,-1,248,249,250,-1,250,251,252,-1,250,252,248,-1,253,248,252,-1,252,254,253,-1,254,252,255,-1,251,255,252,-1,255,256,254,-1,257,258,259,-1,259,260,261,-1,259,261,257,-1,249,257,261,-1,261,250,249,-1,250,261,262,-1,260,262,261,-1,262,251,250,-1,255,251,263,-1,256,255,264,-1,263,264,255,-1,264,265,256,-1,264,263,266,-1,266,267,264,-1,265,264,267,-1,267,266,268,-1,267,269,265,-1,269,267,270,-1,268,270,267,-1,270,271,269,-1,260,272,262,-1,251,262,273,-1,272,273,262,-1,273,263,251,-1,272,274,273,-1,274,275,276,-1,274,276,273,-1,263,273,276,-1,276,266,263,-1,266,276,277,-1,275,277,276,-1,277,268,266,-1,277,275,278,-1,277,278,279,-1,268,277,279,-1,275,271,280,-1,275,280,278,-1,271,270,281,-1,271,281,280,-1,270,268,282,-1,268,279,282,-1,270,282,281,-1}, 1672);
TextureCoordinate& TextureCoordinate673 =  TextureCoordinate();
TextureCoordinate673.setPoint(new float[]{0.666986,56.2909,0.67079,56.2908,0.693373,58.7381,0.67705,56.2908,0.691244,58.8831,0.696877,58.4995,0.71812,60.6598,0.741862,61.7776,0.717567,60.9276,0.719028,60.2192,0.742567,62.1284,0.740703,61.2003,0.68331,56.2908,0.70038,58.261,0.687114,56.2907,0.70251,58.116,0.739543,60.623,0.719938,59.7785,0.72049,59.5108,0.738839,60.2723,0.75974,61.5769,0.762369,62.2308,0.763967,62.6282,0.757112,60.923,0.755514,60.5257,0.866398,62.4961,0.855127,61.2523,0.862137,62.0259,0.848116,60.4786,0.843856,60.0085,0.938853,61.097,0.925858,59.9722,0.933941,60.6718,0.917777,59.2726,0.912865,58.8474,0.955351,59.3274,0.96046,59.7083,0.946944,58.7005,0.960167,58.1207,0.965327,58.4624,0.958185,56.442,0.951675,57.5585,0.963309,56.7282,0.949752,55.9712,0.938536,58.0736,0.933427,57.6926,0.94132,55.5003,0.943183,56.9962,0.938023,56.6545,0.936195,55.2142,0.944244,54.2003,0.952471,54.575,0.957471,54.8027,0.929504,50.4388,0.934171,50.5805,0.921824,50.2057,0.936018,53.8256,0.931018,53.5979,0.914145,49.9725,0.909478,49.8309,0.896011,45.6863,0.899697,45.6863,0.889946,45.6863,0.883881,45.6864,0.880196,45.6864,0.809032,44.6694,0.822402,44.9379,0.843236,47.7152,0.859061,50.4048,0.829148,47.2916,0.80462,44.5808,0.824498,47.1517,0.844058,49.6873,0.839107,49.4505,0.836527,45.2216,0.842493,45.3414,0.864405,48.3519,0.881607,51.483,0.858118,48.1628,0.874912,51.1628,0.858184,52.258,0.843064,51.1913,0.838075,50.8394,0.843698,53.022,0.828972,51.7848,0.824112,51.3766,0.880903,53.8609,0.874156,53.3849,0.865827,54.8812,0.859256,54.3291,0.785566,53.8175,0.771913,52.3816,0.767407,51.9078,0.79999,55.3344,0.806084,55.9752,0.385688,47.5706,0.407874,50.834,0.378562,48.0156,0.388091,47.4206,0.41059,50.0492,0.411506,49.7846,0.367824,48.6862,0.371055,48.4845,0.403781,52.0166,0.405012,51.6608,0.441036,52.5692,0.438226,51.4403,0.437279,51.0597,0.469208,53.2129,0.463637,51.9365,0.461758,51.5062,0.445271,54.2701,0.443997,53.7584,0.477602,55.1362,0.475077,54.5576,0.532914,51.9616,0.536109,52.4516,0.54559,53.905,0.555577,55.4361,0.559875,56.095,0.251258,2.1522,0.261851,3.49904,0.265184,3.9229,0.235424,0.138883,0.239989,0.71932,0.66471,16.6811,0.66471,16.6811,0.594273,16.6814,0.594273,16.6814,0.675523,16.681,0.675523,16.681,0.822395,45.6867,0.892832,45.6863,0.58346,16.6815,0.811582,45.6867,0.58346,16.6815,0.811582,45.6867,0.822395,45.6867,0.892832,45.6863,0.903645,45.6862,0.903645,45.6862,0.597819,14.1555,0.644938,14.1552,0.922442,55.5146,0.875324,55.5149,0.649854,15.9474,0.616953,15.9476,0.903308,53.7225,0.870408,53.7227,0.609097,52.8531,0.60396,52.1672,0.809189,31.2953,0.619362,54.2234,0.824857,34.3872,0.856161,40.5644,0.753163,11.6085,0.690925,52.8527,0.702215,54.223,0.795258,32.4412,0.685274,52.1668,0.767205,18.5578,0.782904,35.2236,0.812919,32.0314,0.838386,37.057,0.77933,24.5581,0.756507,13.2633,0.911805,20.3693,0.964294,43.3859,0.718688,56.2225,0.832524,45.4044,0.897229,48.6685,0.871725,43.6357,0.832065,50.6554,0.809206,39.3436,0.63434,56.2229,0.901837,49.578,0.62956,55.5847,0.887259,46.7013,0.836195,52.6995,0.71343,55.5843,0.82313,46.2339,0.13336,3.70968,0.100477,3.74955,0.123215,2.87537,0.117792,4.92274,0.0875939,5.42694,0.139392,4.20564,0.127603,5.59071,0.1211,7.4552,0.139401,8.56252,0.109339,1.73434,0.0691786,1.54882,0.0981,0.810171,0.0813155,2.41996,0.0434913,2.76835,0.0569508,3.57635,0.0823868,7.72282,0.121304,9.89751,0.142407,11.0668,0.124562,14.5699,0.121631,11.9982,0.129837,14.6415,0.0905654,10.6557,0.103551,14.285,0.115688,14.4497,0.110517,11.5261,0.0348425,5.30687,0.0482333,5.90841,0.0591216,9.59243,0.0702924,9.89184,0.0937206,14.1518,0.393643,3.70832,0.390666,2.87398,0.427151,3.74784,0.466417,5.42496,0.42829,4.92112,0.395413,4.2043,0.428987,5.58914,0.464816,7.4534,0.463934,8.56082,0.386593,1.73289,0.383294,0.808679,0.423832,1.54697,0.468699,2.76613,0.425398,2.41816,0.467949,3.5742,0.507736,7.7206,0.503028,9.89551,0.500318,11.0649,0.545689,10.6533,0.539429,11.5238,0.580244,14.4472,0.535742,11.996,0.573262,14.5676,0.569113,14.6392,0.517275,5.30435,0.513347,5.90598,0.560406,9.5898,0.597525,14.1492,0.553946,9.88931,0.589791,14.2825,0.617348,16.6813,0.608566,16.6814,0.585083,16.6815,0.589796,16.6815,0.597724,16.6814,0.0425848,2.2518,0.20529,2.37509,0.0903542,9.52638,0.20529,2.37509,0.253711,9.60714,0.0903542,9.52638,0.131603,15.8079,0.295522,15.8517,0.0539563,3.98382,0.295522,15.8517,0.21682,4.09727,0.0539563,3.98382,0.0425848,2.2518,0.0539563,3.98382,0.21682,4.09727,0.21682,4.09727,0.20529,2.37509,0.0425848,2.2518,0.311006,43.1277,0.477368,43.011,0.233247,31.2863,0.477368,43.011,0.398547,31.2389,0.233247,31.2863,0.131603,15.8079,0.233247,31.2863,0.398547,31.2389,0.398547,31.2389,0.295522,15.8517,0.131603,15.8079,0.491611,45.1383,0.477368,43.011,0.311006,43.1277,0.311006,43.1277,0.325056,45.2675,0.491611,45.1383,0.350451,24.0556,0.446559,38.4096,0.28061,38.4991,0.325056,45.2675,0.28061,38.4991,0.446559,38.4096,0.446559,38.4096,0.491611,45.1383,0.325056,45.2675,0.185794,24.0601,0.0903542,9.52638,0.253711,9.60714,0.253711,9.60714,0.350451,24.0556,0.185794,24.0601,0.185794,24.0601,0.350451,24.0556,0.28061,38.4991,0.789929,36.6652,0.780708,34.7731,0.809189,31.2953,0.808353,40.4452,0.789929,36.6652,0.824857,34.3872,0.809189,31.2953,0.824857,34.3872,0.789929,36.6652,0.856161,40.5644,0.808353,40.4452,0.780708,34.7731,0.782904,35.2236,0.812919,32.0314,0.812919,32.0314,0.780708,34.7731,0.838386,37.057,0.782904,35.2236,0.782904,35.2236,0.832524,45.4044,0.838386,37.057,0.897229,48.6685,0.871725,43.6357,0.832524,45.4044,0.832524,45.4044,0.782904,35.2236,0.780708,34.7731,0.835237,45.961,0.835237,45.961,0.832524,45.4044,0.832524,45.4044,0.835237,45.961,0.901837,49.578,0.901837,49.578,0.826657,44.2005,0.808353,40.4452,0.856161,40.5644,0.835237,45.961,0.826657,44.2005,0.887259,46.7013,0.887259,46.7013,0.826657,44.2005,0.835237,45.961,0.919238,23.6283,0.938726,32.1743,0.795258,32.4412,0.909484,19.3509,0.919238,23.6283,0.767205,18.5578,0.795258,32.4412,0.767205,18.5578,0.919238,23.6283,0.909484,19.3509,0.911805,20.3693,0.964294,43.3859,0.909484,19.3509,0.964294,43.3859,0.967164,44.6443,0.967164,44.6443,0.964294,43.3859,0.832065,50.6554,0.832065,50.6554,0.964294,43.3859,0.809206,39.3436,0.911805,20.3693,0.809206,39.3436,0.77933,24.5581,0.911805,20.3693,0.836195,52.6995,0.967164,44.6443,0.958085,40.6642,0.967164,44.6443,0.836195,52.6995,0.938726,32.1743,0.82313,46.2339,0.938726,32.1743,0.958085,40.6642,0.82313,46.2339,0.958085,40.6642,0.753163,11.6085,0.909484,19.3509,0.911805,20.3693,0.909484,19.3509,0.753163,11.6085,0.911805,20.3693,0.756507,13.2633,0.636861,-12.2874,0.999755,95.7106,0.983332,95.7109,0.636861,-12.2874,0.653284,-12.2876,0.999755,95.7106,0.513459,-12.2858,0.876353,95.7122,0.85993,95.7125,0.513459,-12.2858,0.529882,-12.286,0.876353,95.7122,0.972892,53.7311,0.93522,53.732,0.9078,50.3761,0.682937,28.5635,0.972892,53.7311,0.922992,50.3757,0.972892,53.7311,0.9078,50.3761,0.922992,50.3757,0.93522,53.732,0.695166,31.9198,0.9078,50.3761,0.695166,31.9198,0.645266,28.5645,0.682937,28.5635,0.93522,53.732,0.645266,28.5645,0.695166,31.9198,0.695166,31.9198,0.682937,28.5635,0.710358,31.9194,0.682937,28.5635,0.922992,50.3757,0.710358,31.9194,0.875324,55.5149,0.616953,15.9476,0.870408,53.7227,0.875324,55.5149,0.597819,14.1555,0.616953,15.9476,0.922442,55.5146,0.870408,53.7227,0.644938,14.1552,0.922442,55.5146,0.903308,53.7225,0.903308,53.7225,0.597819,14.1555,0.644938,14.1552,0.649854,15.9474,0.649854,15.9474,0.811693,26.2658,0.835389,55.2719,0.905827,55.2718,0.811693,26.2658,0.741255,26.2659,0.835389,55.2719,0.750617,22.0681,0.902388,41.4049,0.90994,41.4049,0.750617,22.0681,0.743065,22.0681,0.902388,41.4049,0.748894,30.1678,0.742967,30.1678,0.867996,49.3289,0.748894,30.1678,0.867996,49.3289,0.873922,49.3288}, 912);
IndexedFaceSet672.setTexCoord(&TextureCoordinate673);

Coordinate& Coordinate674 =  Coordinate();
Coordinate674.setPoint(new float[]{0.398327,-0.242612,-0.074685,0.42126,-0.242612,-0.097618,0.42126,-0.242612,-0.01932,0.398327,-0.242612,-0.042253,0.398327,0.236064,-0.042253,0.42126,0.236064,-0.01932,0.42126,0.236064,-0.097618,0.398327,0.236064,-0.074685,0.570642,0.236064,-0.01932,0.593575,0.236064,-0.042253,0.593575,0.236064,-0.074685,0.570642,0.236064,-0.097618,-0.0851868,0.411045,-0.065633,-0.0771188,0.411045,-0.040793,-0.0700458,0.451433,-0.040793,-0.0638428,0.411045,-0.081245,-0.0769788,0.453825,-0.065633,-0.0586358,0.447496,-0.081245,-0.0496168,0.483148,-0.040793,-0.0179088,0.501596,-0.040793,-0.0552548,0.487567,-0.065633,-0.0403398,0.475876,-0.081245,-0.0222648,0.507385,-0.065633,-0.0107398,0.49207,-0.081245,-0.0505668,0.411045,-0.040793,-0.0472268,0.44356,-0.040793,-0.0424988,0.411045,-0.065633,-0.0402928,0.441168,-0.065633,-0.00357077,0.482543,-0.040793,-0.0310628,0.468605,-0.040793,-0.0254248,0.464186,-0.065633,0.00078623,0.476754,-0.065633,0.0233522,0.498286,-0.081245,0.0180212,0.509077,-0.040793,0.0147812,0.515635,-0.065633,0.0286842,0.487495,-0.040793,0.0319242,0.480937,-0.065633,0.234212,0.513463,-0.065633,0.231054,0.492937,-0.081245,0.233018,0.505704,-0.040793,0.22909,0.480169,-0.040793,0.227897,0.47241,-0.065633,0.411203,0.490381,-0.065633,0.402407,0.471818,-0.081245,0.407878,0.483364,-0.040793,0.396937,0.460272,-0.040793,0.393612,0.453256,-0.065633,0.475706,0.46118,-0.040793,0.480187,0.467467,-0.065633,0.468333,0.450834,-0.081245,0.506045,0.441268,-0.040793,0.51129,0.446907,-0.065633,0.529841,0.413565,-0.040793,0.497415,0.431988,-0.081245,0.535936,0.418288,-0.065633,0.519811,0.405794,-0.081245,0.460959,0.440488,-0.040793,0.456478,0.4342,-0.065633,0.509782,0.398023,-0.040793,0.488784,0.422709,-0.040793,0.483539,0.41707,-0.065633,0.503687,0.393301,-0.065633,0.537667,0.37657,-0.081245,0.548864,0.382754,-0.040793,0.555669,0.386512,-0.065633,0.569146,0.314494,-0.040793,0.57668,0.316833,-0.065633,0.556748,0.310647,-0.081245,0.52647,0.370386,-0.040793,0.519665,0.366628,-0.065633,0.54435,0.306799,-0.040793,0.536816,0.304461,-0.065633,0.577385,0.236064,-0.040793,0.585202,0.236064,-0.065633,0.564522,0.236064,-0.081245,0.55166,0.236064,-0.040793,0.543843,0.236064,-0.065633,0.409887,0.219276,-0.035236,0.433763,0.223708,-0.022548,0.431622,0.269542,-0.022548,0.420324,0.313928,-0.022548,0.408812,0.262549,-0.035236,0.402008,0.217813,-0.060893,0.401285,0.26024,-0.060893,0.400474,0.302086,-0.035236,0.393923,0.298178,-0.060893,0.458986,0.22839,-0.032266,0.469641,0.230368,-0.056887,0.465897,0.280051,-0.056887,0.450154,0.331722,-0.056887,0.455718,0.276929,-0.032266,0.441295,0.326438,-0.032266,0.387553,0.34451,-0.022548,0.37328,0.326906,-0.035236,0.36857,0.321097,-0.060893,0.34409,0.357117,-0.022548,0.333495,0.336699,-0.035236,0.329999,0.329961,-0.060893,0.409001,0.370963,-0.056887,0.402631,0.363107,-0.032266,0.360011,0.387799,-0.056887,0.355283,0.378688,-0.032266,0.207542,0.370239,-0.022548,0.202536,0.346542,-0.035236,0.200884,0.338722,-0.060893,0.21283,0.395273,-0.032266,0.215065,0.405848,-0.056887,0.0240142,0.376923,-0.022476,0.0229272,0.354309,-0.030895,0.0223832,0.34299,-0.05218,0.0250932,0.399389,-0.031153,0.0256002,0.409921,-0.05286,-0.536292,0.267115,-0.035069,-0.543674,0.320972,-0.022545,-0.558828,0.274459,-0.022545,-0.556458,-0.279483,-0.023379,-0.539645,-0.277498,-0.032999,-0.529651,-0.276316,-0.060893,-0.528695,0.26464,-0.060893,-0.524822,0.30802,-0.035069,-0.518468,0.303654,-0.060893,-0.592785,0.285525,-0.056887,-0.582569,0.282196,-0.032144,-0.572079,0.340487,-0.056887,-0.598077,-0.2844,-0.056887,-0.579452,-0.282201,-0.026555,-0.563533,0.334616,-0.032144,-0.502287,0.349609,-0.022545,-0.489417,0.330979,-0.035069,-0.485079,0.324699,-0.060893,-0.45328,0.360235,-0.022545,-0.443805,0.33917,-0.035069,-0.440612,0.332069,-0.060893,-0.521677,0.377679,-0.056887,-0.515843,0.369234,-0.032144,-0.467556,0.391974,-0.056887,-0.463261,0.382425,-0.032144,-0.297308,0.339591,-0.060893,-0.298703,0.347677,-0.035069,-0.150069,0.34299,-0.05218,-0.150613,0.354309,-0.030895,-0.302839,0.371662,-0.022545,-0.1517,0.376923,-0.022476,-0.307196,0.39693,-0.032144,-0.309071,0.407803,-0.056887,-0.152779,0.399389,-0.031153,-0.153286,0.409921,-0.05286,-0.339847,-0.456717,-0.032999,-0.347448,-0.470486,-0.023379,-0.0638428,-0.482409,-0.022555,0.219762,-0.470486,-0.023379,-0.0638428,-0.460182,-0.03561,-0.335328,-0.448532,-0.060893,-0.0638428,-0.453187,-0.060893,0.212161,-0.456717,-0.032999,0.207642,-0.448532,-0.060893,-0.357843,-0.489317,-0.026555,-0.366263,-0.504569,-0.056887,-0.0638428,-0.515635,-0.056887,0.238577,-0.504569,-0.056887,-0.0638428,-0.506056,-0.032541,0.230157,-0.489317,-0.026555,0.570642,-0.242612,-0.097618,0.570642,-0.242612,-0.01932,0.42126,-0.242612,-0.01932,0.42126,-0.242612,-0.097618,0.593575,-0.242612,-0.042253,0.593575,-0.242612,-0.074685,0.42126,0.236064,-0.097618,0.570642,0.236064,-0.097618,0.398327,-0.242612,-0.074685,0.398327,0.236064,-0.074685,0.398327,-0.242612,-0.042253,0.398327,0.236064,-0.042253,0.42126,0.236064,-0.01932,0.570642,0.236064,-0.01932,0.593575,0.236064,-0.042253,0.593575,0.236064,-0.074685,0.465831,-0.178789,-0.01932,0.526072,-0.178789,-0.01932,0.526072,0.172241,-0.01932,0.465831,0.172241,-0.01932,0.516983,-0.163578,-0.037885,0.47492,-0.163578,-0.037885,0.516983,0.15703,-0.037885,0.47492,0.15703,-0.037885,-0.150613,0.354309,-0.030895,-0.150069,0.34299,-0.05218,-0.0953888,0.322186,-0.048252,-0.1517,0.376923,-0.022476,-0.0955708,0.340683,-0.013676,-0.0959338,0.377638,0,-0.0326518,0.322502,-0.048312,0.0229272,0.354309,-0.030895,0.0240142,0.376923,-0.022476,-0.0321118,0.377629,-0.000342004,0.0223832,0.34299,-0.05218,-0.0324718,0.340891,-0.013938,-0.150198,0.345685,-0.076329,-0.0954328,0.32659,-0.087482,-0.0957278,0.356655,-0.112906,-0.0323158,0.356769,-0.112589,-0.0326088,0.326881,-0.087313,0.0225122,0.345685,-0.076329,0.0254402,0.406591,-0.077013,0.0256002,0.409921,-0.05286,-0.153126,0.406591,-0.077013,-0.0964098,0.426121,-0.088592,-0.0961138,0.396012,-0.113761,-0.0316388,0.425827,-0.088417,-0.0319328,0.395894,-0.113438,-0.153286,0.409921,-0.05286,-0.0964638,0.431562,-0.049357,-0.152779,0.399389,-0.031153,-0.0962948,0.414352,-0.014095,-0.0315858,0.431236,-0.04941,0.0250932,0.399389,-0.031153,-0.0317538,0.414127,-0.014354,-0.339847,-0.456717,-0.032999,-0.410249,-0.456062,-0.023379,-0.347448,-0.470486,-0.023379,-0.393095,-0.4367,-0.032999,-0.465547,-0.428382,-0.023379,-0.335328,-0.448532,-0.060893,-0.38343,-0.425676,-0.060893,-0.428319,-0.394908,-0.032999,-0.407978,-0.376633,-0.060893,-0.357843,-0.489317,-0.026555,-0.439917,-0.492382,-0.056887,-0.366263,-0.504569,-0.056887,-0.428708,-0.478005,-0.026555,-0.514733,-0.472259,-0.056887,-0.499666,-0.458924,-0.026555,-0.514883,-0.390495,-0.023379,-0.468623,-0.354604,-0.032999,-0.443371,-0.335306,-0.060893,-0.539645,-0.277498,-0.032999,-0.502966,-0.319938,-0.060893,-0.529651,-0.276316,-0.060893,-0.546456,-0.342095,-0.023379,-0.579452,-0.282201,-0.026555,-0.556458,-0.279483,-0.023379,-0.518662,-0.32773,-0.032999,-0.575415,-0.430368,-0.056887,-0.55705,-0.42044,-0.026555,-0.595405,-0.359644,-0.056887,-0.576709,-0.354702,-0.026555,-0.598077,-0.2844,-0.056887,0.212161,-0.456717,-0.032999,0.219762,-0.470486,-0.023379,0.282563,-0.456062,-0.023379,0.337861,-0.428382,-0.023379,0.265409,-0.4367,-0.032999,0.207642,-0.448532,-0.060893,0.255744,-0.425676,-0.060893,0.300633,-0.394908,-0.032999,0.280292,-0.376633,-0.060893,0.230157,-0.489317,-0.026555,0.238577,-0.504569,-0.056887,0.312231,-0.492382,-0.056887,0.387047,-0.472259,-0.056887,0.301022,-0.478005,-0.026555,0.37198,-0.458924,-0.026555,0.387197,-0.390495,-0.023379,0.340937,-0.354604,-0.032999,0.315685,-0.335306,-0.060893,0.41877,-0.342095,-0.023379,0.390976,-0.32773,-0.032999,0.428772,-0.279483,-0.023379,0.37528,-0.319938,-0.060893,0.411959,-0.277498,-0.032999,0.401965,-0.276316,-0.060893,0.447729,-0.430368,-0.056887,0.429364,-0.42044,-0.026555,0.467719,-0.359644,-0.056887,0.470391,-0.2844,-0.056887,0.449023,-0.354702,-0.026555,0.451766,-0.282201,-0.026555,0.470196,-0.242612,-0.056887,0.451571,-0.242612,-0.026555,0.40177,-0.242612,-0.060893,0.411764,-0.242612,-0.032999,0.428577,-0.242612,-0.023379}, 849);
IndexedFaceSet672.setCoord(&Coordinate674);

Shape667.setGeometry(&IndexedFaceSet672);

Transform666.addChild(&Shape667);

Transform659.addChild(&Transform666);

Transform& Transform675 =  Transform();
Transform675.setDEF(CString("deco2"));
Transform675.setTranslation(new float[]{1.19209e-7,0,1.49012e-8});
Transform675.setCenter(new float[]{0.495951,-0.003274,-0.037885});
Shape& Shape676 =  Shape();
Appearance& Appearance677 =  Appearance();
Material& Material678 =  Material();
Material678.setAmbientIntensity(0);
Material678.setDiffuseColor(new float[]{0,0.0316209,0.191489});
Material678.setShininess(0);
Appearance677.addChild(&Material678);

Shape676.addChild(&Appearance677);

IndexedFaceSet& IndexedFaceSet679 =  IndexedFaceSet();
IndexedFaceSet679.setConvex(False);
IndexedFaceSet679.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1}, 8);
Coordinate& Coordinate680 =  Coordinate();
Coordinate680.setPoint(new float[]{0.47492,-0.163578,-0.037885,0.516983,-0.163578,-0.037885,0.516983,0.15703,-0.037885,0.47492,0.15703,-0.037885}, 12);
IndexedFaceSet679.setCoord(&Coordinate680);

Shape676.setGeometry(&IndexedFaceSet679);

Transform675.addChild(&Shape676);

Transform659.addChild(&Transform675);

Transform& Transform681 =  Transform();
Transform681.setDEF(CString("back_i"));
Transform681.setTranslation(new float[]{1.19209e-7,0,-2.98023e-8});
Shape& Shape682 =  Shape();
Appearance& Appearance683 =  Appearance();
Material& Material684 =  Material();
Material684.setAmbientIntensity(0.16);
Material684.setDiffuseColor(new float[]{1,1,1});
Appearance683.addChild(&Material684);

ImageTexture& ImageTexture685 =  ImageTexture();
ImageTexture685.setUrl(new CString[]{CString("board.jpg")}, 1);
Appearance683.addChild(&ImageTexture685);

TextureTransform& TextureTransform686 =  TextureTransform();
Appearance683.setTextureTransform(TextureTransform686);

Shape682.addChild(&Appearance683);

IndexedFaceSet& IndexedFaceSet687 =  IndexedFaceSet();
IndexedFaceSet687.setConvex(False);
IndexedFaceSet687.setCreaseAngle(3.14159);
IndexedFaceSet687.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,3,2,4,-1,5,3,4,-1,5,6,3,-1,6,0,3,-1,7,6,5,-1,7,8,6,-1,9,8,7,-1,9,10,8,-1,11,10,9,-1,11,9,12,-1,13,11,12,-1,14,11,13,-1,14,13,15,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,19,14,18,-1,20,14,19,-1,21,20,19,-1,21,22,20,-1,23,22,21,-1,23,24,22,-1,25,24,23,-1,25,26,24,-1,25,27,26,-1,28,27,25,-1,28,29,27,-1,30,27,29,-1,30,31,27,-1,31,26,27,-1,26,31,24,-1,24,31,32,-1,24,32,22,-1,33,32,31,-1,33,31,30,-1,34,32,33,-1,34,35,32,-1,22,32,35,-1,22,35,20,-1,36,35,34,-1,36,37,35,-1,20,35,37,-1,20,37,14,-1,38,37,36,-1,14,37,38,-1,14,38,11,-1,38,36,39,-1,39,40,38,-1,11,38,40,-1,39,41,40,-1,42,40,41,-1,42,43,40,-1,11,40,43,-1,11,43,10,-1,44,43,42,-1,45,46,44,-1,44,46,43,-1,10,43,46,-1,10,46,8,-1,0,47,1,-1,47,0,48,-1,6,48,0,-1,47,48,45,-1,45,48,46,-1,8,46,48,-1,8,48,6,-1}, 272);
TextureCoordinate& TextureCoordinate688 =  TextureCoordinate();
TextureCoordinate688.setPoint(new float[]{0.767017,0.346604,0.997082,0.249631,0.996383,0.803026,0.76912,0.630569,0.992895,0.856437,0.97823,0.911985,0.762952,0.730811,0.939893,0.954171,0.741941,0.74692,0.894256,0.97227,0.692417,0.752493,0.605068,0.756956,0.759231,0.991674,0.582733,0.996052,0.41165,0.757999,0.55199,0.999171,0.499412,0.999478,0.41609,0.996052,0.270967,0.993775,0.123329,0.976758,0.321631,0.752493,0.0729123,0.961391,0.277387,0.74692,0.0259599,0.921408,0.235871,0.730811,0.00667105,0.862322,0.229703,0.630569,0.228978,0.368946,0.00174124,0.249631,0.00423038,0.168741,0.0228522,0.0927101,0.231805,0.276239,0.269287,0.25117,0.079381,0.0476757,0.149077,0.0260427,0.320558,0.234457,0.21769,0.0129412,0.382853,0.230325,0.497749,0.221936,0.499412,0.00104484,0.591884,0.227298,0.781133,0.0129412,0.849746,0.0260427,0.674867,0.234457,0.919442,0.0476757,0.97597,0.0927101,0.723537,0.240399,0.994592,0.168741,0.750859,0.25117}, 98);
IndexedFaceSet687.setTexCoord(&TextureCoordinate688);

Coordinate& Coordinate689 =  Coordinate();
Coordinate689.setDEF(CString("monback"));
Coordinate689.setPoint(new float[]{0.223424,-0.194196,-0.187896,0.470391,-0.2844,-0.056887,0.469641,0.230368,-0.056887,0.225681,0.0699485,-0.187896,0.465897,0.280051,-0.056887,0.450154,0.331722,-0.056887,0.21906,0.163194,-0.187896,0.409001,0.370963,-0.056887,0.196505,0.178178,-0.187896,0.360011,0.387799,-0.056887,0.143343,0.183362,-0.187896,0.0495762,0.187514,-0.187896,0.215065,0.405848,-0.056887,0.0256002,0.409921,-0.05286,-0.158052,0.188484,-0.187896,-0.00740177,0.412822,-0.056887,-0.0638428,0.413108,-0.056887,-0.153286,0.409921,-0.05286,-0.309071,0.407803,-0.056887,-0.467556,0.391974,-0.056887,-0.254685,0.183362,-0.187896,-0.521677,0.377679,-0.056887,-0.302179,0.178178,-0.187896,-0.572079,0.340487,-0.056887,-0.346746,0.163194,-0.187896,-0.592785,0.285525,-0.056887,-0.353367,0.0699485,-0.187896,-0.354145,-0.173413,-0.187896,-0.598077,-0.2844,-0.056887,-0.595405,-0.359644,-0.056887,-0.575415,-0.430368,-0.056887,-0.35111,-0.259649,-0.187896,-0.310875,-0.282969,-0.187896,-0.514733,-0.472259,-0.056887,-0.439917,-0.492382,-0.056887,-0.255837,-0.298515,-0.187896,-0.366263,-0.504569,-0.056887,-0.188965,-0.302359,-0.187896,-0.0656278,-0.310162,-0.187896,-0.0638428,-0.515635,-0.056887,0.0354232,-0.305174,-0.187896,0.238577,-0.504569,-0.056887,0.312231,-0.492382,-0.056887,0.124503,-0.298515,-0.187896,0.387047,-0.472259,-0.056887,0.447729,-0.430368,-0.056887,0.176749,-0.292988,-0.187896,0.467719,-0.359644,-0.056887,0.206078,-0.282969,-0.187896}, 147);
IndexedFaceSet687.setCoord(&Coordinate689);

Shape682.setGeometry(&IndexedFaceSet687);

Transform681.addChild(&Shape682);

Transform659.addChild(&Transform681);

Transform& Transform690 =  Transform();
Transform690.setDEF(CString("back_o"));
Transform690.setTranslation(new float[]{1.78814e-7,0,0});
Transform690.setCenter(new float[]{-0.063843,-0.0512635,-0.120378});
Shape& Shape691 =  Shape();
Appearance& Appearance692 =  Appearance();
Material& Material693 =  Material();
Material693.setAmbientIntensity(0);
Material693.setDiffuseColor(new float[]{0.61,0.61,0.61});
Material693.setSpecularColor(new float[]{0.998393,1,0.622082});
Material693.setEmissiveColor(new float[]{0.00155561,0.0368184,0.0425532});
Material693.setShininess(0.170213);
Appearance692.addChild(&Material693);

ImageTexture& ImageTexture694 =  ImageTexture();
ImageTexture694.setUrl(new CString[]{CString("mt1.png")}, 1);
Appearance692.addChild(&ImageTexture694);

TextureTransform& TextureTransform695 =  TextureTransform();
Appearance692.setTextureTransform(TextureTransform695);

Shape691.addChild(&Appearance692);

IndexedFaceSet& IndexedFaceSet696 =  IndexedFaceSet();
IndexedFaceSet696.setCcw(False);
IndexedFaceSet696.setConvex(False);
IndexedFaceSet696.setCreaseAngle(3.14159);
IndexedFaceSet696.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,3,2,4,-1,5,3,4,-1,5,6,3,-1,6,0,3,-1,7,6,5,-1,7,8,6,-1,9,8,7,-1,9,10,8,-1,11,10,9,-1,11,9,12,-1,13,11,12,-1,14,11,13,-1,14,13,15,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,19,14,18,-1,20,14,19,-1,21,20,19,-1,21,22,20,-1,23,22,21,-1,23,24,22,-1,25,24,23,-1,25,26,24,-1,25,27,26,-1,28,27,25,-1,28,29,27,-1,30,27,29,-1,30,31,27,-1,31,26,27,-1,26,31,24,-1,24,31,32,-1,24,32,22,-1,33,32,31,-1,33,31,30,-1,34,32,33,-1,34,35,32,-1,22,32,35,-1,22,35,20,-1,36,35,34,-1,36,37,35,-1,20,35,37,-1,20,37,14,-1,38,37,36,-1,14,37,38,-1,14,38,11,-1,38,36,39,-1,39,40,38,-1,11,38,40,-1,39,41,40,-1,42,40,41,-1,42,43,40,-1,11,40,43,-1,11,43,10,-1,44,43,42,-1,45,46,44,-1,44,46,43,-1,10,43,46,-1,10,46,8,-1,0,47,1,-1,47,0,48,-1,6,48,0,-1,47,48,45,-1,45,48,46,-1,8,46,48,-1,8,48,6,-1}, 272);
TextureCoordinate& TextureCoordinate697 =  TextureCoordinate();
TextureCoordinate697.setPoint(new float[]{0.737642,-0.345787,0.942113,-0.25236,0.941492,-0.785524,0.73951,-0.619371,0.938392,-0.836982,0.925358,-0.8905,0.734029,-0.715949,0.891286,-0.931143,0.715355,-0.731469,0.850726,-0.948581,0.67134,-0.736838,0.593708,-0.741138,0.730721,-0.967275,0.573858,-0.971494,0.421807,-0.742143,0.546534,-0.974498,0.499805,-0.974795,0.425753,-0.971494,0.296774,-0.9693,0.165559,-0.952905,0.341801,-0.736838,0.120751,-0.938099,0.30248,-0.731469,0.0790218,-0.899578,0.265581,-0.715949,0.0618787,-0.842652,0.2601,-0.619371,0.259456,-0.367313,0.0574973,-0.25236,0.0597095,-0.174427,0.0762598,-0.101175,0.261968,-0.277995,0.29528,-0.253842,0.1265,-0.057787,0.188443,-0.0369449,0.340848,-0.23774,0.249423,-0.0243223,0.396213,-0.233759,0.498327,-0.225677,0.499805,-0.0128608,0.58199,-0.230843,0.750187,-0.0243223,0.811168,-0.0369449,0.655742,-0.23774,0.87311,-0.057787,0.92335,-0.101175,0.698998,-0.243465,0.939901,-0.174427,0.723281,-0.253842}, 98);
IndexedFaceSet696.setTexCoord(&TextureCoordinate697);

Coordinate& Coordinate698 =  Coordinate();
Coordinate698.setUSE(CString("monback"));
IndexedFaceSet696.setCoord(&Coordinate698);

Shape691.setGeometry(&IndexedFaceSet696);

Transform690.addChild(&Shape691);

Transform659.addChild(&Transform690);

Transform& Transform699 =  Transform();
Transform699.setDEF(CString("green"));
Transform699.setTranslation(new float[]{1.19209e-7,0,-2.98023e-8});
Shape& Shape700 =  Shape();
Appearance& Appearance701 =  Appearance();
Material& Material702 =  Material();
Material702.setAmbientIntensity(0);
Material702.setDiffuseColor(new float[]{0,0.234043,0.0845669});
Material702.setSpecularColor(new float[]{0,1,0.361331});
Material702.setEmissiveColor(new float[]{0,0.0212766,0.0076879});
Material702.setShininess(0.202128);
Appearance701.addChild(&Material702);

Shape700.addChild(&Appearance701);

IndexedFaceSet& IndexedFaceSet703 =  IndexedFaceSet();
IndexedFaceSet703.setConvex(False);
IndexedFaceSet703.setCreaseAngle(3.14159);
IndexedFaceSet703.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,4,5,-1,1,5,2,-1,4,6,7,-1,4,7,5,-1,6,8,9,-1,6,9,7,-1,8,10,11,-1,8,11,9,-1,10,12,13,-1,10,13,11,-1,14,0,3,-1,12,14,15,-1,14,3,15,-1,12,15,13,-1,3,2,16,-1,3,16,17,-1,15,3,17,-1,2,5,18,-1,2,18,16,-1,5,7,19,-1,5,19,18,-1,7,9,20,-1,7,20,19,-1,9,11,21,-1,9,21,20,-1,11,13,22,-1,11,22,21,-1,13,15,23,-1,15,17,23,-1,13,23,22,-1,17,16,24,-1,16,18,24,-1,23,17,24,-1,18,19,24,-1,22,23,24,-1,19,20,24,-1,21,22,24,-1,20,21,24,-1}, 160);
Coordinate& Coordinate704 =  Coordinate();
Coordinate704.setPoint(new float[]{-0.459188,-0.365157,-0.032092,-0.490944,-0.352099,-0.033672,-0.490944,-0.35657,-0.020531,-0.463443,-0.367878,-0.019162,-0.522701,-0.365157,-0.032092,-0.518446,-0.367878,-0.019162,-0.535855,-0.396684,-0.028277,-0.529838,-0.395181,-0.015858,-0.522701,-0.42821,-0.024462,-0.518446,-0.422484,-0.012554,-0.490944,-0.441269,-0.022882,-0.490944,-0.433792,-0.011186,-0.459188,-0.42821,-0.024462,-0.463443,-0.422484,-0.012554,-0.446034,-0.396684,-0.028277,-0.452051,-0.395181,-0.015858,-0.490944,-0.371789,-0.009465,-0.475066,-0.378317,-0.00867501,-0.506823,-0.378317,-0.00867501,-0.513399,-0.394081,-0.006767,-0.506823,-0.409845,-0.00486,-0.490944,-0.416373,-0.004069,-0.475066,-0.409845,-0.00486,-0.468489,-0.394081,-0.006767,-0.490944,-0.393678,-0.00344}, 75);
IndexedFaceSet703.setCoord(&Coordinate704);

Shape700.setGeometry(&IndexedFaceSet703);

Transform699.addChild(&Shape700);

Transform659.addChild(&Transform699);

Transform& Transform705 =  Transform();
Transform705.setDEF(CString("red"));
Transform705.setTranslation(new float[]{1.19209e-7,0,-2.98023e-8});
Shape& Shape706 =  Shape();
Appearance& Appearance707 =  Appearance();
Material& Material708 =  Material();
Material708.setAmbientIntensity(0);
Material708.setDiffuseColor(new float[]{0.234043,0,0.00677056});
Material708.setSpecularColor(new float[]{1,0,0.0289288});
Material708.setEmissiveColor(new float[]{0.0212766,0,0.000615505});
Material708.setShininess(0.202128);
Appearance707.addChild(&Material708);

Shape706.addChild(&Appearance707);

IndexedFaceSet& IndexedFaceSet709 =  IndexedFaceSet();
IndexedFaceSet709.setConvex(False);
IndexedFaceSet709.setCreaseAngle(3.14159);
IndexedFaceSet709.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,1,4,5,-1,1,5,2,-1,4,6,7,-1,4,7,5,-1,6,8,9,-1,6,9,7,-1,8,10,11,-1,8,11,9,-1,10,12,13,-1,10,13,11,-1,14,0,3,-1,12,14,15,-1,14,3,15,-1,12,15,13,-1,16,1,0,-1,16,17,1,-1,17,4,1,-1,17,18,4,-1,18,6,4,-1,18,19,6,-1,19,8,6,-1,19,20,8,-1,20,10,8,-1,20,21,10,-1,21,12,10,-1,21,22,12,-1,22,14,12,-1,22,23,14,-1,23,0,14,-1,23,16,0,-1,24,17,16,-1,24,18,17,-1,24,16,23,-1,24,19,18,-1,24,23,22,-1,24,20,19,-1,24,22,21,-1,24,21,20,-1}, 160);
Coordinate& Coordinate710 =  Coordinate();
Coordinate710.setPoint(new float[]{0.335288,-0.367387,-0.019172,0.363258,-0.355887,-0.020564,0.363258,-0.35134,-0.03393,0.330961,-0.364621,-0.032322,0.391228,-0.367387,-0.019172,0.395555,-0.364621,-0.032322,0.402814,-0.395155,-0.015812,0.408933,-0.396684,-0.028442,0.391228,-0.422922,-0.012452,0.395555,-0.428747,-0.024562,0.363258,-0.434424,-0.01106,0.363258,-0.442028,-0.022955,0.335288,-0.422922,-0.012452,0.330961,-0.428747,-0.024562,0.323703,-0.395155,-0.015812,0.317584,-0.396684,-0.028442,0.34711,-0.378006,-0.008506,0.363258,-0.371364,-0.00931,0.379407,-0.378006,-0.008506,0.386096,-0.394036,-0.006566,0.379407,-0.410069,-0.004626,0.363258,-0.416709,-0.003823,0.34711,-0.410069,-0.004626,0.340421,-0.394036,-0.006566,0.363258,-0.393627,-0.00318201}, 75);
IndexedFaceSet709.setCoord(&Coordinate710);

Shape706.setGeometry(&IndexedFaceSet709);

Transform705.addChild(&Shape706);

Transform659.addChild(&Transform705);

Transform635.addChild(&Transform659);

Transform& Transform711 =  Transform();
Transform711.setDEF(CString("screen_products"));
Transform711.setCenter(new float[]{-0.0597242,-0.080202,-0.040262});
Transform& Transform712 =  Transform();
Transform712.setDEF(CString("splat"));
Transform712.setTranslation(new float[]{-0.000398053,-0.00111233,-0.0055904});
Transform712.setScale(new float[]{0.978302,0.978302,0.978302});
Inline& Inline713 =  Inline();
Inline713.setUrl(new CString[]{CString("screensplat.x3d")}, 1);
Inline713.setBboxSize(new float[]{1.03669,0.828292,0.05});
Inline713.setBboxCenter(new float[]{-0.018345,-0.0512635,-0.05});
Transform712.addChild(&Inline713);

Transform711.addChild(&Transform712);

Transform& Transform714 =  Transform();
Transform714.setDEF(CString("lightfx"));
Transform714.setTranslation(new float[]{-0.549232,-1.01526,0.464723});
Transform714.setRotation(new float[]{0,1,0,0.500211});
Transform714.setScale(new float[]{0.803256,0.803256,0.803257});
Transform714.setScaleOrientation(new float[]{0,-1,0,0.553574});
Switch& Switch715 =  Switch();
Switch715.setDEF(CString("_82"));
Switch715.setWhichChoice(0);
Transform& Transform716 =  Transform();
Transform716.setTranslation(new float[]{0.340235,0.767534,-0.475579});
Transform716.setRotation(new float[]{0,-1,0,0.500212});
Transform716.setScale(new float[]{0.287742,0.287742,0.28774});
Shape& Shape717 =  Shape();
Appearance& Appearance718 =  Appearance();
ImageTexture& ImageTexture719 =  ImageTexture();
ImageTexture719.setUrl(new CString[]{CString("bm-glow.png")}, 1);
Appearance718.addChild(&ImageTexture719);

Shape717.addChild(&Appearance718);

IndexedFaceSet& IndexedFaceSet720 =  IndexedFaceSet();
IndexedFaceSet720.setSolid(False);
IndexedFaceSet720.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate721 =  TextureCoordinate();
TextureCoordinate721.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet720.setTexCoord(&TextureCoordinate721);

Coordinate& Coordinate722 =  Coordinate();
Coordinate722.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet720.setCoord(&Coordinate722);

Shape717.setGeometry(&IndexedFaceSet720);

Transform716.addChild(&Shape717);

Switch715.addChild(&Transform716);

Transform& Transform723 =  Transform();
Transform723.setTranslation(new float[]{1.27515,0.767534,0.0354283});
Transform723.setRotation(new float[]{0,-1,0,0.500212});
Transform723.setScale(new float[]{0.287742,0.287742,0.28774});
Shape& Shape724 =  Shape();
Appearance& Appearance725 =  Appearance();
ImageTexture& ImageTexture726 =  ImageTexture();
ImageTexture726.setUrl(new CString[]{CString("glow_red.png")}, 1);
Appearance725.addChild(&ImageTexture726);

Shape724.addChild(&Appearance725);

IndexedFaceSet& IndexedFaceSet727 =  IndexedFaceSet();
IndexedFaceSet727.setSolid(False);
IndexedFaceSet727.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate728 =  TextureCoordinate();
TextureCoordinate728.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet727.setTexCoord(&TextureCoordinate728);

Coordinate& Coordinate729 =  Coordinate();
Coordinate729.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet727.setCoord(&Coordinate729);

Shape724.setGeometry(&IndexedFaceSet727);

Transform723.addChild(&Shape724);

Switch715.addChild(&Transform723);

Transform& Transform730 =  Transform();
Transform730.setDEF(CString("BoolSwitch_4"));
ProtoInstance& ProtoInstance731 =  ProtoInstance();
ProtoInstance731.setName(CString("BoolSwitch"));
ProtoInstance731.setDEF(CString("_83"));
Transform730.addChild(&ProtoInstance731);

Switch715.addChild(&Transform730);

Transform714.addChild(&Switch715);

Transform711.addChild(&Transform714);

Transform635.addChild(&Transform711);

Group634.addChild(&Transform635);

Transform& Transform732 =  Transform();
Transform732.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor733 =  VisibilitySensor();
VisibilitySensor733.setDEF(CString("_84"));
VisibilitySensor733.setSize(new float[]{1,0.8,0.1});
VisibilitySensor733.setCenter(new float[]{0,0,-0.05});
Transform732.addChild(&VisibilitySensor733);

Group634.addChild(&Transform732);

Transform632.addChild(&Group634);

Transform631.addChild(&Transform632);

Transform625.addChild(&Transform631);

Transform608.addChild(&Transform625);

Transform& Transform734 =  Transform();
Transform734.setDEF(CString("ToggleAnim"));
ProtoInstance& ProtoInstance735 =  ProtoInstance();
ProtoInstance735.setName(CString("ToggleAnim"));
ProtoInstance735.setDEF(CString("_85"));
fieldValue& fieldValue736 =  fieldValue();
fieldValue736.setName(CString("forwardTimer"));
TimeSensor& TimeSensor737 =  TimeSensor();
TimeSensor737.setUSE(CString("iTime_1"));
fieldValue736.addChild(&TimeSensor737);

ProtoInstance735.addChild(&fieldValue736);

fieldValue& fieldValue738 =  fieldValue();
fieldValue738.setName(CString("backTimer"));
TimeSensor& TimeSensor739 =  TimeSensor();
TimeSensor739.setUSE(CString("oTime_1"));
fieldValue738.addChild(&TimeSensor739);

ProtoInstance735.addChild(&fieldValue738);

Transform734.addChild(&ProtoInstance735);

Transform608.addChild(&Transform734);

Transform& Transform740 =  Transform();
Transform740.setDEF(CString("Not"));
ProtoInstance& ProtoInstance741 =  ProtoInstance();
ProtoInstance741.setName(CString("Not"));
ProtoInstance741.setDEF(CString("_86"));
Transform740.addChild(&ProtoInstance741);

Transform608.addChild(&Transform740);

Transform578.addChild(&Transform608);

Transform549.addChild(&Transform578);

Transform& Transform742 =  Transform();
Transform742.setDEF(CString("tour_3"));
Transform742.setTranslation(new float[]{0.864148,3.71327,0});
Transform742.setScale(new float[]{1.60157,1.60157,1.60157});
Transform742.setCenter(new float[]{-0.41126,0.323126,0.128357});
Group& Group743 =  Group();
Group& Group744 =  Group();
Group744.setDEF(CString("tourOn"));
TimeSensor& TimeSensor745 =  TimeSensor();
TimeSensor745.setDEF(CString("Time_13"));
TimeSensor745.setCycleInterval(1.5);
TimeSensor745.setStartTime(974696437.05);
TimeSensor745.setStopTime(1);
Group744.addChild(&TimeSensor745);

Group743.addChild(&Group744);

PositionInterpolator& PositionInterpolator746 =  PositionInterpolator();
PositionInterpolator746.setDEF(CString("tourTranslationInterp_1"));
PositionInterpolator746.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333333,0.4,0.466667,0.533334,0.6,0.666667,0.75,0.833333,0.916667,1}, 15);
PositionInterpolator746.setKeyValue(new float[]{0.864148,3.71327,0,0.864148,3.39245,0,0.864148,3.05709,0,0.864148,2.71343,0,0.864148,2.36769,0,0.864148,2.0261,0,0.864148,1.69489,0,0.864148,1.3803,0,0.864148,1.08855,0,0.864148,0.825871,0,0.864148,0.598493,0,0.864148,0.452488,0,0.864148,0.468711,0,0.864148,0.549825,0,0.864148,0.598493,0}, 45);
Group743.addChild(&PositionInterpolator746);

Transform742.addChild(&Group743);

Group& Group747 =  Group();
Group& Group748 =  Group();
Group748.setDEF(CString("tourOff"));
TimeSensor& TimeSensor749 =  TimeSensor();
TimeSensor749.setDEF(CString("Time_14"));
TimeSensor749.setStartTime(974696442.918);
TimeSensor749.setStopTime(1);
Group748.addChild(&TimeSensor749);

Group747.addChild(&Group748);

PositionInterpolator& PositionInterpolator750 =  PositionInterpolator();
PositionInterpolator750.setDEF(CString("tourTranslationInterp_2"));
PositionInterpolator750.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator750.setKeyValue(new float[]{0.864148,0.598493,0,0.770298,0.598493,0,0.582599,0.598493,0,0.441824,0.598493,0,0.488749,0.598493,0,0.864148,0.598493,0,1.66187,0.598493,0,2.78807,0.598493,0,4.10197,0.598493,0,5.46279,0.598493,0,6.72976,0.598493,0}, 33);
Group747.addChild(&PositionInterpolator750);

Transform742.addChild(&Group747);

Transform& Transform751 =  Transform();
Transform751.setDEF(CString("light"));
Group& Group752 =  Group();
Group& Group753 =  Group();
Group753.setDEF(CString("tourlight"));
TimeSensor& TimeSensor754 =  TimeSensor();
TimeSensor754.setDEF(CString("Time_15"));
TimeSensor754.setEnabled(False);
TimeSensor754.setLoop(True);
TimeSensor754.setStartTime(974696437.05);
TimeSensor754.setStopTime(1);
Group753.addChild(&TimeSensor754);

Group752.addChild(&Group753);

PositionInterpolator& PositionInterpolator755 =  PositionInterpolator();
PositionInterpolator755.setDEF(CString("Light2LocationInterp"));
PositionInterpolator755.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator755.setKeyValue(new float[]{-0.700137,0.323126,0.128357,-0.604836,0.323126,0.128357,-0.509534,0.323126,0.128357,-0.414233,0.323126,0.128357,-0.318932,0.323126,0.128357,-0.223631,0.323126,0.128357,-0.128329,0.323126,0.128357,-0.0330278,0.323126,0.128357,0.0622735,0.323126,0.128357,0.157575,0.323126,0.128357,0.252876,0.323126,0.128357}, 33);
Group752.addChild(&PositionInterpolator755);

Transform751.addChild(&Group752);

PointLight& PointLight756 =  PointLight();
PointLight756.setDEF(CString("Light2"));
PointLight756.setOn(False);
PointLight756.setColor(new float[]{0,1,0.955958});
PointLight756.setAttenuation(new float[]{0.1,2,1});
PointLight756.setLocation(new float[]{-0.700137,0.323126,0.128357});
Transform751.addChild(&PointLight756);

Transform742.addChild(&Transform751);

Transform& Transform757 =  Transform();
Transform757.setDEF(CString("arrows"));
TouchSensor& TouchSensor758 =  TouchSensor();
TouchSensor758.setDEF(CString("_87"));
Transform757.addChild(&TouchSensor758);

Transform& Transform759 =  Transform();
Transform759.setUSE(CString("arrow-clone"));
Transform757.addChild(&Transform759);

Transform742.addChild(&Transform757);

Transform549.addChild(&Transform742);

Transform& Transform760 =  Transform();
Transform760.setDEF(CString("press_1"));
Transform760.setTranslation(new float[]{0.00000149012,9.30217,-7.15256e-7});
Transform760.setScale(new float[]{0.999993,1.91712,0.999997});
Transform760.setScaleOrientation(new float[]{-0.404754,0.0568417,0.912657,0.664671});
Transform760.setCenter(new float[]{0.530765,0.51042,0.846251});
Group& Group761 =  Group();
Group& Group762 =  Group();
Group762.setDEF(CString("pressOn"));
TimeSensor& TimeSensor763 =  TimeSensor();
TimeSensor763.setDEF(CString("Time_16"));
TimeSensor763.setCycleInterval(1.5);
TimeSensor763.setStartTime(974709532.938);
TimeSensor763.setStopTime(1);
Group762.addChild(&TimeSensor763);

Group761.addChild(&Group762);

PositionInterpolator& PositionInterpolator764 =  PositionInterpolator();
PositionInterpolator764.setDEF(CString("pressTranslationInterp_1"));
PositionInterpolator764.setKey(new float[]{0,0.0761904,0.152381,0.228571,0.304762,0.380952,0.457143,0.533333,0.666667,0.733333,0.866667,1}, 12);
PositionInterpolator764.setKeyValue(new float[]{0.00000149012,9.30217,-7.15256e-7,0.00000151566,7.93966,-7.23771e-7,0.00000154121,6.57715,-7.32286e-7,0.00000156675,5.21464,-7.40801e-7,0.0000015923,3.85213,-7.49315e-7,0.00000161784,2.48962,-7.5783e-7,0.00000164339,1.12711,-7.66345e-7,0.00000166893,-0.235406,-7.7486e-7,0.00114247,0.423179,-1.78814e-7,0,-0.134821,5.96046e-8,-1.19209e-7,0.178264,-5.96046e-8,0,0,0}, 36);
Group761.addChild(&PositionInterpolator764);

OrientationInterpolator& OrientationInterpolator765 =  OrientationInterpolator();
OrientationInterpolator765.setDEF(CString("pressRotationInterp_1"));
OrientationInterpolator765.setKey(new float[]{0,0.0761904,0.152381,0.228571,0.304762,0.380952,0.457143,0.533333,0.6,0.666667,0.733333,0.8,0.866667,1}, 14);
OrientationInterpolator765.setKeyValue(new float[]{0,0,1,0,0,0,-1,0.00182698,0,0,-1,0.00605941,0,0,-1,0.0108965,0,0,-1,0.0145341,0,0,-1,0.0151446,0,0,-1,0.0108965,0,0,1,0,0,0,1,0.116856,0,0,1,0.207743,0,0,1,0,0.801553,0.044881,-0.596237,0.127046,0.850364,0.047614,-0.524036,0.212888,0,0,1,0}, 56);
Group761.addChild(&OrientationInterpolator765);

PositionInterpolator& PositionInterpolator766 =  PositionInterpolator();
PositionInterpolator766.setDEF(CString("pressScaleFactorInterp_1"));
PositionInterpolator766.setKey(new float[]{0,0.0666667,0.133333,0.2,0.266667,0.333334,0.4,0.466667,0.533333,0.6,0.666667,0.733333,0.8,0.866667,1}, 15);
PositionInterpolator766.setKeyValue(new float[]{0.999993,1.91712,0.999997,0.969622,1.83562,0.969855,0.932663,1.76528,0.933159,0.894058,1.69773,0.894824,0.858746,1.6246,0.859766,0.831669,1.53751,0.832902,0.817768,1.4281,0.819147,0.821985,1.28799,0.823417,1.11937,0.651108,1.11937,1.08446,0.797809,1.08435,0.999993,1.00579,0.999997,0.999993,0.736589,0.999997,0.999997,0.851349,0.999999,1,1,1,1,1,1}, 45);
Group761.addChild(&PositionInterpolator766);

Transform760.addChild(&Group761);

Group& Group767 =  Group();
Group& Group768 =  Group();
Group768.setDEF(CString("pressOff"));
TimeSensor& TimeSensor769 =  TimeSensor();
TimeSensor769.setDEF(CString("Time_17"));
TimeSensor769.setStartTime(974707190.239);
TimeSensor769.setStopTime(1);
Group768.addChild(&TimeSensor769);

Group767.addChild(&Group768);

PositionInterpolator& PositionInterpolator770 =  PositionInterpolator();
PositionInterpolator770.setDEF(CString("pressTranslationInterp_2"));
PositionInterpolator770.setKey(new float[]{1.19209e-7,0.125,0.25,0.375,0.5,0.6,0.7,0.8,0.9,1}, 10);
PositionInterpolator770.setKeyValue(new float[]{0,0,0,-0.0952244,6.98491e-9,-0.00938044,-0.253932,1.86264e-8,-0.0250145,-0.285673,2.09547e-8,-0.0281413,0,0,0,0.552556,-4.05311e-8,0.0544316,1.33263,-9.77516e-8,0.131276,2.24273,-1.64509e-7,0.220928,3.18532,-2.3365e-7,0.313782,4.06291,-2.98023e-7,0.400232}, 30);
Group767.addChild(&PositionInterpolator770);

OrientationInterpolator& OrientationInterpolator771 =  OrientationInterpolator();
OrientationInterpolator771.setDEF(CString("pressRotationInterp_2"));
OrientationInterpolator771.setKey(new float[]{1.19209e-7,0.125,0.25,0.375,0.5,0.6,0.7,0.8,0.9,1}, 10);
OrientationInterpolator771.setKeyValue(new float[]{0,0,1,0,6.62605e-8,-1,9.16887e-9,0.0535258,6.62605e-8,-1,9.16887e-9,0.142732,6.62605e-8,-1,9.16887e-9,0.160574,0,0,1,0,-6.62605e-8,1,-9.16887e-9,0.347126,-6.62605e-8,1,-9.16887e-9,0.858679,-6.62605e-8,1,-9.16887e-9,1.42504,-6.62605e-8,1,-9.16887e-9,1.9366,-6.62605e-8,1,-9.16887e-9,2.28372}, 40);
Group767.addChild(&OrientationInterpolator771);

PositionInterpolator& PositionInterpolator772 =  PositionInterpolator();
PositionInterpolator772.setDEF(CString("pressScaleFactorInterp_2"));
PositionInterpolator772.setKey(new float[]{0}, 1);
PositionInterpolator772.setKeyValue(new float[]{1,1,1}, 3);
Group767.addChild(&PositionInterpolator772);

Transform760.addChild(&Group767);

TouchSensor& TouchSensor773 =  TouchSensor();
TouchSensor773.setDEF(CString("ts"));
Transform760.addChild(&TouchSensor773);

Transform& Transform774 =  Transform();
Transform774.setDEF(CString("pack"));
Transform774.setTranslation(new float[]{0.530764,0.00959603,0.846251});
Transform774.setRotation(new float[]{0,1,0,0.500451});
Inline& Inline775 =  Inline();
Inline775.setUrl(new CString[]{CString("pack.x3d")}, 1);
Inline775.setBboxSize(new float[]{0.914086,1.00165,0.731951});
Inline775.setBboxCenter(new float[]{9.83477e-7,0.500824,1.19209e-7});
Transform774.addChild(&Inline775);

Transform760.addChild(&Transform774);

Transform& Transform776 =  Transform();
Transform776.setDEF(CString("OpenWindow"));
Transform776.setTranslation(new float[]{-1.19209e-7,-1.19209e-7,3.57628e-7});
ProtoInstance& ProtoInstance777 =  ProtoInstance();
ProtoInstance777.setName(CString("JavaScript"));
ProtoInstance777.setDEF(CString("_88"));
fieldValue& fieldValue778 =  fieldValue();
fieldValue778.setName(CString("javascript"));
fieldValue778.setValue(CString("\"function tmt_winLaunch(theURL,winName,targetName,features) { eval(winName+\"=window.open('\"+theURL+\"','\"+targetName+\"','\"+features+\"'); \"+winName+\".focus();\", \" \") } \" \", \" \"tmt_winLaunch(', \" \"/ns/mediapack/, \" \"', ', \" \"clipboard, \" \"', ', \" \"clipboard, \" \"',', \" \"resizable=yes,status=yes,menubar=yes,locationbar=yes, \" \",, \" \"width=640, \" \",, \" \"height=480, \" \",, \" \"left='+((screen.width-640)/2)+', \" \",, \" \"top='+((screen.height-480)/2));\""));
ProtoInstance777.addChild(&fieldValue778);

Transform776.addChild(&ProtoInstance777);

Transform760.addChild(&Transform776);

Transform549.addChild(&Transform760);

Transform& Transform779 =  Transform();
Transform779.setDEF(CString("Int_9"));
ProtoInstance& ProtoInstance780 =  ProtoInstance();
ProtoInstance780.setName(CString("Int"));
ProtoInstance780.setDEF(CString("_89"));
fieldValue& fieldValue781 =  fieldValue();
fieldValue781.setName(CString("keyValue"));
fieldValue781.setValue(CString("1"));
ProtoInstance780.addChild(&fieldValue781);

Transform779.addChild(&ProtoInstance780);

Transform549.addChild(&Transform779);

Switch526.addChild(&Transform549);

Transform& Transform782 =  Transform();
Transform782.setDEF(CString("tour"));
Transform& Transform783 =  Transform();
Transform783.setDEF(CString("world_1"));
Group& Group784 =  Group();
Group& Group785 =  Group();
Group785.setDEF(CString("screen1"));
TimeSensor& TimeSensor786 =  TimeSensor();
TimeSensor786.setDEF(CString("s1t"));
TimeSensor786.setCycleInterval(2);
Group785.addChild(&TimeSensor786);

Group784.addChild(&Group785);

PositionInterpolator& PositionInterpolator787 =  PositionInterpolator();
PositionInterpolator787.setDEF(CString("worldTranslationInterp_1"));
PositionInterpolator787.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator787.setKeyValue(new float[]{0,0,0,0.270122,0.0276454,0.424952,0.540243,0.0552908,0.849904,0.810365,0.0829362,1.27486,1.08049,0.110582,1.69981,1.35061,0.138227,2.12476,1.62073,0.165872,2.54971,1.89085,0.193518,2.97466,2.16097,0.221163,3.39962,2.43109,0.248809,3.82457,2.70122,0.276454,4.24952,2.97134,0.304099,4.67447,3.24146,0.331745,5.09942,3.51158,0.35939,5.52438,3.7817,0.387036,5.94933,4.05182,0.414681,6.37428,4.32194,0.442326,6.79923,4.59207,0.469972,7.22418,4.86219,0.497617,7.64914,5.13231,0.525263,8.07409,5.40243,0.552908,8.49904}, 63);
Group784.addChild(&PositionInterpolator787);

PositionInterpolator& PositionInterpolator788 =  PositionInterpolator();
PositionInterpolator788.setDEF(CString("tvcloneTranslationInterp_1"));
PositionInterpolator788.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator788.setKeyValue(new float[]{-2.87279,1.60642,0.0127602,-2.91296,1.56947,-0.173409,-2.95312,1.53252,-0.359578,-2.99329,1.49556,-0.545747,-3.03346,1.45861,-0.731916,-3.07363,1.42166,-0.918085,-3.11379,1.38471,-1.10425,-3.15396,1.34775,-1.29042,-3.19413,1.3108,-1.47659,-3.23429,1.27385,-1.66276,-3.27446,1.2369,-1.84893,-3.31463,1.19994,-2.0351,-3.35479,1.16299,-2.22127,-3.39496,1.12604,-2.40744,-3.43513,1.08909,-2.59361,-3.4753,1.05213,-2.77978,-3.51546,1.01518,-2.96594,-3.55563,0.978228,-3.15211,-3.5958,0.941276,-3.33828,-3.63596,0.904323,-3.52445,-3.67613,0.867371,-3.71062}, 63);
Group784.addChild(&PositionInterpolator788);

OrientationInterpolator& OrientationInterpolator789 =  OrientationInterpolator();
OrientationInterpolator789.setDEF(CString("tvcloneRotationInterp_1"));
OrientationInterpolator789.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
OrientationInterpolator789.setKeyValue(new float[]{0,1,0,0.342505,0,1,0,0.335554,0,1,0,0.326965,0,1,0,0.316918,0,1,0,0.305597,0,1,0,0.293182,0,1,0,0.279858,0,1,0,0.265805,0,1,0,0.251204,0,1,0,0.236241,0,1,0,0.221094,0,1,0,0.20595,0,1,0,0.190986,0,1,0,0.176387,0,1,0,0.162333,0,1,0,0.149009,0,1,0,0.136595,0,1,0,0.125274,0,1,0,0.115228,0,1,0,0.106637,0,1,0,0.0996867}, 84);
Group784.addChild(&OrientationInterpolator789);

Transform783.addChild(&Group784);

Group& Group790 =  Group();
Group& Group791 =  Group();
Group791.setDEF(CString("screen2"));
TimeSensor& TimeSensor792 =  TimeSensor();
TimeSensor792.setDEF(CString("s2t"));
TimeSensor792.setCycleInterval(2);
Group791.addChild(&TimeSensor792);

Group790.addChild(&Group791);

PositionInterpolator& PositionInterpolator793 =  PositionInterpolator();
PositionInterpolator793.setDEF(CString("worldTranslationInterp_2"));
PositionInterpolator793.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator793.setKeyValue(new float[]{0,0,0,0.155511,0.0299541,0.482981,0.311023,0.0599081,0.965962,0.466535,0.0898622,1.44894,0.622046,0.119816,1.93192,0.777557,0.14977,2.41491,0.933069,0.179724,2.89789,1.08858,0.209678,3.38087,1.24409,0.239632,3.86385,1.3996,0.269586,4.34683,1.55512,0.299541,4.82981,1.71063,0.329495,5.31279,1.86614,0.359449,5.79577,2.02165,0.389403,6.27875,2.17716,0.419357,6.76174,2.33267,0.449311,7.24472,2.48818,0.479265,7.7277,2.6437,0.509219,8.21068,2.79921,0.539173,8.69366,2.95472,0.569127,9.17664,3.11023,0.599081,9.65962}, 63);
Group790.addChild(&PositionInterpolator793);

PositionInterpolator& PositionInterpolator794 =  PositionInterpolator();
PositionInterpolator794.setDEF(CString("tvcloneTranslationInterp_2"));
PositionInterpolator794.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator794.setKeyValue(new float[]{-0.064535,1.60642,0.0127602,-0.132983,1.56762,-0.228659,-0.201431,1.52882,-0.470078,-0.269878,1.49003,-0.711497,-0.338326,1.45123,-0.952916,-0.406774,1.41243,-1.19433,-0.475222,1.37363,-1.43575,-0.543669,1.33484,-1.67717,-0.612117,1.29604,-1.91859,-0.680565,1.25724,-2.16001,-0.749013,1.21844,-2.40143,-0.81746,1.17964,-2.64285,-0.885908,1.14085,-2.88427,-0.954356,1.10205,-3.12569,-1.0228,1.06325,-3.36711,-1.09125,1.02445,-3.60853,-1.1597,0.985655,-3.84994,-1.22815,0.946857,-4.09136,-1.29659,0.90806,-4.33278,-1.36504,0.869262,-4.5742,-1.43349,0.830464,-4.81562}, 63);
Group790.addChild(&PositionInterpolator794);

OrientationInterpolator& OrientationInterpolator795 =  OrientationInterpolator();
OrientationInterpolator795.setDEF(CString("tvcloneRotationInterp_2"));
OrientationInterpolator795.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
OrientationInterpolator795.setKeyValue(new float[]{0,1,0,0.342505,0,1,0,0.335376,0,1,0,0.326564,0,1,0,0.31626,0,1,0,0.304648,0,1,0,0.291915,0,1,0,0.278246,0,1,0,0.263831,0,1,0,0.248857,0,1,0,0.23351,0,1,0,0.217974,0,1,0,0.202439,0,1,0,0.187091,0,1,0,0.172115,0,1,0,0.157699,0,1,0,0.144034,0,1,0,0.1313,0,1,0,0.119688,0,1,0,0.109382,0,1,0,0.100573,0,1,0,0.0934426}, 84);
Group790.addChild(&OrientationInterpolator795);

Transform783.addChild(&Group790);

Group& Group796 =  Group();
Group& Group797 =  Group();
Group797.setDEF(CString("screen3"));
TimeSensor& TimeSensor798 =  TimeSensor();
TimeSensor798.setDEF(CString("s3t"));
TimeSensor798.setCycleInterval(2);
Group797.addChild(&TimeSensor798);

Group796.addChild(&Group797);

PositionInterpolator& PositionInterpolator799 =  PositionInterpolator();
PositionInterpolator799.setDEF(CString("worldTranslationInterp_3"));
PositionInterpolator799.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator799.setKeyValue(new float[]{0,0,0,0.0258147,0.0256955,0.474813,0.0516293,0.0513911,0.949627,0.0774439,0.0770867,1.42444,0.103259,0.102782,1.89925,0.129073,0.128478,2.37407,0.154888,0.154173,2.84888,0.180703,0.179869,3.32369,0.206517,0.205564,3.79851,0.232332,0.23126,4.27332,0.258147,0.256956,4.74814,0.283961,0.282651,5.22295,0.309776,0.308347,5.69776,0.33559,0.334042,6.17258,0.361405,0.359738,6.64739,0.38722,0.385433,7.1222,0.413034,0.411129,7.59702,0.438849,0.436824,8.07183,0.464664,0.46252,8.54664,0.490478,0.488216,9.02146,0.516293,0.513911,9.49627}, 63);
Group796.addChild(&PositionInterpolator799);

PositionInterpolator& PositionInterpolator800 =  PositionInterpolator();
PositionInterpolator800.setDEF(CString("tvcloneTranslationInterp_3"));
PositionInterpolator800.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator800.setKeyValue(new float[]{2.55294,1.60642,-0.00000336766,2.48464,1.57196,-0.228983,2.41634,1.5375,-0.457963,2.34804,1.50304,-0.686943,2.27974,1.46858,-0.915923,2.21144,1.43412,-1.1449,2.14315,1.39966,-1.37388,2.07485,1.3652,-1.60286,2.00655,1.33074,-1.83184,1.93825,1.29628,-2.06082,1.86995,1.26182,-2.2898,1.80165,1.22737,-2.51878,1.73335,1.19291,-2.74776,1.66505,1.15845,-2.97674,1.59675,1.12399,-3.20572,1.52845,1.08953,-3.4347,1.46016,1.05507,-3.66368,1.39186,1.02061,-3.89266,1.32356,0.986149,-4.12164,1.25526,0.951689,-4.35062,1.18696,0.91723,-4.5796}, 63);
Group796.addChild(&PositionInterpolator800);

OrientationInterpolator& OrientationInterpolator801 =  OrientationInterpolator();
OrientationInterpolator801.setDEF(CString("tvcloneRotationInterp_3"));
OrientationInterpolator801.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
OrientationInterpolator801.setKeyValue(new float[]{0,1,0,0.342505,0,1,0,0.338729,0,1,0,0.334063,0,1,0,0.328606,0,1,0,0.322456,0,1,0,0.315712,0,1,0,0.308473,0,1,0,0.30084,0,1,0,0.292909,0,1,0,0.28478,0,1,0,0.276551,0,1,0,0.268324,0,1,0,0.260196,0,1,0,0.252265,0,1,0,0.244631,0,1,0,0.237393,0,1,0,0.230647,0,1,0,0.224499,0,1,0,0.21904,0,1,0,0.214375,0,1,0,0.210599}, 84);
Group796.addChild(&OrientationInterpolator801);

Transform783.addChild(&Group796);

Transform& Transform802 =  Transform();
Transform802.setDEF(CString("s1BackTimer"));
TimeSensor& TimeSensor803 =  TimeSensor();
TimeSensor803.setDEF(CString("s1b"));
Transform802.addChild(&TimeSensor803);

ScalarInterpolator& ScalarInterpolator804 =  ScalarInterpolator();
ScalarInterpolator804.setDEF(CString("_90"));
ScalarInterpolator804.setKey(new float[]{0,1}, 2);
ScalarInterpolator804.setKeyValue(new float[]{1,0}, 2);
Transform802.addChild(&ScalarInterpolator804);

Transform783.addChild(&Transform802);

Transform& Transform805 =  Transform();
Transform805.setDEF(CString("s2BackTimer"));
TimeSensor& TimeSensor806 =  TimeSensor();
TimeSensor806.setDEF(CString("s2b"));
Transform805.addChild(&TimeSensor806);

ScalarInterpolator& ScalarInterpolator807 =  ScalarInterpolator();
ScalarInterpolator807.setDEF(CString("_91"));
ScalarInterpolator807.setKey(new float[]{0,1}, 2);
ScalarInterpolator807.setKeyValue(new float[]{1,0}, 2);
Transform805.addChild(&ScalarInterpolator807);

Transform783.addChild(&Transform805);

Transform& Transform808 =  Transform();
Transform808.setDEF(CString("s3BackTimer"));
TimeSensor& TimeSensor809 =  TimeSensor();
TimeSensor809.setDEF(CString("s3b"));
Transform808.addChild(&TimeSensor809);

ScalarInterpolator& ScalarInterpolator810 =  ScalarInterpolator();
ScalarInterpolator810.setDEF(CString("_92"));
ScalarInterpolator810.setKey(new float[]{0,1}, 2);
ScalarInterpolator810.setKeyValue(new float[]{1,0}, 2);
Transform808.addChild(&ScalarInterpolator810);

Transform783.addChild(&Transform808);

Transform& Transform811 =  Transform();
Transform811.setDEF(CString("s1AnimGate"));
ProtoInstance& ProtoInstance812 =  ProtoInstance();
ProtoInstance812.setName(CString("AnimGate"));
ProtoInstance812.setDEF(CString("_93"));
Transform811.addChild(&ProtoInstance812);

Transform783.addChild(&Transform811);

Transform& Transform813 =  Transform();
Transform813.setDEF(CString("s2AnimGate"));
ProtoInstance& ProtoInstance814 =  ProtoInstance();
ProtoInstance814.setName(CString("AnimGate"));
ProtoInstance814.setDEF(CString("_94"));
Transform813.addChild(&ProtoInstance814);

Transform783.addChild(&Transform813);

Transform& Transform815 =  Transform();
Transform815.setDEF(CString("s3AnimGate"));
ProtoInstance& ProtoInstance816 =  ProtoInstance();
ProtoInstance816.setName(CString("AnimGate"));
ProtoInstance816.setDEF(CString("_95"));
Transform815.addChild(&ProtoInstance816);

Transform783.addChild(&Transform815);

Transform& Transform817 =  Transform();
Transform817.setDEF(CString("Grid"));
Transform& Transform818 =  Transform();
Transform818.setUSE(CString("grid"));
Transform817.addChild(&Transform818);

Transform783.addChild(&Transform817);

Transform& Transform819 =  Transform();
Transform819.setDEF(CString("else"));
Transform819.setTranslation(new float[]{-2.46245,0,2.54417});
Transform819.setRotation(new float[]{-1.76654e-8,1,5.79042e-8,0.903894});
Transform819.setScale(new float[]{0.999998,0.999999,1});
Transform819.setScaleOrientation(new float[]{0.405105,-0.713185,-0.572064,0.299091});
Transform819.setCenter(new float[]{0.0115501,0.85,0});
Inline& Inline820 =  Inline();
Inline820.setUrl(new CString[]{CString("ictspace-else.x3d")}, 1);
Inline820.setBboxSize(new float[]{1.7587,1.7,1.53335});
Inline820.setBboxCenter(new float[]{0.0115501,0.85,0});
Transform819.addChild(&Inline820);

Transform783.addChild(&Transform819);

Transform& Transform821 =  Transform();
Transform821.setDEF(CString("screens"));
Transform821.setCenter(new float[]{9.77146,1.60642,-2.2168});
Group& Group822 =  Group();
Group& Group823 =  Group();
Group823.setDEF(CString("nextscreens"));
TimeSensor& TimeSensor824 =  TimeSensor();
TimeSensor824.setDEF(CString("Time_18"));
TimeSensor824.setCycleInterval(2);
TimeSensor824.setStopTime(1);
Group823.addChild(&TimeSensor824);

Group822.addChild(&Group823);

PositionInterpolator& PositionInterpolator825 =  PositionInterpolator();
PositionInterpolator825.setDEF(CString("UnnamedTransformTranslationInterp_1"));
PositionInterpolator825.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator825.setKeyValue(new float[]{-0.0669022,0,-0.0862356,-2.52231,1.1921e-7,-0.712374,-4.97772,2.38419e-7,-1.33851,-7.43313,3.57629e-7,-1.96465,-9.88854,4.76838e-7,-2.59079,-12.344,5.96047e-7,-3.21693,-14.7994,7.15257e-7,-3.84306,-17.2548,8.34467e-7,-4.4692,-19.7102,9.53676e-7,-5.09534,-22.1656,0.00000107289,-5.72148,-24.621,0.0000011921,-6.34762,-27.0764,0.0000013113,-6.97376,-29.5318,0.00000143051,-7.59989,-31.9872,0.00000154972,-8.22603,-34.4426,0.00000166893,-8.85217,-36.8981,0.00000178814,-9.47831,-39.3535,0.00000190735,-10.1044,-41.8089,0.00000202656,-10.7306,-44.2643,0.00000214577,-11.3567,-46.7197,0.00000226498,-11.9829,-49.1751,0.00000238419,-12.609}, 63);
Group822.addChild(&PositionInterpolator825);

PositionInterpolator& PositionInterpolator826 =  PositionInterpolator();
PositionInterpolator826.setDEF(CString("UnnamedTransformTranslationInterp_2"));
PositionInterpolator826.setKey(new float[]{0,0.09999,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator826.setKeyValue(new float[]{-0.0669059,0,-0.0862475,-0.0669059,0,-0.0862475,-0.0669059,0,-0.0862475,-2.77388,-2.29216e-7,-0.929547,-5.5414,-4.63559e-7,-1.79171,-8.36396,-7.02562e-7,-2.67101,-11.236,-9.45759e-7,-3.56575,-14.1522,-0.00000119268,-4.47421,-17.1068,-0.00000144287,-5.39466,-20.0945,-0.00000169586,-6.32541,-23.1097,-0.00000195117,-7.26473,-26.1469,-0.00000220835,-8.2109,-29.2006,-0.00000246693,-9.16222,-32.2653,-0.00000272644,-10.117,-35.3356,-0.00000298641,-11.0734,-38.4058,-0.00000324639,-12.0299,-41.4705,-0.0000035059,-12.9846,-44.5242,-0.00000376447,-13.936,-47.5615,-0.00000402165,-14.8821,-50.5766,-0.00000427697,-15.8215,-53.5643,-0.00000452995,-16.7522}, 63);
Group822.addChild(&PositionInterpolator826);

PositionInterpolator& PositionInterpolator827 =  PositionInterpolator();
PositionInterpolator827.setDEF(CString("UnnamedTransformTranslationInterp_3"));
PositionInterpolator827.setKey(new float[]{0,0.19999,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 19);
PositionInterpolator827.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,-2.99547,-1.351e-7,-1.11096,-6.15562,-2.77627e-7,-2.28301,-9.46341,-4.26813e-7,-3.50981,-12.9018,-5.81889e-7,-4.78505,-16.4538,-7.42088e-7,-6.10241,-20.1023,-9.06641e-7,-7.45557,-23.8303,-0.00000107478,-8.83822,-27.6208,-0.00000124574,-10.244,-31.4567,-0.00000141874,-11.6667,-35.321,-0.00000159302,-13.0999,-39.1966,-0.00000176782,-14.5373,-43.0666,-0.00000194236,-15.9726,-46.9139,-0.00000211588,-17.3995,-50.7214,-0.0000022876,-18.8116,-54.4721,-0.00000245677,-20.2027,-58.149,-0.0000026226,-21.5664}, 57);
Group822.addChild(&PositionInterpolator827);

PositionInterpolator& PositionInterpolator828 =  PositionInterpolator();
PositionInterpolator828.setDEF(CString("tvTranslationInterp_1"));
PositionInterpolator828.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8}, 17);
PositionInterpolator828.setKeyValue(new float[]{20.8543,0.00000357628,-19.3507,19.5509,0.00000335276,-18.1413,18.2475,0.00000312924,-16.9319,16.9441,0.00000290573,-15.7224,15.6407,0.00000268221,-14.513,14.3373,0.00000245869,-13.3036,13.0339,0.00000223518,-12.0942,11.7305,0.00000201166,-10.8848,10.4271,0.00000178814,-9.67535,9.12376,0.00000156462,-8.46593,7.82036,0.0000013411,-7.25651,6.51697,0.00000111759,-6.04709,5.21358,8.9407e-7,-4.83768,3.91018,6.70553e-7,-3.62826,2.60679,4.47035e-7,-2.41884,1.3034,2.23518e-7,-1.20942,0,0,0}, 51);
Group822.addChild(&PositionInterpolator828);

PositionInterpolator& PositionInterpolator829 =  PositionInterpolator();
PositionInterpolator829.setDEF(CString("tvTranslationInterp_2"));
PositionInterpolator829.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9}, 19);
PositionInterpolator829.setKeyValue(new float[]{18.189,-0.00000143051,-16.2468,17.1785,-0.00000135104,-15.3442,16.168,-0.00000127156,-14.4416,15.1575,-0.00000119209,-13.539,14.147,-0.00000111262,-12.6364,13.1365,-0.00000103315,-11.7338,12.126,-9.53673e-7,-10.8312,11.1155,-8.74201e-7,-9.9286,10.105,-7.94728e-7,-9.026,9.0945,-7.15255e-7,-8.1234,8.084,-6.35782e-7,-7.2208,7.0735,-5.56309e-7,-6.3182,6.063,-4.76837e-7,-5.4156,5.0525,-3.97364e-7,-4.513,4.042,-3.17891e-7,-3.6104,3.0315,-2.38418e-7,-2.7078,2.021,-1.58946e-7,-1.8052,1.0105,-7.94725e-8,-0.902597,0,0,0}, 57);
Group822.addChild(&PositionInterpolator829);

PositionInterpolator& PositionInterpolator830 =  PositionInterpolator();
PositionInterpolator830.setDEF(CString("tvTranslationInterp_3"));
PositionInterpolator830.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator830.setKeyValue(new float[]{14.7841,-0.00000143051,-10.9035,14.0482,-0.00000135898,-10.354,13.3124,-0.00000128746,-9.80453,12.5765,-0.00000121593,-9.25504,11.8407,-0.00000114441,-8.70555,11.1048,-0.00000107288,-8.15606,10.3689,-0.00000100136,-7.60658,9.63308,-9.29831e-7,-7.05709,8.89722,-8.58306e-7,-6.5076,8.16137,-7.8678e-7,-5.95811,7.4255,-7.15255e-7,-5.40863,6.68965,-6.43729e-7,-4.85914,5.95379,-5.72204e-7,-4.30965,5.21793,-5.00678e-7,-3.76016,4.48207,-4.29153e-7,-3.21068,3.74621,-3.57627e-7,-2.66119,3.01035,-2.86102e-7,-2.1117,2.27449,-2.14576e-7,-1.56221,1.53863,-1.43051e-7,-1.01273,0.80277,-7.15253e-8,-0.463239,0.0669124,0,0.0862469}, 63);
Group822.addChild(&PositionInterpolator830);

PositionInterpolator& PositionInterpolator831 =  PositionInterpolator();
PositionInterpolator831.setDEF(CString("s1ScaleFactorInterp"));
PositionInterpolator831.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator831.setKeyValue(new float[]{1,1,1,0.999994,1,0.999995,0.999987,1,0.999991,0.999981,1,0.999986,0.999975,1,0.999982,0.999968,1,0.999977,0.999962,1,0.999973,0.999956,1,0.999968,0.999949,1,0.999964,0.999943,1,0.999959,0.999936,1,0.999954,0.99993,1,0.99995,0.999924,1,0.999945,0.999917,1,0.999941,0.999911,1,0.999936,0.999905,1,0.999932,0.999898,1,0.999927,0.999892,1,0.999923,0.999886,1,0.999918,0.999879,1,0.999914,0.999873,1,0.999909}, 63);
Group822.addChild(&PositionInterpolator831);

PositionInterpolator& PositionInterpolator832 =  PositionInterpolator();
PositionInterpolator832.setDEF(CString("s1CenterInterp"));
PositionInterpolator832.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator832.setKeyValue(new float[]{-2.87504,1.60642,-0.0811878,-2.73129,1.5261,-0.0771284,-2.58754,1.44578,-0.073069,-2.44378,1.36546,-0.0690096,-2.30003,1.28514,-0.0649502,-2.15628,1.20482,-0.0608908,-2.01253,1.12449,-0.0568315,-1.86878,1.04417,-0.0527721,-1.72502,0.963852,-0.0487127,-1.58127,0.883531,-0.0446533,-1.43752,0.80321,-0.0405939,-1.29377,0.722889,-0.0365345,-1.15002,0.642568,-0.0324751,-1.00626,0.562247,-0.0284157,-0.862512,0.481926,-0.0243563,-0.71876,0.401605,-0.0202969,-0.575008,0.321284,-0.0162375,-0.431256,0.240963,-0.0121782,-0.287504,0.160642,-0.00811878,-0.143752,0.0803208,-0.00405938,0,0,0}, 63);
Group822.addChild(&PositionInterpolator832);

Transform821.addChild(&Group822);

Group& Group833 =  Group();
Group& Group834 =  Group();
Group834.setDEF(CString("prevscreen"));
TimeSensor& TimeSensor835 =  TimeSensor();
TimeSensor835.setDEF(CString("Time_19"));
TimeSensor835.setCycleInterval(2);
TimeSensor835.setStopTime(1);
Group834.addChild(&TimeSensor835);

Group833.addChild(&Group834);

PositionInterpolator& PositionInterpolator836 =  PositionInterpolator();
PositionInterpolator836.setDEF(CString("s1TranslationInterp_1"));
PositionInterpolator836.setKey(new float[]{0,0.19999,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 19);
PositionInterpolator836.setKeyValue(new float[]{-0.0669022,0,-0.0862355,-0.0669022,0,-0.0862355,-0.0669022,0,-0.0862355,1.01478,8.59727e-8,-1.08091,2.15592,1.76672e-7,-2.13027,3.35038,2.71609e-7,-3.22866,4.59201,3.70294e-7,-4.37041,5.87464,4.72239e-7,-5.54988,7.19214,5.76955e-7,-6.76141,8.53834,6.83952e-7,-7.99933,9.9071,7.92742e-7,-9.25799,11.2923,9.02836e-7,-10.5317,12.6877,0.00000101374,-11.8149,14.0872,0.00000112498,-13.1019,15.4847,0.00000123605,-14.3869,16.8739,0.00000134647,-15.6645,18.2488,0.00000145575,-16.9288,19.6033,0.0000015634,-18.1742,20.931,0.00000166893,-19.3952}, 57);
Group833.addChild(&PositionInterpolator836);

PositionInterpolator& PositionInterpolator837 =  PositionInterpolator();
PositionInterpolator837.setDEF(CString("s2TranslationInterp_1"));
PositionInterpolator837.setKey(new float[]{0,0.09999,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator837.setKeyValue(new float[]{-0.066906,0,-0.0862474,-0.066906,0,-0.0862474,-0.066906,0,-0.0862474,0.849109,1.2064e-8,-0.882241,1.78561,2.43979e-8,-1.69604,2.74074,3.6977e-8,-2.52602,3.71262,4.97769e-8,-3.37056,4.69941,6.27731e-8,-4.22806,5.69924,7.59409e-8,-5.09688,6.71024,8.92559e-8,-5.97541,7.73055,1.02694e-7,-6.86204,8.75831,1.16229e-7,-7.75514,9.79166,1.29839e-7,-8.65309,10.8287,1.43497e-7,-9.55428,11.8677,1.5718e-7,-10.4571,12.9066,1.70863e-7,-11.3599,13.9437,1.84521e-7,-12.2611,14.977,1.98131e-7,-13.159,16.0048,2.11666e-7,-14.0521,17.0251,2.25104e-7,-14.9388,18.0361,2.38419e-7,-15.8173}, 63);
Group833.addChild(&PositionInterpolator837);

PositionInterpolator& PositionInterpolator838 =  PositionInterpolator();
PositionInterpolator838.setDEF(CString("s3TranslationInterp_1"));
PositionInterpolator838.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator838.setKeyValue(new float[]{0,0,-2.98023e-8,0.7333,3.57628e-8,-0.549015,1.4666,7.15256e-8,-1.09803,2.1999,1.07288e-7,-1.64705,2.9332,1.43051e-7,-2.19606,3.6665,1.78814e-7,-2.74507,4.3998,2.14577e-7,-3.29409,5.1331,2.5034e-7,-3.84311,5.8664,2.86102e-7,-4.39212,6.5997,3.21865e-7,-4.94114,7.333,3.57628e-7,-5.49015,8.0663,3.93391e-7,-6.03917,8.7996,4.29154e-7,-6.58818,9.5329,4.64916e-7,-7.1372,10.2662,5.00679e-7,-7.68621,10.9995,5.36442e-7,-8.23522,11.7328,5.72205e-7,-8.78424,12.4661,6.07968e-7,-9.33326,13.1994,6.4373e-7,-9.88227,13.9327,6.79493e-7,-10.4313,14.666,7.15256e-7,-10.9803}, 63);
Group833.addChild(&PositionInterpolator838);

PositionInterpolator& PositionInterpolator839 =  PositionInterpolator();
PositionInterpolator839.setDEF(CString("s1TranslationInterp_2"));
PositionInterpolator839.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,0.95,1}, 21);
PositionInterpolator839.setKeyValue(new float[]{-31.3867,0.00000286102,-8.25914,-29.8174,0.00000271797,-7.84618,-28.248,0.00000257492,-7.43323,-26.6787,0.00000243187,-7.02027,-25.1094,0.00000228882,-6.60731,-23.54,0.00000214576,-6.19436,-21.9707,0.00000200271,-5.7814,-20.4014,0.00000185966,-5.36844,-18.832,0.00000171661,-4.95548,-17.2627,0.00000157356,-4.54253,-15.6933,0.00000143051,-4.12957,-14.124,0.00000128746,-3.71661,-12.5547,0.00000114441,-3.30366,-10.9853,0.00000100136,-2.8907,-9.41601,8.58306e-7,-2.47774,-7.84667,7.15255e-7,-2.06478,-6.27734,5.72204e-7,-1.65183,-4.708,4.29153e-7,-1.23887,-3.13867,2.86102e-7,-0.825914,-1.56933,1.43051e-7,-0.412956,-4.76837e-7,0,-1.78814e-7}, 63);
Group833.addChild(&PositionInterpolator839);

PositionInterpolator& PositionInterpolator840 =  PositionInterpolator();
PositionInterpolator840.setDEF(CString("s2TranslationInterp_2"));
PositionInterpolator840.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9}, 19);
PositionInterpolator840.setKeyValue(new float[]{-39.6123,-9.53674e-7,-15.1603,-37.4116,-9.00692e-7,-14.3181,-35.2109,-8.4771e-7,-13.4758,-33.0103,-7.94728e-7,-12.6336,-30.8096,-7.41746e-7,-11.7913,-28.6089,-6.88765e-7,-10.9491,-26.4082,-6.35783e-7,-10.1069,-24.2075,-5.82801e-7,-9.26463,-22.0068,-5.29819e-7,-8.42239,-19.8061,-4.76837e-7,-7.58015,-17.6055,-4.23855e-7,-6.73791,-15.4048,-3.70873e-7,-5.89567,-13.2041,-3.17891e-7,-5.05343,-11.0034,-2.64909e-7,-4.21119,-8.80272,-2.11927e-7,-3.36895,-6.60205,-1.58946e-7,-2.52672,-4.40137,-1.05964e-7,-1.68448,-2.20068,-5.29817e-8,-0.842236,0,0,-2.38419e-7}, 57);
Group833.addChild(&PositionInterpolator840);

PositionInterpolator& PositionInterpolator841 =  PositionInterpolator();
PositionInterpolator841.setDEF(CString("s3TranslationInterp_2"));
PositionInterpolator841.setKey(new float[]{0,0.05,0.1,0.15,0.2,0.25,0.3,0.35,0.4,0.45,0.5,0.55,0.6,0.65,0.7,0.75,0.8}, 17);
PositionInterpolator841.setKeyValue(new float[]{-47.9818,-0.00000476837,-23.2328,-44.9788,-0.00000447035,-21.7754,-41.9757,-0.00000417232,-20.3179,-38.9727,-0.0000038743,-18.8605,-35.9696,-0.00000357628,-17.403,-32.9666,-0.00000327825,-15.9456,-29.9635,-0.00000298023,-14.4882,-26.9605,-0.00000268221,-13.0307,-23.9574,-0.00000238419,-11.5733,-20.9544,-0.00000208616,-10.1158,-17.9514,-0.00000178814,-8.65839,-14.9483,-0.00000149012,-7.20095,-11.9453,-0.00000119209,-5.74352,-8.94222,-8.9407e-7,-4.28608,-5.93917,-5.96046e-7,-2.82863,-2.93614,-2.98024e-7,-1.3712,0.0669127,0,0.0862469}, 51);
Group833.addChild(&PositionInterpolator841);

Transform821.addChild(&Group833);

Transform& Transform842 =  Transform();
Transform842.setDEF(CString("next"));
Transform& Transform843 =  Transform();
Transform843.setDEF(CString("s1_1"));
Transform843.setTranslation(new float[]{20.8543,0.00000357628,-19.3507});
Transform& Transform844 =  Transform();
Transform844.setDEF(CString("tv-clone_1"));
Transform844.setTranslation(new float[]{-2.87279,1.60642,0.0127602});
Transform844.setRotation(new float[]{0,1,0,0.342505});
Transform844.setScale(new float[]{2.05345,2.05378,2.0537});
Transform844.setScaleOrientation(new float[]{0,1,0,0.000690534});
Transform& Transform845 =  Transform();
Transform845.setDEF(CString("dreh-tv_1"));
Transform& Transform846 =  Transform();
Transform846.setDEF(CString("tv_1"));
Transform& Transform847 =  Transform();
Transform847.setUSE(CString("mtv"));
Transform846.addChild(&Transform847);

Transform845.addChild(&Transform846);

Transform& Transform848 =  Transform();
Transform848.setDEF(CString("content1"));
Switch& Switch849 =  Switch();
Switch849.setDEF(CString("_96"));
Switch849.setWhichChoice(0);
Transform& Transform850 =  Transform();
Transform& Transform851 =  Transform();
Transform851.setDEF(CString("cinema-m"));
Switch& Switch852 =  Switch();
Switch852.setDEF(CString("_97"));
Switch852.setWhichChoice(0);
Transform& Transform853 =  Transform();
Transform& Transform854 =  Transform();
Transform854.setDEF(CString("_98"));
Transform854.setTranslation(new float[]{-0.0761633,-0.057006,-0.0731082});
Transform854.setRotation(new float[]{-0.331317,-0.922486,-0.198113,0.0213174});
Transform854.setScale(new float[]{0.470446,0.808065,0.486926});
Shape& Shape855 =  Shape();
Appearance& Appearance856 =  Appearance();
ImageTexture& ImageTexture857 =  ImageTexture();
ImageTexture857.setUrl(new CString[]{CString("cmaxx3.jpg")}, 1);
Appearance856.addChild(&ImageTexture857);

Shape855.addChild(&Appearance856);

IndexedFaceSet& IndexedFaceSet858 =  IndexedFaceSet();
IndexedFaceSet858.setSolid(False);
IndexedFaceSet858.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate859 =  TextureCoordinate();
TextureCoordinate859.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet858.setTexCoord(&TextureCoordinate859);

Coordinate& Coordinate860 =  Coordinate();
Coordinate860.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet858.setCoord(&Coordinate860);

Shape855.setGeometry(&IndexedFaceSet858);

Transform854.addChild(&Shape855);

Transform853.addChild(&Transform854);

Switch852.addChild(&Transform853);

Transform& Transform861 =  Transform();
Transform& Transform862 =  Transform();
Transform862.setDEF(CString("on_2"));
Transform& Transform863 =  Transform();
Transform863.setDEF(CString("status_1"));
Switch& Switch864 =  Switch();
Switch864.setDEF(CString("_99"));
Switch864.setWhichChoice(0);
Transform& Transform865 =  Transform();
Transform865.setDEF(CString("load_1"));
TouchSensor& TouchSensor866 =  TouchSensor();
TouchSensor866.setDEF(CString("_100"));
Transform865.addChild(&TouchSensor866);

Transform& Transform867 =  Transform();
Transform867.setDEF(CString("btn_1"));
Transform867.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform867.setRotation(new float[]{0,1,0,1.65215});
Transform867.setScale(new float[]{0.486926,0.486907,0.486985});
Transform867.setScaleOrientation(new float[]{0,-1,0,0.0803748});
Shape& Shape868 =  Shape();
Appearance& Appearance869 =  Appearance();
Material& Material870 =  Material();
Appearance869.addChild(&Material870);

Shape868.addChild(&Appearance869);

IndexedFaceSet& IndexedFaceSet871 =  IndexedFaceSet();
IndexedFaceSet871.setCreaseAngle(0.5);
IndexedFaceSet871.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate872 =  Coordinate();
Coordinate872.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet871.setCoord(&Coordinate872);

Shape868.setGeometry(&IndexedFaceSet871);

Transform867.addChild(&Shape868);

Transform865.addChild(&Transform867);

Transform& Transform873 =  Transform();
Transform873.setDEF(CString("txt_1"));
Transform873.setTranslation(new float[]{-26.2842,-8.74913,-0.0695363});
Transform873.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform873.setScaleOrientation(new float[]{0,-1,0,0.00589993});
Transform873.setCenter(new float[]{26.052,8.436,0});
Shape& Shape874 =  Shape();
Appearance& Appearance875 =  Appearance();
Material& Material876 =  Material();
Appearance875.addChild(&Material876);

Shape874.addChild(&Appearance875);

Text& Text877 =  Text();
Text877.setString(new CString[]{CString("load")}, 1);
Text877.setLength(new float[]{0}, 1);
CFontStyle& FontStyle878 =  CFontStyle();
FontStyle878.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle878.setSize(24);
Text877.setFontStyle(&FontStyle878);

Shape874.setGeometry(&Text877);

Transform873.addChild(&Shape874);

Transform865.addChild(&Transform873);

Switch864.addChild(&Transform865);

Transform& Transform879 =  Transform();
Transform879.setDEF(CString("loading_1"));
Transform& Transform880 =  Transform();
Transform& Transform881 =  Transform();
Transform881.setDEF(CString("_101"));
Transform881.setCenter(new float[]{-0.175714,-0.324015,-0.0695362});
Group& Group882 =  Group();
Group& Group883 =  Group();
Group883.setDEF(CString("screen1load2"));
TimeSensor& TimeSensor884 =  TimeSensor();
TimeSensor884.setDEF(CString("Time_20"));
TimeSensor884.setCycleInterval(0.5);
TimeSensor884.setLoop(True);
TimeSensor884.setStartTime(975003085.229);
TimeSensor884.setStopTime(1);
Group883.addChild(&TimeSensor884);

Group882.addChild(&Group883);

ScalarInterpolator& ScalarInterpolator885 =  ScalarInterpolator();
ScalarInterpolator885.setDEF(CString("UnnamedTransformTransparencyInterp"));
ScalarInterpolator885.setKey(new float[]{0,0.5,1}, 3);
ScalarInterpolator885.setKeyValue(new float[]{0,1,0}, 3);
Group882.addChild(&ScalarInterpolator885);

Transform881.addChild(&Group882);

Transform& Transform886 =  Transform();
Transform886.setDEF(CString("txt_2"));
Transform886.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform886.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform886.setScaleOrientation(new float[]{0,-1,0,0.00556726});
Transform886.setCenter(new float[]{26.052,8.436,0});
Shape& Shape887 =  Shape();
Appearance& Appearance888 =  Appearance();
Material& Material889 =  Material();
Material889.setDEF(CString("_102"));
Appearance888.addChild(&Material889);

Shape887.addChild(&Appearance888);

Text& Text890 =  Text();
Text890.setString(new CString[]{CString("loading")}, 1);
Text890.setLength(new float[]{0}, 1);
CFontStyle& FontStyle891 =  CFontStyle();
FontStyle891.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle891.setSize(24);
Text890.setFontStyle(&FontStyle891);

Shape887.setGeometry(&Text890);

Transform886.addChild(&Shape887);

Transform881.addChild(&Transform886);

Transform880.addChild(&Transform881);

Transform879.addChild(&Transform880);

Switch864.addChild(&Transform879);

Transform& Transform892 =  Transform();
Transform892.setDEF(CString("enter_1"));
Transform& Transform893 =  Transform();
Transform893.setTranslation(new float[]{-26.2842,-8.74913,-0.0695363});
Transform893.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform893.setScaleOrientation(new float[]{0,-1,0,0.00589993});
Transform893.setCenter(new float[]{26.052,8.436,0});
Shape& Shape894 =  Shape();
Appearance& Appearance895 =  Appearance();
Material& Material896 =  Material();
Appearance895.addChild(&Material896);

Shape894.addChild(&Appearance895);

Text& Text897 =  Text();
Text897.setString(new CString[]{CString("enter")}, 1);
Text897.setLength(new float[]{0}, 1);
CFontStyle& FontStyle898 =  CFontStyle();
FontStyle898.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle898.setSize(24);
Text897.setFontStyle(&FontStyle898);

Shape894.setGeometry(&Text897);

Transform893.addChild(&Shape894);

Transform892.addChild(&Transform893);

Transform& Transform899 =  Transform();
Transform899.setDEF(CString("btn_2"));
TouchSensor& TouchSensor900 =  TouchSensor();
TouchSensor900.setDEF(CString("_103"));
Transform899.addChild(&TouchSensor900);

Transform& Transform901 =  Transform();
Transform901.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform901.setRotation(new float[]{0,1,0,1.65215});
Transform901.setScale(new float[]{0.486926,0.486907,0.486985});
Transform901.setScaleOrientation(new float[]{0,-1,0,0.080015});
Shape& Shape902 =  Shape();
Appearance& Appearance903 =  Appearance();
Material& Material904 =  Material();
Appearance903.addChild(&Material904);

Shape902.addChild(&Appearance903);

IndexedFaceSet& IndexedFaceSet905 =  IndexedFaceSet();
IndexedFaceSet905.setCreaseAngle(0.5);
IndexedFaceSet905.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate906 =  Coordinate();
Coordinate906.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet905.setCoord(&Coordinate906);

Shape902.setGeometry(&IndexedFaceSet905);

Transform901.addChild(&Shape902);

Transform899.addChild(&Transform901);

Transform892.addChild(&Transform899);

Switch864.addChild(&Transform892);

Transform& Transform907 =  Transform();
Transform907.setDEF(CString("Switcher_2"));
ProtoInstance& ProtoInstance908 =  ProtoInstance();
ProtoInstance908.setName(CString("Switcher"));
ProtoInstance908.setDEF(CString("_104"));
fieldValue& fieldValue909 =  fieldValue();
fieldValue909.setName(CString("maxValue"));
fieldValue909.setValue(CString("2"));
ProtoInstance908.addChild(&fieldValue909);

Transform907.addChild(&ProtoInstance908);

Switch864.addChild(&Transform907);

Transform863.addChild(&Switch864);

Transform862.addChild(&Transform863);

Transform861.addChild(&Transform862);

Transform& Transform910 =  Transform();
Transform910.setUSE(CString("_98"));
Transform861.addChild(&Transform910);

Switch852.addChild(&Transform861);

Transform851.addChild(&Switch852);

Transform850.addChild(&Transform851);

Switch849.addChild(&Transform850);

Transform& Transform911 =  Transform();
Transform911.setDEF(CString("football-m"));
Switch& Switch912 =  Switch();
Switch912.setDEF(CString("_105"));
Switch912.setWhichChoice(0);
Transform& Transform913 =  Transform();
Transform& Transform914 =  Transform();
Transform& Transform915 =  Transform();
Transform915.setDEF(CString("_106"));
Transform915.setTranslation(new float[]{-0.0618687,-0.0502088,-0.0694342});
Transform915.setRotation(new float[]{0.443104,-0.865592,-0.233259,0.0228191});
Transform915.setScale(new float[]{0.48015,0.808408,0.607635});
Shape& Shape916 =  Shape();
Appearance& Appearance917 =  Appearance();
ImageTexture& ImageTexture918 =  ImageTexture();
ImageTexture918.setUrl(new CString[]{CString("fball2.jpg")}, 1);
Appearance917.addChild(&ImageTexture918);

Shape916.addChild(&Appearance917);

IndexedFaceSet& IndexedFaceSet919 =  IndexedFaceSet();
IndexedFaceSet919.setSolid(False);
IndexedFaceSet919.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate920 =  TextureCoordinate();
TextureCoordinate920.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet919.setTexCoord(&TextureCoordinate920);

Coordinate& Coordinate921 =  Coordinate();
Coordinate921.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet919.setCoord(&Coordinate921);

Shape916.setGeometry(&IndexedFaceSet919);

Transform915.addChild(&Shape916);

Transform914.addChild(&Transform915);

Transform913.addChild(&Transform914);

Switch912.addChild(&Transform913);

Transform& Transform922 =  Transform();
Transform922.setDEF(CString("on_3"));
Transform& Transform923 =  Transform();
Transform923.setDEF(CString("status"));
Switch& Switch924 =  Switch();
Switch924.setDEF(CString("_107"));
Switch924.setWhichChoice(0);
Transform& Transform925 =  Transform();
Transform925.setDEF(CString("load_2"));
TouchSensor& TouchSensor926 =  TouchSensor();
TouchSensor926.setDEF(CString("_108"));
Transform925.addChild(&TouchSensor926);

Transform& Transform927 =  Transform();
Transform927.setDEF(CString("btn_3"));
Transform927.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform927.setRotation(new float[]{0,1,0,1.65215});
Transform927.setScale(new float[]{0.486926,0.486907,0.486985});
Transform927.setScaleOrientation(new float[]{0,-1,0,0.0803778});
Shape& Shape928 =  Shape();
Appearance& Appearance929 =  Appearance();
Material& Material930 =  Material();
Appearance929.addChild(&Material930);

Shape928.addChild(&Appearance929);

IndexedFaceSet& IndexedFaceSet931 =  IndexedFaceSet();
IndexedFaceSet931.setCreaseAngle(0.5);
IndexedFaceSet931.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate932 =  Coordinate();
Coordinate932.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet931.setCoord(&Coordinate932);

Shape928.setGeometry(&IndexedFaceSet931);

Transform927.addChild(&Shape928);

Transform925.addChild(&Transform927);

Transform& Transform933 =  Transform();
Transform933.setDEF(CString("txt_3"));
Transform933.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform933.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform933.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform933.setCenter(new float[]{26.052,8.436,0});
Shape& Shape934 =  Shape();
Appearance& Appearance935 =  Appearance();
Material& Material936 =  Material();
Appearance935.addChild(&Material936);

Shape934.addChild(&Appearance935);

Text& Text937 =  Text();
Text937.setString(new CString[]{CString("load")}, 1);
Text937.setLength(new float[]{0}, 1);
CFontStyle& FontStyle938 =  CFontStyle();
FontStyle938.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle938.setSize(24);
Text937.setFontStyle(&FontStyle938);

Shape934.setGeometry(&Text937);

Transform933.addChild(&Shape934);

Transform925.addChild(&Transform933);

Switch924.addChild(&Transform925);

Transform& Transform939 =  Transform();
Transform939.setDEF(CString("loading_2"));
Transform& Transform940 =  Transform();
Transform940.setUSE(CString("_101"));
Transform939.addChild(&Transform940);

Switch924.addChild(&Transform939);

Transform& Transform941 =  Transform();
Transform941.setDEF(CString("enter_2"));
Transform& Transform942 =  Transform();
Transform942.setDEF(CString("txt_4"));
Transform942.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform942.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform942.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform942.setCenter(new float[]{26.052,8.436,0});
Shape& Shape943 =  Shape();
Appearance& Appearance944 =  Appearance();
Material& Material945 =  Material();
Appearance944.addChild(&Material945);

Shape943.addChild(&Appearance944);

Text& Text946 =  Text();
Text946.setString(new CString[]{CString("enter")}, 1);
Text946.setLength(new float[]{0}, 1);
CFontStyle& FontStyle947 =  CFontStyle();
FontStyle947.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle947.setSize(24);
Text946.setFontStyle(&FontStyle947);

Shape943.setGeometry(&Text946);

Transform942.addChild(&Shape943);

Transform941.addChild(&Transform942);

Transform& Transform948 =  Transform();
Transform948.setDEF(CString("btn_4"));
TouchSensor& TouchSensor949 =  TouchSensor();
TouchSensor949.setDEF(CString("_109"));
Transform948.addChild(&TouchSensor949);

Transform& Transform950 =  Transform();
Transform950.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform950.setRotation(new float[]{0,1,0,1.65215});
Transform950.setScale(new float[]{0.486926,0.486907,0.486985});
Transform950.setScaleOrientation(new float[]{0,-1,0,0.080015});
Shape& Shape951 =  Shape();
Appearance& Appearance952 =  Appearance();
Material& Material953 =  Material();
Appearance952.addChild(&Material953);

Shape951.addChild(&Appearance952);

IndexedFaceSet& IndexedFaceSet954 =  IndexedFaceSet();
IndexedFaceSet954.setCreaseAngle(0.5);
IndexedFaceSet954.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate955 =  Coordinate();
Coordinate955.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet954.setCoord(&Coordinate955);

Shape951.setGeometry(&IndexedFaceSet954);

Transform950.addChild(&Shape951);

Transform948.addChild(&Transform950);

Transform941.addChild(&Transform948);

Switch924.addChild(&Transform941);

Transform& Transform956 =  Transform();
Transform956.setDEF(CString("Switcher_3"));
ProtoInstance& ProtoInstance957 =  ProtoInstance();
ProtoInstance957.setName(CString("Switcher"));
ProtoInstance957.setDEF(CString("_110"));
fieldValue& fieldValue958 =  fieldValue();
fieldValue958.setName(CString("maxValue"));
fieldValue958.setValue(CString("2"));
ProtoInstance957.addChild(&fieldValue958);

Transform956.addChild(&ProtoInstance957);

Switch924.addChild(&Transform956);

Transform923.addChild(&Switch924);

Transform922.addChild(&Transform923);

Transform& Transform959 =  Transform();
Transform& Transform960 =  Transform();
Transform960.setUSE(CString("_106"));
Transform959.addChild(&Transform960);

Transform922.addChild(&Transform959);

Switch912.addChild(&Transform922);

Transform911.addChild(&Switch912);

Switch849.addChild(&Transform911);

Transform848.addChild(&Switch849);

Transform845.addChild(&Transform848);

Transform& Transform961 =  Transform();
Transform961.setDEF(CString("off-on1"));
Switch& Switch962 =  Switch();
Switch962.setDEF(CString("_111"));
Switch962.setWhichChoice(0);
Transform& Transform963 =  Transform();
Transform963.setDEF(CString("come_1"));
Transform963.setTranslation(new float[]{0,0,5.96046e-8});
Transform& Transform964 =  Transform();
Transform964.setDEF(CString("btn1"));
TouchSensor& TouchSensor965 =  TouchSensor();
TouchSensor965.setDEF(CString("screen1Touch"));
Transform964.addChild(&TouchSensor965);

Transform& Transform966 =  Transform();
Transform966.setDEF(CString("scrt"));
Shape& Shape967 =  Shape();
Appearance& Appearance968 =  Appearance();
Material& Material969 =  Material();
Appearance968.addChild(&Material969);

Shape967.addChild(&Appearance968);

IndexedFaceSet& IndexedFaceSet970 =  IndexedFaceSet();
IndexedFaceSet970.setCreaseAngle(0.5);
IndexedFaceSet970.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate971 =  Coordinate();
Coordinate971.setPoint(new float[]{-0.568713,-0.457604,-0.0018017,-0.568428,0.356292,-0.02891,0.5495,0.356627,-0.00707561,0.549215,-0.457269,0.0200327}, 12);
IndexedFaceSet970.setCoord(&Coordinate971);

Shape967.setGeometry(&IndexedFaceSet970);

Transform966.addChild(&Shape967);

Transform964.addChild(&Transform966);

Transform963.addChild(&Transform964);

Switch962.addChild(&Transform963);

Transform& Transform972 =  Transform();
Transform972.setDEF(CString("back_1"));
Transform& Transform973 =  Transform();
Transform973.setDEF(CString("btn"));
Transform973.setTranslation(new float[]{0.173209,-0.289055,-0.00142503});
Transform973.setScale(new float[]{0.218364,0.127352,0.268449});
Transform& Transform974 =  Transform();
Transform974.setUSE(CString("btn1"));
Transform973.addChild(&Transform974);

Transform972.addChild(&Transform973);

Transform& Transform975 =  Transform();
Transform975.setDEF(CString("txt_5"));
Transform975.setTranslation(new float[]{-25.8636,-8.74913,-0.0495356});
Transform975.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform975.setScaleOrientation(new float[]{0,-1,0,0.022108});
Transform975.setCenter(new float[]{26.052,8.436,0});
Shape& Shape976 =  Shape();
Appearance& Appearance977 =  Appearance();
Material& Material978 =  Material();
Appearance977.addChild(&Material978);

Shape976.addChild(&Appearance977);

Text& Text979 =  Text();
Text979.setString(new CString[]{CString("back")}, 1);
Text979.setLength(new float[]{0}, 1);
CFontStyle& FontStyle980 =  CFontStyle();
FontStyle980.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle980.setSize(24);
Text979.setFontStyle(&FontStyle980);

Shape976.setGeometry(&Text979);

Transform975.addChild(&Shape976);

Transform972.addChild(&Transform975);

Switch962.addChild(&Transform972);

Transform& Transform981 =  Transform();
Transform981.setDEF(CString("BoolSwitch_5"));
ProtoInstance& ProtoInstance982 =  ProtoInstance();
ProtoInstance982.setName(CString("BoolSwitch"));
ProtoInstance982.setDEF(CString("_112"));
Transform981.addChild(&ProtoInstance982);

Switch962.addChild(&Transform981);

Transform961.addChild(&Switch962);

Transform845.addChild(&Transform961);

Transform844.addChild(&Transform845);

Transform843.addChild(&Transform844);

Transform842.addChild(&Transform843);

Transform& Transform983 =  Transform();
Transform983.setDEF(CString("s2_1"));
Transform983.setTranslation(new float[]{18.189,-0.00000143051,-16.2468});
Transform& Transform984 =  Transform();
Transform984.setDEF(CString("tv-clone_2"));
Transform984.setTranslation(new float[]{-0.064535,1.60642,0.0127602});
Transform984.setRotation(new float[]{0,1,0,0.342505});
Transform984.setScale(new float[]{2.05344,2.05378,2.05406});
Transform& Transform985 =  Transform();
Transform985.setDEF(CString("dreh-tv_2"));
Transform& Transform986 =  Transform();
Transform986.setDEF(CString("tv_2"));
Transform& Transform987 =  Transform();
Transform987.setUSE(CString("mtv"));
Transform986.addChild(&Transform987);

Transform985.addChild(&Transform986);

Transform& Transform988 =  Transform();
Transform988.setDEF(CString("content2"));
Switch& Switch989 =  Switch();
Switch989.setDEF(CString("_113"));
Switch989.setWhichChoice(1);
Transform& Transform990 =  Transform();
Transform990.setDEF(CString("carhall-m"));
Switch& Switch991 =  Switch();
Switch991.setDEF(CString("_114"));
Switch991.setWhichChoice(0);
Transform& Transform992 =  Transform();
Transform992.setDEF(CString("_115"));
Transform992.setTranslation(new float[]{-0.0690241,-0.0470539,-0.069756});
Transform992.setRotation(new float[]{-0.0000241439,-1,-0.0000444052,0.0221618});
Transform992.setScale(new float[]{0.470213,0.817819,0.618643});
Shape& Shape993 =  Shape();
Appearance& Appearance994 =  Appearance();
ImageTexture& ImageTexture995 =  ImageTexture();
ImageTexture995.setUrl(new CString[]{CString("mbenz4.jpg")}, 1);
Appearance994.addChild(&ImageTexture995);

Shape993.addChild(&Appearance994);

IndexedFaceSet& IndexedFaceSet996 =  IndexedFaceSet();
IndexedFaceSet996.setSolid(False);
IndexedFaceSet996.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate997 =  TextureCoordinate();
TextureCoordinate997.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet996.setTexCoord(&TextureCoordinate997);

Coordinate& Coordinate998 =  Coordinate();
Coordinate998.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet996.setCoord(&Coordinate998);

Shape993.setGeometry(&IndexedFaceSet996);

Transform992.addChild(&Shape993);

Switch991.addChild(&Transform992);

Transform& Transform999 =  Transform();
Transform999.setTranslation(new float[]{0,0,4.76837e-7});
Transform& Transform1000 =  Transform();
Transform1000.setDEF(CString("on_4"));
Switch& Switch1001 =  Switch();
Switch1001.setDEF(CString("_116"));
Switch1001.setWhichChoice(0);
Transform& Transform1002 =  Transform();
Transform1002.setDEF(CString("load_3"));
TouchSensor& TouchSensor1003 =  TouchSensor();
TouchSensor1003.setDEF(CString("_117"));
Transform1002.addChild(&TouchSensor1003);

Transform& Transform1004 =  Transform();
Transform& Transform1005 =  Transform();
Transform1005.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1005.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1005.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1005.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1006 =  Shape();
Appearance& Appearance1007 =  Appearance();
Material& Material1008 =  Material();
Appearance1007.addChild(&Material1008);

Shape1006.addChild(&Appearance1007);

Text& Text1009 =  Text();
Text1009.setString(new CString[]{CString("load")}, 1);
Text1009.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1010 =  CFontStyle();
FontStyle1010.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1010.setSize(24);
Text1009.setFontStyle(&FontStyle1010);

Shape1006.setGeometry(&Text1009);

Transform1005.addChild(&Shape1006);

Transform1004.addChild(&Transform1005);

Transform& Transform1011 =  Transform();
Transform1011.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1011.setRotation(new float[]{0,1,0,1.65215});
Transform1011.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1011.setScaleOrientation(new float[]{0,-1,0,0.0803778});
Shape& Shape1012 =  Shape();
Appearance& Appearance1013 =  Appearance();
Material& Material1014 =  Material();
Appearance1013.addChild(&Material1014);

Shape1012.addChild(&Appearance1013);

IndexedFaceSet& IndexedFaceSet1015 =  IndexedFaceSet();
IndexedFaceSet1015.setCreaseAngle(0.5);
IndexedFaceSet1015.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1016 =  Coordinate();
Coordinate1016.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1015.setCoord(&Coordinate1016);

Shape1012.setGeometry(&IndexedFaceSet1015);

Transform1011.addChild(&Shape1012);

Transform1004.addChild(&Transform1011);

Transform1002.addChild(&Transform1004);

Switch1001.addChild(&Transform1002);

Transform& Transform1017 =  Transform();
Transform1017.setDEF(CString("loading_3"));
Transform& Transform1018 =  Transform();
Transform& Transform1019 =  Transform();
Transform1019.setUSE(CString("_101"));
Transform1018.addChild(&Transform1019);

Transform1017.addChild(&Transform1018);

Switch1001.addChild(&Transform1017);

Transform& Transform1020 =  Transform();
Transform1020.setDEF(CString("enter_3"));
TouchSensor& TouchSensor1021 =  TouchSensor();
TouchSensor1021.setDEF(CString("_118"));
Transform1020.addChild(&TouchSensor1021);

Transform& Transform1022 =  Transform();
Transform& Transform1023 =  Transform();
Transform1023.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1023.setRotation(new float[]{0,1,0,1.65215});
Transform1023.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1023.setScaleOrientation(new float[]{0,-1,0,0.080003});
Shape& Shape1024 =  Shape();
Appearance& Appearance1025 =  Appearance();
Material& Material1026 =  Material();
Appearance1025.addChild(&Material1026);

Shape1024.addChild(&Appearance1025);

IndexedFaceSet& IndexedFaceSet1027 =  IndexedFaceSet();
IndexedFaceSet1027.setCreaseAngle(0.5);
IndexedFaceSet1027.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1028 =  Coordinate();
Coordinate1028.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1027.setCoord(&Coordinate1028);

Shape1024.setGeometry(&IndexedFaceSet1027);

Transform1023.addChild(&Shape1024);

Transform1022.addChild(&Transform1023);

Transform& Transform1029 =  Transform();
Transform1029.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1029.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1029.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1029.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1030 =  Shape();
Appearance& Appearance1031 =  Appearance();
Material& Material1032 =  Material();
Appearance1031.addChild(&Material1032);

Shape1030.addChild(&Appearance1031);

Text& Text1033 =  Text();
Text1033.setString(new CString[]{CString("enter")}, 1);
Text1033.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1034 =  CFontStyle();
FontStyle1034.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1034.setSize(24);
Text1033.setFontStyle(&FontStyle1034);

Shape1030.setGeometry(&Text1033);

Transform1029.addChild(&Shape1030);

Transform1022.addChild(&Transform1029);

Transform1020.addChild(&Transform1022);

Switch1001.addChild(&Transform1020);

Transform& Transform1035 =  Transform();
Transform1035.setDEF(CString("Switcher_4"));
ProtoInstance& ProtoInstance1036 =  ProtoInstance();
ProtoInstance1036.setName(CString("Switcher"));
ProtoInstance1036.setDEF(CString("_119"));
fieldValue& fieldValue1037 =  fieldValue();
fieldValue1037.setName(CString("maxValue"));
fieldValue1037.setValue(CString("2"));
ProtoInstance1036.addChild(&fieldValue1037);

Transform1035.addChild(&ProtoInstance1036);

Switch1001.addChild(&Transform1035);

Transform1000.addChild(&Switch1001);

Transform& Transform1038 =  Transform();
Transform& Transform1039 =  Transform();
Transform& Transform1040 =  Transform();
Transform1040.setUSE(CString("_115"));
Transform1039.addChild(&Transform1040);

Transform1038.addChild(&Transform1039);

Transform1000.addChild(&Transform1038);

Transform999.addChild(&Transform1000);

Switch991.addChild(&Transform999);

Transform990.addChild(&Switch991);

Switch989.addChild(&Transform990);

Transform& Transform1041 =  Transform();
Transform1041.setDEF(CString("mdonalds-m"));
Switch& Switch1042 =  Switch();
Switch1042.setDEF(CString("_120"));
Switch1042.setWhichChoice(0);
Transform& Transform1043 =  Transform();
Transform& Transform1044 =  Transform();
Transform& Transform1045 =  Transform();
Transform1045.setDEF(CString("_121"));
Transform1045.setTranslation(new float[]{-0.0705471,-0.0576324,-0.0711436});
Transform1045.setRotation(new float[]{0.510761,-0.830342,-0.222836,0.023791});
Transform1045.setScale(new float[]{0.469709,0.79627,0.61975});
Shape& Shape1046 =  Shape();
Appearance& Appearance1047 =  Appearance();
ImageTexture& ImageTexture1048 =  ImageTexture();
ImageTexture1048.setUrl(new CString[]{CString("mcdon3.jpg")}, 1);
Appearance1047.addChild(&ImageTexture1048);

Shape1046.addChild(&Appearance1047);

IndexedFaceSet& IndexedFaceSet1049 =  IndexedFaceSet();
IndexedFaceSet1049.setSolid(False);
IndexedFaceSet1049.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate1050 =  TextureCoordinate();
TextureCoordinate1050.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet1049.setTexCoord(&TextureCoordinate1050);

Coordinate& Coordinate1051 =  Coordinate();
Coordinate1051.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet1049.setCoord(&Coordinate1051);

Shape1046.setGeometry(&IndexedFaceSet1049);

Transform1045.addChild(&Shape1046);

Transform1044.addChild(&Transform1045);

Transform1043.addChild(&Transform1044);

Switch1042.addChild(&Transform1043);

Transform& Transform1052 =  Transform();
Transform1052.setDEF(CString("on_5"));
Switch& Switch1053 =  Switch();
Switch1053.setDEF(CString("_122"));
Switch1053.setWhichChoice(0);
Transform& Transform1054 =  Transform();
Transform1054.setDEF(CString("load_4"));
TouchSensor& TouchSensor1055 =  TouchSensor();
TouchSensor1055.setDEF(CString("_123"));
Transform1054.addChild(&TouchSensor1055);

Transform& Transform1056 =  Transform();
Transform& Transform1057 =  Transform();
Transform1057.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1057.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1057.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1057.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1058 =  Shape();
Appearance& Appearance1059 =  Appearance();
Material& Material1060 =  Material();
Material1060.setAmbientIntensity(0);
Material1060.setDiffuseColor(new float[]{0,0,0});
Material1060.setShininess(0);
Appearance1059.addChild(&Material1060);

Shape1058.addChild(&Appearance1059);

Text& Text1061 =  Text();
Text1061.setString(new CString[]{CString("load")}, 1);
Text1061.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1062 =  CFontStyle();
FontStyle1062.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1062.setSize(24);
Text1061.setFontStyle(&FontStyle1062);

Shape1058.setGeometry(&Text1061);

Transform1057.addChild(&Shape1058);

Transform1056.addChild(&Transform1057);

Transform& Transform1063 =  Transform();
Transform1063.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1063.setRotation(new float[]{0,1,0,1.65215});
Transform1063.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1063.setScaleOrientation(new float[]{0,-1,0,0.0803688});
Shape& Shape1064 =  Shape();
Appearance& Appearance1065 =  Appearance();
Material& Material1066 =  Material();
Appearance1065.addChild(&Material1066);

Shape1064.addChild(&Appearance1065);

IndexedFaceSet& IndexedFaceSet1067 =  IndexedFaceSet();
IndexedFaceSet1067.setCreaseAngle(0.5);
IndexedFaceSet1067.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1068 =  Coordinate();
Coordinate1068.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1067.setCoord(&Coordinate1068);

Shape1064.setGeometry(&IndexedFaceSet1067);

Transform1063.addChild(&Shape1064);

Transform1056.addChild(&Transform1063);

Transform1054.addChild(&Transform1056);

Switch1053.addChild(&Transform1054);

Transform& Transform1069 =  Transform();
Transform1069.setDEF(CString("loading_4"));
Transform& Transform1070 =  Transform();
Transform& Transform1071 =  Transform();
Transform1071.setUSE(CString("_101"));
Transform1070.addChild(&Transform1071);

Transform1069.addChild(&Transform1070);

Switch1053.addChild(&Transform1069);

Transform& Transform1072 =  Transform();
Transform1072.setDEF(CString("enter_4"));
TouchSensor& TouchSensor1073 =  TouchSensor();
TouchSensor1073.setDEF(CString("_124"));
Transform1072.addChild(&TouchSensor1073);

Transform& Transform1074 =  Transform();
Transform& Transform1075 =  Transform();
Transform1075.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1075.setRotation(new float[]{0,1,0,1.65215});
Transform1075.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1075.setScaleOrientation(new float[]{0,-1,0,0.080003});
Shape& Shape1076 =  Shape();
Appearance& Appearance1077 =  Appearance();
Material& Material1078 =  Material();
Appearance1077.addChild(&Material1078);

Shape1076.addChild(&Appearance1077);

IndexedFaceSet& IndexedFaceSet1079 =  IndexedFaceSet();
IndexedFaceSet1079.setCreaseAngle(0.5);
IndexedFaceSet1079.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1080 =  Coordinate();
Coordinate1080.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1079.setCoord(&Coordinate1080);

Shape1076.setGeometry(&IndexedFaceSet1079);

Transform1075.addChild(&Shape1076);

Transform1074.addChild(&Transform1075);

Transform& Transform1081 =  Transform();
Transform1081.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1081.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1081.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1081.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1082 =  Shape();
Appearance& Appearance1083 =  Appearance();
Material& Material1084 =  Material();
Appearance1083.addChild(&Material1084);

Shape1082.addChild(&Appearance1083);

Text& Text1085 =  Text();
Text1085.setString(new CString[]{CString("enter")}, 1);
Text1085.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1086 =  CFontStyle();
FontStyle1086.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1086.setSize(24);
Text1085.setFontStyle(&FontStyle1086);

Shape1082.setGeometry(&Text1085);

Transform1081.addChild(&Shape1082);

Transform1074.addChild(&Transform1081);

Transform1072.addChild(&Transform1074);

Switch1053.addChild(&Transform1072);

Transform& Transform1087 =  Transform();
Transform1087.setDEF(CString("Switcher_5"));
ProtoInstance& ProtoInstance1088 =  ProtoInstance();
ProtoInstance1088.setName(CString("Switcher"));
ProtoInstance1088.setDEF(CString("_125"));
fieldValue& fieldValue1089 =  fieldValue();
fieldValue1089.setName(CString("maxValue"));
fieldValue1089.setValue(CString("2"));
ProtoInstance1088.addChild(&fieldValue1089);

Transform1087.addChild(&ProtoInstance1088);

Switch1053.addChild(&Transform1087);

Transform1052.addChild(&Switch1053);

Transform& Transform1090 =  Transform();
Transform& Transform1091 =  Transform();
Transform1091.setUSE(CString("_121"));
Transform1090.addChild(&Transform1091);

Transform1052.addChild(&Transform1090);

Switch1042.addChild(&Transform1052);

Transform1041.addChild(&Switch1042);

Switch989.addChild(&Transform1041);

Transform988.addChild(&Switch989);

Transform985.addChild(&Transform988);

Transform& Transform1092 =  Transform();
Transform1092.setDEF(CString("on-off2"));
Switch& Switch1093 =  Switch();
Switch1093.setDEF(CString("_126"));
Switch1093.setWhichChoice(0);
Transform& Transform1094 =  Transform();
Transform1094.setDEF(CString("off"));
Transform1094.setTranslation(new float[]{3.72529e-9,0,4.19095e-9});
Transform& Transform1095 =  Transform();
Transform1095.setDEF(CString("cb2"));
TouchSensor& TouchSensor1096 =  TouchSensor();
TouchSensor1096.setDEF(CString("screen2Touch"));
Transform1095.addChild(&TouchSensor1096);

Transform& Transform1097 =  Transform();
Transform1097.setUSE(CString("scrt"));
Transform1095.addChild(&Transform1097);

Transform1094.addChild(&Transform1095);

Switch1093.addChild(&Transform1094);

Transform& Transform1098 =  Transform();
Transform1098.setDEF(CString("on_6"));
Transform& Transform1099 =  Transform();
Transform1099.setDEF(CString("back_2"));
Transform1099.setTranslation(new float[]{0.21887,-0.246703,0.0274915});
Transform1099.setScale(new float[]{0.218364,0.127352,0.268449});
Transform& Transform1100 =  Transform();
Transform1100.setUSE(CString("cb2"));
Transform1099.addChild(&Transform1100);

Transform1098.addChild(&Transform1099);

Transform& Transform1101 =  Transform();
Transform1101.setDEF(CString("txt_6"));
Transform1101.setTranslation(new float[]{-25.8088,-8.72035,-0.0447794});
Transform1101.setRotation(new float[]{-0.862559,-0.505957,0.00000319182,0.0386026});
Transform1101.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1101.setScaleOrientation(new float[]{-0.0240036,0.0482815,-0.998545,0.231219});
Transform1101.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1102 =  Shape();
Appearance& Appearance1103 =  Appearance();
Material& Material1104 =  Material();
Appearance1103.addChild(&Material1104);

Shape1102.addChild(&Appearance1103);

Text& Text1105 =  Text();
Text1105.setString(new CString[]{CString("back")}, 1);
Text1105.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1106 =  CFontStyle();
FontStyle1106.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1106.setSize(24);
Text1105.setFontStyle(&FontStyle1106);

Shape1102.setGeometry(&Text1105);

Transform1101.addChild(&Shape1102);

Transform1098.addChild(&Transform1101);

Switch1093.addChild(&Transform1098);

Transform& Transform1107 =  Transform();
Transform1107.setDEF(CString("BoolSwitch_6"));
ProtoInstance& ProtoInstance1108 =  ProtoInstance();
ProtoInstance1108.setName(CString("BoolSwitch"));
ProtoInstance1108.setDEF(CString("_127"));
Transform1107.addChild(&ProtoInstance1108);

Switch1093.addChild(&Transform1107);

Transform1092.addChild(&Switch1093);

Transform985.addChild(&Transform1092);

Transform984.addChild(&Transform985);

Transform983.addChild(&Transform984);

Transform842.addChild(&Transform983);

Transform& Transform1109 =  Transform();
Transform1109.setDEF(CString("s3_1"));
Transform1109.setTranslation(new float[]{14.7841,-0.00000143051,-10.9035});
Transform& Transform1110 =  Transform();
Transform1110.setDEF(CString("tv-clone_3"));
Transform1110.setTranslation(new float[]{2.55294,1.60642,0.0000142828});
Transform1110.setRotation(new float[]{0,1,0,0.342505});
Transform1110.setScale(new float[]{2.05345,2.05378,2.05407});
Transform& Transform1111 =  Transform();
Transform1111.setDEF(CString("dreh-tv_3"));
Transform& Transform1112 =  Transform();
Transform1112.setDEF(CString("tv_3"));
Transform& Transform1113 =  Transform();
Transform1113.setUSE(CString("mtv"));
Transform1112.addChild(&Transform1113);

Transform1111.addChild(&Transform1112);

Transform& Transform1114 =  Transform();
Transform1114.setDEF(CString("content3"));
Switch& Switch1115 =  Switch();
Switch1115.setDEF(CString("_128"));
Switch1115.setWhichChoice(0);
Transform& Transform1116 =  Transform();
Transform1116.setDEF(CString("plusbank-m"));
Switch& Switch1117 =  Switch();
Switch1117.setDEF(CString("_129"));
Switch1117.setWhichChoice(0);
Transform& Transform1118 =  Transform();
Transform& Transform1119 =  Transform();
Transform& Transform1120 =  Transform();
Transform1120.setDEF(CString("_130"));
Transform1120.setTranslation(new float[]{-0.0636339,-0.0581109,-0.0760953});
Transform1120.setRotation(new float[]{0.599305,-0.77349,-0.206268,0.0255593});
Transform1120.setScale(new float[]{0.476086,0.814249,0.661289});
Shape& Shape1121 =  Shape();
Appearance& Appearance1122 =  Appearance();
ImageTexture& ImageTexture1123 =  ImageTexture();
ImageTexture1123.setUrl(new CString[]{CString("pbank1.jpg")}, 1);
Appearance1122.addChild(&ImageTexture1123);

Shape1121.addChild(&Appearance1122);

IndexedFaceSet& IndexedFaceSet1124 =  IndexedFaceSet();
IndexedFaceSet1124.setSolid(False);
IndexedFaceSet1124.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate1125 =  TextureCoordinate();
TextureCoordinate1125.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet1124.setTexCoord(&TextureCoordinate1125);

Coordinate& Coordinate1126 =  Coordinate();
Coordinate1126.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet1124.setCoord(&Coordinate1126);

Shape1121.setGeometry(&IndexedFaceSet1124);

Transform1120.addChild(&Shape1121);

Transform1119.addChild(&Transform1120);

Transform1118.addChild(&Transform1119);

Switch1117.addChild(&Transform1118);

Transform& Transform1127 =  Transform();
Transform1127.setDEF(CString("on_7"));
Switch& Switch1128 =  Switch();
Switch1128.setDEF(CString("_131"));
Switch1128.setWhichChoice(0);
Transform& Transform1129 =  Transform();
Transform1129.setDEF(CString("load_5"));
TouchSensor& TouchSensor1130 =  TouchSensor();
TouchSensor1130.setDEF(CString("_132"));
Transform1129.addChild(&TouchSensor1130);

Transform& Transform1131 =  Transform();
Transform& Transform1132 =  Transform();
Transform1132.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1132.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1132.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1132.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1133 =  Shape();
Appearance& Appearance1134 =  Appearance();
Material& Material1135 =  Material();
Appearance1134.addChild(&Material1135);

Shape1133.addChild(&Appearance1134);

Text& Text1136 =  Text();
Text1136.setString(new CString[]{CString("load")}, 1);
Text1136.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1137 =  CFontStyle();
FontStyle1137.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1137.setSize(24);
Text1136.setFontStyle(&FontStyle1137);

Shape1133.setGeometry(&Text1136);

Transform1132.addChild(&Shape1133);

Transform1131.addChild(&Transform1132);

Transform& Transform1138 =  Transform();
Transform1138.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1138.setRotation(new float[]{0,1,0,1.65215});
Transform1138.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1138.setScaleOrientation(new float[]{0,-1,0,0.0803778});
Shape& Shape1139 =  Shape();
Appearance& Appearance1140 =  Appearance();
Material& Material1141 =  Material();
Appearance1140.addChild(&Material1141);

Shape1139.addChild(&Appearance1140);

IndexedFaceSet& IndexedFaceSet1142 =  IndexedFaceSet();
IndexedFaceSet1142.setCreaseAngle(0.5);
IndexedFaceSet1142.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1143 =  Coordinate();
Coordinate1143.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1142.setCoord(&Coordinate1143);

Shape1139.setGeometry(&IndexedFaceSet1142);

Transform1138.addChild(&Shape1139);

Transform1131.addChild(&Transform1138);

Transform1129.addChild(&Transform1131);

Switch1128.addChild(&Transform1129);

Transform& Transform1144 =  Transform();
Transform1144.setDEF(CString("loading_5"));
Transform& Transform1145 =  Transform();
Transform& Transform1146 =  Transform();
Transform1146.setUSE(CString("_101"));
Transform1145.addChild(&Transform1146);

Transform1144.addChild(&Transform1145);

Switch1128.addChild(&Transform1144);

Transform& Transform1147 =  Transform();
Transform1147.setDEF(CString("enter_5"));
TouchSensor& TouchSensor1148 =  TouchSensor();
TouchSensor1148.setDEF(CString("_133"));
Transform1147.addChild(&TouchSensor1148);

Transform& Transform1149 =  Transform();
Transform& Transform1150 =  Transform();
Transform1150.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1150.setRotation(new float[]{0,1,0,1.65215});
Transform1150.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1150.setScaleOrientation(new float[]{0,-1,0,0.080003});
Shape& Shape1151 =  Shape();
Appearance& Appearance1152 =  Appearance();
Material& Material1153 =  Material();
Appearance1152.addChild(&Material1153);

Shape1151.addChild(&Appearance1152);

IndexedFaceSet& IndexedFaceSet1154 =  IndexedFaceSet();
IndexedFaceSet1154.setCreaseAngle(0.5);
IndexedFaceSet1154.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1155 =  Coordinate();
Coordinate1155.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1154.setCoord(&Coordinate1155);

Shape1151.setGeometry(&IndexedFaceSet1154);

Transform1150.addChild(&Shape1151);

Transform1149.addChild(&Transform1150);

Transform& Transform1156 =  Transform();
Transform1156.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1156.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1156.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1156.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1157 =  Shape();
Appearance& Appearance1158 =  Appearance();
Material& Material1159 =  Material();
Appearance1158.addChild(&Material1159);

Shape1157.addChild(&Appearance1158);

Text& Text1160 =  Text();
Text1160.setString(new CString[]{CString("enter")}, 1);
Text1160.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1161 =  CFontStyle();
FontStyle1161.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1161.setSize(24);
Text1160.setFontStyle(&FontStyle1161);

Shape1157.setGeometry(&Text1160);

Transform1156.addChild(&Shape1157);

Transform1149.addChild(&Transform1156);

Transform1147.addChild(&Transform1149);

Switch1128.addChild(&Transform1147);

Transform& Transform1162 =  Transform();
Transform1162.setDEF(CString("Switcher_6"));
ProtoInstance& ProtoInstance1163 =  ProtoInstance();
ProtoInstance1163.setName(CString("Switcher"));
ProtoInstance1163.setDEF(CString("_134"));
fieldValue& fieldValue1164 =  fieldValue();
fieldValue1164.setName(CString("maxValue"));
fieldValue1164.setValue(CString("2"));
ProtoInstance1163.addChild(&fieldValue1164);

Transform1162.addChild(&ProtoInstance1163);

Switch1128.addChild(&Transform1162);

Transform1127.addChild(&Switch1128);

Transform& Transform1165 =  Transform();
Transform& Transform1166 =  Transform();
Transform1166.setUSE(CString("_130"));
Transform1165.addChild(&Transform1166);

Transform1127.addChild(&Transform1165);

Switch1117.addChild(&Transform1127);

Transform1116.addChild(&Switch1117);

Switch1115.addChild(&Transform1116);

Transform& Transform1167 =  Transform();
Transform1167.setDEF(CString("pacman-m"));
Switch& Switch1168 =  Switch();
Switch1168.setDEF(CString("_135"));
Switch1168.setWhichChoice(0);
Transform& Transform1169 =  Transform();
Transform& Transform1170 =  Transform();
Transform& Transform1171 =  Transform();
Transform1171.setDEF(CString("_136"));
Transform1171.setTranslation(new float[]{-0.0726938,-0.0573756,-0.0712955});
Transform1171.setRotation(new float[]{0.835753,-0.493134,0.241526,0.0387198});
Transform1171.setScale(new float[]{0.477507,0.821578,0.614673});
Shape& Shape1172 =  Shape();
Appearance& Appearance1173 =  Appearance();
ImageTexture& ImageTexture1174 =  ImageTexture();
ImageTexture1174.setUrl(new CString[]{CString("pman3.jpg")}, 1);
Appearance1173.addChild(&ImageTexture1174);

Shape1172.addChild(&Appearance1173);

IndexedFaceSet& IndexedFaceSet1175 =  IndexedFaceSet();
IndexedFaceSet1175.setSolid(False);
IndexedFaceSet1175.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate1176 =  TextureCoordinate();
TextureCoordinate1176.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet1175.setTexCoord(&TextureCoordinate1176);

Coordinate& Coordinate1177 =  Coordinate();
Coordinate1177.setPoint(new float[]{-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0}, 12);
IndexedFaceSet1175.setCoord(&Coordinate1177);

Shape1172.setGeometry(&IndexedFaceSet1175);

Transform1171.addChild(&Shape1172);

Transform1170.addChild(&Transform1171);

Transform1169.addChild(&Transform1170);

Switch1168.addChild(&Transform1169);

Transform& Transform1178 =  Transform();
Transform1178.setDEF(CString("on"));
Switch& Switch1179 =  Switch();
Switch1179.setDEF(CString("_137"));
Switch1179.setWhichChoice(0);
Transform& Transform1180 =  Transform();
Transform1180.setDEF(CString("load"));
TouchSensor& TouchSensor1181 =  TouchSensor();
TouchSensor1181.setDEF(CString("_138"));
Transform1180.addChild(&TouchSensor1181);

Transform& Transform1182 =  Transform();
Transform& Transform1183 =  Transform();
Transform1183.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1183.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1183.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1183.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1184 =  Shape();
Appearance& Appearance1185 =  Appearance();
Material& Material1186 =  Material();
Appearance1185.addChild(&Material1186);

Shape1184.addChild(&Appearance1185);

Text& Text1187 =  Text();
Text1187.setString(new CString[]{CString("load")}, 1);
Text1187.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1188 =  CFontStyle();
FontStyle1188.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1188.setSize(24);
Text1187.setFontStyle(&FontStyle1188);

Shape1184.setGeometry(&Text1187);

Transform1183.addChild(&Shape1184);

Transform1182.addChild(&Transform1183);

Transform& Transform1189 =  Transform();
Transform1189.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1189.setRotation(new float[]{0,1,0,1.65215});
Transform1189.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1189.setScaleOrientation(new float[]{0,-1,0,0.0803778});
Shape& Shape1190 =  Shape();
Appearance& Appearance1191 =  Appearance();
Material& Material1192 =  Material();
Appearance1191.addChild(&Material1192);

Shape1190.addChild(&Appearance1191);

IndexedFaceSet& IndexedFaceSet1193 =  IndexedFaceSet();
IndexedFaceSet1193.setCreaseAngle(0.5);
IndexedFaceSet1193.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1194 =  Coordinate();
Coordinate1194.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1193.setCoord(&Coordinate1194);

Shape1190.setGeometry(&IndexedFaceSet1193);

Transform1189.addChild(&Shape1190);

Transform1182.addChild(&Transform1189);

Transform1180.addChild(&Transform1182);

Switch1179.addChild(&Transform1180);

Transform& Transform1195 =  Transform();
Transform1195.setDEF(CString("loading"));
Transform& Transform1196 =  Transform();
Transform& Transform1197 =  Transform();
Transform1197.setUSE(CString("_101"));
Transform1196.addChild(&Transform1197);

Transform1195.addChild(&Transform1196);

Switch1179.addChild(&Transform1195);

Transform& Transform1198 =  Transform();
Transform1198.setDEF(CString("enter"));
TouchSensor& TouchSensor1199 =  TouchSensor();
TouchSensor1199.setDEF(CString("_139"));
Transform1198.addChild(&TouchSensor1199);

Transform& Transform1200 =  Transform();
Transform& Transform1201 =  Transform();
Transform1201.setTranslation(new float[]{-0.238107,-0.31313,0.0339368});
Transform1201.setRotation(new float[]{0,1,0,1.65215});
Transform1201.setScale(new float[]{0.486926,0.486907,0.486985});
Transform1201.setScaleOrientation(new float[]{0,-1,0,0.080003});
Shape& Shape1202 =  Shape();
Appearance& Appearance1203 =  Appearance();
Material& Material1204 =  Material();
Appearance1203.addChild(&Material1204);

Shape1202.addChild(&Appearance1203);

IndexedFaceSet& IndexedFaceSet1205 =  IndexedFaceSet();
IndexedFaceSet1205.setCreaseAngle(0.5);
IndexedFaceSet1205.setCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
Coordinate& Coordinate1206 =  Coordinate();
Coordinate1206.setPoint(new float[]{-0.00296345,0.126682,0.274219,-0.00296353,-0.0159296,0.274219,0.0471157,0.126682,-0.226512,0.0471157,-0.0159296,-0.226512}, 12);
IndexedFaceSet1205.setCoord(&Coordinate1206);

Shape1202.setGeometry(&IndexedFaceSet1205);

Transform1201.addChild(&Shape1202);

Transform1200.addChild(&Transform1201);

Transform& Transform1207 =  Transform();
Transform1207.setTranslation(new float[]{-26.2842,-8.74913,-0.0695362});
Transform1207.setScale(new float[]{0.0044248,0.0044248,0.00442481});
Transform1207.setScaleOrientation(new float[]{0,-1,0,0.00534885});
Transform1207.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1208 =  Shape();
Appearance& Appearance1209 =  Appearance();
Material& Material1210 =  Material();
Appearance1209.addChild(&Material1210);

Shape1208.addChild(&Appearance1209);

Text& Text1211 =  Text();
Text1211.setString(new CString[]{CString("enter")}, 1);
Text1211.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1212 =  CFontStyle();
FontStyle1212.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1212.setSize(24);
Text1211.setFontStyle(&FontStyle1212);

Shape1208.setGeometry(&Text1211);

Transform1207.addChild(&Shape1208);

Transform1200.addChild(&Transform1207);

Transform1198.addChild(&Transform1200);

Switch1179.addChild(&Transform1198);

Transform& Transform1213 =  Transform();
Transform1213.setDEF(CString("Switcher"));
ProtoInstance& ProtoInstance1214 =  ProtoInstance();
ProtoInstance1214.setName(CString("Switcher"));
ProtoInstance1214.setDEF(CString("_140"));
fieldValue& fieldValue1215 =  fieldValue();
fieldValue1215.setName(CString("maxValue"));
fieldValue1215.setValue(CString("2"));
ProtoInstance1214.addChild(&fieldValue1215);

Transform1213.addChild(&ProtoInstance1214);

Switch1179.addChild(&Transform1213);

Transform1178.addChild(&Switch1179);

Transform& Transform1216 =  Transform();
Transform& Transform1217 =  Transform();
Transform1217.setUSE(CString("_136"));
Transform1216.addChild(&Transform1217);

Transform1178.addChild(&Transform1216);

Switch1168.addChild(&Transform1178);

Transform1167.addChild(&Switch1168);

Switch1115.addChild(&Transform1167);

Transform1114.addChild(&Switch1115);

Transform1111.addChild(&Transform1114);

Transform& Transform1218 =  Transform();
Transform1218.setDEF(CString("on-off3"));
Switch& Switch1219 =  Switch();
Switch1219.setDEF(CString("_141"));
Switch1219.setWhichChoice(0);
Transform& Transform1220 =  Transform();
Transform1220.setDEF(CString("come"));
Transform1220.setTranslation(new float[]{0,0,9.31323e-10});
Transform1220.setCenter(new float[]{-0.00960651,-0.0504885,-0.00443865});
Transform& Transform1221 =  Transform();
Transform1221.setDEF(CString("cb3"));
TouchSensor& TouchSensor1222 =  TouchSensor();
TouchSensor1222.setDEF(CString("screen3Touch"));
Transform1221.addChild(&TouchSensor1222);

Transform& Transform1223 =  Transform();
Transform1223.setUSE(CString("scrt"));
Transform1221.addChild(&Transform1223);

Transform1220.addChild(&Transform1221);

Switch1219.addChild(&Transform1220);

Transform& Transform1224 =  Transform();
Transform1224.setDEF(CString("back"));
Transform& Transform1225 =  Transform();
Transform1225.setDEF(CString("backBtn"));
Transform1225.setTranslation(new float[]{0.207581,-0.251725,0.0242725});
Transform1225.setScale(new float[]{0.218384,0.127359,0.268477});
Transform& Transform1226 =  Transform();
Transform1226.setUSE(CString("cb3"));
Transform1225.addChild(&Transform1226);

Transform1224.addChild(&Transform1225);

Transform& Transform1227 =  Transform();
Transform1227.setTranslation(new float[]{0,0,0.02});
Transform& Transform1228 =  Transform();
Transform1228.setDEF(CString("txt"));
Transform1228.setTranslation(new float[]{-25.8243,-8.72355,-0.0838214});
Transform1228.setRotation(new float[]{-0.862561,-0.505954,4.22309e-8,0.0386026});
Transform1228.setScale(new float[]{0.0044248,0.00442482,0.00442481});
Transform1228.setScaleOrientation(new float[]{0.81875,-0.573933,0.015796,0.0717297});
Transform1228.setCenter(new float[]{26.052,8.436,0});
Shape& Shape1229 =  Shape();
Appearance& Appearance1230 =  Appearance();
Material& Material1231 =  Material();
Appearance1230.addChild(&Material1231);

Shape1229.addChild(&Appearance1230);

Text& Text1232 =  Text();
Text1232.setString(new CString[]{CString("back")}, 1);
Text1232.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1233 =  CFontStyle();
FontStyle1233.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1233.setSize(24);
Text1232.setFontStyle(&FontStyle1233);

Shape1229.setGeometry(&Text1232);

Transform1228.addChild(&Shape1229);

Transform1227.addChild(&Transform1228);

Transform1224.addChild(&Transform1227);

Switch1219.addChild(&Transform1224);

Transform& Transform1234 =  Transform();
Transform1234.setDEF(CString("BoolSwitch"));
ProtoInstance& ProtoInstance1235 =  ProtoInstance();
ProtoInstance1235.setName(CString("BoolSwitch"));
ProtoInstance1235.setDEF(CString("_142"));
Transform1234.addChild(&ProtoInstance1235);

Switch1219.addChild(&Transform1234);

Transform1218.addChild(&Switch1219);

Transform1111.addChild(&Transform1218);

Transform1110.addChild(&Transform1111);

Transform1109.addChild(&Transform1110);

Transform842.addChild(&Transform1109);

Transform821.addChild(&Transform842);

Transform& Transform1236 =  Transform();
Transform1236.setDEF(CString("prev"));
Transform& Transform1237 =  Transform();
Transform1237.setDEF(CString("s1_2"));
Transform1237.setTranslation(new float[]{-0.0669022,0,-0.0862356});
Transform1237.setCenter(new float[]{-2.87504,1.60642,-0.0811878});
Transform& Transform1238 =  Transform();
Transform1238.setDEF(CString("tvclone_1"));
Transform1238.setTranslation(new float[]{-2.80588,1.60642,0.0990248});
Transform1238.setRotation(new float[]{0,1,0,0.342505});
Transform1238.setScale(new float[]{2.05345,2.05378,2.05407});
Transform& Transform1239 =  Transform();
Transform1239.setDEF(CString("dreh-tv_4"));
Transform& Transform1240 =  Transform();
Transform1240.setDEF(CString("tv_4"));
Transform& Transform1241 =  Transform();
Transform1241.setUSE(CString("mtv"));
Transform1240.addChild(&Transform1241);

Transform1239.addChild(&Transform1240);

Transform& Transform1242 =  Transform();
Transform1242.setUSE(CString("off-on1"));
Transform1239.addChild(&Transform1242);

Transform& Transform1243 =  Transform();
Transform1243.setDEF(CString("c1"));
Switch& Switch1244 =  Switch();
Switch1244.setDEF(CString("_143"));
Switch1244.setWhichChoice(0);
Transform& Transform1245 =  Transform();
Transform1245.setUSE(CString("football-m"));
Switch1244.addChild(&Transform1245);

Transform& Transform1246 =  Transform();
Transform1246.setUSE(CString("cinema-m"));
Switch1244.addChild(&Transform1246);

Transform1243.addChild(&Switch1244);

Transform1239.addChild(&Transform1243);

Transform1238.addChild(&Transform1239);

Transform1237.addChild(&Transform1238);

Transform1236.addChild(&Transform1237);

Transform& Transform1247 =  Transform();
Transform1247.setDEF(CString("s2_2"));
Transform1247.setTranslation(new float[]{-0.0669059,0,-0.0862475});
Transform& Transform1248 =  Transform();
Transform1248.setDEF(CString("tvclone_2"));
Transform1248.setTranslation(new float[]{-0.064535,1.60642,0.0127602});
Transform1248.setRotation(new float[]{0,1,0,0.342505});
Transform1248.setScale(new float[]{2.05385,2.05385,2.05385});
Transform& Transform1249 =  Transform();
Transform1249.setDEF(CString("dreh-tv_5"));
Transform& Transform1250 =  Transform();
Transform1250.setDEF(CString("tv_5"));
Transform& Transform1251 =  Transform();
Transform1251.setUSE(CString("mtv"));
Transform1250.addChild(&Transform1251);

Transform1249.addChild(&Transform1250);

Transform& Transform1252 =  Transform();
Transform1252.setUSE(CString("on-off2"));
Transform1249.addChild(&Transform1252);

Transform& Transform1253 =  Transform();
Transform1253.setDEF(CString("c2"));
Switch& Switch1254 =  Switch();
Switch1254.setDEF(CString("_144"));
Switch1254.setWhichChoice(0);
Transform& Transform1255 =  Transform();
Transform1255.setUSE(CString("mdonalds-m"));
Switch1254.addChild(&Transform1255);

Transform& Transform1256 =  Transform();
Transform1256.setUSE(CString("carhall-m"));
Switch1254.addChild(&Transform1256);

Transform1253.addChild(&Switch1254);

Transform1249.addChild(&Transform1253);

Transform1248.addChild(&Transform1249);

Transform1247.addChild(&Transform1248);

Transform1236.addChild(&Transform1247);

Transform& Transform1257 =  Transform();
Transform1257.setDEF(CString("s3_2"));
Transform& Transform1258 =  Transform();
Transform1258.setDEF(CString("tvclone_3"));
Transform1258.setTranslation(new float[]{2.55294,1.60642,-0.00000336766});
Transform1258.setRotation(new float[]{0,1,0,0.342505});
Transform1258.setScale(new float[]{2.05385,2.05384,2.05385});
Transform1258.setCenter(new float[]{-0.00225088,0,-0.093948});
Transform& Transform1259 =  Transform();
Transform1259.setDEF(CString("dreh-tv_6"));
Transform& Transform1260 =  Transform();
Transform1260.setDEF(CString("tv"));
Transform& Transform1261 =  Transform();
Transform1261.setUSE(CString("mtv"));
Transform1260.addChild(&Transform1261);

Transform1259.addChild(&Transform1260);

Transform& Transform1262 =  Transform();
Transform1262.setUSE(CString("on-off3"));
Transform1259.addChild(&Transform1262);

Transform& Transform1263 =  Transform();
Transform1263.setDEF(CString("c3"));
Switch& Switch1264 =  Switch();
Switch1264.setDEF(CString("_145"));
Switch1264.setWhichChoice(0);
Transform& Transform1265 =  Transform();
Transform1265.setUSE(CString("pacman-m"));
Switch1264.addChild(&Transform1265);

Transform& Transform1266 =  Transform();
Transform1266.setUSE(CString("plusbank-m"));
Switch1264.addChild(&Transform1266);

Transform1263.addChild(&Switch1264);

Transform1259.addChild(&Transform1263);

Transform1258.addChild(&Transform1259);

Transform1257.addChild(&Transform1258);

Transform1236.addChild(&Transform1257);

Transform821.addChild(&Transform1236);

Transform& Transform1267 =  Transform();
Transform1267.setDEF(CString("NoTouch"));
ProtoInstance& ProtoInstance1268 =  ProtoInstance();
ProtoInstance1268.setName(CString("Not"));
ProtoInstance1268.setDEF(CString("_146"));
Transform1267.addChild(&ProtoInstance1268);

Transform821.addChild(&Transform1267);

Transform783.addChild(&Transform821);

Transform782.addChild(&Transform783);

Transform& Transform1269 =  Transform();
Transform1269.setDEF(CString("vp"));
Transform1269.setCenter(new float[]{-1.64394,1.72316,4.10245});
Group& Group1270 =  Group();
Group& Group1271 =  Group();
Group1271.setDEF(CString("tourStartVP"));
TimeSensor& TimeSensor1272 =  TimeSensor();
TimeSensor1272.setDEF(CString("Time_21"));
TimeSensor1272.setEnabled(False);
TimeSensor1272.setCycleInterval(6);
TimeSensor1272.setStartTime(975594149.588);
TimeSensor1272.setStopTime(1);
Group1271.addChild(&TimeSensor1272);

Group1270.addChild(&Group1271);

PositionInterpolator& PositionInterpolator1273 =  PositionInterpolator();
PositionInterpolator1273.setDEF(CString("tourVPPositionInterp"));
PositionInterpolator1273.setKey(new float[]{0,0.0166667,0.0333333,0.05,0.0666667,0.0833333,0.1,0.116667,0.133333,0.15,0.166667,0.183333,0.2,0.216667,0.233333,0.25,0.266667,0.283333,0.3,0.316667,0.333333,0.35,0.366667,0.383333,0.4,0.416667,0.433333,0.45,0.466667,0.483334,0.5,0.516667,0.533333,0.55,0.566667,0.583333,0.6,0.617391,0.634783,0.652174,0.669565,0.686957,0.704348,0.721739,0.739131,0.756522,0.773913,0.791305,0.808696,0.826087,0.843479,0.86087,0.878261,0.895653,0.913044,0.930435,0.947827,0.965218,0.982609,1}, 60);
PositionInterpolator1273.setKeyValue(new float[]{-2.0417,1.6694,3.37559,-1.94418,1.67318,3.46739,-1.84571,1.67692,3.56026,-1.74638,1.68063,3.65412,-1.64627,1.68431,3.74886,-1.54547,1.68796,3.84438,-1.44406,1.6916,3.9406,-1.34213,1.69521,4.0374,-1.23977,1.69881,4.13469,-1.13707,1.70239,4.23238,-1.0341,1.70597,4.33036,-0.930966,1.70954,4.42853,-0.827742,1.71311,4.52681,-0.724518,1.71667,4.62508,-0.62138,1.72024,4.72326,-0.518416,1.72382,4.82124,-0.41571,1.72741,4.91892,-0.313351,1.731,5.01622,-0.211424,1.73462,5.11302,-0.110015,1.73825,5.20923,-0.00921258,1.74191,5.30476,0.0908987,1.74559,5.3995,0.190231,1.7493,5.49335,0.2887,1.75304,5.58623,0.386217,1.75681,5.67802,0.482696,1.76063,5.76864,0.578052,1.76448,5.85798,0.672196,1.76838,5.94595,0.765043,1.77233,6.03244,0.856507,1.77633,6.11737,0.946501,1.78038,6.20062,1.03494,1.78449,6.28211,1.12173,1.78866,6.36173,1.2068,1.79289,6.43939,1.29005,1.79719,6.51498,1.37139,1.80156,6.58842,1.45075,1.806,6.6596,1.53,1.81077,6.72984,1.6045,1.8157,6.79468,1.67458,1.82081,6.8545,1.74057,1.82606,6.90968,1.80281,1.83145,6.9606,1.86161,1.83696,7.00762,1.91732,1.84259,7.05113,1.97027,1.84832,7.09151,2.02078,1.85414,7.12912,2.0692,1.86004,7.16435,2.11585,1.866,7.19757,2.16106,1.87201,7.22916,2.20516,1.87806,7.25949,2.24849,1.88415,7.28895,2.29138,1.89025,7.3179,2.33416,1.89635,7.34673,2.37716,1.90244,7.37581,2.42071,1.90852,7.40552,2.46515,1.91456,7.43623,2.5108,1.92056,7.46832,2.558,1.9265,7.50217,2.60708,1.93237,7.53815,2.65837,1.93816,7.57664}, 180);
Group1270.addChild(&PositionInterpolator1273);

OrientationInterpolator& OrientationInterpolator1274 =  OrientationInterpolator();
OrientationInterpolator1274.setDEF(CString("tourVPOrientationInterp"));
OrientationInterpolator1274.setKey(new float[]{0,0.0166667,0.0333333,0.05,0.0666667,0.0833333,0.1,0.116667,0.133333,0.15,0.166667,0.183333,0.2,0.216667,0.233333,0.25,0.266667,0.283333,0.3,0.316667,0.333333,0.35,0.366667,0.383333,0.4,0.416667,0.433333,0.45,0.466667,0.483334,0.5,0.516667,0.533333,0.55,0.566667,0.583333,0.6,0.617391,0.634783,0.652174,0.669565,0.686957,0.704348,0.721739,0.739131,0.756522,0.773913,0.791305,0.808696,0.826087,0.843479,0.86087,0.878261,0.895653,0.913044,0.930435,0.947827,0.965218,0.982609,1}, 60);
OrientationInterpolator1274.setKeyValue(new float[]{-0.757865,0.630272,0.168513,0.678332,-0.756199,0.632437,0.167887,0.672139,-0.754327,0.634856,0.167178,0.665015,-0.752239,0.637537,0.166384,0.657019,-0.749925,0.640485,0.1655,0.648209,-0.747374,0.643711,0.164524,0.638643,-0.744569,0.647225,0.163451,0.628381,-0.741497,0.651037,0.162276,0.61748,-0.738138,0.655159,0.160994,0.606,-0.734474,0.659604,0.159598,0.594,-0.730481,0.664385,0.158081,0.581541,-0.726136,0.669518,0.156436,0.56868,-0.721411,0.675017,0.154655,0.55548,-0.716279,0.680895,0.15273,0.542001,-0.710707,0.687169,0.150649,0.528302,-0.704661,0.69385,0.148405,0.514446,-0.698106,0.700954,0.145986,0.500493,-0.691003,0.708489,0.143381,0.486505,-0.683313,0.716464,0.14058,0.472546,-0.674994,0.724884,0.137573,0.458675,-0.666006,0.733749,0.134347,0.444957,-0.656307,0.743052,0.130895,0.431453,-0.645862,0.752782,0.127208,0.418225,-0.634637,0.762914,0.12328,0.405337,-0.622605,0.773419,0.119108,0.39285,-0.609751,0.784251,0.114693,0.380825,-0.596073,0.795354,0.110042,0.369322,-0.581587,0.806658,0.105166,0.358398,-0.566332,0.818077,0.100085,0.348114,-0.550374,0.829515,0.0948283,0.338521,-0.53381,0.840862,0.0894335,0.329672,-0.516773,0.851996,0.08395,0.321614,-0.499433,0.862794,0.0784373,0.314392,-0.481999,0.873128,0.0729657,0.308046,-0.464715,0.882875,0.067615,0.302615,-0.447856,0.89192,0.0624723,0.298128,-0.431723,0.900163,0.0576299,0.294612,-0.407488,0.911812,0.0505227,0.290873,-0.384143,0.922231,0.043874,0.288999,-0.362106,0.931371,0.0377851,0.288825,-0.341705,0.939251,0.0323245,0.290176,-0.323163,0.945943,0.0275271,0.292888,-0.306599,0.951551,0.0233974,0.296795,-0.292037,0.9562,0.0199136,0.301741,-0.279424,0.960017,0.0170343,0.30757,-0.268644,0.963127,0.0147041,0.314138,-0.259543,0.965646,0.0128596,0.321299,-0.251937,0.967676,0.0114335,0.328917,-0.245632,0.969308,0.0103583,0.336859,-0.240431,0.970619,0.00956843,0.344993,-0.236139,0.971678,0.00900185,0.353192,-0.232572,0.972541,0.00860084,0.361329,-0.229554,0.97326,0.00831211,0.36928,-0.226922,0.973879,0.00808668,0.376922,-0.224523,0.974437,0.00787934,0.384132,-0.222212,0.974968,0.00764807,0.390787,-0.219854,0.975505,0.00735315,0.396767,-0.217316,0.976076,0.00695626,0.401951,-0.214468,0.97671,0.00641943,0.406219,-0.211176,0.977431,0.00570395,0.409452}, 240);
Group1270.addChild(&OrientationInterpolator1274);

Transform1269.addChild(&Group1270);

Viewpoint& Viewpoint1275 =  Viewpoint();
Viewpoint1275.setDEF(CString("tourVP"));
Viewpoint1275.setPosition(new float[]{-2.0417,1.6694,3.37559});
Viewpoint1275.setOrientation(new float[]{-0.757865,0.630272,0.168513,0.678332});
Viewpoint1275.setFieldOfView(0.9);
Transform1269.addChild(&Viewpoint1275);

Transform782.addChild(&Transform1269);

Transform& Transform1276 =  Transform();
Transform1276.setDEF(CString("Int_10"));
ProtoInstance& ProtoInstance1277 =  ProtoInstance();
ProtoInstance1277.setName(CString("Int"));
ProtoInstance1277.setDEF(CString("_147"));
fieldValue& fieldValue1278 =  fieldValue();
fieldValue1278.setName(CString("keyValue"));
fieldValue1278.setValue(CString("2"));
ProtoInstance1277.addChild(&fieldValue1278);

Transform1276.addChild(&ProtoInstance1277);

Transform782.addChild(&Transform1276);

Switch526.addChild(&Transform782);

Transform& Transform1279 =  Transform();
Transform1279.setDEF(CString("entertainment"));
Switch526.addChild(&Transform1279);

Transform& Transform1280 =  Transform();
Transform1280.setDEF(CString("logicTalk"));
Switch526.addChild(&Transform1280);

Transform& Transform1281 =  Transform();
Transform1281.setDEF(CString("exit"));
Switch526.addChild(&Transform1281);

Transform525.addChild(&Switch526);

Transform95.addChild(&Transform525);

Transform& Transform1282 =  Transform();
Transform1282.setDEF(CString("Int_11"));
ProtoInstance& ProtoInstance1283 =  ProtoInstance();
ProtoInstance1283.setName(CString("Int"));
ProtoInstance1283.setDEF(CString("_148"));
Transform1282.addChild(&ProtoInstance1283);

Transform95.addChild(&Transform1282);

Switch94.addChild(&Transform95);

Transform& Transform1284 =  Transform();
Transform1284.setDEF(CString("cinema"));
Transform& Transform1285 =  Transform();
Transform1285.setDEF(CString("world_2"));
Transform1284.addChild(&Transform1285);

Transform& Transform1286 =  Transform();
Transform1286.setDEF(CString("Int_12"));
ProtoInstance& ProtoInstance1287 =  ProtoInstance();
ProtoInstance1287.setName(CString("Int"));
ProtoInstance1287.setDEF(CString("_149"));
fieldValue& fieldValue1288 =  fieldValue();
fieldValue1288.setName(CString("keyValue"));
fieldValue1288.setValue(CString("1"));
ProtoInstance1287.addChild(&fieldValue1288);

Transform1286.addChild(&ProtoInstance1287);

Transform1284.addChild(&Transform1286);

Transform& Transform1289 =  Transform();
Transform1289.setDEF(CString("HUD_2"));
Transform& Transform1290 =  Transform();
Transform1290.setDEF(CString("hud_1"));
Transform& Transform1291 =  Transform();
Transform1291.setDEF(CString("ProximitySensor_1"));
ProximitySensor& ProximitySensor1292 =  ProximitySensor();
ProximitySensor1292.setDEF(CString("_150"));
ProximitySensor1292.setSize(new float[]{1000,1000,1000});
Transform1291.addChild(&ProximitySensor1292);

Transform1290.addChild(&Transform1291);

Transform& Transform1293 =  Transform();
Transform1293.setDEF(CString("HUD_3"));
Collision& Collision1294 =  Collision();
Collision1294.setEnabled(False);
Transform& Transform1295 =  Transform();
Transform1295.setDEF(CString("HUDObj_2"));
Viewpoint& Viewpoint1296 =  Viewpoint();
Viewpoint1296.setDEF(CString("footballHUD"));
Viewpoint1296.setPosition(new float[]{0,0,0});
Viewpoint1296.setFieldOfView(1.2);
Transform1295.addChild(&Viewpoint1296);

Transform& Transform1297 =  Transform();
Transform1297.setDEF(CString("back_3"));
TouchSensor& TouchSensor1298 =  TouchSensor();
TouchSensor1298.setDEF(CString("_151"));
Transform1297.addChild(&TouchSensor1298);

Transform& Transform1299 =  Transform();
Transform1299.setTranslation(new float[]{-0.227352,-0.213557,-0.33});
Transform1299.setScale(new float[]{0.00500568,0.00500682,0.00500588});
Shape& Shape1300 =  Shape();
Appearance& Appearance1301 =  Appearance();
Material& Material1302 =  Material();
Appearance1301.addChild(&Material1302);

Shape1300.addChild(&Appearance1301);

Text& Text1303 =  Text();
Text1303.setString(new CString[]{CString("back")}, 1);
Text1303.setLength(new float[]{0}, 1);
CFontStyle& FontStyle1304 =  CFontStyle();
FontStyle1304.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle1304.setSize(6);
FontStyle1304.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text1303.setFontStyle(&FontStyle1304);

Shape1300.setGeometry(&Text1303);

Transform1299.addChild(&Shape1300);

Transform1297.addChild(&Transform1299);

Transform1295.addChild(&Transform1297);

Collision1294.addChildren(&Transform1295);

Transform1293.addChild(&Collision1294);

Transform1290.addChild(&Transform1293);

Transform1289.addChild(&Transform1290);

Transform1284.addChild(&Transform1289);

Transform& Transform1305 =  Transform();
Transform1305.setDEF(CString("LoadVrmlFromURL_1"));
ProtoInstance& ProtoInstance1306 =  ProtoInstance();
ProtoInstance1306.setName(CString("LoadVrmlFromURL"));
ProtoInstance1306.setDEF(CString("_152"));
fieldValue& fieldValue1307 =  fieldValue();
fieldValue1307.setName(CString("url"));
fieldValue1307.setValue(CString("\"index__3.x3d\""));
ProtoInstance1306.addChild(&fieldValue1307);

Transform1305.addChild(&ProtoInstance1306);

Transform1284.addChild(&Transform1305);

Switch94.addChild(&Transform1284);

Transform& Transform1308 =  Transform();
Transform1308.setDEF(CString("carhall"));
Transform& Transform1309 =  Transform();
Transform1309.setDEF(CString("HUD_4"));
Transform& Transform1310 =  Transform();
Transform1310.setUSE(CString("hud_1"));
Transform1309.addChild(&Transform1310);

Transform1308.addChild(&Transform1309);

Transform& Transform1311 =  Transform();
Transform1311.setDEF(CString("Int_13"));
ProtoInstance& ProtoInstance1312 =  ProtoInstance();
ProtoInstance1312.setName(CString("Int"));
ProtoInstance1312.setDEF(CString("_153"));
fieldValue& fieldValue1313 =  fieldValue();
fieldValue1313.setName(CString("keyValue"));
fieldValue1313.setValue(CString("2"));
ProtoInstance1312.addChild(&fieldValue1313);

Transform1311.addChild(&ProtoInstance1312);

Transform1308.addChild(&Transform1311);

Transform& Transform1314 =  Transform();
Transform1314.setDEF(CString("world_3"));
Transform1308.addChild(&Transform1314);

Transform& Transform1315 =  Transform();
Transform1315.setDEF(CString("LoadVrmlFromURL_2"));
ProtoInstance& ProtoInstance1316 =  ProtoInstance();
ProtoInstance1316.setName(CString("LoadVrmlFromURL"));
ProtoInstance1316.setDEF(CString("_154"));
fieldValue& fieldValue1317 =  fieldValue();
fieldValue1317.setName(CString("url"));
fieldValue1317.setValue(CString("\"index__4.x3d\""));
ProtoInstance1316.addChild(&fieldValue1317);

Transform1315.addChild(&ProtoInstance1316);

Transform1308.addChild(&Transform1315);

Switch94.addChild(&Transform1308);

Transform& Transform1318 =  Transform();
Transform1318.setDEF(CString("plusbank"));
Transform& Transform1319 =  Transform();
Transform1319.setDEF(CString("HUD_5"));
Transform& Transform1320 =  Transform();
Transform1320.setUSE(CString("hud_1"));
Transform1319.addChild(&Transform1320);

Transform1318.addChild(&Transform1319);

Transform& Transform1321 =  Transform();
Transform1321.setDEF(CString("Int_14"));
ProtoInstance& ProtoInstance1322 =  ProtoInstance();
ProtoInstance1322.setName(CString("Int"));
ProtoInstance1322.setDEF(CString("_155"));
fieldValue& fieldValue1323 =  fieldValue();
fieldValue1323.setName(CString("keyValue"));
fieldValue1323.setValue(CString("3"));
ProtoInstance1322.addChild(&fieldValue1323);

Transform1321.addChild(&ProtoInstance1322);

Transform1318.addChild(&Transform1321);

Transform& Transform1324 =  Transform();
Transform1324.setDEF(CString("world_4"));
Transform1318.addChild(&Transform1324);

Transform& Transform1325 =  Transform();
Transform1325.setDEF(CString("LoadVrmlFromURL_3"));
ProtoInstance& ProtoInstance1326 =  ProtoInstance();
ProtoInstance1326.setName(CString("LoadVrmlFromURL"));
ProtoInstance1326.setDEF(CString("_156"));
Transform1325.addChild(&ProtoInstance1326);

Transform1318.addChild(&Transform1325);

Switch94.addChild(&Transform1318);

Transform& Transform1327 =  Transform();
Transform1327.setDEF(CString("football"));
Transform& Transform1328 =  Transform();
Transform1328.setUSE(CString("hud_1"));
Transform1327.addChild(&Transform1328);

Transform& Transform1329 =  Transform();
Transform1329.setDEF(CString("world_5"));
Transform1327.addChild(&Transform1329);

Transform& Transform1330 =  Transform();
Transform1330.setDEF(CString("Int_15"));
ProtoInstance& ProtoInstance1331 =  ProtoInstance();
ProtoInstance1331.setName(CString("Int"));
ProtoInstance1331.setDEF(CString("_157"));
fieldValue& fieldValue1332 =  fieldValue();
fieldValue1332.setName(CString("keyValue"));
fieldValue1332.setValue(CString("4"));
ProtoInstance1331.addChild(&fieldValue1332);

Transform1330.addChild(&ProtoInstance1331);

Transform1327.addChild(&Transform1330);

Transform& Transform1333 =  Transform();
Transform1333.setDEF(CString("LoadVrmlFromURL_4"));
ProtoInstance& ProtoInstance1334 =  ProtoInstance();
ProtoInstance1334.setName(CString("LoadVrmlFromURL"));
ProtoInstance1334.setDEF(CString("_158"));
fieldValue& fieldValue1335 =  fieldValue();
fieldValue1335.setName(CString("url"));
fieldValue1335.setValue(CString("\"index__2.x3d\""));
ProtoInstance1334.addChild(&fieldValue1335);

Transform1333.addChild(&ProtoInstance1334);

Transform1327.addChild(&Transform1333);

Switch94.addChild(&Transform1327);

Transform& Transform1336 =  Transform();
Transform1336.setDEF(CString("mcdonalds"));
Transform& Transform1337 =  Transform();
Transform1337.setDEF(CString("HUD_6"));
Transform& Transform1338 =  Transform();
Transform1338.setUSE(CString("hud_1"));
Transform1337.addChild(&Transform1338);

Transform1336.addChild(&Transform1337);

Transform& Transform1339 =  Transform();
Transform1339.setDEF(CString("Int_16"));
ProtoInstance& ProtoInstance1340 =  ProtoInstance();
ProtoInstance1340.setName(CString("Int"));
ProtoInstance1340.setDEF(CString("_159"));
fieldValue& fieldValue1341 =  fieldValue();
fieldValue1341.setName(CString("keyValue"));
fieldValue1341.setValue(CString("5"));
ProtoInstance1340.addChild(&fieldValue1341);

Transform1339.addChild(&ProtoInstance1340);

Transform1336.addChild(&Transform1339);

Transform& Transform1342 =  Transform();
Transform1342.setDEF(CString("world_6"));
Transform1336.addChild(&Transform1342);

Transform& Transform1343 =  Transform();
Transform1343.setDEF(CString("LoadVrmlFromURL_5"));
ProtoInstance& ProtoInstance1344 =  ProtoInstance();
ProtoInstance1344.setName(CString("LoadVrmlFromURL"));
ProtoInstance1344.setDEF(CString("_160"));
fieldValue& fieldValue1345 =  fieldValue();
fieldValue1345.setName(CString("url"));
fieldValue1345.setValue(CString("\"index__5.x3d\""));
ProtoInstance1344.addChild(&fieldValue1345);

Transform1343.addChild(&ProtoInstance1344);

Transform1336.addChild(&Transform1343);

Switch94.addChild(&Transform1336);

Transform& Transform1346 =  Transform();
Transform1346.setDEF(CString("pacman"));
Transform& Transform1347 =  Transform();
Transform1347.setDEF(CString("HUD"));
Transform& Transform1348 =  Transform();
Transform1348.setUSE(CString("ProximitySensor_1"));
Transform1347.addChild(&Transform1348);

Collision& Collision1349 =  Collision();
Collision1349.setEnabled(False);
Transform& Transform1350 =  Transform();
Transform1350.setDEF(CString("_161"));
Transform& Transform1351 =  Transform();
Transform1351.setTranslation(new float[]{0,0.403982,0});
Transform& Transform1352 =  Transform();
Transform1352.setUSE(CString("back_3"));
Transform1351.addChild(&Transform1352);

Transform1350.addChild(&Transform1351);

Collision1349.addChildren(&Transform1350);

Transform1347.addChild(&Collision1349);

Transform1346.addChild(&Transform1347);

Transform& Transform1353 =  Transform();
Transform1353.setDEF(CString("Int"));
ProtoInstance& ProtoInstance1354 =  ProtoInstance();
ProtoInstance1354.setName(CString("Int"));
ProtoInstance1354.setDEF(CString("_162"));
fieldValue& fieldValue1355 =  fieldValue();
fieldValue1355.setName(CString("keyValue"));
fieldValue1355.setValue(CString("6"));
ProtoInstance1354.addChild(&fieldValue1355);

Transform1353.addChild(&ProtoInstance1354);

Transform1346.addChild(&Transform1353);

Transform& Transform1356 =  Transform();
Transform1356.setDEF(CString("world_7"));
Transform1346.addChild(&Transform1356);

Transform& Transform1357 =  Transform();
Transform1357.setDEF(CString("LoadVrmlFromURL"));
ProtoInstance& ProtoInstance1358 =  ProtoInstance();
ProtoInstance1358.setName(CString("LoadVrmlFromURL"));
ProtoInstance1358.setDEF(CString("_163"));
fieldValue& fieldValue1359 =  fieldValue();
fieldValue1359.setName(CString("url"));
fieldValue1359.setValue(CString("\"index__6.x3d\""));
ProtoInstance1358.addChild(&fieldValue1359);

Transform1357.addChild(&ProtoInstance1358);

Transform1346.addChild(&Transform1357);

Switch94.addChild(&Transform1346);

Scene8.addChild(&Switch94);

ROUTE& ROUTE1360 =  ROUTE();
ROUTE1360.setFromNode(CString("enterWorldScript"));
ROUTE1360.setFromField(CString("firstTime"));
ROUTE1360.setToNode(CString("enterWorldTimeSensor"));
ROUTE1360.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1360);

ROUTE& ROUTE1361 =  ROUTE();
ROUTE1361.setFromNode(CString("enterWorldTimeSensor"));
ROUTE1361.setFromField(CString("time"));
ROUTE1361.setToNode(CString("enterWorldScript"));
ROUTE1361.setToField(CString("triggerIn"));
Scene8.addChild(&ROUTE1361);

ROUTE& ROUTE1362 =  ROUTE();
ROUTE1362.setFromNode(CString("_65"));
ROUTE1362.setFromField(CString("isActive"));
ROUTE1362.setToNode(CString("_NoneNavInfo"));
ROUTE1362.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1362);

ROUTE& ROUTE1363 =  ROUTE();
ROUTE1363.setFromNode(CString("_65"));
ROUTE1363.setFromField(CString("isActive"));
ROUTE1363.setToNode(CString("ictspace"));
ROUTE1363.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1363);

ROUTE& ROUTE1364 =  ROUTE();
ROUTE1364.setFromNode(CString("Time_10"));
ROUTE1364.setFromField(CString("isActive"));
ROUTE1364.setToNode(CString("_13"));
ROUTE1364.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1364);

ROUTE& ROUTE1365 =  ROUTE();
ROUTE1365.setFromNode(CString("Time_1"));
ROUTE1365.setFromField(CString("isActive"));
ROUTE1365.setToNode(CString("_13"));
ROUTE1365.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1365);

ROUTE& ROUTE1366 =  ROUTE();
ROUTE1366.setFromNode(CString("Time_3"));
ROUTE1366.setFromField(CString("isActive"));
ROUTE1366.setToNode(CString("_13"));
ROUTE1366.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1366);

ROUTE& ROUTE1367 =  ROUTE();
ROUTE1367.setFromNode(CString("Time_13"));
ROUTE1367.setFromField(CString("isActive"));
ROUTE1367.setToNode(CString("_13"));
ROUTE1367.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1367);

ROUTE& ROUTE1368 =  ROUTE();
ROUTE1368.setFromNode(CString("Time_16"));
ROUTE1368.setFromField(CString("isActive"));
ROUTE1368.setToNode(CString("_13"));
ROUTE1368.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1368);

ROUTE& ROUTE1369 =  ROUTE();
ROUTE1369.setFromNode(CString("_13"));
ROUTE1369.setFromField(CString("wichChoice_changed"));
ROUTE1369.setToNode(CString("_5"));
ROUTE1369.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1369);

ROUTE& ROUTE1370 =  ROUTE();
ROUTE1370.setFromNode(CString("_38"));
ROUTE1370.setFromField(CString("isActive"));
ROUTE1370.setToNode(CString("Time_1"));
ROUTE1370.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1370);

ROUTE& ROUTE1371 =  ROUTE();
ROUTE1371.setFromNode(CString("_22"));
ROUTE1371.setFromField(CString("enterTime"));
ROUTE1371.setToNode(CString("Time_1"));
ROUTE1371.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1371);

ROUTE& ROUTE1372 =  ROUTE();
ROUTE1372.setFromNode(CString("Time_1"));
ROUTE1372.setFromField(CString("fraction_changed"));
ROUTE1372.setToNode(CString("contactTranslationInterp_1"));
ROUTE1372.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1372);

ROUTE& ROUTE1373 =  ROUTE();
ROUTE1373.setFromNode(CString("_22"));
ROUTE1373.setFromField(CString("exitTime"));
ROUTE1373.setToNode(CString("Time_2"));
ROUTE1373.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1373);

ROUTE& ROUTE1374 =  ROUTE();
ROUTE1374.setFromNode(CString("Time_2"));
ROUTE1374.setFromField(CString("fraction_changed"));
ROUTE1374.setToNode(CString("contactTranslationInterp_2"));
ROUTE1374.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1374);

ROUTE& ROUTE1375 =  ROUTE();
ROUTE1375.setFromNode(CString("contactTranslationInterp_1"));
ROUTE1375.setFromField(CString("value_changed"));
ROUTE1375.setToNode(CString("contact_1"));
ROUTE1375.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1375);

ROUTE& ROUTE1376 =  ROUTE();
ROUTE1376.setFromNode(CString("contactTranslationInterp_2"));
ROUTE1376.setFromField(CString("value_changed"));
ROUTE1376.setToNode(CString("contact_1"));
ROUTE1376.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1376);

ROUTE& ROUTE1377 =  ROUTE();
ROUTE1377.setFromNode(CString("_6"));
ROUTE1377.setFromField(CString("touchTime"));
ROUTE1377.setToNode(CString("_16"));
ROUTE1377.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1377);

ROUTE& ROUTE1378 =  ROUTE();
ROUTE1378.setFromNode(CString("_7"));
ROUTE1378.setFromField(CString("touchTime"));
ROUTE1378.setToNode(CString("_18"));
ROUTE1378.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1378);

ROUTE& ROUTE1379 =  ROUTE();
ROUTE1379.setFromNode(CString("_8"));
ROUTE1379.setFromField(CString("touchTime"));
ROUTE1379.setToNode(CString("_19"));
ROUTE1379.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1379);

ROUTE& ROUTE1380 =  ROUTE();
ROUTE1380.setFromNode(CString("_9"));
ROUTE1380.setFromField(CString("touchTime"));
ROUTE1380.setToNode(CString("_21"));
ROUTE1380.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1380);

ROUTE& ROUTE1381 =  ROUTE();
ROUTE1381.setFromNode(CString("_10"));
ROUTE1381.setFromField(CString("touchTime"));
ROUTE1381.setToNode(CString("_23"));
ROUTE1381.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1381);

ROUTE& ROUTE1382 =  ROUTE();
ROUTE1382.setFromNode(CString("_71"));
ROUTE1382.setFromField(CString("touchTime"));
ROUTE1382.setToNode(CString("_25"));
ROUTE1382.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1382);

ROUTE& ROUTE1383 =  ROUTE();
ROUTE1383.setFromNode(CString("_38"));
ROUTE1383.setFromField(CString("exitTime"));
ROUTE1383.setToNode(CString("_25"));
ROUTE1383.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1383);

ROUTE& ROUTE1384 =  ROUTE();
ROUTE1384.setFromNode(CString("enterWorldScript"));
ROUTE1384.setFromField(CString("startTime"));
ROUTE1384.setToNode(CString("_25"));
ROUTE1384.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1384);

ROUTE& ROUTE1385 =  ROUTE();
ROUTE1385.setFromNode(CString("_16"));
ROUTE1385.setFromField(CString("value_changed"));
ROUTE1385.setToNode(CString("_14"));
ROUTE1385.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1385);

ROUTE& ROUTE1386 =  ROUTE();
ROUTE1386.setFromNode(CString("_18"));
ROUTE1386.setFromField(CString("value_changed"));
ROUTE1386.setToNode(CString("_14"));
ROUTE1386.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1386);

ROUTE& ROUTE1387 =  ROUTE();
ROUTE1387.setFromNode(CString("_19"));
ROUTE1387.setFromField(CString("value_changed"));
ROUTE1387.setToNode(CString("_14"));
ROUTE1387.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1387);

ROUTE& ROUTE1388 =  ROUTE();
ROUTE1388.setFromNode(CString("_21"));
ROUTE1388.setFromField(CString("value_changed"));
ROUTE1388.setToNode(CString("_14"));
ROUTE1388.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1388);

ROUTE& ROUTE1389 =  ROUTE();
ROUTE1389.setFromNode(CString("_23"));
ROUTE1389.setFromField(CString("value_changed"));
ROUTE1389.setToNode(CString("_14"));
ROUTE1389.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1389);

ROUTE& ROUTE1390 =  ROUTE();
ROUTE1390.setFromNode(CString("_25"));
ROUTE1390.setFromField(CString("value_changed"));
ROUTE1390.setToNode(CString("_14"));
ROUTE1390.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1390);

ROUTE& ROUTE1391 =  ROUTE();
ROUTE1391.setFromNode(CString("_17"));
ROUTE1391.setFromField(CString("enterTime"));
ROUTE1391.setToNode(CString("Time_3"));
ROUTE1391.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1391);

ROUTE& ROUTE1392 =  ROUTE();
ROUTE1392.setFromNode(CString("Time_3"));
ROUTE1392.setFromField(CString("fraction_changed"));
ROUTE1392.setToNode(CString("partnerlogosTranslationInterp_1"));
ROUTE1392.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1392);

ROUTE& ROUTE1393 =  ROUTE();
ROUTE1393.setFromNode(CString("Time_3"));
ROUTE1393.setFromField(CString("fraction_changed"));
ROUTE1393.setToNode(CString("vrzoneTranslationInterp"));
ROUTE1393.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1393);

ROUTE& ROUTE1394 =  ROUTE();
ROUTE1394.setFromNode(CString("Time_3"));
ROUTE1394.setFromField(CString("fraction_changed"));
ROUTE1394.setToNode(CString("runpixTranslationInterp"));
ROUTE1394.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1394);

ROUTE& ROUTE1395 =  ROUTE();
ROUTE1395.setFromNode(CString("Time_3"));
ROUTE1395.setFromField(CString("fraction_changed"));
ROUTE1395.setToNode(CString("vrgardenTranslationInterp"));
ROUTE1395.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1395);

ROUTE& ROUTE1396 =  ROUTE();
ROUTE1396.setFromNode(CString("Time_3"));
ROUTE1396.setFromField(CString("fraction_changed"));
ROUTE1396.setToNode(CString("noizeloopTranslationInterp"));
ROUTE1396.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1396);

ROUTE& ROUTE1397 =  ROUTE();
ROUTE1397.setFromNode(CString("Time_3"));
ROUTE1397.setFromField(CString("fraction_changed"));
ROUTE1397.setToNode(CString("cozzmoTranslationInterp"));
ROUTE1397.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1397);

ROUTE& ROUTE1398 =  ROUTE();
ROUTE1398.setFromNode(CString("Time_3"));
ROUTE1398.setFromField(CString("fraction_changed"));
ROUTE1398.setToNode(CString("kpnquestTranslationInterp"));
ROUTE1398.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1398);

ROUTE& ROUTE1399 =  ROUTE();
ROUTE1399.setFromNode(CString("_17"));
ROUTE1399.setFromField(CString("exitTime"));
ROUTE1399.setToNode(CString("Time_4"));
ROUTE1399.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1399);

ROUTE& ROUTE1400 =  ROUTE();
ROUTE1400.setFromNode(CString("Time_4"));
ROUTE1400.setFromField(CString("fraction_changed"));
ROUTE1400.setToNode(CString("partnerlogosTranslationInterp_2"));
ROUTE1400.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1400);

ROUTE& ROUTE1401 =  ROUTE();
ROUTE1401.setFromNode(CString("_26"));
ROUTE1401.setFromField(CString("touchTime"));
ROUTE1401.setToNode(CString("_27"));
ROUTE1401.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1401);

ROUTE& ROUTE1402 =  ROUTE();
ROUTE1402.setFromNode(CString("vrzoneTranslationInterp"));
ROUTE1402.setFromField(CString("value_changed"));
ROUTE1402.setToNode(CString("vrzone"));
ROUTE1402.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1402);

ROUTE& ROUTE1403 =  ROUTE();
ROUTE1403.setFromNode(CString("_28"));
ROUTE1403.setFromField(CString("touchTime"));
ROUTE1403.setToNode(CString("_29"));
ROUTE1403.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1403);

ROUTE& ROUTE1404 =  ROUTE();
ROUTE1404.setFromNode(CString("runpixTranslationInterp"));
ROUTE1404.setFromField(CString("value_changed"));
ROUTE1404.setToNode(CString("runpix"));
ROUTE1404.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1404);

ROUTE& ROUTE1405 =  ROUTE();
ROUTE1405.setFromNode(CString("_30"));
ROUTE1405.setFromField(CString("touchTime"));
ROUTE1405.setToNode(CString("_31"));
ROUTE1405.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1405);

ROUTE& ROUTE1406 =  ROUTE();
ROUTE1406.setFromNode(CString("vrgardenTranslationInterp"));
ROUTE1406.setFromField(CString("value_changed"));
ROUTE1406.setToNode(CString("vrgarden"));
ROUTE1406.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1406);

ROUTE& ROUTE1407 =  ROUTE();
ROUTE1407.setFromNode(CString("_32"));
ROUTE1407.setFromField(CString("touchTime"));
ROUTE1407.setToNode(CString("_33"));
ROUTE1407.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1407);

ROUTE& ROUTE1408 =  ROUTE();
ROUTE1408.setFromNode(CString("noizeloopTranslationInterp"));
ROUTE1408.setFromField(CString("value_changed"));
ROUTE1408.setToNode(CString("noizeloop"));
ROUTE1408.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1408);

ROUTE& ROUTE1409 =  ROUTE();
ROUTE1409.setFromNode(CString("_34"));
ROUTE1409.setFromField(CString("touchTime"));
ROUTE1409.setToNode(CString("_35"));
ROUTE1409.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1409);

ROUTE& ROUTE1410 =  ROUTE();
ROUTE1410.setFromNode(CString("cozzmoTranslationInterp"));
ROUTE1410.setFromField(CString("value_changed"));
ROUTE1410.setToNode(CString("cozzmo"));
ROUTE1410.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1410);

ROUTE& ROUTE1411 =  ROUTE();
ROUTE1411.setFromNode(CString("_36"));
ROUTE1411.setFromField(CString("touchTime"));
ROUTE1411.setToNode(CString("_37"));
ROUTE1411.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1411);

ROUTE& ROUTE1412 =  ROUTE();
ROUTE1412.setFromNode(CString("kpnquestTranslationInterp"));
ROUTE1412.setFromField(CString("value_changed"));
ROUTE1412.setToNode(CString("kpnquest"));
ROUTE1412.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1412);

ROUTE& ROUTE1413 =  ROUTE();
ROUTE1413.setFromNode(CString("partnerlogosTranslationInterp_1"));
ROUTE1413.setFromField(CString("value_changed"));
ROUTE1413.setToNode(CString("partnerlogos"));
ROUTE1413.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1413);

ROUTE& ROUTE1414 =  ROUTE();
ROUTE1414.setFromNode(CString("partnerlogosTranslationInterp_2"));
ROUTE1414.setFromField(CString("value_changed"));
ROUTE1414.setToNode(CString("partnerlogos"));
ROUTE1414.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1414);

ROUTE& ROUTE1415 =  ROUTE();
ROUTE1415.setFromNode(CString("Time_18"));
ROUTE1415.setFromField(CString("isActive"));
ROUTE1415.setToNode(CString("_41"));
ROUTE1415.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1415);

ROUTE& ROUTE1416 =  ROUTE();
ROUTE1416.setFromNode(CString("Time_19"));
ROUTE1416.setFromField(CString("isActive"));
ROUTE1416.setToNode(CString("_41"));
ROUTE1416.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1416);

ROUTE& ROUTE1417 =  ROUTE();
ROUTE1417.setFromNode(CString("_41"));
ROUTE1417.setFromField(CString("wichChoice_changed"));
ROUTE1417.setToNode(CString("_39"));
ROUTE1417.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1417);

ROUTE& ROUTE1418 =  ROUTE();
ROUTE1418.setFromNode(CString("_47"));
ROUTE1418.setFromField(CString("value_changed"));
ROUTE1418.setToNode(CString("_42"));
ROUTE1418.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1418);

ROUTE& ROUTE1419 =  ROUTE();
ROUTE1419.setFromNode(CString("_48"));
ROUTE1419.setFromField(CString("isActive"));
ROUTE1419.setToNode(CString("Time_5"));
ROUTE1419.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1419);

ROUTE& ROUTE1420 =  ROUTE();
ROUTE1420.setFromNode(CString("_61"));
ROUTE1420.setFromField(CString("startTime"));
ROUTE1420.setToNode(CString("Time_5"));
ROUTE1420.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1420);

ROUTE& ROUTE1421 =  ROUTE();
ROUTE1421.setFromNode(CString("_93"));
ROUTE1421.setFromField(CString("exitTime"));
ROUTE1421.setToNode(CString("Time_5"));
ROUTE1421.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1421);

ROUTE& ROUTE1422 =  ROUTE();
ROUTE1422.setFromNode(CString("_94"));
ROUTE1422.setFromField(CString("exitTime"));
ROUTE1422.setToNode(CString("Time_5"));
ROUTE1422.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1422);

ROUTE& ROUTE1423 =  ROUTE();
ROUTE1423.setFromNode(CString("_95"));
ROUTE1423.setFromField(CString("exitTime"));
ROUTE1423.setToNode(CString("Time_5"));
ROUTE1423.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1423);

ROUTE& ROUTE1424 =  ROUTE();
ROUTE1424.setFromNode(CString("Time_5"));
ROUTE1424.setFromField(CString("fraction_changed"));
ROUTE1424.setToNode(CString("animTranslationInterp_1"));
ROUTE1424.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1424);

ROUTE& ROUTE1425 =  ROUTE();
ROUTE1425.setFromNode(CString("_46"));
ROUTE1425.setFromField(CString("value_changed"));
ROUTE1425.setToNode(CString("animTranslationInterp_1"));
ROUTE1425.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1425);

ROUTE& ROUTE1426 =  ROUTE();
ROUTE1426.setFromNode(CString("_49"));
ROUTE1426.setFromField(CString("value_changed"));
ROUTE1426.setToNode(CString("animTranslationInterp_1"));
ROUTE1426.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1426);

ROUTE& ROUTE1427 =  ROUTE();
ROUTE1427.setFromNode(CString("_54"));
ROUTE1427.setFromField(CString("value_changed"));
ROUTE1427.setToNode(CString("animTranslationInterp_1"));
ROUTE1427.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1427);

ROUTE& ROUTE1428 =  ROUTE();
ROUTE1428.setFromNode(CString("animTranslationInterp_1"));
ROUTE1428.setFromField(CString("value_changed"));
ROUTE1428.setToNode(CString("anim_1"));
ROUTE1428.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1428);

ROUTE& ROUTE1429 =  ROUTE();
ROUTE1429.setFromNode(CString("_47"));
ROUTE1429.setFromField(CString("value_changed"));
ROUTE1429.setToNode(CString("_44"));
ROUTE1429.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1429);

ROUTE& ROUTE1430 =  ROUTE();
ROUTE1430.setFromNode(CString("Time_5"));
ROUTE1430.setFromField(CString("fraction_changed"));
ROUTE1430.setToNode(CString("animTranslationInterp_2"));
ROUTE1430.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1430);

ROUTE& ROUTE1431 =  ROUTE();
ROUTE1431.setFromNode(CString("_46"));
ROUTE1431.setFromField(CString("value_changed"));
ROUTE1431.setToNode(CString("animTranslationInterp_2"));
ROUTE1431.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1431);

ROUTE& ROUTE1432 =  ROUTE();
ROUTE1432.setFromNode(CString("_49"));
ROUTE1432.setFromField(CString("value_changed"));
ROUTE1432.setToNode(CString("animTranslationInterp_2"));
ROUTE1432.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1432);

ROUTE& ROUTE1433 =  ROUTE();
ROUTE1433.setFromNode(CString("_54"));
ROUTE1433.setFromField(CString("value_changed"));
ROUTE1433.setToNode(CString("animTranslationInterp_2"));
ROUTE1433.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1433);

ROUTE& ROUTE1434 =  ROUTE();
ROUTE1434.setFromNode(CString("animTranslationInterp_2"));
ROUTE1434.setFromField(CString("value_changed"));
ROUTE1434.setToNode(CString("anim_2"));
ROUTE1434.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1434);

ROUTE& ROUTE1435 =  ROUTE();
ROUTE1435.setFromNode(CString("_93"));
ROUTE1435.setFromField(CString("enterTime"));
ROUTE1435.setToNode(CString("_45"));
ROUTE1435.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1435);

ROUTE& ROUTE1436 =  ROUTE();
ROUTE1436.setFromNode(CString("_94"));
ROUTE1436.setFromField(CString("enterTime"));
ROUTE1436.setToNode(CString("_45"));
ROUTE1436.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1436);

ROUTE& ROUTE1437 =  ROUTE();
ROUTE1437.setFromNode(CString("_95"));
ROUTE1437.setFromField(CString("enterTime"));
ROUTE1437.setToNode(CString("_45"));
ROUTE1437.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1437);

ROUTE& ROUTE1438 =  ROUTE();
ROUTE1438.setFromNode(CString("_45"));
ROUTE1438.setFromField(CString("fraction_changed"));
ROUTE1438.setToNode(CString("_46"));
ROUTE1438.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1438);

ROUTE& ROUTE1439 =  ROUTE();
ROUTE1439.setFromNode(CString("Time_18"));
ROUTE1439.setFromField(CString("isActive"));
ROUTE1439.setToNode(CString("_47"));
ROUTE1439.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1439);

ROUTE& ROUTE1440 =  ROUTE();
ROUTE1440.setFromNode(CString("Time_19"));
ROUTE1440.setFromField(CString("isActive"));
ROUTE1440.setToNode(CString("_47"));
ROUTE1440.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1440);

ROUTE& ROUTE1441 =  ROUTE();
ROUTE1441.setFromNode(CString("_48"));
ROUTE1441.setFromField(CString("isActive"));
ROUTE1441.setToNode(CString("Light3"));
ROUTE1441.setToField(CString("set_on"));
Scene8.addChild(&ROUTE1441);

ROUTE& ROUTE1442 =  ROUTE();
ROUTE1442.setFromNode(CString("_59"));
ROUTE1442.setFromField(CString("startTime"));
ROUTE1442.setToNode(CString("_49"));
ROUTE1442.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1442);

ROUTE& ROUTE1443 =  ROUTE();
ROUTE1443.setFromNode(CString("_59"));
ROUTE1443.setFromField(CString("startTime"));
ROUTE1443.setToNode(CString("_50"));
ROUTE1443.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1443);

ROUTE& ROUTE1444 =  ROUTE();
ROUTE1444.setFromNode(CString("_42"));
ROUTE1444.setFromField(CString("touchTime"));
ROUTE1444.setToNode(CString("_52"));
ROUTE1444.setToField(CString("set_prev"));
Scene8.addChild(&ROUTE1444);

ROUTE& ROUTE1445 =  ROUTE();
ROUTE1445.setFromNode(CString("_44"));
ROUTE1445.setFromField(CString("touchTime"));
ROUTE1445.setToNode(CString("_52"));
ROUTE1445.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1445);

ROUTE& ROUTE1446 =  ROUTE();
ROUTE1446.setFromNode(CString("_53"));
ROUTE1446.setFromField(CString("value_changed"));
ROUTE1446.setToNode(CString("_52"));
ROUTE1446.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1446);

ROUTE& ROUTE1447 =  ROUTE();
ROUTE1447.setFromNode(CString("_53"));
ROUTE1447.setFromField(CString("value_changed"));
ROUTE1447.setToNode(CString("_51"));
ROUTE1447.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1447);

ROUTE& ROUTE1448 =  ROUTE();
ROUTE1448.setFromNode(CString("_52"));
ROUTE1448.setFromField(CString("whichChoice_changed"));
ROUTE1448.setToNode(CString("_51"));
ROUTE1448.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1448);

ROUTE& ROUTE1449 =  ROUTE();
ROUTE1449.setFromNode(CString("_59"));
ROUTE1449.setFromField(CString("startTime"));
ROUTE1449.setToNode(CString("_53"));
ROUTE1449.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1449);

ROUTE& ROUTE1450 =  ROUTE();
ROUTE1450.setFromNode(CString("_59"));
ROUTE1450.setFromField(CString("startTime"));
ROUTE1450.setToNode(CString("_54"));
ROUTE1450.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1450);

ROUTE& ROUTE1451 =  ROUTE();
ROUTE1451.setFromNode(CString("_66"));
ROUTE1451.setFromField(CString("whichChoice_changed"));
ROUTE1451.setToNode(CString("_3"));
ROUTE1451.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1451);

ROUTE& ROUTE1452 =  ROUTE();
ROUTE1452.setFromNode(CString("_59"));
ROUTE1452.setFromField(CString("startTime"));
ROUTE1452.setToNode(CString("Time_6"));
ROUTE1452.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1452);

ROUTE& ROUTE1453 =  ROUTE();
ROUTE1453.setFromNode(CString("_67"));
ROUTE1453.setFromField(CString("startTime"));
ROUTE1453.setToNode(CString("Time_6"));
ROUTE1453.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1453);

ROUTE& ROUTE1454 =  ROUTE();
ROUTE1454.setFromNode(CString("Time_6"));
ROUTE1454.setFromField(CString("fraction_changed"));
ROUTE1454.setToNode(CString("fadeTransparencyInterp"));
ROUTE1454.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1454);

ROUTE& ROUTE1455 =  ROUTE();
ROUTE1455.setFromNode(CString("_58"));
ROUTE1455.setFromField(CString("value_changed"));
ROUTE1455.setToNode(CString("fadeTransparencyInterp"));
ROUTE1455.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1455);

ROUTE& ROUTE1456 =  ROUTE();
ROUTE1456.setFromNode(CString("fadeTransparencyInterp"));
ROUTE1456.setFromField(CString("value_changed"));
ROUTE1456.setToNode(CString("_56"));
ROUTE1456.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1456);

ROUTE& ROUTE1457 =  ROUTE();
ROUTE1457.setFromNode(CString("_64"));
ROUTE1457.setFromField(CString("value_changed"));
ROUTE1457.setToNode(CString("fade_1"));
ROUTE1457.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1457);

ROUTE& ROUTE1458 =  ROUTE();
ROUTE1458.setFromNode(CString("_63"));
ROUTE1458.setFromField(CString("value_changed"));
ROUTE1458.setToNode(CString("fade_1"));
ROUTE1458.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1458);

ROUTE& ROUTE1459 =  ROUTE();
ROUTE1459.setFromNode(CString("_70"));
ROUTE1459.setFromField(CString("exitTime"));
ROUTE1459.setToNode(CString("_57"));
ROUTE1459.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1459);

ROUTE& ROUTE1460 =  ROUTE();
ROUTE1460.setFromNode(CString("_57"));
ROUTE1460.setFromField(CString("fraction_changed"));
ROUTE1460.setToNode(CString("_58"));
ROUTE1460.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1460);

ROUTE& ROUTE1461 =  ROUTE();
ROUTE1461.setFromNode(CString("_57"));
ROUTE1461.setFromField(CString("isActive"));
ROUTE1461.setToNode(CString("_59"));
ROUTE1461.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1461);

ROUTE& ROUTE1462 =  ROUTE();
ROUTE1462.setFromNode(CString("Time_6"));
ROUTE1462.setFromField(CString("isActive"));
ROUTE1462.setToNode(CString("_60"));
ROUTE1462.setToField(CString("set_value1"));
Scene8.addChild(&ROUTE1462);

ROUTE& ROUTE1463 =  ROUTE();
ROUTE1463.setFromNode(CString("_57"));
ROUTE1463.setFromField(CString("isActive"));
ROUTE1463.setToNode(CString("_60"));
ROUTE1463.setToField(CString("set_value2"));
Scene8.addChild(&ROUTE1463);

ROUTE& ROUTE1464 =  ROUTE();
ROUTE1464.setFromNode(CString("Time_6"));
ROUTE1464.setFromField(CString("isActive"));
ROUTE1464.setToNode(CString("_61"));
ROUTE1464.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1464);

ROUTE& ROUTE1465 =  ROUTE();
ROUTE1465.setFromNode(CString("_enterWorldScript"));
ROUTE1465.setFromField(CString("isActive"));
ROUTE1465.setToNode(CString("_62"));
ROUTE1465.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1465);

ROUTE& ROUTE1466 =  ROUTE();
ROUTE1466.setFromNode(CString("_60"));
ROUTE1466.setFromField(CString("value_changed"));
ROUTE1466.setToNode(CString("_62"));
ROUTE1466.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1466);

ROUTE& ROUTE1467 =  ROUTE();
ROUTE1467.setFromNode(CString("_48"));
ROUTE1467.setFromField(CString("exitTime"));
ROUTE1467.setToNode(CString("_63"));
ROUTE1467.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1467);

ROUTE& ROUTE1468 =  ROUTE();
ROUTE1468.setFromNode(CString("_87"));
ROUTE1468.setFromField(CString("touchTime"));
ROUTE1468.setToNode(CString("_64"));
ROUTE1468.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1468);

ROUTE& ROUTE1469 =  ROUTE();
ROUTE1469.setFromNode(CString("_62"));
ROUTE1469.setFromField(CString("wichChoice_changed"));
ROUTE1469.setToNode(CString("_55"));
ROUTE1469.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1469);

ROUTE& ROUTE1470 =  ROUTE();
ROUTE1470.setFromNode(CString("_65"));
ROUTE1470.setFromField(CString("enterTime"));
ROUTE1470.setToNode(CString("_enterWorldScript"));
ROUTE1470.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1470);

ROUTE& ROUTE1471 =  ROUTE();
ROUTE1471.setFromNode(CString("_2"));
ROUTE1471.setFromField(CString("position_changed"));
ROUTE1471.setToNode(CString("HUDObj_1"));
ROUTE1471.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1471);

ROUTE& ROUTE1472 =  ROUTE();
ROUTE1472.setFromNode(CString("_2"));
ROUTE1472.setFromField(CString("orientation_changed"));
ROUTE1472.setToNode(CString("HUDObj_1"));
ROUTE1472.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1472);

ROUTE& ROUTE1473 =  ROUTE();
ROUTE1473.setFromNode(CString("_4"));
ROUTE1473.setFromField(CString("isActive"));
ROUTE1473.setToNode(CString("fog"));
ROUTE1473.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1473);

ROUTE& ROUTE1474 =  ROUTE();
ROUTE1474.setFromNode(CString("_4"));
ROUTE1474.setFromField(CString("isActive"));
ROUTE1474.setToNode(CString("Time_7"));
ROUTE1474.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1474);

ROUTE& ROUTE1475 =  ROUTE();
ROUTE1475.setFromNode(CString("_4"));
ROUTE1475.setFromField(CString("enterTime"));
ROUTE1475.setToNode(CString("Time_7"));
ROUTE1475.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1475);

ROUTE& ROUTE1476 =  ROUTE();
ROUTE1476.setFromNode(CString("Time_7"));
ROUTE1476.setFromField(CString("fraction_changed"));
ROUTE1476.setToNode(CString("introVPPositionInterp"));
ROUTE1476.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1476);

ROUTE& ROUTE1477 =  ROUTE();
ROUTE1477.setFromNode(CString("Time_7"));
ROUTE1477.setFromField(CString("fraction_changed"));
ROUTE1477.setToNode(CString("introVPOrientationInterp"));
ROUTE1477.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1477);

ROUTE& ROUTE1478 =  ROUTE();
ROUTE1478.setFromNode(CString("_4"));
ROUTE1478.setFromField(CString("isActive"));
ROUTE1478.setToNode(CString("introVP"));
ROUTE1478.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1478);

ROUTE& ROUTE1479 =  ROUTE();
ROUTE1479.setFromNode(CString("introVPPositionInterp"));
ROUTE1479.setFromField(CString("value_changed"));
ROUTE1479.setToNode(CString("introVP"));
ROUTE1479.setToField(CString("set_position"));
Scene8.addChild(&ROUTE1479);

ROUTE& ROUTE1480 =  ROUTE();
ROUTE1480.setFromNode(CString("introVPOrientationInterp"));
ROUTE1480.setFromField(CString("value_changed"));
ROUTE1480.setToNode(CString("introVP"));
ROUTE1480.setToField(CString("set_orientation"));
Scene8.addChild(&ROUTE1480);

ROUTE& ROUTE1481 =  ROUTE();
ROUTE1481.setFromNode(CString("Time_7"));
ROUTE1481.setFromField(CString("fraction_changed"));
ROUTE1481.setToNode(CString("introAnimTranslationInterp"));
ROUTE1481.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1481);

ROUTE& ROUTE1482 =  ROUTE();
ROUTE1482.setFromNode(CString("Time_7"));
ROUTE1482.setFromField(CString("isActive"));
ROUTE1482.setToNode(CString("_67"));
ROUTE1482.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1482);

ROUTE& ROUTE1483 =  ROUTE();
ROUTE1483.setFromNode(CString("introAnimTranslationInterp"));
ROUTE1483.setFromField(CString("value_changed"));
ROUTE1483.setToNode(CString("introAnim_2"));
ROUTE1483.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1483);

ROUTE& ROUTE1484 =  ROUTE();
ROUTE1484.setFromNode(CString("_67"));
ROUTE1484.setFromField(CString("startTime"));
ROUTE1484.setToNode(CString("_68"));
ROUTE1484.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1484);

ROUTE& ROUTE1485 =  ROUTE();
ROUTE1485.setFromNode(CString("_11"));
ROUTE1485.setFromField(CString("touchTime"));
ROUTE1485.setToNode(CString("_69"));
ROUTE1485.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1485);

ROUTE& ROUTE1486 =  ROUTE();
ROUTE1486.setFromNode(CString("enterWorldScript"));
ROUTE1486.setFromField(CString("startTime"));
ROUTE1486.setToNode(CString("_69"));
ROUTE1486.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1486);

ROUTE& ROUTE1487 =  ROUTE();
ROUTE1487.setFromNode(CString("_38"));
ROUTE1487.setFromField(CString("isActive"));
ROUTE1487.setToNode(CString("Light1_1"));
ROUTE1487.setToField(CString("set_on"));
Scene8.addChild(&ROUTE1487);

ROUTE& ROUTE1488 =  ROUTE();
ROUTE1488.setFromNode(CString("_38"));
ROUTE1488.setFromField(CString("isActive"));
ROUTE1488.setToNode(CString("Time_8"));
ROUTE1488.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1488);

ROUTE& ROUTE1489 =  ROUTE();
ROUTE1489.setFromNode(CString("_38"));
ROUTE1489.setFromField(CString("enterTime"));
ROUTE1489.setToNode(CString("Time_8"));
ROUTE1489.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1489);

ROUTE& ROUTE1490 =  ROUTE();
ROUTE1490.setFromNode(CString("Time_9"));
ROUTE1490.setFromField(CString("startTime_changed"));
ROUTE1490.setToNode(CString("Time_8"));
ROUTE1490.setToField(CString("set_stopTime"));
Scene8.addChild(&ROUTE1490);

ROUTE& ROUTE1491 =  ROUTE();
ROUTE1491.setFromNode(CString("Time_8"));
ROUTE1491.setFromField(CString("fraction_changed"));
ROUTE1491.setToNode(CString("welcomeVPPositionInterp"));
ROUTE1491.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1491);

ROUTE& ROUTE1492 =  ROUTE();
ROUTE1492.setFromNode(CString("Time_8"));
ROUTE1492.setFromField(CString("fraction_changed"));
ROUTE1492.setToNode(CString("welcomeVPOrientationInterp"));
ROUTE1492.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1492);

ROUTE& ROUTE1493 =  ROUTE();
ROUTE1493.setFromNode(CString("_87"));
ROUTE1493.setFromField(CString("touchTime"));
ROUTE1493.setToNode(CString("Time_9"));
ROUTE1493.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1493);

ROUTE& ROUTE1494 =  ROUTE();
ROUTE1494.setFromNode(CString("Time_9"));
ROUTE1494.setFromField(CString("fraction_changed"));
ROUTE1494.setToNode(CString("mainVPPositionInterp"));
ROUTE1494.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1494);

ROUTE& ROUTE1495 =  ROUTE();
ROUTE1495.setFromNode(CString("Time_9"));
ROUTE1495.setFromField(CString("fraction_changed"));
ROUTE1495.setToNode(CString("mainVPOrientationInterp"));
ROUTE1495.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1495);

ROUTE& ROUTE1496 =  ROUTE();
ROUTE1496.setFromNode(CString("_38"));
ROUTE1496.setFromField(CString("isActive"));
ROUTE1496.setToNode(CString("mainVP"));
ROUTE1496.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1496);

ROUTE& ROUTE1497 =  ROUTE();
ROUTE1497.setFromNode(CString("welcomeVPPositionInterp"));
ROUTE1497.setFromField(CString("value_changed"));
ROUTE1497.setToNode(CString("mainVP"));
ROUTE1497.setToField(CString("set_position"));
Scene8.addChild(&ROUTE1497);

ROUTE& ROUTE1498 =  ROUTE();
ROUTE1498.setFromNode(CString("mainVPPositionInterp"));
ROUTE1498.setFromField(CString("value_changed"));
ROUTE1498.setToNode(CString("mainVP"));
ROUTE1498.setToField(CString("set_position"));
Scene8.addChild(&ROUTE1498);

ROUTE& ROUTE1499 =  ROUTE();
ROUTE1499.setFromNode(CString("welcomeVPOrientationInterp"));
ROUTE1499.setFromField(CString("value_changed"));
ROUTE1499.setToNode(CString("mainVP"));
ROUTE1499.setToField(CString("set_orientation"));
Scene8.addChild(&ROUTE1499);

ROUTE& ROUTE1500 =  ROUTE();
ROUTE1500.setFromNode(CString("mainVPOrientationInterp"));
ROUTE1500.setFromField(CString("value_changed"));
ROUTE1500.setToNode(CString("mainVP"));
ROUTE1500.setToField(CString("set_orientation"));
Scene8.addChild(&ROUTE1500);

ROUTE& ROUTE1501 =  ROUTE();
ROUTE1501.setFromNode(CString("Time_9"));
ROUTE1501.setFromField(CString("startTime_changed"));
ROUTE1501.setToNode(CString("_70"));
ROUTE1501.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1501);

ROUTE& ROUTE1502 =  ROUTE();
ROUTE1502.setFromNode(CString("_12"));
ROUTE1502.setFromField(CString("isActive"));
ROUTE1502.setToNode(CString("_71"));
ROUTE1502.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1502);

ROUTE& ROUTE1503 =  ROUTE();
ROUTE1503.setFromNode(CString("_15"));
ROUTE1503.setFromField(CString("isActive"));
ROUTE1503.setToNode(CString("Time_10"));
ROUTE1503.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1503);

ROUTE& ROUTE1504 =  ROUTE();
ROUTE1504.setFromNode(CString("_15"));
ROUTE1504.setFromField(CString("enterTime"));
ROUTE1504.setToNode(CString("Time_10"));
ROUTE1504.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1504);

ROUTE& ROUTE1505 =  ROUTE();
ROUTE1505.setFromNode(CString("Time_10"));
ROUTE1505.setFromField(CString("fraction_changed"));
ROUTE1505.setToNode(CString("shadowScaleFactorInterp_1"));
ROUTE1505.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1505);

ROUTE& ROUTE1506 =  ROUTE();
ROUTE1506.setFromNode(CString("Time_10"));
ROUTE1506.setFromField(CString("fraction_changed"));
ROUTE1506.setToNode(CString("shadowTranslationInterp_1"));
ROUTE1506.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1506);

ROUTE& ROUTE1507 =  ROUTE();
ROUTE1507.setFromNode(CString("Time_10"));
ROUTE1507.setFromField(CString("fraction_changed"));
ROUTE1507.setToNode(CString("shadowRotationInterp_1"));
ROUTE1507.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1507);

ROUTE& ROUTE1508 =  ROUTE();
ROUTE1508.setFromNode(CString("_15"));
ROUTE1508.setFromField(CString("exitTime"));
ROUTE1508.setToNode(CString("Time_11"));
ROUTE1508.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1508);

ROUTE& ROUTE1509 =  ROUTE();
ROUTE1509.setFromNode(CString("Time_11"));
ROUTE1509.setFromField(CString("fraction_changed"));
ROUTE1509.setToNode(CString("shadowTranslationInterp_2"));
ROUTE1509.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1509);

ROUTE& ROUTE1510 =  ROUTE();
ROUTE1510.setFromNode(CString("Time_11"));
ROUTE1510.setFromField(CString("fraction_changed"));
ROUTE1510.setToNode(CString("shadowRotationInterp_2"));
ROUTE1510.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1510);

ROUTE& ROUTE1511 =  ROUTE();
ROUTE1511.setFromNode(CString("Time_11"));
ROUTE1511.setFromField(CString("fraction_changed"));
ROUTE1511.setToNode(CString("shadowScaleFactorInterp_2"));
ROUTE1511.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1511);

ROUTE& ROUTE1512 =  ROUTE();
ROUTE1512.setFromNode(CString("iTime_1"));
ROUTE1512.setFromField(CString("fraction_changed"));
ROUTE1512.setToNode(CString("shadowScaleFactorInterp_3"));
ROUTE1512.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1512);

ROUTE& ROUTE1513 =  ROUTE();
ROUTE1513.setFromNode(CString("iTime_1"));
ROUTE1513.setFromField(CString("fraction_changed"));
ROUTE1513.setToNode(CString("shadowTranslationInterp_3"));
ROUTE1513.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1513);

ROUTE& ROUTE1514 =  ROUTE();
ROUTE1514.setFromNode(CString("oTime_1"));
ROUTE1514.setFromField(CString("fraction_changed"));
ROUTE1514.setToNode(CString("shadowTranslationInterp_4"));
ROUTE1514.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1514);

ROUTE& ROUTE1515 =  ROUTE();
ROUTE1515.setFromNode(CString("oTime_1"));
ROUTE1515.setFromField(CString("fraction_changed"));
ROUTE1515.setToNode(CString("shadowScaleFactorInterp_4"));
ROUTE1515.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1515);

ROUTE& ROUTE1516 =  ROUTE();
ROUTE1516.setFromNode(CString("shadowTranslationInterp_1"));
ROUTE1516.setFromField(CString("value_changed"));
ROUTE1516.setToNode(CString("shadow"));
ROUTE1516.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1516);

ROUTE& ROUTE1517 =  ROUTE();
ROUTE1517.setFromNode(CString("shadowTranslationInterp_2"));
ROUTE1517.setFromField(CString("value_changed"));
ROUTE1517.setToNode(CString("shadow"));
ROUTE1517.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1517);

ROUTE& ROUTE1518 =  ROUTE();
ROUTE1518.setFromNode(CString("shadowTranslationInterp_3"));
ROUTE1518.setFromField(CString("value_changed"));
ROUTE1518.setToNode(CString("shadow"));
ROUTE1518.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1518);

ROUTE& ROUTE1519 =  ROUTE();
ROUTE1519.setFromNode(CString("shadowTranslationInterp_4"));
ROUTE1519.setFromField(CString("value_changed"));
ROUTE1519.setToNode(CString("shadow"));
ROUTE1519.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1519);

ROUTE& ROUTE1520 =  ROUTE();
ROUTE1520.setFromNode(CString("shadowRotationInterp_1"));
ROUTE1520.setFromField(CString("value_changed"));
ROUTE1520.setToNode(CString("shadow"));
ROUTE1520.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1520);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromNode(CString("shadowRotationInterp_2"));
ROUTE1521.setFromField(CString("value_changed"));
ROUTE1521.setToNode(CString("shadow"));
ROUTE1521.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromNode(CString("shadowScaleFactorInterp_1"));
ROUTE1522.setFromField(CString("value_changed"));
ROUTE1522.setToNode(CString("shadow"));
ROUTE1522.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1522);

ROUTE& ROUTE1523 =  ROUTE();
ROUTE1523.setFromNode(CString("shadowScaleFactorInterp_2"));
ROUTE1523.setFromField(CString("value_changed"));
ROUTE1523.setToNode(CString("shadow"));
ROUTE1523.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1523);

ROUTE& ROUTE1524 =  ROUTE();
ROUTE1524.setFromNode(CString("shadowScaleFactorInterp_3"));
ROUTE1524.setFromField(CString("value_changed"));
ROUTE1524.setToNode(CString("shadow"));
ROUTE1524.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1524);

ROUTE& ROUTE1525 =  ROUTE();
ROUTE1525.setFromNode(CString("shadowScaleFactorInterp_4"));
ROUTE1525.setFromField(CString("value_changed"));
ROUTE1525.setToNode(CString("shadow"));
ROUTE1525.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1525);

ROUTE& ROUTE1526 =  ROUTE();
ROUTE1526.setFromNode(CString("Time_10"));
ROUTE1526.setFromField(CString("fraction_changed"));
ROUTE1526.setToNode(CString("teeveeTranslationInterp_1"));
ROUTE1526.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1526);

ROUTE& ROUTE1527 =  ROUTE();
ROUTE1527.setFromNode(CString("Time_10"));
ROUTE1527.setFromField(CString("fraction_changed"));
ROUTE1527.setToNode(CString("teeveeRotationInterp_1"));
ROUTE1527.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1527);

ROUTE& ROUTE1528 =  ROUTE();
ROUTE1528.setFromNode(CString("Time_11"));
ROUTE1528.setFromField(CString("fraction_changed"));
ROUTE1528.setToNode(CString("teeveeTranslationInterp_2"));
ROUTE1528.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1528);

ROUTE& ROUTE1529 =  ROUTE();
ROUTE1529.setFromNode(CString("Time_11"));
ROUTE1529.setFromField(CString("fraction_changed"));
ROUTE1529.setToNode(CString("teeveeRotationInterp_2"));
ROUTE1529.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1529);

ROUTE& ROUTE1530 =  ROUTE();
ROUTE1530.setFromNode(CString("iTime_1"));
ROUTE1530.setFromField(CString("fraction_changed"));
ROUTE1530.setToNode(CString("teeveeScaleFactorInterp_1"));
ROUTE1530.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1530);

ROUTE& ROUTE1531 =  ROUTE();
ROUTE1531.setFromNode(CString("iTime_1"));
ROUTE1531.setFromField(CString("fraction_changed"));
ROUTE1531.setToNode(CString("teeveeTranslationInterp_3"));
ROUTE1531.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1531);

ROUTE& ROUTE1532 =  ROUTE();
ROUTE1532.setFromNode(CString("oTime_1"));
ROUTE1532.setFromField(CString("fraction_changed"));
ROUTE1532.setToNode(CString("teeveeTranslationInterp_4"));
ROUTE1532.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1532);

ROUTE& ROUTE1533 =  ROUTE();
ROUTE1533.setFromNode(CString("oTime_1"));
ROUTE1533.setFromField(CString("fraction_changed"));
ROUTE1533.setToNode(CString("teeveeScaleFactorInterp_2"));
ROUTE1533.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1533);

ROUTE& ROUTE1534 =  ROUTE();
ROUTE1534.setFromNode(CString("_86"));
ROUTE1534.setFromField(CString("value_changed"));
ROUTE1534.setToNode(CString("_72"));
ROUTE1534.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1534);

ROUTE& ROUTE1535 =  ROUTE();
ROUTE1535.setFromNode(CString("_72"));
ROUTE1535.setFromField(CString("isOver"));
ROUTE1535.setToNode(CString("_73"));
ROUTE1535.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1535);

ROUTE& ROUTE1536 =  ROUTE();
ROUTE1536.setFromNode(CString("_72"));
ROUTE1536.setFromField(CString("isOver"));
ROUTE1536.setToNode(CString("_74"));
ROUTE1536.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1536);

ROUTE& ROUTE1537 =  ROUTE();
ROUTE1537.setFromNode(CString("_84"));
ROUTE1537.setFromField(CString("isActive"));
ROUTE1537.setToNode(CString("Time_12"));
ROUTE1537.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1537);

ROUTE& ROUTE1538 =  ROUTE();
ROUTE1538.setFromNode(CString("_48"));
ROUTE1538.setFromField(CString("isActive"));
ROUTE1538.setToNode(CString("Time_12"));
ROUTE1538.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1538);

ROUTE& ROUTE1539 =  ROUTE();
ROUTE1539.setFromNode(CString("_84"));
ROUTE1539.setFromField(CString("enterTime"));
ROUTE1539.setToNode(CString("Time_12"));
ROUTE1539.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1539);

ROUTE& ROUTE1540 =  ROUTE();
ROUTE1540.setFromNode(CString("_48"));
ROUTE1540.setFromField(CString("enterTime"));
ROUTE1540.setToNode(CString("Time_12"));
ROUTE1540.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1540);

ROUTE& ROUTE1541 =  ROUTE();
ROUTE1541.setFromNode(CString("Time_12"));
ROUTE1541.setFromField(CString("fraction_changed"));
ROUTE1541.setToNode(CString("screenRotationInterp"));
ROUTE1541.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1541);

ROUTE& ROUTE1542 =  ROUTE();
ROUTE1542.setFromNode(CString("Time_12"));
ROUTE1542.setFromField(CString("fraction_changed"));
ROUTE1542.setToNode(CString("_75"));
ROUTE1542.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1542);

ROUTE& ROUTE1543 =  ROUTE();
ROUTE1543.setFromNode(CString("Time_12"));
ROUTE1543.setFromField(CString("fraction_changed"));
ROUTE1543.setToNode(CString("_76"));
ROUTE1543.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1543);

ROUTE& ROUTE1544 =  ROUTE();
ROUTE1544.setFromNode(CString("_75"));
ROUTE1544.setFromField(CString("value_changed"));
ROUTE1544.setToNode(CString("_77"));
ROUTE1544.setToField(CString("xIn"));
Scene8.addChild(&ROUTE1544);

ROUTE& ROUTE1545 =  ROUTE();
ROUTE1545.setFromNode(CString("_76"));
ROUTE1545.setFromField(CString("value_changed"));
ROUTE1545.setToNode(CString("_77"));
ROUTE1545.setToField(CString("yIn"));
Scene8.addChild(&ROUTE1545);

ROUTE& ROUTE1546 =  ROUTE();
ROUTE1546.setFromNode(CString("_78"));
ROUTE1546.setFromField(CString("value_changed"));
ROUTE1546.setToNode(CString("_80"));
ROUTE1546.setToField(CString("xIn"));
Scene8.addChild(&ROUTE1546);

ROUTE& ROUTE1547 =  ROUTE();
ROUTE1547.setFromNode(CString("_79"));
ROUTE1547.setFromField(CString("value_changed"));
ROUTE1547.setToNode(CString("_80"));
ROUTE1547.setToField(CString("yIn"));
Scene8.addChild(&ROUTE1547);

ROUTE& ROUTE1548 =  ROUTE();
ROUTE1548.setFromNode(CString("_77"));
ROUTE1548.setFromField(CString("vec"));
ROUTE1548.setToNode(CString("_81"));
ROUTE1548.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1548);

ROUTE& ROUTE1549 =  ROUTE();
ROUTE1549.setFromNode(CString("_85"));
ROUTE1549.setFromField(CString("state_changed"));
ROUTE1549.setToNode(CString("_83"));
ROUTE1549.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1549);

ROUTE& ROUTE1550 =  ROUTE();
ROUTE1550.setFromNode(CString("_83"));
ROUTE1550.setFromField(CString("wichChoice_changed"));
ROUTE1550.setToNode(CString("_82"));
ROUTE1550.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1550);

ROUTE& ROUTE1551 =  ROUTE();
ROUTE1551.setFromNode(CString("screenRotationInterp"));
ROUTE1551.setFromField(CString("value_changed"));
ROUTE1551.setToNode(CString("tv-apparat"));
ROUTE1551.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1551);

ROUTE& ROUTE1552 =  ROUTE();
ROUTE1552.setFromNode(CString("_74"));
ROUTE1552.setFromField(CString("startTime"));
ROUTE1552.setToNode(CString("_85"));
ROUTE1552.setToField(CString("forward"));
Scene8.addChild(&ROUTE1552);

ROUTE& ROUTE1553 =  ROUTE();
ROUTE1553.setFromNode(CString("_73"));
ROUTE1553.setFromField(CString("startTime"));
ROUTE1553.setToNode(CString("_85"));
ROUTE1553.setToField(CString("back"));
Scene8.addChild(&ROUTE1553);

ROUTE& ROUTE1554 =  ROUTE();
ROUTE1554.setFromNode(CString("iTime_1"));
ROUTE1554.setFromField(CString("isActive"));
ROUTE1554.setToNode(CString("_85"));
ROUTE1554.setToField(CString("set_isActive"));
Scene8.addChild(&ROUTE1554);

ROUTE& ROUTE1555 =  ROUTE();
ROUTE1555.setFromNode(CString("oTime_1"));
ROUTE1555.setFromField(CString("isActive"));
ROUTE1555.setToNode(CString("_85"));
ROUTE1555.setToField(CString("set_isActive"));
Scene8.addChild(&ROUTE1555);

ROUTE& ROUTE1556 =  ROUTE();
ROUTE1556.setFromNode(CString("Time_10"));
ROUTE1556.setFromField(CString("isActive"));
ROUTE1556.setToNode(CString("_86"));
ROUTE1556.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1556);

ROUTE& ROUTE1557 =  ROUTE();
ROUTE1557.setFromNode(CString("Time_11"));
ROUTE1557.setFromField(CString("isActive"));
ROUTE1557.setToNode(CString("_86"));
ROUTE1557.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1557);

ROUTE& ROUTE1558 =  ROUTE();
ROUTE1558.setFromNode(CString("teeveeTranslationInterp_1"));
ROUTE1558.setFromField(CString("value_changed"));
ROUTE1558.setToNode(CString("teeveeAnim"));
ROUTE1558.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1558);

ROUTE& ROUTE1559 =  ROUTE();
ROUTE1559.setFromNode(CString("teeveeTranslationInterp_2"));
ROUTE1559.setFromField(CString("value_changed"));
ROUTE1559.setToNode(CString("teeveeAnim"));
ROUTE1559.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1559);

ROUTE& ROUTE1560 =  ROUTE();
ROUTE1560.setFromNode(CString("teeveeTranslationInterp_3"));
ROUTE1560.setFromField(CString("value_changed"));
ROUTE1560.setToNode(CString("teeveeAnim"));
ROUTE1560.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1560);

ROUTE& ROUTE1561 =  ROUTE();
ROUTE1561.setFromNode(CString("teeveeTranslationInterp_4"));
ROUTE1561.setFromField(CString("value_changed"));
ROUTE1561.setToNode(CString("teeveeAnim"));
ROUTE1561.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1561);

ROUTE& ROUTE1562 =  ROUTE();
ROUTE1562.setFromNode(CString("teeveeRotationInterp_1"));
ROUTE1562.setFromField(CString("value_changed"));
ROUTE1562.setToNode(CString("teeveeAnim"));
ROUTE1562.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1562);

ROUTE& ROUTE1563 =  ROUTE();
ROUTE1563.setFromNode(CString("teeveeRotationInterp_2"));
ROUTE1563.setFromField(CString("value_changed"));
ROUTE1563.setToNode(CString("teeveeAnim"));
ROUTE1563.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1563);

ROUTE& ROUTE1564 =  ROUTE();
ROUTE1564.setFromNode(CString("teeveeScaleFactorInterp_1"));
ROUTE1564.setFromField(CString("value_changed"));
ROUTE1564.setToNode(CString("teeveeAnim"));
ROUTE1564.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1564);

ROUTE& ROUTE1565 =  ROUTE();
ROUTE1565.setFromNode(CString("teeveeScaleFactorInterp_2"));
ROUTE1565.setFromField(CString("value_changed"));
ROUTE1565.setToNode(CString("teeveeAnim"));
ROUTE1565.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1565);

ROUTE& ROUTE1566 =  ROUTE();
ROUTE1566.setFromNode(CString("_20"));
ROUTE1566.setFromField(CString("enterTime"));
ROUTE1566.setToNode(CString("Time_13"));
ROUTE1566.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1566);

ROUTE& ROUTE1567 =  ROUTE();
ROUTE1567.setFromNode(CString("Time_13"));
ROUTE1567.setFromField(CString("fraction_changed"));
ROUTE1567.setToNode(CString("tourTranslationInterp_1"));
ROUTE1567.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1567);

ROUTE& ROUTE1568 =  ROUTE();
ROUTE1568.setFromNode(CString("_20"));
ROUTE1568.setFromField(CString("exitTime"));
ROUTE1568.setToNode(CString("Time_14"));
ROUTE1568.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1568);

ROUTE& ROUTE1569 =  ROUTE();
ROUTE1569.setFromNode(CString("Time_14"));
ROUTE1569.setFromField(CString("fraction_changed"));
ROUTE1569.setToNode(CString("tourTranslationInterp_2"));
ROUTE1569.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1569);

ROUTE& ROUTE1570 =  ROUTE();
ROUTE1570.setFromNode(CString("_20"));
ROUTE1570.setFromField(CString("isActive"));
ROUTE1570.setToNode(CString("Time_15"));
ROUTE1570.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1570);

ROUTE& ROUTE1571 =  ROUTE();
ROUTE1571.setFromNode(CString("_20"));
ROUTE1571.setFromField(CString("enterTime"));
ROUTE1571.setToNode(CString("Time_15"));
ROUTE1571.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1571);

ROUTE& ROUTE1572 =  ROUTE();
ROUTE1572.setFromNode(CString("Time_15"));
ROUTE1572.setFromField(CString("fraction_changed"));
ROUTE1572.setToNode(CString("Light2LocationInterp"));
ROUTE1572.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1572);

ROUTE& ROUTE1573 =  ROUTE();
ROUTE1573.setFromNode(CString("_20"));
ROUTE1573.setFromField(CString("isActive"));
ROUTE1573.setToNode(CString("Light2"));
ROUTE1573.setToField(CString("set_on"));
Scene8.addChild(&ROUTE1573);

ROUTE& ROUTE1574 =  ROUTE();
ROUTE1574.setFromNode(CString("Light2LocationInterp"));
ROUTE1574.setFromField(CString("value_changed"));
ROUTE1574.setToNode(CString("Light2"));
ROUTE1574.setToField(CString("set_location"));
Scene8.addChild(&ROUTE1574);

ROUTE& ROUTE1575 =  ROUTE();
ROUTE1575.setFromNode(CString("tourTranslationInterp_1"));
ROUTE1575.setFromField(CString("value_changed"));
ROUTE1575.setToNode(CString("tour_3"));
ROUTE1575.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1575);

ROUTE& ROUTE1576 =  ROUTE();
ROUTE1576.setFromNode(CString("tourTranslationInterp_2"));
ROUTE1576.setFromField(CString("value_changed"));
ROUTE1576.setToNode(CString("tour_3"));
ROUTE1576.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1576);

ROUTE& ROUTE1577 =  ROUTE();
ROUTE1577.setFromNode(CString("_24"));
ROUTE1577.setFromField(CString("enterTime"));
ROUTE1577.setToNode(CString("Time_16"));
ROUTE1577.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1577);

ROUTE& ROUTE1578 =  ROUTE();
ROUTE1578.setFromNode(CString("Time_16"));
ROUTE1578.setFromField(CString("fraction_changed"));
ROUTE1578.setToNode(CString("pressTranslationInterp_1"));
ROUTE1578.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1578);

ROUTE& ROUTE1579 =  ROUTE();
ROUTE1579.setFromNode(CString("Time_16"));
ROUTE1579.setFromField(CString("fraction_changed"));
ROUTE1579.setToNode(CString("pressRotationInterp_1"));
ROUTE1579.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1579);

ROUTE& ROUTE1580 =  ROUTE();
ROUTE1580.setFromNode(CString("Time_16"));
ROUTE1580.setFromField(CString("fraction_changed"));
ROUTE1580.setToNode(CString("pressScaleFactorInterp_1"));
ROUTE1580.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1580);

ROUTE& ROUTE1581 =  ROUTE();
ROUTE1581.setFromNode(CString("_24"));
ROUTE1581.setFromField(CString("exitTime"));
ROUTE1581.setToNode(CString("Time_17"));
ROUTE1581.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1581);

ROUTE& ROUTE1582 =  ROUTE();
ROUTE1582.setFromNode(CString("Time_17"));
ROUTE1582.setFromField(CString("fraction_changed"));
ROUTE1582.setToNode(CString("pressTranslationInterp_2"));
ROUTE1582.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1582);

ROUTE& ROUTE1583 =  ROUTE();
ROUTE1583.setFromNode(CString("Time_17"));
ROUTE1583.setFromField(CString("fraction_changed"));
ROUTE1583.setToNode(CString("pressRotationInterp_2"));
ROUTE1583.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1583);

ROUTE& ROUTE1584 =  ROUTE();
ROUTE1584.setFromNode(CString("Time_17"));
ROUTE1584.setFromField(CString("fraction_changed"));
ROUTE1584.setToNode(CString("pressScaleFactorInterp_2"));
ROUTE1584.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1584);

ROUTE& ROUTE1585 =  ROUTE();
ROUTE1585.setFromNode(CString("ts"));
ROUTE1585.setFromField(CString("touchTime"));
ROUTE1585.setToNode(CString("_88"));
ROUTE1585.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1585);

ROUTE& ROUTE1586 =  ROUTE();
ROUTE1586.setFromNode(CString("pressTranslationInterp_1"));
ROUTE1586.setFromField(CString("value_changed"));
ROUTE1586.setToNode(CString("press_1"));
ROUTE1586.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1586);

ROUTE& ROUTE1587 =  ROUTE();
ROUTE1587.setFromNode(CString("pressTranslationInterp_2"));
ROUTE1587.setFromField(CString("value_changed"));
ROUTE1587.setToNode(CString("press_1"));
ROUTE1587.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1587);

ROUTE& ROUTE1588 =  ROUTE();
ROUTE1588.setFromNode(CString("pressRotationInterp_1"));
ROUTE1588.setFromField(CString("value_changed"));
ROUTE1588.setToNode(CString("press_1"));
ROUTE1588.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1588);

ROUTE& ROUTE1589 =  ROUTE();
ROUTE1589.setFromNode(CString("pressRotationInterp_2"));
ROUTE1589.setFromField(CString("value_changed"));
ROUTE1589.setToNode(CString("press_1"));
ROUTE1589.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1589);

ROUTE& ROUTE1590 =  ROUTE();
ROUTE1590.setFromNode(CString("pressScaleFactorInterp_1"));
ROUTE1590.setFromField(CString("value_changed"));
ROUTE1590.setToNode(CString("press_1"));
ROUTE1590.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1590);

ROUTE& ROUTE1591 =  ROUTE();
ROUTE1591.setFromNode(CString("pressScaleFactorInterp_2"));
ROUTE1591.setFromField(CString("value_changed"));
ROUTE1591.setToNode(CString("press_1"));
ROUTE1591.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1591);

ROUTE& ROUTE1592 =  ROUTE();
ROUTE1592.setFromNode(CString("_40"));
ROUTE1592.setFromField(CString("touchTime"));
ROUTE1592.setToNode(CString("_89"));
ROUTE1592.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1592);

ROUTE& ROUTE1593 =  ROUTE();
ROUTE1593.setFromNode(CString("_68"));
ROUTE1593.setFromField(CString("exitTime"));
ROUTE1593.setToNode(CString("_89"));
ROUTE1593.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1593);

ROUTE& ROUTE1594 =  ROUTE();
ROUTE1594.setFromNode(CString("_93"));
ROUTE1594.setFromField(CString("enterTime"));
ROUTE1594.setToNode(CString("s1t"));
ROUTE1594.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1594);

ROUTE& ROUTE1595 =  ROUTE();
ROUTE1595.setFromNode(CString("s1t"));
ROUTE1595.setFromField(CString("fraction_changed"));
ROUTE1595.setToNode(CString("worldTranslationInterp_1"));
ROUTE1595.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1595);

ROUTE& ROUTE1596 =  ROUTE();
ROUTE1596.setFromNode(CString("_90"));
ROUTE1596.setFromField(CString("value_changed"));
ROUTE1596.setToNode(CString("worldTranslationInterp_1"));
ROUTE1596.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1596);

ROUTE& ROUTE1597 =  ROUTE();
ROUTE1597.setFromNode(CString("_49"));
ROUTE1597.setFromField(CString("value_changed"));
ROUTE1597.setToNode(CString("worldTranslationInterp_1"));
ROUTE1597.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1597);

ROUTE& ROUTE1598 =  ROUTE();
ROUTE1598.setFromNode(CString("s1t"));
ROUTE1598.setFromField(CString("fraction_changed"));
ROUTE1598.setToNode(CString("tvcloneTranslationInterp_1"));
ROUTE1598.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1598);

ROUTE& ROUTE1599 =  ROUTE();
ROUTE1599.setFromNode(CString("_90"));
ROUTE1599.setFromField(CString("value_changed"));
ROUTE1599.setToNode(CString("tvcloneTranslationInterp_1"));
ROUTE1599.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1599);

ROUTE& ROUTE1600 =  ROUTE();
ROUTE1600.setFromNode(CString("_49"));
ROUTE1600.setFromField(CString("value_changed"));
ROUTE1600.setToNode(CString("tvcloneTranslationInterp_1"));
ROUTE1600.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1600);

ROUTE& ROUTE1601 =  ROUTE();
ROUTE1601.setFromNode(CString("s1t"));
ROUTE1601.setFromField(CString("fraction_changed"));
ROUTE1601.setToNode(CString("tvcloneRotationInterp_1"));
ROUTE1601.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1601);

ROUTE& ROUTE1602 =  ROUTE();
ROUTE1602.setFromNode(CString("_90"));
ROUTE1602.setFromField(CString("value_changed"));
ROUTE1602.setToNode(CString("tvcloneRotationInterp_1"));
ROUTE1602.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1602);

ROUTE& ROUTE1603 =  ROUTE();
ROUTE1603.setFromNode(CString("_49"));
ROUTE1603.setFromField(CString("value_changed"));
ROUTE1603.setToNode(CString("tvcloneRotationInterp_1"));
ROUTE1603.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1603);

ROUTE& ROUTE1604 =  ROUTE();
ROUTE1604.setFromNode(CString("_94"));
ROUTE1604.setFromField(CString("enterTime"));
ROUTE1604.setToNode(CString("s2t"));
ROUTE1604.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1604);

ROUTE& ROUTE1605 =  ROUTE();
ROUTE1605.setFromNode(CString("s2t"));
ROUTE1605.setFromField(CString("fraction_changed"));
ROUTE1605.setToNode(CString("worldTranslationInterp_2"));
ROUTE1605.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1605);

ROUTE& ROUTE1606 =  ROUTE();
ROUTE1606.setFromNode(CString("_91"));
ROUTE1606.setFromField(CString("value_changed"));
ROUTE1606.setToNode(CString("worldTranslationInterp_2"));
ROUTE1606.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1606);

ROUTE& ROUTE1607 =  ROUTE();
ROUTE1607.setFromNode(CString("_49"));
ROUTE1607.setFromField(CString("value_changed"));
ROUTE1607.setToNode(CString("worldTranslationInterp_2"));
ROUTE1607.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1607);

ROUTE& ROUTE1608 =  ROUTE();
ROUTE1608.setFromNode(CString("s2t"));
ROUTE1608.setFromField(CString("fraction_changed"));
ROUTE1608.setToNode(CString("tvcloneTranslationInterp_2"));
ROUTE1608.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1608);

ROUTE& ROUTE1609 =  ROUTE();
ROUTE1609.setFromNode(CString("_91"));
ROUTE1609.setFromField(CString("value_changed"));
ROUTE1609.setToNode(CString("tvcloneTranslationInterp_2"));
ROUTE1609.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1609);

ROUTE& ROUTE1610 =  ROUTE();
ROUTE1610.setFromNode(CString("_49"));
ROUTE1610.setFromField(CString("value_changed"));
ROUTE1610.setToNode(CString("tvcloneTranslationInterp_2"));
ROUTE1610.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1610);

ROUTE& ROUTE1611 =  ROUTE();
ROUTE1611.setFromNode(CString("s2t"));
ROUTE1611.setFromField(CString("fraction_changed"));
ROUTE1611.setToNode(CString("tvcloneRotationInterp_2"));
ROUTE1611.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1611);

ROUTE& ROUTE1612 =  ROUTE();
ROUTE1612.setFromNode(CString("_91"));
ROUTE1612.setFromField(CString("value_changed"));
ROUTE1612.setToNode(CString("tvcloneRotationInterp_2"));
ROUTE1612.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1612);

ROUTE& ROUTE1613 =  ROUTE();
ROUTE1613.setFromNode(CString("_49"));
ROUTE1613.setFromField(CString("value_changed"));
ROUTE1613.setToNode(CString("tvcloneRotationInterp_2"));
ROUTE1613.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1613);

ROUTE& ROUTE1614 =  ROUTE();
ROUTE1614.setFromNode(CString("_95"));
ROUTE1614.setFromField(CString("enterTime"));
ROUTE1614.setToNode(CString("s3t"));
ROUTE1614.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1614);

ROUTE& ROUTE1615 =  ROUTE();
ROUTE1615.setFromNode(CString("s3t"));
ROUTE1615.setFromField(CString("fraction_changed"));
ROUTE1615.setToNode(CString("worldTranslationInterp_3"));
ROUTE1615.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1615);

ROUTE& ROUTE1616 =  ROUTE();
ROUTE1616.setFromNode(CString("_92"));
ROUTE1616.setFromField(CString("value_changed"));
ROUTE1616.setToNode(CString("worldTranslationInterp_3"));
ROUTE1616.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1616);

ROUTE& ROUTE1617 =  ROUTE();
ROUTE1617.setFromNode(CString("_49"));
ROUTE1617.setFromField(CString("value_changed"));
ROUTE1617.setToNode(CString("worldTranslationInterp_3"));
ROUTE1617.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1617);

ROUTE& ROUTE1618 =  ROUTE();
ROUTE1618.setFromNode(CString("s3t"));
ROUTE1618.setFromField(CString("fraction_changed"));
ROUTE1618.setToNode(CString("tvcloneTranslationInterp_3"));
ROUTE1618.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1618);

ROUTE& ROUTE1619 =  ROUTE();
ROUTE1619.setFromNode(CString("_92"));
ROUTE1619.setFromField(CString("value_changed"));
ROUTE1619.setToNode(CString("tvcloneTranslationInterp_3"));
ROUTE1619.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1619);

ROUTE& ROUTE1620 =  ROUTE();
ROUTE1620.setFromNode(CString("_49"));
ROUTE1620.setFromField(CString("value_changed"));
ROUTE1620.setToNode(CString("tvcloneTranslationInterp_3"));
ROUTE1620.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1620);

ROUTE& ROUTE1621 =  ROUTE();
ROUTE1621.setFromNode(CString("s3t"));
ROUTE1621.setFromField(CString("fraction_changed"));
ROUTE1621.setToNode(CString("tvcloneRotationInterp_3"));
ROUTE1621.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1621);

ROUTE& ROUTE1622 =  ROUTE();
ROUTE1622.setFromNode(CString("_92"));
ROUTE1622.setFromField(CString("value_changed"));
ROUTE1622.setToNode(CString("tvcloneRotationInterp_3"));
ROUTE1622.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1622);

ROUTE& ROUTE1623 =  ROUTE();
ROUTE1623.setFromNode(CString("_49"));
ROUTE1623.setFromField(CString("value_changed"));
ROUTE1623.setToNode(CString("tvcloneRotationInterp_3"));
ROUTE1623.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1623);

ROUTE& ROUTE1624 =  ROUTE();
ROUTE1624.setFromNode(CString("_93"));
ROUTE1624.setFromField(CString("exitTime"));
ROUTE1624.setToNode(CString("s1b"));
ROUTE1624.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1624);

ROUTE& ROUTE1625 =  ROUTE();
ROUTE1625.setFromNode(CString("s1b"));
ROUTE1625.setFromField(CString("fraction_changed"));
ROUTE1625.setToNode(CString("_90"));
ROUTE1625.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1625);

ROUTE& ROUTE1626 =  ROUTE();
ROUTE1626.setFromNode(CString("_94"));
ROUTE1626.setFromField(CString("exitTime"));
ROUTE1626.setToNode(CString("s2b"));
ROUTE1626.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1626);

ROUTE& ROUTE1627 =  ROUTE();
ROUTE1627.setFromNode(CString("s2b"));
ROUTE1627.setFromField(CString("fraction_changed"));
ROUTE1627.setToNode(CString("_91"));
ROUTE1627.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1627);

ROUTE& ROUTE1628 =  ROUTE();
ROUTE1628.setFromNode(CString("_95"));
ROUTE1628.setFromField(CString("exitTime"));
ROUTE1628.setToNode(CString("s3b"));
ROUTE1628.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1628);

ROUTE& ROUTE1629 =  ROUTE();
ROUTE1629.setFromNode(CString("s3b"));
ROUTE1629.setFromField(CString("fraction_changed"));
ROUTE1629.setToNode(CString("_92"));
ROUTE1629.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1629);

ROUTE& ROUTE1630 =  ROUTE();
ROUTE1630.setFromNode(CString("_50"));
ROUTE1630.setFromField(CString("value_changed"));
ROUTE1630.setToNode(CString("_93"));
ROUTE1630.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1630);

ROUTE& ROUTE1631 =  ROUTE();
ROUTE1631.setFromNode(CString("_93"));
ROUTE1631.setFromField(CString("isActive"));
ROUTE1631.setToNode(CString("_93"));
ROUTE1631.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1631);

ROUTE& ROUTE1632 =  ROUTE();
ROUTE1632.setFromNode(CString("screen1Touch"));
ROUTE1632.setFromField(CString("touchTime"));
ROUTE1632.setToNode(CString("_93"));
ROUTE1632.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1632);

ROUTE& ROUTE1633 =  ROUTE();
ROUTE1633.setFromNode(CString("s1b"));
ROUTE1633.setFromField(CString("isActive"));
ROUTE1633.setToNode(CString("_93"));
ROUTE1633.setToField(CString("anim"));
Scene8.addChild(&ROUTE1633);

ROUTE& ROUTE1634 =  ROUTE();
ROUTE1634.setFromNode(CString("s1t"));
ROUTE1634.setFromField(CString("isActive"));
ROUTE1634.setToNode(CString("_93"));
ROUTE1634.setToField(CString("anim"));
Scene8.addChild(&ROUTE1634);

ROUTE& ROUTE1635 =  ROUTE();
ROUTE1635.setFromNode(CString("_50"));
ROUTE1635.setFromField(CString("value_changed"));
ROUTE1635.setToNode(CString("_94"));
ROUTE1635.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1635);

ROUTE& ROUTE1636 =  ROUTE();
ROUTE1636.setFromNode(CString("_94"));
ROUTE1636.setFromField(CString("isActive"));
ROUTE1636.setToNode(CString("_94"));
ROUTE1636.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1636);

ROUTE& ROUTE1637 =  ROUTE();
ROUTE1637.setFromNode(CString("screen2Touch"));
ROUTE1637.setFromField(CString("touchTime"));
ROUTE1637.setToNode(CString("_94"));
ROUTE1637.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1637);

ROUTE& ROUTE1638 =  ROUTE();
ROUTE1638.setFromNode(CString("s2b"));
ROUTE1638.setFromField(CString("isActive"));
ROUTE1638.setToNode(CString("_94"));
ROUTE1638.setToField(CString("anim"));
Scene8.addChild(&ROUTE1638);

ROUTE& ROUTE1639 =  ROUTE();
ROUTE1639.setFromNode(CString("s2t"));
ROUTE1639.setFromField(CString("isActive"));
ROUTE1639.setToNode(CString("_94"));
ROUTE1639.setToField(CString("anim"));
Scene8.addChild(&ROUTE1639);

ROUTE& ROUTE1640 =  ROUTE();
ROUTE1640.setFromNode(CString("_50"));
ROUTE1640.setFromField(CString("value_changed"));
ROUTE1640.setToNode(CString("_95"));
ROUTE1640.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1640);

ROUTE& ROUTE1641 =  ROUTE();
ROUTE1641.setFromNode(CString("_95"));
ROUTE1641.setFromField(CString("isActive"));
ROUTE1641.setToNode(CString("_95"));
ROUTE1641.setToField(CString("set_offset"));
Scene8.addChild(&ROUTE1641);

ROUTE& ROUTE1642 =  ROUTE();
ROUTE1642.setFromNode(CString("screen3Touch"));
ROUTE1642.setFromField(CString("touchTime"));
ROUTE1642.setToNode(CString("_95"));
ROUTE1642.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1642);

ROUTE& ROUTE1643 =  ROUTE();
ROUTE1643.setFromNode(CString("s3b"));
ROUTE1643.setFromField(CString("isActive"));
ROUTE1643.setToNode(CString("_95"));
ROUTE1643.setToField(CString("anim"));
Scene8.addChild(&ROUTE1643);

ROUTE& ROUTE1644 =  ROUTE();
ROUTE1644.setFromNode(CString("s3t"));
ROUTE1644.setFromField(CString("isActive"));
ROUTE1644.setToNode(CString("_95"));
ROUTE1644.setToField(CString("anim"));
Scene8.addChild(&ROUTE1644);

ROUTE& ROUTE1645 =  ROUTE();
ROUTE1645.setFromNode(CString("_44"));
ROUTE1645.setFromField(CString("touchTime"));
ROUTE1645.setToNode(CString("Time_18"));
ROUTE1645.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1645);

ROUTE& ROUTE1646 =  ROUTE();
ROUTE1646.setFromNode(CString("Time_18"));
ROUTE1646.setFromField(CString("fraction_changed"));
ROUTE1646.setToNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE1646.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1646);

ROUTE& ROUTE1647 =  ROUTE();
ROUTE1647.setFromNode(CString("_54"));
ROUTE1647.setFromField(CString("value_changed"));
ROUTE1647.setToNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE1647.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1647);

ROUTE& ROUTE1648 =  ROUTE();
ROUTE1648.setFromNode(CString("Time_18"));
ROUTE1648.setFromField(CString("fraction_changed"));
ROUTE1648.setToNode(CString("UnnamedTransformTranslationInterp_2"));
ROUTE1648.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1648);

ROUTE& ROUTE1649 =  ROUTE();
ROUTE1649.setFromNode(CString("_54"));
ROUTE1649.setFromField(CString("value_changed"));
ROUTE1649.setToNode(CString("UnnamedTransformTranslationInterp_2"));
ROUTE1649.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1649);

ROUTE& ROUTE1650 =  ROUTE();
ROUTE1650.setFromNode(CString("Time_18"));
ROUTE1650.setFromField(CString("fraction_changed"));
ROUTE1650.setToNode(CString("UnnamedTransformTranslationInterp_3"));
ROUTE1650.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1650);

ROUTE& ROUTE1651 =  ROUTE();
ROUTE1651.setFromNode(CString("_54"));
ROUTE1651.setFromField(CString("value_changed"));
ROUTE1651.setToNode(CString("UnnamedTransformTranslationInterp_3"));
ROUTE1651.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1651);

ROUTE& ROUTE1652 =  ROUTE();
ROUTE1652.setFromNode(CString("Time_18"));
ROUTE1652.setFromField(CString("fraction_changed"));
ROUTE1652.setToNode(CString("tvTranslationInterp_1"));
ROUTE1652.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1652);

ROUTE& ROUTE1653 =  ROUTE();
ROUTE1653.setFromNode(CString("_54"));
ROUTE1653.setFromField(CString("value_changed"));
ROUTE1653.setToNode(CString("tvTranslationInterp_1"));
ROUTE1653.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1653);

ROUTE& ROUTE1654 =  ROUTE();
ROUTE1654.setFromNode(CString("Time_18"));
ROUTE1654.setFromField(CString("fraction_changed"));
ROUTE1654.setToNode(CString("tvTranslationInterp_2"));
ROUTE1654.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1654);

ROUTE& ROUTE1655 =  ROUTE();
ROUTE1655.setFromNode(CString("_54"));
ROUTE1655.setFromField(CString("value_changed"));
ROUTE1655.setToNode(CString("tvTranslationInterp_2"));
ROUTE1655.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1655);

ROUTE& ROUTE1656 =  ROUTE();
ROUTE1656.setFromNode(CString("Time_18"));
ROUTE1656.setFromField(CString("fraction_changed"));
ROUTE1656.setToNode(CString("tvTranslationInterp_3"));
ROUTE1656.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1656);

ROUTE& ROUTE1657 =  ROUTE();
ROUTE1657.setFromNode(CString("_54"));
ROUTE1657.setFromField(CString("value_changed"));
ROUTE1657.setToNode(CString("tvTranslationInterp_3"));
ROUTE1657.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1657);

ROUTE& ROUTE1658 =  ROUTE();
ROUTE1658.setFromNode(CString("Time_18"));
ROUTE1658.setFromField(CString("fraction_changed"));
ROUTE1658.setToNode(CString("s1ScaleFactorInterp"));
ROUTE1658.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1658);

ROUTE& ROUTE1659 =  ROUTE();
ROUTE1659.setFromNode(CString("Time_18"));
ROUTE1659.setFromField(CString("fraction_changed"));
ROUTE1659.setToNode(CString("s1CenterInterp"));
ROUTE1659.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1659);

ROUTE& ROUTE1660 =  ROUTE();
ROUTE1660.setFromNode(CString("_42"));
ROUTE1660.setFromField(CString("touchTime"));
ROUTE1660.setToNode(CString("Time_19"));
ROUTE1660.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1660);

ROUTE& ROUTE1661 =  ROUTE();
ROUTE1661.setFromNode(CString("Time_19"));
ROUTE1661.setFromField(CString("fraction_changed"));
ROUTE1661.setToNode(CString("s1TranslationInterp_1"));
ROUTE1661.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1661);

ROUTE& ROUTE1662 =  ROUTE();
ROUTE1662.setFromNode(CString("Time_19"));
ROUTE1662.setFromField(CString("fraction_changed"));
ROUTE1662.setToNode(CString("s2TranslationInterp_1"));
ROUTE1662.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1662);

ROUTE& ROUTE1663 =  ROUTE();
ROUTE1663.setFromNode(CString("Time_19"));
ROUTE1663.setFromField(CString("fraction_changed"));
ROUTE1663.setToNode(CString("s3TranslationInterp_1"));
ROUTE1663.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1663);

ROUTE& ROUTE1664 =  ROUTE();
ROUTE1664.setFromNode(CString("Time_19"));
ROUTE1664.setFromField(CString("fraction_changed"));
ROUTE1664.setToNode(CString("s1TranslationInterp_2"));
ROUTE1664.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1664);

ROUTE& ROUTE1665 =  ROUTE();
ROUTE1665.setFromNode(CString("Time_19"));
ROUTE1665.setFromField(CString("fraction_changed"));
ROUTE1665.setToNode(CString("s2TranslationInterp_2"));
ROUTE1665.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1665);

ROUTE& ROUTE1666 =  ROUTE();
ROUTE1666.setFromNode(CString("Time_19"));
ROUTE1666.setFromField(CString("fraction_changed"));
ROUTE1666.setToNode(CString("s3TranslationInterp_2"));
ROUTE1666.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1666);

ROUTE& ROUTE1667 =  ROUTE();
ROUTE1667.setFromNode(CString("_152"));
ROUTE1667.setFromField(CString("isActive"));
ROUTE1667.setToNode(CString("Time_20"));
ROUTE1667.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1667);

ROUTE& ROUTE1668 =  ROUTE();
ROUTE1668.setFromNode(CString("_154"));
ROUTE1668.setFromField(CString("isActive"));
ROUTE1668.setToNode(CString("Time_20"));
ROUTE1668.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1668);

ROUTE& ROUTE1669 =  ROUTE();
ROUTE1669.setFromNode(CString("_156"));
ROUTE1669.setFromField(CString("isActive"));
ROUTE1669.setToNode(CString("Time_20"));
ROUTE1669.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1669);

ROUTE& ROUTE1670 =  ROUTE();
ROUTE1670.setFromNode(CString("_158"));
ROUTE1670.setFromField(CString("isActive"));
ROUTE1670.setToNode(CString("Time_20"));
ROUTE1670.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1670);

ROUTE& ROUTE1671 =  ROUTE();
ROUTE1671.setFromNode(CString("_160"));
ROUTE1671.setFromField(CString("isActive"));
ROUTE1671.setToNode(CString("Time_20"));
ROUTE1671.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1671);

ROUTE& ROUTE1672 =  ROUTE();
ROUTE1672.setFromNode(CString("_163"));
ROUTE1672.setFromField(CString("isActive"));
ROUTE1672.setToNode(CString("Time_20"));
ROUTE1672.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1672);

ROUTE& ROUTE1673 =  ROUTE();
ROUTE1673.setFromNode(CString("_108"));
ROUTE1673.setFromField(CString("touchTime"));
ROUTE1673.setToNode(CString("Time_20"));
ROUTE1673.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1673);

ROUTE& ROUTE1674 =  ROUTE();
ROUTE1674.setFromNode(CString("_100"));
ROUTE1674.setFromField(CString("touchTime"));
ROUTE1674.setToNode(CString("Time_20"));
ROUTE1674.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1674);

ROUTE& ROUTE1675 =  ROUTE();
ROUTE1675.setFromNode(CString("_117"));
ROUTE1675.setFromField(CString("touchTime"));
ROUTE1675.setToNode(CString("Time_20"));
ROUTE1675.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1675);

ROUTE& ROUTE1676 =  ROUTE();
ROUTE1676.setFromNode(CString("_132"));
ROUTE1676.setFromField(CString("touchTime"));
ROUTE1676.setToNode(CString("Time_20"));
ROUTE1676.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1676);

ROUTE& ROUTE1677 =  ROUTE();
ROUTE1677.setFromNode(CString("_123"));
ROUTE1677.setFromField(CString("touchTime"));
ROUTE1677.setToNode(CString("Time_20"));
ROUTE1677.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1677);

ROUTE& ROUTE1678 =  ROUTE();
ROUTE1678.setFromNode(CString("_138"));
ROUTE1678.setFromField(CString("touchTime"));
ROUTE1678.setToNode(CString("Time_20"));
ROUTE1678.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1678);

ROUTE& ROUTE1679 =  ROUTE();
ROUTE1679.setFromNode(CString("Time_20"));
ROUTE1679.setFromField(CString("fraction_changed"));
ROUTE1679.setToNode(CString("UnnamedTransformTransparencyInterp"));
ROUTE1679.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1679);

ROUTE& ROUTE1680 =  ROUTE();
ROUTE1680.setFromNode(CString("UnnamedTransformTransparencyInterp"));
ROUTE1680.setFromField(CString("value_changed"));
ROUTE1680.setToNode(CString("_102"));
ROUTE1680.setToField(CString("set_transparency"));
Scene8.addChild(&ROUTE1680);

ROUTE& ROUTE1681 =  ROUTE();
ROUTE1681.setFromNode(CString("_100"));
ROUTE1681.setFromField(CString("touchTime"));
ROUTE1681.setToNode(CString("_104"));
ROUTE1681.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1681);

ROUTE& ROUTE1682 =  ROUTE();
ROUTE1682.setFromNode(CString("_152"));
ROUTE1682.setFromField(CString("exitTime"));
ROUTE1682.setToNode(CString("_104"));
ROUTE1682.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1682);

ROUTE& ROUTE1683 =  ROUTE();
ROUTE1683.setFromNode(CString("_104"));
ROUTE1683.setFromField(CString("whichChoice_changed"));
ROUTE1683.setToNode(CString("_99"));
ROUTE1683.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1683);

ROUTE& ROUTE1684 =  ROUTE();
ROUTE1684.setFromNode(CString("_111"));
ROUTE1684.setFromField(CString("whichChoice_changed"));
ROUTE1684.setToNode(CString("_97"));
ROUTE1684.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1684);

ROUTE& ROUTE1685 =  ROUTE();
ROUTE1685.setFromNode(CString("_108"));
ROUTE1685.setFromField(CString("touchTime"));
ROUTE1685.setToNode(CString("_110"));
ROUTE1685.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1685);

ROUTE& ROUTE1686 =  ROUTE();
ROUTE1686.setFromNode(CString("_158"));
ROUTE1686.setFromField(CString("exitTime"));
ROUTE1686.setToNode(CString("_110"));
ROUTE1686.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1686);

ROUTE& ROUTE1687 =  ROUTE();
ROUTE1687.setFromNode(CString("_110"));
ROUTE1687.setFromField(CString("whichChoice_changed"));
ROUTE1687.setToNode(CString("_107"));
ROUTE1687.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1687);

ROUTE& ROUTE1688 =  ROUTE();
ROUTE1688.setFromNode(CString("_111"));
ROUTE1688.setFromField(CString("whichChoice_changed"));
ROUTE1688.setToNode(CString("_105"));
ROUTE1688.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1688);

ROUTE& ROUTE1689 =  ROUTE();
ROUTE1689.setFromNode(CString("_51"));
ROUTE1689.setFromField(CString("whichChoice_changed"));
ROUTE1689.setToNode(CString("_96"));
ROUTE1689.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1689);

ROUTE& ROUTE1690 =  ROUTE();
ROUTE1690.setFromNode(CString("_146"));
ROUTE1690.setFromField(CString("value_changed"));
ROUTE1690.setToNode(CString("screen1Touch"));
ROUTE1690.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1690);

ROUTE& ROUTE1691 =  ROUTE();
ROUTE1691.setFromNode(CString("_50"));
ROUTE1691.setFromField(CString("value_changed"));
ROUTE1691.setToNode(CString("_112"));
ROUTE1691.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1691);

ROUTE& ROUTE1692 =  ROUTE();
ROUTE1692.setFromNode(CString("_93"));
ROUTE1692.setFromField(CString("state"));
ROUTE1692.setToNode(CString("_112"));
ROUTE1692.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1692);

ROUTE& ROUTE1693 =  ROUTE();
ROUTE1693.setFromNode(CString("_112"));
ROUTE1693.setFromField(CString("wichChoice_changed"));
ROUTE1693.setToNode(CString("_111"));
ROUTE1693.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1693);

ROUTE& ROUTE1694 =  ROUTE();
ROUTE1694.setFromNode(CString("screenRotationInterp"));
ROUTE1694.setFromField(CString("value_changed"));
ROUTE1694.setToNode(CString("dreh-tv_1"));
ROUTE1694.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1694);

ROUTE& ROUTE1695 =  ROUTE();
ROUTE1695.setFromNode(CString("tvcloneTranslationInterp_1"));
ROUTE1695.setFromField(CString("value_changed"));
ROUTE1695.setToNode(CString("tv-clone_1"));
ROUTE1695.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1695);

ROUTE& ROUTE1696 =  ROUTE();
ROUTE1696.setFromNode(CString("tvcloneRotationInterp_1"));
ROUTE1696.setFromField(CString("value_changed"));
ROUTE1696.setToNode(CString("tv-clone_1"));
ROUTE1696.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1696);

ROUTE& ROUTE1697 =  ROUTE();
ROUTE1697.setFromNode(CString("tvTranslationInterp_1"));
ROUTE1697.setFromField(CString("value_changed"));
ROUTE1697.setToNode(CString("s1_1"));
ROUTE1697.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1697);

ROUTE& ROUTE1698 =  ROUTE();
ROUTE1698.setFromNode(CString("s1TranslationInterp_2"));
ROUTE1698.setFromField(CString("value_changed"));
ROUTE1698.setToNode(CString("s1_1"));
ROUTE1698.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1698);

ROUTE& ROUTE1699 =  ROUTE();
ROUTE1699.setFromNode(CString("_117"));
ROUTE1699.setFromField(CString("touchTime"));
ROUTE1699.setToNode(CString("_119"));
ROUTE1699.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1699);

ROUTE& ROUTE1700 =  ROUTE();
ROUTE1700.setFromNode(CString("_154"));
ROUTE1700.setFromField(CString("exitTime"));
ROUTE1700.setToNode(CString("_119"));
ROUTE1700.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1700);

ROUTE& ROUTE1701 =  ROUTE();
ROUTE1701.setFromNode(CString("_119"));
ROUTE1701.setFromField(CString("whichChoice_changed"));
ROUTE1701.setToNode(CString("_116"));
ROUTE1701.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1701);

ROUTE& ROUTE1702 =  ROUTE();
ROUTE1702.setFromNode(CString("_126"));
ROUTE1702.setFromField(CString("whichChoice_changed"));
ROUTE1702.setToNode(CString("_114"));
ROUTE1702.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1702);

ROUTE& ROUTE1703 =  ROUTE();
ROUTE1703.setFromNode(CString("_123"));
ROUTE1703.setFromField(CString("touchTime"));
ROUTE1703.setToNode(CString("_125"));
ROUTE1703.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1703);

ROUTE& ROUTE1704 =  ROUTE();
ROUTE1704.setFromNode(CString("_160"));
ROUTE1704.setFromField(CString("exitTime"));
ROUTE1704.setToNode(CString("_125"));
ROUTE1704.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1704);

ROUTE& ROUTE1705 =  ROUTE();
ROUTE1705.setFromNode(CString("_125"));
ROUTE1705.setFromField(CString("whichChoice_changed"));
ROUTE1705.setToNode(CString("_122"));
ROUTE1705.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1705);

ROUTE& ROUTE1706 =  ROUTE();
ROUTE1706.setFromNode(CString("_126"));
ROUTE1706.setFromField(CString("whichChoice_changed"));
ROUTE1706.setToNode(CString("_120"));
ROUTE1706.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1706);

ROUTE& ROUTE1707 =  ROUTE();
ROUTE1707.setFromNode(CString("_51"));
ROUTE1707.setFromField(CString("whichChoice_changed"));
ROUTE1707.setToNode(CString("_113"));
ROUTE1707.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1707);

ROUTE& ROUTE1708 =  ROUTE();
ROUTE1708.setFromNode(CString("_146"));
ROUTE1708.setFromField(CString("value_changed"));
ROUTE1708.setToNode(CString("screen2Touch"));
ROUTE1708.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1708);

ROUTE& ROUTE1709 =  ROUTE();
ROUTE1709.setFromNode(CString("_50"));
ROUTE1709.setFromField(CString("value_changed"));
ROUTE1709.setToNode(CString("_127"));
ROUTE1709.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1709);

ROUTE& ROUTE1710 =  ROUTE();
ROUTE1710.setFromNode(CString("_94"));
ROUTE1710.setFromField(CString("state"));
ROUTE1710.setToNode(CString("_127"));
ROUTE1710.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1710);

ROUTE& ROUTE1711 =  ROUTE();
ROUTE1711.setFromNode(CString("_127"));
ROUTE1711.setFromField(CString("wichChoice_changed"));
ROUTE1711.setToNode(CString("_126"));
ROUTE1711.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1711);

ROUTE& ROUTE1712 =  ROUTE();
ROUTE1712.setFromNode(CString("screenRotationInterp"));
ROUTE1712.setFromField(CString("value_changed"));
ROUTE1712.setToNode(CString("dreh-tv_2"));
ROUTE1712.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1712);

ROUTE& ROUTE1713 =  ROUTE();
ROUTE1713.setFromNode(CString("tvcloneTranslationInterp_2"));
ROUTE1713.setFromField(CString("value_changed"));
ROUTE1713.setToNode(CString("tv-clone_2"));
ROUTE1713.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1713);

ROUTE& ROUTE1714 =  ROUTE();
ROUTE1714.setFromNode(CString("tvcloneRotationInterp_2"));
ROUTE1714.setFromField(CString("value_changed"));
ROUTE1714.setToNode(CString("tv-clone_2"));
ROUTE1714.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1714);

ROUTE& ROUTE1715 =  ROUTE();
ROUTE1715.setFromNode(CString("tvTranslationInterp_2"));
ROUTE1715.setFromField(CString("value_changed"));
ROUTE1715.setToNode(CString("s2_1"));
ROUTE1715.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1715);

ROUTE& ROUTE1716 =  ROUTE();
ROUTE1716.setFromNode(CString("s2TranslationInterp_2"));
ROUTE1716.setFromField(CString("value_changed"));
ROUTE1716.setToNode(CString("s2_1"));
ROUTE1716.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1716);

ROUTE& ROUTE1717 =  ROUTE();
ROUTE1717.setFromNode(CString("_132"));
ROUTE1717.setFromField(CString("touchTime"));
ROUTE1717.setToNode(CString("_134"));
ROUTE1717.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1717);

ROUTE& ROUTE1718 =  ROUTE();
ROUTE1718.setFromNode(CString("_156"));
ROUTE1718.setFromField(CString("exitTime"));
ROUTE1718.setToNode(CString("_134"));
ROUTE1718.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1718);

ROUTE& ROUTE1719 =  ROUTE();
ROUTE1719.setFromNode(CString("_134"));
ROUTE1719.setFromField(CString("whichChoice_changed"));
ROUTE1719.setToNode(CString("_131"));
ROUTE1719.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1719);

ROUTE& ROUTE1720 =  ROUTE();
ROUTE1720.setFromNode(CString("_141"));
ROUTE1720.setFromField(CString("whichChoice_changed"));
ROUTE1720.setToNode(CString("_129"));
ROUTE1720.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1720);

ROUTE& ROUTE1721 =  ROUTE();
ROUTE1721.setFromNode(CString("_138"));
ROUTE1721.setFromField(CString("touchTime"));
ROUTE1721.setToNode(CString("_140"));
ROUTE1721.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1721);

ROUTE& ROUTE1722 =  ROUTE();
ROUTE1722.setFromNode(CString("_163"));
ROUTE1722.setFromField(CString("exitTime"));
ROUTE1722.setToNode(CString("_140"));
ROUTE1722.setToField(CString("set_next"));
Scene8.addChild(&ROUTE1722);

ROUTE& ROUTE1723 =  ROUTE();
ROUTE1723.setFromNode(CString("_140"));
ROUTE1723.setFromField(CString("whichChoice_changed"));
ROUTE1723.setToNode(CString("_137"));
ROUTE1723.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1723);

ROUTE& ROUTE1724 =  ROUTE();
ROUTE1724.setFromNode(CString("_141"));
ROUTE1724.setFromField(CString("whichChoice_changed"));
ROUTE1724.setToNode(CString("_135"));
ROUTE1724.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1724);

ROUTE& ROUTE1725 =  ROUTE();
ROUTE1725.setFromNode(CString("_51"));
ROUTE1725.setFromField(CString("whichChoice_changed"));
ROUTE1725.setToNode(CString("_128"));
ROUTE1725.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1725);

ROUTE& ROUTE1726 =  ROUTE();
ROUTE1726.setFromNode(CString("_146"));
ROUTE1726.setFromField(CString("value_changed"));
ROUTE1726.setToNode(CString("screen3Touch"));
ROUTE1726.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1726);

ROUTE& ROUTE1727 =  ROUTE();
ROUTE1727.setFromNode(CString("_50"));
ROUTE1727.setFromField(CString("value_changed"));
ROUTE1727.setToNode(CString("_142"));
ROUTE1727.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1727);

ROUTE& ROUTE1728 =  ROUTE();
ROUTE1728.setFromNode(CString("_95"));
ROUTE1728.setFromField(CString("state"));
ROUTE1728.setToNode(CString("_142"));
ROUTE1728.setToField(CString("isActive"));
Scene8.addChild(&ROUTE1728);

ROUTE& ROUTE1729 =  ROUTE();
ROUTE1729.setFromNode(CString("_142"));
ROUTE1729.setFromField(CString("wichChoice_changed"));
ROUTE1729.setToNode(CString("_141"));
ROUTE1729.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1729);

ROUTE& ROUTE1730 =  ROUTE();
ROUTE1730.setFromNode(CString("screenRotationInterp"));
ROUTE1730.setFromField(CString("value_changed"));
ROUTE1730.setToNode(CString("dreh-tv_3"));
ROUTE1730.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1730);

ROUTE& ROUTE1731 =  ROUTE();
ROUTE1731.setFromNode(CString("tvcloneTranslationInterp_3"));
ROUTE1731.setFromField(CString("value_changed"));
ROUTE1731.setToNode(CString("tv-clone_3"));
ROUTE1731.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1731);

ROUTE& ROUTE1732 =  ROUTE();
ROUTE1732.setFromNode(CString("tvcloneRotationInterp_3"));
ROUTE1732.setFromField(CString("value_changed"));
ROUTE1732.setToNode(CString("tv-clone_3"));
ROUTE1732.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1732);

ROUTE& ROUTE1733 =  ROUTE();
ROUTE1733.setFromNode(CString("tvTranslationInterp_3"));
ROUTE1733.setFromField(CString("value_changed"));
ROUTE1733.setToNode(CString("s3_1"));
ROUTE1733.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1733);

ROUTE& ROUTE1734 =  ROUTE();
ROUTE1734.setFromNode(CString("s3TranslationInterp_2"));
ROUTE1734.setFromField(CString("value_changed"));
ROUTE1734.setToNode(CString("s3_1"));
ROUTE1734.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1734);

ROUTE& ROUTE1735 =  ROUTE();
ROUTE1735.setFromNode(CString("_51"));
ROUTE1735.setFromField(CString("whichChoice_changed"));
ROUTE1735.setToNode(CString("_143"));
ROUTE1735.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1735);

ROUTE& ROUTE1736 =  ROUTE();
ROUTE1736.setFromNode(CString("dreh-tv_6"));
ROUTE1736.setFromField(CString("rotation_changed"));
ROUTE1736.setToNode(CString("dreh-tv_4"));
ROUTE1736.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1736);

ROUTE& ROUTE1737 =  ROUTE();
ROUTE1737.setFromNode(CString("tvcloneTranslationInterp_1"));
ROUTE1737.setFromField(CString("value_changed"));
ROUTE1737.setToNode(CString("tvclone_1"));
ROUTE1737.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1737);

ROUTE& ROUTE1738 =  ROUTE();
ROUTE1738.setFromNode(CString("tvcloneRotationInterp_1"));
ROUTE1738.setFromField(CString("value_changed"));
ROUTE1738.setToNode(CString("tvclone_1"));
ROUTE1738.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1738);

ROUTE& ROUTE1739 =  ROUTE();
ROUTE1739.setFromNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE1739.setFromField(CString("value_changed"));
ROUTE1739.setToNode(CString("s1_2"));
ROUTE1739.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1739);

ROUTE& ROUTE1740 =  ROUTE();
ROUTE1740.setFromNode(CString("s1TranslationInterp_1"));
ROUTE1740.setFromField(CString("value_changed"));
ROUTE1740.setToNode(CString("s1_2"));
ROUTE1740.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1740);

ROUTE& ROUTE1741 =  ROUTE();
ROUTE1741.setFromNode(CString("s1ScaleFactorInterp"));
ROUTE1741.setFromField(CString("value_changed"));
ROUTE1741.setToNode(CString("s1_2"));
ROUTE1741.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE1741);

ROUTE& ROUTE1742 =  ROUTE();
ROUTE1742.setFromNode(CString("s1CenterInterp"));
ROUTE1742.setFromField(CString("value_changed"));
ROUTE1742.setToNode(CString("s1_2"));
ROUTE1742.setToField(CString("set_center"));
Scene8.addChild(&ROUTE1742);

ROUTE& ROUTE1743 =  ROUTE();
ROUTE1743.setFromNode(CString("_51"));
ROUTE1743.setFromField(CString("whichChoice_changed"));
ROUTE1743.setToNode(CString("_144"));
ROUTE1743.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1743);

ROUTE& ROUTE1744 =  ROUTE();
ROUTE1744.setFromNode(CString("dreh-tv_6"));
ROUTE1744.setFromField(CString("rotation_changed"));
ROUTE1744.setToNode(CString("dreh-tv_5"));
ROUTE1744.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1744);

ROUTE& ROUTE1745 =  ROUTE();
ROUTE1745.setFromNode(CString("tvcloneTranslationInterp_2"));
ROUTE1745.setFromField(CString("value_changed"));
ROUTE1745.setToNode(CString("tvclone_2"));
ROUTE1745.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1745);

ROUTE& ROUTE1746 =  ROUTE();
ROUTE1746.setFromNode(CString("tvcloneRotationInterp_2"));
ROUTE1746.setFromField(CString("value_changed"));
ROUTE1746.setToNode(CString("tvclone_2"));
ROUTE1746.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1746);

ROUTE& ROUTE1747 =  ROUTE();
ROUTE1747.setFromNode(CString("UnnamedTransformTranslationInterp_2"));
ROUTE1747.setFromField(CString("value_changed"));
ROUTE1747.setToNode(CString("s2_2"));
ROUTE1747.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1747);

ROUTE& ROUTE1748 =  ROUTE();
ROUTE1748.setFromNode(CString("s2TranslationInterp_1"));
ROUTE1748.setFromField(CString("value_changed"));
ROUTE1748.setToNode(CString("s2_2"));
ROUTE1748.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1748);

ROUTE& ROUTE1749 =  ROUTE();
ROUTE1749.setFromNode(CString("_51"));
ROUTE1749.setFromField(CString("whichChoice_changed"));
ROUTE1749.setToNode(CString("_145"));
ROUTE1749.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1749);

ROUTE& ROUTE1750 =  ROUTE();
ROUTE1750.setFromNode(CString("tv-apparat"));
ROUTE1750.setFromField(CString("rotation_changed"));
ROUTE1750.setToNode(CString("dreh-tv_6"));
ROUTE1750.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1750);

ROUTE& ROUTE1751 =  ROUTE();
ROUTE1751.setFromNode(CString("tvcloneTranslationInterp_3"));
ROUTE1751.setFromField(CString("value_changed"));
ROUTE1751.setToNode(CString("tvclone_3"));
ROUTE1751.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1751);

ROUTE& ROUTE1752 =  ROUTE();
ROUTE1752.setFromNode(CString("tvcloneRotationInterp_3"));
ROUTE1752.setFromField(CString("value_changed"));
ROUTE1752.setToNode(CString("tvclone_3"));
ROUTE1752.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1752);

ROUTE& ROUTE1753 =  ROUTE();
ROUTE1753.setFromNode(CString("UnnamedTransformTranslationInterp_3"));
ROUTE1753.setFromField(CString("value_changed"));
ROUTE1753.setToNode(CString("s3_2"));
ROUTE1753.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1753);

ROUTE& ROUTE1754 =  ROUTE();
ROUTE1754.setFromNode(CString("s3TranslationInterp_1"));
ROUTE1754.setFromField(CString("value_changed"));
ROUTE1754.setToNode(CString("s3_2"));
ROUTE1754.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1754);

ROUTE& ROUTE1755 =  ROUTE();
ROUTE1755.setFromNode(CString("Time_21"));
ROUTE1755.setFromField(CString("isActive"));
ROUTE1755.setToNode(CString("_146"));
ROUTE1755.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1755);

ROUTE& ROUTE1756 =  ROUTE();
ROUTE1756.setFromNode(CString("s1b"));
ROUTE1756.setFromField(CString("isActive"));
ROUTE1756.setToNode(CString("_146"));
ROUTE1756.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1756);

ROUTE& ROUTE1757 =  ROUTE();
ROUTE1757.setFromNode(CString("s2b"));
ROUTE1757.setFromField(CString("isActive"));
ROUTE1757.setToNode(CString("_146"));
ROUTE1757.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1757);

ROUTE& ROUTE1758 =  ROUTE();
ROUTE1758.setFromNode(CString("s3b"));
ROUTE1758.setFromField(CString("isActive"));
ROUTE1758.setToNode(CString("_146"));
ROUTE1758.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1758);

ROUTE& ROUTE1759 =  ROUTE();
ROUTE1759.setFromNode(CString("Time_18"));
ROUTE1759.setFromField(CString("isActive"));
ROUTE1759.setToNode(CString("_146"));
ROUTE1759.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1759);

ROUTE& ROUTE1760 =  ROUTE();
ROUTE1760.setFromNode(CString("s3t"));
ROUTE1760.setFromField(CString("isActive"));
ROUTE1760.setToNode(CString("_146"));
ROUTE1760.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1760);

ROUTE& ROUTE1761 =  ROUTE();
ROUTE1761.setFromNode(CString("s2t"));
ROUTE1761.setFromField(CString("isActive"));
ROUTE1761.setToNode(CString("_146"));
ROUTE1761.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1761);

ROUTE& ROUTE1762 =  ROUTE();
ROUTE1762.setFromNode(CString("s1t"));
ROUTE1762.setFromField(CString("isActive"));
ROUTE1762.setToNode(CString("_146"));
ROUTE1762.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1762);

ROUTE& ROUTE1763 =  ROUTE();
ROUTE1763.setFromNode(CString("Time_19"));
ROUTE1763.setFromField(CString("isActive"));
ROUTE1763.setToNode(CString("_146"));
ROUTE1763.setToField(CString("set_SFBool"));
Scene8.addChild(&ROUTE1763);

ROUTE& ROUTE1764 =  ROUTE();
ROUTE1764.setFromNode(CString("worldTranslationInterp_1"));
ROUTE1764.setFromField(CString("value_changed"));
ROUTE1764.setToNode(CString("world_1"));
ROUTE1764.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1764);

ROUTE& ROUTE1765 =  ROUTE();
ROUTE1765.setFromNode(CString("worldTranslationInterp_2"));
ROUTE1765.setFromField(CString("value_changed"));
ROUTE1765.setToNode(CString("world_1"));
ROUTE1765.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1765);

ROUTE& ROUTE1766 =  ROUTE();
ROUTE1766.setFromNode(CString("worldTranslationInterp_3"));
ROUTE1766.setFromField(CString("value_changed"));
ROUTE1766.setToNode(CString("world_1"));
ROUTE1766.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1766);

ROUTE& ROUTE1767 =  ROUTE();
ROUTE1767.setFromNode(CString("_48"));
ROUTE1767.setFromField(CString("isActive"));
ROUTE1767.setToNode(CString("Time_21"));
ROUTE1767.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE1767);

ROUTE& ROUTE1768 =  ROUTE();
ROUTE1768.setFromNode(CString("_59"));
ROUTE1768.setFromField(CString("startTime"));
ROUTE1768.setToNode(CString("Time_21"));
ROUTE1768.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE1768);

ROUTE& ROUTE1769 =  ROUTE();
ROUTE1769.setFromNode(CString("Time_21"));
ROUTE1769.setFromField(CString("fraction_changed"));
ROUTE1769.setToNode(CString("tourVPPositionInterp"));
ROUTE1769.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1769);

ROUTE& ROUTE1770 =  ROUTE();
ROUTE1770.setFromNode(CString("Time_21"));
ROUTE1770.setFromField(CString("fraction_changed"));
ROUTE1770.setToNode(CString("tourVPOrientationInterp"));
ROUTE1770.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE1770);

ROUTE& ROUTE1771 =  ROUTE();
ROUTE1771.setFromNode(CString("_48"));
ROUTE1771.setFromField(CString("isActive"));
ROUTE1771.setToNode(CString("tourVP"));
ROUTE1771.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE1771);

ROUTE& ROUTE1772 =  ROUTE();
ROUTE1772.setFromNode(CString("tourVPPositionInterp"));
ROUTE1772.setFromField(CString("value_changed"));
ROUTE1772.setToNode(CString("tourVP"));
ROUTE1772.setToField(CString("set_position"));
Scene8.addChild(&ROUTE1772);

ROUTE& ROUTE1773 =  ROUTE();
ROUTE1773.setFromNode(CString("tourVPOrientationInterp"));
ROUTE1773.setFromField(CString("value_changed"));
ROUTE1773.setToNode(CString("tourVP"));
ROUTE1773.setToField(CString("set_orientation"));
Scene8.addChild(&ROUTE1773);

ROUTE& ROUTE1774 =  ROUTE();
ROUTE1774.setFromNode(CString("_59"));
ROUTE1774.setFromField(CString("startTime"));
ROUTE1774.setToNode(CString("_147"));
ROUTE1774.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1774);

ROUTE& ROUTE1775 =  ROUTE();
ROUTE1775.setFromNode(CString("_69"));
ROUTE1775.setFromField(CString("value_changed"));
ROUTE1775.setToNode(CString("_66"));
ROUTE1775.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1775);

ROUTE& ROUTE1776 =  ROUTE();
ROUTE1776.setFromNode(CString("_89"));
ROUTE1776.setFromField(CString("value_changed"));
ROUTE1776.setToNode(CString("_66"));
ROUTE1776.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1776);

ROUTE& ROUTE1777 =  ROUTE();
ROUTE1777.setFromNode(CString("_147"));
ROUTE1777.setFromField(CString("value_changed"));
ROUTE1777.setToNode(CString("_66"));
ROUTE1777.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1777);

ROUTE& ROUTE1778 =  ROUTE();
ROUTE1778.setFromNode(CString("enterWorldScript"));
ROUTE1778.setFromField(CString("startTime"));
ROUTE1778.setToNode(CString("_148"));
ROUTE1778.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1778);

ROUTE& ROUTE1779 =  ROUTE();
ROUTE1779.setFromNode(CString("_151"));
ROUTE1779.setFromField(CString("touchTime"));
ROUTE1779.setToNode(CString("_148"));
ROUTE1779.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1779);

ROUTE& ROUTE1780 =  ROUTE();
ROUTE1780.setFromNode(CString("_152"));
ROUTE1780.setFromField(CString("children_changed"));
ROUTE1780.setToNode(CString("world_2"));
ROUTE1780.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1780);

ROUTE& ROUTE1781 =  ROUTE();
ROUTE1781.setFromNode(CString("_103"));
ROUTE1781.setFromField(CString("touchTime"));
ROUTE1781.setToNode(CString("_149"));
ROUTE1781.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1781);

ROUTE& ROUTE1782 =  ROUTE();
ROUTE1782.setFromNode(CString("_150"));
ROUTE1782.setFromField(CString("position_changed"));
ROUTE1782.setToNode(CString("HUDObj_2"));
ROUTE1782.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1782);

ROUTE& ROUTE1783 =  ROUTE();
ROUTE1783.setFromNode(CString("_150"));
ROUTE1783.setFromField(CString("orientation_changed"));
ROUTE1783.setToNode(CString("HUDObj_2"));
ROUTE1783.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1783);

ROUTE& ROUTE1784 =  ROUTE();
ROUTE1784.setFromNode(CString("_100"));
ROUTE1784.setFromField(CString("touchTime"));
ROUTE1784.setToNode(CString("_152"));
ROUTE1784.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1784);

ROUTE& ROUTE1785 =  ROUTE();
ROUTE1785.setFromNode(CString("_118"));
ROUTE1785.setFromField(CString("touchTime"));
ROUTE1785.setToNode(CString("_153"));
ROUTE1785.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1785);

ROUTE& ROUTE1786 =  ROUTE();
ROUTE1786.setFromNode(CString("_154"));
ROUTE1786.setFromField(CString("children_changed"));
ROUTE1786.setToNode(CString("world_3"));
ROUTE1786.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1786);

ROUTE& ROUTE1787 =  ROUTE();
ROUTE1787.setFromNode(CString("_117"));
ROUTE1787.setFromField(CString("touchTime"));
ROUTE1787.setToNode(CString("_154"));
ROUTE1787.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1787);

ROUTE& ROUTE1788 =  ROUTE();
ROUTE1788.setFromNode(CString("_133"));
ROUTE1788.setFromField(CString("touchTime"));
ROUTE1788.setToNode(CString("_155"));
ROUTE1788.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1788);

ROUTE& ROUTE1789 =  ROUTE();
ROUTE1789.setFromNode(CString("_156"));
ROUTE1789.setFromField(CString("children_changed"));
ROUTE1789.setToNode(CString("world_4"));
ROUTE1789.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1789);

ROUTE& ROUTE1790 =  ROUTE();
ROUTE1790.setFromNode(CString("_132"));
ROUTE1790.setFromField(CString("touchTime"));
ROUTE1790.setToNode(CString("_156"));
ROUTE1790.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1790);

ROUTE& ROUTE1791 =  ROUTE();
ROUTE1791.setFromNode(CString("_158"));
ROUTE1791.setFromField(CString("children_changed"));
ROUTE1791.setToNode(CString("world_5"));
ROUTE1791.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1791);

ROUTE& ROUTE1792 =  ROUTE();
ROUTE1792.setFromNode(CString("_109"));
ROUTE1792.setFromField(CString("touchTime"));
ROUTE1792.setToNode(CString("_157"));
ROUTE1792.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1792);

ROUTE& ROUTE1793 =  ROUTE();
ROUTE1793.setFromNode(CString("_108"));
ROUTE1793.setFromField(CString("touchTime"));
ROUTE1793.setToNode(CString("_158"));
ROUTE1793.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1793);

ROUTE& ROUTE1794 =  ROUTE();
ROUTE1794.setFromNode(CString("_124"));
ROUTE1794.setFromField(CString("touchTime"));
ROUTE1794.setToNode(CString("_159"));
ROUTE1794.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1794);

ROUTE& ROUTE1795 =  ROUTE();
ROUTE1795.setFromNode(CString("_160"));
ROUTE1795.setFromField(CString("children_changed"));
ROUTE1795.setToNode(CString("world_6"));
ROUTE1795.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1795);

ROUTE& ROUTE1796 =  ROUTE();
ROUTE1796.setFromNode(CString("_123"));
ROUTE1796.setFromField(CString("touchTime"));
ROUTE1796.setToNode(CString("_160"));
ROUTE1796.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1796);

ROUTE& ROUTE1797 =  ROUTE();
ROUTE1797.setFromNode(CString("_150"));
ROUTE1797.setFromField(CString("position_changed"));
ROUTE1797.setToNode(CString("_161"));
ROUTE1797.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE1797);

ROUTE& ROUTE1798 =  ROUTE();
ROUTE1798.setFromNode(CString("_150"));
ROUTE1798.setFromField(CString("orientation_changed"));
ROUTE1798.setToNode(CString("_161"));
ROUTE1798.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE1798);

ROUTE& ROUTE1799 =  ROUTE();
ROUTE1799.setFromNode(CString("_139"));
ROUTE1799.setFromField(CString("touchTime"));
ROUTE1799.setToNode(CString("_162"));
ROUTE1799.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1799);

ROUTE& ROUTE1800 =  ROUTE();
ROUTE1800.setFromNode(CString("_163"));
ROUTE1800.setFromField(CString("children_changed"));
ROUTE1800.setToNode(CString("world_7"));
ROUTE1800.setToField(CString("set_children"));
Scene8.addChild(&ROUTE1800);

ROUTE& ROUTE1801 =  ROUTE();
ROUTE1801.setFromNode(CString("_138"));
ROUTE1801.setFromField(CString("touchTime"));
ROUTE1801.setToNode(CString("_163"));
ROUTE1801.setToField(CString("startTime"));
Scene8.addChild(&ROUTE1801);

ROUTE& ROUTE1802 =  ROUTE();
ROUTE1802.setFromNode(CString("_148"));
ROUTE1802.setFromField(CString("value_changed"));
ROUTE1802.setToNode(CString("_1"));
ROUTE1802.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1802);

ROUTE& ROUTE1803 =  ROUTE();
ROUTE1803.setFromNode(CString("_149"));
ROUTE1803.setFromField(CString("value_changed"));
ROUTE1803.setToNode(CString("_1"));
ROUTE1803.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1803);

ROUTE& ROUTE1804 =  ROUTE();
ROUTE1804.setFromNode(CString("_153"));
ROUTE1804.setFromField(CString("value_changed"));
ROUTE1804.setToNode(CString("_1"));
ROUTE1804.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1804);

ROUTE& ROUTE1805 =  ROUTE();
ROUTE1805.setFromNode(CString("_155"));
ROUTE1805.setFromField(CString("value_changed"));
ROUTE1805.setToNode(CString("_1"));
ROUTE1805.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1805);

ROUTE& ROUTE1806 =  ROUTE();
ROUTE1806.setFromNode(CString("_157"));
ROUTE1806.setFromField(CString("value_changed"));
ROUTE1806.setToNode(CString("_1"));
ROUTE1806.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1806);

ROUTE& ROUTE1807 =  ROUTE();
ROUTE1807.setFromNode(CString("_159"));
ROUTE1807.setFromField(CString("value_changed"));
ROUTE1807.setToNode(CString("_1"));
ROUTE1807.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1807);

ROUTE& ROUTE1808 =  ROUTE();
ROUTE1808.setFromNode(CString("_162"));
ROUTE1808.setFromField(CString("value_changed"));
ROUTE1808.setToNode(CString("_1"));
ROUTE1808.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE1808);

X3D0.setScene(&Scene8);

}
