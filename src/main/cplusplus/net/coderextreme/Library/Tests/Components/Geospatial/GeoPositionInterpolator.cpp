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
meta3.setContent(CString("Mon, 13 Oct 2014 00:37:06 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoPositionInterpolator.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 16 Apr 2016 16:49:16 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Selection"));
MetadataSet11.setDEF(CString("Selection"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("previous"));
MetadataSet12.setDEF(CString("previous"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("children"));
MetadataSet13.setDEF(CString("children"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
TimeSensor& TimeSensor14 =  TimeSensor();
TimeSensor14.setDEF(CString("_1"));
TimeSensor14.setCycleInterval(10);
TimeSensor14.setLoop(True);
MetadataSet13.setTimeSensor(&TimeSensor14);

MetadataSet11.setValue((X3DNode *)&MetadataSet13);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet15 =  MetadataSet();
MetadataSet15.X3DNode::setName(CString("NavigationInfo"));
MetadataSet15.setDEF(CString("NavigationInfo"));
MetadataSet15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString16 =  MetadataString();
MetadataString16.X3DNode::setName(CString("type"));
MetadataString16.setDEF(CString("type"));
MetadataString16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString16.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet15.setValue((X3DNode *)&MetadataString16);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Viewpoint"));
MetadataSet17.setDEF(CString("Viewpoint"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble18 =  MetadataDouble();
MetadataDouble18.X3DNode::setName(CString("position"));
MetadataDouble18.setDEF(CString("position"));
MetadataDouble18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble18.setValue(new double[]{18264404,2.91911419481039e-8,67.0888977050781}, 3);
MetadataSet17.setValue((X3DNode *)&MetadataDouble18);

MetadataDouble& MetadataDouble19 =  MetadataDouble();
MetadataDouble19.X3DNode::setName(CString("orientation"));
MetadataDouble19.setDEF(CString("orientation"));
MetadataDouble19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble19.setValue(new double[]{0.577349562279675,0.577349562279675,0.577351683006932,2.09439298166854}, 4);
MetadataSet17.setValue((X3DNode *)&MetadataDouble19);

MetadataDouble& MetadataDouble20 =  MetadataDouble();
MetadataDouble20.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble20.setDEF(CString("centerOfRotation"));
MetadataDouble20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble20.setValue(new double[]{-21384.685546875,0,-2.6100881438812e-12}, 3);
MetadataSet17.setValue((X3DNode *)&MetadataDouble20);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

NavigationInfo& NavigationInfo21 =  NavigationInfo();
Scene8.addChild(&NavigationInfo21);

Background& Background22 =  Background();
Background22.setDEF(CString("Gray"));
Background22.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background22);

GeoViewpoint& GeoViewpoint23 =  GeoViewpoint();
GeoViewpoint23.setDEF(CString("_2"));
GeoViewpoint23.setDescription(CString("GeoViewpoint"));
GeoViewpoint23.setPosition(new double[]{0.000210952279826894,9.15731602998129e-14,11886267.4098626});
GeoViewpoint23.setOrientation(new float[]{-1,6.28036986176185e-16,1.0205601025363e-15,1.57079631818816});
GeoViewpoint23.setCenterOfRotation(new double[]{180,0,-6356752.31424518});
Scene8.addChild(&GeoViewpoint23);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("GeoElevationGrid"));
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Appearance26.addChild(&Material27);

ImageTexture& ImageTexture28 =  ImageTexture();
ImageTexture28.setUrl(new CString[]{CString("../images/earth.png")}, 1);
Appearance26.addChild(&ImageTexture28);

Shape25.addChild(&Appearance26);

GeoElevationGrid& GeoElevationGrid29 =  GeoElevationGrid();
GeoElevationGrid29.setGeoGridOrigin(new double[]{-90,180,0});
GeoElevationGrid29.setXDimension(361);
GeoElevationGrid29.setZDimension(181);
GeoElevationGrid29.setCreaseAngle(3.14159);
Shape25.setGeometry(&GeoElevationGrid29);

Transform24.addChild(&Shape25);

Scene8.addChild(&Transform24);

Transform& Transform30 =  Transform();
Transform30.setDEF(CString("Axes"));
Transform30.setScale(new float[]{10000000,10000000,10000000});
Shape& Shape31 =  Shape();
IndexedLineSet& IndexedLineSet32 =  IndexedLineSet();
IndexedLineSet32.setColorPerVertex(False);
IndexedLineSet32.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet32.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color33 =  CColor();
Color33.setColor(new float[]{1,0,0,0,1,0,0,0,1}, 9);
IndexedLineSet32.setColor(&Color33);

Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setPoint(new float[]{-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1}, 18);
IndexedLineSet32.setCoord(&Coordinate34);

Shape31.setGeometry(&IndexedLineSet32);

Transform30.addChild(&Shape31);

Scene8.addChild(&Transform30);

Script& Script35 =  Script();
Script35.setDEF(CString("DebugScript"));
field& field36 =  field();
field36.setName(CString("set_hitGeoCoord"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFVec3d"));
Script35.addChild(&field36);


Script35.setSourceCode(CString("ecmascript:")+
_T("function set_hitGeoCoord (value)")+
_T("{")+
_T("	print (value);")+
_T("}"));
Scene8.addChild(&Script35);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("PointSet"));
Shape& Shape38 =  Shape();
Appearance& Appearance39 =  Appearance();
LineProperties& LineProperties40 =  LineProperties();
LineProperties40.setLinewidthScaleFactor(20);
Appearance39.setLineProperties(LineProperties40);

Material& Material41 =  Material();
Material41.setEmissiveColor(new float[]{1,0,0});
Appearance39.addChild(&Material41);

Shape38.addChild(&Appearance39);

PointSet& PointSet42 =  PointSet();
GeoCoordinate& GeoCoordinate43 =  GeoCoordinate();
GeoCoordinate43.setPoint(new double[]{0,0,0,51.31158,12.37115,0,-37.013074,143.98429,0}, 9);
PointSet42.setCoord(GeoCoordinate43);

Shape38.setGeometry(PointSet42);

Transform37.addChild(&Shape38);

Scene8.addChild(&Transform37);

Transform& Transform44 =  Transform();
Transform44.setDEF(CString("PointSet_1"));
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Appearance46.setDEF(CString("_3"));
LineProperties& LineProperties47 =  LineProperties();
LineProperties47.setLinewidthScaleFactor(20);
Appearance46.setLineProperties(LineProperties47);

Material& Material48 =  Material();
Material48.setEmissiveColor(new float[]{0,0.427919,1});
Appearance46.addChild(&Material48);

Shape45.addChild(&Appearance46);

PointSet& PointSet49 =  PointSet();
GeoCoordinate& GeoCoordinate50 =  GeoCoordinate();
GeoCoordinate50.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("WEZ10")}, 3);
GeoCoordinate50.setPoint(new double[]{4145173,572227,0}, 3);
PointSet49.setCoord(GeoCoordinate50);

Shape45.setGeometry(PointSet49);

Transform44.addChild(&Shape45);

Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
Appearance52.setUSE(CString("_3"));
Shape51.addChild(&Appearance52);

PointSet& PointSet53 =  PointSet();
GeoCoordinate& GeoCoordinate54 =  GeoCoordinate();
GeoCoordinate54.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("WE, "), CString("Z60S")}, 4);
GeoCoordinate54.setPoint(new double[]{5427419.7,314369.5,0}, 3);
PointSet53.setCoord(GeoCoordinate54);

Shape51.setGeometry(PointSet53);

Transform44.addChild(&Shape51);

Scene8.addChild(&Transform44);

GeoPositionInterpolator& GeoPositionInterpolator55 =  GeoPositionInterpolator();
GeoPositionInterpolator55.setDEF(CString("_4"));
GeoPositionInterpolator55.setKey(new float[]{0,0.333333,0.666667,1}, 4);
GeoPositionInterpolator55.setKeyValue(new double[]{0,0,13000000,51.31158,12.37115,13000000,-37.013074,143.98429,13000000,0,0,13000000}, 12);
Scene8.addChild(&GeoPositionInterpolator55);

TimeSensor& TimeSensor56 =  TimeSensor();
TimeSensor56.setUSE(CString("_1"));
Scene8.addChild(&TimeSensor56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("_1"));
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setToNode(CString("_4"));
ROUTE57.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("_4"));
ROUTE58.setFromField(CString("geovalue_changed"));
ROUTE58.setToNode(CString("_2"));
ROUTE58.setToField(CString("set_position"));
Scene8.addChild(&ROUTE58);

X3D0.setScene(&Scene8);

}
