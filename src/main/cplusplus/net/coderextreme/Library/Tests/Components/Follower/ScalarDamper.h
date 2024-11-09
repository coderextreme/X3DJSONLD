//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{0});
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
meta3.setContent(CString("Sun, 03 Jan 2016 08:35:00 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.0.6a, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/Follower/ScalarDamper.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Thu, 08 Mar 2018 09:21:55 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("LineTrail"));
ExternProtoDeclare9.setUrl(new CString[]{CString("LineTrail.x3dv")}, 1);
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("cycleInterval"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("resetTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("point"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
ExternProtoDeclare9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("dimension"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFInt32"));
ExternProtoDeclare9.addChild(&field14);

Scene8.addChild(&ExternProtoDeclare9);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("SFFloat"));
ExternProtoDeclare15.setUrl(new CString[]{CString("SFFloat.x3dv")}, 1);
field& field16 =  field();
field16.setName(CString("set_triggerTime"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("keyValue"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFFloat"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("value_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFFloat"));
ExternProtoDeclare15.addChild(&field18);

Scene8.addChild(&ExternProtoDeclare15);

WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(CString("PositionDamper2D"));
MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("Titania"));
MetadataSet20.setDEF(CString("Titania"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("NavigationInfo"));
MetadataSet21.setDEF(CString("NavigationInfo"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString22 =  MetadataString();
MetadataString22.X3DNode::setName(CString("type"));
MetadataString22.setDEF(CString("type"));
MetadataString22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString22.setValue(new CString[]{CString("NONE")}, 1);
MetadataSet21.setValue((X3DNode *)&MetadataString22);

MetadataSet20.setValue((X3DNode *)&MetadataSet21);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("Viewpoint"));
MetadataSet23.setDEF(CString("Viewpoint"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("position"));
MetadataDouble24.setDEF(CString("position"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet23.setValue((X3DNode *)&MetadataDouble24);

MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("orientation"));
MetadataDouble25.setDEF(CString("orientation"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet23.setValue((X3DNode *)&MetadataDouble25);

MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble26.setDEF(CString("centerOfRotation"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet23.setValue((X3DNode *)&MetadataDouble26);

MetadataSet20.setValue((X3DNode *)&MetadataSet23);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("Selection"));
MetadataSet27.setDEF(CString("Selection"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean28 =  MetadataBoolean();
MetadataBoolean28.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean28.setDEF(CString("selectGeometry"));
MetadataBoolean28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean28.setValue(new boolean[]{false});
MetadataSet27.setValue((X3DNode *)&MetadataBoolean28);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("nodes"));
MetadataSet29.setDEF(CString("nodes"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
Transform& Transform30 =  Transform();
Transform30.setDEF(CString("ResetBox_1"));
Transform30.setTranslation(new float[]{4.43603,-0.67719,0.0});
Transform30.setScale(new float[]{0.167946,0.167946,0.167946});
Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

Box& Box34 =  Box();
Shape31.setGeometry(&Box34);

Transform30.addChild(&Shape31);

TouchSensor& TouchSensor35 =  TouchSensor();
TouchSensor35.setDEF(CString("ResetTouch_2"));
Transform30.addChild(&TouchSensor35);

ProtoInstance& ProtoInstance36 =  ProtoInstance();
ProtoInstance36.setName(CString("SFFloat"));
ProtoInstance36.setDEF(CString("_3"));
fieldValue& fieldValue37 =  fieldValue();
fieldValue37.setName(CString("keyValue"));
fieldValue37.setValue(CString("1"));
ProtoInstance36.addChild(&fieldValue37);

Transform30.addChild(&ProtoInstance36);

MetadataSet29.setTransform(Transform30);

MetadataSet27.setValue((X3DNode *)&MetadataSet29);

MetadataSet20.setValue((X3DNode *)&MetadataSet27);

MetadataSet& MetadataSet38 =  MetadataSet();
MetadataSet38.X3DNode::setName(CString("Page"));
MetadataSet38.setDEF(CString("Page"));
MetadataSet38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger39 =  MetadataInteger();
MetadataInteger39.X3DNode::setName(CString("activeView"));
MetadataInteger39.setDEF(CString("activeView"));
MetadataInteger39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger39.setValue(MFInt320);
MetadataSet38.setValue((X3DNode *)&MetadataInteger39);

MetadataInteger& MetadataInteger40 =  MetadataInteger();
MetadataInteger40.X3DNode::setName(CString("multiView"));
MetadataInteger40.setDEF(CString("multiView"));
MetadataInteger40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger40.setValue(MFInt321);
MetadataSet38.setValue((X3DNode *)&MetadataInteger40);

MetadataSet20.setValue((X3DNode *)&MetadataSet38);

WorldInfo19.setMetadata(&MetadataSet20);

Scene8.addChild(&WorldInfo19);

NavigationInfo& NavigationInfo41 =  NavigationInfo();
NavigationInfo41.setType(new CString[]{CString(", "), CString("NONEANY")}, 2);
Scene8.addChild(&NavigationInfo41);

Background& Background42 =  Background();
Background42.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background42);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("Plane"));
TouchSensor& TouchSensor44 =  TouchSensor();
TouchSensor44.setDEF(CString("Touch"));
Transform43.addChild(&TouchSensor44);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("Rectangle2D"));
Transform45.setScale(new float[]{4.0,4.0,1.0});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDiffuseColor(new float[]{0.5,0.0,0.5});
Material48.setTransparency(0.5);
Appearance47.addChild(&Material48);

Shape46.addChild(&Appearance47);

Rectangle2D& Rectangle2D49 =  Rectangle2D();
Shape46.setGeometry(Rectangle2D49);

Transform45.addChild(&Shape46);

Transform43.addChild(&Transform45);

Scene8.addChild(&Transform43);

Script& Script50 =  Script();
Script50.setDEF(CString("DecomposeXYScript"));
field& field51 =  field();
field51.setName(CString("set_xy"));
field51.setAccessType(CString("inputOnly"));
field51.setType(CString("SFVec2f"));
Script50.addChild(&field51);

field& field52 =  field();
field52.setName(CString("x_changed"));
field52.setAccessType(CString("outputOnly"));
field52.setType(CString("SFFloat"));
Script50.addChild(&field52);

field& field53 =  field();
field53.setName(CString("y_changed"));
field53.setAccessType(CString("outputOnly"));
field53.setType(CString("SFFloat"));
Script50.addChild(&field53);


//Script50.setSourceCode(CString("ecmascript:")+
//_T("function set_xy (value)")+
//_T("{")+
//_T("	x_changed = value .x;")+
//_T("	y_changed = value .y;")+
//_T("}"));
Scene8.addChild(&Script50);

ScalarDamper& ScalarDamper54 =  ScalarDamper();
ScalarDamper54.setDEF(CString("X"));
ScalarDamper54.setInitialValue(2);
ScalarDamper54.setInitialDestination(-2);
Scene8.addChild(&ScalarDamper54);

ScalarDamper& ScalarDamper55 =  ScalarDamper();
ScalarDamper55.setDEF(CString("Y"));
ScalarDamper55.setInitialValue(2);
ScalarDamper55.setInitialDestination(-2);
Scene8.addChild(&ScalarDamper55);

Script& Script56 =  Script();
Script56.setDEF(CString("ComposeXYScript"));
field& field57 =  field();
field57.setName(CString("set_x"));
field57.setAccessType(CString("inputOnly"));
field57.setType(CString("SFFloat"));
Script56.addChild(&field57);

field& field58 =  field();
field58.setName(CString("set_y"));
field58.setAccessType(CString("inputOnly"));
field58.setType(CString("SFFloat"));
Script56.addChild(&field58);

field& field59 =  field();
field59.setName(CString("xy_changed"));
field59.setAccessType(CString("outputOnly"));
field59.setType(CString("SFVec2f"));
Script56.addChild(&field59);


//Script56.setSourceCode(CString("ecmascript:")+
//_T("function set_x (value)")+
//_T("{")+
//_T("	xy_changed .x = value;")+
//_T("}")+
//_T("function set_y (value)")+
//_T("{")+
//_T("	xy_changed .y = value;")+
//_T("}"));
Scene8.addChild(&Script56);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("Sphere"));
Transform60.setTranslation(new float[]{-1.9999,-1.9999,0.0});
Transform60.setScale(new float[]{0.192862,0.192862,0.192862});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDEF(CString("SphereMaterial"));
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

Sphere& Sphere64 =  Sphere();
Shape61.setGeometry(&Sphere64);

Transform60.addChild(&Shape61);

Scene8.addChild(&Transform60);

Shape& Shape65 =  Shape();
Shape65.setDEF(CString("LineTrail"));
Appearance& Appearance66 =  Appearance();
Material& Material67 =  Material();
Material67.setEmissiveColor(new float[]{0.0,0.8,0.8});
Appearance66.addChild(&Material67);

Shape65.addChild(&Appearance66);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("LineTrail"));
ProtoInstance68.setDEF(CString("Trail"));
fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("enabled"));
fieldValue69.setValue(CString("false"));
ProtoInstance68.addChild(&fieldValue69);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("cycleInterval"));
fieldValue70.setValue(CString("0.1"));
ProtoInstance68.addChild(&fieldValue70);

fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("point"));
fieldValue71.setValue(CString("-1.9999 -1.9999 0"));
ProtoInstance68.addChild(&fieldValue71);

fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("dimension"));
fieldValue72.setValue(CString("200"));
ProtoInstance68.addChild(&fieldValue72);

Shape65.setGeometry(&ProtoInstance68);

Scene8.addChild(&Shape65);

Script& Script73 =  Script();
Script73.setDEF(CString("FollowerScript"));
field& field74 =  field();
field74.setName(CString("set_time"));
field74.setAccessType(CString("inputOnly"));
field74.setType(CString("SFTime"));
Script73.addChild(&field74);

field& field75 =  field();
field75.setName(CString("set_value"));
field75.setAccessType(CString("inputOnly"));
field75.setType(CString("SFVec2f"));
Script73.addChild(&field75);

field& field76 =  field();
field76.setName(CString("set_active"));
field76.setAccessType(CString("inputOnly"));
field76.setType(CString("SFBool"));
Script73.addChild(&field76);

field& field77 =  field();
field77.setName(CString("color_changed"));
field77.setAccessType(CString("outputOnly"));
field77.setType(CString("SFColor"));
Script73.addChild(&field77);

field& field78 =  field();
field78.setName(CString("destination_changed"));
field78.setAccessType(CString("outputOnly"));
field78.setType(CString("SFVec2f"));
Script73.addChild(&field78);

field& field79 =  field();
field79.setName(CString("value_changed"));
field79.setAccessType(CString("outputOnly"));
field79.setType(CString("SFVec3f"));
Script73.addChild(&field79);

field& field80 =  field();
field80.setName(CString("touchSensor"));
field80.setAccessType(CString("initializeOnly"));
field80.setType(CString("SFNode"));
TouchSensor& TouchSensor81 =  TouchSensor();
TouchSensor81.setUSE(CString("Touch"));
field80.addChild(&TouchSensor81);

Script73.addChild(&field80);


//Script73.setSourceCode(CString("vrmlscript:")+
//_T("function set_time ()")+
//_T("{")+
//_T("	destination_changed = new SFVec2f (touchSensor .hitPoint_changed .x, touchSensor .hitPoint_changed .y);")+
//_T("}")+
//_T("function set_value (value)")+
//_T("{")+
//_T("	value_changed = new SFVec3f (value .x, value .y, 0);")+
//_T("}")+
//_T("function set_active (value)")+
//_T("{")+
//_T("	if (value)")+
//_T("		color_changed = new SFColor (0.8, 0, 0);")+
//_T("	")+
//_T("	else")+
//_T("		color_changed = new SFColor (0.8, 0.8, 0.8);")+
//_T("}"));
Scene8.addChild(&Script73);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("ResetBox"));
Transform82.setTranslation(new float[]{4.43603,0.0,0.0});
Transform82.setScale(new float[]{0.167946,0.167946,0.167946});
Shape& Shape83 =  Shape();
Appearance& Appearance84 =  Appearance();
Material& Material85 =  Material();
Appearance84.addChild(&Material85);

Shape83.addChild(&Appearance84);

Box& Box86 =  Box();
Shape83.setGeometry(&Box86);

Transform82.addChild(&Shape83);

TouchSensor& TouchSensor87 =  TouchSensor();
TouchSensor87.setDEF(CString("ResetTouch"));
Transform82.addChild(&TouchSensor87);

ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(CString("SFFloat"));
Transform82.addChild(&ProtoInstance88);

Scene8.addChild(&Transform82);

Transform& Transform89 =  Transform();
Transform89.setUSE(CString("ResetBox_1"));
Scene8.addChild(&Transform89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("Touch"));
ROUTE90.setFromField(CString("touchTime"));
ROUTE90.setToNode(CString("FollowerScript"));
ROUTE90.setToField(CString("set_time"));
Scene8.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("FollowerScript"));
ROUTE91.setFromField(CString("color_changed"));
ROUTE91.setToNode(CString("SphereMaterial"));
ROUTE91.setToField(CString("set_diffuseColor"));
Scene8.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("FollowerScript"));
ROUTE92.setFromField(CString("value_changed"));
ROUTE92.setToNode(CString("Sphere"));
ROUTE92.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("FollowerScript"));
ROUTE93.setFromField(CString("value_changed"));
ROUTE93.setToNode(CString("Trail"));
ROUTE93.setToField(CString("set_point"));
Scene8.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("FollowerScript"));
ROUTE94.setFromField(CString("destination_changed"));
ROUTE94.setToNode(CString("DecomposeXYScript"));
ROUTE94.setToField(CString("set_xy"));
Scene8.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("X"));
ROUTE95.setFromField(CString("isActive"));
ROUTE95.setToNode(CString("Trail"));
ROUTE95.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(CString("X"));
ROUTE96.setFromField(CString("isActive"));
ROUTE96.setToNode(CString("FollowerScript"));
ROUTE96.setToField(CString("set_active"));
Scene8.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(CString("X"));
ROUTE97.setFromField(CString("value_changed"));
ROUTE97.setToNode(CString("ComposeXYScript"));
ROUTE97.setToField(CString("set_x"));
Scene8.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(CString("ComposeXYScript"));
ROUTE98.setFromField(CString("xy_changed"));
ROUTE98.setToNode(CString("FollowerScript"));
ROUTE98.setToField(CString("set_value"));
Scene8.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromNode(CString("DecomposeXYScript"));
ROUTE99.setFromField(CString("x_changed"));
ROUTE99.setToNode(CString("X"));
ROUTE99.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromNode(CString("Y"));
ROUTE100.setFromField(CString("value_changed"));
ROUTE100.setToNode(CString("ComposeXYScript"));
ROUTE100.setToField(CString("set_y"));
Scene8.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromNode(CString("DecomposeXYScript"));
ROUTE101.setFromField(CString("y_changed"));
ROUTE101.setToNode(CString("Y"));
ROUTE101.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromNode(CString("ResetTouch_2"));
ROUTE102.setFromField(CString("touchTime"));
ROUTE102.setToNode(CString("_3"));
ROUTE102.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromNode(CString("_3"));
ROUTE103.setFromField(CString("value_changed"));
ROUTE103.setToNode(CString("X"));
ROUTE103.setToField(CString("set_value"));
Scene8.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("_3"));
ROUTE104.setFromField(CString("value_changed"));
ROUTE104.setToNode(CString("Y"));
ROUTE104.setToField(CString("set_value"));
Scene8.addChild(&ROUTE104);

X3D0.setScene(&Scene8);

//}
