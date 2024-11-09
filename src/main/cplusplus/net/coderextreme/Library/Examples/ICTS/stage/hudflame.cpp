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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:06 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:06 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Slider"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Slider_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("set_translation"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("keyValue"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("MFFloat"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("value_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("planeSensor"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFNode"));
ExternProtoDeclare8.addChild(&field12);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo13);

Switch& Switch14 =  Switch();
Switch14.setWhichChoice(1);
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("Fire_1"));
Transform15.setTranslation(new float[]{0,0.678885,0});
Transform15.setScale(new float[]{1.35777,1.35777,1.35777});
TimeSensor& TimeSensor16 =  TimeSensor();
TimeSensor16.setDEF(CString("_1"));
TimeSensor16.setLoop(True);
Transform15.addChild(&TimeSensor16);

Script& Script17 =  Script();
Script17.setDEF(CString("_player"));
field& field18 =  field();
field18.setName(CString("whichChoice_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFInt32"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("isActive"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFBool"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("set_time"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("maxChoice"));
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFInt32"));
field21.setValue(CString("6"));
Script17.addChild(&field21);

field& field22 =  field();
field22.setName(CString("count"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFInt32"));
Script17.addChild(&field22);

field& field23 =  field();
field23.setName(CString("fps"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFInt32"));
field23.setValue(CString("12"));
Script17.addChild(&field23);

field& field24 =  field();
field24.setName(CString("last"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFTime"));
Script17.addChild(&field24);


Script17.setSourceCode(CString("vrmlscript:")+
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
Transform15.addChild(&Script17);

Transform& Transform25 =  Transform();
Transform25.setDEF(CString("Fire"));
Switch& Switch26 =  Switch();
Switch26.setDEF(CString("_2"));
Switch26.setWhichChoice(6);
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
ImageTexture& ImageTexture29 =  ImageTexture();
ImageTexture29.setUrl(new CString[]{CString("flame.1.png")}, 1);
ImageTexture29.setRepeatS(False);
ImageTexture29.setRepeatT(False);
Appearance28.addChild(&ImageTexture29);

TextureTransform& TextureTransform30 =  TextureTransform();
TextureTransform30.setDEF(CString("_3"));
TextureTransform30.setTranslation(new float[]{0.03,0.03});
TextureTransform30.setScale(new float[]{0.972768,0.972768});
Appearance28.setTextureTransform(TextureTransform30);

Shape27.addChild(&Appearance28);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setSolid(False);
IndexedFaceSet31.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate32 =  TextureCoordinate();
TextureCoordinate32.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet31.setTexCoord(&TextureCoordinate32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet31.setCoord(&Coordinate33);

Shape27.setGeometry(&IndexedFaceSet31);

Switch26.addChild(&Shape27);

Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
ImageTexture& ImageTexture36 =  ImageTexture();
ImageTexture36.setUrl(new CString[]{CString("flame.2.png")}, 1);
ImageTexture36.setRepeatS(False);
ImageTexture36.setRepeatT(False);
Appearance35.addChild(&ImageTexture36);

TextureTransform& TextureTransform37 =  TextureTransform();
TextureTransform37.setUSE(CString("_3"));
Appearance35.setTextureTransform(TextureTransform37);

Shape34.addChild(&Appearance35);

IndexedFaceSet& IndexedFaceSet38 =  IndexedFaceSet();
IndexedFaceSet38.setSolid(False);
IndexedFaceSet38.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate39 =  TextureCoordinate();
TextureCoordinate39.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet38.setTexCoord(&TextureCoordinate39);

Coordinate& Coordinate40 =  Coordinate();
Coordinate40.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet38.setCoord(&Coordinate40);

Shape34.setGeometry(&IndexedFaceSet38);

Switch26.addChild(&Shape34);

Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
ImageTexture& ImageTexture43 =  ImageTexture();
ImageTexture43.setUrl(new CString[]{CString("flame.3.png")}, 1);
ImageTexture43.setRepeatS(False);
ImageTexture43.setRepeatT(False);
Appearance42.addChild(&ImageTexture43);

TextureTransform& TextureTransform44 =  TextureTransform();
TextureTransform44.setUSE(CString("_3"));
Appearance42.setTextureTransform(TextureTransform44);

Shape41.addChild(&Appearance42);

IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setSolid(False);
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate46 =  TextureCoordinate();
TextureCoordinate46.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet45.setTexCoord(&TextureCoordinate46);

Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet45.setCoord(&Coordinate47);

Shape41.setGeometry(&IndexedFaceSet45);

Switch26.addChild(&Shape41);

Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUrl(new CString[]{CString("flame.4.png")}, 1);
ImageTexture50.setRepeatS(False);
ImageTexture50.setRepeatT(False);
Appearance49.addChild(&ImageTexture50);

TextureTransform& TextureTransform51 =  TextureTransform();
TextureTransform51.setUSE(CString("_3"));
Appearance49.setTextureTransform(TextureTransform51);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setSolid(False);
IndexedFaceSet52.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate53 =  TextureCoordinate();
TextureCoordinate53.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet52.setTexCoord(&TextureCoordinate53);

Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet52.setCoord(&Coordinate54);

Shape48.setGeometry(&IndexedFaceSet52);

Switch26.addChild(&Shape48);

Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
ImageTexture& ImageTexture57 =  ImageTexture();
ImageTexture57.setUrl(new CString[]{CString("flame.5.png")}, 1);
ImageTexture57.setRepeatS(False);
ImageTexture57.setRepeatT(False);
Appearance56.addChild(&ImageTexture57);

TextureTransform& TextureTransform58 =  TextureTransform();
TextureTransform58.setUSE(CString("_3"));
Appearance56.setTextureTransform(TextureTransform58);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet59 =  IndexedFaceSet();
IndexedFaceSet59.setSolid(False);
IndexedFaceSet59.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate60 =  TextureCoordinate();
TextureCoordinate60.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet59.setTexCoord(&TextureCoordinate60);

Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet59.setCoord(&Coordinate61);

Shape55.setGeometry(&IndexedFaceSet59);

Switch26.addChild(&Shape55);

Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
ImageTexture& ImageTexture64 =  ImageTexture();
ImageTexture64.setUrl(new CString[]{CString("flame.6.png")}, 1);
ImageTexture64.setRepeatS(False);
ImageTexture64.setRepeatT(False);
Appearance63.addChild(&ImageTexture64);

TextureTransform& TextureTransform65 =  TextureTransform();
TextureTransform65.setUSE(CString("_3"));
Appearance63.setTextureTransform(TextureTransform65);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet66 =  IndexedFaceSet();
IndexedFaceSet66.setSolid(False);
IndexedFaceSet66.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate67 =  TextureCoordinate();
TextureCoordinate67.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet66.setTexCoord(&TextureCoordinate67);

Coordinate& Coordinate68 =  Coordinate();
Coordinate68.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet66.setCoord(&Coordinate68);

Shape62.setGeometry(&IndexedFaceSet66);

Switch26.addChild(&Shape62);

Transform& Transform69 =  Transform();
Transform69.setTranslation(new float[]{-0.0734722,0,0});
Transform69.setScale(new float[]{0.853056,1,1});
Shape& Shape70 =  Shape();
Appearance& Appearance71 =  Appearance();
ImageTexture& ImageTexture72 =  ImageTexture();
ImageTexture72.setUrl(new CString[]{CString("flame.7.png")}, 1);
ImageTexture72.setRepeatS(False);
ImageTexture72.setRepeatT(False);
Appearance71.addChild(&ImageTexture72);

TextureTransform& TextureTransform73 =  TextureTransform();
TextureTransform73.setUSE(CString("_3"));
Appearance71.setTextureTransform(TextureTransform73);

Shape70.addChild(&Appearance71);

IndexedFaceSet& IndexedFaceSet74 =  IndexedFaceSet();
IndexedFaceSet74.setSolid(False);
IndexedFaceSet74.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate75 =  TextureCoordinate();
TextureCoordinate75.setPoint(new float[]{0,0,1,0,1,1,0,1}, 8);
IndexedFaceSet74.setTexCoord(&TextureCoordinate75);

Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0}, 12);
IndexedFaceSet74.setCoord(&Coordinate76);

Shape70.setGeometry(&IndexedFaceSet74);

Transform69.addChild(&Shape70);

Switch26.addChild(&Transform69);

Transform25.addChild(&Switch26);

Transform15.addChild(&Transform25);

Switch14.addChild(&Transform15);

Transform& Transform77 =  Transform();
Switch14.addChild(&Transform77);

Scene7.addChild(&Switch14);

PointLight& PointLight78 =  PointLight();
PointLight78.setDEF(CString("Light1"));
PointLight78.setColor(new float[]{1,0.8,0});
PointLight78.setIntensity(0.9);
PointLight78.setAttenuation(new float[]{0.1,0,0.01});
PointLight78.setLocation(new float[]{0,0.497334,0.00961055});
Scene7.addChild(&PointLight78);

Sound& Sound79 =  Sound();
Sound79.setDEF(CString("Sound1"));
Sound79.setSpatialize(False);
AudioClip& AudioClip80 =  AudioClip();
AudioClip80.setDEF(CString("Sound1clip"));
AudioClip80.setUrl(new CString[]{CString("egypt.mid")}, 1);
Sound79.setSource(AudioClip80);

Scene7.addChild(&Sound79);

TimeSensor& TimeSensor81 =  TimeSensor();
TimeSensor81.setDEF(CString("enterWorldTimeSensor"));
TimeSensor81.setLoop(True);
TimeSensor81.setStartTime(1);
Scene7.addChild(&TimeSensor81);

Script& Script82 =  Script();
Script82.setDEF(CString("enterWorldScript"));
field& field83 =  field();
field83.setName(CString("startTime"));
field83.setAccessType(CString("outputOnly"));
field83.setType(CString("SFTime"));
Script82.addChild(&field83);

field& field84 =  field();
field84.setName(CString("firstTime"));
field84.setAccessType(CString("outputOnly"));
field84.setType(CString("SFBool"));
Script82.addChild(&field84);

field& field85 =  field();
field85.setName(CString("triggerIn"));
field85.setAccessType(CString("inputOnly"));
field85.setType(CString("SFTime"));
Script82.addChild(&field85);


Script82.setSourceCode(CString("vrmlscript:function triggerIn(value, time) {")+
_T("         // fire off a single round                                     ")+
_T("         startTime = value;                                             ")+
_T("         firstTime = FALSE;                                             ")+
_T("       }"));
Scene7.addChild(&Script82);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(CString("_1"));
ROUTE86.setFromField(CString("isActive"));
ROUTE86.setToNode(CString("_player"));
ROUTE86.setToField(CString("isActive"));
Scene7.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("_1"));
ROUTE87.setFromField(CString("time"));
ROUTE87.setToNode(CString("_player"));
ROUTE87.setToField(CString("set_time"));
Scene7.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("_player"));
ROUTE88.setFromField(CString("whichChoice_changed"));
ROUTE88.setToNode(CString("_2"));
ROUTE88.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("enterWorldScript"));
ROUTE89.setFromField(CString("startTime"));
ROUTE89.setToNode(CString("Sound1clip"));
ROUTE89.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("enterWorldScript"));
ROUTE90.setFromField(CString("firstTime"));
ROUTE90.setToNode(CString("enterWorldTimeSensor"));
ROUTE90.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("enterWorldTimeSensor"));
ROUTE91.setFromField(CString("time"));
ROUTE91.setToNode(CString("enterWorldScript"));
ROUTE91.setToField(CString("triggerIn"));
Scene7.addChild(&ROUTE91);

X3D0.setScene(&Scene7);

}
