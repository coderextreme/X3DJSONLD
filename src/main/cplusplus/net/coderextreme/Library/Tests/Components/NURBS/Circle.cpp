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
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("NURBS"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("World of Titania"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Thu, 03 Oct 2019 10:45:27 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Titania V4.5.12, http://titania.create3000.de"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/Circle.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Thu, 03 Oct 2019 10:45:57 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Titania"));
MetadataSet11.setDEF(CString("Titania"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("AngleGrid"));
MetadataSet12.setDEF(CString("AngleGrid"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean13 =  MetadataBoolean();
MetadataBoolean13.X3DNode::setName(CString("enabled"));
MetadataBoolean13.setDEF(CString("enabled"));
MetadataBoolean13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean13.setValue(new boolean[]{False});
MetadataSet12.setValue((X3DNode *)&MetadataBoolean13);

MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("Grid"));
MetadataSet14.setDEF(CString("Grid"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean15 =  MetadataBoolean();
MetadataBoolean15.X3DNode::setName(CString("enabled"));
MetadataBoolean15.setDEF(CString("enabled_1"));
MetadataBoolean15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean15.setValue(new boolean[]{True});
MetadataSet14.setValue((X3DNode *)&MetadataBoolean15);

MetadataSet11.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("Selection"));
MetadataSet16.setDEF(CString("Selection"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean17 =  MetadataBoolean();
MetadataBoolean17.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean17.setDEF(CString("selectGeometry"));
MetadataBoolean17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean17.setValue(new boolean[]{False});
MetadataSet16.setValue((X3DNode *)&MetadataBoolean17);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("nodes"));
MetadataSet18.setDEF(CString("nodes"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet16.setValue((X3DNode *)&MetadataSet18);

MetadataSet11.setValue((X3DNode *)&MetadataSet16);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("BrowserPanel"));
MetadataSet19.setDEF(CString("BrowserPanel"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString20 =  MetadataString();
MetadataString20.X3DNode::setName(CString("type"));
MetadataString20.setDEF(CString("type_2"));
MetadataString20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString20.setValue(new CString[]{CString(", "), CString("TOP_VIEW, "), CString("MAIN_VIEW, "), CString("PERSPECTIVE_VIEWFRONT_VIEW")}, 4);
MetadataSet19.setValue((X3DNode *)&MetadataString20);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("viewpoints"));
MetadataSet21.setDEF(CString("viewpoints"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet22 =  MetadataSet();
MetadataSet22.X3DNode::setName(CString("PerspectiveViewpoint"));
MetadataSet22.setDEF(CString("PerspectiveViewpoint"));
MetadataSet22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("position"));
MetadataDouble23.setDEF(CString("position_3"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{5.87788534164429,6.46984958648682,13.8524446487427}, 3);
MetadataSet22.setValue((X3DNode *)&MetadataDouble23);

MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("orientation"));
MetadataDouble24.setDEF(CString("orientation_4"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854}, 4);
MetadataSet22.setValue((X3DNode *)&MetadataDouble24);

MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble25.setDEF(CString("centerOfRotation_5"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{0,0,0}, 3);
MetadataSet22.setValue((X3DNode *)&MetadataDouble25);

MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble26.setDEF(CString("fieldOfViewScale"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{1}, 1);
MetadataSet22.setValue((X3DNode *)&MetadataDouble26);

MetadataSet21.setValue((X3DNode *)&MetadataSet22);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("TopViewpoint"));
MetadataSet27.setDEF(CString("TopViewpoint"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble28 =  MetadataDouble();
MetadataDouble28.X3DNode::setName(CString("position"));
MetadataDouble28.setDEF(CString("position_6"));
MetadataDouble28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble28.setValue(new double[]{0,10000,0}, 3);
MetadataSet27.setValue((X3DNode *)&MetadataDouble28);

MetadataDouble& MetadataDouble29 =  MetadataDouble();
MetadataDouble29.X3DNode::setName(CString("orientation"));
MetadataDouble29.setDEF(CString("orientation_7"));
MetadataDouble29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble29.setValue(new double[]{1,0,0,4.71238898038469}, 4);
MetadataSet27.setValue((X3DNode *)&MetadataDouble29);

MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble30.setDEF(CString("centerOfRotation_8"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{-0.0320612526145463,0,0.0937320149966475}, 3);
MetadataSet27.setValue((X3DNode *)&MetadataDouble30);

MetadataDouble& MetadataDouble31 =  MetadataDouble();
MetadataDouble31.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble31.setDEF(CString("fieldOfViewScale_9"));
MetadataDouble31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble31.setValue(new double[]{1.21023944190259}, 1);
MetadataSet27.setValue((X3DNode *)&MetadataDouble31);

MetadataSet21.setValue((X3DNode *)&MetadataSet27);

MetadataSet& MetadataSet32 =  MetadataSet();
MetadataSet32.X3DNode::setName(CString("FrontViewpoint"));
MetadataSet32.setDEF(CString("FrontViewpoint"));
MetadataSet32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("position"));
MetadataDouble33.setDEF(CString("position_10"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{0,0,10000}, 3);
MetadataSet32.setValue((X3DNode *)&MetadataDouble33);

MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("orientation"));
MetadataDouble34.setDEF(CString("orientation_11"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{0,0,1,0}, 4);
MetadataSet32.setValue((X3DNode *)&MetadataDouble34);

MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble35.setDEF(CString("centerOfRotation_12"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{-0.00884759203065143,0.0177734813359099,0}, 3);
MetadataSet32.setValue((X3DNode *)&MetadataDouble35);

MetadataDouble& MetadataDouble36 =  MetadataDouble();
MetadataDouble36.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble36.setDEF(CString("fieldOfViewScale_13"));
MetadataDouble36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble36.setValue(new double[]{1.212467484375}, 1);
MetadataSet32.setValue((X3DNode *)&MetadataDouble36);

MetadataSet21.setValue((X3DNode *)&MetadataSet32);

MetadataSet19.setValue((X3DNode *)&MetadataSet21);

MetadataSet11.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("Page"));
MetadataSet37.setDEF(CString("Page"));
MetadataSet37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger38 =  MetadataInteger();
MetadataInteger38.X3DNode::setName(CString("activeView"));
MetadataInteger38.setDEF(CString("activeView"));
MetadataInteger38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger38.setValue(MFInt320);
MetadataSet37.setValue((X3DNode *)&MetadataInteger38);

MetadataInteger& MetadataInteger39 =  MetadataInteger();
MetadataInteger39.X3DNode::setName(CString("multiView"));
MetadataInteger39.setDEF(CString("multiView"));
MetadataInteger39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger39.setValue(MFInt321);
MetadataSet37.setValue((X3DNode *)&MetadataInteger39);

MetadataSet11.setValue((X3DNode *)&MetadataSet37);

WorldInfo10.setMetadata(&MetadataSet11);

Scene9.addChild(&WorldInfo10);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("Circle"));
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setEmissiveColor(new float[]{1,1,1});
Appearance42.addChild(&Material43);

Shape41.addChild(&Appearance42);

NurbsCurve& NurbsCurve44 =  NurbsCurve();
NurbsCurve44.setKnot(new double[]{0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1}, 12);
NurbsCurve44.setWeight(new double[]{1,0.7071,1,0.7071,1,0.7071,1,0.7071,1}, 9);
CoordinateDouble& CoordinateDouble45 =  CoordinateDouble();
CoordinateDouble45.setPoint(new double[]{1,0,0,0.7071,-0.7071,0,0,-1,0,-0.7071,-0.7071,0,-1,0,0,-0.7071,0.7071,0,0,1,0,0.7071,0.7071,0,1,0,0}, 27);
NurbsCurve44.setControlPoint(CoordinateDouble45);

Shape41.setGeometry(NurbsCurve44);

Transform40.addChild(&Shape41);

Scene9.addChild(&Transform40);

X3D0.setScene(&Scene9);

}
