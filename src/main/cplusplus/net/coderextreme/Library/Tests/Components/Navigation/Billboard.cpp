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
meta3.setContent(CString("Fri, 18 Sep 2015 01:10:27 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.2, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 02 Jan 2016 06:07:53 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Billboard 1 1 1"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("Billboard"));
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
MetadataDouble14.setValue(new double[]{0,0,10}, 3);
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
MetadataDouble16.setValue(new double[]{0,0,0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Background& Background17 =  Background();
Background17.setSkyAngle(new float[]{0.8,1.3,1.4,1.5708}, 4);
Background17.setSkyColor(new float[]{0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98}, 15);
Background17.setGroundAngle(new float[]{0.6,1.2,1.3,1.5708}, 4);
Background17.setGroundColor(new float[]{0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98}, 15);
Scene8.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("Front"));
Scene8.addChild(&Viewpoint18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDescription(CString("z pi/2"));
Viewpoint19.setOrientation(new float[]{0,0,1,1.5708});
Scene8.addChild(&Viewpoint19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDescription(CString("y pi/2"));
Viewpoint20.setPosition(new float[]{10,0,0});
Viewpoint20.setOrientation(new float[]{0,1,0,1.5708});
Scene8.addChild(&Viewpoint20);

ProximitySensor& ProximitySensor21 =  ProximitySensor();
ProximitySensor21.setDEF(CString("Proxy"));
ProximitySensor21.setSize(new float[]{1000,1000,1000});
Scene8.addChild(&ProximitySensor21);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("HUD"));
Transform22.setTranslation(new float[]{0,0,10});
Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{0,-0.3,-1});
Transform23.setScale(new float[]{0.02,0.02,0.02});
Transform& Transform24 =  Transform();
TouchSensor& TouchSensor25 =  TouchSensor();
TouchSensor25.setDEF(CString("TouchX"));
TouchSensor25.setDescription(CString("1 0 0"));
Transform24.addChild(&TouchSensor25);

Transform& Transform26 =  Transform();
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setDEF(CString("Rococo12"));
Material29.setAmbientIntensity(0.226102);
Material29.setDiffuseColor(new float[]{0.904409,0.146366,0.208768});
Material29.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material29.setShininess(0.078125);
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Box& Box30 =  Box();
Shape27.setGeometry(&Box30);

Transform26.addChild(&Shape27);

Transform24.addChild(&Transform26);

Transform23.addChild(&Transform24);

Transform& Transform31 =  Transform();
Transform31.setTranslation(new float[]{3,0,0});
TouchSensor& TouchSensor32 =  TouchSensor();
TouchSensor32.setDEF(CString("TouchY"));
TouchSensor32.setDescription(CString("0 1 0"));
Transform31.addChild(&TouchSensor32);

Transform& Transform33 =  Transform();
Shape& Shape34 =  Shape();
Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setDEF(CString("Rococo28"));
Material36.setAmbientIntensity(0.226102);
Material36.setDiffuseColor(new float[]{0.279645,0.904409,0.511589});
Material36.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material36.setShininess(0.078125);
Appearance35.addChild(&Material36);

Shape34.addChild(&Appearance35);

Box& Box37 =  Box();
Shape34.setGeometry(&Box37);

Transform33.addChild(&Shape34);

Transform31.addChild(&Transform33);

Transform23.addChild(&Transform31);

Transform& Transform38 =  Transform();
Transform38.setTranslation(new float[]{6,0,0});
TouchSensor& TouchSensor39 =  TouchSensor();
TouchSensor39.setDEF(CString("TouchXYZ"));
TouchSensor39.setDescription(CString("1 1 1"));
Transform38.addChild(&TouchSensor39);

Transform& Transform40 =  Transform();
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setDEF(CString("Rococo24"));
Material43.setAmbientIntensity(0.226102);
Material43.setDiffuseColor(new float[]{0.28636,0.554905,0.904409});
Material43.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material43.setShininess(0.078125);
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

Box& Box44 =  Box();
Shape41.setGeometry(&Box44);

Transform40.addChild(&Shape41);

Transform38.addChild(&Transform40);

Transform23.addChild(&Transform38);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{9,0,0});
TouchSensor& TouchSensor46 =  TouchSensor();
TouchSensor46.setDEF(CString("TouchZ"));
TouchSensor46.setDescription(CString("0 0 1"));
Transform45.addChild(&TouchSensor46);

Transform& Transform47 =  Transform();
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDEF(CString("Rococo1"));
Material50.setAmbientIntensity(0.187004);
Material50.setDiffuseColor(new float[]{0.636212,0.748016,0.300948});
Material50.setSpecularColor(new float[]{0.412121,0.412121,0.412121});
Material50.setShininess(0.8);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Box& Box51 =  Box();
Shape48.setGeometry(&Box51);

Transform47.addChild(&Shape48);

Transform45.addChild(&Transform47);

Transform23.addChild(&Transform45);

Transform& Transform52 =  Transform();
Transform52.setTranslation(new float[]{12,0,-5.68434e-14});
TouchSensor& TouchSensor53 =  TouchSensor();
TouchSensor53.setDEF(CString("TouchZ_1"));
TouchSensor53.setDescription(CString("0 0 0"));
Transform52.addChild(&TouchSensor53);

Transform& Transform54 =  Transform();
Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
Material& Material57 =  Material();
Material57.setDEF(CString("Rococo35"));
Material57.setAmbientIntensity(0.0499912);
Material57.setDiffuseColor(new float[]{0.195355,0.197924,0.199965});
Material57.setSpecularColor(new float[]{0.430303,0.430303,0.430303});
Material57.setShininess(0.406061);
Appearance56.addChild(&Material57);

Shape55.addChild(&Appearance56);

Box& Box58 =  Box();
Shape55.setGeometry(&Box58);

Transform54.addChild(&Shape55);

Transform52.addChild(&Transform54);

Transform23.addChild(&Transform52);

Transform22.addChild(&Transform23);

Scene8.addChild(&Transform22);

Transform& Transform59 =  Transform();
Billboard& Billboard60 =  Billboard();
Billboard60.setDEF(CString("Billboard"));
Billboard60.setAxisOfRotation(new float[]{1,1,1});
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("XForm"));
Transform& Transform62 =  Transform();
Transform62.setRotation(new float[]{1,0,0,1.5708});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
Material& Material65 =  Material();
Appearance64.addChild(&Material65);

