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
meta3.setContent(CString("Thu, 12 Mar 2015 07:11:12 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 12 Mar 2015 07:11:34 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorlds, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group8.addChild(&WorldInfo9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("Fire_1"));
TimeSensor& TimeSensor11 =  TimeSensor();
TimeSensor11.setDEF(CString("_1"));
TimeSensor11.setLoop(True);
Transform10.addChild(&TimeSensor11);

Script& Script12 =  Script();
Script12.setDEF(CString("_player"));
field& field13 =  field();
field13.setName(CString("whichChoice_changed"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFInt32"));
Script12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("isActive"));
field14.setAccessType(CString("inputOnly"));
field14.setType(CString("SFBool"));
Script12.addChild(&field14);

field& field15 =  field();
field15.setName(CString("set_time"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFTime"));
Script12.addChild(&field15);

field& field16 =  field();
field16.setName(CString("maxChoice"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFInt32"));
field16.setValue(CString("6"));
Script12.addChild(&field16);

field& field17 =  field();
field17.setName(CString("count"));
field17.setAccessType(CString("initializeOnly"));
field17.setType(CString("SFInt32"));
Script12.addChild(&field17);

field& field18 =  field();
field18.setName(CString("fps"));
field18.setAccessType(CString("initializeOnly"));
field18.setType(CString("SFInt32"));
field18.setValue(CString("12"));
Script12.addChild(&field18);

field& field19 =  field();
field19.setName(CString("last"));
field19.setAccessType(CString("initializeOnly"));
field19.setType(CString("SFTime"));
Script12.addChild(&field19);


Script12.setSourceCode(CString("vrmlscript:")+
_T("function set_time(value, time)")+
_T("{")+
_T("	if (time - last > 1 / fps){")+
_T("		last = time;")+
_T("		if(++count > maxChoice) count = 0;")+
_T("		whichChoice_changed = count;")+
_T("	}")+
_T("}")+
_T("function isActive(value, time)")+
_T("{")+
_T("	whichChoice_changed = -1;")+
_T("}"));
Transform10.addChild(&Script12);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{0,8.27842e-10,0});
Billboard& Billboard21 =  Billboard();
Transform& Transform22 =  Transform();
Transform22.setDEF(CString("Fire"));
Transform22.setTranslation(new float[]{0,-8.27842e-10,0});
Switch& Switch23 =  Switch();
Switch23.setDEF(CString("_2"));
Switch23.setWhichChoice(6);
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
ImageTexture& ImageTexture26 =  ImageTexture();
ImageTexture26.setUrl(new CString[]{CString("torch.1.png")}, 1);
Appearance25.addChild(&ImageTexture26);

Shape24.addChild(&Appearance25);

IndexedFaceSet& IndexedFaceSet27 =  IndexedFaceSet();
IndexedFaceSet27.setSolid(False);
IndexedFaceSet27.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate28 =  TextureCoordinate();
TextureCoordinate28.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet27.setTexCoord(&TextureCoordinate28);

Coordinate& Coordinate29 =  Coordinate();
Coordinate29.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet27.setCoord(&Coordinate29);

Shape24.setGeometry(&IndexedFaceSet27);

Switch23.addChild(&Shape24);

Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("torch.2.png")}, 1);
Appearance31.addChild(&ImageTexture32);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setSolid(False);
IndexedFaceSet33.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate34 =  TextureCoordinate();
TextureCoordinate34.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet33.setTexCoord(&TextureCoordinate34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet33.setCoord(&Coordinate35);

Shape30.setGeometry(&IndexedFaceSet33);

Switch23.addChild(&Shape30);

Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
ImageTexture& ImageTexture38 =  ImageTexture();
ImageTexture38.setUrl(new CString[]{CString("torch.3.png")}, 1);
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

Switch23.addChild(&Shape36);

Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
ImageTexture& ImageTexture44 =  ImageTexture();
ImageTexture44.setUrl(new CString[]{CString("torch.4.png")}, 1);
Appearance43.addChild(&ImageTexture44);

Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setSolid(False);
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate46 =  TextureCoordinate();
TextureCoordinate46.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet45.setTexCoord(&TextureCoordinate46);

Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet45.setCoord(&Coordinate47);

Shape42.setGeometry(&IndexedFaceSet45);

Switch23.addChild(&Shape42);

Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUrl(new CString[]{CString("torch.5.png")}, 1);
Appearance49.addChild(&ImageTexture50);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setSolid(False);
IndexedFaceSet51.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate52 =  TextureCoordinate();
TextureCoordinate52.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet51.setTexCoord(&TextureCoordinate52);

Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet51.setCoord(&Coordinate53);

Shape48.setGeometry(&IndexedFaceSet51);

Switch23.addChild(&Shape48);

Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
ImageTexture& ImageTexture56 =  ImageTexture();
ImageTexture56.setUrl(new CString[]{CString("torch.6.png")}, 1);
Appearance55.addChild(&ImageTexture56);

Shape54.addChild(&Appearance55);

IndexedFaceSet& IndexedFaceSet57 =  IndexedFaceSet();
IndexedFaceSet57.setSolid(False);
IndexedFaceSet57.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate58 =  TextureCoordinate();
TextureCoordinate58.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet57.setTexCoord(&TextureCoordinate58);

Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet57.setCoord(&Coordinate59);

Shape54.setGeometry(&IndexedFaceSet57);

Switch23.addChild(&Shape54);

Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
ImageTexture& ImageTexture62 =  ImageTexture();
ImageTexture62.setUrl(new CString[]{CString("torch.7.png")}, 1);
Appearance61.addChild(&ImageTexture62);

Shape60.addChild(&Appearance61);

IndexedFaceSet& IndexedFaceSet63 =  IndexedFaceSet();
IndexedFaceSet63.setSolid(False);
IndexedFaceSet63.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate64 =  TextureCoordinate();
TextureCoordinate64.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet63.setTexCoord(&TextureCoordinate64);

Coordinate& Coordinate65 =  Coordinate();
Coordinate65.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet63.setCoord(&Coordinate65);

Shape60.setGeometry(&IndexedFaceSet63);

Switch23.addChild(&Shape60);

Transform22.addChild(&Switch23);

Billboard21.addChild(&Transform22);

Transform20.addChild(&Billboard21);

Transform10.addChild(&Transform20);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("VisibilitySensor"));
VisibilitySensor& VisibilitySensor67 =  VisibilitySensor();
VisibilitySensor67.setDEF(CString("_3"));
VisibilitySensor67.setSize(new float[]{1,1,1});
Transform66.addChild(&VisibilitySensor67);

Transform10.addChild(&Transform66);

Group8.addChild(&Transform10);

Scene7.addChild(&Group8);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("_3"));
ROUTE68.setFromField(CString("isActive"));
ROUTE68.setToNode(CString("_1"));
ROUTE68.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("_1"));
ROUTE69.setFromField(CString("isActive"));
ROUTE69.setToNode(CString("_player"));
ROUTE69.setToField(CString("isActive"));
Scene7.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("_1"));
ROUTE70.setFromField(CString("time"));
ROUTE70.setToNode(CString("_player"));
ROUTE70.setToField(CString("set_time"));
Scene7.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("_player"));
ROUTE71.setFromField(CString("whichChoice_changed"));
ROUTE71.setToNode(CString("_2"));
ROUTE71.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE71);

X3D0.setScene(&Scene7);

}
