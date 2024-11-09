//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(3, new int32_t[]{14, 10, 14});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{-1});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(3, new int32_t[]{24, 10, 10});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(3, new int32_t[]{73, 10, 41});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(6, new int32_t[]{5, 5, 5, 5, 0, 5});
MFInt32 MFInt325 =  MFInt32();
MFInt325.setValue(6, new int32_t[]{0, 0, -5, -1, 0, -6});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Layering"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("World of Sunrise X3D Editor"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Wed, 18 Nov 2015 05:00:27 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrise X3D Editor V1.0.3, https://create3000.github.io/sunrise/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///Volumes/Home/Projekte/Library/Tests/Components/Geometry2D/Geometry2D.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Wed, 26 Oct 2022 20:29:31 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setTitle(CString("Geometry2D"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Titania"));
MetadataSet11.setDEF(CString("Titania"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("NavigationInfo"));
MetadataSet12.setDEF(CString("NavigationInfo"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString13 =  MetadataString();
MetadataString13.X3DNode::setName(CString("type"));
MetadataString13.setDEF(CString("type"));
MetadataString13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString13.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet12.setValue((X3DNode *)&MetadataString13);

MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("Viewpoint"));
MetadataSet14.setDEF(CString("Viewpoint"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("position"));
MetadataDouble15.setDEF(CString("position"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.013118179515004,-0.957872569561,18.039764404297}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("orientation"));
MetadataDouble16.setDEF(CString("orientation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{-0.75044035340951,0.63789730779079,-0.17299219834397,0.0049795126542074}, 4);
MetadataSet14.setValue((X3DNode *)&MetadataDouble16);

MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble17.setDEF(CString("centerOfRotation"));
MetadataDouble17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble17.setValue(new double[]{-0.044300079345703,-1.0149998664856,-0.0000090645626187325}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble17);

MetadataSet11.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("AngleGrid"));
MetadataSet18.setDEF(CString("AngleGrid"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean19 =  MetadataBoolean();
MetadataBoolean19.X3DNode::setName(CString("enabled"));
MetadataBoolean19.setDEF(CString("enabled"));
MetadataBoolean19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean19.setValue(new boolean[]{false});
MetadataSet18.setValue((X3DNode *)&MetadataBoolean19);

MetadataSet11.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("Grid"));
MetadataSet20.setDEF(CString("Grid"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean21 =  MetadataBoolean();
MetadataBoolean21.X3DNode::setName(CString("enabled"));
MetadataBoolean21.setDEF(CString("enabled_1"));
MetadataBoolean21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean21.setValue(new boolean[]{true});
MetadataSet20.setValue((X3DNode *)&MetadataBoolean21);

MetadataFloat& MetadataFloat22 =  MetadataFloat();
MetadataFloat22.X3DNode::setName(CString("rotation"));
MetadataFloat22.setDEF(CString("rotation"));
MetadataFloat22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat22.setValue(new float[]{1.0,0.0,0.0,1.5708}, 4);
MetadataSet20.setValue((X3DNode *)&MetadataFloat22);

MetadataInteger& MetadataInteger23 =  MetadataInteger();
MetadataInteger23.X3DNode::setName(CString("dimension"));
MetadataInteger23.setDEF(CString("dimension"));
MetadataInteger23.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger23.setValue(MFInt320);
MetadataSet20.setValue((X3DNode *)&MetadataInteger23);

MetadataSet11.setValue((X3DNode *)&MetadataSet20);

MetadataSet& MetadataSet24 =  MetadataSet();
MetadataSet24.X3DNode::setName(CString("Selection"));
MetadataSet24.setDEF(CString("Selection"));
MetadataSet24.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("children"));
MetadataSet25.setDEF(CString("children"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
CFontStyle& FontStyle26 =  CFontStyle();
FontStyle26.setDEF(CString("_1"));
FontStyle26.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle26.setJustify(new CString[]{CString("END")}, 1);
MetadataSet25.setFontStyle(&FontStyle26);

MetadataSet24.setValue((X3DNode *)&MetadataSet25);

MetadataSet& MetadataSet27 =  MetadataSet();
MetadataSet27.X3DNode::setName(CString("previous"));
MetadataSet27.setDEF(CString("previous"));
MetadataSet27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet24.setValue((X3DNode *)&MetadataSet27);

MetadataSet11.setValue((X3DNode *)&MetadataSet24);

MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("LayerSet"));
MetadataSet28.setDEF(CString("LayerSet"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger29 =  MetadataInteger();
MetadataInteger29.X3DNode::setName(CString("activeLayer"));
MetadataInteger29.setDEF(CString("activeLayer"));
MetadataInteger29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger29.setValue(MFInt321);
MetadataSet28.setValue((X3DNode *)&MetadataInteger29);

MetadataSet11.setValue((X3DNode *)&MetadataSet28);

WorldInfo10.setValue(MetadataSet11);

Scene9.addChild(&WorldInfo10);

LayerSet& LayerSet30 =  LayerSet();
LayerSet30.setActiveLayer(1);
LayerSet30.setOrder(new int32_t[]{1,2}, 2);
Layer& Layer31 =  Layer();
Layer31.setDEF(CString("World"));
Layer31.setPickable(true);
Layer31.setObjectType(new CString[]{CString("ALL")}, 1);
MetadataSet& MetadataSet32 =  MetadataSet();
MetadataSet32.X3DNode::setName(CString("Titania"));
MetadataSet32.setDEF(CString("Titania_1"));
MetadataSet32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet33 =  MetadataSet();
MetadataSet33.X3DNode::setName(CString("AngleGrid"));
MetadataSet33.setDEF(CString("AngleGrid_1"));
MetadataSet33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean34 =  MetadataBoolean();
MetadataBoolean34.X3DNode::setName(CString("enabled"));
MetadataBoolean34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean34.setValue(new boolean[]{false});
MetadataSet33.setValue((X3DNode *)&MetadataBoolean34);

MetadataSet32.setValue((X3DNode *)&MetadataSet33);

MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("Grid"));
MetadataSet35.setDEF(CString("Grid_1"));
MetadataSet35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean36 =  MetadataBoolean();
MetadataBoolean36.X3DNode::setName(CString("enabled"));
MetadataBoolean36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean36.setValue(new boolean[]{true});
MetadataSet35.setValue((X3DNode *)&MetadataBoolean36);

MetadataFloat& MetadataFloat37 =  MetadataFloat();
MetadataFloat37.X3DNode::setName(CString("rotation"));
MetadataFloat37.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat37.setValue(new float[]{1.0,0.0,0.0,1.5708}, 4);
MetadataSet35.setValue((X3DNode *)&MetadataFloat37);

MetadataFloat& MetadataFloat38 =  MetadataFloat();
MetadataFloat38.X3DNode::setName(CString("translation"));
MetadataFloat38.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat38.setValue(new float[]{0.0,-1.0,-0.00000363588}, 3);
MetadataSet35.setValue((X3DNode *)&MetadataFloat38);

MetadataInteger& MetadataInteger39 =  MetadataInteger();
MetadataInteger39.X3DNode::setName(CString("dimension"));
MetadataInteger39.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger39.setValue(MFInt322);
MetadataSet35.setValue((X3DNode *)&MetadataInteger39);

MetadataSet32.setValue((X3DNode *)&MetadataSet35);

Layer31.setValue(MetadataSet32);

Background& Background40 =  Background();
Background40.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Layer31.addChild(&Background40);

Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDescription(CString("Initial View"));
Viewpoint41.setPosition(new float[]{0.0131182,-0.957873,18.0398});
Viewpoint41.setOrientation(new float[]{-0.75044037211608,0.63789731631007,-0.17299208578048,0.0049795100000208});
Viewpoint41.setCenterOfRotation(new float[]{-0.0443001,-1.015,-0.00000906456});
Layer31.addChild(&Viewpoint41);

Transform& Transform42 =  Transform();
Transform& Transform43 =  Transform();
Transform43.setTranslation(new float[]{0.999976,-0.000498056,0.0});
Transform43.setCenter(new float[]{-5.99998,4.0005,-1.36914e-7});
Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{-6.0,4.0,-1.36914e-7});
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Appearance46.setDEF(CString("Grey"));
Material& Material47 =  Material();
Appearance46.addChild(&Material47);

ImageTexture& ImageTexture48 =  ImageTexture();
ImageTexture48.setDEF(CString("_2"));
ImageTexture48.setUrl(new CString[]{CString("../images/test.png")}, 1);
Appearance46.addChild(&ImageTexture48);

Shape45.addChild(&Appearance46);

ArcClose2D& ArcClose2D49 =  ArcClose2D();
ArcClose2D49.setDEF(CString("ArcClose2D"));
ArcClose2D49.setStartAngle(2.09);
ArcClose2D49.setEndAngle(5.8808);
Shape45.setGeometry(ArcClose2D49);

Transform44.addChild(&Shape45);

Transform43.addChild(&Transform44);

Transform& Transform50 =  Transform();
Transform50.setTranslation(new float[]{-6.0,4.0,-1.36914e-7});
Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
Appearance52.setDEF(CString("Image"));
Material& Material53 =  Material();
Appearance52.addChild(&Material53);

ImageTexture& ImageTexture54 =  ImageTexture();
ImageTexture54.setUSE(CString("_2"));
Appearance52.addChild(&ImageTexture54);

Shape51.addChild(&Appearance52);

ArcClose2D& ArcClose2D55 =  ArcClose2D();
ArcClose2D55.setDEF(CString("ArcClose2D_1"));
ArcClose2D55.setClosureType(CString("CHORD"));
Shape51.setGeometry(ArcClose2D55);

Transform50.addChild(&Shape51);

Transform43.addChild(&Transform50);

TouchSensor& TouchSensor56 =  TouchSensor();
TouchSensor56.setDEF(CString("_3"));
TouchSensor56.setDescription(CString("ArcClose2D"));
Transform43.addChild(&TouchSensor56);

Transform42.addChild(&Transform43);

Transform& Transform57 =  Transform();
Transform57.setTranslation(new float[]{-2.0,4.0,-1.36914e-7});
Shape& Shape58 =  Shape();
Appearance& Appearance59 =  Appearance();
Appearance59.setUSE(CString("Image"));
Shape58.addChild(&Appearance59);

Disk2D& Disk2D60 =  Disk2D();
Disk2D60.setDEF(CString("Disk2D"));
Disk2D60.setInnerRadius(0.54);
Disk2D60.setOuterRadius(1.26);
Shape58.setGeometry(Disk2D60);

Transform57.addChild(&Shape58);

TouchSensor& TouchSensor61 =  TouchSensor();
TouchSensor61.setDEF(CString("_4"));
TouchSensor61.setDescription(CString("Disk2D"));
Transform57.addChild(&TouchSensor61);

Transform42.addChild(&Transform57);

Transform& Transform62 =  Transform();
Transform62.setTranslation(new float[]{2.0,4.0,-1.36914e-7});
Shape& Shape63 =  Shape();
Appearance& Appearance64 =  Appearance();
Appearance64.setUSE(CString("Image"));
Shape63.addChild(&Appearance64);

Rectangle2D& Rectangle2D65 =  Rectangle2D();
Rectangle2D65.setDEF(CString("Rectangle2D"));
Shape63.setGeometry(Rectangle2D65);

Transform62.addChild(&Shape63);

TouchSensor& TouchSensor66 =  TouchSensor();
TouchSensor66.setDEF(CString("_5"));
TouchSensor66.setDescription(CString("Rectangle2D"));
Transform62.addChild(&TouchSensor66);

Transform42.addChild(&Transform62);

Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[]{5.0,4.0,-1.36914e-7});
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Appearance69.setUSE(CString("Image"));
Shape68.addChild(&Appearance69);

TriangleSet2D& TriangleSet2D70 =  TriangleSet2D();
TriangleSet2D70.setDEF(CString("TriangleSet2D"));
TriangleSet2D70.setVertices(new float[]{-1.0,-1.0,1.0,-1.0,0.0,1.0}, 6);
Shape68.setGeometry(TriangleSet2D70);

Transform67.addChild(&Shape68);

TouchSensor& TouchSensor71 =  TouchSensor();
TouchSensor71.setDEF(CString("_6"));
TouchSensor71.setDescription(CString("TriangleSet2D"));
Transform67.addChild(&TouchSensor71);

Transform42.addChild(&Transform67);

Layer31.addChild(&Transform42);

Transform& Transform72 =  Transform();
Transform& Transform73 =  Transform();
Transform73.setTranslation(new float[]{-5.0,0.0,0.0});
Transform& Transform74 =  Transform();
Shape& Shape75 =  Shape();
Appearance& Appearance76 =  Appearance();
Appearance76.setDEF(CString("Grey_1"));
Material& Material77 =  Material();
Material77.setDEF(CString("Autumn2"));
Material77.setAmbientIntensity(0.188697);
Material77.setDiffuseColor(new float[]{0.749548,0.601201,0.461629});
Material77.setSpecularColor(new float[]{0.0786239,0.0803968,0.0484226});
Material77.setShininess(0.167568);
Appearance76.addChild(&Material77);

Shape75.addChild(&Appearance76);

ArcClose2D& ArcClose2D78 =  ArcClose2D();
ArcClose2D78.setUSE(CString("ArcClose2D_1"));
Shape75.setGeometry(ArcClose2D78);

Transform74.addChild(&Shape75);

Transform73.addChild(&Transform74);

Transform& Transform79 =  Transform();
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Appearance81.setDEF(CString("Grey_2"));
Material& Material82 =  Material();
Material82.setDEF(CString("Autumn9"));
Material82.setAmbientIntensity(0.0724766);
Material82.setDiffuseColor(new float[]{0.297959,0.140816,0.105763});
Material82.setSpecularColor(new float[]{0.176503,0.0894282,0.0});
Material82.setShininess(0.0486486);
Appearance81.addChild(&Material82);

Shape80.addChild(&Appearance81);

ArcClose2D& ArcClose2D83 =  ArcClose2D();
ArcClose2D83.setDEF(CString("ArcClose2D_2"));
ArcClose2D83.setStartAngle(2.09);
ArcClose2D83.setEndAngle(5.8808);
ArcClose2D83.setRadius(1.2);
Shape80.setGeometry(ArcClose2D83);

Transform79.addChild(&Shape80);

Transform73.addChild(&Transform79);

TouchSensor& TouchSensor84 =  TouchSensor();
TouchSensor84.setUSE(CString("_3"));
Transform73.addChild(&TouchSensor84);

Transform72.addChild(&Transform73);

Transform& Transform85 =  Transform();
Transform85.setTranslation(new float[]{-2.0,0.0,0.0});
Shape& Shape86 =  Shape();
Appearance& Appearance87 =  Appearance();
Appearance87.setDEF(CString("Grey_3"));
Material& Material88 =  Material();
Material88.setDEF(CString("Autumn21"));
Material88.setAmbientIntensity(0.0670918);
Material88.setDiffuseColor(new float[]{0.272994,0.0820021,0.0580278});
Material88.setSpecularColor(new float[]{0.27551,0.0418016,0.0418016});
Material88.setShininess(0.127551);
Appearance87.addChild(&Material88);

Shape86.addChild(&Appearance87);

Disk2D& Disk2D89 =  Disk2D();
Disk2D89.setUSE(CString("Disk2D"));
Shape86.setGeometry(Disk2D89);

Transform85.addChild(&Shape86);

TouchSensor& TouchSensor90 =  TouchSensor();
TouchSensor90.setUSE(CString("_4"));
Transform85.addChild(&TouchSensor90);

Transform72.addChild(&Transform85);

Transform& Transform91 =  Transform();
Transform91.setTranslation(new float[]{2.0,0.0,0.0});
Shape& Shape92 =  Shape();
Appearance& Appearance93 =  Appearance();
Appearance93.setDEF(CString("Grey_4"));
Material& Material94 =  Material();
Material94.setDEF(CString("Autumn34"));
Material94.setAmbientIntensity(0.0445259);
Material94.setDiffuseColor(new float[]{0.0877551,0.0639456,0.183051});
Material94.setSpecularColor(new float[]{0.234804,0.171098,0.489785});
Material94.setShininess(0.0702703);
Appearance93.addChild(&Material94);

Shape92.addChild(&Appearance93);

Rectangle2D& Rectangle2D95 =  Rectangle2D();
Rectangle2D95.setUSE(CString("Rectangle2D"));
Shape92.setGeometry(Rectangle2D95);

Transform91.addChild(&Shape92);

TouchSensor& TouchSensor96 =  TouchSensor();
TouchSensor96.setUSE(CString("_5"));
Transform91.addChild(&TouchSensor96);

Transform72.addChild(&Transform91);

Transform& Transform97 =  Transform();
Transform97.setTranslation(new float[]{5.0,0.0,0.0});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Appearance99.setDEF(CString("Grey_5"));
Material& Material100 =  Material();
Material100.setDEF(CString("Autumn3"));
Material100.setAmbientIntensity(0.098983);
Material100.setDiffuseColor(new float[]{0.395932,0.226244,0.128242});
Material100.setSpecularColor(new float[]{1.0,0.464407,0.4753});
Material100.setShininess(0.994595);
Appearance99.addChild(&Material100);

Shape98.addChild(&Appearance99);

TriangleSet2D& TriangleSet2D101 =  TriangleSet2D();
TriangleSet2D101.setUSE(CString("TriangleSet2D"));
Shape98.setGeometry(TriangleSet2D101);

Transform97.addChild(&Shape98);

TouchSensor& TouchSensor102 =  TouchSensor();
TouchSensor102.setUSE(CString("_6"));
Transform97.addChild(&TouchSensor102);

Transform72.addChild(&Transform97);

Layer31.addChild(&Transform72);

Transform& Transform103 =  Transform();
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{-5.0,-3.0,1.02686e-7});
Shape& Shape105 =  Shape();
Appearance& Appearance106 =  Appearance();
LineProperties& LineProperties107 =  LineProperties();
LineProperties107.setDEF(CString("_7"));
LineProperties107.setLinewidthScaleFactor(7);
Appearance106.setLineProperties(LineProperties107);

Material& Material108 =  Material();
Material108.setEmissiveColor(new float[]{0.176816,0.506107,0.548295});
Appearance106.addChild(&Material108);

Shape105.addChild(&Appearance106);

Arc2D& Arc2D109 =  Arc2D();
Arc2D109.setEndAngle(0);
Shape105.setGeometry(Arc2D109);

Transform104.addChild(&Shape105);

Transform103.addChild(&Transform104);

Transform& Transform110 =  Transform();
Transform110.setTranslation(new float[]{-5.00105,-0.000807524,0.0});
Transform110.setCenter(new float[]{3.00105,-2.99919,1.02686e-7});
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[]{3.0,-3.0,1.02686e-7});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
LineProperties& LineProperties114 =  LineProperties();
LineProperties114.setUSE(CString("_7"));
Appearance113.setLineProperties(LineProperties114);

Material& Material115 =  Material();
Material115.setEmissiveColor(new float[]{0.710584,0.360126,0.121906});
Appearance113.addChild(&Material115);

Shape112.addChild(&Appearance113);

Arc2D& Arc2D116 =  Arc2D();
Shape112.setGeometry(Arc2D116);

Transform111.addChild(&Shape112);

Transform110.addChild(&Transform111);

Transform& Transform117 =  Transform();
Transform117.setTranslation(new float[]{3.0,-3.0,1.02686e-7});
Shape& Shape118 =  Shape();
Appearance& Appearance119 =  Appearance();
LineProperties& LineProperties120 =  LineProperties();
LineProperties120.setUSE(CString("_7"));
Appearance119.setLineProperties(LineProperties120);

Material& Material121 =  Material();
Material121.setEmissiveColor(new float[]{0.797451,0.660717,0.177288});
Appearance119.addChild(&Material121);

Shape118.addChild(&Appearance119);

Arc2D& Arc2D122 =  Arc2D();
Arc2D122.setStartAngle(2);
Arc2D122.setEndAngle(6);
Shape118.setGeometry(Arc2D122);

Transform117.addChild(&Shape118);

Transform110.addChild(&Transform117);

Transform103.addChild(&Transform110);

Transform& Transform123 =  Transform();
Transform123.setTranslation(new float[]{0.0,-3.0,1.02686e-7});
Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
LineProperties& LineProperties126 =  LineProperties();
LineProperties126.setUSE(CString("_7"));
Appearance125.setLineProperties(LineProperties126);

Material& Material127 =  Material();
Material127.setEmissiveColor(new float[]{0.759681,0.206631,0.206631});
Appearance125.addChild(&Material127);

Shape124.addChild(&Appearance125);

Arc2D& Arc2D128 =  Arc2D();
Arc2D128.setStartAngle(6);
Arc2D128.setEndAngle(2);
Shape124.setGeometry(Arc2D128);

Transform123.addChild(&Shape124);

Transform103.addChild(&Transform123);

Transform& Transform129 =  Transform();
Transform& Transform130 =  Transform();
Transform130.setTranslation(new float[]{-5.0,-6.0,2.05371e-7});
Shape& Shape131 =  Shape();
Appearance& Appearance132 =  Appearance();
Appearance132.setDEF(CString("Grey_6"));
LineProperties& LineProperties133 =  LineProperties();
LineProperties133.setUSE(CString("_7"));
Appearance132.setLineProperties(LineProperties133);

Material& Material134 =  Material();
Material134.setEmissiveColor(new float[]{0.17549,0.755444,0.228457});
Appearance132.addChild(&Material134);

Shape131.addChild(&Appearance132);

Circle2D& Circle2D135 =  Circle2D();
Shape131.setGeometry(Circle2D135);

Transform130.addChild(&Shape131);

Transform129.addChild(&Transform130);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{-2.0,-6.0,2.05371e-7});
Shape& Shape137 =  Shape();
Appearance& Appearance138 =  Appearance();
Appearance138.setDEF(CString("Grey_7"));
LineProperties& LineProperties139 =  LineProperties();
LineProperties139.setUSE(CString("_7"));
Appearance138.setLineProperties(LineProperties139);

Material& Material140 =  Material();
Material140.setEmissiveColor(new float[]{0.453834,0.265405,0.622069});
Appearance138.addChild(&Material140);

Shape137.addChild(&Appearance138);

Circle2D& Circle2D141 =  Circle2D();
Circle2D141.setRadius(1.29);
Shape137.setGeometry(Circle2D141);

Transform136.addChild(&Shape137);

Transform129.addChild(&Transform136);

Transform103.addChild(&Transform129);

Layer31.addChild(&Transform103);

Transform& Transform142 =  Transform();
Transform142.setTranslation(new float[]{2.0,-3.0,-0.0000109853});
Transform142.setScale(new float[]{0.333333,0.333333,0.333333});
Shape& Shape143 =  Shape();
Appearance& Appearance144 =  Appearance();
LineProperties& LineProperties145 =  LineProperties();
LineProperties145.setUSE(CString("_7"));
Appearance144.setLineProperties(LineProperties145);

Material& Material146 =  Material();
Material146.setEmissiveColor(new float[]{0.790403,0.569218,0.772487});
Appearance144.addChild(&Material146);

Shape143.addChild(&Appearance144);

Polyline2D& Polyline2D147 =  Polyline2D();
Polyline2D147.setLineSegments(new float[]{0.0,0.0,1.0,2.0,2.0,1.0,4.0,3.0,10.0,0.0}, 10);
Shape143.setGeometry(Polyline2D147);

Transform142.addChild(&Shape143);

Layer31.addChild(&Transform142);

Transform& Transform148 =  Transform();
Transform148.setTranslation(new float[]{5.0,-5.0,-0.0000183347});
Transform148.setScale(new float[]{0.376156,0.376156,0.376156});
TimeSensor& TimeSensor149 =  TimeSensor();
TimeSensor149.setDEF(CString("_8"));
TimeSensor149.setCycleInterval(10);
TimeSensor149.setLoop(true);
Transform148.addChild(&TimeSensor149);

NormalInterpolator& NormalInterpolator150 =  NormalInterpolator();
NormalInterpolator150.setDEF(CString("_9"));
NormalInterpolator150.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
NormalInterpolator150.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0,-1.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.0,-1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.0,-1.0,0.0}, 60);
Transform148.addChild(&NormalInterpolator150);

Transform& Transform151 =  Transform();
Transform151.setDEF(CString("PointSet"));
Transform151.setScale(new float[]{3.0,3.0,3.0});
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
PointProperties& PointProperties154 =  PointProperties();
PointProperties154.setDEF(CString("_10"));
PointProperties154.setPointSizeScaleFactor(9);
PointProperties154.setPointSizeMinValue(9);
PointProperties154.setPointSizeMaxValue(9);
Appearance153.setPointProperties(PointProperties154);

Material& Material155 =  Material();
Material155.setEmissiveColor(new float[]{0.269542,0.740744,0.418337});
Appearance153.addChild(&Material155);

Shape152.addChild(&Appearance153);

PointSet& PointSet156 =  PointSet();
Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setDEF(CString("_11"));
Coordinate157.setPoint(new float[]{0.419056,-0.907961,0.0,0.907961,0.419056,0.0,-0.419056,0.907961,0.0,-0.907961,-0.419056,0.0}, 12);
PointSet156.setCoord(&Coordinate157);

Shape152.setGeometry(PointSet156);

Transform151.addChild(&Shape152);

Transform148.addChild(&Transform151);

Layer31.addChild(&Transform148);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{2.0,-6.0,-0.0000220094});
Shape& Shape159 =  Shape();
Appearance& Appearance160 =  Appearance();
PointProperties& PointProperties161 =  PointProperties();
PointProperties161.setUSE(CString("_10"));
Appearance160.setPointProperties(PointProperties161);

