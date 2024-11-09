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
meta3.setContent(CString("Wed, 22 Apr 2015 09:14:06 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Mon, 28 Sep 2015 05:19:18 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Pong"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("X"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setName(CString("T"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
ProtoInterface10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("S"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("R"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFRotation"));
ProtoInterface10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("C"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFColor"));
field14.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field14);

field& field15 =  field();
field15.setName(CString("E"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFColor"));
field15.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field15);

field& field16 =  field();
field16.setName(CString("P"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFColor"));
field16.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field16);

field& field17 =  field();
field17.setName(CString("Z"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFFloat"));
ProtoInterface10.addChild(&field17);

field& field18 =  field();
field18.setName(CString("img"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFString"));
ProtoInterface10.addChild(&field18);

field& field19 =  field();
field19.setName(CString("G"));
field19.setAccessType(CString("initializeOnly"));
field19.setType(CString("SFNode"));
IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setDEF(CString("_1"));
IndexedFaceSet20.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
Coordinate& Coordinate21 =  Coordinate();
Coordinate21.setPoint(new float[]{-1.0,-1.0,0.0,-1.0,1.0,0.0,1.0,1.0,0.0,1.0,-1.0,0.0}, 12);
IndexedFaceSet20.setCoord(&Coordinate21);

field19.addChild(IndexedFaceSet20);

ProtoInterface10.addChild(&field19);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody22 =  ProtoBody();
Transform& Transform23 =  Transform();
IS& IS24 =  IS();
Connect& connect25 =  Connect();
connect25.setNodeField(CString("translation"));
connect25.setProtoField(CString("T"));
IS24.addChild(&connect25);

Connect& connect26 =  Connect();
connect26.setNodeField(CString("rotation"));
connect26.setProtoField(CString("R"));
IS24.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("scale"));
connect27.setProtoField(CString("S"));
IS24.addChild(&connect27);

Transform23.addChild(&IS24);

Shape& Shape28 =  Shape();
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("geometry"));
connect30.setProtoField(CString("G"));
IS29.addChild(&connect30);

Shape28.addChild(&IS29);

Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setShininess(0.5);
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("diffuseColor"));
connect34.setProtoField(CString("C"));
IS33.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("specularColor"));
connect35.setProtoField(CString("P"));
IS33.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("emissiveColor"));
connect36.setProtoField(CString("E"));
IS33.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("transparency"));
connect37.setProtoField(CString("Z"));
IS33.addChild(&connect37);

Material32.addChild(&IS33);

Appearance31.addChild(&Material32);

ImageTexture& ImageTexture38 =  ImageTexture();
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("url"));
connect40.setProtoField(CString("img"));
IS39.addChild(&connect40);

ImageTexture38.addChild(&IS39);

Appearance31.addChild(&ImageTexture38);

Shape28.addChild(&Appearance31);

Transform23.addChild(&Shape28);

ProtoBody22.addChild(&Transform23);

ProtoDeclare9.addChild(&ProtoBody22);

Scene8.addChild(&ProtoDeclare9);

ProtoDeclare& ProtoDeclare41 =  ProtoDeclare();
ProtoDeclare41.setName(CString("Y"));
ProtoInterface& ProtoInterface42 =  ProtoInterface();
field& field43 =  field();
field43.setName(CString("T"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFVec3f"));
ProtoInterface42.addChild(&field43);

field& field44 =  field();
field44.setName(CString("R"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFRotation"));
ProtoInterface42.addChild(&field44);

field& field45 =  field();
field45.setName(CString("S"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFNode"));
ProtoInterface42.addChild(&field45);

field& field46 =  field();
field46.setName(CString("H"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("MFNode"));
ProtoInterface42.addChild(&field46);

ProtoDeclare41.addChild(&ProtoInterface42);

ProtoBody& ProtoBody47 =  ProtoBody();
Transform& Transform48 =  Transform();
Transform48.setDEF(CString("Transform"));
Transform& Transform49 =  Transform();
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(CString("translation"));
connect51.setProtoField(CString("T"));
IS50.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("rotation"));
connect52.setProtoField(CString("R"));
IS50.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("children"));
connect53.setProtoField(CString("H"));
IS50.addChild(&connect53);

Transform49.addChild(&IS50);

Transform48.addChild(&Transform49);

ProtoBody47.addChild(&Transform48);

Script& Script54 =  Script();
field& field55 =  field();
field55.setName(CString("S"));
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFNode"));
Script54.addChild(&field55);

field& field56 =  field();
field56.setName(CString("t"));
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("SFNode"));
Transform& Transform57 =  Transform();
Transform57.setUSE(CString("Transform"));
field56.addChild(&Transform57);

Script54.addChild(&field56);

IS& IS58 =  IS();
Connect& connect59 =  Connect();
connect59.setNodeField(CString("S"));
connect59.setProtoField(CString("S"));
IS58.addChild(&connect59);

Script54.addChild(&IS58);


//Script54.setSourceCode(CString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	t .addChildren = new MFNode (S);")+
//_T("}"));
ProtoBody47.addChild(&Script54);

ProtoDeclare41.addChild(&ProtoBody47);

Scene8.addChild(&ProtoDeclare41);

WorldInfo& WorldInfo60 =  WorldInfo();
WorldInfo60.setInfo(new CString[]{CString("Cosmo Worlds Clipart (c)1997 pioneer@sgi.com")}, 1);
Scene8.addChild(&WorldInfo60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("Y"));
ProtoInstance61.setDEF(CString("HUD"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("H"));
ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(CString("Y"));
ProtoInstance63.setDEF(CString("_2"));
fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("T"));
fieldValue64.setValue(CString("0 0 -10"));
ProtoInstance63.addChild(&fieldValue64);

fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("H"));
ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("Y"));
ProtoInstance66.setDEF(CString("Player0"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("T"));
fieldValue67.setValue(CString("0 0.617632 0"));
ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("S"));
PlaneSensor& PlaneSensor69 =  PlaneSensor();
PlaneSensor69.setDEF(CString("Drag0"));
PlaneSensor69.setOffset(new float[]{0.0,0.617632,0.0});
PlaneSensor69.setMinPosition(new float[]{0.0,-4.0});
PlaneSensor69.setMaxPosition(new float[]{0.0,4.0});
fieldValue68.addChild(&PlaneSensor69);

ProtoInstance66.addChild(&fieldValue68);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("H"));
ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(CString("X"));
ProtoInstance71.setDEF(CString("_3"));
fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("T"));
fieldValue72.setValue(CString("-5 0 0"));
ProtoInstance71.addChild(&fieldValue72);

fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(CString("S"));
fieldValue73.setValue(CString("0.1 1 1"));
ProtoInstance71.addChild(&fieldValue73);

fieldValue70.addChild(&ProtoInstance71);

ProtoInstance66.addChild(&fieldValue70);

fieldValue65.addChild(&ProtoInstance66);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("Y"));
ProtoInstance74.setDEF(CString("Player1"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("T"));
fieldValue75.setValue(CString("0 0.858697 0"));
ProtoInstance74.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("H"));
ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(CString("X"));
ProtoInstance77.setDEF(CString("_4"));
fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("T"));
fieldValue78.setValue(CString("5 0 0"));
ProtoInstance77.addChild(&fieldValue78);

fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(CString("S"));
fieldValue79.setValue(CString("0.1 1 1"));
ProtoInstance77.addChild(&fieldValue79);

fieldValue76.addChild(&ProtoInstance77);

ProtoInstance74.addChild(&fieldValue76);

fieldValue65.addChild(&ProtoInstance74);

Switch& Switch80 =  Switch();
Switch80.setDEF(CString("PuckSwitch"));
Switch80.setWhichChoice(0);
ProtoInstance& ProtoInstance81 =  ProtoInstance();
ProtoInstance81.setName(CString("X"));
ProtoInstance81.setDEF(CString("Puck"));
fieldValue& fieldValue82 =  fieldValue();
fieldValue82.setName(CString("T"));
fieldValue82.setValue(CString("1.04829 1.7715 0"));
ProtoInstance81.addChild(&fieldValue82);

fieldValue& fieldValue83 =  fieldValue();
fieldValue83.setName(CString("S"));
fieldValue83.setValue(CString("0.2 0.2 1"));
ProtoInstance81.addChild(&fieldValue83);

Switch80.addChild(&ProtoInstance81);

ProtoInstance& ProtoInstance84 =  ProtoInstance();
ProtoInstance84.setName(CString("Y"));
Switch80.addChild(&ProtoInstance84);

fieldValue65.addChild(Switch80);

Switch& Switch85 =  Switch();
Switch85.setDEF(CString("ScoreSwitch"));
Switch85.setWhichChoice(1);
ProtoInstance& ProtoInstance86 =  ProtoInstance();
ProtoInstance86.setName(CString("Y"));
Switch85.addChild(&ProtoInstance86);

ProtoInstance& ProtoInstance87 =  ProtoInstance();
ProtoInstance87.setName(CString("Y"));
fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(CString("H"));
Transform& Transform89 =  Transform();
Transform89.setDEF(CString("_5"));
Transform89.setTranslation(new float[]{-3.5,3.0,-0.2});
Transform89.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape90 =  Shape();
Appearance& Appearance91 =  Appearance();
PixelTexture& PixelTexture92 =  PixelTexture();
PixelTexture92.setDEF(CString("Score0"));
PixelTexture92.setImage(CString("3 5 2 65535 65535 65535 65535 0 65535 65535 0 65535 65535 0 65535 65535 65535 65535"));
PixelTexture92.setRepeatS(false);
PixelTexture92.setRepeatT(false);
Appearance91.addChild(&PixelTexture92);

Shape90.addChild(&Appearance91);

IndexedFaceSet& IndexedFaceSet93 =  IndexedFaceSet();
IndexedFaceSet93.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setPoint(new float[]{-1.0,-1.0,0.0,-1.0,1.0,0.0,1.0,1.0,0.0,1.0,-1.0,0.0}, 12);
IndexedFaceSet93.setCoord(&Coordinate94);

Shape90.setGeometry(&IndexedFaceSet93);

Transform89.addChild(&Shape90);

fieldValue88.addChild(&Transform89);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("_6"));
Transform95.setTranslation(new float[]{3.5,3.0,-0.2});
Transform95.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
PixelTexture& PixelTexture98 =  PixelTexture();
PixelTexture98.setDEF(CString("Score1"));
PixelTexture98.setImage(CString("3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 0 65535"));
PixelTexture98.setRepeatS(false);
PixelTexture98.setRepeatT(false);
Appearance97.addChild(&PixelTexture98);

Shape96.addChild(&Appearance97);

IndexedFaceSet& IndexedFaceSet99 =  IndexedFaceSet();
IndexedFaceSet99.setCoordIndex(new int32_t[]{3,2,1,0,-1}, 5);
Coordinate& Coordinate100 =  Coordinate();
Coordinate100.setPoint(new float[]{-1.0,-1.0,0.0,-1.0,1.0,0.0,1.0,1.0,0.0,1.0,-1.0,0.0}, 12);
IndexedFaceSet99.setCoord(&Coordinate100);

Shape96.setGeometry(&IndexedFaceSet99);

Transform95.addChild(&Shape96);

fieldValue88.addChild(&Transform95);

ProtoInstance87.addChild(&fieldValue88);

Switch85.addChild(&ProtoInstance87);

fieldValue65.addChild(Switch85);

ProtoInstance63.addChild(&fieldValue65);

fieldValue62.addChild(&ProtoInstance63);

ProtoInstance61.addChild(&fieldValue62);

Scene8.addChild(&ProtoInstance61);

NavigationInfo& NavigationInfo101 =  NavigationInfo();
NavigationInfo101.setDEF(CString("Nav0"));
NavigationInfo101.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo101.setSpeed(5);
NavigationInfo101.setHeadlight(false);
Scene8.addChild(&NavigationInfo101);

DirectionalLight& DirectionalLight102 =  DirectionalLight();
DirectionalLight102.setDEF(CString("Light0"));
DirectionalLight102.setDirection(new float[]{0.0,-1.0,0.0});
Scene8.addChild(&DirectionalLight102);

ProtoInstance& ProtoInstance103 =  ProtoInstance();
ProtoInstance103.setName(CString("Y"));
ProtoInstance103.setDEF(CString("BG0X"));
fieldValue& fieldValue104 =  fieldValue();
fieldValue104.setName(CString("R"));
fieldValue104.setValue(CString("1 0 0 0.347657"));
ProtoInstance103.addChild(&fieldValue104);

fieldValue& fieldValue105 =  fieldValue();
fieldValue105.setName(CString("H"));
Background& Background106 =  Background();
Background106.setDEF(CString("BG0"));
Background106.setSkyAngle(new float[]{1.7}, 1);
Background106.setSkyColor(new float[]{1.0,1.0,0.0,0.0,0.0,1.0}, 6);
fieldValue105.addChild(&Background106);

ProtoInstance103.addChild(&fieldValue105);

Scene8.addChild(&ProtoInstance103);

TimeSensor& TimeSensor107 =  TimeSensor();
TimeSensor107.setDEF(CString("BGTime"));
TimeSensor107.setCycleInterval(300);
TimeSensor107.setLoop(true);
TimeSensor107.setStartTime(1);
Scene8.addChild(&TimeSensor107);

OrientationInterpolator& OrientationInterpolator108 =  OrientationInterpolator();
OrientationInterpolator108.setDEF(CString("BGSpin"));
OrientationInterpolator108.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator108.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28002}, 12);
Scene8.addChild(&OrientationInterpolator108);

Viewpoint& Viewpoint109 =  Viewpoint();
Viewpoint109.setDEF(CString("ViewX"));
Viewpoint109.setDescription(CString("vong"));
Viewpoint109.setPosition(new float[]{0.0,0.0,0.0});
Scene8.addChild(&Viewpoint109);

ProximitySensor& ProximitySensor110 =  ProximitySensor();
ProximitySensor110.setDEF(CString("Proximity0"));
ProximitySensor110.setSize(new float[]{200.0,200.0,200.0});
Scene8.addChild(&ProximitySensor110);

TimeSensor& TimeSensor111 =  TimeSensor();
TimeSensor111.setDEF(CString("TimeX"));
TimeSensor111.setCycleInterval(1.1);
TimeSensor111.setLoop(true);
TimeSensor111.setStartTime(1443414448.83668);
TimeSensor111.setStopTime(1443414447.83668);
Scene8.addChild(&TimeSensor111);

PositionInterpolator& PositionInterpolator112 =  PositionInterpolator();
PositionInterpolator112.setDEF(CString("MovePlayer1"));
PositionInterpolator112.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator112.setKeyValue(new float[]{0.0,1.0,0.0,0.0,-1.0,0.0}, 6);
Scene8.addChild(&PositionInterpolator112);

PositionInterpolator& PositionInterpolator113 =  PositionInterpolator();
PositionInterpolator113.setDEF(CString("MovePuck"));
PositionInterpolator113.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator113.setKeyValue(new float[]{4.8,5.48778,0.0,-4.8,2.26548,0.0}, 6);
Scene8.addChild(&PositionInterpolator113);

Script& Script114 =  Script();
Script114.setDEF(CString("Script0"));
Script114.setDirectOutput(true);
field& field115 =  field();
field115.setName(CString("bouncepuck"));
field115.setAccessType(CString("inputOnly"));
field115.setType(CString("SFVec3f"));
Script114.addChild(&field115);

field& field116 =  field();
field116.setName(CString("bounceplayer1"));
field116.setAccessType(CString("inputOnly"));
field116.setType(CString("SFVec3f"));
Script114.addChild(&field116);

field& field117 =  field();
field117.setName(CString("puckdirection"));
field117.setAccessType(CString("inputOnly"));
field117.setType(CString("SFTime"));
Script114.addChild(&field117);

field& field118 =  field();
field118.setName(CString("setpuckswitch"));
field118.setAccessType(CString("inputOnly"));
field118.setType(CString("SFBool"));
Script114.addChild(&field118);

field& field119 =  field();
field119.setName(CString("p"));
field119.setAccessType(CString("initializeOnly"));
field119.setType(CString("MFNode"));
ProtoInstance& ProtoInstance120 =  ProtoInstance();
ProtoInstance120.setUSE(CString("Player0"));
field119.addChild(&ProtoInstance120);

ProtoInstance& ProtoInstance121 =  ProtoInstance();
ProtoInstance121.setUSE(CString("Player1"));
field119.addChild(&ProtoInstance121);

ProtoInstance& ProtoInstance122 =  ProtoInstance();
ProtoInstance122.setUSE(CString("Puck"));
field119.addChild(&ProtoInstance122);

Script114.addChild(&field119);

field& field123 =  field();
field123.setName(CString("timex"));
field123.setAccessType(CString("initializeOnly"));
field123.setType(CString("SFNode"));
TimeSensor& TimeSensor124 =  TimeSensor();
TimeSensor124.setUSE(CString("TimeX"));
field123.addChild(&TimeSensor124);

Script114.addChild(&field123);

field& field125 =  field();
field125.setName(CString("moveplayer1"));
field125.setAccessType(CString("initializeOnly"));
field125.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator126 =  PositionInterpolator();
PositionInterpolator126.setUSE(CString("MovePlayer1"));
field125.addChild(&PositionInterpolator126);

Script114.addChild(&field125);

field& field127 =  field();
field127.setName(CString("movepuck"));
field127.setAccessType(CString("initializeOnly"));
field127.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator128 =  PositionInterpolator();
PositionInterpolator128.setUSE(CString("MovePuck"));
field127.addChild(&PositionInterpolator128);

Script114.addChild(&field127);

field& field129 =  field();
field129.setName(CString("ps"));
field129.setAccessType(CString("initializeOnly"));
field129.setType(CString("SFNode"));
Switch& Switch130 =  Switch();
Switch130.setUSE(CString("PuckSwitch"));
field129.addChild(Switch130);

Script114.addChild(&field129);

field& field131 =  field();
field131.setName(CString("sw"));
field131.setAccessType(CString("initializeOnly"));
field131.setType(CString("SFNode"));
Switch& Switch132 =  Switch();
Switch132.setUSE(CString("ScoreSwitch"));
field131.addChild(Switch132);

Script114.addChild(&field131);

field& field133 =  field();
field133.setName(CString("score"));
field133.setAccessType(CString("initializeOnly"));
field133.setType(CString("MFNode"));
PixelTexture& PixelTexture134 =  PixelTexture();
PixelTexture134.setUSE(CString("Score1"));
field133.addChild(PixelTexture134);

PixelTexture& PixelTexture135 =  PixelTexture();
PixelTexture135.setUSE(CString("Score0"));
field133.addChild(PixelTexture135);

Script114.addChild(&field133);

field& field136 =  field();
field136.setName(CString("moveplayer1keyval"));
field136.setAccessType(CString("initializeOnly"));
field136.setType(CString("MFVec3f"));
field136.setValue(CString("0 0 0 0 0 0"));
Script114.addChild(&field136);

field& field137 =  field();
field137.setName(CString("movepuckkeyval"));
field137.setAccessType(CString("initializeOnly"));
field137.setType(CString("MFVec3f"));
field137.setValue(CString("4.8 5.48778 0 -4.8 2.26548 0"));
Script114.addChild(&field137);

field& field138 =  field();
field138.setName(CString("zero"));
field138.setAccessType(CString("initializeOnly"));
field138.setType(CString("SFImage"));
field138.setValue(CString("3 5 2 65535 65535 65535 65535 0 65535 65535 0 65535 65535 0 65535 65535 65535 65535"));
Script114.addChild(&field138);

field& field139 =  field();
field139.setName(CString("one"));
field139.setAccessType(CString("initializeOnly"));
field139.setType(CString("SFImage"));
field139.setValue(CString("3 5 2 65535 65535 65535 0 65535 0 0 65535 0 0 65535 0 65535 65535 0"));
Script114.addChild(&field139);

field& field140 =  field();
field140.setName(CString("two"));
field140.setAccessType(CString("initializeOnly"));
field140.setType(CString("SFImage"));
field140.setValue(CString("3 5 2 65535 65535 65535 65535 0 0 65535 65535 65535 0 0 65535 65535 65535 65535"));
Script114.addChild(&field140);

field& field141 =  field();
field141.setName(CString("three"));
field141.setAccessType(CString("initializeOnly"));
field141.setType(CString("SFImage"));
field141.setValue(CString("3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 0 0 65535 65535 65535 65535"));
Script114.addChild(&field141);

field& field142 =  field();
field142.setName(CString("four"));
field142.setAccessType(CString("initializeOnly"));
field142.setType(CString("SFImage"));
field142.setValue(CString("3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 0 65535"));
Script114.addChild(&field142);

field& field143 =  field();
field143.setName(CString("five"));
field143.setAccessType(CString("initializeOnly"));
field143.setType(CString("SFImage"));
field143.setValue(CString("3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535"));
Script114.addChild(&field143);

field& field144 =  field();
field144.setName(CString("six"));
field144.setAccessType(CString("initializeOnly"));
field144.setType(CString("SFImage"));
field144.setValue(CString("3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535"));
Script114.addChild(&field144);

field& field145 =  field();
field145.setName(CString("seven"));
field145.setAccessType(CString("initializeOnly"));
field145.setType(CString("SFImage"));
field145.setValue(CString("3 5 2 0 0 65535 0 0 65535 0 0 65535 0 0 65535 65535 65535 65535"));
Script114.addChild(&field145);

field& field146 =  field();
field146.setName(CString("eight"));
field146.setAccessType(CString("initializeOnly"));
field146.setType(CString("SFImage"));
field146.setValue(CString("3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535"));
Script114.addChild(&field146);

field& field147 =  field();
field147.setName(CString("nine"));
field147.setAccessType(CString("initializeOnly"));
field147.setType(CString("SFImage"));
field147.setValue(CString("3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535"));
Script114.addChild(&field147);

field& field148 =  field();
field148.setName(CString("count"));
field148.setAccessType(CString("initializeOnly"));
field148.setType(CString("SFInt32"));
Script114.addChild(&field148);

field& field149 =  field();
field149.setName(CString("skill"));
field149.setAccessType(CString("initializeOnly"));
field149.setType(CString("SFInt32"));
field149.setValue(CString("4"));
Script114.addChild(&field149);

field& field150 =  field();
field150.setName(CString("scores"));
field150.setAccessType(CString("initializeOnly"));
field150.setType(CString("MFInt32"));
field150.setValue(CString("4 0"));
Script114.addChild(&field150);


//Script114.setSourceCode(CString("vrmlscript:")+
//_T("  function bouncepuck(v){")+
//_T("   v[1] = (6-Math.abs(6-Math.abs((v[1]+3)%12)))-3;")+
//_T("   p[2].set_T = v;")+
//_T("  }")+
//_T("  function bounceplayer1(v){")+
//_T("   v[1] = p[2].T[1]*(.3+skill*.05);")+
//_T("   p[1].set_T = v;")+
//_T("  }")+
//_T("  function setpuckswitch(v){")+
//_T("  }")+
//_T("  function puckdirection(v){")+
//_T("   if(Math.abs(p[2].T[1]-p[count].T[1])>1.5){")+
//_T("    ps.whichChoice = 1;")+
//_T("    //p[2].set_img = new MFString(imgs[imgcount]);")+
//_T("    timex.set_stopTime = timex.time;")+
//_T("    timex.set_startTime = timex.time+1;")+
//_T("    movepuckkeyval[0][1] = 0;")+
//_T("    movepuckkeyval[1][1] = 0;")+
//_T("    movepuck.set_keyValue = movepuckkeyval;")+
//_T("    timex.set_cycleInterval = 2-(.3*skill);")+
//_T("    skill = (skill+1)%6;")+
//_T("    //imgcount = (imgcount+1)%imgs.length;")+
//_T("    scores[count]++;")+
//_T("    score[count].set_image = numpix[scores[count]%10];")+
//_T("   }else{")+
//_T("    ps.whichChoice = 0;")+
//_T("    movepuckkeyval[0] = movepuck.keyValue[1];")+
//_T("    movepuckkeyval[1] = movepuck.keyValue[0];")+
//_T("    movepuckkeyval[1][1] = 10*(p[2].T[1]-p[count].T[1]);")+
//_T("    movepuck.set_keyValue = movepuckkeyval;")+
//_T("    count = (count+1)%2;")+
//_T("   }")+
//_T("  }")+
//_T("  function initialize(){")+
//_T("   numpix = new Array(zero,one,two,three,four,five,six,seven,eight,nine);")+
//_T("   score[0].set_image = score[1].set_image = numpix[0];")+
//_T("  }"));
Scene8.addChild(&Script114);

ROUTE& ROUTE151 =  ROUTE();
ROUTE151.setFromNode(CString("BGTime"));
ROUTE151.setFromField(CString("fraction_changed"));
ROUTE151.setToNode(CString("BGSpin"));
ROUTE151.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE151);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromNode(CString("BGSpin"));
ROUTE152.setFromField(CString("value_changed"));
ROUTE152.setToNode(CString("BG0X"));
ROUTE152.setToField(CString("set_R"));
Scene8.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromNode(CString("Proximity0"));
ROUTE153.setFromField(CString("position_changed"));
ROUTE153.setToNode(CString("Proximity0"));
ROUTE153.setToField(CString("set_center"));
Scene8.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromNode(CString("Proximity0"));
ROUTE154.setFromField(CString("position_changed"));
ROUTE154.setToNode(CString("HUD"));
ROUTE154.setToField(CString("set_T"));
Scene8.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromNode(CString("Proximity0"));
ROUTE155.setFromField(CString("orientation_changed"));
ROUTE155.setToNode(CString("HUD"));
ROUTE155.setToField(CString("set_R"));
Scene8.addChild(&ROUTE155);

