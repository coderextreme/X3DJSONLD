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
meta3.setContent(CString("Fri, 13 Nov 2015 10:12:49 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 13 Nov 2015 10:12:49 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("SwitchAnimProto"));
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("animTime"));
TimeSensor10.setLoop(True);
Transform9.addChild(&TimeSensor10);

Script& Script11 =  Script();
Script11.setDEF(CString("_animScript1"));
field& field12 =  field();
field12.setName(CString("whichChoice_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFInt32"));
Script11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("set_time"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFTime"));
Script11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("fps"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFFloat"));
field14.setValue(CString("12"));
Script11.addChild(&field14);

field& field15 =  field();
field15.setName(CString("max"));
field15.setAccessType(CString("initializeOnly"));
field15.setType(CString("SFFloat"));
field15.setValue(CString("9"));
Script11.addChild(&field15);

field& field16 =  field();
field16.setName(CString("lastTime"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFTime"));
Script11.addChild(&field16);

field& field17 =  field();
field17.setName(CString("dt"));
field17.setAccessType(CString("initializeOnly"));
field17.setType(CString("SFFloat"));
field17.setValue(CString("0.0833333"));
Script11.addChild(&field17);


Script11.setSourceCode(CString("vrmlscript:")+
_T("function initialize()")+
_T("{")+
_T("	dt = 1/12;")+
_T("}")+
_T("function set_time(value, time)")+
_T("{")+
_T("	if (time - lastTime > dt){")+
_T("		if (whichChoice_changed == max) whichChoice_changed = 0;")+
_T("		else whichChoice_changed ++;")+
_T("		lastTime = time;")+
_T("	}")+
_T("}"));
Transform9.addChild(&Script11);

Scene7.addChild(&Transform9);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("Wasserfall"));
Transform18.setTranslation(new float[]{-193.876,252.561,306.987});
Transform18.setRotation(new float[]{0,1,0,3.14159});
Transform18.setScale(new float[]{0.277399,0.512499,0.36079});
Transform& Transform19 =  Transform();
Switch& Switch20 =  Switch();
Switch20.setDEF(CString("_1"));
Switch20.setWhichChoice(0);
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
ImageTexture& ImageTexture23 =  ImageTexture();
ImageTexture23.setUrl(new CString[]{CString("falls.1.png")}, 1);
Appearance22.addChild(&ImageTexture23);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet24 =  IndexedFaceSet();
IndexedFaceSet24.setDEF(CString("wasserfallIndexedFaceSet"));
IndexedFaceSet24.setCoordIndex(new int32_t[]{0,11,27,28,-1,30,10,3,29,-1,11,7,31,27,-1,32,6,10,30,-1,7,13,33,31,-1,34,12,6,32,-1,13,5,35,33,-1,36,4,12,34,-1,5,15,37,35,-1,38,14,4,36,-1,15,9,39,37,-1,40,8,14,38,-1,9,17,41,39,-1,17,1,42,41,-1,43,16,8,40,-1,44,2,16,43,-1,27,46,45,28,-1,46,18,19,45,-1,18,48,47,19,-1,48,30,29,47,-1,31,49,46,27,-1,49,20,18,46,-1,20,50,48,18,-1,50,32,30,48,-1,33,51,49,31,-1,51,21,20,49,-1,21,52,50,20,-1,52,34,32,50,-1,35,53,51,33,-1,53,22,21,51,-1,22,54,52,21,-1,54,36,34,52,-1,37,55,53,35,-1,55,23,22,53,-1,23,56,54,22,-1,56,38,36,54,-1,39,57,55,37,-1,57,24,23,55,-1,24,58,56,23,-1,58,40,38,56,-1,41,59,57,39,-1,59,25,24,57,-1,42,60,59,41,-1,60,26,25,59,-1,25,61,58,24,-1,61,43,40,58,-1,26,62,61,25,-1,62,44,43,61,-1}, 240);
TextureCoordinate& TextureCoordinate25 =  TextureCoordinate();
TextureCoordinate25.setPoint(new float[]{0.019436,0.980299,0,0.00023728,1,0.00023728,0.994235,0.996359,1,0.498298,0,0.498298,1,0.747329,0,0.747329,1,0.249268,0,0.249268,1,0.885691,0,0.885691,1,0.622814,0,0.622814,1,0.373783,0,0.373783,1,0.124753,0,0.124753,0.494236,0.885691,0.494236,0.996359,0.494235,0.747329,0.494236,0.622814,0.494235,0.498298,0.494235,0.373783,0.494235,0.249268,0.494235,0.124753,0.494235,0.00023728,0.244236,0.885691,0.244236,0.996359,0.744235,0.996359,0.744235,0.885691,0.244235,0.747329,0.744234,0.747329,0.244236,0.622814,0.744235,0.622814,0.244235,0.498298,0.744234,0.498298,0.244235,0.373783,0.744234,0.373783,0.244235,0.249268,0.744234,0.249268,0.244235,0.124753,0.244235,0.00023728,0.744234,0.124753,0.744234,0.00023728,0.369236,0.996359,0.369236,0.885691,0.619235,0.996359,0.619235,0.885691,0.369235,0.747329,0.619235,0.747329,0.369235,0.622814,0.619235,0.622814,0.369235,0.498298,0.619235,0.498298,0.369235,0.373783,0.619234,0.373783,0.369235,0.249268,0.619234,0.249268,0.369235,0.124753,0.369235,0.00023728,0.619234,0.124753,0.619234,0.00023728}, 126);
IndexedFaceSet24.setTexCoord(&TextureCoordinate25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setPoint(new float[]{-94.9602,96.7755,81.6446,-98.8474,-100,101.703,101.153,-100,101.703,99.9999,100,73.2315,101.153,0,100.027,-98.8474,0,100.027,101.153,50,90.3797,-98.8474,50,90.3797,101.153,-50,101.703,-98.8474,-50,101.703,101.153,77.7802,77.5166,-98.8473,77.7802,77.5166,101.153,25,96.8112,-98.8474,25,96.8112,101.153,-25,101.703,-98.8474,-25,101.703,101.153,-75,101.703,-98.8474,-75,101.703,-0.0000534058,77.7802,115.676,0,100,100,-0.000144958,50,128.54,-0.0000839233,25,134.971,-0.000144958,0,138.187,-0.000175476,-25,139.863,-0.000175476,-50,139.863,-0.000175476,-75,139.863,-0.000175476,-100,139.863,-50.0002,77.7802,104.781,-50.0001,100,89.1047,49.9999,100,89.1047,49.9998,77.7802,104.781,-50.0003,50,117.644,49.9997,50,117.644,-50.0002,25,124.076,49.9998,25,124.076,-50.0003,0,127.291,49.9997,0,127.291,-50.0003,-25,128.968,49.9997,-25,128.968,-50.0003,-50,128.968,49.9997,-50,128.968,-50.0003,-75,128.968,-50.0003,-100,128.968,49.9997,-75,128.968,49.9997,-100,128.968,-25.0001,100,97.4697,-25.0001,77.7802,113.146,24.9999,100,97.4697,24.9999,77.7802,113.146,-25.0002,50,126.009,24.9998,50,126.009,-25.0002,25,132.441,24.9998,25,132.441,-25.0002,0,135.656,24.9998,0,135.656,-25.0003,-25,137.333,24.9997,-25,137.333,-25.0003,-50,137.333,24.9997,-50,137.333,-25.0003,-75,137.333,-25.0003,-100,137.333,24.9997,-75,137.333,24.9997,-100,137.333}, 189);
IndexedFaceSet24.setCoord(&Coordinate26);

Shape21.setGeometry(&IndexedFaceSet24);

Switch20.addChild(&Shape21);

Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("falls.2.png")}, 1);
Appearance28.addChild(&ImageTexture29);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet30 =  IndexedFaceSet();
IndexedFaceSet30.setUSE(CString("wasserfallIndexedFaceSet"));
Shape27.setGeometry(&IndexedFaceSet30);

Switch20.addChild(&Shape27);

Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
ImageTexture& ImageTexture33 =  ImageTexture();
ImageTexture33.setUrl(new CString[]{CString("falls.3.png")}, 1);
Appearance32.addChild(&ImageTexture33);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setUSE(CString("wasserfallIndexedFaceSet"));
Shape31.setGeometry(&IndexedFaceSet34);

Switch20.addChild(&Shape31);

Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setUrl(new CString[]{CString("falls.4.png")}, 1);
Appearance36.addChild(&ImageTexture37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setUSE(CString("wasserfallIndexedFaceSet"));
Shape35.setGeometry(&IndexedFaceSet38);

Switch20.addChild(&Shape35);

Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
ImageTexture& ImageTexture41 =  ImageTexture();
ImageTexture41.setUrl(new CString[]{CString("falls.5.png")}, 1);
Appearance40.addChild(&ImageTexture41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setUSE(CString("wasserfallIndexedFaceSet"));
Shape39.setGeometry(&IndexedFaceSet42);

Switch20.addChild(&Shape39);

Shape& Shape43 =  Shape();
Appearance& Appearance44 =  Appearance();
ImageTexture& ImageTexture45 =  ImageTexture();
ImageTexture45.setUrl(new CString[]{CString("falls.6.png")}, 1);
Appearance44.addChild(&ImageTexture45);

Shape43.addChild(&Appearance44);

IndexedFaceSet& IndexedFaceSet46 =  IndexedFaceSet();
IndexedFaceSet46.setUSE(CString("wasserfallIndexedFaceSet"));
Shape43.setGeometry(&IndexedFaceSet46);

Switch20.addChild(&Shape43);

Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setUrl(new CString[]{CString("falls.7.png")}, 1);
Appearance48.addChild(&ImageTexture49);

Shape47.addChild(&Appearance48);

IndexedFaceSet& IndexedFaceSet50 =  IndexedFaceSet();
IndexedFaceSet50.setUSE(CString("wasserfallIndexedFaceSet"));
Shape47.setGeometry(&IndexedFaceSet50);

Switch20.addChild(&Shape47);

Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
ImageTexture& ImageTexture53 =  ImageTexture();
ImageTexture53.setUrl(new CString[]{CString("falls.8.png")}, 1);
Appearance52.addChild(&ImageTexture53);

Shape51.addChild(&Appearance52);

IndexedFaceSet& IndexedFaceSet54 =  IndexedFaceSet();
IndexedFaceSet54.setUSE(CString("wasserfallIndexedFaceSet"));
Shape51.setGeometry(&IndexedFaceSet54);

Switch20.addChild(&Shape51);

Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
ImageTexture& ImageTexture57 =  ImageTexture();
ImageTexture57.setUrl(new CString[]{CString("falls.9.png")}, 1);
Appearance56.addChild(&ImageTexture57);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setUSE(CString("wasserfallIndexedFaceSet"));
Shape55.setGeometry(&IndexedFaceSet58);

Switch20.addChild(&Shape55);

Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
ImageTexture& ImageTexture61 =  ImageTexture();
ImageTexture61.setUrl(new CString[]{CString("falls.10.png")}, 1);
Appearance60.addChild(&ImageTexture61);

Shape59.addChild(&Appearance60);

IndexedFaceSet& IndexedFaceSet62 =  IndexedFaceSet();
IndexedFaceSet62.setUSE(CString("wasserfallIndexedFaceSet"));
Shape59.setGeometry(&IndexedFaceSet62);

Switch20.addChild(&Shape59);

Transform19.addChild(&Switch20);

Transform18.addChild(&Transform19);

Scene7.addChild(&Transform18);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("wasserfallVisibility"));
VisibilitySensor& VisibilitySensor64 =  VisibilitySensor();
VisibilitySensor64.setDEF(CString("_2"));
VisibilitySensor64.setSize(new float[]{55.48,102.5,24.04});
VisibilitySensor64.setCenter(new float[]{-194.197,252.561,268.546});
Transform63.addChild(&VisibilitySensor64);

Scene7.addChild(&Transform63);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("_2"));
ROUTE65.setFromField(CString("isActive"));
ROUTE65.setToNode(CString("animTime"));
ROUTE65.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("animTime"));
ROUTE66.setFromField(CString("time"));
ROUTE66.setToNode(CString("_animScript1"));
ROUTE66.setToField(CString("set_time"));
Scene7.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("_animScript1"));
ROUTE67.setFromField(CString("whichChoice_changed"));
ROUTE67.setToNode(CString("_1"));
ROUTE67.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE67);

X3D0.setScene(&Scene7);

}