Material& Material162 =  Material();
Material162.setEmissiveColor(new float[]{0.794118,0.539253,0.311916});
Appearance160.addChild(&Material162);

Shape159.addChild(&Appearance160);

Polypoint2D& Polypoint2D163 =  Polypoint2D();
Polypoint2D163.setDEF(CString("_12"));
Polypoint2D163.setPoint(new float[]{0.340601,-0.559484,0.972897,-0.0962096,0.201842,-0.297446,-0.534234,0.866497,-0.525527,-0.998792}, 10);
Shape159.setGeometry(Polypoint2D163);

Transform158.addChild(&Shape159);

Layer31.addChild(&Transform158);

Script& Script164 =  Script();
Script164.setDEF(CString("Polypoint2DScript"));
field& field165 =  field();
field165.setName(CString("polypoint"));
field165.setAccessType(CString("initializeOnly"));
field165.setType(CString("SFNode"));
Polypoint2D& Polypoint2D166 =  Polypoint2D();
Polypoint2D166.setUSE(CString("_12"));
field165.addChild(Polypoint2D166);

Script164.addChild(&field165);


//Script164.setSourceCode(CString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	for (var i = 0; i < 5; ++ i)")+
//_T("	{")+
//_T("		polypoint .point [i] .x = Math .random () * 2 - 1;")+
//_T("		polypoint .point [i] .y = Math .random () * 2 - 1;")+
//_T("	}")+
//_T("}"));
Layer31.addChild(&Script164);

