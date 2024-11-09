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
meta3.setContent(CString("Mon, 04 Jan 2016 05:18:49 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/Follower/ScalarChaser.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Thu, 08 Mar 2018 09:10:36 GMT"));
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
ExternProtoDeclare15.setName(CString("SFVec3f"));
ExternProtoDeclare15.setUrl(new CString[]{CString("SFVec3f.x3dv")}, 1);
field& field16 =  field();
field16.setName(CString("set_triggerTime"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFTime"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("keyValue"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("value_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFVec3f"));
ExternProtoDeclare15.addChild(&field18);

Scene8.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("SFVec2f"));
ExternProtoDeclare19.setUrl(new CString[]{CString("SFVec2f.x3dv")}, 1);
field& field20 =  field();
field20.setName(CString("set_triggerTime"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("keyValue"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFVec2f"));
ExternProtoDeclare19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("value_changed"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFVec2f"));
ExternProtoDeclare19.addChild(&field22);

Scene8.addChild(&ExternProtoDeclare19);

ExternProtoDeclare& ExternProtoDeclare23 =  ExternProtoDeclare();
ExternProtoDeclare23.setName(CString("SFFloat"));
ExternProtoDeclare23.setUrl(new CString[]{CString("SFFloat.x3dv")}, 1);
field& field24 =  field();
field24.setName(CString("set_triggerTime"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
ExternProtoDeclare23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("keyValue"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFFloat"));
ExternProtoDeclare23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("value_changed"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFFloat"));
ExternProtoDeclare23.addChild(&field26);

Scene8.addChild(&ExternProtoDeclare23);

WorldInfo& WorldInfo27 =  WorldInfo();
WorldInfo27.setTitle(CString("PositionChaser"));
MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("Titania"));
MetadataSet28.setDEF(CString("Titania"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("NavigationInfo"));
MetadataSet29.setDEF(CString("NavigationInfo"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString30 =  MetadataString();
MetadataString30.X3DNode::setName(CString("type"));
MetadataString30.setDEF(CString("type"));
MetadataString30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString30.setValue(new CString[]{CString("NONE")}, 1);
MetadataSet29.setValue((X3DNode *)&MetadataString30);

MetadataSet28.setValue((X3DNode *)&MetadataSet29);

MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("Viewpoint"));
MetadataSet31.setDEF(CString("Viewpoint"));
MetadataSet31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("position"));
MetadataDouble32.setDEF(CString("position"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble32);

MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("orientation"));
MetadataDouble33.setDEF(CString("orientation"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet31.setValue((X3DNode *)&MetadataDouble33);

MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble34.setDEF(CString("centerOfRotation"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble34);

MetadataSet28.setValue((X3DNode *)&MetadataSet31);

MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("Selection"));
MetadataSet35.setDEF(CString("Selection"));
MetadataSet35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean36 =  MetadataBoolean();
MetadataBoolean36.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean36.setDEF(CString("selectGeometry"));
MetadataBoolean36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean36.setValue(new boolean[]{false});
MetadataSet35.setValue((X3DNode *)&MetadataBoolean36);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("nodes"));
MetadataSet37.setDEF(CString("nodes"));
MetadataSet37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet35.setValue((X3DNode *)&MetadataSet37);

MetadataSet28.setValue((X3DNode *)&MetadataSet35);

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

MetadataSet28.setValue((X3DNode *)&MetadataSet38);

WorldInfo27.setMetadata(&MetadataSet28);

Scene8.addChild(&WorldInfo27);

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

ScalarChaser& ScalarChaser50 =  ScalarChaser();
ScalarChaser50.setDEF(CString("X"));
ScalarChaser50.setDuration(2);
Scene8.addChild(&ScalarChaser50);

ScalarChaser& ScalarChaser51 =  ScalarChaser();
ScalarChaser51.setDEF(CString("Y"));
ScalarChaser51.setDuration(2);
Scene8.addChild(&ScalarChaser51);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("Sphere"));
Transform52.setTranslation(new float[]{2.45296,1.55582,0.0});
Transform52.setScale(new float[]{0.192862,0.192862,0.192862});
Shape& Shape53 =  Shape();
Appearance& Appearance54 =  Appearance();
Material& Material55 =  Material();
Material55.setDEF(CString("SphereMaterial"));
Appearance54.addChild(&Material55);

Shape53.addChild(&Appearance54);

Sphere& Sphere56 =  Sphere();
Shape53.setGeometry(&Sphere56);

Transform52.addChild(&Shape53);

Scene8.addChild(&Transform52);

Shape& Shape57 =  Shape();
Shape57.setDEF(CString("LineTrail"));
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setEmissiveColor(new float[]{0.0,0.8,0.8});
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("LineTrail"));
ProtoInstance60.setDEF(CString("Trail"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("enabled"));
fieldValue61.setValue(CString("false"));
ProtoInstance60.addChild(&fieldValue61);

fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("cycleInterval"));
fieldValue62.setValue(CString("0.1"));
ProtoInstance60.addChild(&fieldValue62);

fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("point"));
fieldValue63.setValue(CString("2.45296 1.55582 0"));
ProtoInstance60.addChild(&fieldValue63);

fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("dimension"));
fieldValue64.setValue(CString("200"));
ProtoInstance60.addChild(&fieldValue64);

Shape57.setGeometry(&ProtoInstance60);

Scene8.addChild(&Shape57);

Script& Script65 =  Script();
Script65.setDEF(CString("FollowerScript"));
field& field66 =  field();
field66.setName(CString("set_time"));
field66.setAccessType(CString("inputOnly"));
field66.setType(CString("SFTime"));
Script65.addChild(&field66);

field& field67 =  field();
field67.setName(CString("set_active"));
field67.setAccessType(CString("inputOnly"));
field67.setType(CString("SFBool"));
Script65.addChild(&field67);

field& field68 =  field();
field68.setName(CString("set_valueX"));
field68.setAccessType(CString("inputOnly"));
field68.setType(CString("SFFloat"));
Script65.addChild(&field68);

field& field69 =  field();
field69.setName(CString("set_valueY"));
field69.setAccessType(CString("inputOnly"));
field69.setType(CString("SFFloat"));
Script65.addChild(&field69);

field& field70 =  field();
field70.setName(CString("color_changed"));
field70.setAccessType(CString("outputOnly"));
field70.setType(CString("SFColor"));
Script65.addChild(&field70);

field& field71 =  field();
field71.setName(CString("destinationX_changed"));
field71.setAccessType(CString("outputOnly"));
field71.setType(CString("SFFloat"));
Script65.addChild(&field71);

field& field72 =  field();
field72.setName(CString("destinationY_changed"));
field72.setAccessType(CString("outputOnly"));
field72.setType(CString("SFFloat"));
Script65.addChild(&field72);

field& field73 =  field();
field73.setName(CString("value_changed"));
field73.setAccessType(CString("outputOnly"));
field73.setType(CString("SFVec3f"));
Script65.addChild(&field73);

field& field74 =  field();
field74.setName(CString("touchSensor"));
field74.setAccessType(CString("initializeOnly"));
field74.setType(CString("SFNode"));
TouchSensor& TouchSensor75 =  TouchSensor();
TouchSensor75.setUSE(CString("Touch"));
field74.addChild(&TouchSensor75);

Script65.addChild(&field74);


//Script65.setSourceCode(CString("vrmlscript:")+
//_T("function set_time ()")+
//_T("{")+
//_T("	destinationX_changed = touchSensor .hitPoint_changed .x;")+
//_T("	destinationY_changed = touchSensor .hitPoint_changed .y;")+
//_T("}")+
//_T("function set_active (value)")+
//_T("{")+
//_T("	if (value)")+
//_T("		color_changed = new SFColor (0.8, 0, 0);")+
//_T("	")+
//_T("	else")+
//_T("		color_changed = new SFColor (0.8, 0.8, 0.8);")+
//_T("}")+
//_T("function set_valueX (value)")+
//_T("{")+
//_T("	value_changed .x = value;")+
//_T("}")+
//_T("function set_valueY (value)")+
//_T("{")+
//_T("	value_changed .y = value;")+
//_T("}"));
Scene8.addChild(&Script65);

Transform& Transform76 =  Transform();
Transform76.setDEF(CString("ResetBox"));
Transform76.setTranslation(new float[]{4.43603,0.0,0.0});
Transform76.setScale(new float[]{0.167946,0.167946,0.167946});
Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Material& Material79 =  Material();
Appearance78.addChild(&Material79);

Shape77.addChild(&Appearance78);

Box& Box80 =  Box();
Shape77.setGeometry(&Box80);

Transform76.addChild(&Shape77);

TouchSensor& TouchSensor81 =  TouchSensor();
TouchSensor81.setDEF(CString("ResetTouch"));
Transform76.addChild(&TouchSensor81);

ProtoInstance& ProtoInstance82 =  ProtoInstance();
ProtoInstance82.setName(CString("SFFloat"));
ProtoInstance82.setDEF(CString("_1"));
Transform76.addChild(&ProtoInstance82);

Scene8.addChild(&Transform76);

Transform& Transform83 =  Transform();
Transform83.setDEF(CString("ResetBox_2"));
Transform83.setTranslation(new float[]{4.43603,-0.67719,0.0});
Transform83.setScale(new float[]{0.167946,0.167946,0.167946});
Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

Box& Box87 =  Box();
Shape84.setGeometry(&Box87);

Transform83.addChild(&Shape84);

TouchSensor& TouchSensor88 =  TouchSensor();
TouchSensor88.setDEF(CString("ResetTouch_3"));
Transform83.addChild(&TouchSensor88);

ProtoInstance& ProtoInstance89 =  ProtoInstance();
ProtoInstance89.setName(CString("SFFloat"));
ProtoInstance89.setDEF(CString("_4"));
fieldValue& fieldValue90 =  fieldValue();
fieldValue90.setName(CString("keyValue"));
fieldValue90.setValue(CString("1"));
ProtoInstance89.addChild(&fieldValue90);

Transform83.addChild(&ProtoInstance89);

Scene8.addChild(&Transform83);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("Touch"));
ROUTE91.setFromField(CString("touchTime"));
ROUTE91.setToNode(CString("FollowerScript"));
ROUTE91.setToField(CString("set_time"));
Scene8.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("FollowerScript"));
ROUTE92.setFromField(CString("color_changed"));
ROUTE92.setToNode(CString("SphereMaterial"));
ROUTE92.setToField(CString("set_diffuseColor"));
Scene8.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("FollowerScript"));
ROUTE93.setFromField(CString("value_changed"));
ROUTE93.setToNode(CString("Trail"));
ROUTE93.setToField(CString("set_point"));
Scene8.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("FollowerScript"));
ROUTE94.setFromField(CString("value_changed"));
ROUTE94.setToNode(CString("Sphere"));
ROUTE94.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("ResetTouch"));
ROUTE95.setFromField(CString("touchTime"));
ROUTE95.setToNode(CString("_1"));
ROUTE95.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(CString("_1"));
ROUTE96.setFromField(CString("value_changed"));
ROUTE96.setToNode(CString("Y"));
ROUTE96.setToField(CString("set_value"));
Scene8.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(CString("_1"));
ROUTE97.setFromField(CString("value_changed"));
ROUTE97.setToNode(CString("X"));
ROUTE97.setToField(CString("set_value"));
Scene8.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(CString("Y"));
ROUTE98.setFromField(CString("isActive"));
ROUTE98.setToNode(CString("Trail"));
ROUTE98.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromNode(CString("Y"));
ROUTE99.setFromField(CString("isActive"));
ROUTE99.setToNode(CString("FollowerScript"));
ROUTE99.setToField(CString("set_active"));
Scene8.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromNode(CString("FollowerScript"));
ROUTE100.setFromField(CString("destinationX_changed"));
ROUTE100.setToNode(CString("X"));
ROUTE100.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromNode(CString("FollowerScript"));
ROUTE101.setFromField(CString("destinationY_changed"));
ROUTE101.setToNode(CString("Y"));
ROUTE101.setToField(CString("set_destination"));
Scene8.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromNode(CString("X"));
ROUTE102.setFromField(CString("value_changed"));
ROUTE102.setToNode(CString("FollowerScript"));
ROUTE102.setToField(CString("set_valueX"));
Scene8.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromNode(CString("Y"));
ROUTE103.setFromField(CString("value_changed"));
ROUTE103.setToNode(CString("FollowerScript"));
ROUTE103.setToField(CString("set_valueY"));
Scene8.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("ResetTouch_3"));
ROUTE104.setFromField(CString("touchTime"));
ROUTE104.setToNode(CString("_4"));
ROUTE104.setToField(CString("set_triggerTime"));
Scene8.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("_4"));
ROUTE105.setFromField(CString("value_changed"));
ROUTE105.setToNode(CString("Y"));
ROUTE105.setToField(CString("set_value"));
Scene8.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("_4"));
ROUTE106.setFromField(CString("value_changed"));
ROUTE106.setToNode(CString("X"));
ROUTE106.setToField(CString("set_value"));
Scene8.addChild(&ROUTE106);

X3D0.setScene(&Scene8);

//}
