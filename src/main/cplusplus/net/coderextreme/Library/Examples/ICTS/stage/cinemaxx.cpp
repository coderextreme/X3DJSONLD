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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:59 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Int"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("startTime"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("value_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("keyValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field11);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("BoolSwitch"));
ExternProtoDeclare12.setUrl(new CString[]{CString("BoolSwitch_proto.x3d")}, 1);
field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFBool"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("wichChoice_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare12.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare12);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("Switcher"));
ExternProtoDeclare15.setUrl(new CString[]{CString("Switcher_proto.x3d")}, 1);
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
field18.setName(CString("prev"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("next"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field19);

field& field20 =  field();
field20.setName(CString("offset"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field20);

field& field21 =  field();
field21.setName(CString("whichChoice_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFInt32"));
ExternProtoDeclare15.addChild(&field21);

Scene7.addChild(&ExternProtoDeclare15);

WorldInfo& WorldInfo22 =  WorldInfo();
WorldInfo22.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo22);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Content"));
Transform& Transform24 =  Transform();
Transform24.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor25 =  VisibilitySensor();
VisibilitySensor25.setDEF(CString("_1"));
VisibilitySensor25.setSize(new float[]{0.36,0.12,0.003});
VisibilitySensor25.setCenter(new float[]{0,0,-0.298});
Transform24.addChild(&VisibilitySensor25);

Transform23.addChild(&Transform24);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Int"));
ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("Int"));
ProtoInstance27.setDEF(CString("_2"));
Transform26.addChild(&ProtoInstance27);

Transform23.addChild(&Transform26);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("Else-bg"));
Inline& Inline29 =  Inline();
Inline29.setUrl(new CString[]{CString("else-bg.x3d")}, 1);
Inline29.setBboxSize(new float[]{0.360011,0.120031,0.00224701});
Inline29.setBboxCenter(new float[]{3.7998e-7,-4.65661e-7,-0.298867});
Transform28.addChild(&Inline29);

Transform23.addChild(&Transform28);

Transform& Transform30 =  Transform();
Transform30.setDEF(CString("Next"));
TouchSensor& TouchSensor31 =  TouchSensor();
TouchSensor31.setDEF(CString("_3"));
Transform30.addChild(&TouchSensor31);

Switch& Switch32 =  Switch();
Switch32.setDEF(CString("_4"));
Switch32.setWhichChoice(2);
Transform& Transform33 =  Transform();
Switch32.addChild(&Transform33);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0.156605,-0.0463719,-0.296069});
Transform34.setScale(new float[]{0.0205224,0.0205224,0.205224});
Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
ImageTexture& ImageTexture37 =  ImageTexture();
ImageTexture37.setUrl(new CString[]{CString("focus.gif")}, 1);
Appearance36.addChild(&ImageTexture37);

Shape35.addChild(&Appearance36);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet38.setTexCoord(&TextureCoordinate39);

Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet38.setCoord(&Coordinate40);

Shape35.setGeometry(&IndexedFaceSet38);

Transform34.addChild(&Shape35);

Switch32.addChild(&Transform34);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("BoolSwitch"));
ProtoInstance& ProtoInstance42 =  ProtoInstance();
ProtoInstance42.setName(CString("BoolSwitch"));
ProtoInstance42.setDEF(CString("_5"));
Transform41.addChild(&ProtoInstance42);

Switch32.addChild(&Transform41);

Transform30.addChild(&Switch32);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("next"));
Transform43.setTranslation(new float[]{0.163886,-0.0464349,-0.296962});
Transform43.setScale(new float[]{0.0112658,0.0112657,0.112661});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Material& Material46 =  Material();
Material46.setAmbientIntensity(0);
Material46.setDiffuseColor(new float[]{0,0,0});
Material46.setShininess(0);
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

IndexedFaceSet& IndexedFaceSet47 =  IndexedFaceSet();
IndexedFaceSet47.setCoordIndex(new int32_t[]{2,1,0,-1,3,4,5,-1}, 8);
Coordinate& Coordinate48 =  Coordinate();
Coordinate48.setPoint(new float[]{-0.5,-0.5,0,-0.5,0.5,0,0.5,0,0,-0.489453,0,0,-1.48945,0.5,0,-1.48945,-0.5,0}, 18);
IndexedFaceSet47.setCoord(&Coordinate48);

Shape44.setGeometry(&IndexedFaceSet47);

Transform43.addChild(&Shape44);

Transform30.addChild(&Transform43);

Transform23.addChild(&Transform30);

Transform& Transform49 =  Transform();
Transform49.setDEF(CString("txt"));
Switch& Switch50 =  Switch();
Switch50.setDEF(CString("_6"));
Switch50.setWhichChoice(0);
Transform& Transform51 =  Transform();
Transform51.setDEF(CString("t1"));
Transform51.setTranslation(new float[]{-0.125224,0.0301585,-0.296962});
Transform51.setScale(new float[]{0.00272371,0.00272434,0.00272354});
Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setAmbientIntensity(0);
Material54.setDiffuseColor(new float[]{0,0,0});
Material54.setShininess(0);
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

