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
meta3.setContent(CString("Tue, 15 Jan 2019 13:46:11 GMT"));
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
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/B.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 15 Jan 2019 16:39:19 GMT"));
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
Transform18.setDEF(CString("B"));
Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Material21.setDEF(CString("Rococo2"));
Material21.setAmbientIntensity(0.216064);
Material21.setDiffuseColor(new float[]{0.864256,0.833788,0.330482});
Material21.setSpecularColor(new float[]{0.0955906,0.0940254,0.0681705});
Material21.setShininess(0.078125);
Appearance20.addChild(&Material21);

Shape19.addChild(&Appearance20);

NurbsSweptSurface& NurbsSweptSurface22 =  NurbsSweptSurface();
NurbsSweptSurface22.setCcw(False);
NurbsCurve2D& NurbsCurve2D23 =  NurbsCurve2D();
NurbsCurve2D23.setTessellation(40);
NurbsCurve2D23.setClosed(True);
NurbsCurve2D23.setControlPoint(new double[]{-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5}, 10);
NurbsSweptSurface22.setCrossSectionCurve(NurbsCurve2D23);

NurbsCurve& NurbsCurve24 =  NurbsCurve();
NurbsCurve24.setClosed(True);
NurbsCurve24.setTessellation(120);
NurbsCurve24.setOrder(4);
CoordinateDouble& CoordinateDouble25 =  CoordinateDouble();
CoordinateDouble25.setDEF(CString("_2"));
CoordinateDouble25.setPoint(new double[]{0,0,0,10,0,0,10,3,0,2,5,0,10,7,0,10,10,0,0,10,0,0,0,0}, 24);
NurbsCurve24.setControlPoint(CoordinateDouble25);

NurbsSweptSurface22.setTrajectoryCurve(NurbsCurve24);

Shape19.setGeometry(NurbsSweptSurface22);

Transform18.addChild(&Shape19);

MetadataSet17.setTransform(Transform18);

