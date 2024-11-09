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
meta3.setContent(CString("Fri, 18 Sep 2015 12:58:13 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 14 Nov 2015 16:00:30 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("ProximitySensor"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("ProximitySensor"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("NavigationInfo"));
MetadataSet11.setDEF(CString("NavigationInfo"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString12 =  MetadataString();
MetadataString12.X3DNode::setName(CString("type"));
MetadataString12.setDEF(CString("type"));
MetadataString12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString12.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet11.setValue((X3DNode *)&MetadataString12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Viewpoint"));
MetadataSet13.setDEF(CString("Viewpoint"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("position"));
MetadataDouble14.setDEF(CString("position"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{0,0,5}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0,0,1,0}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{0,0,1}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setTransitionType(new CString[]{CString("ANIMATE")}, 1);
NavigationInfo17.setTransitionTime(10);
Scene8.addChild(&NavigationInfo17);

Background& Background18 =  Background();
Background18.setSkyColor(new float[]{0.5,0,0}, 3);
Scene8.addChild(&Background18);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("Test"));
Transform19.setTranslation(new float[]{10,10,10});
Transform19.setRotation(new float[]{-0.981245,-0.0143457,-0.192232,5.67512});
Transform19.setScale(new float[]{20,10,5});
Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDEF(CString("Front"));
Viewpoint20.setDescription(CString("Front"));
Viewpoint20.setPosition(new float[]{0,0,5});
Viewpoint20.setCenterOfRotation(new float[]{0,0,1});
Viewpoint20.setRetainUserOffsets(True);
Transform19.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDEF(CString("Right"));
Viewpoint21.setDescription(CString("Right"));
Viewpoint21.setPosition(new float[]{4,0,1});
Viewpoint21.setOrientation(new float[]{0,1,0,1.5708});
Viewpoint21.setCenterOfRotation(new float[]{0,0,1});
Transform19.addChild(&Viewpoint21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("Side"));
Viewpoint22.setDescription(CString("Side"));
Viewpoint22.setPosition(new float[]{4,0,5});
Viewpoint22.setOrientation(new float[]{0,1,0,0.785398});
Viewpoint22.setCenterOfRotation(new float[]{0,0,1});
Transform19.addChild(&Viewpoint22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("Back"));
Viewpoint23.setDescription(CString("Back"));
Viewpoint23.setPosition(new float[]{0,0,-3});
Viewpoint23.setOrientation(new float[]{0,1,0,3.14159});
Viewpoint23.setCenterOfRotation(new float[]{0,0,1});
Transform19.addChild(&Viewpoint23);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("Top"));
Viewpoint24.setDescription(CString("Top"));
Viewpoint24.setPosition(new float[]{0,4,1});
Viewpoint24.setOrientation(new float[]{-1,0,0,1.5708});
Viewpoint24.setCenterOfRotation(new float[]{0,0,1});
Transform19.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("Center"));
Viewpoint25.setDescription(CString("Center"));
Viewpoint25.setPosition(new float[]{2,0,5});
Viewpoint25.setCenterOfRotation(new float[]{0,0,1});
Transform19.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDEF(CString("Jump"));
Viewpoint26.setDescription(CString("Jump"));
Viewpoint26.setJump(False);
Transform19.addChild(&Viewpoint26);

Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{0,0,1});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Appearance29.addChild(&Material30);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setDEF(CString("Cube"));
IndexedFaceSet31.setSolid(False);
IndexedFaceSet31.setColorPerVertex(False);
IndexedFaceSet31.setColorIndex(new int[]{0,1,2,3,4,5}, 6);
IndexedFaceSet31.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
IndexedFaceSet31.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
CColor& Color32 =  CColor();
Color32.setColor(new float[]{1,0,0,0,1,0,0,0,1,1,1,0,0,1,1,1,0,1}, 18);
IndexedFaceSet31.setColor(&Color32);

TextureCoordinate& TextureCoordinate33 =  TextureCoordinate();
TextureCoordinate33.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet31.setTexCoord(&TextureCoordinate33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1}, 24);
IndexedFaceSet31.setCoord(&Coordinate34);

Shape28.setGeometry(&IndexedFaceSet31);

Transform27.addChild(&Shape28);

Shape& Shape35 =  Shape();
Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setDiffuseColor(new float[]{0.5,0,1});
Material37.setTransparency(0.5);
Appearance36.addChild(&Material37);

Shape35.addChild(&Appearance36);

Box& Box38 =  Box();
Box38.setSize(new float[]{20,20,20});
Box38.setSolid(False);
Shape35.setGeometry(&Box38);

Transform27.addChild(&Shape35);

ProximitySensor& ProximitySensor39 =  ProximitySensor();
ProximitySensor39.setDEF(CString("Sensor"));
ProximitySensor39.setSize(new float[]{20,20,20});
Transform27.addChild(&ProximitySensor39);

Transform19.addChild(&Transform27);

Scene8.addChild(&Transform19);

Script& Script40 =  Script();
Script40.setDEF(CString("Debug"));
field& field41 =  field();
field41.setName(CString("set_position"));
field41.setAccessType(CString("inputOnly"));
field41.setType(CString("SFVec3f"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("set_orientation"));
field42.setAccessType(CString("inputOnly"));
field42.setType(CString("SFRotation"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_enterTime"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFTime"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(CString("set_exitTime"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFTime"));
Script40.addChild(&field44);

field& field45 =  field();
field45.setName(CString("set_active"));
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("SFBool"));
Script40.addChild(&field45);


Script40.setSourceCode(CString("javascript:")+
_T("function set_position (value, time)")+
_T("{")+
_T("	print ('position: ' + value);")+
_T("}")+
_T("function set_orientation (value, time)")+
_T("{")+
_T("	print ('orientation: ' + value);")+
_T("}")+
_T("function set_active (value, time)")+
_T("{")+
_T("	print ('isActive: ' + value);")+
_T("}")+
_T("function set_enterTime (value, time)")+
_T("{")+
_T("	print ('enterTime: ' + value);")+
_T("}")+
_T("function set_exitTime (value, time)")+
_T("{")+
_T("	print ('exitTime: ' + value);")+
_T("}"));
Scene8.addChild(&Script40);

Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setDEF(CString("Outside"));
Viewpoint46.setDescription(CString("Outside"));
Viewpoint46.setPosition(new float[]{0,0,500});
Viewpoint46.setCenterOfRotation(new float[]{0,0,1});
Scene8.addChild(&Viewpoint46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("Sensor"));
ROUTE47.setFromField(CString("position_changed"));
ROUTE47.setToNode(CString("Debug"));
ROUTE47.setToField(CString("set_position"));
Scene8.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("Sensor"));
ROUTE48.setFromField(CString("orientation_changed"));
ROUTE48.setToNode(CString("Debug"));
ROUTE48.setToField(CString("set_orientation"));
Scene8.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Sensor"));
ROUTE49.setFromField(CString("enterTime"));
ROUTE49.setToNode(CString("Debug"));
ROUTE49.setToField(CString("set_enterTime"));
Scene8.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Sensor"));
ROUTE50.setFromField(CString("exitTime"));
ROUTE50.setToNode(CString("Debug"));
ROUTE50.setToField(CString("set_exitTime"));
Scene8.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Sensor"));
ROUTE51.setFromField(CString("isActive"));
ROUTE51.setToNode(CString("Debug"));
ROUTE51.setToField(CString("set_active"));
Scene8.addChild(&ROUTE51);

X3D0.setScene(&Scene8);

}
