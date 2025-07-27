#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("rubikOnFire.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/rubikOnFire.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("a white rubik cube"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(CString("Rubiks Cube on Fire"));
Viewpoint9.setPosition(new float[]{0,0,12});
Scene7.addChild(&Viewpoint9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("anyShape"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(CString("xtranslation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 0 0"));
ProtoInterface11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("myShape"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFNode"));
Sphere& Sphere14 =  Sphere();
field13.addChild(&Sphere14);

ProtoInterface11.addChild(&field13);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(CString("translation"));
connect18.setProtoField(CString("xtranslation"));
IS17.addChild(&connect18);

Transform16.addChild(&IS17);

Shape& Shape19 =  Shape();
IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(CString("geometry"));
connect21.setProtoField(CString("myShape"));
IS20.addChild(&connect21);

Shape19.addChild(&IS20);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{1,1,1});
Appearance22.addChild(&Material23);

Shape19.addChild(&Appearance22);

Transform16.addChild(&Shape19);

ProtoBody15.addChild(&Transform16);

ProtoDeclare10.addChild(&ProtoBody15);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare24 =  ProtoDeclare();
ProtoDeclare24.setName(CString("three"));
ProtoInterface& ProtoInterface25 =  ProtoInterface();
field& field26 =  field();
field26.setName(CString("ytranslation"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFVec3f"));
field26.setValue(CString("0 0 0"));
ProtoInterface25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("myShape"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFNode"));
Sphere& Sphere28 =  Sphere();
field27.addChild(&Sphere28);

ProtoInterface25.addChild(&field27);

ProtoDeclare24.addChild(&ProtoInterface25);

ProtoBody& ProtoBody29 =  ProtoBody();
Transform& Transform30 =  Transform();
IS& IS31 =  IS();
Connect& connect32 =  Connect();
connect32.setNodeField(CString("translation"));
connect32.setProtoField(CString("ytranslation"));
IS31.addChild(&connect32);

Transform30.addChild(&IS31);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("anyShape"));
fieldValue& fieldValue34 =  fieldValue();
fieldValue34.setName(CString("xtranslation"));
fieldValue34.setValue(CString("0 0 0"));
ProtoInstance33.addChild(&fieldValue34);

IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("myShape"));
connect36.setProtoField(CString("myShape"));
IS35.addChild(&connect36);

ProtoInstance33.addChild(&IS35);

Transform30.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(CString("anyShape"));
fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(CString("xtranslation"));
fieldValue38.setValue(CString("2 0 0"));
ProtoInstance37.addChild(&fieldValue38);

IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("myShape"));
connect40.setProtoField(CString("myShape"));
IS39.addChild(&connect40);

ProtoInstance37.addChild(&IS39);

Transform30.addChild(&ProtoInstance37);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(CString("anyShape"));
fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(CString("xtranslation"));
fieldValue42.setValue(CString("-2 0 0"));
ProtoInstance41.addChild(&fieldValue42);

IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("myShape"));
connect44.setProtoField(CString("myShape"));
IS43.addChild(&connect44);

ProtoInstance41.addChild(&IS43);

Transform30.addChild(&ProtoInstance41);

ProtoBody29.addChild(&Transform30);

ProtoDeclare24.addChild(&ProtoBody29);

Scene7.addChild(&ProtoDeclare24);

ProtoDeclare& ProtoDeclare45 =  ProtoDeclare();
ProtoDeclare45.setName(CString("nine"));
ProtoInterface& ProtoInterface46 =  ProtoInterface();
field& field47 =  field();
field47.setName(CString("ztranslation"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFVec3f"));
field47.setValue(CString("0 0 0"));
ProtoInterface46.addChild(&field47);

field& field48 =  field();
field48.setName(CString("myShape"));
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFNode"));
Sphere& Sphere49 =  Sphere();
field48.addChild(&Sphere49);

ProtoInterface46.addChild(&field48);

ProtoDeclare45.addChild(&ProtoInterface46);

ProtoBody& ProtoBody50 =  ProtoBody();
Transform& Transform51 =  Transform();
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(CString("translation"));
connect53.setProtoField(CString("ztranslation"));
IS52.addChild(&connect53);

Transform51.addChild(&IS52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("three"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("ytranslation"));
fieldValue55.setValue(CString("0 0 0"));
ProtoInstance54.addChild(&fieldValue55);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(CString("myShape"));
connect57.setProtoField(CString("myShape"));
IS56.addChild(&connect57);

ProtoInstance54.addChild(&IS56);

Transform51.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("three"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("ytranslation"));
fieldValue59.setValue(CString("0 2 0"));
ProtoInstance58.addChild(&fieldValue59);

IS& IS60 =  IS();
Connect& connect61 =  Connect();
connect61.setNodeField(CString("myShape"));
connect61.setProtoField(CString("myShape"));
IS60.addChild(&connect61);

ProtoInstance58.addChild(&IS60);

Transform51.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("three"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("ytranslation"));
fieldValue63.setValue(CString("0 -2 0"));
ProtoInstance62.addChild(&fieldValue63);

IS& IS64 =  IS();
Connect& connect65 =  Connect();
connect65.setNodeField(CString("myShape"));
connect65.setProtoField(CString("myShape"));
IS64.addChild(&connect65);

ProtoInstance62.addChild(&IS64);

Transform51.addChild(&ProtoInstance62);

ProtoBody50.addChild(&Transform51);

ProtoDeclare45.addChild(&ProtoBody50);

Scene7.addChild(&ProtoDeclare45);

ProtoDeclare& ProtoDeclare66 =  ProtoDeclare();
ProtoDeclare66.setName(CString("twentyseven"));
ProtoInterface& ProtoInterface67 =  ProtoInterface();
field& field68 =  field();
field68.setName(CString("ttranslation"));
field68.setAccessType(CString("inputOutput"));
field68.setType(CString("SFVec3f"));
field68.setValue(CString("0 0 0"));
ProtoInterface67.addChild(&field68);

field& field69 =  field();
field69.setName(CString("myShape"));
field69.setAccessType(CString("inputOutput"));
field69.setType(CString("SFNode"));
Sphere& Sphere70 =  Sphere();
field69.addChild(&Sphere70);

ProtoInterface67.addChild(&field69);

ProtoDeclare66.addChild(&ProtoInterface67);

ProtoBody& ProtoBody71 =  ProtoBody();
Transform& Transform72 =  Transform();
IS& IS73 =  IS();
Connect& connect74 =  Connect();
connect74.setNodeField(CString("translation"));
connect74.setProtoField(CString("ttranslation"));
IS73.addChild(&connect74);

Transform72.addChild(&IS73);

ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(CString("nine"));
fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("ztranslation"));
fieldValue76.setValue(CString("0 0 0"));
ProtoInstance75.addChild(&fieldValue76);

IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(CString("myShape"));
connect78.setProtoField(CString("myShape"));
IS77.addChild(&connect78);

ProtoInstance75.addChild(&IS77);

Transform72.addChild(&ProtoInstance75);

ProtoInstance& ProtoInstance79 =  ProtoInstance();
ProtoInstance79.setName(CString("nine"));
fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(CString("ztranslation"));
fieldValue80.setValue(CString("0 0 2"));
ProtoInstance79.addChild(&fieldValue80);

IS& IS81 =  IS();
Connect& connect82 =  Connect();
connect82.setNodeField(CString("myShape"));
connect82.setProtoField(CString("myShape"));
IS81.addChild(&connect82);

ProtoInstance79.addChild(&IS81);

Transform72.addChild(&ProtoInstance79);

ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(CString("nine"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("ztranslation"));
fieldValue84.setValue(CString("0 0 -2"));
ProtoInstance83.addChild(&fieldValue84);

IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(CString("myShape"));
connect86.setProtoField(CString("myShape"));
IS85.addChild(&connect86);

ProtoInstance83.addChild(&IS85);

Transform72.addChild(&ProtoInstance83);

ProtoBody71.addChild(&Transform72);

ProtoDeclare66.addChild(&ProtoBody71);

Scene7.addChild(&ProtoDeclare66);

ProtoInstance& ProtoInstance87 =  ProtoInstance();
ProtoInstance87.setName(CString("twentyseven"));
fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(CString("ttranslation"));
fieldValue88.setValue(CString("0 0 0"));
ProtoInstance87.addChild(&fieldValue88);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("myShape"));
Box& Box90 =  Box();
Box90.setSize(new float[]{1,1,1});
fieldValue89.addChild(&Box90);

ProtoInstance87.addChild(&fieldValue89);

Scene7.addChild(&ProtoInstance87);

X3D0.setScene(&Scene7);

}