Shape63.addChild(&Appearance64);

Cone& Cone66 =  Cone();
Shape63.setGeometry(&Cone66);

Transform62.addChild(&Shape63);

Transform61.addChild(&Transform62);

Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

IndexedLineSet& IndexedLineSet70 =  IndexedLineSet();
IndexedLineSet70.setColorIndex(new int[]{0,1,-1,2,3,-1}, 6);
IndexedLineSet70.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1}, 6);
CColor& Color71 =  CColor();
Color71.setColor(new float[]{0,0,0,1,1,1,0,0,0,1,1,1}, 12);
IndexedLineSet70.setColor(&Color71);

Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setDEF(CString("Local"));
Coordinate72.setPoint(new float[]{-2,0,0,2,0,0,0,-2,0,0,2,0}, 12);
IndexedLineSet70.setCoord(&Coordinate72);

Shape67.setGeometry(&IndexedLineSet70);

Transform61.addChild(&Shape67);

Transform& Transform73 =  Transform();
Transform73.setTranslation(new float[]{2,0,0});
Transform73.setScale(new float[]{0.5,0.5,0.5});
Billboard& Billboard74 =  Billboard();
Billboard74.setAxisOfRotation(new float[]{0,0,0});
Shape& Shape75 =  Shape();
Appearance& Appearance76 =  Appearance();
Material& Material77 =  Material();
Material77.setDiffuseColor(new float[]{0,0,0});
Appearance76.addChild(&Material77);

Shape75.addChild(&Appearance76);

