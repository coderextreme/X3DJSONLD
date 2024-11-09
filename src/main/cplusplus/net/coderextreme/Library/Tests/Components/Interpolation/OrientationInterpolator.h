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
meta3.setContent(CString("Mon, 04 Jan 2016 06:29:42 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.3.3, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://rawgit.com/create3000/Library/master/Tests/Components/Interpolation/OrientationInterpolator.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 27 Oct 2018 09:53:37 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("titania-output-style"));
meta8.setContent(CString("Nicest"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ExternProtoDeclare& ExternProtoDeclare10 =  ExternProtoDeclare();
ExternProtoDeclare10.setName(CString("LineTrail"));
ExternProtoDeclare10.setUrl(new CString[]{CString("https://cdn.rawgit.com/create3000/Titania/master/Library/Tests/Interpolation/LineTrail.wrl")}, 1);
field& field11 =  field();
field11.setName(CString("enabled"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
ExternProtoDeclare10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("cycleInterval"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("resetTime"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("point"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFVec3f"));
ExternProtoDeclare10.addChild(&field14);

field& field15 =  field();
field15.setName(CString("dimension"));
field15.setAccessType(CString("initializeOnly"));
field15.setType(CString("SFInt32"));
ExternProtoDeclare10.addChild(&field15);

Scene9.addChild(&ExternProtoDeclare10);

WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("OrientationChaser"));
MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Titania"));
MetadataSet17.setDEF(CString("Titania"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("NavigationInfo"));
MetadataSet18.setDEF(CString("NavigationInfo"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString19 =  MetadataString();
MetadataString19.X3DNode::setName(CString("type"));
MetadataString19.setDEF(CString("type"));
MetadataString19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString19.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet18.setValue((X3DNode *)&MetadataString19);

MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("Viewpoint"));
MetadataSet20.setDEF(CString("Viewpoint"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble21 =  MetadataDouble();
MetadataDouble21.X3DNode::setName(CString("position"));
MetadataDouble21.setDEF(CString("position"));
MetadataDouble21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble21.setValue(new double[]{-1.26207339763641,-3.20390677452087,-3.62576198577881}, 3);
MetadataSet20.setValue((X3DNode *)&MetadataDouble21);

MetadataDouble& MetadataDouble22 =  MetadataDouble();
MetadataDouble22.X3DNode::setName(CString("orientation"));
MetadataDouble22.setDEF(CString("orientation"));
MetadataDouble22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble22.setValue(new double[]{0.00718989036977291,-0.937747418880463,0.347243458032608,2.86365866661072}, 4);
MetadataSet20.setValue((X3DNode *)&MetadataDouble22);

MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble23.setDEF(CString("centerOfRotation"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet20.setValue((X3DNode *)&MetadataDouble23);

MetadataSet17.setValue((X3DNode *)&MetadataSet20);

MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Page"));
MetadataSet24.setDEF(CString("Page"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger25 =  MetadataInteger();
MetadataInteger25.X3DNode::setName(CString("activeView"));
MetadataInteger25.setDEF(CString("activeView"));
MetadataInteger25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger25.setValue(MFInt320);
MetadataSet24.setValue((X3DNode *)&MetadataInteger25);

MetadataInteger& MetadataInteger26 =  MetadataInteger();
MetadataInteger26.X3DNode::setName(CString("multiView"));
MetadataInteger26.setDEF(CString("multiView"));
MetadataInteger26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger26.setValue(MFInt321);
MetadataSet24.setValue((X3DNode *)&MetadataInteger26);

MetadataSet17.setValue((X3DNode *)&MetadataSet24);

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
Script& Script30 =  Script();
Script30.setDEF(CString("FollowerScript"));
field& field31 =  field();
field31.setName(CString("set_time"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFTime"));
Script30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_active"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFBool"));
Script30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_rotation"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFRotation"));
Script30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("color_changed"));
field34.setAccessType(CString("outputOnly"));
field34.setType(CString("SFColor"));
Script30.addChild(&field34);

field& field35 =  field();
field35.setName(CString("point_changed"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("SFVec3f"));
Script30.addChild(&field35);

field& field36 =  field();
field36.setName(CString("touchSensor"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFNode"));
TouchSensor& TouchSensor37 =  TouchSensor();
TouchSensor37.setDEF(CString("Touch"));
field36.addChild(&TouchSensor37);

Script30.addChild(&field36);

field& field38 =  field();
field38.setName(CString("timeSensor"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFNode"));
TimeSensor& TimeSensor39 =  TimeSensor();
TimeSensor39.setDEF(CString("_1"));
TimeSensor39.setCycleInterval(2);
TimeSensor39.setStartTime(1540633981.11618);
TimeSensor39.setStopTime(1540633981.11618);
field38.addChild(&TimeSensor39);

Script30.addChild(&field38);

field& field40 =  field();
field40.setName(CString("interpolator"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator41 =  OrientationInterpolator();
OrientationInterpolator41.setDEF(CString("_2"));
OrientationInterpolator41.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator41.setKeyValue(new float[]{0.835275572584412,-0.549831535876019,0.0,0.558846203626118,-0.894060667491528,0.44794589276452,0.0,0.919814454880826}, 8);
field40.addChild(&OrientationInterpolator41);

Script30.addChild(&field40);


//Script30.setSourceCode(CString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	timeSensor .stopTime  = 0;")+
//_T("	timeSensor .startTime = 0;")+
//_T("	interpolator .keyValue [0] = new SFRotation ();")+
//_T("	interpolator .keyValue [1] = new SFRotation ();")+
//_T("}")+
//_T("function set_time (value, time)")+
//_T("{")+
//_T("	timeSensor .stopTime  = time;")+
//_T("	timeSensor .startTime = time;")+
//_T("	interpolator .keyValue [0] = interpolator .value_changed;")+
//_T("	interpolator .keyValue [1] = new SFRotation (new SFVec3f (0, 0, 1), touchSensor .hitPoint_changed);")+
//_T("}")+
//_T("function set_active (value)")+
//_T("{")+
//_T("	if (value)")+
//_T("		color_changed = new SFColor (0.8, 0, 0);")+
//_T("	")+
//_T("	else")+
//_T("		color_changed = new SFColor (0.8, 0.8, 0.8);")+
//_T("}")+
//_T("function set_rotation (value)")+
//_T("{")+
//_T("	point_changed = value .multVec (new SFVec3f (0, 0, 1));")+
//_T("}"));
MetadataSet29.setScript(Script30);

MetadataSet27.setValue((X3DNode *)&MetadataSet29);

MetadataSet17.setValue((X3DNode *)&MetadataSet27);

WorldInfo16.setMetadata(&MetadataSet17);

Scene9.addChild(&WorldInfo16);

NavigationInfo& NavigationInfo42 =  NavigationInfo();
NavigationInfo42.setType(new CString[]{CString(", "), CString("NONEANY")}, 2);
Scene9.addChild(&NavigationInfo42);

Background& Background43 =  Background();
Background43.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene9.addChild(&Background43);

Viewpoint& Viewpoint44 =  Viewpoint();
Viewpoint44.setPosition(new float[]{0.0,0.0,5.0});
Scene9.addChild(&Viewpoint44);

Shape& Shape45 =  Shape();
Shape45.setDEF(CString("LineTrail"));
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setEmissiveColor(new float[]{0.0,0.8,0.8});
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

ProtoInstance& ProtoInstance48 =  ProtoInstance();
ProtoInstance48.setName(CString("LineTrail"));
ProtoInstance48.setDEF(CString("Trail"));
fieldValue& fieldValue49 =  fieldValue();
fieldValue49.setName(CString("enabled"));
fieldValue49.setValue(CString("false"));
ProtoInstance48.addChild(&fieldValue49);

fieldValue& fieldValue50 =  fieldValue();
fieldValue50.setName(CString("cycleInterval"));
fieldValue50.setValue(CString("0.1"));
ProtoInstance48.addChild(&fieldValue50);

fieldValue& fieldValue51 =  fieldValue();
fieldValue51.setName(CString("point"));
fieldValue51.setValue(CString("0.356336 0.711216 0.605968"));
ProtoInstance48.addChild(&fieldValue51);

fieldValue& fieldValue52 =  fieldValue();
fieldValue52.setName(CString("dimension"));
fieldValue52.setValue(CString("100"));
ProtoInstance48.addChild(&fieldValue52);

Shape45.setGeometry(&ProtoInstance48);

Scene9.addChild(&Shape45);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("Sphere"));
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setTransparency(0.5);
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Sphere& Sphere57 =  Sphere();
Shape54.setGeometry(&Sphere57);

Transform53.addChild(&Shape54);

TouchSensor& TouchSensor58 =  TouchSensor();
TouchSensor58.setUSE(CString("Touch"));
Transform53.addChild(&TouchSensor58);

Scene9.addChild(&Transform53);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("Cone"));
Transform59.setRotation(new float[]{-0.894060667491529,0.44794589276452,0.0,0.919814454880826});
Transform& Transform60 =  Transform();
Transform60.setDEF(CString("Cone_3"));
Transform60.setTranslation(new float[]{0.0,0.0,0.192283});
Transform60.setRotation(new float[]{1.0,0.0,0.0,1.5708});
Transform60.setScale(new float[]{0.770473,0.770473,0.770473});
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDEF(CString("ConeMaterial"));
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

Cone& Cone64 =  Cone();
Shape61.setGeometry(&Cone64);

Transform60.addChild(&Shape61);

Transform59.addChild(&Transform60);

Transform& Transform65 =  Transform();
Transform65.setDEF(CString("IndexedLineSet"));
Shape& Shape66 =  Shape();
IndexedLineSet& IndexedLineSet67 =  IndexedLineSet();
IndexedLineSet67.setColorPerVertex(false);
IndexedLineSet67.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet67.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color68 =  CColor();
Color68.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet67.setColor(&Color68);

Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
IndexedLineSet67.setCoord(&Coordinate69);

Shape66.setGeometry(&IndexedLineSet67);

Transform65.addChild(&Shape66);

Transform59.addChild(&Transform65);

Scene9.addChild(&Transform59);

Script& Script70 =  Script();
Script70.setUSE(CString("FollowerScript"));
Scene9.addChild(&Script70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Touch"));
ROUTE71.setFromField(CString("touchTime"));
ROUTE71.setToNode(CString("FollowerScript"));
ROUTE71.setToField(CString("set_time"));
Scene9.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("FollowerScript"));
ROUTE72.setFromField(CString("color_changed"));
ROUTE72.setToNode(CString("ConeMaterial"));
ROUTE72.setToField(CString("set_diffuseColor"));
Scene9.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("FollowerScript"));
ROUTE73.setFromField(CString("point_changed"));
ROUTE73.setToNode(CString("Trail"));
ROUTE73.setToField(CString("set_point"));
Scene9.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromNode(CString("_2"));
ROUTE74.setFromField(CString("value_changed"));
ROUTE74.setToNode(CString("FollowerScript"));
ROUTE74.setToField(CString("set_rotation"));
Scene9.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromNode(CString("_2"));
ROUTE75.setFromField(CString("value_changed"));
ROUTE75.setToNode(CString("Cone"));
ROUTE75.setToField(CString("set_rotation"));
Scene9.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromNode(CString("_1"));
ROUTE76.setFromField(CString("isActive"));
ROUTE76.setToNode(CString("Trail"));
ROUTE76.setToField(CString("set_enabled"));
Scene9.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("_1"));
ROUTE77.setFromField(CString("isActive"));
ROUTE77.setToNode(CString("FollowerScript"));
ROUTE77.setToField(CString("set_active"));
Scene9.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("_1"));
ROUTE78.setFromField(CString("fraction_changed"));
ROUTE78.setToNode(CString("_2"));
ROUTE78.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE78);

X3D0.setScene(&Scene9);

//}
