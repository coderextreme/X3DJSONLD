//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(3, new int32_t[]{10, 20, 10});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(8, new int32_t[]{-1, 0, 0, 0, 0, -1, -1, -1});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{3});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(1, new int32_t[]{1});
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
meta3.setContent(CString("Tue, 05 Jun 2018 02:21:56 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.3.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/Lighting/PointLight2.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Wed, 06 Jun 2018 08:47:37 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("AngleGrid"));
MetadataSet11.setDEF(CString("AngleGrid"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean12 =  MetadataBoolean();
MetadataBoolean12.X3DNode::setName(CString("enabled"));
MetadataBoolean12.setDEF(CString("enabled"));
MetadataBoolean12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean12.setValue(new boolean[]{false});
MetadataSet11.setValue((X3DNode *)&MetadataBoolean12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Grid"));
MetadataSet13.setDEF(CString("Grid"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean14 =  MetadataBoolean();
MetadataBoolean14.X3DNode::setName(CString("enabled"));
MetadataBoolean14.setDEF(CString("enabled_1"));
MetadataBoolean14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean14.setValue(new boolean[]{true});
MetadataSet13.setValue((X3DNode *)&MetadataBoolean14);

MetadataInteger& MetadataInteger15 =  MetadataInteger();
MetadataInteger15.X3DNode::setName(CString("dimension"));
MetadataInteger15.setDEF(CString("dimension"));
MetadataInteger15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger15.setValue(MFInt320);
MetadataSet13.setValue((X3DNode *)&MetadataInteger15);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Selection"));
MetadataSet16.setDEF(CString("Selection"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean17 =  MetadataBoolean();
MetadataBoolean17.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean17.setDEF(CString("selectGeometry"));
MetadataBoolean17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean17.setValue(new boolean[]{false});
MetadataSet16.setValue((X3DNode *)&MetadataBoolean17);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("nodes"));
MetadataSet18.setDEF(CString("nodes"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
PointLight& PointLight19 =  PointLight();
PointLight19.setDEF(CString("_2"));
PointLight19.setGlobal(false);
PointLight19.setLocation(new float[]{0.0,5.0,0.0});
PointLight19.setShadows(true);
PointLight19.setShadowMapSize("2048");
MetadataSet18.setPointLight(&PointLight19);

MetadataSet16.setValue((X3DNode *)&MetadataSet18);

MetadataSet10.setValue((X3DNode *)&MetadataSet16);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("BrowserPanel"));
MetadataSet20.setDEF(CString("BrowserPanel"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger21 =  MetadataInteger();
MetadataInteger21.X3DNode::setName(CString("layerNumber"));
MetadataInteger21.setDEF(CString("layerNumber"));
MetadataInteger21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger21.setValue(MFInt321);
MetadataSet20.setValue((X3DNode *)&MetadataInteger21);

MetadataString& MetadataString22 =  MetadataString();
MetadataString22.X3DNode::setName(CString("type"));
MetadataString22.setDEF(CString("type_3"));
MetadataString22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString22.setValue(new CString[]{CString(", "), CString("RIGHT_VIEW, "), CString("MAIN_VIEW, "), CString("PERSPECTIVE_VIEWFRONT_VIEW")}, 4);
MetadataSet20.setValue((X3DNode *)&MetadataString22);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("viewpoints"));
MetadataSet23.setDEF(CString("viewpoints"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("PerspectiveViewpoint"));
MetadataSet24.setDEF(CString("PerspectiveViewpoint"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("position"));
MetadataDouble25.setDEF(CString("position_4"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{5.87788534164429,6.46984958648682,13.8524446487427}, 3);
MetadataSet24.setValue((X3DNode *)&MetadataDouble25);

MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("orientation"));
MetadataDouble26.setDEF(CString("orientation_5"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854}, 4);
MetadataSet24.setValue((X3DNode *)&MetadataDouble26);

MetadataDouble& MetadataDouble27 =  MetadataDouble();
MetadataDouble27.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble27.setDEF(CString("centerOfRotation_6"));
MetadataDouble27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble27.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet24.setValue((X3DNode *)&MetadataDouble27);

MetadataDouble& MetadataDouble28 =  MetadataDouble();
MetadataDouble28.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble28.setDEF(CString("fieldOfViewScale"));
MetadataDouble28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble28.setValue(new double[]{1.0}, 1);
MetadataSet24.setValue((X3DNode *)&MetadataDouble28);

MetadataSet23.setValue((X3DNode *)&MetadataSet24);

MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("TopViewpoint"));
MetadataSet29.setDEF(CString("TopViewpoint"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("position"));
MetadataDouble30.setDEF(CString("position_7"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{-5.9857227487932,10.8662109375,0.18038974973888}, 3);
MetadataSet29.setValue((X3DNode *)&MetadataDouble30);

MetadataDouble& MetadataDouble31 =  MetadataDouble();
MetadataDouble31.X3DNode::setName(CString("orientation"));
MetadataDouble31.setDEF(CString("orientation_8"));
MetadataDouble31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble31.setValue(new double[]{1.0,0.0,0.0,4.71238898038469}, 4);
MetadataSet29.setValue((X3DNode *)&MetadataDouble31);

MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble32.setDEF(CString("centerOfRotation_9"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{-5.9857227487932,0.0,0.18038974973888}, 3);
MetadataSet29.setValue((X3DNode *)&MetadataDouble32);

MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble33.setDEF(CString("fieldOfViewScale_10"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{2.6418009235867}, 1);
MetadataSet29.setValue((X3DNode *)&MetadataDouble33);

MetadataSet23.setValue((X3DNode *)&MetadataSet29);

MetadataSet& MetadataSet34 =  MetadataSet();
MetadataSet34.X3DNode::setName(CString("FrontViewpoint"));
MetadataSet34.setDEF(CString("FrontViewpoint"));
MetadataSet34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("position"));
MetadataDouble35.setDEF(CString("position_11"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{-3.76314300822868,3.55015251499291,10000.0}, 3);
MetadataSet34.setValue((X3DNode *)&MetadataDouble35);

MetadataDouble& MetadataDouble36 =  MetadataDouble();
MetadataDouble36.X3DNode::setName(CString("orientation"));
MetadataDouble36.setDEF(CString("orientation_12"));
MetadataDouble36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble36.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet34.setValue((X3DNode *)&MetadataDouble36);

MetadataDouble& MetadataDouble37 =  MetadataDouble();
MetadataDouble37.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble37.setDEF(CString("centerOfRotation_13"));
MetadataDouble37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble37.setValue(new double[]{-3.76314300822868,3.55015251499291,0.0}, 3);
MetadataSet34.setValue((X3DNode *)&MetadataDouble37);

MetadataDouble& MetadataDouble38 =  MetadataDouble();
MetadataDouble38.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble38.setDEF(CString("fieldOfViewScale_14"));
MetadataDouble38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble38.setValue(new double[]{2.01741078562512}, 1);
MetadataSet34.setValue((X3DNode *)&MetadataDouble38);

MetadataSet23.setValue((X3DNode *)&MetadataSet34);

MetadataSet20.setValue((X3DNode *)&MetadataSet23);

MetadataSet10.setValue((X3DNode *)&MetadataSet20);

MetadataSet& MetadataSet39 =  MetadataSet();
MetadataSet39.X3DNode::setName(CString("Page"));
MetadataSet39.setDEF(CString("Page"));
MetadataSet39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger40 =  MetadataInteger();
MetadataInteger40.X3DNode::setName(CString("activeView"));
MetadataInteger40.setDEF(CString("activeView"));
MetadataInteger40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger40.setValue(MFInt322);
MetadataSet39.setValue((X3DNode *)&MetadataInteger40);

MetadataInteger& MetadataInteger41 =  MetadataInteger();
MetadataInteger41.X3DNode::setName(CString("multiView"));
MetadataInteger41.setDEF(CString("multiView"));
MetadataInteger41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger41.setValue(MFInt323);
MetadataSet39.setValue((X3DNode *)&MetadataInteger41);

MetadataSet10.setValue((X3DNode *)&MetadataSet39);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

NavigationInfo& NavigationInfo42 =  NavigationInfo();
NavigationInfo42.setHeadlight(false);
Scene8.addChild(&NavigationInfo42);

Viewpoint& Viewpoint43 =  Viewpoint();
Viewpoint43.setDEF(CString("_15"));
Viewpoint43.setDescription(CString("Inital View"));
Viewpoint43.setPosition(new float[]{5.1736,10.0496,10.0977});
Viewpoint43.setOrientation(new float[]{-0.826747553796003,0.526024485457868,0.19946609484098,0.860063252825464});
Viewpoint43.setCenterOfRotation(new float[]{1.22569e-7,-1.49027e-8,-4.7967e-8});
Scene8.addChild(&Viewpoint43);

Group& Group44 =  Group();
Group44.setDEF(CString("LightButton"));
PlaneSensor& PlaneSensor45 =  PlaneSensor();
PlaneSensor45.setDEF(CString("_16"));
PlaneSensor45.setOffset(new float[]{0.0,5.0,0.0});
PlaneSensor45.setMaxPosition(new float[]{0.0,-1.0});
Group44.addChild(&PlaneSensor45);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("Sphere"));
Transform46.setTranslation(new float[]{0.0,5.0,0.0});
Transform46.setScale(new float[]{0.241256,0.241256,0.241256});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance48.addChild(&Material49);

Shape47.addChild(&Appearance48);

Sphere& Sphere50 =  Sphere();
Shape47.setGeometry(&Sphere50);

Transform46.addChild(&Shape47);

Group44.addChild(&Transform46);

Scene8.addChild(&Group44);

Group& Group51 =  Group();
PointLight& PointLight52 =  PointLight();
PointLight52.setUSE(CString("_2"));
Group51.addChild(&PointLight52);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("Floor"));
Transform53.setTranslation(new float[]{0.0,-1.0,0.0});
Transform53.setScale(new float[]{11.0,1.0,11.0});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Box& Box57 =  Box();
Shape54.setGeometry(&Box57);

Transform53.addChild(&Shape54);

Group51.addChild(&Transform53);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("Box_17"));
Transform58.setTranslation(new float[]{-4.0,1.0,0.0});
Shape& Shape59 =  Shape();
Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Appearance60.addChild(&Material61);

Shape59.addChild(&Appearance60);

Box& Box62 =  Box();
Shape59.setGeometry(&Box62);

Transform58.addChild(&Shape59);

Group51.addChild(&Transform58);

Transform& Transform63 =  Transform();
Transform63.setDEF(CString("Cone"));
Transform63.setTranslation(new float[]{0.0,1.0,4.0});
Shape& Shape64 =  Shape();
Appearance& Appearance65 =  Appearance();
Material& Material66 =  Material();
Appearance65.addChild(&Material66);

Shape64.addChild(&Appearance65);

Cone& Cone67 =  Cone();
Shape64.setGeometry(&Cone67);

Transform63.addChild(&Shape64);

Group51.addChild(&Transform63);

Transform& Transform68 =  Transform();
Transform68.setDEF(CString("Cylinder"));
Transform68.setTranslation(new float[]{4.0,1.0,0.0});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
Material& Material71 =  Material();
Appearance70.addChild(&Material71);

Shape69.addChild(&Appearance70);

Cylinder& Cylinder72 =  Cylinder();
Shape69.setGeometry(&Cylinder72);

Transform68.addChild(&Shape69);

Group51.addChild(&Transform68);

Transform& Transform73 =  Transform();
Transform73.setDEF(CString("Pyramid"));
Transform73.setTranslation(new float[]{0.0,1.0,-4.0});
Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

IndexedFaceSet& IndexedFaceSet77 =  IndexedFaceSet();
IndexedFaceSet77.setCoordIndex(new int32_t[]{3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1}, 21);
Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,0.0,1.0,0.0}, 15);
IndexedFaceSet77.setCoord(&Coordinate78);

Shape74.setGeometry(&IndexedFaceSet77);

Transform73.addChild(&Shape74);

Group51.addChild(&Transform73);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("Ceiling"));
Transform79.setTranslation(new float[]{0.0,11.001,0.0});
Transform79.setScale(new float[]{11.0,1.0,11.0});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Appearance81.addChild(&Material82);

Shape80.addChild(&Appearance81);

Box& Box83 =  Box();
Shape80.setGeometry(&Box83);

Transform79.addChild(&Shape80);

Group51.addChild(&Transform79);

Transform& Transform84 =  Transform();
Transform84.setDEF(CString("Box_18"));
Transform84.setTranslation(new float[]{-4.0,9.0,0.0});
Shape& Shape85 =  Shape();
Appearance& Appearance86 =  Appearance();
Material& Material87 =  Material();
Appearance86.addChild(&Material87);

Shape85.addChild(&Appearance86);

Box& Box88 =  Box();
Shape85.setGeometry(&Box88);

Transform84.addChild(&Shape85);

Group51.addChild(&Transform84);

Transform& Transform89 =  Transform();
Transform89.setDEF(CString("Cone_19"));
Transform89.setTranslation(new float[]{0.0,9.0,4.0});
Shape& Shape90 =  Shape();
Appearance& Appearance91 =  Appearance();
Material& Material92 =  Material();
Appearance91.addChild(&Material92);

Shape90.addChild(&Appearance91);

Cone& Cone93 =  Cone();
Shape90.setGeometry(&Cone93);

Transform89.addChild(&Shape90);

Group51.addChild(&Transform89);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("Cylinder_20"));
Transform94.setTranslation(new float[]{4.0,9.0,0.0});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

Cylinder& Cylinder98 =  Cylinder();
Shape95.setGeometry(&Cylinder98);

Transform94.addChild(&Shape95);

Group51.addChild(&Transform94);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("Pyramid_21"));
Transform99.setTranslation(new float[]{0.0,9.0,-4.0});
Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
Material& Material102 =  Material();
Appearance101.addChild(&Material102);

Shape100.addChild(&Appearance101);

IndexedFaceSet& IndexedFaceSet103 =  IndexedFaceSet();
IndexedFaceSet103.setCoordIndex(new int32_t[]{3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1}, 21);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,0.0,1.0,0.0}, 15);
IndexedFaceSet103.setCoord(&Coordinate104);

Shape100.setGeometry(&IndexedFaceSet103);

Transform99.addChild(&Shape100);

Group51.addChild(&Transform99);

Scene8.addChild(&Group51);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("_16"));
ROUTE105.setFromField(CString("translation_changed"));
ROUTE105.setToNode(CString("_2"));
ROUTE105.setToField(CString("set_location"));
Scene8.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("_2"));
ROUTE106.setFromField(CString("location_changed"));
ROUTE106.setToNode(CString("Sphere"));
ROUTE106.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE106);

X3D0.setScene(&Scene8);

//}
