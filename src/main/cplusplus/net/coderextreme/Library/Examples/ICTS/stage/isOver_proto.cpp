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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:10 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("isOver"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("set_isOver"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("set_hitPoint"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isOver_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
Script& Script14 =  Script();
Script14.setDEF(CString("_isOver"));
field& field15 =  field();
field15.setName(CString("set_isOver"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFBool"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("set_hitPoint"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFVec3f"));
Script14.addChild(&field16);

field& field17 =  field();
field17.setName(CString("isOver_changed"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFBool"));
Script14.addChild(&field17);

IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("set_isOver"));
connect19.setProtoField(CString("set_isOver"));
IS18.addChild(&connect19);

Connect& connect20 =  Connect();
connect20.setNodeField(CString("set_hitPoint"));
connect20.setProtoField(CString("set_hitPoint"));
IS18.addChild(&connect20);

Connect& connect21 =  Connect();
connect21.setNodeField(CString("isOver_changed"));
connect21.setProtoField(CString("isOver_changed"));
IS18.addChild(&connect21);

Script14.addChild(&IS18);


Script14.setSourceCode(CString("vrmlscript:")+
_T("function set_isOver(value, time)")+
_T("{")+
_T("	isOver_changed = value;")+
_T("}")+
_T("function set_hitPoint(value, time)")+
_T("{")+
_T("	if ( isOver_changed) isOver_changed = TRUE;")+
_T("}"));
ProtoBody13.addChild(&Script14);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
