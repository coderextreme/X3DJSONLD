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
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("BoxEm.x3d"));
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
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("3 boxes"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(CString("Cubes on Fire"));
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
field13.setType(CString("MFNode"));
Shape& Shape14 =  Shape();
Sphere& Sphere15 =  Sphere();
Shape14.setGeometry(&Sphere15);

Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[]{1,1,1});
Appearance16.addChild(&Material17);

Shape14.addChild(&Appearance16);

field13.addChild(&Shape14);

ProtoInterface11.addChild(&field13);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody18 =  ProtoBody();
Transform& Transform19 =  Transform();
IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(CString("translation"));
connect21.setProtoField(CString("xtranslation"));
IS20.addChild(&connect21);

Connect& connect22 =  Connect();
connect22.setNodeField(CString("children"));
connect22.setProtoField(CString("myShape"));
IS20.addChild(&connect22);

Transform19.addChild(&IS20);

ProtoBody18.addChild(&Transform19);

ProtoDeclare10.addChild(&ProtoBody18);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare23 =  ProtoDeclare();
ProtoDeclare23.setName(CString("three"));
ProtoInterface& ProtoInterface24 =  ProtoInterface();
field& field25 =  field();
field25.setName(CString("ytranslation"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFVec3f"));
field25.setValue(CString("0 0 0"));
ProtoInterface24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("myShape"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("MFNode"));
Shape& Shape27 =  Shape();
Cylinder& Cylinder28 =  Cylinder();
Shape27.setGeometry(&Cylinder28);

Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[]{1,1,1});
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

field26.addChild(&Shape27);

ProtoInterface24.addChild(&field26);

ProtoDeclare23.addChild(&ProtoInterface24);

ProtoBody& ProtoBody31 =  ProtoBody();
Transform& Transform32 =  Transform();
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("translation"));
connect34.setProtoField(CString("ytranslation"));
IS33.addChild(&connect34);

Transform32.addChild(&IS33);

ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("anyShape"));
fieldValue& fieldValue36 =  fieldValue();
fieldValue36.setName(CString("xtranslation"));
fieldValue36.setValue(CString("0 0 0"));
ProtoInstance35.addChild(&fieldValue36);

IS& IS37 =  IS();
Connect& connect38 =  Connect();
connect38.setNodeField(CString("myShape"));
connect38.setProtoField(CString("myShape"));
IS37.addChild(&connect38);

ProtoInstance35.addChild(&IS37);

Transform32.addChild(&ProtoInstance35);

ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("anyShape"));
fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(CString("xtranslation"));
fieldValue40.setValue(CString("2 0 0"));
ProtoInstance39.addChild(&fieldValue40);

IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("myShape"));
connect42.setProtoField(CString("myShape"));
IS41.addChild(&connect42);

ProtoInstance39.addChild(&IS41);

Transform32.addChild(&ProtoInstance39);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("anyShape"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(CString("xtranslation"));
fieldValue44.setValue(CString("-2 0 0"));
ProtoInstance43.addChild(&fieldValue44);

IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("myShape"));
connect46.setProtoField(CString("myShape"));
IS45.addChild(&connect46);

ProtoInstance43.addChild(&IS45);

Transform32.addChild(&ProtoInstance43);

ProtoBody31.addChild(&Transform32);

ProtoDeclare23.addChild(&ProtoBody31);

Scene7.addChild(&ProtoDeclare23);

ProtoInstance& ProtoInstance47 =  ProtoInstance();
ProtoInstance47.setName(CString("three"));
ProtoInstance47.setDEF(CString("threepi"));
fieldValue& fieldValue48 =  fieldValue();
fieldValue48.setName(CString("ytranslation"));
fieldValue48.setValue(CString("0 0 0"));
ProtoInstance47.addChild(&fieldValue48);

fieldValue& fieldValue49 =  fieldValue();
fieldValue49.setName(CString("myShape"));
Shape& Shape50 =  Shape();
Shape50.setDEF(CString("box"));
Box& Box51 =  Box();
Box51.setSize(new float[]{1,1,1});
Shape50.setGeometry(&Box51);

Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setDiffuseColor(new float[]{0,1,0});
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

fieldValue49.addChild(&Shape50);

ProtoInstance47.addChild(&fieldValue49);

Scene7.addChild(&ProtoInstance47);

Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0,2,0});
Shape& Shape55 =  Shape();
Shape55.setUSE(CString("box"));
Transform54.addChild(&Shape55);

Scene7.addChild(&Transform54);

X3D0.setScene(&Scene7);

}
