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
meta3.setContent(CString("Sun, 10 Apr 2016 01:48:21 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoCoordinate.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 16 Apr 2016 16:49:21 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Background& Background9 =  Background();
Background9.setGroundColor(new float[]{0.1,0.1,0.4}, 3);
Background9.setSkyColor(new float[]{0.1,0.1,0.4}, 3);
Scene8.addChild(&Background9);

GeoViewpoint& GeoViewpoint10 =  GeoViewpoint();
GeoViewpoint10.setDescription(CString("Initial GeoViewpoint"));
GeoViewpoint10.setOrientation(new float[]{1,0,0,-1.57});
GeoViewpoint10.setPosition(new double[]{35,-120,10000000});
GeoViewpoint10.setCenterOfRotation(new double[]{0,0,-6371000});
GeoOrigin& GeoOrigin11 =  GeoOrigin();
GeoOrigin11.setDEF(CString("GO"));
GeoOrigin11.setGeoCoords(new double[]{45,-80,0});
GeoOrigin11.setRotateYUp(True);
GeoViewpoint10.setGeoOrigin(GeoOrigin11);

Scene8.addChild(&GeoViewpoint10);

Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{0.7,0.1,0.3});
Appearance13.addChild(&Material14);

Shape12.addChild(&Appearance13);

Box& Box15 =  Box();
Box15.setSize(new float[]{100000,800000,200000});
Shape12.setGeometry(&Box15);

Scene8.addChild(&Shape12);

Shape& Shape16 =  Shape();
Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setDiffuseColor(new float[]{0.3,1,0.3});
Material18.setTranspareny("0.8");
Appearance17.addChild(&Material18);

Shape16.addChild(&Appearance17);

GeoElevationGrid& GeoElevationGrid19 =  GeoElevationGrid();
GeoElevationGrid19.setGeoGridOrigin(new double[]{-90,-180,0});
GeoElevationGrid19.setHeight(new double[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3135,2976,2529,2135,3449,2899,3190,2375,0,0,3086,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,142,792,0,0,0,969,0,0,0,0,0,495,276,0,0,0,0,0,0,0,320,46,60,0,0,0,588,0,0,0,0,0,0,34,0,0,0,0,0,0,0,0,0,0,0,301,601,837,627,0,880,0,0,0,0,0,0,0,0,0,202,1,0,0,0,0,1241,385,6,582,468,215,5201,529,0,0,0,0,0,0,0,1304,427,365,374,0,0,0,1977,345,22,132,325,2072,1256,171,0,0,0,0,706,1896,464,134,0,0,2563,0,0,0,143,11,784,88,498,307,108,1707,0,0,0,0,0,0,0,600,378,1378,339,0,0,0,0,0,0,0,0,0,0,0}, 231);
GeoElevationGrid19.setXDimension(21);
GeoElevationGrid19.setXSpacing(18);
GeoElevationGrid19.setYScale(20);
GeoElevationGrid19.setZDimension(11);
GeoElevationGrid19.setZSpacing(18);
GeoOrigin& GeoOrigin20 =  GeoOrigin();
GeoOrigin20.setUSE(CString("GO"));
GeoElevationGrid19.setGeoOrigin(GeoOrigin20);

Shape16.setGeometry(&GeoElevationGrid19);

Scene8.addChild(&Shape16);

Shape& Shape21 =  Shape();
Shape21.setDEF(CString("california_northing_first"));
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.9,0,0});
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

GeoElevationGrid& GeoElevationGrid24 =  GeoElevationGrid();
GeoElevationGrid24.setGeoSystem(new CString[]{CString("UTM"), CString("Z10"), CString("N"), CString("northing_first")}, 4);
GeoElevationGrid24.setGeoGridOrigin(new double[]{3600000,0,0});
GeoElevationGrid24.setXDimension(2);
GeoElevationGrid24.setXSpacing(400000);
GeoElevationGrid24.setYScale(200);
GeoElevationGrid24.setZDimension(2);
GeoElevationGrid24.setZSpacing(500000);
GeoElevationGrid24.setHeight(new double[]{1000,1000,1000,1000}, 4);
GeoOrigin& GeoOrigin25 =  GeoOrigin();
GeoOrigin25.setUSE(CString("GO"));
GeoElevationGrid24.setGeoOrigin(GeoOrigin25);

Shape21.setGeometry(&GeoElevationGrid24);

Scene8.addChild(&Shape21);

GeoTransform& GeoTransform26 =  GeoTransform();
GeoTransform26.setGeoSystem(new CString[]{CString("UTM"), CString("Z10"), CString("N"), CString("easting_first")}, 4);
GeoTransform26.setGeoCenter(new double[]{0,3600000,0});
GeoTransform26.setRotation(new float[]{0,1,0,0.5});
GeoTransform26.setScale(new float[]{1,2,3});
GeoTransform26.setTranslation(new float[]{0,100000,200000});
//GeoTransform
Shape& Shape27 =  Shape();
Shape27.setDEF(CString("california_easting_first"));
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Material29.setDiffuseColor(new float[]{0,0,0.9});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

GeoElevationGrid& GeoElevationGrid30 =  GeoElevationGrid();
GeoElevationGrid30.setGeoSystem(new CString[]{CString("UTM"), CString("Z10"), CString("N"), CString("easting_first")}, 4);
GeoElevationGrid30.setGeoGridOrigin(new double[]{0,3600000,0});
GeoElevationGrid30.setXDimension(2);
GeoElevationGrid30.setXSpacing(400000);
GeoElevationGrid30.setYScale(200);
GeoElevationGrid30.setZDimension(2);
GeoElevationGrid30.setZSpacing(500000);
GeoElevationGrid30.setHeight(new double[]{1000,1000,1000,1000}, 4);
GeoOrigin& GeoOrigin31 =  GeoOrigin();
GeoOrigin31.setUSE(CString("GO"));
GeoElevationGrid30.setGeoOrigin(GeoOrigin31);

Shape27.setGeometry(&GeoElevationGrid30);

GeoTransform26.addChildren(Shape27);

GeoOrigin& GeoOrigin32 =  GeoOrigin();
GeoOrigin32.setUSE(CString("GO"));
GeoTransform26.setGeoOrigin(GeoOrigin32);

Scene8.addChild(&GeoTransform26);

X3D0.setScene(&Scene8);

}