LayerSet30.addChild(&Layer31);

Layer& Layer167 =  Layer();
Layer167.setDEF(CString("HUD"));
Layer167.setPickable(true);
Layer167.setObjectType(new CString[]{CString("ALL")}, 1);
MetadataSet& MetadataSet168 =  MetadataSet();
MetadataSet168.X3DNode::setName(CString("Titania"));
MetadataSet168.setDEF(CString("Titania_2"));
MetadataSet168.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet169 =  MetadataSet();
MetadataSet169.X3DNode::setName(CString("Grid"));
MetadataSet169.setDEF(CString("Grid_2"));
MetadataSet169.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean170 =  MetadataBoolean();
MetadataBoolean170.X3DNode::setName(CString("enabled"));
MetadataBoolean170.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean170.setValue(new boolean[]{true});
MetadataSet169.setValue((X3DNode *)&MetadataBoolean170);

MetadataFloat& MetadataFloat171 =  MetadataFloat();
MetadataFloat171.X3DNode::setName(CString("rotation"));
MetadataFloat171.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat171.setValue(new float[]{1.0,0.0,0.0,1.5708}, 4);
MetadataSet169.setValue((X3DNode *)&MetadataFloat171);

MetadataFloat& MetadataFloat172 =  MetadataFloat();
MetadataFloat172.X3DNode::setName(CString("scale"));
MetadataFloat172.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat172.setValue(new float[]{0.049,0.049,0.049}, 3);
MetadataSet169.setValue((X3DNode *)&MetadataFloat172);

