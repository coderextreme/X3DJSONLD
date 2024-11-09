#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Sunrise X3D Editor"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Mon, 13 Apr 2015 02:16:11 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Sunrise X3D Editor V1.0.4, https://create3000.github.io/sunrise/"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 28 Oct 2022 13:27:25 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///Volumes/Home/Projekte/Library/Tests/Components/Interpolation/NormalInterpolator.x3d"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("NormalInterpolator"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("AngleGrid"));
MetadataBoolean& MetadataBoolean12 =  MetadataBoolean();
MetadataBoolean12.X3DNode::setName(CString("enabled"));
MetadataBoolean12.setValue(new boolean[]{True});
MetadataSet11.setValue((X3DNode *)&MetadataBoolean12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Grid"));
MetadataBoolean& MetadataBoolean14 =  MetadataBoolean();
MetadataBoolean14.X3DNode::setName(CString("enabled"));
MetadataBoolean14.setValue(new boolean[]{False});
MetadataSet13.setValue((X3DNode *)&MetadataBoolean14);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("_1"));
TimeSensor15.setCycleInterval(10);
TimeSensor15.setLoop(True);
Scene8.addChild(&TimeSensor15);

NormalInterpolator& NormalInterpolator16 =  NormalInterpolator();
NormalInterpolator16.setDEF(CString("_2"));
NormalInterpolator16.setKey(new float[]{0,0.25,0.5,0.75,1}, 5);
NormalInterpolator16.setKeyValue(new float[]{1,0,0,0,1,0,-1,0,0,0,-1,0,0,1,0,-1,0,0,0,-1,0,1,0,0,-1,0,0,0,-1,0,1,0,0,0,1,0,0,-1,0,1,0,0,0,1,0,-1,0,0,1,0,0,0,1,0,-1,0,0,0,-1,0}, 60);
Scene8.addChild(&NormalInterpolator16);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("PointSet_1"));
Transform17.setScale(new float[]{3,3,3});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
PointProperties& PointProperties20 =  PointProperties();
PointProperties20.setPointSizeScaleFactor(20);
PointProperties20.setPointSizeMinValue(20);
PointProperties20.setPointSizeMaxValue(20);
Appearance19.setPointProperties(PointProperties20);

Material& Material21 =  Material();
Material21.setEmissiveColor(new float[]{1,0,0});
Appearance19.addChild(&Material21);

Shape18.addChild(&Appearance19);

PointSet& PointSet22 =  PointSet();
Coordinate& Coordinate23 =  Coordinate();
Coordinate23.setDEF(CString("_3"));
Coordinate23.setPoint(new float[]{-0.983304,-0.181969,0,0.181969,-0.983304,0,0.983304,0.181969,0,-0.181969,0.983304,0}, 12);
PointSet22.setCoord(&Coordinate23);

Shape18.setGeometry(PointSet22);

Transform17.addChild(&Shape18);

Scene8.addChild(&Transform17);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("_1"));
ROUTE24.setFromField(CString("fraction_changed"));
ROUTE24.setToNode(CString("_2"));
ROUTE24.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("_2"));
ROUTE25.setFromField(CString("value_changed"));
ROUTE25.setToNode(CString("_3"));
ROUTE25.setToField(CString("set_point"));
Scene8.addChild(&ROUTE25);

X3D0.setScene(&Scene8);

}