MetadataSet15.setValue((X3DNode *)&MetadataSet17);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("BrowserPanel"));
MetadataSet26.setDEF(CString("BrowserPanel"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString27 =  MetadataString();
MetadataString27.X3DNode::setName(CString("type"));
MetadataString27.setDEF(CString("type_3"));
MetadataString27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString27.setValue(new CString[]{CString(", "), CString("TOP_VIEW, "), CString("MAIN_VIEW, "), CString("PERSPECTIVE_VIEWFRONT_VIEW")}, 4);
MetadataSet26.setValue((X3DNode *)&MetadataString27);

MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("viewpoints"));
MetadataSet28.setDEF(CString("viewpoints"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet29 =  MetadataSet();
MetadataSet29.X3DNode::setName(CString("PerspectiveViewpoint"));
MetadataSet29.setDEF(CString("PerspectiveViewpoint"));
MetadataSet29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("position"));
MetadataDouble30.setDEF(CString("position_4"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{19.5040483474731,17.2748856544495,32.6013174057007}, 3);
MetadataSet29.setValue((X3DNode *)&MetadataDouble30);

MetadataDouble& MetadataDouble31 =  MetadataDouble();
MetadataDouble31.X3DNode::setName(CString("orientation"));
MetadataDouble31.setDEF(CString("orientation_5"));
MetadataDouble31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble31.setValue(new double[]{-0.704047459582387,0.695566763588041,0.143192360296371,0.568941728510567}, 4);
MetadataSet29.setValue((X3DNode *)&MetadataDouble31);

MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble32.setDEF(CString("centerOfRotation_6"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{8.5771920979023,5.2475825548172,6.84993648529053}, 3);
MetadataSet29.setValue((X3DNode *)&MetadataDouble32);

MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble33.setDEF(CString("fieldOfViewScale"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{1}, 1);
MetadataSet29.setValue((X3DNode *)&MetadataDouble33);

MetadataSet28.setValue((X3DNode *)&MetadataSet29);

MetadataSet& MetadataSet34 =  MetadataSet();
MetadataSet34.X3DNode::setName(CString("TopViewpoint"));
MetadataSet34.setDEF(CString("TopViewpoint"));
MetadataSet34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("position"));
MetadataDouble35.setDEF(CString("position_7"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{8.57719230651855,27.859375,6.84993648529053}, 3);
MetadataSet34.setValue((X3DNode *)&MetadataDouble35);

MetadataDouble& MetadataDouble36 =  MetadataDouble();
MetadataDouble36.X3DNode::setName(CString("orientation"));
MetadataDouble36.setDEF(CString("orientation_8"));
MetadataDouble36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble36.setValue(new double[]{1,0,0,4.71238898038469}, 4);
MetadataSet34.setValue((X3DNode *)&MetadataDouble36);

MetadataDouble& MetadataDouble37 =  MetadataDouble();
MetadataDouble37.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble37.setDEF(CString("centerOfRotation_9"));
MetadataDouble37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble37.setValue(new double[]{8.5771920979023,5.2475825548172,6.84993648529053}, 3);
MetadataSet34.setValue((X3DNode *)&MetadataDouble37);

MetadataDouble& MetadataDouble38 =  MetadataDouble();
MetadataDouble38.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble38.setDEF(CString("fieldOfViewScale_10"));
MetadataDouble38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble38.setValue(new double[]{2.64867162704468}, 1);
MetadataSet34.setValue((X3DNode *)&MetadataDouble38);

MetadataSet28.setValue((X3DNode *)&MetadataSet34);

MetadataSet& MetadataSet39 =  MetadataSet();
MetadataSet39.X3DNode::setName(CString("FrontViewpoint"));
MetadataSet39.setDEF(CString("FrontViewpoint"));
MetadataSet39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble40 =  MetadataDouble();
MetadataDouble40.X3DNode::setName(CString("position"));
MetadataDouble40.setDEF(CString("position_11"));
MetadataDouble40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble40.setValue(new double[]{8.57719230651855,5.24758243560791,29.4609375}, 3);
MetadataSet39.setValue((X3DNode *)&MetadataDouble40);

MetadataDouble& MetadataDouble41 =  MetadataDouble();
MetadataDouble41.X3DNode::setName(CString("orientation"));
MetadataDouble41.setDEF(CString("orientation_12"));
MetadataDouble41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble41.setValue(new double[]{0,0,1,0}, 4);
MetadataSet39.setValue((X3DNode *)&MetadataDouble41);

MetadataDouble& MetadataDouble42 =  MetadataDouble();
MetadataDouble42.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble42.setDEF(CString("centerOfRotation_13"));
MetadataDouble42.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble42.setValue(new double[]{8.5771920979023,5.2475825548172,6.84993648529053}, 3);
MetadataSet39.setValue((X3DNode *)&MetadataDouble42);

MetadataDouble& MetadataDouble43 =  MetadataDouble();
MetadataDouble43.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble43.setDEF(CString("fieldOfViewScale_14"));
MetadataDouble43.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble43.setValue(new double[]{2.64867162704468}, 1);
MetadataSet39.setValue((X3DNode *)&MetadataDouble43);

MetadataSet28.setValue((X3DNode *)&MetadataSet39);

MetadataSet26.setValue((X3DNode *)&MetadataSet28);

MetadataSet10.setValue((X3DNode *)&MetadataSet26);

MetadataSet& MetadataSet44 =  MetadataSet();
MetadataSet44.X3DNode::setName(CString("Page"));
MetadataSet44.setDEF(CString("Page"));
MetadataSet44.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger45 =  MetadataInteger();
MetadataInteger45.X3DNode::setName(CString("activeView"));
MetadataInteger45.setDEF(CString("activeView"));
MetadataInteger45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger45.setValue(MFInt320);
MetadataSet44.setValue((X3DNode *)&MetadataInteger45);

MetadataInteger& MetadataInteger46 =  MetadataInteger();
MetadataInteger46.X3DNode::setName(CString("multiView"));
MetadataInteger46.setDEF(CString("multiView"));
MetadataInteger46.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger46.setValue(MFInt321);
MetadataSet44.setValue((X3DNode *)&MetadataInteger46);

MetadataSet10.setValue((X3DNode *)&MetadataSet44);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Background& Background47 =  Background();
Background47.setDEF(CString("White"));
Background47.setSkyColor(new float[]{1,1,1}, 3);
Scene8.addChild(&Background47);

Viewpoint& Viewpoint48 =  Viewpoint();
Viewpoint48.setPosition(new float[]{16.7099,10.2735,13.6999});
Viewpoint48.setOrientation(new float[]{-0.359808403403336,0.923568512592993,0.132510812340385,0.758872814422469});
Viewpoint48.setCenterOfRotation(new float[]{5.03567,4.99999,0});
Scene8.addChild(&Viewpoint48);

Transform& Transform49 =  Transform();
Transform49.setUSE(CString("B"));
Scene8.addChild(&Transform49);

X3D0.setScene(&Scene8);

}
