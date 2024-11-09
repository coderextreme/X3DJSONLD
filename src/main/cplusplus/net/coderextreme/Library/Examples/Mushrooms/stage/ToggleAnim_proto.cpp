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
meta3.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("ToggleAnim"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("set_animating"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("offset"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("toggled"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("forwardTimer"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("unamedForwardTimer"));
TimeSensor15.setEnabled(False);
field14.addChild(&TimeSensor15);

ProtoInterface9.addChild(&field14);

field& field16 =  field();
field16.setName(CString("backTimer"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFNode"));
TimeSensor& TimeSensor17 =  TimeSensor();
TimeSensor17.setDEF(CString("unamedBackTimer"));
TimeSensor17.setEnabled(False);
field16.addChild(&TimeSensor17);

ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody18 =  ProtoBody();
ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("Data"));
ProtoInterface& ProtoInterface20 =  ProtoInterface();
field& field21 =  field();
field21.setName(CString("offset"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFBool"));
ProtoInterface20.addChild(&field21);

ProtoDeclare19.addChild(&ProtoInterface20);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare19.addChild(&ProtoBody22);

ProtoBody18.addChild(&ProtoDeclare19);

Group& Group24 =  Group();
Script& Script25 =  Script();
Script25.setDEF(CString("_toggleAnim_1"));
Script25.setDirectOutput(True);
field& field26 =  field();
field26.setName(CString("toggled"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFTime"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_animating"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFBool"));
Script25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_offset"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFBool"));
Script25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("animating"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFBool"));
Script25.addChild(&field30);

field& field31 =  field();
field31.setName(CString("click"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFBool"));
Script25.addChild(&field31);

field& field32 =  field();
field32.setName(CString("forwardTimer"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFNode"));
Script25.addChild(&field32);

field& field33 =  field();
field33.setName(CString("backTimer"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
Script25.addChild(&field33);

field& field34 =  field();
field34.setName(CString("data"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("Data"));
ProtoInstance35.setDEF(CString("_1"));
IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("offset"));
connect37.setProtoField(CString("offset"));
IS36.addChild(&connect37);

ProtoInstance35.addChild(&IS36);

field34.addChild(&ProtoInstance35);

Script25.addChild(&field34);

IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("toggled"));
connect39.setProtoField(CString("toggled"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("startTime"));
connect40.setProtoField(CString("startTime"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("set_animating"));
connect41.setProtoField(CString("set_animating"));
IS38.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("forwardTimer"));
connect42.setProtoField(CString("forwardTimer"));
IS38.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("backTimer"));
connect43.setProtoField(CString("backTimer"));
IS38.addChild(&connect43);

Script25.addChild(&IS38);


Script25.setSourceCode(CString("vrmlscript:")+
_T("function initialize()")+
_T("{")+
_T("	forwardTimer.enabled = FALSE;")+
_T("	backTimer.enabled = FALSE;")+
_T("	if (data.offset){")+
_T("		backTimer.fraction_changed = 0;")+
_T("	}else {")+
_T("		forwardTimer.fraction_changed = 0;")+
_T("	}")+
_T("	toggled = data.offset;")+
_T("}")+
_T("function startTime(value, time)")+
_T("{")+
_T("	if (!toggled){")+
_T("		if(animating) click = TRUE;")+
_T("		else{")+
_T("			forwardTimer.enabled   = TRUE;")+
_T("			forwardTimer.startTime = time;")+
_T("		}")+
_T("	}else {")+
_T("		if(animating) click = TRUE;")+
_T("		else{")+
_T("			backTimer.enabled   = TRUE;")+
_T("			backTimer.startTime = time;")+
_T("		}")+
_T("	}	")+
_T("}")+
_T("function set_animating(value, time)")+
_T("{")+
_T("	animating = value;")+
_T("	if (value){")+
_T("		click = FALSE;")+
_T("	} else {")+
_T("		toggled = !toggled;")+
_T("		if (click){")+
_T("			if (toggled){")+
_T("				backTimer.enabled   = TRUE;")+
_T("				backTimer.startTime = time;")+
_T("			}else {")+
_T("				forwardTimer.enabled   = TRUE;")+
_T("				forwardTimer.startTime = time;")+
_T("			}	")+
_T("		}")+
_T("	}")+
_T("}")+
_T("function set_offset(value, time)")+
_T("{")+
_T("	click = FALSE;")+
_T("	forwardTimer.enabled = FALSE;")+
_T("	backTimer.enabled = FALSE;")+
_T("	if (value){")+
_T("		backTimer.fraction_changed = 0;")+
_T("	}else {")+
_T("		forwardTimer.fraction_changed = 0;")+
_T("	}")+
_T("	toggled = value;")+
_T("}"));
Group24.addChild(&Script25);

ProtoBody18.addChild(&Group24);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_1"));
ROUTE44.setFromField(CString("offset_changed"));
ROUTE44.setToNode(CString("_toggleAnim_1"));
ROUTE44.setToField(CString("set_offset"));
ProtoBody18.addChild(&ROUTE44);

ProtoDeclare8.addChild(&ProtoBody18);

Scene7.addChild(&ProtoDeclare8);

WorldInfo& WorldInfo45 =  WorldInfo();
WorldInfo45.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Scene7.addChild(&WorldInfo45);

X3D0.setScene(&Scene7);

}