Text& Text78 =  Text();
Text78.setString(new CString[]{CString("x")}, 1);
Shape75.setGeometry(&Text78);

Billboard74.addChild(&Shape75);

Transform73.addChild(&Billboard74);

Transform61.addChild(&Transform73);

Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{0,2,0});
Transform79.setScale(new float[]{0.5,0.5,0.5});
Billboard& Billboard80 =  Billboard();
Billboard80.setAxisOfRotation(new float[]{0,0,0});
Shape& Shape81 =  Shape();
Appearance& Appearance82 =  Appearance();
Material& Material83 =  Material();
Material83.setDiffuseColor(new float[]{0,0,0});
Appearance82.addChild(&Material83);

Shape81.addChild(&Appearance82);

Text& Text84 =  Text();
Text84.setString(new CString[]{CString("y")}, 1);
Shape81.setGeometry(&Text84);

Billboard80.addChild(&Shape81);

Transform79.addChild(&Billboard80);

Transform61.addChild(&Transform79);

Billboard60.addChild(&Transform61);

Shape& Shape85 =  Shape();
Shape85.setDEF(CString("LocalAxisOfRotation1"));
Appearance& Appearance86 =  Appearance();
LineProperties& LineProperties87 =  LineProperties();
LineProperties87.setLinetype(3);
Appearance86.setLineProperties(LineProperties87);

Material& Material88 =  Material();
Appearance86.addChild(&Material88);

Shape85.addChild(&Appearance86);

IndexedLineSet& IndexedLineSet89 =  IndexedLineSet();
IndexedLineSet89.setCoordIndex(new int32_t[]{0,1,-1}, 3);
Coordinate& Coordinate90 =  Coordinate();
Coordinate90.setDEF(CString("LocalAxisOfRotation"));
Coordinate90.setPoint(new float[]{-3,-3,-3,3,3,3}, 6);
IndexedLineSet89.setCoord(&Coordinate90);

Shape85.setGeometry(&IndexedLineSet89);

Billboard60.addChild(&Shape85);

Transform59.addChild(&Billboard60);

Scene8.addChild(&Transform59);

Transform& Transform91 =  Transform();
SphereSensor& SphereSensor92 =  SphereSensor();
SphereSensor92.setDEF(CString("AxisSensor"));
SphereSensor92.setOffset(new float[]{-0.707107,0.707107,0,0.955317});
Transform91.addChild(&SphereSensor92);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("AxisOfRotation"));
Transform93.setRotation(new float[]{-0.707107,0.707107,0,0.955317});
Transform& Transform94 =  Transform();
Transform94.setTranslation(new float[]{0,0,2});
Transform94.setRotation(new float[]{1,0,0,1.5708});
Transform94.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setDiffuseColor(new float[]{0,1,0});
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

Cone& Cone98 =  Cone();
Shape95.setGeometry(&Cone98);

Transform94.addChild(&Shape95);

Transform93.addChild(&Transform94);

Transform& Transform99 =  Transform();
Transform99.setTranslation(new float[]{0,0,-2});
Transform99.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
Material& Material102 =  Material();
Material102.setDiffuseColor(new float[]{1,0,0});
Appearance101.addChild(&Material102);

Shape100.addChild(&Appearance101);

Sphere& Sphere103 =  Sphere();
Shape100.setGeometry(&Sphere103);

Transform99.addChild(&Shape100);

Transform93.addChild(&Transform99);

Shape& Shape104 =  Shape();
Appearance& Appearance105 =  Appearance();
Material& Material106 =  Material();
Appearance105.addChild(&Material106);

Shape104.addChild(&Appearance105);

IndexedLineSet& IndexedLineSet107 =  IndexedLineSet();
IndexedLineSet107.setColorPerVertex(False);
IndexedLineSet107.setColorIndex(new int[]{0,1}, 2);
IndexedLineSet107.setCoordIndex(new int32_t[]{0,1,-1,1,2,-1}, 6);
CColor& Color108 =  CColor();
Color108.setColor(new float[]{1,0,0,0,1,0}, 6);
IndexedLineSet107.setColor(&Color108);

