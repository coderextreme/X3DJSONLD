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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:55 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:55 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("AnimCollisionX"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("bbox"));
field10.setAccessType(CString("initializeOnly"));
field10.setType(CString("SFVec2f"));
field10.setValue(CString("-1 1"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("isActive"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("collideTime"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("startTime"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("animation"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("_1"));
field14.addChild(&Transform15);

ProtoInterface9.addChild(&field14);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
Script& Script17 =  Script();
Script17.setDEF(CString("_animCollision"));
Script17.setDirectOutput(true);
field& field18 =  field();
field18.setName(CString("bbox"));
field18.setAccessType(CString("initializeOnly"));
field18.setType(CString("SFVec2f"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("isActive"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFBool"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("collideTime"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFTime"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("startTime"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFTime"));
Script17.addChild(&field21);

field& field22 =  field();
field22.setName(CString("animation"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFNode"));
Script17.addChild(&field22);

IS& IS23 =  IS();
Connect& connect24 =  Connect();
connect24.setNodeField(CString("bbox"));
connect24.setProtoField(CString("bbox"));
IS23.addChild(&connect24);

Connect& connect25 =  Connect();
connect25.setNodeField(CString("isActive"));
connect25.setProtoField(CString("isActive"));
IS23.addChild(&connect25);

Connect& connect26 =  Connect();
connect26.setNodeField(CString("collideTime"));
connect26.setProtoField(CString("collideTime"));
IS23.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("startTime"));
connect27.setProtoField(CString("startTime"));
IS23.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("animation"));
connect28.setProtoField(CString("animation"));
IS23.addChild(&connect28);

Script17.addChild(&IS23);


//Script17.setSourceCode(CString("vrmlscript:")+
//_T("function isActive(value, time)")+
//_T("{")+
//_T("	if (!value) {")+
//_T("		if (animation.translation.x > bbox.x && animation.translation.x <  bbox.y) {")+
//_T("			collideTime = time;")+
//_T("		} else {")+
//_T("			startTime = time;")+
//_T("		}")+
//_T("	}")+
//_T("}"));
ProtoBody16.addChild(&Script17);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
