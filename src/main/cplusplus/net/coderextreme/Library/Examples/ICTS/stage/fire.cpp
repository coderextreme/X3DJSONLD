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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("RandomSwitcher"));
ExternProtoDeclare8.setUrl(new CString[]{CString("RandomSwitcher_proto.x3d")}, 1);
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
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("whichChoice_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field12);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo13);

Transform& Transform14 =  Transform();
Transform14.setBboxSize(new float[]{6.67,6.67,6.67});
Billboard& Billboard15 =  Billboard();
Transform& Transform16 =  Transform();
TimeSensor& TimeSensor17 =  TimeSensor();
TimeSensor17.setDEF(CString("_1"));
TimeSensor17.setCycleInterval(0.1);
TimeSensor17.setLoop(True);
TimeSensor17.setStartTime(968922869.685071);
Transform16.addChild(&TimeSensor17);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("fireSwitch"));
Switch& Switch19 =  Switch();
Switch19.setDEF(CString("_2"));
Switch19.setWhichChoice(0);
Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{-0.136771,-0.0738408,-0.443054});
Transform20.setRotation(new float[]{1,0,0,0.207709});
Transform20.setScale(new float[]{1.98355,1,1});
Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{0.0362256,0.901673,1.68843});
Transform21.setRotation(new float[]{1,0,0,1.65743});
Transform21.setScale(new float[]{0.722581,2.25045,0.999999});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
ImageTexture& ImageTexture24 =  ImageTexture();
ImageTexture24.setUrl(new CString[]{CString("blitz.png")}, 1);
Appearance23.addChild(&ImageTexture24);

Shape22.addChild(&Appearance23);

IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setSolid(False);
IndexedFaceSet25.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate26 =  TextureCoordinate();
TextureCoordinate26.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet25.setTexCoord(&TextureCoordinate26);

Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet25.setCoord(&Coordinate27);

Shape22.setGeometry(&IndexedFaceSet25);

Transform21.addChild(&Shape22);

Transform20.addChild(&Transform21);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{-0.108338,1.01425,0.758368});
Transform28.setScale(new float[]{0.504147,1,1});
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(CString("_3"));
ImageTexture31.setUrl(new CString[]{CString("light7.png")}, 1);
Appearance30.addChild(&ImageTexture31);

Shape29.addChild(&Appearance30);

IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setSolid(False);
IndexedFaceSet32.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate33 =  TextureCoordinate();
TextureCoordinate33.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet32.setTexCoord(&TextureCoordinate33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet32.setCoord(&Coordinate34);

Shape29.setGeometry(&IndexedFaceSet32);

Transform28.addChild(&Shape29);

Transform20.addChild(&Transform28);

Transform& Transform35 =  Transform();
Transform35.setTranslation(new float[]{0.254031,1.01425,0.758368});
Transform35.setScale(new float[]{0.504147,1,1});
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
ImageTexture& ImageTexture38 =  ImageTexture();
ImageTexture38.setUSE(CString("_3"));
Appearance37.addChild(&ImageTexture38);

Shape36.addChild(&Appearance37);

IndexedFaceSet& IndexedFaceSet39 =  IndexedFaceSet();
IndexedFaceSet39.setSolid(False);
IndexedFaceSet39.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate40 =  TextureCoordinate();
TextureCoordinate40.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet39.setTexCoord(&TextureCoordinate40);

Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet39.setCoord(&Coordinate41);

Shape36.setGeometry(&IndexedFaceSet39);

Transform35.addChild(&Shape36);

Transform20.addChild(&Transform35);

Switch19.addChild(&Transform20);

Transform& Transform42 =  Transform();
Switch19.addChild(&Transform42);

Transform& Transform43 =  Transform();
Switch19.addChild(&Transform43);

Transform& Transform44 =  Transform();
Switch19.addChild(&Transform44);

Transform18.addChild(&Switch19);

Transform16.addChild(&Transform18);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("RandomSwitcher"));
ProtoInstance& ProtoInstance46 =  ProtoInstance();
ProtoInstance46.setName(CString("RandomSwitcher"));
ProtoInstance46.setDEF(CString("_4"));
fieldValue& fieldValue47 =  fieldValue();
fieldValue47.setName(CString("maxValue"));
fieldValue47.setValue(CString("3"));
ProtoInstance46.addChild(&fieldValue47);

Transform45.addChild(&ProtoInstance46);

Transform16.addChild(&Transform45);

Transform& Transform48 =  Transform();
VisibilitySensor& VisibilitySensor49 =  VisibilitySensor();
VisibilitySensor49.setDEF(CString("_5"));
VisibilitySensor49.setSize(new float[]{1,1,1});
VisibilitySensor49.setCenter(new float[]{0,1,0});
Transform48.addChild(&VisibilitySensor49);

Transform16.addChild(&Transform48);

Billboard15.addChild(&Transform16);

Transform14.addChild(&Billboard15);

Scene7.addChild(&Transform14);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("_5"));
ROUTE50.setFromField(CString("isActive"));
ROUTE50.setToNode(CString("_1"));
ROUTE50.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("_5"));
ROUTE51.setFromField(CString("enterTime"));
ROUTE51.setToNode(CString("_1"));
ROUTE51.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("_4"));
ROUTE52.setFromField(CString("whichChoice_changed"));
ROUTE52.setToNode(CString("_2"));
ROUTE52.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("_1"));
ROUTE53.setFromField(CString("cycleTime"));
ROUTE53.setToNode(CString("_4"));
ROUTE53.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE53);

X3D0.setScene(&Scene7);

}