Coordinate& Coordinate109 =  Coordinate();
Coordinate109.setPoint(new float[]{0,0,-2,0,0,0,0,0,2}, 9);
IndexedLineSet107.setCoord(&Coordinate109);

Shape104.setGeometry(&IndexedLineSet107);

Transform93.addChild(&Shape104);

Transform91.addChild(&Transform93);

Scene8.addChild(&Transform91);

Transform& Transform110 =  Transform();
Transform110.setDEF(CString("ZAxis"));
Shape& Shape111 =  Shape();
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

IndexedLineSet& IndexedLineSet114 =  IndexedLineSet();
IndexedLineSet114.setColorPerVertex(False);
IndexedLineSet114.setColorIndex(new int[]{0,1}, 2);
IndexedLineSet114.setCoordIndex(new int32_t[]{0,1,-1,1,2,-1}, 6);
CColor& Color115 =  CColor();
Color115.setColor(new float[]{0,0,0,0,0,1}, 6);
IndexedLineSet114.setColor(&Color115);

Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[]{0,0,-2,0,0,0,0,0,2}, 9);
IndexedLineSet114.setCoord(&Coordinate116);

Shape111.setGeometry(&IndexedLineSet114);

Transform110.addChild(&Shape111);

Transform& Transform117 =  Transform();
Transform117.setTranslation(new float[]{0,0,2});
Transform117.setScale(new float[]{0.5,0.5,0.5});
Billboard& Billboard118 =  Billboard();
Billboard118.setAxisOfRotation(new float[]{0,0,0});
Shape& Shape119 =  Shape();
Appearance& Appearance120 =  Appearance();
Material& Material121 =  Material();
Material121.setDiffuseColor(new float[]{0,0,0});
Appearance120.addChild(&Material121);

Shape119.addChild(&Appearance120);

Text& Text122 =  Text();
Text122.setString(new CString[]{CString(" z")}, 1);
Shape119.setGeometry(&Text122);

Billboard118.addChild(&Shape119);

Transform117.addChild(&Billboard118);

Transform110.addChild(&Transform117);

Transform& Transform123 =  Transform();
Transform123.setTranslation(new float[]{0,0,2});
Transform123.setRotation(new float[]{1,0,0,1.5708});
Transform123.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
Material& Material126 =  Material();
Material126.setDiffuseColor(new float[]{0,0,1});
Appearance125.addChild(&Material126);

Shape124.addChild(&Appearance125);

Cone& Cone127 =  Cone();
Shape124.setGeometry(&Cone127);

Transform123.addChild(&Shape124);

Transform110.addChild(&Transform123);

Scene8.addChild(&Transform110);

Transform& Transform128 =  Transform();
Transform128.setDEF(CString("Normal"));
Transform128.setRotation(new float[]{0.707107,0.707107,0,1.5708});
Shape& Shape129 =  Shape();
Appearance& Appearance130 =  Appearance();
Material& Material131 =  Material();
Appearance130.addChild(&Material131);

Shape129.addChild(&Appearance130);

IndexedLineSet& IndexedLineSet132 =  IndexedLineSet();
IndexedLineSet132.setColorPerVertex(False);
IndexedLineSet132.setColorIndex(new int[]{0,1}, 2);
IndexedLineSet132.setCoordIndex(new int32_t[]{0,1,-1}, 3);
CColor& Color133 =  CColor();
Color133.setColor(new float[]{1,1,0,1,1,0}, 6);
IndexedLineSet132.setColor(&Color133);

Coordinate& Coordinate134 =  Coordinate();
Coordinate134.setPoint(new float[]{0,0,0,0,0,2}, 6);
IndexedLineSet132.setCoord(&Coordinate134);

Shape129.setGeometry(&IndexedLineSet132);

Transform128.addChild(&Shape129);

