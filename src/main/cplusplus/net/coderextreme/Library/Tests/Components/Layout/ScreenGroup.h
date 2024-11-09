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
meta3.setContent(CString("Fri, 01 Jan 2016 09:17:51 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.2, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 08 Jan 2016 19:26:29 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("ScreenGroup"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("ScreenGroup"));
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
MetadataDouble14.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background17);

OrthoViewpoint& OrthoViewpoint18 =  OrthoViewpoint();
OrthoViewpoint18.setDescription(CString("OthoViewpoint"));
Scene8.addChild(&OrthoViewpoint18);

Viewpoint& Viewpoint19 =  Viewpoint();
Viewpoint19.setDescription(CString("Viewpoint"));
Scene8.addChild(&Viewpoint19);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("Text"));
Transform20.setScale(new float[]{2.0,1.0,1.0});
Transform20.setScaleOrientation(new float[]{0.0,0.0,1.0,0.785398});
ScreenGroup& ScreenGroup21 =  ScreenGroup();
Transform& Transform22 =  Transform();
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance24.addChild(&Material25);

Shape23.addChild(&Appearance24);

Text& Text26 =  Text();
Text26.setString(new CString[]{CString(", "), CString("ABCDEFGHIJKLMNOPQRSTUVWXYZ, "), CString("abcdefghijklmnopqrstuvwxyz, "), CString("0123456789äöüß.?!,;:")}, 4);
CFontStyle& FontStyle27 =  CFontStyle();
FontStyle27.setFamily(new CString[]{CString("Ubuntu Mono")}, 1);
FontStyle27.setStyle(CString("-NORMAL"));
FontStyle27.setSize(12);
FontStyle27.setJustify(new CString[]{CString(", "), CString("BEGINBEGIN")}, 2);
Text26.setFontStyle(&FontStyle27);

Shape23.setGeometry(&Text26);

Transform22.addChild(&Shape23);

ScreenGroup21.addChildren(&Transform22);

Transform& Transform28 =  Transform();
Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Material31.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance30.addChild(&Material31);

ImageTexture& ImageTexture32 =  ImageTexture();
ImageTexture32.setUrl(new CString[]{CString("../images/image.png")}, 1);
Appearance30.addChild(&ImageTexture32);

Shape29.addChild(&Appearance30);

Rectangle2D& Rectangle2D33 =  Rectangle2D();
Rectangle2D33.setSize(new float[]{1.0,1.0});
Shape29.setGeometry(Rectangle2D33);

Transform28.addChild(&Shape29);

ScreenGroup21.addChildren(&Transform28);

Transform20.addChild(&ScreenGroup21);

Scene8.addChild(&Transform20);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("Box"));
Transform34.setTranslation(new float[]{-0.767947,0.507512,0.0});
ScreenGroup& ScreenGroup35 =  ScreenGroup();
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Box_1"));
Transform36.setScale(new float[]{20.0,20.0,20.0});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Box& Box40 =  Box();
Shape37.setGeometry(&Box40);

Transform36.addChild(&Shape37);

ScreenGroup35.addChildren(&Transform36);

Transform34.addChild(&ScreenGroup35);

Scene8.addChild(&Transform34);

X3D0.setScene(&Scene8);

//}
