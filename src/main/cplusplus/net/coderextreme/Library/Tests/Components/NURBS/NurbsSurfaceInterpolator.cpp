#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{0});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.2"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Wed, 16 Jan 2019 14:37:37 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.3.10, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSurfaceInterpolator.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 19 Jan 2019 23:43:54 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("Rectangle2D"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Page"));
MetadataSet11.setDEF(CString("Page"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger12 =  MetadataInteger();
MetadataInteger12.X3DNode::setName(CString("activeView"));
MetadataInteger12.setDEF(CString("activeView"));
MetadataInteger12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger12.setValue(MFInt320);
MetadataSet11.setValue((X3DNode *)&MetadataInteger12);

MetadataInteger& MetadataInteger13 =  MetadataInteger();
MetadataInteger13.X3DNode::setName(CString("multiView"));
MetadataInteger13.setDEF(CString("multiView"));
MetadataInteger13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger13.setValue(MFInt321);
MetadataSet11.setValue((X3DNode *)&MetadataInteger13);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("Selection"));
MetadataSet14.setDEF(CString("Selection"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean15 =  MetadataBoolean();
MetadataBoolean15.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean15.setDEF(CString("selectGeometry"));
MetadataBoolean15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean15.setValue(new boolean[]{False});
MetadataSet14.setValue((X3DNode *)&MetadataBoolean15);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("nodes"));
MetadataSet16.setDEF(CString("nodes"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet14.setValue((X3DNode *)&MetadataSet16);

MetadataSet10.setValue((X3DNode *)&MetadataSet14);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Viewpoint& Viewpoint17 =  Viewpoint();
Viewpoint17.setPosition(new float[]{0,0,2.63585});
Scene8.addChild(&Viewpoint17);

Transform& Transform18 =  Transform();
Transform18.setDEF(CString("NurbsRectangle2D"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Appearance20.addChild(&Material21);

ImageTexture& ImageTexture22 =  ImageTexture();
ImageTexture22.setUrl(new CString[]{CString("../images/lena.jpg")}, 1);
ImageTexture22.setRepeatS(False);
ImageTexture22.setRepeatT(False);
Appearance20.addChild(&ImageTexture22);

Shape19.addChild(&Appearance20);

NurbsPatchSurface& NurbsPatchSurface23 =  NurbsPatchSurface();
NurbsPatchSurface23.setSolid(False);
NurbsPatchSurface23.setUTessellation(20);
NurbsPatchSurface23.setVTessellation(20);
NurbsPatchSurface23.setUOrder(2);
NurbsPatchSurface23.setVOrder(2);
NurbsPatchSurface23.setUDimension(3);
NurbsPatchSurface23.setVDimension(3);
Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setDEF(CString("_1"));
Coordinate24.setPoint(new float[]{-1,-1,0,0,-1,0,1,-1,0,-1,0,0,0,0,1,1,0,0,-1,1,0,0,1,0,1,1,0}, 27);
NurbsPatchSurface23.setControlPoint(Coordinate24);

Shape19.setGeometry(NurbsPatchSurface23);

Transform18.addChild(&Shape19);

TouchSensor& TouchSensor25 =  TouchSensor();
TouchSensor25.setDEF(CString("_2"));
Transform18.addChild(&TouchSensor25);

Scene8.addChild(&Transform18);

NurbsSurfaceInterpolator& NurbsSurfaceInterpolator26 =  NurbsSurfaceInterpolator();
NurbsSurfaceInterpolator26.setDEF(CString("_3"));
NurbsSurfaceInterpolator26.setUOrder(2);
NurbsSurfaceInterpolator26.setVOrder(2);
NurbsSurfaceInterpolator26.setUDimension(3);
NurbsSurfaceInterpolator26.setVDimension(3);
Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setUSE(CString("_1"));
NurbsSurfaceInterpolator26.setControlPoint(Coordinate27);

Scene8.addChild(&NurbsSurfaceInterpolator26);

Script& Script28 =  Script();
Script28.setDEF(CString("NewScript"));
field& field29 =  field();
field29.setName(CString("set_normal"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFVec3f"));
Script28.addChild(&field29);

field& field30 =  field();
field30.setName(CString("rotation_changed"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFRotation"));
Script28.addChild(&field30);


Script28.setSourceCode(CString("ecmascript:")+
_T("var zAxis = new SFVec3f (0, 0, 1);")+
_T("function set_normal (value, time)")+
_T("{")+
_T("	rotation_changed = new SFRotation (zAxis, value);")+
_T("}"));
Scene8.addChild(&Script28);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("Disk2D"));
Transform31.setTranslation(new float[]{-0.937116,0.209022,0.0497365});
Transform31.setRotation(new float[]{-0.0792636934389926,-0.996853683798385,0,0.670687123541612});
Transform31.setScaleOrientation(new float[]{-0.999999999999994,0,0,0.122489331563433});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Disk2D& Disk2D35 =  Disk2D();
Disk2D35.setInnerRadius(0.13);
Disk2D35.setOuterRadius(0.187);
Shape32.setGeometry(Disk2D35);

Transform31.addChild(&Shape32);

Scene8.addChild(&Transform31);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("_2"));
ROUTE36.setFromField(CString("hitTexCoord_changed"));
ROUTE36.setToNode(CString("_3"));
ROUTE36.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE36);

ROUTE& ROUTE37 =  ROUTE();
ROUTE37.setFromNode(CString("NewScript"));
ROUTE37.setFromField(CString("rotation_changed"));
ROUTE37.setToNode(CString("Disk2D"));
ROUTE37.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("_3"));
ROUTE38.setFromField(CString("normal_changed"));
ROUTE38.setToNode(CString("NewScript"));
ROUTE38.setToField(CString("set_normal"));
Scene8.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("_3"));
ROUTE39.setFromField(CString("position_changed"));
ROUTE39.setToNode(CString("Disk2D"));
ROUTE39.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE39);

X3D0.setScene(&Scene8);

}