Transform& Transform135 =  Transform();
Transform135.setTranslation(new float[]{0,0,2});
Transform135.setRotation(new float[]{1,0,0,1.5708});
Transform135.setScale(new float[]{0.1,0.1,0.1});
Shape& Shape136 =  Shape();
Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Material138.setDiffuseColor(new float[]{1,1,0});
Appearance137.addChild(&Material138);

Shape136.addChild(&Appearance137);

Cone& Cone139 =  Cone();
Shape136.setGeometry(&Cone139);

Transform135.addChild(&Shape136);

Transform128.addChild(&Transform135);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{0,0,2});
Transform140.setScale(new float[]{0.3,0.3,0.3});
Billboard& Billboard141 =  Billboard();
Billboard141.setAxisOfRotation(new float[]{0,0,0});
Shape& Shape142 =  Shape();
Appearance& Appearance143 =  Appearance();
Material& Material144 =  Material();
Material144.setDiffuseColor(new float[]{0,0,0});
Appearance143.addChild(&Material144);

Shape142.addChild(&Appearance143);

Text& Text145 =  Text();
Text145.setString(new CString[]{CString(" normal")}, 1);
Shape142.setGeometry(&Text145);

Billboard141.addChild(&Shape142);

Transform140.addChild(&Billboard141);

Transform128.addChild(&Transform140);

Scene8.addChild(&Transform128);

Transform& Transform146 =  Transform();
Transform146.setDEF(CString("Rotation"));
Transform146.setRotation(new float[]{-0.357407,-0.862856,-0.357407,1.71777});
Shape& Shape147 =  Shape();
Appearance& Appearance148 =  Appearance();
Material& Material149 =  Material();
Material149.setEmissiveColor(new float[]{1,0,0});
Appearance148.addChild(&Material149);

Shape147.addChild(&Appearance148);

Arc2D& Arc2D150 =  Arc2D();
Arc2D150.setDEF(CString("Arc"));
Arc2D150.setEndAngle(0.955317);
Shape147.setGeometry(Arc2D150);

Transform146.addChild(&Shape147);

Scene8.addChild(&Transform146);

Script& Script151 =  Script();
Script151.setDEF(CString("AxisScript"));
Script151.setDirectOutput(True);
field& field152 =  field();
field152.setName(CString("set_x"));
field152.setAccessType(CString("inputOnly"));
field152.setType(CString("SFTime"));
Script151.addChild(&field152);

field& field153 =  field();
field153.setName(CString("set_y"));
field153.setAccessType(CString("inputOnly"));
field153.setType(CString("SFTime"));
Script151.addChild(&field153);

field& field154 =  field();
field154.setName(CString("set_z"));
field154.setAccessType(CString("inputOnly"));
field154.setType(CString("SFTime"));
Script151.addChild(&field154);

field& field155 =  field();
field155.setName(CString("set_xyz"));
field155.setAccessType(CString("inputOnly"));
field155.setType(CString("SFTime"));
Script151.addChild(&field155);

field& field156 =  field();
field156.setName(CString("set_0"));
field156.setAccessType(CString("inputOnly"));
field156.setType(CString("SFTime"));
Script151.addChild(&field156);

field& field157 =  field();
field157.setName(CString("set_rotation"));
field157.setAccessType(CString("inputOnly"));
field157.setType(CString("SFRotation"));
Script151.addChild(&field157);

field& field158 =  field();
field158.setName(CString("set_position"));
field158.setAccessType(CString("inputOnly"));
field158.setType(CString("SFVec3f"));
Script151.addChild(&field158);

field& field159 =  field();
field159.setName(CString("billboard"));
field159.setAccessType(CString("initializeOnly"));
field159.setType(CString("SFNode"));
Billboard& Billboard160 =  Billboard();
Billboard160.setUSE(CString("Billboard"));
field159.addChild(Billboard160);

Script151.addChild(&field159);

field& field161 =  field();
field161.setName(CString("xform"));
field161.setAccessType(CString("initializeOnly"));
field161.setType(CString("SFNode"));
Transform& Transform162 =  Transform();
Transform162.setUSE(CString("XForm"));
field161.addChild(&Transform162);

Script151.addChild(&field161);

