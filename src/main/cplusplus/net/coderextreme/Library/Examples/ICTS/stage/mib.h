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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:14 GMT"));
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

WorldInfo& WorldInfo12 =  WorldInfo();
WorldInfo12.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo12);

Transform& Transform13 =  Transform();
Transform13.setDEF(CString("mov"));
Transform& Transform14 =  Transform();
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("movie"));
Switch& Switch16 =  Switch();
Switch16.setDEF(CString("_1"));
Switch16.setWhichChoice(0);
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("off"));
TouchSensor& TouchSensor18 =  TouchSensor();
TouchSensor18.setDEF(CString("_2"));
Transform17.addChild(&TouchSensor18);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("still"));
Transform19.setTranslation(new float[]{-0.00202584,5.52632,0.0279587});
Transform19.setScale(new float[]{7.69785,7.69784,7.69785});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setUrl(new CString[]{CString("mib.jpg")}, 1);
Appearance21.addChild(&ImageTexture22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1,7,6,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate24 =  TextureCoordinate();
TextureCoordinate24.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet23.setTexCoord(&TextureCoordinate24);

Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{-0.6667,-0.5,0.0,0.6667,-0.5,0.0,0.6667,0.5,0.0,-0.6667,0.5,0.0,-0.6667,-0.944511,0.0,0.6667,-0.944511,0.0,0.6667,-1.94583,0.0,-0.6667,-1.94583,0.0}, 24);
IndexedFaceSet23.setCoord(&Coordinate25);

Shape20.setGeometry(&IndexedFaceSet23);

Transform19.addChild(&Shape20);

Transform17.addChild(&Transform19);

Switch16.addChild(&Transform17);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("on"));
TouchSensor& TouchSensor27 =  TouchSensor();
TouchSensor27.setDEF(CString("_3"));
Transform26.addChild(&TouchSensor27);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor29 =  VisibilitySensor();
VisibilitySensor29.setDEF(CString("_4"));
VisibilitySensor29.setSize(new float[]{12.866,21.3536,1.73049});
VisibilitySensor29.setCenter(new float[]{0.00397962,-0.604586,-2.38419e-7});
Transform28.addChild(&VisibilitySensor29);

Transform26.addChild(&Transform28);

Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{-0.00202584,5.52632,0.0279587});
Transform30.setScale(new float[]{7.69785,7.69784,7.69785});
Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
MovieTexture& MovieTexture33 =  MovieTexture();
MovieTexture33.setDEF(CString("_5"));
MovieTexture33.setUrl(new CString[]{CString("mib.mov")}, 1);
Appearance32.addChild(MovieTexture33);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setCoordIndex(new int32_t[]{0,1,2,3,-1,7,6,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate35 =  TextureCoordinate();
TextureCoordinate35.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 16);
IndexedFaceSet34.setTexCoord(&TextureCoordinate35);

Coordinate& Coordinate36 =  Coordinate();
Coordinate36.setPoint(new float[]{-0.6667,-0.5,0.0,0.6667,-0.5,0.0,0.6667,0.5,0.0,-0.6667,0.5,0.0,-0.6667,-0.944511,0.0,0.6667,-0.944511,0.0,0.6667,-1.94583,0.0,-0.6667,-1.94583,0.0}, 24);
IndexedFaceSet34.setCoord(&Coordinate36);

Shape31.setGeometry(&IndexedFaceSet34);

Transform30.addChild(&Shape31);

Transform26.addChild(&Transform30);

Switch16.addChild(&Transform26);

Transform15.addChild(&Switch16);

Transform14.addChild(&Transform15);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("offInt"));
ProtoInstance& ProtoInstance38 =  ProtoInstance();
ProtoInstance38.setName(CString("Int"));
ProtoInstance38.setDEF(CString("_6"));
Transform37.addChild(&ProtoInstance38);

Transform14.addChild(&Transform37);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("onInt"));
ProtoInstance& ProtoInstance40 =  ProtoInstance();
ProtoInstance40.setName(CString("Int"));
ProtoInstance40.setDEF(CString("_7"));
fieldValue& fieldValue41 =  fieldValue();
fieldValue41.setName(CString("keyValue"));
fieldValue41.setValue(CString("1"));
ProtoInstance40.addChild(&fieldValue41);

Transform39.addChild(&ProtoInstance40);

Transform14.addChild(&Transform39);

Transform13.addChild(&Transform14);

Scene7.addChild(&Transform13);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_5"));
ROUTE42.setFromField(CString("isActive"));
ROUTE42.setToNode(CString("_5"));
ROUTE42.setToField(CString("set_loop"));
Scene7.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("_4"));
ROUTE43.setFromField(CString("enterTime"));
ROUTE43.setToNode(CString("_5"));
ROUTE43.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_4"));
ROUTE44.setFromField(CString("exitTime"));
ROUTE44.setToNode(CString("_5"));
ROUTE44.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_6"));
ROUTE45.setFromField(CString("value_changed"));
ROUTE45.setToNode(CString("_1"));
ROUTE45.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_7"));
ROUTE46.setFromField(CString("value_changed"));
ROUTE46.setToNode(CString("_1"));
ROUTE46.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("_3"));
ROUTE47.setFromField(CString("touchTime"));
ROUTE47.setToNode(CString("_6"));
ROUTE47.setToField(CString("startTime"));
Scene7.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("_4"));
ROUTE48.setFromField(CString("exitTime"));
ROUTE48.setToNode(CString("_6"));
ROUTE48.setToField(CString("startTime"));
Scene7.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("_2"));
ROUTE49.setFromField(CString("touchTime"));
ROUTE49.setToNode(CString("_7"));
ROUTE49.setToField(CString("startTime"));
Scene7.addChild(&ROUTE49);

X3D0.setScene(&Scene7);

//}
