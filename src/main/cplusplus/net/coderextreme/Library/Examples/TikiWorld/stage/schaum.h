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
meta3.setContent(CString("Fri, 13 Nov 2015 10:12:48 GMT"));
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
meta6.setContent(CString("Fri, 13 Nov 2015 10:12:48 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Switch& Switch9 =  Switch();
Switch9.setDEF(CString("_1"));
Switch9.setWhichChoice(9);
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("schaum.1.png")}, 1);
Appearance11.addChild(&ImageTexture12);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setDEF(CString("imageIndexedFaceSet"));
IndexedFaceSet13.setSolid(false);
IndexedFaceSet13.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate14 =  TextureCoordinate();
TextureCoordinate14.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet13.setTexCoord(&TextureCoordinate14);

Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}, 12);
IndexedFaceSet13.setCoord(&Coordinate15);

Shape10.setGeometry(&IndexedFaceSet13);

Switch9.addChild(&Shape10);

Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
ImageTexture& ImageTexture18 =  ImageTexture();
ImageTexture18.setUrl(new CString[]{CString("schaum.2.png")}, 1);
Appearance17.addChild(&ImageTexture18);

Shape16.addChild(&Appearance17);

IndexedFaceSet& IndexedFaceSet19 =  IndexedFaceSet();
IndexedFaceSet19.setUSE(CString("imageIndexedFaceSet"));
Shape16.setGeometry(&IndexedFaceSet19);

Switch9.addChild(&Shape16);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setUrl(new CString[]{CString("schaum.3.png")}, 1);
Appearance21.addChild(&ImageTexture22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setUSE(CString("imageIndexedFaceSet"));
Shape20.setGeometry(&IndexedFaceSet23);

Switch9.addChild(&Shape20);

Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("schaum.4.png")}, 1);
Appearance25.addChild(&ImageTexture26);

Shape24.addChild(&Appearance25);

IndexedFaceSet& IndexedFaceSet27 =  IndexedFaceSet();
IndexedFaceSet27.setUSE(CString("imageIndexedFaceSet"));
Shape24.setGeometry(&IndexedFaceSet27);

Switch9.addChild(&Shape24);

Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
ImageTexture& ImageTexture30 =  ImageTexture();
ImageTexture30.setUrl(new CString[]{CString("schaum.5.png")}, 1);
Appearance29.addChild(&ImageTexture30);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setUSE(CString("imageIndexedFaceSet"));
Shape28.setGeometry(&IndexedFaceSet31);

Switch9.addChild(&Shape28);

Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
ImageTexture& ImageTexture34 =  ImageTexture();
ImageTexture34.setUrl(new CString[]{CString("schaum.6.png")}, 1);
Appearance33.addChild(&ImageTexture34);

Shape32.addChild(&Appearance33);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setUSE(CString("imageIndexedFaceSet"));
Shape32.setGeometry(&IndexedFaceSet35);

Switch9.addChild(&Shape32);

Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
ImageTexture& ImageTexture38 =  ImageTexture();
ImageTexture38.setUrl(new CString[]{CString("schaum.7.png")}, 1);
Appearance37.addChild(&ImageTexture38);

Shape36.addChild(&Appearance37);

IndexedFaceSet& IndexedFaceSet39 =  IndexedFaceSet();
IndexedFaceSet39.setUSE(CString("imageIndexedFaceSet"));
Shape36.setGeometry(&IndexedFaceSet39);

Switch9.addChild(&Shape36);

Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
ImageTexture& ImageTexture42 =  ImageTexture();
ImageTexture42.setUrl(new CString[]{CString("schaum.8.png")}, 1);
Appearance41.addChild(&ImageTexture42);

Shape40.addChild(&Appearance41);

IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setUSE(CString("imageIndexedFaceSet"));
Shape40.setGeometry(&IndexedFaceSet43);

Switch9.addChild(&Shape40);

Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
ImageTexture& ImageTexture46 =  ImageTexture();
ImageTexture46.setUrl(new CString[]{CString("schaum.9.png")}, 1);
Appearance45.addChild(&ImageTexture46);

Shape44.addChild(&Appearance45);

IndexedFaceSet& IndexedFaceSet47 =  IndexedFaceSet();
IndexedFaceSet47.setUSE(CString("imageIndexedFaceSet"));
Shape44.setGeometry(&IndexedFaceSet47);

Switch9.addChild(&Shape44);

Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUrl(new CString[]{CString("schaum.10.png")}, 1);
Appearance49.addChild(&ImageTexture50);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setUSE(CString("imageIndexedFaceSet"));
Shape48.setGeometry(&IndexedFaceSet51);

Switch9.addChild(&Shape48);

Scene7.addChild(&Switch9);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("SwitchAnimProto"));
Transform52.setTranslation(new float[]{194.603,-200.333,-268.553});
TimeSensor& TimeSensor53 =  TimeSensor();
TimeSensor53.setDEF(CString("animTime"));
TimeSensor53.setLoop(true);
Transform52.addChild(&TimeSensor53);

Script& Script54 =  Script();
Script54.setDEF(CString("_animScript1"));
field& field55 =  field();
field55.setName(CString("whichChoice_changed"));
field55.setAccessType(CString("outputOnly"));
field55.setType(CString("SFInt32"));
Script54.addChild(&field55);

field& field56 =  field();
field56.setName(CString("set_time"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFTime"));
Script54.addChild(&field56);

field& field57 =  field();
field57.setName(CString("fps"));
field57.setAccessType(CString("initializeOnly"));
field57.setType(CString("SFFloat"));
field57.setValue(CString("10"));
Script54.addChild(&field57);

field& field58 =  field();
field58.setName(CString("max"));
field58.setAccessType(CString("initializeOnly"));
field58.setType(CString("SFFloat"));
field58.setValue(CString("9"));
Script54.addChild(&field58);

field& field59 =  field();
field59.setName(CString("lastTime"));
field59.setAccessType(CString("initializeOnly"));
field59.setType(CString("SFTime"));
Script54.addChild(&field59);

field& field60 =  field();
field60.setName(CString("dt"));
field60.setAccessType(CString("initializeOnly"));
field60.setType(CString("SFFloat"));
field60.setValue(CString("0.0833333"));
Script54.addChild(&field60);


//Script54.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	dt = 1/12;")+
//_T("}")+
//_T("function set_time(value, time)")+
//_T("{")+
//_T("	if (time - lastTime > dt){")+
//_T("		if (whichChoice_changed == max) whichChoice_changed = 0;")+
//_T("		else whichChoice_changed ++;")+
//_T("		lastTime = time;")+
//_T("	}")+
//_T("}"));
Transform52.addChild(&Script54);

Scene7.addChild(&Transform52);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Visibility"));
VisibilitySensor& VisibilitySensor62 =  VisibilitySensor();
VisibilitySensor62.setDEF(CString("_2"));
VisibilitySensor62.setSize(new float[]{1.0,1.0,1.0});
Transform61.addChild(&VisibilitySensor62);

Scene7.addChild(&Transform61);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("_animScript1"));
ROUTE63.setFromField(CString("whichChoice_changed"));
ROUTE63.setToNode(CString("_1"));
ROUTE63.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("_2"));
ROUTE64.setFromField(CString("isActive"));
ROUTE64.setToNode(CString("animTime"));
ROUTE64.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("animTime"));
ROUTE65.setFromField(CString("time"));
ROUTE65.setToNode(CString("_animScript1"));
ROUTE65.setToField(CString("set_time"));
Scene7.addChild(&ROUTE65);

X3D0.setScene(&Scene7);

//}