MetadataInteger& MetadataInteger173 =  MetadataInteger();
MetadataInteger173.X3DNode::setName(CString("dimension"));
MetadataInteger173.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger173.setValue(MFInt323);
MetadataSet169.setValue((X3DNode *)&MetadataInteger173);

MetadataInteger& MetadataInteger174 =  MetadataInteger();
MetadataInteger174.X3DNode::setName(CString("majorLineEvery"));
MetadataInteger174.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger174.setValue(MFInt324);
MetadataSet169.setValue((X3DNode *)&MetadataInteger174);

MetadataInteger& MetadataInteger175 =  MetadataInteger();
MetadataInteger175.X3DNode::setName(CString("majorLineOffset"));
MetadataInteger175.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger175.setValue(MFInt325);
MetadataSet169.setValue((X3DNode *)&MetadataInteger175);

MetadataFloat& MetadataFloat176 =  MetadataFloat();
MetadataFloat176.X3DNode::setName(CString("lineColor"));
MetadataFloat176.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataFloat176.setValue(new float[]{1.0,0.7,0.7,0.0588235}, 4);
MetadataSet169.setValue((X3DNode *)&MetadataFloat176);

MetadataSet168.setValue((X3DNode *)&MetadataSet169);

MetadataSet& MetadataSet177 =  MetadataSet();
MetadataSet177.X3DNode::setName(CString("AngleGrid"));
MetadataSet177.setDEF(CString("AngleGrid_2"));
MetadataSet177.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean178 =  MetadataBoolean();
MetadataBoolean178.X3DNode::setName(CString("enabled"));
MetadataBoolean178.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean178.setValue(new boolean[]{false});
MetadataSet177.setValue((X3DNode *)&MetadataBoolean178);

