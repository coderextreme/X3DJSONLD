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
ProtoDeclare8.setName(CString("TourGuide"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("cycleInterval"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
field10.setValue(CString("1"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("viewpointPosition"));
field11.setAccessType(CString("initializeOnly"));
field11.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("viewpointOrientation"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("SFRotation"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("set_bind"));
field13.setAccessType(CString("inputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("isBound"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFBool"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("bind_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFBool"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("proximitySensor"));
field16.setAccessType(CString("initializeOnly"));
field16.setType(CString("SFNode"));
ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
Transform& Transform18 =  Transform();
Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDEF(CString("_1"));
Viewpoint19.setPosition(new float[]{0.0,0.0,0.0});
Viewpoint19.setJump(false);
Transform18.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Script& Script21 =  Script();
Script21.setDEF(CString("_guide_1"));
Script21.setDirectOutput(true);
field& field22 =  field();
field22.setName(CString("bind_changed"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFBool"));
Script21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("set_bind"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFBool"));
Script21.addChild(&field23);

field& field24 =  field();
field24.setName(CString("isActive"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFBool"));
Script21.addChild(&field24);

field& field25 =  field();
field25.setName(CString("viewpointPosition"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFVec3f"));
Script21.addChild(&field25);

field& field26 =  field();
field26.setName(CString("viewpointOrientation"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("SFRotation"));
Script21.addChild(&field26);

field& field27 =  field();
field27.setName(CString("proximitySensor"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFNode"));
Script21.addChild(&field27);

field& field28 =  field();
field28.setName(CString("timeSensor"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFNode"));
TimeSensor& TimeSensor29 =  TimeSensor();
TimeSensor29.setDEF(CString("_2"));
IS& IS30 =  IS();
Connect& connect31 =  Connect();
connect31.setNodeField(CString("cycleInterval"));
connect31.setProtoField(CString("cycleInterval"));
IS30.addChild(&connect31);

TimeSensor29.addChild(&IS30);

field28.addChild(&TimeSensor29);

Script21.addChild(&field28);

field& field32 =  field();
field32.setName(CString("positionInterpolator"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator33 =  PositionInterpolator();
PositionInterpolator33.setDEF(CString("_3"));
PositionInterpolator33.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator33.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
field32.addChild(&PositionInterpolator33);

Script21.addChild(&field32);

field& field34 =  field();
field34.setName(CString("orientationInterpolator"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator35 =  OrientationInterpolator();
OrientationInterpolator35.setDEF(CString("_4"));
OrientationInterpolator35.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator35.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
field34.addChild(&OrientationInterpolator35);

Script21.addChild(&field34);

field& field36 =  field();
field36.setName(CString("viewPoint"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setUSE(CString("_1"));
field36.addChild(&Viewpoint37);

Script21.addChild(&field36);

IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("bind_changed"));
connect39.setProtoField(CString("bind_changed"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("set_bind"));
connect40.setProtoField(CString("set_bind"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("viewpointPosition"));
connect41.setProtoField(CString("viewpointPosition"));
IS38.addChild(&connect41);

Connect& connect42 =  Connect();
connect42.setNodeField(CString("viewpointOrientation"));
connect42.setProtoField(CString("viewpointOrientation"));
IS38.addChild(&connect42);

Connect& connect43 =  Connect();
connect43.setNodeField(CString("proximitySensor"));
connect43.setProtoField(CString("proximitySensor"));
IS38.addChild(&connect43);

Script21.addChild(&IS38);


//Script21.setSourceCode(CString("vrmlscript:")+
//_T("function initialize()")+
//_T("{")+
//_T("	positionInterpolator.keyValue[1]    = viewpointPosition;")+
//_T("	orientationInterpolator.keyValue[1] = viewpointOrientation;")+
//_T("}")+
//_T("function isActive(value, time)")+
//_T("{")+
//_T("	if (!value){")+
//_T("		timeSensor.enabled = FALSE;")+
//_T("		viewPoint.set_bind = FALSE;")+
//_T("		bind_changed = TRUE;")+
//_T("	}")+
//_T("}")+
//_T("function set_bind(value, time)")+
//_T("{")+
//_T("	if (value){")+
//_T("		timeSensor.enabled    = TRUE;")+
//_T("		viewPoint.position    = proximitySensor.position_changed;")+
//_T("		viewPoint.orientation = proximitySensor.orientation_changed;")+
//_T("	")+
//_T("		positionInterpolator.keyValue[0]    = viewPoint.position;")+
//_T("		orientationInterpolator.keyValue[0] = viewPoint.orientation;")+
//_T("		viewPoint.set_bind = TRUE;")+
//_T("	}else {")+
//_T("		bind_changed = FALSE;")+
//_T("	}")+
//_T("}"));
Transform20.addChild(&Script21);

Transform18.addChild(&Transform20);

ProtoBody17.addChild(&Transform18);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("_3"));
ROUTE44.setFromField(CString("value_changed"));
ROUTE44.setToNode(CString("_1"));
ROUTE44.setToField(CString("set_position"));
ProtoBody17.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_4"));
ROUTE45.setFromField(CString("value_changed"));
ROUTE45.setToNode(CString("_1"));
ROUTE45.setToField(CString("set_orientation"));
ProtoBody17.addChild(&ROUTE45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("_1"));
ROUTE46.setFromField(CString("isBound"));
ROUTE46.setToNode(CString("_2"));
ROUTE46.setToField(CString("set_enabled"));
ProtoBody17.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("_1"));
ROUTE47.setFromField(CString("bindTime"));
ROUTE47.setToNode(CString("_2"));
ROUTE47.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("_2"));
ROUTE48.setFromField(CString("fraction_changed"));
ROUTE48.setToNode(CString("_3"));
ROUTE48.setToField(CString("set_fraction"));
ProtoBody17.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("_2"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("_4"));
ROUTE49.setToField(CString("set_fraction"));
ProtoBody17.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("_2"));
ROUTE50.setFromField(CString("isActive"));
ROUTE50.setToNode(CString("_guide_1"));
ROUTE50.setToField(CString("isActive"));
ProtoBody17.addChild(&ROUTE50);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

Group& Group51 =  Group();
WorldInfo& WorldInfo52 =  WorldInfo();
WorldInfo52.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group51.addChild(&WorldInfo52);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("TourGuide"));
Group51.addChild(&ProtoInstance53);

Scene7.addChild(&Group51);

X3D0.setScene(&Scene7);

//}