field& field163 =  field();
field163.setName(CString("absolute"));
field163.setAccessType(CString("initializeOnly"));
field163.setType(CString("SFNode"));
Transform& Transform164 =  Transform();
Transform164.setUSE(CString("AxisOfRotation"));
field163.addChild(&Transform164);

Script151.addChild(&field163);

field& field165 =  field();
field165.setName(CString("local"));
field165.setAccessType(CString("initializeOnly"));
field165.setType(CString("SFNode"));
Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setUSE(CString("LocalAxisOfRotation"));
field165.addChild(&Coordinate166);

Script151.addChild(&field165);

field& field167 =  field();
field167.setName(CString("sensor"));
field167.setAccessType(CString("initializeOnly"));
field167.setType(CString("SFNode"));
SphereSensor& SphereSensor168 =  SphereSensor();
SphereSensor168.setUSE(CString("AxisSensor"));
field167.addChild(&SphereSensor168);

Script151.addChild(&field167);

field& field169 =  field();
field169.setName(CString("normal"));
field169.setAccessType(CString("initializeOnly"));
field169.setType(CString("SFNode"));
Transform& Transform170 =  Transform();
Transform170.setUSE(CString("Normal"));
field169.addChild(&Transform170);

Script151.addChild(&field169);

field& field171 =  field();
field171.setName(CString("rotation"));
field171.setAccessType(CString("initializeOnly"));
field171.setType(CString("SFNode"));
Transform& Transform172 =  Transform();
Transform172.setUSE(CString("Rotation"));
field171.addChild(&Transform172);

Script151.addChild(&field171);

field& field173 =  field();
field173.setName(CString("arc"));
field173.setAccessType(CString("initializeOnly"));
field173.setType(CString("SFNode"));
Arc2D& Arc2D174 =  Arc2D();
Arc2D174.setUSE(CString("Arc"));
field173.addChild(Arc2D174);

Script151.addChild(&field173);

field& field175 =  field();
field175.setName(CString("proxy"));
field175.setAccessType(CString("initializeOnly"));
field175.setType(CString("SFNode"));
ProximitySensor& ProximitySensor176 =  ProximitySensor();
ProximitySensor176.setUSE(CString("Proxy"));
field175.addChild(&ProximitySensor176);

Script151.addChild(&field175);


Script151.setSourceCode(CString("vrmlscript:")+
_T("function initialize ()")+
_T("{")+
_T("	set_xyz ();")+
_T("}")+
_T("function set_x ()")+
_T("{")+
_T("	set_axisOfRotation (new SFVec3f (1, 0, 0));")+
_T("}")+
_T("function set_y ()")+
_T("{")+
_T("	set_axisOfRotation (new SFVec3f (0, 1, 0));")+
_T("}")+
_T("function set_z ()")+
_T("{")+
_T("	set_axisOfRotation (new SFVec3f (0, 0, 1) .normalize () .multiply (2));")+
_T("}")+
_T("function set_xyz ()")+
_T("{")+
_T("	set_axisOfRotation (new SFVec3f (1, 1, 1));")+
_T("}")+
_T("function set_0 ()")+
_T("{")+
_T("	set_axisOfRotation (new SFVec3f ());")+
_T("}")+
_T("function set_rotation (value)")+
_T("{")+
_T("	set_axisOfRotation (value .multVec (new SFVec3f (0, 0, 1)));")+
_T("}")+
_T("function set_position ()")+
_T("{")+
_T("	set_axisOfRotation (billboard .axisOfRotation);")+
_T("}")+
_T("var xAxis = new SFVec3f (1, 0, 0);")+
_T("var zAxis = new SFVec3f (0, 0, 1);")+
_T("function set_axisOfRotation (axisOfRotation)")+
_T("{")+
_T("	billboard .axisOfRotation = axisOfRotation;")+
_T("	")+
_T("	// Normal of plane between axisOfRotation and billbordToViewer")+
_T("	var vector = axisOfRotation .cross (proxy .position_changed);")+
_T("	normal .rotation = new SFRotation (zAxis, vector);")+
_T("	// axisOfRotation")+
_T("	var axisRotation = new SFRotation (zAxis, axisOfRotation);")+
_T("	")+
_T("	local .point       = new MFVec3f (axisOfRotation .multiply (3) .negate (), axisOfRotation .multiply (3));")+
_T("	absolute .rotation = axisRotation;")+
_T("	sensor .offset     = axisRotation;")+
_T("	// Angle between zAxis and axisOfRotation")+
_T("	var angle = Math .acos (zAxis .dot (axisOfRotation .normalize ()));")+
_T("	var rot   = new SFRotation (zAxis, zAxis .cross (axisOfRotation));")+
_T("	rotation .rotation = rot .multiply (new SFRotation (rot .multVec (xAxis), zAxis));")+
_T("	arc .endAngle = angle;")+
_T("	print ('axisOfRotation: ', local .point);")+
_T("	print ('axisOfRotation: ', axisOfRotation);")+
_T("	print ('normal:         ', vector);")+
_T("	print ('angle:          ', angle);")+
_T("	")+
_T("	var n = vector .normalize ();")+
_T("	var a = axisOfRotation .cross (zAxis .cross (axisOfRotation)) .normalize ();")+
_T("			")+
_T("	var angle = n .dot (a);")+
_T("	print ('angle n         ', angle);")+
_T("}"));
Scene8.addChild(&Script151);