MetadataSet168.setValue((X3DNode *)&MetadataSet177);

Layer167.setValue(MetadataSet168);

OrthoViewpoint& OrthoViewpoint179 =  OrthoViewpoint();
Layer167.addChild(&OrthoViewpoint179);

Transform& Transform180 =  Transform();
Transform180.setDEF(CString("Header"));
Transform180.setTranslation(new float[]{-1.6905,0.955504,-1.0});
Transform180.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape181 =  Shape();
Appearance& Appearance182 =  Appearance();
Material& Material183 =  Material();
Appearance182.addChild(&Material183);

Shape181.addChild(&Appearance182);

Text& Text184 =  Text();
Text184.setString(new CString[]{CString(" Geometry2D")}, 1);
Text184.setSolid(true);
CFontStyle& FontStyle185 =  CFontStyle();
FontStyle185.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle185.setSize(1.61);
FontStyle185.setJustify(new CString[]{CString(", "), CString("BEGINBEGIN")}, 2);
Text184.setFontStyle(&FontStyle185);

Shape181.setGeometry(&Text184);

Transform180.addChild(&Shape181);

Layer167.addChild(&Transform180);

Group& Group186 =  Group();
Group186.setDEF(CString("ShadingMenu"));
Script& Script187 =  Script();
Script187.setDEF(CString("ShadingScript"));
field& field188 =  field();
field188.setName(CString("set_pointset"));
field188.setAccessType(CString("inputOnly"));
field188.setType(CString("SFTime"));
Script187.addChild(&field188);

