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
meta3.setContent(CString("Fri, 04 Sep 2015 10:01:40 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Geometry3D/box.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Wed, 27 Jul 2016 04:17:50 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("box"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Selection"));
MetadataSet11.setDEF(CString("Selection"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("children"));
MetadataSet12.setDEF(CString("children"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setDEF(CString("IndexedFaceSet"));
IndexedFaceSet13.setCreaseAngle(3.14159);
IndexedFaceSet13.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1,5,0,0,6,-1,6,0,0,0,5,-1}, 483);
IndexedFaceSet13.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1,99,40,45,100,-1,100,45,34,30,99,-1}, 483);
CColor& Color14 =  CColor();
Color14.setColor(new float[]{0.0,0.0,0.0,1.0,0.917647,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 21);
IndexedFaceSet13.setColor(&Color14);

Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setDEF(CString("coords_ME_Cube"));
Coordinate15.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994,0.959917,0.849807,0.00000399351,0.959917,0.849806,0.143814,0.959917,0.849807,0.00000399351,0.959922,-0.8498,0.643484,0.904863,-0.904859,0.700002}, 303);
IndexedFaceSet13.setCoord(&Coordinate15);

MetadataSet12.setIndexedFaceSet(IndexedFaceSet13);

MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("previous"));
MetadataSet16.setDEF(CString("previous"));
MetadataSet16.X3DNode::setReference(CString("http://titania.create3000.de"));
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("_1"));
Transform17.setTranslation(new float[]{0.104653,-0.00510326,0.0});
Shape& Shape18 =  Shape();
Shape18.setDEF(CString("YellowBox"));
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material20.setSpecularColor(new float[]{0.415,0.415,0.415});
Material20.setShininess(0.102564);
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

IndexedFaceSet& IndexedFaceSet21 =  IndexedFaceSet();
IndexedFaceSet21.setUSE(CString("IndexedFaceSet"));
Shape18.setGeometry(&IndexedFaceSet21);

Transform17.addChild(&Shape18);

MetadataSet16.setTransform(Transform17);

MetadataSet11.setValue((X3DNode *)&MetadataSet16);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet22 =  MetadataSet();
MetadataSet22.X3DNode::setName(CString("NavigationInfo"));
MetadataSet22.setDEF(CString("NavigationInfo"));
MetadataSet22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString23 =  MetadataString();
MetadataString23.X3DNode::setName(CString("type"));
MetadataString23.setDEF(CString("type"));
MetadataString23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString23.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet22.setValue((X3DNode *)&MetadataString23);

MetadataSet10.setValue((X3DNode *)&MetadataSet22);

MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Viewpoint"));
MetadataSet24.setDEF(CString("Viewpoint"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble25 =  MetadataDouble();
MetadataDouble25.X3DNode::setName(CString("position"));
MetadataDouble25.setDEF(CString("position"));
MetadataDouble25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble25.setValue(new double[]{1.93247723579407,1.14236581325531,1.62229800224304}, 3);
MetadataSet24.setValue((X3DNode *)&MetadataDouble25);

MetadataDouble& MetadataDouble26 =  MetadataDouble();
MetadataDouble26.X3DNode::setName(CString("orientation"));
MetadataDouble26.setDEF(CString("orientation"));
MetadataDouble26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble26.setValue(new double[]{0.0381748969524162,-0.665694256695067,-0.745247498382836,5.14184345423998}, 4);
MetadataSet24.setValue((X3DNode *)&MetadataDouble26);

MetadataDouble& MetadataDouble27 =  MetadataDouble();
MetadataDouble27.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble27.setDEF(CString("centerOfRotation"));
MetadataDouble27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble27.setValue(new double[]{0.427072137594223,0.313123226165771,-0.271519124507904}, 3);
MetadataSet24.setValue((X3DNode *)&MetadataDouble27);

MetadataSet10.setValue((X3DNode *)&MetadataSet24);

MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("AngleGrid"));
MetadataSet28.setDEF(CString("AngleGrid"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean29 =  MetadataBoolean();
MetadataBoolean29.X3DNode::setName(CString("enabled"));
MetadataBoolean29.setDEF(CString("enabled"));
MetadataBoolean29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean29.setValue(new boolean[]{false});
MetadataSet28.setValue((X3DNode *)&MetadataBoolean29);

MetadataSet10.setValue((X3DNode *)&MetadataSet28);

MetadataSet& MetadataSet30 =  MetadataSet();
MetadataSet30.X3DNode::setName(CString("Grid"));
MetadataSet30.setDEF(CString("Grid"));
MetadataSet30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean31 =  MetadataBoolean();
MetadataBoolean31.X3DNode::setName(CString("enabled"));
MetadataBoolean31.setDEF(CString("enabled_1"));
MetadataBoolean31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean31.setValue(new boolean[]{true});
MetadataSet30.setValue((X3DNode *)&MetadataBoolean31);

MetadataSet10.setValue((X3DNode *)&MetadataSet30);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Transform& Transform32 =  Transform();
Transform32.setUSE(CString("_1"));
Scene8.addChild(&Transform32);

X3D0.setScene(&Scene8);

//}