ROUTE& ROUTE177 =  ROUTE();
ROUTE177.setFromNode(CString("Proxy"));
ROUTE177.setFromField(CString("position_changed"));
ROUTE177.setToNode(CString("HUD"));
ROUTE177.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE177);

ROUTE& ROUTE178 =  ROUTE();
ROUTE178.setFromNode(CString("Proxy"));
ROUTE178.setFromField(CString("orientation_changed"));
ROUTE178.setToNode(CString("HUD"));
ROUTE178.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE178);

ROUTE& ROUTE179 =  ROUTE();
ROUTE179.setFromNode(CString("Proxy"));
ROUTE179.setFromField(CString("position_changed"));
ROUTE179.setToNode(CString("AxisScript"));
ROUTE179.setToField(CString("set_position"));
Scene8.addChild(&ROUTE179);

ROUTE& ROUTE180 =  ROUTE();
ROUTE180.setFromNode(CString("TouchX"));
ROUTE180.setFromField(CString("touchTime"));
ROUTE180.setToNode(CString("AxisScript"));
ROUTE180.setToField(CString("set_x"));
Scene8.addChild(&ROUTE180);

ROUTE& ROUTE181 =  ROUTE();
ROUTE181.setFromNode(CString("TouchY"));
ROUTE181.setFromField(CString("touchTime"));
ROUTE181.setToNode(CString("AxisScript"));
ROUTE181.setToField(CString("set_y"));
Scene8.addChild(&ROUTE181);

ROUTE& ROUTE182 =  ROUTE();
ROUTE182.setFromNode(CString("TouchZ"));
ROUTE182.setFromField(CString("touchTime"));
ROUTE182.setToNode(CString("AxisScript"));
ROUTE182.setToField(CString("set_z"));
Scene8.addChild(&ROUTE182);

ROUTE& ROUTE183 =  ROUTE();
ROUTE183.setFromNode(CString("TouchXYZ"));
ROUTE183.setFromField(CString("touchTime"));
ROUTE183.setToNode(CString("AxisScript"));
ROUTE183.setToField(CString("set_xyz"));
Scene8.addChild(&ROUTE183);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("AxisSensor"));
ROUTE184.setFromField(CString("rotation_changed"));
ROUTE184.setToNode(CString("AxisScript"));
ROUTE184.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("TouchZ_1"));
ROUTE185.setFromField(CString("touchTime"));
ROUTE185.setToNode(CString("AxisScript"));
ROUTE185.setToField(CString("set_0"));
Scene8.addChild(&ROUTE185);

X3D0.setScene(&Scene8);

}