ROUTE& ROUTE156 =  ROUTE();
ROUTE156.setFromNode(CString("Drag0"));
ROUTE156.setFromField(CString("translation_changed"));
ROUTE156.setToNode(CString("Player0"));
ROUTE156.setToField(CString("set_T"));
Scene8.addChild(&ROUTE156);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromNode(CString("TimeX"));
ROUTE157.setFromField(CString("fraction_changed"));
ROUTE157.setToNode(CString("MovePuck"));
ROUTE157.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE157);

ROUTE& ROUTE158 =  ROUTE();
ROUTE158.setFromNode(CString("TimeX"));
ROUTE158.setFromField(CString("fraction_changed"));
ROUTE158.setToNode(CString("MovePlayer1"));
ROUTE158.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE158);

ROUTE& ROUTE159 =  ROUTE();
ROUTE159.setFromNode(CString("MovePuck"));
ROUTE159.setFromField(CString("value_changed"));
ROUTE159.setToNode(CString("Script0"));
ROUTE159.setToField(CString("bouncepuck"));
Scene8.addChild(&ROUTE159);

ROUTE& ROUTE160 =  ROUTE();
ROUTE160.setFromNode(CString("MovePlayer1"));
ROUTE160.setFromField(CString("value_changed"));
ROUTE160.setToNode(CString("Script0"));
ROUTE160.setToField(CString("bounceplayer1"));
Scene8.addChild(&ROUTE160);

ROUTE& ROUTE161 =  ROUTE();
ROUTE161.setFromNode(CString("TimeX"));
ROUTE161.setFromField(CString("cycleTime"));
ROUTE161.setToNode(CString("Script0"));
ROUTE161.setToField(CString("puckdirection"));
Scene8.addChild(&ROUTE161);

X3D0.setScene(&Scene8);

//}
