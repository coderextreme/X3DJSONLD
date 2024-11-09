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
meta3.setContent(CString("Mon, 14 Sep 2015 20:59:23 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Mon, 14 Sep 2015 20:59:23 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Rotor"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("cycleInterval"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
field11.setValue(CString("1"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("axis"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 0 1"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("angle"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFFloat"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("loop"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFBool"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("startTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("pauseTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ProtoInterface9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("resumeTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ProtoInterface9.addChild(&field17);

field& field18 =  field();
field18.setName(CString("stopTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ProtoInterface9.addChild(&field18);

field& field19 =  field();
field19.setName(CString("isActive"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFBool"));
ProtoInterface9.addChild(&field19);

field& field20 =  field();
field20.setName(CString("cycleTime"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFTime"));
ProtoInterface9.addChild(&field20);

field& field21 =  field();
field21.setName(CString("rotation_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFRotation"));
ProtoInterface9.addChild(&field21);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody22 =  ProtoBody();
TimeSensor& TimeSensor23 =  TimeSensor();
TimeSensor23.setDEF(CString("Timer"));
IS& IS24 =  IS();
Connect& connect25 =  Connect();
connect25.setNodeField(CString("enabled"));
connect25.setProtoField(CString("enabled"));
IS24.addChild(&connect25);

Connect& connect26 =  Connect();
connect26.setNodeField(CString("cycleInterval"));
connect26.setProtoField(CString("cycleInterval"));
IS24.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("loop"));
connect27.setProtoField(CString("loop"));
IS24.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("startTime"));
connect28.setProtoField(CString("startTime"));
IS24.addChild(&connect28);

Connect& connect29 =  Connect();
connect29.setNodeField(CString("pauseTime"));
connect29.setProtoField(CString("pauseTime"));
IS24.addChild(&connect29);

Connect& connect30 =  Connect();
connect30.setNodeField(CString("resumeTime"));
connect30.setProtoField(CString("resumeTime"));
IS24.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("stopTime"));
connect31.setProtoField(CString("stopTime"));
IS24.addChild(&connect31);

Connect& connect32 =  Connect();
connect32.setNodeField(CString("isActive"));
connect32.setProtoField(CString("isActive"));
IS24.addChild(&connect32);

Connect& connect33 =  Connect();
connect33.setNodeField(CString("cycleTime"));
connect33.setProtoField(CString("cycleTime"));
IS24.addChild(&connect33);

TimeSensor23.addChild(&IS24);

ProtoBody22.addChild(&TimeSensor23);

OrientationInterpolator& OrientationInterpolator34 =  OrientationInterpolator();
OrientationInterpolator34.setDEF(CString("Interpolator"));
OrientationInterpolator34.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator34.setKeyValue(new float[]{0,0,1,0,0,0,1,1.5708,0,0,1,3.14159,0,0,1,4.71239,0,0,1,0}, 20);
IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("value_changed"));
connect36.setProtoField(CString("rotation_changed"));
IS35.addChild(&connect36);

OrientationInterpolator34.addChild(&IS35);

ProtoBody22.addChild(&OrientationInterpolator34);

Script& Script37 =  Script();
Script37.setDEF(CString("Rotor"));
field& field38 =  field();
field38.setName(CString("set_axis"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFVec3f"));
Script37.addChild(&field38);

field& field39 =  field();
field39.setName(CString("set_angle"));
field39.setAccessType(CString("inputOnly"));
field39.setType(CString("SFFloat"));
Script37.addChild(&field39);

field& field40 =  field();
field40.setName(CString("axis"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFVec3f"));
Script37.addChild(&field40);

field& field41 =  field();
field41.setName(CString("angle"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
Script37.addChild(&field41);

field& field42 =  field();
field42.setName(CString("interpolator"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator43 =  OrientationInterpolator();
OrientationInterpolator43.setUSE(CString("Interpolator"));
field42.addChild(&OrientationInterpolator43);

Script37.addChild(&field42);

IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("axis"));
connect45.setProtoField(CString("axis"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("angle"));
connect46.setProtoField(CString("angle"));
IS44.addChild(&connect46);

Script37.addChild(&IS44);


Script37.setSourceCode(CString("vrmlscript:")+
_T("function initialize ()")+
_T("{")+
_T("	eventsProcessed ();")+
_T("}")+
_T("function set_axis ()")+
_T("{ }")+
_T("function set_angle ()")+
_T("{ }")+
_T("function eventsProcessed ()")+
_T("{")+
_T("	var keyValue = interpolator .keyValue;")+
_T("	for (var i = 0; i < 4; ++ i)")+
_T("		keyValue [i] = new SFRotation (axis, angle + 2 * Math .PI / 4 * i);")+
_T("	")+
_T("	keyValue [4] = keyValue [0];")+
_T("}"));
ProtoBody22.addChild(&Script37);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Timer"));
ROUTE47.setFromField(CString("fraction_changed"));
ROUTE47.setToNode(CString("Interpolator"));
ROUTE47.setToField(CString("set_fraction"));
ProtoBody22.addChild(&ROUTE47);

ProtoDeclare8.addChild(&ProtoBody22);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
