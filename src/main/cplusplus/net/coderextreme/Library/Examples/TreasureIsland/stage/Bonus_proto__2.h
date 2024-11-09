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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:55 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:55 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Bonus"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("enterTime"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("range"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("MFFloat"));
field12.setValue(CString("0.5 40 120"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("size"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
field13.setValue(CString("0.6 0.6 0.6"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("level2"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFNode"));
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("_1"));
field14.addChild(&Transform15);

ProtoInterface9.addChild(&field14);

field& field16 =  field();
field16.setName(CString("level1"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFNode"));
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("_2"));
field16.addChild(&Transform17);

ProtoInterface9.addChild(&field16);

field& field18 =  field();
field18.setName(CString("level0"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFNode"));
Transform& Transform19 =  Transform();
Transform19.setDEF(CString("_3"));
field18.addChild(&Transform19);

ProtoInterface9.addChild(&field18);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody20 =  ProtoBody();
Transform& Transform21 =  Transform();
Script& Script22 =  Script();
Script22.setDEF(CString("_bonus"));
field& field23 =  field();
field23.setName(CString("whichChoice_changed"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFInt32"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("startTime"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("stopTime"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFTime"));
Script22.addChild(&field25);

IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("startTime"));
connect27.setProtoField(CString("startTime"));
IS26.addChild(&connect27);

Script22.addChild(&IS26);


//Script22.setSourceCode(CString("vrmlscript:")+
//_T("function startTime(value, time)")+
//_T("{")+
//_T("	whichChoice_changed = 1;")+
//_T("}")+
//_T("function stopTime(value, time)")+
//_T("{")+
//_T("	whichChoice_changed = 0;")+
//_T("}"));
Transform21.addChild(&Script22);

Switch& Switch28 =  Switch();
Switch28.setDEF(CString("_4"));
Switch28.setWhichChoice(1);
Transform& Transform29 =  Transform();
Switch28.addChild(&Transform29);

Collision& Collision30 =  Collision();
Collision30.setEnabled(false);
LOD& LOD31 =  LOD();
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("range"));
connect33.setProtoField(CString("range"));
IS32.addChild(&connect33);

LOD31.addChild(&IS32);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("level3"));
VisibilitySensor& VisibilitySensor35 =  VisibilitySensor();
VisibilitySensor35.setDEF(CString("_5"));
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("size"));
connect37.setProtoField(CString("size"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("enterTime"));
connect38.setProtoField(CString("enterTime"));
IS36.addChild(&connect38);

VisibilitySensor35.addChild(&IS36);

Transform34.addChild(&VisibilitySensor35);

LOD31.addChildren(&Transform34);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("level2"));
IS& IS40 =  IS();
Connect& connect41 =  Connect();
connect41.setNodeField(CString("children"));
connect41.setProtoField(CString("level2"));
IS40.addChild(&connect41);

Transform39.addChild(&IS40);

LOD31.addChildren(&Transform39);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("level1"));
IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("children"));
connect44.setProtoField(CString("level1"));
IS43.addChild(&connect44);

Transform42.addChild(&IS43);

LOD31.addChildren(&Transform42);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("level0"));
IS& IS46 =  IS();
Connect& connect47 =  Connect();
connect47.setNodeField(CString("children"));
connect47.setProtoField(CString("level0"));
IS46.addChild(&connect47);

Transform45.addChild(&IS46);

LOD31.addChildren(&Transform45);

Collision30.addChildren(LOD31);

Switch28.addChild(&Collision30);

Transform21.addChild(&Switch28);

ProtoBody20.addChild(&Transform21);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("_5"));
ROUTE48.setFromField(CString("enterTime"));
ROUTE48.setToNode(CString("_bonus"));
ROUTE48.setToField(CString("stopTime"));
ProtoBody20.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("_bonus"));
ROUTE49.setFromField(CString("whichChoice_changed"));
ROUTE49.setToNode(CString("_4"));
ROUTE49.setToField(CString("set_whichChoice"));
ProtoBody20.addChild(&ROUTE49);

ProtoDeclare8.addChild(&ProtoBody20);

Scene7.addChild(&ProtoDeclare8);

WorldInfo& WorldInfo50 =  WorldInfo();
WorldInfo50.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Scene7.addChild(&WorldInfo50);

X3D0.setScene(&Scene7);

//}