field& field189 =  field();
field189.setName(CString("set_wireframe"));
field189.setAccessType(CString("inputOnly"));
field189.setType(CString("SFTime"));
Script187.addChild(&field189);

field& field190 =  field();
field190.setName(CString("set_flat"));
field190.setAccessType(CString("inputOnly"));
field190.setType(CString("SFTime"));
Script187.addChild(&field190);

field& field191 =  field();
field191.setName(CString("set_gouraud"));
field191.setAccessType(CString("inputOnly"));
field191.setType(CString("SFTime"));
Script187.addChild(&field191);

field& field192 =  field();
field192.setName(CString("set_phong"));
field192.setAccessType(CString("inputOnly"));
field192.setType(CString("SFTime"));
Script187.addChild(&field192);


//Script187.setSourceCode(CString("javascript:")+
//_T("function set_pointset ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"POINTSET\");")+
//_T("	Browser .setDescription (\"Shading: Pointset\");")+
//_T("}")+
//_T("function set_wireframe ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"WIREFRAME\");")+
//_T("	Browser .setDescription (\"Shading: Wirefrane\");")+
//_T("}")+
//_T("function set_flat ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"FLAT\");")+
//_T("	Browser .setDescription (\"Shading: Flat\");")+
//_T("}")+
//_T("function set_gouraud ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"GOURAUD\");")+
//_T("	Browser .setDescription (\"Shading: Gouraud\");")+
//_T("}")+
//_T("function set_phong ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
//_T("	Browser .setDescription (\"Shading: Phong\");")+
//_T("}"));
Group186.addChild(&Script187);

