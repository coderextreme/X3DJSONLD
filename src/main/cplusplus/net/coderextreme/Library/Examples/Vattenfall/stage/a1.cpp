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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:15 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 14 Nov 2015 11:32:07 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("Titania"));
MetadataSet9.setDEF(CString("Titania"));
MetadataSet9.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("NavigationInfo"));
MetadataSet10.setDEF(CString("NavigationInfo"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString11 =  MetadataString();
MetadataString11.X3DNode::setName(CString("type"));
MetadataString11.setDEF(CString("type"));
MetadataString11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString11.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet10.setValue((X3DNode *)&MetadataString11);

MetadataSet9.setValue((X3DNode *)&MetadataSet10);

MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("Viewpoint"));
MetadataSet12.setDEF(CString("Viewpoint"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble13 =  MetadataDouble();
MetadataDouble13.X3DNode::setName(CString("position"));
MetadataDouble13.setDEF(CString("position"));
MetadataDouble13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble13.setValue(new double[]{0,0,10}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble13);

MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("orientation"));
MetadataDouble14.setDEF(CString("orientation"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{0,0,1,0}, 4);
MetadataSet12.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble15.setDEF(CString("centerOfRotation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0,0,0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble15);

MetadataSet9.setValue((X3DNode *)&MetadataSet12);

WorldInfo8.setMetadata(&MetadataSet9);

Scene7.addChild(&WorldInfo8);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("a1on"));
Transform16.setTranslation(new float[]{0.0862359,0.114095,-0.299906});
Transform16.setScale(new float[]{0.163145,0.0203932,0.0318644});
Shape& Shape17 =  Shape();
Appearance& Appearance18 =  Appearance();
ImageTexture& ImageTexture19 =  ImageTexture();
ImageTexture19.setUrl(new CString[]{CString("menu-cam.png")}, 1);
Appearance18.addChild(&ImageTexture19);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setSolid(False);
IndexedFaceSet20.setColorPerVertex(False);
IndexedFaceSet20.setColorIndex(new int[]{0}, 1);
IndexedFaceSet20.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
CColor& Color21 =  CColor();
Color21.setColor(new float[]{0,0.985749,1}, 3);
IndexedFaceSet20.setColor(&Color21);

TextureCoordinate& TextureCoordinate22 =  TextureCoordinate();
TextureCoordinate22.setPoint(new float[]{0.190368,0,0.28267,0,0.28267,1,0.190368,1}, 8);
IndexedFaceSet20.setTexCoord(&TextureCoordinate22);

Coordinate& Coordinate23 =  Coordinate();
Coordinate23.setPoint(new float[]{-0.309632,-0.5,0,-0.21733,-0.5,0,-0.21733,0.5,0,-0.309632,0.5,0}, 12);
IndexedFaceSet20.setCoord(&Coordinate23);

Shape17.setGeometry(&IndexedFaceSet20);

Transform16.addChild(&Shape17);

Scene7.addChild(&Transform16);

X3D0.setScene(&Scene7);

}
