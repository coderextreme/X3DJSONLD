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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Bonus"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stopTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("axisOfRotation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 1 0"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("range"));
field13.setAccessType(CString("initializeOnly"));
field13.setType(CString("MFFloat"));
field13.setValue(CString("0 1"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("level"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFNode"));
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("_1"));
field14.addChild(&Transform15);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("_2"));
field14.addChild(&Transform16);

ProtoInterface9.addChild(&field14);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("startTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("stopTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface19.addChild(&field21);

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare18.addChild(&ProtoBody22);

ProtoBody17.addChild(&ProtoDeclare18);

Transform& Transform24 =  Transform();
Switch& Switch25 =  Switch();
Switch25.setDEF(CString("_3"));
Switch25.setWhichChoice(0);
Transform& Transform26 =  Transform();
Switch25.addChild(&Transform26);

Billboard& Billboard27 =  Billboard();
IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("axisOfRotation"));
connect29.setProtoField(CString("axisOfRotation"));
IS28.addChild(&connect29);

Billboard27.addChild(&IS28);

Collision& Collision30 =  Collision();
Collision30.setEnabled(false);
LOD& LOD31 =  LOD();
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("range"));
connect33.setProtoField(CString("range"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("children"));
connect34.setProtoField(CString("level"));
IS32.addChild(&connect34);

LOD31.addChild(&IS32);

Collision30.addChildren(LOD31);

Billboard27.addChild(&Collision30);

Switch25.addChild(&Billboard27);

Transform24.addChild(&Switch25);

ProtoBody17.addChild(&Transform24);

Script& Script35 =  Script();
Script35.setDEF(CString("_bonus_1"));
Script35.setDirectOutput(true);
field& field36 =  field();
field36.setName(CString("whichChoice_changed"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFInt32"));
Script35.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_startTime"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFTime"));
Script35.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_stopTime"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFTime"));
Script35.addChild(&field38);

field& field39 =  field();
field39.setName(CString("data"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFNode"));
ProtoInstance& ProtoInstance40 =  ProtoInstance();
ProtoInstance40.setName(CString("Data"));
ProtoInstance40.setDEF(CString("_4"));
IS& IS41 =  IS();
Connect& connect42 =  Connect();
connect42.setNodeField(CString("startTime"));
connect42.setProtoField(CString("startTime"));
IS41.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("stopTime"));
connect43.setProtoField(CString("stopTime"));
IS41.addChild(&connect43);

ProtoInstance40.addChild(&IS41);

field39.addChild(&ProtoInstance40);

Script35.addChild(&field39);


//Script35.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	whichChoice_changed = data.startTime ? 1 : 0;")+
//_T("}")+
//_T("function set_startTime(value, time)")+
//_T("{")+
//_T("	whichChoice_changed = 1;")+
//_T("}")+
//_T("function set_stopTime(value, time)")+
//_T("{")+
//_T("	whichChoice_changed = 0;")+
//_T("}"));
ProtoBody17.addChild(&Script35);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_bonus_1"));
ROUTE44.setFromField(CString("whichChoice_changed"));
ROUTE44.setToNode(CString("_3"));
ROUTE44.setToField(CString("set_whichChoice"));
ProtoBody17.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_4"));
ROUTE45.setFromField(CString("startTime_changed"));
ROUTE45.setToNode(CString("_bonus_1"));
ROUTE45.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_4"));
ROUTE46.setFromField(CString("stopTime_changed"));
ROUTE46.setToNode(CString("_bonus_1"));
ROUTE46.setToField(CString("set_stopTime"));
ProtoBody17.addChild(&ROUTE46);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
