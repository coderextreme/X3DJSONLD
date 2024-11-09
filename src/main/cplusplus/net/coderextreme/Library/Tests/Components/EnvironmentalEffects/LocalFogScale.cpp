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
MFInt321.setValue(1, new int32_t[]{1});
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
meta3.setContent(CString("Sun, 16 Dec 2018 09:01:46 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V4.3.5, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/EnvironmentalEffects/FogScale.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sun, 16 Dec 2018 09:45:56 GMT"));
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
MetadataBoolean16.setValue(new boolean[]{False});
MetadataSet15.setValue((X3DNode *)&MetadataBoolean16);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("nodes"));
MetadataSet17.setDEF(CString("nodes"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet15.setValue((X3DNode *)&MetadataSet17);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("BrowserPanel"));
MetadataSet18.setDEF(CString("BrowserPanel"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString19 =  MetadataString();
MetadataString19.X3DNode::setName(CString("type"));
MetadataString19.setDEF(CString("type_2"));
MetadataString19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString19.setValue(new CString[]{CString(", "), CString("TOP_VIEW, "), CString("MAIN_VIEW, "), CString("PERSPECTIVE_VIEWFRONT_VIEW")}, 4);
MetadataSet18.setValue((X3DNode *)&MetadataString19);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("viewpoints"));
MetadataSet20.setDEF(CString("viewpoints"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("PerspectiveViewpoint"));
MetadataSet21.setDEF(CString("PerspectiveViewpoint"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble22 =  MetadataDouble();
MetadataDouble22.X3DNode::setName(CString("position"));
MetadataDouble22.setDEF(CString("position_3"));
MetadataDouble22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble22.setValue(new double[]{-22.2726921645279,34.1239646001577,-16.8288873611093}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble22);

MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("orientation"));
MetadataDouble23.setDEF(CString("orientation_4"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{-0.208492788516243,-0.883796051687825,-0.418849968554055,2.31269443013416}, 4);
MetadataSet21.setValue((X3DNode *)&MetadataDouble23);

MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble24.setDEF(CString("centerOfRotation_5"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{0,0,0}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble24);

MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble25.setDEF(CString("fieldOfViewScale"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{1}, 1);
MetadataSet21.setValue((X3DNode *)&MetadataDouble25);

MetadataSet20.setValue((X3DNode *)&MetadataSet21);

MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("TopViewpoint"));
MetadataSet26.setDEF(CString("TopViewpoint"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble27 =  MetadataDouble();
MetadataDouble27.X3DNode::setName(CString("position"));
MetadataDouble27.setDEF(CString("position_6"));
MetadataDouble27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble27.setValue(new double[]{-8.4961538177602,10000,0.726184320129006}, 3);
MetadataSet26.setValue((X3DNode *)&MetadataDouble27);

MetadataDouble& MetadataDouble28 =  MetadataDouble();
MetadataDouble28.X3DNode::setName(CString("orientation"));
MetadataDouble28.setDEF(CString("orientation_7"));
MetadataDouble28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble28.setValue(new double[]{1,0,0,4.71238898038469}, 4);
MetadataSet26.setValue((X3DNode *)&MetadataDouble28);

MetadataDouble& MetadataDouble29 =  MetadataDouble();
MetadataDouble29.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble29.setDEF(CString("centerOfRotation_8"));
MetadataDouble29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble29.setValue(new double[]{-8.52821507037475,0,0.819916335125654}, 3);
MetadataSet26.setValue((X3DNode *)&MetadataDouble29);

MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble30.setDEF(CString("fieldOfViewScale_9"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{2.17341615774226}, 1);
MetadataSet26.setValue((X3DNode *)&MetadataDouble30);

MetadataSet20.setValue((X3DNode *)&MetadataSet26);

MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("FrontViewpoint"));
MetadataSet31.setDEF(CString("FrontViewpoint"));
MetadataSet31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble32 =  MetadataDouble();
MetadataDouble32.X3DNode::setName(CString("position"));
MetadataDouble32.setDEF(CString("position_10"));
MetadataDouble32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble32.setValue(new double[]{-1.32132392601719,1.49125645364041,10000}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble32);

MetadataDouble& MetadataDouble33 =  MetadataDouble();
MetadataDouble33.X3DNode::setName(CString("orientation"));
MetadataDouble33.setDEF(CString("orientation_11"));
MetadataDouble33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble33.setValue(new double[]{0,0,1,0}, 4);
MetadataSet31.setValue((X3DNode *)&MetadataDouble33);

MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble34.setDEF(CString("centerOfRotation_12"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{-1.33017151804784,1.50902993497632,0}, 3);
MetadataSet31.setValue((X3DNode *)&MetadataDouble34);

MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("fieldOfViewScale"));
MetadataDouble35.setDEF(CString("fieldOfViewScale_13"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{2.64666446088156}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataDouble35);

MetadataSet20.setValue((X3DNode *)&MetadataSet31);

MetadataSet18.setValue((X3DNode *)&MetadataSet20);

MetadataSet10.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet36 =  MetadataSet();
MetadataSet36.X3DNode::setName(CString("Page"));
MetadataSet36.setDEF(CString("Page"));
MetadataSet36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger37 =  MetadataInteger();
MetadataInteger37.X3DNode::setName(CString("activeView"));
MetadataInteger37.setDEF(CString("activeView"));
MetadataInteger37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger37.setValue(MFInt320);
MetadataSet36.setValue((X3DNode *)&MetadataInteger37);

MetadataInteger& MetadataInteger38 =  MetadataInteger();
MetadataInteger38.X3DNode::setName(CString("multiView"));
MetadataInteger38.setDEF(CString("multiView"));
MetadataInteger38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger38.setValue(MFInt321);
MetadataSet36.setValue((X3DNode *)&MetadataInteger38);

MetadataSet10.setValue((X3DNode *)&MetadataSet36);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

NavigationInfo& NavigationInfo39 =  NavigationInfo();
NavigationInfo39.setType(new CString[]{CString(", "), CString("WALKANY")}, 2);
Scene8.addChild(&NavigationInfo39);

Transform& Transform40 =  Transform();
Transform40.setDEF(CString("WithoutScale"));
Transform& Transform41 =  Transform();
Transform41.setDEF(CString("Box"));
Transform41.setTranslation(new float[]{0,5,0});
Transform41.setScale(new float[]{5,5,5});
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Box& Box45 =  Box();
Box45.setSolid(False);
Shape42.setGeometry(&Box45);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

LocalFog& LocalFog46 =  LocalFog();
LocalFog46.setDEF(CString("_14"));
LocalFog46.setColor(new float[]{0,0,1});
LocalFog46.setVisibilityRange(10);
Transform40.addChild(&LocalFog46);

Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDescription(CString("Fog without Scale Inside"));
Viewpoint47.setPosition(new float[]{0,1.6,0});
Viewpoint47.setCenterOfRotation(new float[]{0.722464,2.49992,-1.68122});
Transform40.addChild(&Viewpoint47);

Scene8.addChild(&Transform40);

Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{-15,0,0});
Transform48.setRotation(new float[]{0,-1,0,0.785398131619433});
Transform48.setScale(new float[]{2,1,1});
Transform& Transform49 =  Transform();
Transform49.setUSE(CString("Box"));
Transform48.addChild(&Transform49);

LocalFog& LocalFog50 =  LocalFog();
LocalFog50.setUSE(CString("_14"));
Transform48.addChild(&LocalFog50);

Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDescription(CString("Fog with Scale and Rotation Inside"));
Viewpoint51.setPosition(new float[]{0,1.6,0});
Viewpoint51.setCenterOfRotation(new float[]{0.722464,2.49992,-1.68122});
Transform48.addChild(&Viewpoint51);

Scene8.addChild(&Transform48);

Viewpoint& Viewpoint52 =  Viewpoint();
Viewpoint52.setDescription(CString("Fog without Scale Outside"));
Viewpoint52.setPosition(new float[]{0,1.6,0});
Viewpoint52.setCenterOfRotation(new float[]{0.722464,2.49992,-1.68122});
Scene8.addChild(&Viewpoint52);

Viewpoint& Viewpoint53 =  Viewpoint();
Viewpoint53.setDescription(CString("Fog with Scale and Rotation Outside"));
Viewpoint53.setPosition(new float[]{-15,1.6,0});
Viewpoint53.setOrientation(new float[]{0,-1,0,0.785398131619433});
Viewpoint53.setCenterOfRotation(new float[]{0.722464,2.49992,-1.68122});
Scene8.addChild(&Viewpoint53);

X3D0.setScene(&Scene8);

}
