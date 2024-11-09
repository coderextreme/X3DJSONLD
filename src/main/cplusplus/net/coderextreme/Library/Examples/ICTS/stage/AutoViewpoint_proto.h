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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:56 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:56 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("AutoViewpoint"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("set_isActive"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("proximitySensor"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("SFNode"));
ProximitySensor& ProximitySensor13 =  ProximitySensor();
ProximitySensor13.setDEF(CString("_1"));
field12.addChild(&ProximitySensor13);

ProtoInterface9.addChild(&field12);

field& field14 =  field();
field14.setName(CString("timeSensor"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("_2"));
field14.addChild(&TimeSensor15);

ProtoInterface9.addChild(&field14);

field& field16 =  field();
field16.setName(CString("positionInterpolator"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator17 =  PositionInterpolator();
PositionInterpolator17.setDEF(CString("_3"));
field16.addChild(&PositionInterpolator17);

ProtoInterface9.addChild(&field16);

field& field18 =  field();
field18.setName(CString("orientationInterpolator"));
field18.setAccessType(CString("initializeOnly"));
field18.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator19 =  OrientationInterpolator();
OrientationInterpolator19.setDEF(CString("_4"));
field18.addChild(&OrientationInterpolator19);

ProtoInterface9.addChild(&field18);

field& field20 =  field();
field20.setName(CString("scalarInterpolator"));
field20.setAccessType(CString("initializeOnly"));
field20.setType(CString("SFNode"));
ScalarInterpolator& ScalarInterpolator21 =  ScalarInterpolator();
ScalarInterpolator21.setDEF(CString("_5"));
field20.addChild(&ScalarInterpolator21);

ProtoInterface9.addChild(&field20);

field& field22 =  field();
field22.setName(CString("autoViewpoint"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFNode"));
Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("_6"));
field22.addChild(&Viewpoint23);

ProtoInterface9.addChild(&field22);

field& field24 =  field();
field24.setName(CString("viewpoint"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFNode"));
Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("_7"));
field24.addChild(&Viewpoint25);

ProtoInterface9.addChild(&field24);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody26 =  ProtoBody();
ProtoDeclare& ProtoDeclare27 =  ProtoDeclare();
ProtoDeclare27.setName(CString("Data"));
ProtoInterface& ProtoInterface28 =  ProtoInterface();
field& field29 =  field();
field29.setName(CString("startTime"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFTime"));
ProtoInterface28.addChild(&field29);

ProtoDeclare27.addChild(&ProtoInterface28);

ProtoBody& ProtoBody30 =  ProtoBody();
Group& Group31 =  Group();
ProtoBody30.addChild(&Group31);

ProtoDeclare27.addChild(&ProtoBody30);

ProtoBody26.addChild(&ProtoDeclare27);

Group& Group32 =  Group();
Script& Script33 =  Script();
Script33.setDEF(CString("avp"));
Script33.setDirectOutput(true);
Script33.setMustEvaluate(true);
field& field34 =  field();
field34.setName(CString("set_startTime"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFTime"));
Script33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("set_isActive"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFBool"));
Script33.addChild(&field35);

field& field36 =  field();
field36.setName(CString("proximitySensor"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
Script33.addChild(&field36);

field& field37 =  field();
field37.setName(CString("timeSensor"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFNode"));
Script33.addChild(&field37);

field& field38 =  field();
field38.setName(CString("positionInterpolator"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFNode"));
Script33.addChild(&field38);

field& field39 =  field();
field39.setName(CString("orientationInterpolator"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFNode"));
Script33.addChild(&field39);

field& field40 =  field();
field40.setName(CString("scalarInterpolator"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFNode"));
Script33.addChild(&field40);

field& field41 =  field();
field41.setName(CString("autoViewpoint"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFNode"));
Script33.addChild(&field41);

field& field42 =  field();
field42.setName(CString("viewpoint"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFNode"));
Script33.addChild(&field42);

field& field43 =  field();
field43.setName(CString("data"));
field43.setAccessType(CString("initializeOnly"));
field43.setType(CString("SFNode"));
ProtoInstance& ProtoInstance44 =  ProtoInstance();
ProtoInstance44.setName(CString("Data"));
ProtoInstance44.setDEF(CString("Data"));
IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("startTime"));
connect46.setProtoField(CString("startTime"));
IS45.addChild(&connect46);

ProtoInstance44.addChild(&IS45);

field43.addChild(&ProtoInstance44);

Script33.addChild(&field43);

IS& IS47 =  IS();
Connect& connect48 =  Connect();
connect48.setNodeField(CString("set_isActive"));
connect48.setProtoField(CString("set_isActive"));
IS47.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("proximitySensor"));
connect49.setProtoField(CString("proximitySensor"));
IS47.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("timeSensor"));
connect50.setProtoField(CString("timeSensor"));
IS47.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(CString("positionInterpolator"));
connect51.setProtoField(CString("positionInterpolator"));
IS47.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("orientationInterpolator"));
connect52.setProtoField(CString("orientationInterpolator"));
IS47.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("scalarInterpolator"));
connect53.setProtoField(CString("scalarInterpolator"));
IS47.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("autoViewpoint"));
connect54.setProtoField(CString("autoViewpoint"));
IS47.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("viewpoint"));
connect55.setProtoField(CString("viewpoint"));
IS47.addChild(&connect55);

Script33.addChild(&IS47);


//Script33.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	timeSensor.enabled  = FALSE;")+
//_T("	timeSensor.stopTime = 0;")+
//_T("	if (positionInterpolator) {")+
//_T("		positionInterpolator.key      = new MFFloat(0, 1);")+
//_T("		positionInterpolator.keyValue = new MFVec3f(")+
//_T("			new SFVec3f(0, 0, 0),")+
//_T("			viewpoint.position")+
//_T("		);")+
//_T("	}")+
//_T("	if (orientationInterpolator) {")+
//_T("		orientationInterpolator.key      = new MFFloat(0, 1);")+
//_T("		orientationInterpolator.keyValue = new MFRotation(")+
//_T("			new SFRotation(0, 0, 1, 0),")+
//_T("			viewpoint.orientation")+
//_T("		);")+
//_T("	}")+
//_T("	if (scalarInterpolator) {")+
//_T("		scalarInterpolator.key		= new MFFloat(0, 1);")+
//_T("		scalarInterpolator.keyValue = new MFFloat(")+
//_T("			autoViewpoint.fieldOfView,")+
//_T("			viewpoint.fieldOfView")+
//_T("		);")+
//_T("	}")+
//_T("	autoViewpoint.jump = FALSE;")+
//_T("}")+
//_T("function set_startTime(value, time)")+
//_T("{")+
//_T("	if (timeSensor.isActive) return;")+
//_T("	timeSensor.enabled = TRUE;")+
//_T("	autoViewpoint.position    = proximitySensor.position_changed;")+
//_T("	autoViewpoint.orientation = proximitySensor.orientation_changed;")+
//_T("	if (positionInterpolator)    positionInterpolator.keyValue[0]    = autoViewpoint.position;")+
//_T("	if (orientationInterpolator) orientationInterpolator.keyValue[0] = autoViewpoint.orientation;")+
//_T("	autoViewpoint.set_bind = TRUE;")+
//_T("	timeSensor.startTime   = time;")+
//_T("}")+
//_T("function set_isActive(value, time)")+
//_T("{")+
//_T("	if (!value) {")+
//_T("		timeSensor.enabled = FALSE;")+
//_T("		if (autoViewpoint.isBound) {")+
//_T("			//autoViewpoint.set_bind = FALSE;")+
//_T("			viewpoint.set_bind = TRUE;")+
//_T("		}")+
//_T("	}")+
//_T("}"));
Group32.addChild(&Script33);

ProtoBody26.addChild(&Group32);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("Data"));
ROUTE56.setFromField(CString("startTime_changed"));
ROUTE56.setToNode(CString("avp"));
ROUTE56.setToField(CString("set_startTime"));
ProtoBody26.addChild(&ROUTE56);

ProtoDeclare8.addChild(&ProtoBody26);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