Transform& Transform193 =  Transform();
Transform193.setDEF(CString("Header_1"));
Transform193.setTranslation(new float[]{1.6905,-0.857496,-1.0});
Transform193.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape194 =  Shape();
Appearance& Appearance195 =  Appearance();
Material& Material196 =  Material();
Material196.setDEF(CString("Artdeco31"));
Material196.setAmbientIntensity(0);
Material196.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material196.setShininess(0);
Appearance195.addChild(&Material196);

Shape194.addChild(&Appearance195);

Text& Text197 =  Text();
Text197.setString(new CString[]{CString("Shading")}, 1);
Text197.setSolid(true);
CFontStyle& FontStyle198 =  CFontStyle();
FontStyle198.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle198.setStyle(CString("BOLD"));
FontStyle198.setSize(0.68);
FontStyle198.setJustify(new CString[]{CString("END")}, 1);
Text197.setFontStyle(&FontStyle198);

Shape194.setGeometry(&Text197);

Transform193.addChild(&Shape194);

Group186.addChild(&Transform193);

Transform& Transform199 =  Transform();
Transform199.setDEF(CString("Text"));
Transform199.setTranslation(new float[]{1.6905,-0.955496,-1.0});
Transform199.setScale(new float[]{0.0672307,0.0672307,0.0672307});
Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Appearance201.addChild(&Material202);

Shape200.addChild(&Appearance201);

Text& Text203 =  Text();
Text203.setString(new CString[]{CString("Pointset Wireframe Flat Gouraud Phong")}, 1);
Text203.setSolid(true);
CFontStyle& FontStyle204 =  CFontStyle();
FontStyle204.setUSE(CString("_1"));
Text203.setFontStyle(&FontStyle204);

Shape200.setGeometry(&Text203);

Transform199.addChild(&Shape200);

Group186.addChild(&Transform199);

Transform& Transform205 =  Transform();
Transform205.setDEF(CString("Pointset"));
Transform205.setTranslation(new float[]{0.436176,-0.916146,0.0});
Transform205.setScale(new float[]{0.139972,0.040588,0.040588});
Shape& Shape206 =  Shape();
Appearance& Appearance207 =  Appearance();
Material& Material208 =  Material();
Material208.setDEF(CString("_13"));
Material208.setTransparency(1);
Appearance207.addChild(&Material208);

Shape206.addChild(&Appearance207);

IndexedFaceSet& IndexedFaceSet209 =  IndexedFaceSet();
IndexedFaceSet209.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet209.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate210 =  TextureCoordinate();
TextureCoordinate210.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet209.setTexCoord(&TextureCoordinate210);

Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet209.setCoord(&Coordinate211);

Shape206.setGeometry(&IndexedFaceSet209);

Transform205.addChild(&Shape206);

TouchSensor& TouchSensor212 =  TouchSensor();
TouchSensor212.setDEF(CString("_14"));
Transform205.addChild(&TouchSensor212);

Group186.addChild(&Transform205);

Transform& Transform213 =  Transform();
Transform213.setDEF(CString("Wireframe"));
Transform213.setTranslation(new float[]{0.77569,-0.916146,0.0});
Transform213.setScale(new float[]{0.177062,0.040588,0.040588});
Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Material& Material216 =  Material();
Material216.setUSE(CString("_13"));
Appearance215.addChild(&Material216);

Shape214.addChild(&Appearance215);

IndexedFaceSet& IndexedFaceSet217 =  IndexedFaceSet();
IndexedFaceSet217.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet217.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate218 =  TextureCoordinate();
TextureCoordinate218.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet217.setTexCoord(&TextureCoordinate218);

Coordinate& Coordinate219 =  Coordinate();
Coordinate219.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet217.setCoord(&Coordinate219);

Shape214.setGeometry(&IndexedFaceSet217);

Transform213.addChild(&Shape214);

TouchSensor& TouchSensor220 =  TouchSensor();
TouchSensor220.setDEF(CString("_15"));
Transform213.addChild(&TouchSensor220);

Group186.addChild(&Transform213);

Transform& Transform221 =  Transform();
Transform221.setDEF(CString("Flat"));
Transform221.setTranslation(new float[]{1.04432,-0.916146,0.0});
Transform221.setScale(new float[]{0.0743511,0.040588,0.040588});
Shape& Shape222 =  Shape();
Appearance& Appearance223 =  Appearance();
Material& Material224 =  Material();
Material224.setUSE(CString("_13"));
Appearance223.addChild(&Material224);

