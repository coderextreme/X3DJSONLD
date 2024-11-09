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
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoElevationGrid.UTM.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 16 Apr 2016 16:50:33 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("GeoElevationGrid.UTM"));
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
MetadataDouble14.setValue(new double[]{-7234615.07024952,-12259154.7395488,10094150.4329588}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.862673463069908,-0.242562620482203,-0.443799359237684,1.07653185497723}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{-35164.6857548207,0,-9.22524835922619e-13}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Selection"));
MetadataSet17.setDEF(CString("Selection"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("previous"));
MetadataSet18.setDEF(CString("previous"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("children"));
MetadataSet19.setDEF(CString("children"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet19);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Transform& Transform20 =  Transform();
Transform20.setRotation(new float[]{1,0,0,1.5707963267949});
Background& Background21 =  Background();
Background21.setSkyAngle(new float[]{1.56287}, 1);
Background21.setSkyColor(new float[]{0.0343751,0.034375,0.275,0.702145,0.702145,1}, 6);
Background21.setGroundAngle(new float[]{1.5708}, 1);
Background21.setGroundColor(new float[]{0.0343751,0.034375,0.275,0.702145,0.702145,1}, 6);
Transform20.addChild(&Background21);

Scene8.addChild(&Transform20);

GeoViewpoint& GeoViewpoint22 =  GeoViewpoint();
GeoViewpoint22.setDescription(CString("Initial GeoViewpoint"));
GeoViewpoint22.setPosition(new double[]{35.1149156947289,-119.999998674153,11079190.0771837});
GeoViewpoint22.setOrientation(new float[]{-1,-1.32396391064704e-9,2.31940358896155e-10,1.56899698076057});
GeoViewpoint22.setCenterOfRotation(new double[]{180,0,-6342972.31424518});
Scene8.addChild(&GeoViewpoint22);

Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDEF(CString("Metal18"));
Material25.setAmbientIntensity(0.00746438);
Material25.setDiffuseColor(new float[]{0.456,0.03648,0.134863});
Material25.setSpecularColor(new float[]{0.641609,0.651044,0.979592});
Material25.setShininess(0.0612245);
Appearance24.addChild(&Material25);

Shape23.addChild(&Appearance24);

GeoElevationGrid& GeoElevationGrid26 =  GeoElevationGrid();
GeoElevationGrid26.setGeoGridOrigin(new double[]{-90,-180,0});
GeoElevationGrid26.setXDimension(21);
GeoElevationGrid26.setZDimension(11);
GeoElevationGrid26.setXSpacing(18);
GeoElevationGrid26.setZSpacing(18);
GeoElevationGrid26.setYScale(20);
GeoElevationGrid26.setHeight(new double[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0}, 231);
Shape23.setGeometry(&GeoElevationGrid26);

Scene8.addChild(&Shape23);

Shape& Shape27 =  Shape();
Shape27.setDEF(CString("california_northing_first"));
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setDiffuseColor(new float[]{0.9,0,0});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

GeoElevationGrid& GeoElevationGrid30 =  GeoElevationGrid();
GeoElevationGrid30.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("Z11, "), CString("Nnorthing_first")}, 4);
GeoElevationGrid30.setGeoGridOrigin(new double[]{3600000,0,0});
GeoElevationGrid30.setXDimension(2);
GeoElevationGrid30.setZDimension(2);
GeoElevationGrid30.setXSpacing(400000);
GeoElevationGrid30.setZSpacing(500000);
GeoElevationGrid30.setYScale(200);
GeoElevationGrid30.setHeight(new double[]{1000,1000,1000,1000}, 4);
Shape27.setGeometry(&GeoElevationGrid30);

Scene8.addChild(&Shape27);

Shape& Shape31 =  Shape();
Shape31.setDEF(CString("california_easting_first"));
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{0,0,0.9});
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

GeoElevationGrid& GeoElevationGrid34 =  GeoElevationGrid();
GeoElevationGrid34.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("Z10, "), CString("Neasting_first")}, 4);
GeoElevationGrid34.setGeoGridOrigin(new double[]{0,3600000,0});
GeoElevationGrid34.setXDimension(2);
GeoElevationGrid34.setZDimension(2);
GeoElevationGrid34.setXSpacing(400000);
GeoElevationGrid34.setZSpacing(500000);
GeoElevationGrid34.setYScale(200);
GeoElevationGrid34.setHeight(new double[]{1000,1000,1000,1000}, 4);
Shape31.setGeometry(&GeoElevationGrid34);

Scene8.addChild(&Shape31);

X3D0.setScene(&Scene8);

}
