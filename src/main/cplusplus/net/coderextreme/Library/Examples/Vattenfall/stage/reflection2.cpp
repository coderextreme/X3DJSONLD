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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("ReflectiveTextureTransform"));
ExternProtoDeclare8.setUrl(new CString[]{CString("ReflectiveTextureTransform_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("translation"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("position"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("distance"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("textureTransform"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFNode"));
ExternProtoDeclare8.addChild(&field12);

Scene7.addChild(&ExternProtoDeclare8);

WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo13);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("reflect"));
Transform14.setTranslation(new float[]{0.0899906,13.5733,0.140636});
Transform14.setScale(new float[]{12.7869,23.5669,3.17457});
Transform14.setCenter(new float[]{1.44509,0.080182,0.0304624});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
ImageTexture& ImageTexture17 =  ImageTexture();
ImageTexture17.setUrl(new CString[]{CString("street-ref.jpg")}, 1);
Appearance16.addChild(&ImageTexture17);

TextureTransform& TextureTransform18 =  TextureTransform();
TextureTransform18.setDEF(CString("_1"));
TextureTransform18.setCenter(new float[]{-0.5,-0.5});
Appearance16.setTextureTransform(TextureTransform18);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet19 =  IndexedFaceSet();
IndexedFaceSet19.setTexCoordIndex(new int32_t[]{11,12,16,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,10,16,13,-1,10,11,16,-1,12,14,16,-1,14,15,16,-1,11,10,9,-1,10,8,9,-1,6,7,8,-1,7,9,8,-1,20,18,17,-1,20,19,18,-1}, 60);
IndexedFaceSet19.setCoordIndex(new int32_t[]{10,12,13,-1,1,4,2,-1,4,5,2,-1,0,1,3,-1,1,2,3,-1,11,13,14,-1,11,10,13,-1,12,15,13,-1,15,16,13,-1,10,11,8,-1,11,9,8,-1,6,7,9,-1,7,8,9,-1,20,18,17,-1,20,19,18,-1}, 60);
TextureCoordinate& TextureCoordinate20 =  TextureCoordinate();
TextureCoordinate20.setPoint(new float[]{0.25601,0,0.25601,0.648441,0,0.648441,0,0,0.25601,0.998373,0,0.998373,0.995929,0.702952,0.995929,0.998373,0.770796,0.701656,0.770527,0.998373,0.515267,0.701656,0.515267,0.998373,0.316074,0.998373,0.316074,0.701656,0.258103,0.998373,0.258103,0.810909,0.316074,0.81091,0.990453,0.0212353,0.195997,0.0212353,0.195997,0.755931,0.990453,0.755931}, 42);
IndexedFaceSet19.setTexCoord(&TextureCoordinate20);

Coordinate& Coordinate21 =  Coordinate();
Coordinate21.setPoint(new float[]{0.5,-0.339636,0,0.5,0.205706,0,-0.5,0.205706,0,-0.5,-0.339636,0,0.5,0.5,0,-0.5,0.5,0,3.39019,0.25155,0,3.39019,0.5,0,2.50975,0.5,0,2.5108,0.25046,0,1.51268,0.5,0,1.51268,0.25046,0,0.734612,0.5,0,0.734612,0.342343,0,0.734612,0.25046,0,0.508174,0.5,0,0.508174,0.342342,0,3.3688,-0.321777,0.0609247,0.738588,-0.321777,0.0606856,0.738588,0.211568,0.0606856,3.3688,0.211568,0.0609247}, 63);
IndexedFaceSet19.setCoord(&Coordinate21);

Shape15.setGeometry(&IndexedFaceSet19);

Transform14.addChild(&Shape15);

Scene7.addChild(&Transform14);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("ps_handle"));
Transform22.setScale(new float[]{1020.62,1020.62,1020.62});
Switch& Switch23 =  Switch();
Switch23.setWhichChoice(1);
Transform& Transform24 =  Transform();
Switch23.addChild(&Transform24);

Inline& Inline25 =  Inline();
Inline25.setUrl(new CString[]{CString("cube.x3d")}, 1);
Inline25.setBboxSize(new float[]{1,1,1});
Switch23.addChild(&Inline25);

Transform22.addChild(&Switch23);

Scene7.addChild(&Transform22);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("ps"));
ProximitySensor& ProximitySensor27 =  ProximitySensor();
ProximitySensor27.setDEF(CString("_2"));
ProximitySensor27.setSize(new float[]{1020.62,1020.62,1020.62});
Transform26.addChild(&ProximitySensor27);

Scene7.addChild(&Transform26);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("ReflectiveTextureTransform"));
ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(CString("ReflectiveTextureTransform"));
ProtoInstance29.setDEF(CString("_3"));
fieldValue& fieldValue30 =  fieldValue();
fieldValue30.setName(CString("translation"));
fieldValue30.setValue(CString("0.0899906 13.5733 0.140636"));
ProtoInstance29.addChild(&fieldValue30);

fieldValue& fieldValue31 =  fieldValue();
fieldValue31.setName(CString("distance"));
fieldValue31.setValue(CString("3"));
ProtoInstance29.addChild(&fieldValue31);

fieldValue& fieldValue32 =  fieldValue();
fieldValue32.setName(CString("textureTransform"));
TextureTransform& TextureTransform33 =  TextureTransform();
TextureTransform33.setUSE(CString("_1"));
fieldValue32.addChild(TextureTransform33);

ProtoInstance29.addChild(&fieldValue32);

Transform28.addChild(&ProtoInstance29);

Scene7.addChild(&Transform28);

ROUTE& ROUTE34 =  ROUTE();
ROUTE34.setFromNode(CString("ps_handle"));
ROUTE34.setFromField(CString("translation_changed"));
ROUTE34.setToNode(CString("_2"));
ROUTE34.setToField(CString("set_center"));
Scene7.addChild(&ROUTE34);

ROUTE& ROUTE35 =  ROUTE();
ROUTE35.setFromNode(CString("ps_handle"));
ROUTE35.setFromField(CString("scale_changed"));
ROUTE35.setToNode(CString("_2"));
ROUTE35.setToField(CString("set_size"));
Scene7.addChild(&ROUTE35);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("reflect"));
ROUTE36.setFromField(CString("translation_changed"));
ROUTE36.setToNode(CString("_3"));
ROUTE36.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("_2"));
ROUTE37.setFromField(CString("position_changed"));
ROUTE37.setToNode(CString("_3"));
ROUTE37.setToField(CString("set_position"));
Scene7.addChild(&ROUTE37);

X3D0.setScene(&Scene7);

}
