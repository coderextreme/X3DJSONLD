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
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("RadioButton"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("touchTime"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("whichChoice"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("choice"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFNode"));
ProtoInterface9.addChild(&field13);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("Data"));
ProtoInterface& ProtoInterface16 =  ProtoInterface();
field& field17 =  field();
field17.setName(CString("enabled"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFBool"));
field17.setValue(CString("true"));
ProtoInterface16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("whichChoice"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFInt32"));
ProtoInterface16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("children"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("MFNode"));
ProtoInterface16.addChild(&field19);

ProtoDeclare15.addChild(&ProtoInterface16);

ProtoBody& ProtoBody20 =  ProtoBody();
Group& Group21 =  Group();
IS& IS22 =  IS();
Connect& connect23 =  Connect();
connect23.setNodeField(CString("children"));
connect23.setProtoField(CString("children"));
IS22.addChild(&connect23);

Group21.addChild(&IS22);

ProtoBody20.addChild(&Group21);

ProtoDeclare15.addChild(&ProtoBody20);

ProtoBody14.addChild(&ProtoDeclare15);

ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(CString("Data"));
ProtoInstance24.setDEF(CString("Data"));
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("enabled"));
connect26.setProtoField(CString("enabled"));
IS25.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("whichChoice"));
connect27.setProtoField(CString("whichChoice"));
IS25.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("children"));
connect28.setProtoField(CString("choice"));
IS25.addChild(&connect28);

ProtoInstance24.addChild(&IS25);

ProtoBody14.addChild(&ProtoInstance24);

Script& Script29 =  Script();
Script29.setDEF(CString("_radioButton"));
Script29.setDirectOutput(True);
field& field30 =  field();
field30.setName(CString("touchTime"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFTime"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_touchTime"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_whichChoice"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFInt32"));
Script29.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_children"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("MFNode"));
Script29.addChild(&field33);

field& field34 =  field();
field34.setName(CString("whichChoice"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFInt32"));
field34.setValue(CString("-1"));
Script29.addChild(&field34);

field& field35 =  field();
field35.setName(CString("children"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("MFNode"));
Script29.addChild(&field35);

field& field36 =  field();
field36.setName(CString("self"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
Script& Script37 =  Script();
Script37.setUSE(CString("_radioButton"));
field36.addChild(&Script37);

Script29.addChild(&field36);

field& field38 =  field();
field38.setName(CString("data"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFNode"));
ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setUSE(CString("Data"));
field38.addChild(&ProtoInstance39);

Script29.addChild(&field38);

IS& IS40 =  IS();
Connect& connect41 =  Connect();
connect41.setNodeField(CString("touchTime"));
connect41.setProtoField(CString("touchTime"));
IS40.addChild(&connect41);

Script29.addChild(&IS40);


Script29.setSourceCode(CString("vrmlscript:")+
_T("function set_touchTime (value, time) {")+
_T("	if (!data.enabled) return;")+
_T("	for (i=0; i<children.length; ++i) {")+
_T("		if (children[i].touchTime == value) {")+
_T("			touchTime = time;")+
_T("			data.whichChoice = i;")+
_T("			break;")+
_T("		}")+
_T("	}")+
_T("}")+
_T("function set_whichChoice (value, time) {")+
_T("	if (whichChoice >= 0 && whichChoice < children.length)")+
_T("		children[whichChoice].on = FALSE;")+
_T("	whichChoice = value;")+
_T("	if (touchTime != time)")+
_T("		if (whichChoice >= 0 && whichChoice < children.length && !children[whichChoice].whichChoice)")+
_T("			children[whichChoice].on = TRUE;")+
_T("}")+
_T("function set_children (value, time) {")+
_T("	for (i=0; i<children.length; ++i)")+
_T("		Browser.deleteRoute(children[i], 'touchTime', self, 'set_touchTime');")+
_T("	children = value;")+
_T("	for (i=0; i<children.length; ++i) {")+
_T("		children[i].on = FALSE;")+
_T("		Browser.addRoute(children[i], 'touchTime', self, 'set_touchTime');")+
_T("	}")+
_T("	if (whichChoice >= 0 && whichChoice < children.length)")+
_T("		children[whichChoice].on = TRUE;")+
_T("}")+
_T("function initialize() {")+
_T("	whichChoice = data.whichChoice;")+
_T("	set_children(data.children, 0);")+
_T("}"));
ProtoBody14.addChild(&Script29);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("Data"));
ROUTE42.setFromField(CString("children_changed"));
ROUTE42.setToNode(CString("_radioButton"));
ROUTE42.setToField(CString("set_children"));
ProtoBody14.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("Data"));
ROUTE43.setFromField(CString("whichChoice_changed"));
ROUTE43.setToNode(CString("_radioButton"));
ROUTE43.setToField(CString("set_whichChoice"));
ProtoBody14.addChild(&ROUTE43);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
