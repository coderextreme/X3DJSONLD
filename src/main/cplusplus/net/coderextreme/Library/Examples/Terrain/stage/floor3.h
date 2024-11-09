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
meta3.setContent(CString("Sat, 12 Sep 2015 08:48:41 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 12 Sep 2015 11:40:47 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Terrain"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("V"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setName(CString("enter"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("T"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
ProtoInterface10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("size"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
ProtoInterface10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("C"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFColor"));
field14.setValue(CString("0 0.1 0.02"));
ProtoInterface10.addChild(&field14);

field& field15 =  field();
field15.setName(CString("img"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFString"));
field15.setValue(CString("\"9.jpg\""));
ProtoInterface10.addChild(&field15);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody16 =  ProtoBody();
Transform& Transform17 =  Transform();
IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("translation"));
connect19.setProtoField(CString("T"));
IS18.addChild(&connect19);

Transform17.addChild(&IS18);

ProximitySensor& ProximitySensor20 =  ProximitySensor();
IS& IS21 =  IS();
Connect& connect22 =  Connect();
connect22.setNodeField(CString("size"));
connect22.setProtoField(CString("size"));
IS21.addChild(&connect22);

Connect& connect23 =  Connect();
connect23.setNodeField(CString("enterTime"));
connect23.setProtoField(CString("enter"));
IS21.addChild(&connect23);

ProximitySensor20.addChild(&IS21);

Transform17.addChild(&ProximitySensor20);

Group& Group24 =  Group();
Transform& Transform25 =  Transform();
Transform25.setTranslation(new float[]{-50.0,0.0,-50.0});
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0.8,0.5,0.3});
Appearance27.addChild(&Material28);

ImageTexture& ImageTexture29 =  ImageTexture();
IS& IS30 =  IS();
Connect& connect31 =  Connect();
connect31.setNodeField(CString("url"));
connect31.setProtoField(CString("img"));
IS30.addChild(&connect31);

ImageTexture29.addChild(&IS30);

Appearance27.addChild(&ImageTexture29);

TextureTransform& TextureTransform32 =  TextureTransform();
Appearance27.setTextureTransform(TextureTransform32);

Shape26.addChild(&Appearance27);

ElevationGrid& ElevationGrid33 =  ElevationGrid();
ElevationGrid33.setXDimension(6);
ElevationGrid33.setZDimension(6);
ElevationGrid33.setXSpacing(20);
ElevationGrid33.setZSpacing(20);
ElevationGrid33.setHeight(new float[]{0.0,1.0,2.0,2.0,1.0,0.0,1.0,-1.0,-1.0,-2.0,1.0,1.0,-1.0,2.0,1.0,0.0,-1.0,-1.0,-2.0,-1.0,0.0,-1.0,-1.0,-2.0,-1.0,0.0,2.0,1.0,0.0,-1.0,0.0,1.0,2.0,2.0,1.0,0.0}, 36);
Shape26.setGeometry(ElevationGrid33);

Transform25.addChild(&Shape26);

Group24.addChild(&Transform25);

Transform17.addChild(&Group24);

ProtoBody16.addChild(&Transform17);

ProtoDeclare9.addChild(&ProtoBody16);

Scene8.addChild(&ProtoDeclare9);

WorldInfo& WorldInfo34 =  WorldInfo();
WorldInfo34.setInfo(new CString[]{CString("CosmoWorlds VlipArt (c)1997 infinite terrain - pioneer@sgi.com")}, 1);
Scene8.addChild(&WorldInfo34);

NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setDEF(CString("Nav1"));
NavigationInfo35.setType(new CString[]{CString("WALK")}, 1);
NavigationInfo35.setSpeed(5);
NavigationInfo35.setHeadlight(false);
Scene8.addChild(&NavigationInfo35);

NavigationInfo& NavigationInfo36 =  NavigationInfo();
NavigationInfo36.setDEF(CString("Nav0"));
NavigationInfo36.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo36.setSpeed(0);
NavigationInfo36.setHeadlight(false);
Scene8.addChild(&NavigationInfo36);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("BGX0"));
Background& Background38 =  Background();
Background38.setDEF(CString("BG0"));
Transform37.addChild(&Background38);

Scene8.addChild(&Transform37);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("BGX1"));
Background& Background40 =  Background();
Background40.setDEF(CString("BG1"));
Background40.setSkyAngle(new float[]{2.0}, 1);
Background40.setSkyColor(new float[]{1.0,1.0,0.0,0.0,0.0,1.0}, 6);
Transform39.addChild(&Background40);

Scene8.addChild(&Transform39);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("BGX2"));
Background& Background42 =  Background();
Background42.setDEF(CString("BG2"));
Background42.setSkyAngle(new float[]{1.7}, 1);
Background42.setSkyColor(new float[]{1.0,1.0,0.0,0.0,0.0,1.0}, 6);
Transform41.addChild(&Background42);

Scene8.addChild(&Transform41);

TimeSensor& TimeSensor43 =  TimeSensor();
TimeSensor43.setDEF(CString("Time0"));
TimeSensor43.setCycleInterval(300);
TimeSensor43.setLoop(true);
Scene8.addChild(&TimeSensor43);

OrientationInterpolator& OrientationInterpolator44 =  OrientationInterpolator();
OrientationInterpolator44.setDEF(CString("Spin0"));
OrientationInterpolator44.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator44.setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28002}, 12);
Scene8.addChild(&OrientationInterpolator44);

OrientationInterpolator& OrientationInterpolator45 =  OrientationInterpolator();
OrientationInterpolator45.setDEF(CString("Spin1"));
OrientationInterpolator45.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator45.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28002}, 12);
Scene8.addChild(&OrientationInterpolator45);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("K"));
Transform46.setTranslation(new float[]{0.0,10.0,0.0});
Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDEF(CString("View0"));
Viewpoint47.setPosition(new float[]{0.0,3.0,0.0});
Viewpoint47.setFieldOfView(1.3);
Transform46.addChild(&Viewpoint47);

