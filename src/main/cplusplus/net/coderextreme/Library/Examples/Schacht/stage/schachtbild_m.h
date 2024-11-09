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
meta3.setContent(CString("Fri, 28 Aug 2015 13:01:11 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 28 Aug 2015 13:01:11 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Random"));
ExternProtoDeclare8.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/Random/Random_proto.x3dRandom_proto.x3d")}, 2);
field& field9 =  field();
field9.setName(CString("value"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("numValues"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("stopTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("whichChoice_changed"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFInt32"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("fraction_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field14);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("Import"));
ExternProtoDeclare15.setUrl(new CString[]{CString(", "), CString("Import_proto.x3dhttp://vr.create3000.tv/vrml/protos1.1/Import/Import_proto.x3d")}, 2);
field& field16 =  field();
field16.setName(CString("url"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFString"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("startTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("isActive"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFBool"));
ExternProtoDeclare15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("exitTime"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field19);

field& field20 =  field();
field20.setName(CString("parameter"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFNode"));
ExternProtoDeclare15.addChild(&field20);

field& field21 =  field();
field21.setName(CString("children"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFNode"));
ExternProtoDeclare15.addChild(&field21);

Scene7.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare22 =  ExternProtoDeclare();
ExternProtoDeclare22.setName(CString("World"));
ExternProtoDeclare22.setUrl(new CString[]{CString(", "), CString("http://vr.create3000.tv/vrml/protos1.1/World/World_proto.x3dWorld_proto.x3d")}, 2);
field& field23 =  field();
field23.setName(CString("enabled"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFBool"));
ExternProtoDeclare22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("startTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("stopTime"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field25);

field& field26 =  field();
field26.setName(CString("isActive"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
ExternProtoDeclare22.addChild(&field26);

field& field27 =  field();
field27.setName(CString("enterTime"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field27);

field& field28 =  field();
field28.setName(CString("exitTime"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field28);

field& field29 =  field();
field29.setName(CString("scene"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("MFNode"));
ExternProtoDeclare22.addChild(&field29);

field& field30 =  field();
field30.setName(CString("children"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("MFNode"));
ExternProtoDeclare22.addChild(&field30);

Scene7.addChild(&ExternProtoDeclare22);

WorldInfo& WorldInfo31 =  WorldInfo();
WorldInfo31.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo31);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("images"));
Transform& Transform33 =  Transform();
Transform33.setDEF(CString("imageSwitch"));
Switch& Switch34 =  Switch();
Switch34.setDEF(CString("_1"));
Switch34.setWhichChoice(9);
Transform& Transform35 =  Transform();
Transform35.setDEF(CString("b1"));
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("busy-ape"));
Transform36.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
ImageTexture& ImageTexture39 =  ImageTexture();
ImageTexture39.setDEF(CString("_2"));
ImageTexture39.setUrl(new CString[]{CString("busy-ape-512.jpg")}, 1);
Appearance38.addChild(&ImageTexture39);

Shape37.addChild(&Appearance38);

IndexedFaceSet& IndexedFaceSet40 =  IndexedFaceSet();
IndexedFaceSet40.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate41 =  TextureCoordinate();
TextureCoordinate41.setPoint(new float[]{0.314065,0.544841,0.652179,0.544841,0.652179,0.768937,0.314065,0.768937}, 8);
IndexedFaceSet40.setTexCoord(&TextureCoordinate41);

Coordinate& Coordinate42 =  Coordinate();
Coordinate42.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet40.setCoord(&Coordinate42);

Shape37.setGeometry(&IndexedFaceSet40);

Transform36.addChild(&Shape37);

Transform35.addChild(&Transform36);

Switch34.addChild(&Transform35);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("b2"));
Transform& Transform44 =  Transform();
Transform44.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
ImageTexture& ImageTexture47 =  ImageTexture();
ImageTexture47.setUSE(CString("_2"));
Appearance46.addChild(&ImageTexture47);

Shape45.addChild(&Appearance46);

IndexedFaceSet& IndexedFaceSet48 =  IndexedFaceSet();
IndexedFaceSet48.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate49 =  TextureCoordinate();
TextureCoordinate49.setPoint(new float[]{0.189888,0.396978,0.350445,0.396978,0.350445,0.616758,0.189888,0.616758}, 8);
IndexedFaceSet48.setTexCoord(&TextureCoordinate49);

Coordinate& Coordinate50 =  Coordinate();
Coordinate50.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet48.setCoord(&Coordinate50);

Shape45.setGeometry(&IndexedFaceSet48);

Transform44.addChild(&Shape45);

Transform43.addChild(&Transform44);

Switch34.addChild(&Transform43);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("b3"));
Transform& Transform52 =  Transform();
Transform52.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape53 =  Shape();
Appearance& Appearance54 =  Appearance();
ImageTexture& ImageTexture55 =  ImageTexture();
ImageTexture55.setUSE(CString("_2"));
Appearance54.addChild(&ImageTexture55);

Shape53.addChild(&Appearance54);

IndexedFaceSet& IndexedFaceSet56 =  IndexedFaceSet();
IndexedFaceSet56.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate57 =  TextureCoordinate();
TextureCoordinate57.setPoint(new float[]{0.605089,0.382986,0.793862,0.382986,0.793862,0.627253,0.605089,0.627253}, 8);
IndexedFaceSet56.setTexCoord(&TextureCoordinate57);

Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet56.setCoord(&Coordinate58);

Shape53.setGeometry(&IndexedFaceSet56);

Transform52.addChild(&Shape53);

Transform51.addChild(&Transform52);

Switch34.addChild(&Transform51);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("b4"));
Transform59.setTranslation(new float[]{0.00122404,0.021184,0.0});
Transform& Transform60 =  Transform();
Transform60.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
ImageTexture& ImageTexture63 =  ImageTexture();
ImageTexture63.setUSE(CString("_2"));
Appearance62.addChild(&ImageTexture63);

Shape61.addChild(&Appearance62);

IndexedFaceSet& IndexedFaceSet64 =  IndexedFaceSet();
IndexedFaceSet64.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate65 =  TextureCoordinate();
TextureCoordinate65.setPoint(new float[]{0.313272,0.859763,0.632335,0.859763,0.632335,0.999829,0.313272,0.999829}, 8);
IndexedFaceSet64.setTexCoord(&TextureCoordinate65);

Coordinate& Coordinate66 =  Coordinate();
Coordinate66.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet64.setCoord(&Coordinate66);

Shape61.setGeometry(&IndexedFaceSet64);

Transform60.addChild(&Shape61);

Transform59.addChild(&Transform60);

Switch34.addChild(&Transform59);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("b5"));
Transform& Transform68 =  Transform();
Transform68.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
ImageTexture& ImageTexture71 =  ImageTexture();
ImageTexture71.setUSE(CString("_2"));
Appearance70.addChild(&ImageTexture71);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate73 =  TextureCoordinate();
TextureCoordinate73.setPoint(new float[]{0.101275,0.224853,0.872576,0.224853,0.872576,0.419975,0.101275,0.419975}, 8);
IndexedFaceSet72.setTexCoord(&TextureCoordinate73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet72.setCoord(&Coordinate74);

Shape69.setGeometry(&IndexedFaceSet72);

Transform68.addChild(&Shape69);

Transform67.addChild(&Transform68);

Switch34.addChild(&Transform67);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("b6"));
Transform& Transform76 =  Transform();
Transform76.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
ImageTexture& ImageTexture79 =  ImageTexture();
ImageTexture79.setUSE(CString("_2"));
Appearance78.addChild(&ImageTexture79);

Shape77.addChild(&Appearance78);

IndexedFaceSet& IndexedFaceSet80 =  IndexedFaceSet();
IndexedFaceSet80.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate81 =  TextureCoordinate();
TextureCoordinate81.setPoint(new float[]{0.307175,0.132377,0.657426,0.132377,0.657426,0.238935,0.307175,0.238935}, 8);
IndexedFaceSet80.setTexCoord(&TextureCoordinate81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet80.setCoord(&Coordinate82);

Shape77.setGeometry(&IndexedFaceSet80);

Transform76.addChild(&Shape77);

Transform75.addChild(&Transform76);

Switch34.addChild(&Transform75);

Transform& Transform83 =  Transform();
Transform83.setDEF(CString("b7"));
Transform& Transform84 =  Transform();
Transform84.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
ImageTexture& ImageTexture87 =  ImageTexture();
ImageTexture87.setUSE(CString("_2"));
Appearance86.addChild(&ImageTexture87);

Shape85.addChild(&Appearance86);

IndexedFaceSet& IndexedFaceSet88 =  IndexedFaceSet();
IndexedFaceSet88.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate89 =  TextureCoordinate();
TextureCoordinate89.setPoint(new float[]{0.00252092,-0.00484368,1.9929,-0.00484368,1.9929,0.99911,0.00252092,0.99911}, 8);
IndexedFaceSet88.setTexCoord(&TextureCoordinate89);

Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet88.setCoord(&Coordinate90);

Shape85.setGeometry(&IndexedFaceSet88);

Transform84.addChild(&Shape85);

Transform83.addChild(&Transform84);

Switch34.addChild(&Transform83);

Transform& Transform91 =  Transform();
Transform91.setDEF(CString("b8"));
Transform& Transform92 =  Transform();
Transform92.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape93 =  Shape();
Appearance& Appearance94 =  Appearance();
ImageTexture& ImageTexture95 =  ImageTexture();
ImageTexture95.setUSE(CString("_2"));
Appearance94.addChild(&ImageTexture95);

Shape93.addChild(&Appearance94);

IndexedFaceSet& IndexedFaceSet96 =  IndexedFaceSet();
IndexedFaceSet96.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate97 =  TextureCoordinate();
TextureCoordinate97.setPoint(new float[]{0.0125727,0.377203,0.961608,0.377203,0.961608,0.988468,0.0125727,0.988468}, 8);
IndexedFaceSet96.setTexCoord(&TextureCoordinate97);

Coordinate& Coordinate98 =  Coordinate();
Coordinate98.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet96.setCoord(&Coordinate98);

Shape93.setGeometry(&IndexedFaceSet96);

Transform92.addChild(&Shape93);

Transform91.addChild(&Transform92);

Switch34.addChild(&Transform91);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("b9"));
Transform& Transform100 =  Transform();
Transform100.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape101 =  Shape();
Appearance& Appearance102 =  Appearance();
ImageTexture& ImageTexture103 =  ImageTexture();
ImageTexture103.setUSE(CString("_2"));
Appearance102.addChild(&ImageTexture103);

Shape101.addChild(&Appearance102);

IndexedFaceSet& IndexedFaceSet104 =  IndexedFaceSet();
IndexedFaceSet104.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate105 =  TextureCoordinate();
TextureCoordinate105.setPoint(new float[]{0.0,0.0,0.988054,0.0,0.988054,0.476856,0.0,0.476856}, 8);
IndexedFaceSet104.setTexCoord(&TextureCoordinate105);

Coordinate& Coordinate106 =  Coordinate();
Coordinate106.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet104.setCoord(&Coordinate106);

Shape101.setGeometry(&IndexedFaceSet104);

Transform100.addChild(&Shape101);

Transform99.addChild(&Transform100);

Switch34.addChild(&Transform99);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("b10"));
Transform& Transform108 =  Transform();
Transform108.setScale(new float[]{12.57,8.426,4.32121});
Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
ImageTexture& ImageTexture111 =  ImageTexture();
ImageTexture111.setUSE(CString("_2"));
Appearance110.addChild(&ImageTexture111);

Shape109.addChild(&Appearance110);

IndexedFaceSet& IndexedFaceSet112 =  IndexedFaceSet();
IndexedFaceSet112.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate113 =  TextureCoordinate();
TextureCoordinate113.setPoint(new float[]{0.0,0.0,4.99271,0.0,4.99271,2.99489,0.0,2.99489}, 8);
IndexedFaceSet112.setTexCoord(&TextureCoordinate113);

Coordinate& Coordinate114 =  Coordinate();
Coordinate114.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet112.setCoord(&Coordinate114);

Shape109.setGeometry(&IndexedFaceSet112);

Transform108.addChild(&Shape109);

Transform107.addChild(&Transform108);

Switch34.addChild(&Transform107);

Transform33.addChild(&Switch34);

Transform32.addChild(&Transform33);

Scene7.addChild(&Transform32);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("Random"));
ProtoInstance& ProtoInstance116 =  ProtoInstance();
ProtoInstance116.setName(CString("Random"));
ProtoInstance116.setDEF(CString("_3"));
fieldValue& fieldValue117 =  fieldValue();
fieldValue117.setName(CString("value"));
fieldValue117.setValue(CString("9"));
ProtoInstance116.addChild(&fieldValue117);

fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(CString("numValues"));
fieldValue118.setValue(CString("9"));
ProtoInstance116.addChild(&fieldValue118);

Transform115.addChild(&ProtoInstance116);

Scene7.addChild(&Transform115);

Transform& Transform119 =  Transform();
Transform119.setDEF(CString("Door"));
Transform& Transform120 =  Transform();
Transform120.setDEF(CString("Import"));
ProtoInstance& ProtoInstance121 =  ProtoInstance();
ProtoInstance121.setName(CString("Import"));
ProtoInstance121.setDEF(CString("_4"));
fieldValue& fieldValue122 =  fieldValue();
fieldValue122.setName(CString("url"));
fieldValue122.setValue(CString("\"schachttor.x3d\""));
ProtoInstance121.addChild(&fieldValue122);

fieldValue& fieldValue123 =  fieldValue();
fieldValue123.setName(CString("startTime"));
fieldValue123.setValue(CString("1"));
ProtoInstance121.addChild(&fieldValue123);

Transform120.addChild(&ProtoInstance121);

Transform119.addChild(&Transform120);

Transform& Transform124 =  Transform();
Transform124.setDEF(CString("World"));
ProtoInstance& ProtoInstance125 =  ProtoInstance();
ProtoInstance125.setName(CString("World"));
ProtoInstance125.setDEF(CString("_5"));
Transform124.addChild(&ProtoInstance125);

Transform119.addChild(&Transform124);

Transform& Transform126 =  Transform();
Transform126.setDEF(CString("door"));
Transform126.setTranslation(new float[]{-0.00000340492,-0.0552902,0.279499});
Transform119.addChild(&Transform126);

Scene7.addChild(&Transform119);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromNode(CString("_3"));
ROUTE127.setFromField(CString("whichChoice_changed"));
ROUTE127.setToNode(CString("_1"));
ROUTE127.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromNode(CString("_5"));
ROUTE128.setFromField(CString("enterTime"));
ROUTE128.setToNode(CString("_3"));
ROUTE128.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromNode(CString("_4"));
ROUTE129.setFromField(CString("children_changed"));
ROUTE129.setToNode(CString("_5"));
ROUTE129.setToField(CString("set_scene"));
Scene7.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromNode(CString("_4"));
ROUTE130.setFromField(CString("children_changed"));
ROUTE130.setToNode(CString("door"));
ROUTE130.setToField(CString("set_children"));
Scene7.addChild(&ROUTE130);

X3D0.setScene(&Scene7);

//}