Text& Text55 =  Text();
Text55.setString(new CString[]{CString(", "), CString("Kino, Filme, Stars. Und was gibt's neues?, "), CString("Wenn du nah genug an einem Filmplakat, "), CString("bist, bekommst du noch mehr Info., "), CString("Das neueste Filmchen kannst du dir hiergleich um die Ecke anschauen, aber ...")}, 5);
Text55.setLength(new float[]{0}, 1);
CFontStyle& FontStyle56 =  CFontStyle();
FontStyle56.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle56.setSize(6);
Text55.setFontStyle(&FontStyle56);

Shape52.setGeometry(&Text55);

Transform51.addChild(&Shape52);

Switch50.addChild(&Transform51);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("t2"));
Transform57.setTranslation(new float[]{-0.125224,0.0301585,-0.296962});
Transform57.setScale(new float[]{0.00272371,0.00272434,0.00272354});
Shape& Shape58 =  Shape();
Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setAmbientIntensity(0);
Material60.setDiffuseColor(new float[]{0,0,0});
Material60.setShininess(0);
Appearance59.addChild(&Material60);

Shape58.addChild(&Appearance59);

Text& Text61 =  Text();
Text61.setString(new CString[]{CString(", "), CString("warte ab bis der Film da ist, dass kann,, "), CString("noch einen Moment dauern. Klick doch, "), CString("mal auf ein Filmplakat., "), CString("Du kannst überall herumlaufen und Dichumschauen. Ich kann Dir erklären ...")}, 5);
Text61.setLength(new float[]{0}, 1);
CFontStyle& FontStyle62 =  CFontStyle();
FontStyle62.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle62.setSize(6);
Text61.setFontStyle(&FontStyle62);

Shape58.setGeometry(&Text61);

Transform57.addChild(&Shape58);

Switch50.addChild(&Transform57);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("t3"));
Transform63.setTranslation(new float[]{-0.125213,0.0301585,-0.296962});
Transform63.setScale(new float[]{0.00267326,0.00272434,0.00272354});
Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Material66.setAmbientIntensity(0);
Material66.setDiffuseColor(new float[]{0,0,0});
Material66.setShininess(0);
Appearance65.addChild(&Material66);

Shape64.addChild(&Appearance65);

Text& Text67 =  Text();
Text67.setString(new CString[]{CString(", "), CString("... wie das geht: Klicke einfach mit Deiner, "), CString("Maus in die Mitte des Bildes und ziehe, "), CString("mit gedrückt gehaltener Maustaste, "), CString("in die Richtung, in die Du laufen möchtestoder benutze die Pfeiltasten.")}, 5);
Text67.setLength(new float[]{0}, 1);
CFontStyle& FontStyle68 =  CFontStyle();
FontStyle68.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle68.setSize(6);
Text67.setFontStyle(&FontStyle68);

Shape64.setGeometry(&Text67);

Transform63.addChild(&Shape64);

Switch50.addChild(&Transform63);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("Switcher"));
ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("Switcher"));
ProtoInstance70.setDEF(CString("_7"));
fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("maxValue"));
fieldValue71.setValue(CString("2"));
ProtoInstance70.addChild(&fieldValue71);

Transform69.addChild(&ProtoInstance70);

Switch50.addChild(&Transform69);

Transform49.addChild(&Switch50);

Transform23.addChild(&Transform49);

Scene7.addChild(&Transform23);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("_1"));
ROUTE72.setFromField(CString("enterTime"));
ROUTE72.setToNode(CString("_2"));
ROUTE72.setToField(CString("startTime"));
Scene7.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("_3"));
ROUTE73.setFromField(CString("isOver"));
ROUTE73.setToNode(CString("_5"));
ROUTE73.setToField(CString("isActive"));
Scene7.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("_5"));
ROUTE74.setFromField(CString("wichChoice_changed"));
ROUTE74.setToNode(CString("_4"));
ROUTE74.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("_3"));
ROUTE75.setFromField(CString("touchTime"));
ROUTE75.setToNode(CString("_7"));
ROUTE75.setToField(CString("set_next"));
Scene7.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("_2"));
ROUTE76.setFromField(CString("value_changed"));
ROUTE76.setToNode(CString("_7"));
ROUTE76.setToField(CString("set_offset"));
Scene7.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("_2"));
ROUTE77.setFromField(CString("value_changed"));
ROUTE77.setToNode(CString("_6"));
ROUTE77.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("_7"));
ROUTE78.setFromField(CString("whichChoice_changed"));
ROUTE78.setToNode(CString("_6"));
ROUTE78.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE78);

X3D0.setScene(&Scene7);

}
