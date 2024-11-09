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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
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

WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo19);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("txt"));
Transform& Transform21 =  Transform();
Transform21.setDEF(CString("Switcher_1"));
ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("Switcher"));
ProtoInstance22.setDEF(CString("_1"));
fieldValue& fieldValue23 =  fieldValue();
fieldValue23.setName(CString("maxValue"));
fieldValue23.setValue(CString("2"));
ProtoInstance22.addChild(&fieldValue23);

Transform21.addChild(&ProtoInstance22);

Transform20.addChild(&Transform21);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("Int"));
ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("Int"));
ProtoInstance25.setDEF(CString("_2"));
Transform24.addChild(&ProtoInstance25);

Transform20.addChild(&Transform24);

Scene7.addChild(&Transform20);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("zoomer"));
Switch& Switch27 =  Switch();
Switch27.setDEF(CString("_3"));
Switch27.setWhichChoice(0);
Transform& Transform28 =  Transform();
Transform28.setDEF(CString("small"));
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("zoomUpButton"));
Transform29.setTranslation(new float[]{0.0,0.0,0.001});
TouchSensor& TouchSensor30 =  TouchSensor();
TouchSensor30.setDEF(CString("_4"));
Transform29.addChild(&TouchSensor30);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("zoomUp"));
Transform31.setTranslation(new float[]{0.0727128,-0.082967,-0.293253});
Transform31.setRotation(new float[]{0.0,0.0,1.0,0.681909});
Transform31.setScale(new float[]{0.100302,0.100302,0.100301});
Transform31.setScaleOrientation(new float[]{0.0,0.0,1.0,0.130302});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setAmbientIntensity(0);
Material34.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material34.setEmissiveColor(new float[]{1.0,0.639776,0.0});
Material34.setShininess(0);
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setCreaseAngle(0.5);
IndexedFaceSet35.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate36 =  Coordinate();
Coordinate36.setPoint(new float[]{-0.1,-0.1,0.1,0.1,0.0,0.1,-0.1,0.1,0.1}, 9);
IndexedFaceSet35.setCoord(&Coordinate36);

Shape32.setGeometry(&IndexedFaceSet35);

Transform31.addChild(&Shape32);

Transform29.addChild(&Transform31);

Transform28.addChild(&Transform29);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("_5"));
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("vSens"));
VisibilitySensor& VisibilitySensor39 =  VisibilitySensor();
VisibilitySensor39.setDEF(CString("_6"));
VisibilitySensor39.setSize(new float[]{0.3436,0.0899179,0.0213106});
VisibilitySensor39.setCenter(new float[]{-0.0933476,-0.120762,-0.281255});
Transform38.addChild(&VisibilitySensor39);

Transform37.addChild(&Transform38);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("textSwitch"));
Switch& Switch41 =  Switch();
Switch41.setDEF(CString("_7"));
Switch41.setWhichChoice(0);
Transform& Transform42 =  Transform();
Transform42.setDEF(CString("tx1"));
Transform& Transform43 =  Transform();
Transform43.setDEF(CString("sprech"));
Transform43.setTranslation(new float[]{-0.25105,-0.0996248,-0.282863});
Transform43.setScale(new float[]{0.00258483,0.00258483,0.00258493});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Shape44.addChild(&Appearance45);

Text& Text46 =  Text();
Text46.setString(new CString[]{CString(", "), CString("Herzlich willkommen in der Central-Station!, "), CString("Von hier aus kommst Du in jeden Teil unsererschönen Stadt. Mit der \"Pfeil-Hoch\"), CString(" "-Taste, "), CString("kannst Du zum Hauptmenü gehen. ")}, 5);
Text46.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle47 =  CFontStyle();
FontStyle47.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle47.setSize(6);
Text46.setFontStyle(&FontStyle47);

Shape44.setGeometry(&Text46);

Transform43.addChild(&Shape44);

Transform42.addChild(&Transform43);