Shape222.addChild(&Appearance223);

IndexedFaceSet& IndexedFaceSet225 =  IndexedFaceSet();
IndexedFaceSet225.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet225.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate226 =  TextureCoordinate();
TextureCoordinate226.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet225.setTexCoord(&TextureCoordinate226);

Coordinate& Coordinate227 =  Coordinate();
Coordinate227.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet225.setCoord(&Coordinate227);

Shape222.setGeometry(&IndexedFaceSet225);

Transform221.addChild(&Shape222);

TouchSensor& TouchSensor228 =  TouchSensor();
TouchSensor228.setDEF(CString("_16"));
Transform221.addChild(&TouchSensor228);

Group186.addChild(&Transform221);

Transform& Transform229 =  Transform();
Transform229.setDEF(CString("Gouraud"));
Transform229.setTranslation(new float[]{1.27986,-0.916146,0.0});
Transform229.setScale(new float[]{0.142825,0.040588,0.040588});
Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
Material& Material232 =  Material();
Material232.setUSE(CString("_13"));
Appearance231.addChild(&Material232);

Shape230.addChild(&Appearance231);

IndexedFaceSet& IndexedFaceSet233 =  IndexedFaceSet();
IndexedFaceSet233.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet233.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate234 =  TextureCoordinate();
TextureCoordinate234.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet233.setTexCoord(&TextureCoordinate234);

Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet233.setCoord(&Coordinate235);

Shape230.setGeometry(&IndexedFaceSet233);

Transform229.addChild(&Shape230);

TouchSensor& TouchSensor236 =  TouchSensor();
TouchSensor236.setDEF(CString("_17"));
Transform229.addChild(&TouchSensor236);

Group186.addChild(&Transform229);

Transform& Transform237 =  Transform();
Transform237.setDEF(CString("Phong"));
Transform237.setTranslation(new float[]{1.55457,-0.916146,0.0});
Transform237.setScale(new float[]{0.111441,0.040588,0.040588});
Shape& Shape238 =  Shape();
Appearance& Appearance239 =  Appearance();
Material& Material240 =  Material();
Material240.setUSE(CString("_13"));
Appearance239.addChild(&Material240);

Shape238.addChild(&Appearance239);

IndexedFaceSet& IndexedFaceSet241 =  IndexedFaceSet();
IndexedFaceSet241.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet241.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate242 =  TextureCoordinate();
TextureCoordinate242.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
IndexedFaceSet241.setTexCoord(&TextureCoordinate242);

Coordinate& Coordinate243 =  Coordinate();
Coordinate243.setPoint(new float[]{-1.0,-1.0,0.0,1.0,-1.0,0.0,1.0,1.0,0.0,-1.0,1.0,0.0}, 12);
IndexedFaceSet241.setCoord(&Coordinate243);

Shape238.setGeometry(&IndexedFaceSet241);

Transform237.addChild(&Shape238);

TouchSensor& TouchSensor244 =  TouchSensor();
TouchSensor244.setDEF(CString("_18"));
Transform237.addChild(&TouchSensor244);

Group186.addChild(&Transform237);

Layer167.addChild(&Group186);

LayerSet30.addChild(&Layer167);

Scene9.addChild(&LayerSet30);

ROUTE& ROUTE245 =  ROUTE();
ROUTE245.setFromNode(CString("_18"));
ROUTE245.setFromField(CString("touchTime"));
ROUTE245.setToNode(CString("ShadingScript"));
ROUTE245.setToField(CString("set_phong"));
Scene9.addChild(&ROUTE245);

ROUTE& ROUTE246 =  ROUTE();
ROUTE246.setFromNode(CString("_17"));
ROUTE246.setFromField(CString("touchTime"));
ROUTE246.setToNode(CString("ShadingScript"));
ROUTE246.setToField(CString("set_gouraud"));
Scene9.addChild(&ROUTE246);

ROUTE& ROUTE247 =  ROUTE();
ROUTE247.setFromNode(CString("_16"));
ROUTE247.setFromField(CString("touchTime"));
ROUTE247.setToNode(CString("ShadingScript"));
ROUTE247.setToField(CString("set_flat"));
Scene9.addChild(&ROUTE247);

ROUTE& ROUTE248 =  ROUTE();
ROUTE248.setFromNode(CString("_15"));
ROUTE248.setFromField(CString("touchTime"));
ROUTE248.setToNode(CString("ShadingScript"));
ROUTE248.setToField(CString("set_wireframe"));
Scene9.addChild(&ROUTE248);

ROUTE& ROUTE249 =  ROUTE();
ROUTE249.setFromNode(CString("_14"));
ROUTE249.setFromField(CString("touchTime"));
ROUTE249.setToNode(CString("ShadingScript"));
ROUTE249.setToField(CString("set_pointset"));
Scene9.addChild(&ROUTE249);

ROUTE& ROUTE250 =  ROUTE();
ROUTE250.setFromNode(CString("_8"));
ROUTE250.setFromField(CString("fraction_changed"));
ROUTE250.setToNode(CString("_9"));
ROUTE250.setToField(CString("set_fraction"));
Scene9.addChild(&ROUTE250);

ROUTE& ROUTE251 =  ROUTE();
ROUTE251.setFromNode(CString("_9"));
ROUTE251.setFromField(CString("value_changed"));
ROUTE251.setToNode(CString("_11"));
ROUTE251.setToField(CString("set_point"));
Scene9.addChild(&ROUTE251);

X3D0.setScene(&Scene9);

//}