Scene8.addChild(&Transform46);

DirectionalLight& DirectionalLight48 =  DirectionalLight();
DirectionalLight48.setDirection(new float[]{-1.0,-1.0,0.0});
Scene8.addChild(&DirectionalLight48);

DirectionalLight& DirectionalLight49 =  DirectionalLight();
DirectionalLight49.setDirection(new float[]{-1.0,-1.0,-1.0});
Scene8.addChild(&DirectionalLight49);

ProtoInstance& ProtoInstance50 =  ProtoInstance();
ProtoInstance50.setName(CString("V"));
ProtoInstance50.setDEF(CString("V0"));
fieldValue& fieldValue51 =  fieldValue();
fieldValue51.setName(CString("C"));
fieldValue51.setValue(CString("1 1 0"));
ProtoInstance50.addChild(&fieldValue51);

Scene8.addChild(&ProtoInstance50);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(CString("V"));
ProtoInstance52.setDEF(CString("V1"));
fieldValue& fieldValue53 =  fieldValue();
fieldValue53.setName(CString("C"));
fieldValue53.setValue(CString("1 0.5 0"));
ProtoInstance52.addChild(&fieldValue53);

Scene8.addChild(&ProtoInstance52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("V"));
ProtoInstance54.setDEF(CString("V2"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("C"));
fieldValue55.setValue(CString("1 0.3 0"));
ProtoInstance54.addChild(&fieldValue55);

Scene8.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(CString("V"));
ProtoInstance56.setDEF(CString("V3"));
fieldValue& fieldValue57 =  fieldValue();
fieldValue57.setName(CString("C"));
fieldValue57.setValue(CString("1 0 0.2"));
ProtoInstance56.addChild(&fieldValue57);

Scene8.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("V"));
ProtoInstance58.setDEF(CString("V4"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("C"));
fieldValue59.setValue(CString("1 0 0"));
ProtoInstance58.addChild(&fieldValue59);

Scene8.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("V"));
ProtoInstance60.setDEF(CString("V5"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("C"));
fieldValue61.setValue(CString("1 0 0.5"));
ProtoInstance60.addChild(&fieldValue61);

Scene8.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("V"));
ProtoInstance62.setDEF(CString("V6"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("C"));
fieldValue63.setValue(CString("0 0 1"));
ProtoInstance62.addChild(&fieldValue63);

Scene8.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("V"));
ProtoInstance64.setDEF(CString("V7"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("C"));
fieldValue65.setValue(CString("0 0 0.5"));
ProtoInstance64.addChild(&fieldValue65);

Scene8.addChild(&ProtoInstance64);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("V"));
ProtoInstance66.setDEF(CString("V8"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("C"));
fieldValue67.setValue(CString("0 0 0.3"));
ProtoInstance66.addChild(&fieldValue67);

Scene8.addChild(&ProtoInstance66);

Transform& Transform68 =  Transform();
Transform68.setDEF(CString("Ob"));
Transform68.setTranslation(new float[]{100.0,0.0,100.0});
TouchSensor& TouchSensor69 =  TouchSensor();
TouchSensor69.setDEF(CString("ScoreTouch"));
Transform68.addChild(&TouchSensor69);

Switch& Switch70 =  Switch();
Switch70.setDEF(CString("Sw"));
Switch70.setWhichChoice(2);
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Appearance72.setDEF(CString("A"));
Material& Material73 =  Material();
Material73.setDiffuseColor(new float[]{0.9,0.9,0.9});
Material73.setEmissiveColor(new float[]{0.2,0.2,0.2});
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

Extrusion& Extrusion74 =  Extrusion();
Extrusion74.setScale(new float[]{1.0,1.0,0.95,0.95,0.00001,0.00001}, 6);
Extrusion74.setSpine(new float[]{0.0,0.0,0.0,0.0,10.0,0.0,0.0,11.5,0.0}, 9);
Shape71.setGeometry(&Extrusion74);

Switch70.addChild(&Shape71);

Shape& Shape75 =  Shape();
Appearance& Appearance76 =  Appearance();
Appearance76.setUSE(CString("A"));
Shape75.addChild(&Appearance76);

Extrusion& Extrusion77 =  Extrusion();
Extrusion77.setScale(new float[]{10.0,10.0,0.00001,0.00001}, 4);
Extrusion77.setSpine(new float[]{0.0,0.0,0.0,0.0,15.0,0.0}, 6);
Shape75.setGeometry(&Extrusion77);

Switch70.addChild(&Shape75);

Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Appearance79.setUSE(CString("A"));
Shape78.addChild(&Appearance79);

Extrusion& Extrusion80 =  Extrusion();
Extrusion80.setScale(new float[]{0.00001,0.00001,10.0,10.0}, 4);
Extrusion80.setSpine(new float[]{0.0,0.0,0.0,0.0,15.0,0.0}, 6);
Shape78.setGeometry(&Extrusion80);

Switch70.addChild(&Shape78);

Transform68.addChild(&Switch70);

Scene8.addChild(&Transform68);

Script& Script81 =  Script();
Script81.setDEF(CString("Script0"));
Script81.setDirectOutput(true);
field& field82 =  field();
field82.setName(CString("ZZZ"));
field82.setAccessType(CString("outputOnly"));
field82.setType(CString("SFVec3f"));
Script81.addChild(&field82);

field& field83 =  field();
field83.setName(CString("P0"));
field83.setAccessType(CString("inputOnly"));
field83.setType(CString("SFTime"));
Script81.addChild(&field83);

field& field84 =  field();
field84.setName(CString("P1"));
field84.setAccessType(CString("inputOnly"));
field84.setType(CString("SFTime"));
Script81.addChild(&field84);

field& field85 =  field();
field85.setName(CString("P2"));
field85.setAccessType(CString("inputOnly"));
field85.setType(CString("SFTime"));
Script81.addChild(&field85);

field& field86 =  field();
field86.setName(CString("P3"));
field86.setAccessType(CString("inputOnly"));
field86.setType(CString("SFTime"));
Script81.addChild(&field86);

field& field87 =  field();
field87.setName(CString("P4"));
field87.setAccessType(CString("inputOnly"));
field87.setType(CString("SFTime"));
Script81.addChild(&field87);

field& field88 =  field();
field88.setName(CString("P5"));
field88.setAccessType(CString("inputOnly"));
field88.setType(CString("SFTime"));
Script81.addChild(&field88);

field& field89 =  field();
field89.setName(CString("P6"));
field89.setAccessType(CString("inputOnly"));
field89.setType(CString("SFTime"));
Script81.addChild(&field89);

field& field90 =  field();
field90.setName(CString("P7"));
field90.setAccessType(CString("inputOnly"));
field90.setType(CString("SFTime"));
Script81.addChild(&field90);

field& field91 =  field();
field91.setName(CString("P8"));
field91.setAccessType(CString("inputOnly"));
field91.setType(CString("SFTime"));
Script81.addChild(&field91);

field& field92 =  field();
field92.setName(CString("getScore"));
field92.setAccessType(CString("inputOnly"));
field92.setType(CString("SFBool"));
Script81.addChild(&field92);

field& field93 =  field();
field93.setName(CString("score"));
field93.setAccessType(CString("initializeOnly"));
field93.setType(CString("SFInt32"));
Script81.addChild(&field93);

field& field94 =  field();
field94.setName(CString("count"));
field94.setAccessType(CString("initializeOnly"));
field94.setType(CString("SFFloat"));
Script81.addChild(&field94);

field& field95 =  field();
field95.setName(CString("xsize"));
field95.setAccessType(CString("initializeOnly"));
field95.setType(CString("SFFloat"));
field95.setValue(CString("100"));
Script81.addChild(&field95);

field& field96 =  field();
field96.setName(CString("zsize"));
field96.setAccessType(CString("initializeOnly"));
field96.setType(CString("SFFloat"));
field96.setValue(CString("100"));
Script81.addChild(&field96);

field& field97 =  field();
field97.setName(CString("sizeBuff"));
field97.setAccessType(CString("initializeOnly"));
field97.setType(CString("SFVec3f"));
field97.setValue(CString("0 40 0"));
Script81.addChild(&field97);

field& field98 =  field();
field98.setName(CString("ts"));
field98.setAccessType(CString("initializeOnly"));
field98.setType(CString("MFVec3f"));
field98.setValue(CString("-100 0 -100 0 0 -100 100 0 -100 -100 0 0 100 0 100 100 0 0 -100 0 100 0 0 100 100 0 100"));
Script81.addChild(&field98);

field& field99 =  field();
field99.setName(CString("tBuff"));
field99.setAccessType(CString("initializeOnly"));
field99.setType(CString("SFVec3f"));
field99.setValue(CString("0 0 0"));
Script81.addChild(&field99);

field& field100 =  field();
field100.setName(CString("ob"));
field100.setAccessType(CString("initializeOnly"));
field100.setType(CString("SFNode"));
Transform& Transform101 =  Transform();
Transform101.setUSE(CString("Ob"));
field100.addChild(&Transform101);

Script81.addChild(&field100);

field& field102 =  field();
field102.setName(CString("sw"));
field102.setAccessType(CString("initializeOnly"));
field102.setType(CString("SFNode"));
Switch& Switch103 =  Switch();
Switch103.setUSE(CString("Sw"));
field102.addChild(Switch103);

Script81.addChild(&field102);

field& field104 =  field();
field104.setName(CString("bg"));
field104.setAccessType(CString("initializeOnly"));
field104.setType(CString("MFNode"));
Background& Background105 =  Background();
Background105.setUSE(CString("BG0"));
field104.addChild(&Background105);

Background& Background106 =  Background();
Background106.setUSE(CString("BG1"));
field104.addChild(&Background106);

Background& Background107 =  Background();
Background107.setUSE(CString("BG2"));
field104.addChild(&Background107);

Script81.addChild(&field104);

field& field108 =  field();
field108.setName(CString("nv"));
field108.setAccessType(CString("initializeOnly"));
field108.setType(CString("MFNode"));
NavigationInfo& NavigationInfo109 =  NavigationInfo();
NavigationInfo109.setUSE(CString("Nav0"));
field108.addChild(&NavigationInfo109);

NavigationInfo& NavigationInfo110 =  NavigationInfo();
NavigationInfo110.setUSE(CString("Nav1"));
field108.addChild(&NavigationInfo110);

Script81.addChild(&field108);

field& field111 =  field();
field111.setName(CString("xs"));
field111.setAccessType(CString("initializeOnly"));
field111.setType(CString("MFNode"));
ProtoInstance& ProtoInstance112 =  ProtoInstance();
ProtoInstance112.setUSE(CString("V0"));
field111.addChild(&ProtoInstance112);

ProtoInstance& ProtoInstance113 =  ProtoInstance();
ProtoInstance113.setUSE(CString("V1"));
field111.addChild(&ProtoInstance113);

ProtoInstance& ProtoInstance114 =  ProtoInstance();
ProtoInstance114.setUSE(CString("V2"));
field111.addChild(&ProtoInstance114);

ProtoInstance& ProtoInstance115 =  ProtoInstance();
ProtoInstance115.setUSE(CString("V3"));
field111.addChild(&ProtoInstance115);

ProtoInstance& ProtoInstance116 =  ProtoInstance();
ProtoInstance116.setUSE(CString("V4"));
field111.addChild(&ProtoInstance116);

ProtoInstance& ProtoInstance117 =  ProtoInstance();
ProtoInstance117.setUSE(CString("V5"));
field111.addChild(&ProtoInstance117);

ProtoInstance& ProtoInstance118 =  ProtoInstance();
ProtoInstance118.setUSE(CString("V6"));
field111.addChild(&ProtoInstance118);

ProtoInstance& ProtoInstance119 =  ProtoInstance();
ProtoInstance119.setUSE(CString("V7"));
field111.addChild(&ProtoInstance119);

ProtoInstance& ProtoInstance120 =  ProtoInstance();
ProtoInstance120.setUSE(CString("V8"));
field111.addChild(&ProtoInstance120);

Script81.addChild(&field111);


//Script81.setSourceCode(CString("javascript:")+
//_T("  function place (fl,fm,fr,cl,cm,cr,bl,bm,br){")+
//_T("   ts[fm][0] = ts[bm][0] = x = xs[cm].T[0];")+
//_T("   ts[cl][2] = ts[cr][2] = z = xs[cm].T[2];")+
//_T("   ts[cl][0] = ts[fl][0] = ts[bl][0] = x - xsize;")+
//_T("   ts[cr][0] = ts[fr][0] = ts[br][0] = x + xsize;")+
//_T("   ts[fl][2] = ts[fm][2] = ts[fr][2] = z - zsize; ")+
//_T("   ts[bl][2] = ts[bm][2] = ts[br][2] = z + zsize;")+
//_T("   for(i=0;i<xs.length;i++){")+
//_T("    tBuff = ts[i];")+
//_T("    xs[i].set_T = tBuff;")+
//_T("   }")+
//_T("   if(count == 2){")+
//_T("    tBuff = xs[cm].T;")+
//_T("    ob.set_translation = tBuff;")+
//_T("    sw.whichChoice = Math.round(3*Math.random());")+
//_T("   }")+
//_T("   count = (count+1)%3;")+
//_T("  }")+
//_T("  function P0 (v){ place(8,6,7,2,0,1,5,3,4);}")+
//_T("  function P1 (v){ place(6,7,8,0,1,2,3,4,5);}")+
//_T("  function P2 (v){ place(7,8,6,1,2,0,4,5,3);}")+
//_T("  function P3 (v){ place(2,0,1,5,3,4,8,6,7);}")+
//_T("  function P4 (v){ place(0,1,2,3,4,5,6,7,8);}")+
//_T("  function P5 (v){ place(1,2,0,4,5,3,7,8,6);}")+
//_T("  function P6 (v){ place(5,3,4,8,6,7,2,0,1);}")+
//_T("  function P7 (v){ place(3,4,5,6,7,8,0,1,2);}")+
//_T("  function P8 (v){ place(4,5,3,7,8,6,1,2,0);}")+
//_T("  function initialize(){")+
//_T("   bg[1].set_bind = TRUE;")+
//_T("   sizeBuff[0] = xsize;")+
//_T("   sizeBuff[2] = zsize;")+
//_T("   for(i=0;i<xs.length;i++){")+
//_T("    ts[i] = tBuff;")+
//_T("    xs[i].set_size = sizeBuff;")+
//_T("   }")+
//_T("   place(0,1,2,3,4,5,6,7,8);")+
//_T("  }"));
Scene8.addChild(&Script81);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromNode(CString("Time0"));
ROUTE121.setFromField(CString("fraction_changed"));
ROUTE121.setToNode(CString("Spin0"));
ROUTE121.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromNode(CString("Time0"));
ROUTE122.setFromField(CString("fraction_changed"));
ROUTE122.setToNode(CString("Spin1"));
ROUTE122.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromNode(CString("Spin0"));
ROUTE123.setFromField(CString("value_changed"));
ROUTE123.setToNode(CString("BGX1"));
ROUTE123.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromNode(CString("Spin1"));
ROUTE124.setFromField(CString("value_changed"));
ROUTE124.setToNode(CString("BGX0"));
ROUTE124.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromNode(CString("V0"));
ROUTE125.setFromField(CString("enter"));
ROUTE125.setToNode(CString("Script0"));
ROUTE125.setToField(CString("P0"));
Scene8.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromNode(CString("V1"));
ROUTE126.setFromField(CString("enter"));
ROUTE126.setToNode(CString("Script0"));
ROUTE126.setToField(CString("P1"));
Scene8.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromNode(CString("V2"));
ROUTE127.setFromField(CString("enter"));
ROUTE127.setToNode(CString("Script0"));
ROUTE127.setToField(CString("P2"));
Scene8.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromNode(CString("V3"));
ROUTE128.setFromField(CString("enter"));
ROUTE128.setToNode(CString("Script0"));
ROUTE128.setToField(CString("P3"));
Scene8.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromNode(CString("V4"));
ROUTE129.setFromField(CString("enter"));
ROUTE129.setToNode(CString("Script0"));
ROUTE129.setToField(CString("P4"));
Scene8.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromNode(CString("V5"));
ROUTE130.setFromField(CString("enter"));
ROUTE130.setToNode(CString("Script0"));
ROUTE130.setToField(CString("P5"));
Scene8.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromNode(CString("V6"));
ROUTE131.setFromField(CString("enter"));
ROUTE131.setToNode(CString("Script0"));
ROUTE131.setToField(CString("P6"));
Scene8.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromNode(CString("V7"));
ROUTE132.setFromField(CString("enter"));
ROUTE132.setToNode(CString("Script0"));
ROUTE132.setToField(CString("P7"));
Scene8.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromNode(CString("V8"));
ROUTE133.setFromField(CString("enter"));
ROUTE133.setToNode(CString("Script0"));
ROUTE133.setToField(CString("P8"));
Scene8.addChild(&ROUTE133);

X3D0.setScene(&Scene8);

//}
