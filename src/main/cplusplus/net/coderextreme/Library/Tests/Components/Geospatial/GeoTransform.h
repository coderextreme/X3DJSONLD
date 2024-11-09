//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Fri, 15 Apr 2016 06:14:15 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geospatial/GeoTransform.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 16 Apr 2016 16:49:19 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("GeoTransform"));
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
MetadataDouble14.setValue(new double[]{-8069103.5,-13976098.0,11294733.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{-0.865087914247406,0.231799608004517,0.444850359505334,5.19891519167146}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{-35164.6875,0.0,-9.22524860322294e-13}, 3);
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

Background& Background20 =  Background();
Background20.setSkyColor(new float[]{0.1,0.1,0.8}, 3);
Background20.setGroundColor(new float[]{0.1,0.1,0.8}, 3);
Scene8.addChild(&Background20);

GeoViewpoint& GeoViewpoint21 =  GeoViewpoint();
GeoViewpoint21.setDescription(CString("Initial GeoViewpoint"));
GeoViewpoint21.setPosition(new double[]{35.0456768585212,-119.99999992177,13326935.0223425});
GeoViewpoint21.setOrientation(new float[]{1.0,9.51556969047435e-10,-1.67784993205101e-10,4.71398251875275});
GeoViewpoint21.setCenterOfRotation(new double[]{180.0,0.0,-6342972.31424518});
Scene8.addChild(&GeoViewpoint21);

Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Material24.setDiffuseColor(new float[]{0.3,1.0,0.3});
Appearance23.addChild(&Material24);

Shape22.addChild(&Appearance23);

GeoElevationGrid& GeoElevationGrid25 =  GeoElevationGrid();
GeoElevationGrid25.setGeoGridOrigin(new double[]{-90.0,-180.0,0.0});
GeoElevationGrid25.setXDimension(21);
GeoElevationGrid25.setZDimension(11);
GeoElevationGrid25.setXSpacing(18);
GeoElevationGrid25.setZSpacing(18);
GeoElevationGrid25.setYScale(20);
GeoElevationGrid25.setHeight(new double[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,3135.0,2976.0,2529.0,2135.0,3449.0,2899.0,3190.0,2375.0,0.0,0.0,3086.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,25.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,142.0,792.0,0.0,0.0,0.0,969.0,0.0,0.0,0.0,0.0,0.0,495.0,276.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,320.0,46.0,60.0,0.0,0.0,0.0,588.0,0.0,0.0,0.0,0.0,0.0,0.0,34.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,301.0,601.0,837.0,627.0,0.0,880.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,202.0,1.0,0.0,0.0,0.0,0.0,1241.0,385.0,6.0,582.0,468.0,215.0,5201.0,529.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1304.0,427.0,365.0,374.0,0.0,0.0,0.0,1977.0,345.0,22.0,132.0,325.0,2072.0,1256.0,171.0,0.0,0.0,0.0,0.0,706.0,1896.0,464.0,134.0,0.0,0.0,2563.0,0.0,0.0,0.0,143.0,11.0,784.0,88.0,498.0,307.0,108.0,1707.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,600.0,378.0,1378.0,339.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 231);
Shape22.setGeometry(&GeoElevationGrid25);

Scene8.addChild(&Shape22);

Shape& Shape26 =  Shape();
Shape26.setDEF(CString("california_northing_first"));
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0.9,0.0,0.0});
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

GeoElevationGrid& GeoElevationGrid29 =  GeoElevationGrid();
GeoElevationGrid29.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("Z10, "), CString("Nnorthing_first")}, 4);
GeoElevationGrid29.setGeoGridOrigin(new double[]{3600000.0,0.0,0.0});
GeoElevationGrid29.setXDimension(2);
GeoElevationGrid29.setZDimension(2);
GeoElevationGrid29.setXSpacing(400000);
GeoElevationGrid29.setZSpacing(500000);
GeoElevationGrid29.setYScale(200);
GeoElevationGrid29.setHeight(new double[]{1000.0,1000.0,1000.0,1000.0}, 4);
Shape26.setGeometry(&GeoElevationGrid29);

Scene8.addChild(&Shape26);

GeoTransform& GeoTransform30 =  GeoTransform();
GeoTransform30.setTranslation(new float[]{0.0,100000.0,200000.0});
GeoTransform30.setRotation(new float[]{0.0,1.0,0.0,0.5});
GeoTransform30.setScale(new float[]{1.0,2.0,3.0});
GeoTransform30.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("Z10, "), CString("Neasting_first")}, 4);
GeoTransform30.setGeoCenter(new double[]{0.0,3600000.0,0.0});
Shape& Shape31 =  Shape();
Shape31.setDEF(CString("california_easting_first"));
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{0.0,0.0,0.9});
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

GeoElevationGrid& GeoElevationGrid34 =  GeoElevationGrid();
GeoElevationGrid34.setGeoSystem(new CString[]{CString(", "), CString("UTM, "), CString("Z10, "), CString("Neasting_first")}, 4);
GeoElevationGrid34.setGeoGridOrigin(new double[]{0.0,3600000.0,0.0});
GeoElevationGrid34.setXDimension(2);
GeoElevationGrid34.setZDimension(2);
GeoElevationGrid34.setXSpacing(400000);
GeoElevationGrid34.setZSpacing(500000);
GeoElevationGrid34.setYScale(200);
GeoElevationGrid34.setHeight(new double[]{1000.0,1000.0,1000.0,1000.0}, 4);
Shape31.setGeometry(&GeoElevationGrid34);

GeoTransform30.addChildren(Shape31);

Scene8.addChild(&GeoTransform30);

X3D0.setScene(&Scene8);

//}
