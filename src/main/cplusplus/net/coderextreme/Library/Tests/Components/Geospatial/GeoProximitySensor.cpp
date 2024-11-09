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
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoProximitySensor.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 16 Apr 2016 16:49:18 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("GeoProximitySensor"));
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
MetadataSet11.setValue((X3DNode *)&MetadataSet13);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("NavigationInfo"));
MetadataSet14.setDEF(CString("NavigationInfo"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString15 =  MetadataString();
MetadataString15.X3DNode::setName(CString("type"));
MetadataString15.setDEF(CString("type"));
MetadataString15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString15.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet14.setValue((X3DNode *)&MetadataString15);

MetadataSet10.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Viewpoint"));
MetadataSet16.setDEF(CString("Viewpoint"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("position"));
MetadataDouble17.setDEF(CString("position"));
MetadataDouble17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble17.setValue(new double[]{18311186,0.212975323200226,67.55078125}, 3);
MetadataSet16.setValue((X3DNode *)&MetadataDouble17);

MetadataDouble& MetadataDouble18 =  MetadataDouble();
MetadataDouble18.X3DNode::setName(CString("orientation"));
MetadataDouble18.setDEF(CString("orientation"));
MetadataDouble18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble18.setValue(new double[]{0.577349568034159,0.57734956282642,0.577351676705725,2.09439298330876}, 4);
MetadataSet16.setValue((X3DNode *)&MetadataDouble18);

MetadataDouble& MetadataDouble19 =  MetadataDouble();
MetadataDouble19.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble19.setDEF(CString("centerOfRotation"));
MetadataDouble19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble19.setValue(new double[]{-21384.685546875,0,-2.6100881438812e-12}, 3);
MetadataSet16.setValue((X3DNode *)&MetadataDouble19);

MetadataSet10.setValue((X3DNode *)&MetadataSet16);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

NavigationInfo& NavigationInfo20 =  NavigationInfo();
Scene8.addChild(&NavigationInfo20);

Background& Background21 =  Background();
Background21.setDEF(CString("Gray"));
Background21.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background21);

GeoViewpoint& GeoViewpoint22 =  GeoViewpoint();
GeoViewpoint22.setDescription(CString("GeoViewpoint"));
GeoViewpoint22.setPosition(new double[]{0.00021186068633906,6.66400681047296e-7,11933049.8535792});
GeoViewpoint22.setOrientation(new float[]{-1,-1.03254873842571e-8,1.03254445992368e-8,1.57079629047246});
GeoViewpoint22.setCenterOfRotation(new double[]{180,0,-6356752.31424518});
Scene8.addChild(&GeoViewpoint22);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("GeoElevationGrid"));
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Appearance25.addChild(&Material26);

ImageTexture& ImageTexture27 =  ImageTexture();
ImageTexture27.setUrl(new CString[]{CString("../images/earth.png")}, 1);
Appearance25.addChild(&ImageTexture27);

Shape24.addChild(&Appearance25);

GeoElevationGrid& GeoElevationGrid28 =  GeoElevationGrid();
GeoElevationGrid28.setGeoGridOrigin(new double[]{-90,180,0});
GeoElevationGrid28.setXDimension(361);
GeoElevationGrid28.setZDimension(181);
GeoElevationGrid28.setCreaseAngle(3.14159);
Shape24.setGeometry(&GeoElevationGrid28);

Transform23.addChild(&Shape24);

Scene8.addChild(&Transform23);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("Axes"));
Transform29.setScale(new float[]{10000000,10000000,10000000});
Shape& Shape30 =  Shape();
IndexedLineSet& IndexedLineSet31 =  IndexedLineSet();
IndexedLineSet31.setColorPerVertex(False);
IndexedLineSet31.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet31.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
CColor& Color32 =  CColor();
Color32.setColor(new float[]{1,0,0,0,1,0,0,0,1}, 9);
IndexedLineSet31.setColor(&Color32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1}, 18);
IndexedLineSet31.setCoord(&Coordinate33);

Shape30.setGeometry(&IndexedLineSet31);

Transform29.addChild(&Shape30);

Scene8.addChild(&Transform29);

Script& Script34 =  Script();
Script34.setDEF(CString("DebugScript"));
field& field35 =  field();
field35.setName(CString("set_hitGeoCoord"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFVec3d"));
Script34.addChild(&field35);


Script34.setSourceCode(CString("ecmascript:")+
_T("function set_hitGeoCoord (value)")+
_T("{")+
_T("	print (value);")+
_T("}"));
Scene8.addChild(&Script34);

GeoProximitySensor& GeoProximitySensor36 =  GeoProximitySensor();
GeoProximitySensor36.setDEF(CString("_1"));
GeoProximitySensor36.setSize(new float[]{100000000,100000000,100000000});
Scene8.addChild(&GeoProximitySensor36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("_1"));
ROUTE37.setFromField(CString("geoCoord_changed"));
ROUTE37.setToNode(CString("DebugScript"));
ROUTE37.setToField(CString("set_hitGeoCoord"));
Scene8.addChild(&ROUTE37);

X3D0.setScene(&Scene8);

}
