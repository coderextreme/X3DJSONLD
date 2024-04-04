//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ThreeDTexture.x3d"));
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
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("a kind of ThreeDTexture cube with spheres"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(CString("Rubiks Cube"));
Viewpoint9.setPosition(new float[]{0.0,0.0,12.0});
Scene7.addChild(&Viewpoint9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("sphereproto"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(CString("xtranslation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(CString("translation"));
connect16.setProtoField(CString("xtranslation"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare21 =  ProtoDeclare();
ProtoDeclare21.setName(CString("three"));
ProtoInterface& ProtoInterface22 =  ProtoInterface();
field& field23 =  field();
field23.setName(CString("ytranslation"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFVec3f"));
field23.setValue(CString("0 0 0"));
ProtoInterface22.addChild(&field23);

ProtoDeclare21.addChild(&ProtoInterface22);

ProtoBody& ProtoBody24 =  ProtoBody();
Transform& Transform25 =  Transform();
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("translation"));
connect27.setProtoField(CString("ytranslation"));
IS26.addChild(&connect27);

Transform25.addChild(&IS26);

ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(CString("sphereproto"));
fieldValue& fieldValue29 =  fieldValue();
fieldValue29.setName(CString("xtranslation"));
fieldValue29.setValue(CString("0 0 0"));
ProtoInstance28.addChild(&fieldValue29);

Transform25.addChild(&ProtoInstance28);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("sphereproto"));
fieldValue& fieldValue31 =  fieldValue();
fieldValue31.setName(CString("xtranslation"));
fieldValue31.setValue(CString("2 0 0"));
ProtoInstance30.addChild(&fieldValue31);

Transform25.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("sphereproto"));
fieldValue& fieldValue33 =  fieldValue();
fieldValue33.setName(CString("xtranslation"));
fieldValue33.setValue(CString("-2 0 0"));
ProtoInstance32.addChild(&fieldValue33);

Transform25.addChild(&ProtoInstance32);

ProtoBody24.addChild(&Transform25);

ProtoDeclare21.addChild(&ProtoBody24);

Scene7.addChild(&ProtoDeclare21);

ProtoDeclare& ProtoDeclare34 =  ProtoDeclare();
ProtoDeclare34.setName(CString("nine"));
ProtoInterface& ProtoInterface35 =  ProtoInterface();
field& field36 =  field();
field36.setName(CString("ztranslation"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFVec3f"));
field36.setValue(CString("0 0 0"));
ProtoInterface35.addChild(&field36);

ProtoDeclare34.addChild(&ProtoInterface35);

ProtoBody& ProtoBody37 =  ProtoBody();
Transform& Transform38 =  Transform();
IS& IS39 =  IS();
Connect& connect40 =  Connect();
connect40.setNodeField(CString("translation"));
connect40.setProtoField(CString("ztranslation"));
IS39.addChild(&connect40);

Transform38.addChild(&IS39);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(CString("three"));
fieldValue& fieldValue42 =  fieldValue();
fieldValue42.setName(CString("ytranslation"));
fieldValue42.setValue(CString("0 0 0"));
ProtoInstance41.addChild(&fieldValue42);

Transform38.addChild(&ProtoInstance41);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("three"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(CString("ytranslation"));
fieldValue44.setValue(CString("0 2 0"));
ProtoInstance43.addChild(&fieldValue44);

Transform38.addChild(&ProtoInstance43);

ProtoInstance& ProtoInstance45 =  ProtoInstance();
ProtoInstance45.setName(CString("three"));
fieldValue& fieldValue46 =  fieldValue();
fieldValue46.setName(CString("ytranslation"));
fieldValue46.setValue(CString("0 -2 0"));
ProtoInstance45.addChild(&fieldValue46);

Transform38.addChild(&ProtoInstance45);

ProtoBody37.addChild(&Transform38);

ProtoDeclare34.addChild(&ProtoBody37);

Scene7.addChild(&ProtoDeclare34);

ProtoDeclare& ProtoDeclare47 =  ProtoDeclare();
ProtoDeclare47.setName(CString("twentyseven"));
ProtoInterface& ProtoInterface48 =  ProtoInterface();
field& field49 =  field();
field49.setName(CString("ttranslation"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFVec3f"));
field49.setValue(CString("0 0 0"));
ProtoInterface48.addChild(&field49);

ProtoDeclare47.addChild(&ProtoInterface48);

ProtoBody& ProtoBody50 =  ProtoBody();
Transform& Transform51 =  Transform();
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(CString("translation"));
connect53.setProtoField(CString("ttranslation"));
IS52.addChild(&connect53);

Transform51.addChild(&IS52);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("nine"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("ztranslation"));
fieldValue55.setValue(CString("0 0 0"));
ProtoInstance54.addChild(&fieldValue55);

Transform51.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(CString("nine"));
fieldValue& fieldValue57 =  fieldValue();
fieldValue57.setName(CString("ztranslation"));
fieldValue57.setValue(CString("0 0 2"));
ProtoInstance56.addChild(&fieldValue57);

Transform51.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("nine"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("ztranslation"));
fieldValue59.setValue(CString("0 0 -2"));
ProtoInstance58.addChild(&fieldValue59);

Transform51.addChild(&ProtoInstance58);

ProtoBody50.addChild(&Transform51);

ProtoDeclare47.addChild(&ProtoBody50);

Scene7.addChild(&ProtoDeclare47);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("twentyseven"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("ttranslation"));
fieldValue61.setValue(CString("0 0 0"));
ProtoInstance60.addChild(&fieldValue61);

Scene7.addChild(&ProtoInstance60);

X3D0.setScene(&Scene7);

//}