Switch41.addChild(&Transform42);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("tx2"));
Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{-0.25105,-0.0996248,-0.282863});
Transform49.setScale(new float[]{0.00258483,0.00258483,0.00258493});
Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Shape50.addChild(&Appearance51);

Text& Text52 =  Text();
Text52.setString(new CString[]{CString(", "), CString("Du kannst Dich mit allen Pfeiltasten Deiner, "), CString("Tastatur in die jeweilige Richtung bewegen.Du kannst zum Beispiel auch \"Vorwärts\"), CString(" "und\"Links\" zugleich drücken, um Kurven zu laufen.")}, 4);
Text52.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle53 =  CFontStyle();
FontStyle53.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle53.setSize(6);
Text52.setFontStyle(&FontStyle53);

Shape50.setGeometry(&Text52);

Transform49.addChild(&Shape50);

Transform48.addChild(&Transform49);

Switch41.addChild(&Transform48);

Transform& Transform54 =  Transform();
Transform54.setDEF(CString("tx3"));
Transform& Transform55 =  Transform();
Transform55.setTranslation(new float[]{-0.25105,-0.0996248,-0.282863});
Transform55.setScale(new float[]{0.00258483,0.00258483,0.00258493});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Shape56.addChild(&Appearance57);

Text& Text58 =  Text();
Text58.setString(new CString[]{CString(", "), CString("Das ist doch ziemlich einfach, oder?, "), CString("Am Hauptmenü in der Mitte kannst Du gleich, "), CString("überall hin, dahinter führt ein kurzer Fußwegmit schöner Aussicht direkt ins Zentrum. ")}, 4);
Text58.setLength(new float[]{0.0}, 1);
CFontStyle& FontStyle59 =  CFontStyle();
FontStyle59.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle59.setSize(6);
Text58.setFontStyle(&FontStyle59);

Shape56.setGeometry(&Text58);

Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

Switch41.addChild(&Transform54);

Transform40.addChild(&Switch41);

Transform37.addChild(&Transform40);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("bg"));
Transform60.setTranslation(new float[]{-0.0933871,-0.121334,-0.304782});
Transform60.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform60.setScale(new float[]{9.25527,1.20309,2.14284});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setAmbientIntensity(0);
Material63.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material63.setEmissiveColor(new float[]{0.0,0.21087,0.223404});
Material63.setTransparency(0.138298);
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setCreaseAngle(0.5);
IndexedFaceSet64.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{-0.0176327,0.0176307,-0.0176327,-0.0176327,0.0176307,0.0176327,0.0176327,0.0176307,0.0176327,0.0176327,0.0176307,-0.0176327}, 12);
IndexedFaceSet64.setCoord(&Coordinate65);

Shape61.setGeometry(&IndexedFaceSet64);

Transform60.addChild(&Shape61);

Transform37.addChild(&Transform60);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("nextButton"));
TouchSensor& TouchSensor67 =  TouchSensor();
TouchSensor67.setDEF(CString("_8"));
Transform66.addChild(&TouchSensor67);

Transform& Transform68 =  Transform();
Transform68.setTranslation(new float[]{0.0759116,-0.14877,-0.29326});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
Material& Material71 =  Material();
Material71.setAmbientIntensity(0);
Material71.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material71.setEmissiveColor(new float[]{0.0,0.808841,1.0});
Material71.setTransparency(0.340426);
Appearance70.addChild(&Material71);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setCreaseAngle(0.5);
IndexedFaceSet72.setCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1}, 8);
Coordinate& Coordinate73 =  Coordinate();
Coordinate73.setPoint(new float[]{-0.01,0.01,0.01,-0.01,-0.01,0.01,0.01,0.0,0.01,-0.000733886,0.0100329,0.01,-0.000733886,-0.00996705,0.01,0.0192661,0.0000329478,0.01}, 18);
IndexedFaceSet72.setCoord(&Coordinate73);

Shape69.setGeometry(&IndexedFaceSet72);

Transform68.addChild(&Shape69);

Transform66.addChild(&Transform68);

Transform37.addChild(&Transform66);

Transform28.addChild(&Transform37);

