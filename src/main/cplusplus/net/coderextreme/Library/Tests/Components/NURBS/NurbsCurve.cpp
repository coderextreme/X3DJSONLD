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
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Mon, 14 Jan 2019 04:01:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.3.9, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsCurve.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 14 Jan 2019 10:35:25 GMT"));
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
MetadataBoolean12.setValue(new boolean[]{False});
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
MetadataBoolean14.setValue(new boolean[]{True});
MetadataSet13.setValue((X3DNode *)&MetadataBoolean14);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet15 =  MetadataSet();
MetadataSet15.X3DNode::setName(CString("Selection"));
MetadataSet15.setDEF(CString("Selection"));
MetadataSet15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean16 =  MetadataBoolean();
MetadataBoolean16.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean16.setDEF(CString("selectGeometry"));
MetadataBoolean16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean16.setValue(new boolean[]{True});
MetadataSet15.setValue((X3DNode *)&MetadataBoolean16);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("nodes"));
MetadataSet17.setDEF(CString("nodes"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("NurbsCurve"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
LineProperties& LineProperties21 =  LineProperties();
LineProperties21.setLinewidthScaleFactor(2);
Appearance20.setLineProperties(LineProperties21);

Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0,0,0});
Material22.setEmissiveColor(new float[]{1,1,1});
Appearance20.addChild(&Material22);

Shape19.addChild(&Appearance20);

NurbsCurve& NurbsCurve23 =  NurbsCurve();
NurbsCurve23.setClosed(True);
NurbsCurve23.setTessellation(44);
CoordinateDouble& CoordinateDouble24 =  CoordinateDouble();
CoordinateDouble24.setPoint(new double[]{0,0,0,1,1,0,3,-1,0,5,1,0,7,-1,0,8,0,0}, 18);
NurbsCurve23.setControlPoint(CoordinateDouble24);

Shape19.setGeometry(NurbsCurve23);

Transform18.addChild(&Shape19);

MetadataSet17.setTransform(Transform18);

MetadataSet15.setValue((X3DNode *)&MetadataSet17);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("BrowserPanel"));
MetadataSet25.setDEF(CString("BrowserPanel"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString26 =  MetadataString();
MetadataString26.X3DNode::setName(CString("type"));
MetadataString26.setDEF(CString("type_2"));
MetadataString26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString26.setValue(new CString[]{CString(", "), CString("TOP_VIEW, "), CString("MAIN_VIEW, "), CString("PERSPECTIVE_VIEWFRONT_VIEW")}, 4);
MetadataSet25.setValue((X3DNode *)&MetadataString26);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("viewpoints"));
MetadataSet27.setDEF(CString("viewpoints"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("PerspectiveViewpoint"));
MetadataSet28.setDEF(CString("PerspectiveViewpoint"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble29 =  MetadataDouble();
MetadataDouble29.X3DNode::setName(CString("position"));
MetadataDouble29.setDEF(CString("position_3"));
MetadataDouble29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble29.setValue(new double[]{5.87788534164429,6.46984958648682,13.8524446487427}, 3);
MetadataSet28.setValue((X3DNode *)&MetadataDouble29);

MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("orientation"));
MetadataDouble30.setDEF(CString("orientation_4"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{-0.704047462871213,0.695566762376518,0.143192350010952,0.568941727555854}, 4);
MetadataSet28.setValue((X3DNode *)&MetadataDouble30);

MetadataDouble& MetadataDouble31 =  MetadataDouble();
MetadataDouble31.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble31.setDEF(CString("centerOfRotation_5"));
MetadataDouble31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble31.setValue(new double[]{0,0,0}, 3);
MetadataSet28.setValue((X3DNode *)&MetadataDouble31);

MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble32.setDEF(CString("fieldOfViewScale"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{1}, 1);
MetadataSet28.setValue((X3DNode *)&MetadataDouble32);

MetadataSet27.setValue((X3DNode *)&MetadataSet28);

MetadataSet& MetadataSet33 =  MetadataSet();
MetadataSet33.X3DNode::setName(CString("TopViewpoint"));
MetadataSet33.setDEF(CString("TopViewpoint"));
MetadataSet33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("position"));
MetadataDouble34.setDEF(CString("position_6"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{0,10000,0}, 3);
MetadataSet33.setValue((X3DNode *)&MetadataDouble34);

MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("orientation"));
MetadataDouble35.setDEF(CString("orientation_7"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{1,0,0,4.71238898038469}, 4);
MetadataSet33.setValue((X3DNode *)&MetadataDouble35);

MetadataDouble& MetadataDouble36 =  MetadataDouble();
MetadataDouble36.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble36.setDEF(CString("centerOfRotation_8"));
MetadataDouble36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble36.setValue(new double[]{-0.0320612526145463,0,0.0937320149966475}, 3);
MetadataSet33.setValue((X3DNode *)&MetadataDouble36);

MetadataDouble& MetadataDouble37 =  MetadataDouble();
MetadataDouble37.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble37.setDEF(CString("fieldOfViewScale_9"));
MetadataDouble37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble37.setValue(new double[]{1.21023944190259}, 1);
MetadataSet33.setValue((X3DNode *)&MetadataDouble37);

MetadataSet27.setValue((X3DNode *)&MetadataSet33);

MetadataSet& MetadataSet38 =  MetadataSet();
MetadataSet38.X3DNode::setName(CString("FrontViewpoint"));
MetadataSet38.setDEF(CString("FrontViewpoint"));
MetadataSet38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble39 =  MetadataDouble();
MetadataDouble39.X3DNode::setName(CString("position"));
MetadataDouble39.setDEF(CString("position_10"));
MetadataDouble39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble39.setValue(new double[]{0,0,10000}, 3);
MetadataSet38.setValue((X3DNode *)&MetadataDouble39);

MetadataDouble& MetadataDouble40 =  MetadataDouble();
MetadataDouble40.X3DNode::setName(CString("orientation"));
MetadataDouble40.setDEF(CString("orientation_11"));
MetadataDouble40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble40.setValue(new double[]{0,0,1,0}, 4);
MetadataSet38.setValue((X3DNode *)&MetadataDouble40);

MetadataDouble& MetadataDouble41 =  MetadataDouble();
MetadataDouble41.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble41.setDEF(CString("centerOfRotation_12"));
MetadataDouble41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble41.setValue(new double[]{-0.00884759203065143,0.0177734813359099,0}, 3);
MetadataSet38.setValue((X3DNode *)&MetadataDouble41);

MetadataDouble& MetadataDouble42 =  MetadataDouble();
MetadataDouble42.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble42.setDEF(CString("fieldOfViewScale_13"));
MetadataDouble42.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble42.setValue(new double[]{1.212467484375}, 1);
MetadataSet38.setValue((X3DNode *)&MetadataDouble42);

MetadataSet27.setValue((X3DNode *)&MetadataSet38);

MetadataSet25.setValue((X3DNode *)&MetadataSet27);

MetadataSet10.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet43 =  MetadataSet();
MetadataSet43.X3DNode::setName(CString("Page"));
MetadataSet43.setDEF(CString("Page"));
MetadataSet43.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger44 =  MetadataInteger();
MetadataInteger44.X3DNode::setName(CString("activeView"));
MetadataInteger44.setDEF(CString("activeView"));
MetadataInteger44.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger44.setValue(MFInt320);
MetadataSet43.setValue((X3DNode *)&MetadataInteger44);

MetadataInteger& MetadataInteger45 =  MetadataInteger();
MetadataInteger45.X3DNode::setName(CString("multiView"));
MetadataInteger45.setDEF(CString("multiView"));
MetadataInteger45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger45.setValue(MFInt321);
MetadataSet43.setValue((X3DNode *)&MetadataInteger45);

MetadataSet10.setValue((X3DNode *)&MetadataSet43);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setPosition(new float[]{4,0,5.50851});
Viewpoint46.setCenterOfRotation(new float[]{4,0,0});
Scene8.addChild(&Viewpoint46);

Transform& Transform47 =  Transform();
Transform47.setUSE(CString("NurbsCurve"));
Scene8.addChild(&Transform47);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("NurbsCurve_14"));
Transform48.setTranslation(new float[]{0,-1,0});
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
LineProperties& LineProperties51 =  LineProperties();
LineProperties51.setLinewidthScaleFactor(2);
Appearance50.setLineProperties(LineProperties51);

Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{0,0,0});
Material52.setEmissiveColor(new float[]{1,1,1});
Appearance50.addChild(&Material52);

Shape49.addChild(&Appearance50);

NurbsCurve& NurbsCurve53 =  NurbsCurve();
NurbsCurve53.setClosed(True);
NurbsCurve53.setTessellation(44);
CoordinateDouble& CoordinateDouble54 =  CoordinateDouble();
CoordinateDouble54.setPoint(new double[]{0,0,0,1,0,0,1,1,0,0,1,0,0,0,0}, 15);
NurbsCurve53.setControlPoint(CoordinateDouble54);

Shape49.setGeometry(NurbsCurve53);

Transform48.addChild(&Shape49);

Scene8.addChild(&Transform48);

X3D0.setScene(&Scene8);

}
