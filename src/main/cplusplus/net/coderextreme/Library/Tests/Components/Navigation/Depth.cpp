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
meta3.setContent(CString("Wed, 16 Sep 2015 02:05:14 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.9, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Navigation/Depth.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sun, 11 Sep 2016 05:53:00 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("Depth"));
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
MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("children"));
MetadataSet16.setDEF(CString("children"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
NavigationInfo& NavigationInfo17 =  NavigationInfo();
NavigationInfo17.setDEF(CString("_1"));
NavigationInfo17.setType(new CString[]{CString(", "), CString("WALKANY")}, 2);
MetadataSet16.setNavigationInfo(&NavigationInfo17);

MetadataSet15.setValue((X3DNode *)&MetadataSet16);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("previous"));
MetadataSet18.setDEF(CString("previous"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet15.setValue((X3DNode *)&MetadataSet18);

MetadataSet10.setValue((X3DNode *)&MetadataSet15);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("NavigationInfo"));
MetadataSet19.setDEF(CString("NavigationInfo"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString20 =  MetadataString();
MetadataString20.X3DNode::setName(CString("type"));
MetadataString20.setDEF(CString("type"));
MetadataString20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString20.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet19.setValue((X3DNode *)&MetadataString20);

MetadataSet10.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("Viewpoint"));
MetadataSet21.setDEF(CString("Viewpoint"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble22 =  MetadataDouble();
MetadataDouble22.X3DNode::setName(CString("position"));
MetadataDouble22.setDEF(CString("position"));
MetadataDouble22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble22.setValue(new double[]{3.7273065935322,3.12903272440423,8.73592237645378}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble22);

MetadataDouble& MetadataDouble23 =  MetadataDouble();
MetadataDouble23.X3DNode::setName(CString("orientation"));
MetadataDouble23.setDEF(CString("orientation"));
MetadataDouble23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble23.setValue(new double[]{-0.612643442740256,0.78037437123052,0.125235189918556,0.512384258680222}, 4);
MetadataSet21.setValue((X3DNode *)&MetadataDouble23);

MetadataDouble& MetadataDouble24 =  MetadataDouble();
MetadataDouble24.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble24.setDEF(CString("centerOfRotation"));
MetadataDouble24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble24.setValue(new double[]{0,0,0}, 3);
MetadataSet21.setValue((X3DNode *)&MetadataDouble24);

MetadataSet10.setValue((X3DNode *)&MetadataSet21);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Viewpoint& Viewpoint25 =  Viewpoint();
Scene8.addChild(&Viewpoint25);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Box"));
Transform26.setTranslation(new float[]{0,0,-1});
Transform26.setScale(new float[]{5,3,1});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Material& Material29 =  Material();
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Box& Box30 =  Box();
Shape27.setGeometry(&Box30);

Transform26.addChild(&Shape27);

Scene8.addChild(&Transform26);

NavigationInfo& NavigationInfo31 =  NavigationInfo();
NavigationInfo31.setUSE(CString("_1"));
Scene8.addChild(&NavigationInfo31);

X3D0.setScene(&Scene8);

}