Switch27.addChild(&Transform28);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("big"));
Transform74.setTranslation(new float[]{0.130365,0.0814798,0.143523});
Transform74.setScale(new float[]{1.49167,1.49167,1.49167});
Transform& Transform75 =  Transform();
Transform75.setDEF(CString("zoomDownButton"));
Transform75.setTranslation(new float[]{0.0,0.0,0.001});
TouchSensor& TouchSensor76 =  TouchSensor();
TouchSensor76.setDEF(CString("_9"));
Transform75.addChild(&TouchSensor76);

Transform& Transform77 =  Transform();
Transform77.setTranslation(new float[]{0.0727128,-0.082967,-0.293253});
Transform77.setRotation(new float[]{0.0,0.0,1.0,3.87866});
Transform77.setScale(new float[]{0.100302,0.100302,0.100301});
Shape& Shape78 =  Shape();
Appearance& Appearance79 =  Appearance();
Material& Material80 =  Material();
Material80.setAmbientIntensity(0);
Material80.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material80.setEmissiveColor(new float[]{1.0,0.639776,0.0});
Material80.setShininess(0);
Appearance79.addChild(&Material80);

Shape78.addChild(&Appearance79);

IndexedFaceSet& IndexedFaceSet81 =  IndexedFaceSet();
IndexedFaceSet81.setCreaseAngle(0.5);
IndexedFaceSet81.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{-0.1,-0.1,0.1,0.1,0.0,0.1,-0.1,0.1,0.1}, 9);
IndexedFaceSet81.setCoord(&Coordinate82);

Shape78.setGeometry(&IndexedFaceSet81);

Transform77.addChild(&Shape78);

Transform75.addChild(&Transform77);

Transform74.addChild(&Transform75);

Transform& Transform83 =  Transform();
Transform& Transform84 =  Transform();
Transform84.setUSE(CString("_5"));
Transform83.addChild(&Transform84);

Transform74.addChild(&Transform83);

Switch27.addChild(&Transform74);

Transform26.addChild(&Switch27);

Scene7.addChild(&Transform26);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("Switcher"));
ProtoInstance& ProtoInstance86 =  ProtoInstance();
ProtoInstance86.setName(CString("Switcher"));
ProtoInstance86.setDEF(CString("_10"));
Transform85.addChild(&ProtoInstance86);

Scene7.addChild(&Transform85);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("_8"));
ROUTE87.setFromField(CString("touchTime"));
ROUTE87.setToNode(CString("_1"));
ROUTE87.setToField(CString("set_next"));
Scene7.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("_2"));
ROUTE88.setFromField(CString("value_changed"));
ROUTE88.setToNode(CString("_1"));
ROUTE88.setToField(CString("set_offset"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("_6"));
ROUTE89.setFromField(CString("exitTime"));
ROUTE89.setToNode(CString("_2"));
ROUTE89.setToField(CString("startTime"));
Scene7.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("_6"));
ROUTE90.setFromField(CString("enterTime"));
ROUTE90.setToNode(CString("_2"));
ROUTE90.setToField(CString("startTime"));
Scene7.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("_2"));
ROUTE91.setFromField(CString("value_changed"));
ROUTE91.setToNode(CString("_7"));
ROUTE91.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("_1"));
ROUTE92.setFromField(CString("whichChoice_changed"));
ROUTE92.setToNode(CString("_7"));
ROUTE92.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("_10"));
ROUTE93.setFromField(CString("whichChoice_changed"));
ROUTE93.setToNode(CString("_3"));
ROUTE93.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("_9"));
ROUTE94.setFromField(CString("touchTime"));
ROUTE94.setToNode(CString("_10"));
ROUTE94.setToField(CString("set_prev"));
Scene7.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("_4"));
ROUTE95.setFromField(CString("touchTime"));
ROUTE95.setToNode(CString("_10"));
ROUTE95.setToField(CString("set_next"));
Scene7.addChild(&ROUTE95);

X3D0.setScene(&Scene7);

//}
