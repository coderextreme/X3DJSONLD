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
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{-1});
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
meta3.setContent(CString("Fri, 05 Sep 2014 01:58:48 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V3.0.4, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("icon"));
meta6.setContent(CString("../../ui/icons/icon-bw.svg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///home/holger/Projekte/Library/Examples/X-ITE/info.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Tue, 29 Aug 2017 13:44:31 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("title"));
meta9.setContent(CString("about:info"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(CString("Rotor"));
ExternProtoDeclare11.setUrl(new CString[]{CString("library/Rotor.x3dv")}, 1);
field& field12 =  field();
field12.setName(CString("enabled"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("cycleInterval"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("axis"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFVec3f"));
ExternProtoDeclare11.addChild(&field14);

field& field15 =  field();
field15.setName(CString("angle"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFFloat"));
ExternProtoDeclare11.addChild(&field15);

field& field16 =  field();
field16.setName(CString("loop"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field16);

field& field17 =  field();
field17.setName(CString("startTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field17);

field& field18 =  field();
field18.setName(CString("pauseTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field18);

field& field19 =  field();
field19.setName(CString("resumeTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field19);

field& field20 =  field();
field20.setName(CString("stopTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field20);

field& field21 =  field();
field21.setName(CString("isActive"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFBool"));
ExternProtoDeclare11.addChild(&field21);

field& field22 =  field();
field22.setName(CString("cycleTime"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFTime"));
ExternProtoDeclare11.addChild(&field22);

field& field23 =  field();
field23.setName(CString("rotation_changed"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFRotation"));
ExternProtoDeclare11.addChild(&field23);

Scene10.addChild(&ExternProtoDeclare11);

WorldInfo& WorldInfo24 =  WorldInfo();
WorldInfo24.setTitle(CString("info"));
MetadataSet& MetadataSet25 =  MetadataSet();
MetadataSet25.X3DNode::setName(CString("Titania"));
MetadataSet25.setDEF(CString("Titania"));
MetadataSet25.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet26 =  MetadataSet();
MetadataSet26.X3DNode::setName(CString("NavigationInfo"));
MetadataSet26.setDEF(CString("NavigationInfo"));
MetadataSet26.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString27 =  MetadataString();
MetadataString27.X3DNode::setName(CString("type"));
MetadataString27.setDEF(CString("type"));
MetadataString27.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString27.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet26.setValue((X3DNode *)&MetadataString27);

MetadataSet25.setValue((X3DNode *)&MetadataSet26);

MetadataSet& MetadataSet28 =  MetadataSet();
MetadataSet28.X3DNode::setName(CString("Viewpoint"));
MetadataSet28.setDEF(CString("Viewpoint"));
MetadataSet28.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble29 =  MetadataDouble();
MetadataDouble29.X3DNode::setName(CString("position"));
MetadataDouble29.setDEF(CString("position"));
MetadataDouble29.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble29.setValue(new double[]{-0.00152639835141599,-0.028887877240777,9.99995899200439}, 3);
MetadataSet28.setValue((X3DNode *)&MetadataDouble29);

MetadataDouble& MetadataDouble30 =  MetadataDouble();
MetadataDouble30.X3DNode::setName(CString("orientation"));
MetadataDouble30.setDEF(CString("orientation"));
MetadataDouble30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble30.setValue(new double[]{0.992968316036784,-0.052313354198032,-0.106194332803706,0.0029296877328307}, 4);
MetadataSet28.setValue((X3DNode *)&MetadataDouble30);

MetadataDouble& MetadataDouble31 =  MetadataDouble();
MetadataDouble31.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble31.setDEF(CString("centerOfRotation"));
MetadataDouble31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble31.setValue(new double[]{0,0,0}, 3);
MetadataSet28.setValue((X3DNode *)&MetadataDouble31);

MetadataSet25.setValue((X3DNode *)&MetadataSet28);

MetadataSet& MetadataSet32 =  MetadataSet();
MetadataSet32.X3DNode::setName(CString("Page"));
MetadataSet32.setDEF(CString("Page"));
MetadataSet32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger33 =  MetadataInteger();
MetadataInteger33.X3DNode::setName(CString("activeView"));
MetadataInteger33.setDEF(CString("activeView"));
MetadataInteger33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger33.setValue(MFInt320);
MetadataSet32.setValue((X3DNode *)&MetadataInteger33);

MetadataInteger& MetadataInteger34 =  MetadataInteger();
MetadataInteger34.X3DNode::setName(CString("multiView"));
MetadataInteger34.setDEF(CString("multiView"));
MetadataInteger34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger34.setValue(MFInt321);
MetadataSet32.setValue((X3DNode *)&MetadataInteger34);

MetadataSet25.setValue((X3DNode *)&MetadataSet32);

MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("Selection"));
MetadataSet35.setDEF(CString("Selection"));
MetadataSet35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean36 =  MetadataBoolean();
MetadataBoolean36.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean36.setDEF(CString("selectGeometry"));
MetadataBoolean36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean36.setValue(new boolean[]{False});
MetadataSet35.setValue((X3DNode *)&MetadataBoolean36);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("nodes"));
MetadataSet37.setDEF(CString("nodes"));
MetadataSet37.X3DNode::setReference(CString("http://titania.create3000.de"));
Anchor& Anchor38 =  Anchor();
Anchor38.setDEF(CString("_1"));
Anchor38.setDescription(CString("http://titania.create3000.de"));
Anchor38.setUrl(new CString[]{CString("http://create3000.de/")}, 1);
Transform& Transform39 =  Transform();
Transform39.setDEF(CString("Support"));
Transform39.setTranslation(new float[]{-0.421689,0.1,1});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setDiffuseColor(new float[]{0,0,0});
Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

Text& Text43 =  Text();
Text43.setString(new CString[]{CString(", "), CString("For additional support please visithttp://create3000.de.")}, 2);
CFontStyle& FontStyle44 =  CFontStyle();
FontStyle44.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle44.setStyle(CString("NORMAL"));
FontStyle44.setSize(0.04);
FontStyle44.setSpacing(1.2);
Text43.setFontStyle(&FontStyle44);

Shape40.setGeometry(&Text43);

Transform39.addChild(&Shape40);

Anchor38.addChild(&Transform39);

MetadataSet37.setAnchor(Anchor38);

MetadataSet35.setValue((X3DNode *)&MetadataSet37);

MetadataSet25.setValue((X3DNode *)&MetadataSet35);

MetadataSet& MetadataSet45 =  MetadataSet();
MetadataSet45.X3DNode::setName(CString("LayerSet"));
MetadataSet45.setDEF(CString("LayerSet"));
MetadataSet45.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger46 =  MetadataInteger();
MetadataInteger46.X3DNode::setName(CString("activeLayer"));
MetadataInteger46.setDEF(CString("activeLayer"));
MetadataInteger46.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger46.setValue(MFInt322);
MetadataSet45.setValue((X3DNode *)&MetadataInteger46);

MetadataSet25.setValue((X3DNode *)&MetadataSet45);

WorldInfo24.setMetadata(&MetadataSet25);

Scene10.addChild(&WorldInfo24);

NavigationInfo& NavigationInfo47 =  NavigationInfo();
NavigationInfo47.setType(new CString[]{CString("NONE")}, 1);
Scene10.addChild(&NavigationInfo47);

LayerSet& LayerSet48 =  LayerSet();
LayerSet48.setDEF(CString("about:info"));
LayerSet48.setOrder(new int32_t[]{1}, 1);
LayoutLayer& LayoutLayer49 =  LayoutLayer();
Layout& Layout50 =  Layout();
LayoutLayer49.setLayout(Layout50);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("Background"));
Transform51.setTranslation(new float[]{0,0,-1});
Shape& Shape52 =  Shape();
Appearance& Appearance53 =  Appearance();
Material& Material54 =  Material();
Material54.setDiffuseColor(new float[]{0,0,0});
Appearance53.addChild(&Material54);

Shape52.addChild(&Appearance53);

Rectangle2D& Rectangle2D55 =  Rectangle2D();
Rectangle2D55.setSize(new float[]{1,1});
Shape52.setGeometry(Rectangle2D55);

Transform51.addChild(&Shape52);

LayoutLayer49.addChild(&Transform51);

LayoutGroup& LayoutGroup56 =  LayoutGroup();
LayoutGroup56.setDEF(CString("SupportBox"));
Layout& Layout57 =  Layout();
Layout57.setAlign(new CString[]{CString(", "), CString("CENTERTOP")}, 2);
Layout57.setOffset(new float[]{0,-0.32}, 2);
Layout57.setSize(new float[]{1,0.19}, 2);
Layout57.setScaleMode(new CString[]{CString("FRACTION")}, 1);
LayoutGroup56.setLayout(Layout57);

Shape& Shape58 =  Shape();
Shape58.setDEF(CString("HorizontalGrey"));
Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setDiffuseColor(new float[]{0.760784,0.760784,0.760784});
Appearance59.addChild(&Material60);

Shape58.addChild(&Appearance59);

Rectangle2D& Rectangle2D61 =  Rectangle2D();
Rectangle2D61.setSize(new float[]{1,1});
Shape58.setGeometry(Rectangle2D61);

LayoutGroup56.addChildren(Shape58);

LayoutLayer49.addChild(&LayoutGroup56);

LayoutGroup& LayoutGroup62 =  LayoutGroup();
LayoutGroup62.setDEF(CString("Page_1"));
Layout& Layout63 =  Layout();
Layout63.setScaleMode(new CString[]{CString(", "), CString("STRETCHNONE")}, 2);
LayoutGroup62.setLayout(Layout63);

Transform& Transform64 =  Transform();
Transform64.setScale(new float[]{1.01,1,1});
Switch& Switch65 =  Switch();
Switch65.setDEF(CString("Image"));
Switch65.setWhichChoice(1);
Shape& Shape66 =  Shape();
Appearance& Appearance67 =  Appearance();
ImageTexture& ImageTexture68 =  ImageTexture();
ImageTexture68.setUrl(new CString[]{CString("info.png")}, 1);
ImageTexture68.setRepeatS(False);
ImageTexture68.setRepeatT(False);
Appearance67.addChild(&ImageTexture68);

Shape66.addChild(&Appearance67);

Rectangle2D& Rectangle2D69 =  Rectangle2D();
Rectangle2D69.setSize(new float[]{1,1});
Shape66.setGeometry(Rectangle2D69);

Switch65.addChild(&Shape66);

Transform64.addChild(&Switch65);

Transform& Transform70 =  Transform();
Transform70.setDEF(CString("VerticalGrey"));
Transform70.setTranslation(new float[]{0.34,0.245,0});
Transform70.setScale(new float[]{0.2,0.51,1});
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setDiffuseColor(new float[]{0.247059,0.247059,0.247059});
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

Rectangle2D& Rectangle2D74 =  Rectangle2D();
Rectangle2D74.setSize(new float[]{1,1});
Shape71.setGeometry(Rectangle2D74);

Transform70.addChild(&Shape71);

Transform64.addChild(&Transform70);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("VerticalYellow"));
Transform75.setTranslation(new float[]{0.34,-0.255,0});
Transform75.setScale(new float[]{0.2,0.49,1});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Material& Material78 =  Material();
Material78.setDiffuseColor(new float[]{1,0.890196,0.176471});
Appearance77.addChild(&Material78);

Shape76.addChild(&Appearance77);

Rectangle2D& Rectangle2D79 =  Rectangle2D();
Rectangle2D79.setSize(new float[]{1,1});
Shape76.setGeometry(Rectangle2D79);

Transform75.addChild(&Shape76);

Transform64.addChild(&Transform75);

LayoutGroup& LayoutGroup80 =  LayoutGroup();
LayoutGroup80.setDEF(CString("Content"));
Layout& Layout81 =  Layout();
Layout81.setSize(new float[]{0.1,1}, 2);
Layout81.setScaleMode(new CString[]{CString(", "), CString("STRETCHSTRETCH")}, 2);
LayoutGroup80.setLayout(Layout81);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("RotatingLogo"));
Transform82.setTranslation(new float[]{-0.480889,0.469111,1});
Transform82.setScale(new float[]{0.022,0.022,0.022});
ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(CString("Rotor"));
ProtoInstance83.setDEF(CString("LogoRotor"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("cycleInterval"));
fieldValue84.setValue(CString("10"));
ProtoInstance83.addChild(&fieldValue84);

fieldValue& fieldValue85 =  fieldValue();
fieldValue85.setName(CString("axis"));
fieldValue85.setValue(CString("0 0 -1"));
ProtoInstance83.addChild(&fieldValue85);

fieldValue& fieldValue86 =  fieldValue();
fieldValue86.setName(CString("loop"));
fieldValue86.setValue(CString("true"));
ProtoInstance83.addChild(&fieldValue86);

Transform82.addChild(&ProtoInstance83);

Transform& Transform87 =  Transform();
Transform87.setDEF(CString("Logo"));
Transform87.setCenter(new float[]{5.6,-5.9,0});
Inline& Inline88 =  Inline();
Inline88.setUrl(new CString[]{CString("library/logo.x3dv")}, 1);
Transform87.addChild(&Inline88);

Transform82.addChild(&Transform87);

LayoutGroup80.addChildren(&Transform82);

Transform& Transform89 =  Transform();
Transform89.setDEF(CString("Titania_1"));
Transform89.setTranslation(new float[]{-0.219,0.3611,1});
Shape& Shape90 =  Shape();
Appearance& Appearance91 =  Appearance();
Material& Material92 =  Material();
Material92.setDiffuseColor(new float[]{1,1,1});
Appearance91.addChild(&Material92);

Shape90.addChild(&Appearance91);

Text& Text93 =  Text();
Text93.setDEF(CString("BrowserNameText"));
Text93.setString(new CString[]{CString("Titania")}, 1);
CFontStyle& FontStyle94 =  CFontStyle();
FontStyle94.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle94.setStyle(CString("BOLD"));
FontStyle94.setSize(0.12);
Text93.setFontStyle(&FontStyle94);

Shape90.setGeometry(&Text93);

Transform89.addChild(&Shape90);

LayoutGroup80.addChildren(&Transform89);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("X3D-Browser"));
Transform95.setTranslation(new float[]{-0.216884,0.26855,1});
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
Material& Material98 =  Material();
Material98.setDiffuseColor(new float[]{1,1,1});
Appearance97.addChild(&Material98);

Shape96.addChild(&Appearance97);

Text& Text99 =  Text();
Text99.setString(new CString[]{CString("X3D Browser")}, 1);
CFontStyle& FontStyle100 =  CFontStyle();
FontStyle100.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle100.setStyle(CString("BOLD"));
FontStyle100.setSize(0.08);
Text99.setFontStyle(&FontStyle100);

Shape96.setGeometry(&Text99);

Transform95.addChild(&Shape96);

LayoutGroup80.addChildren(&Transform95);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("StayInteractive"));
Transform101.setTranslation(new float[]{-0.213525,0.219,1});
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Material& Material104 =  Material();
Material104.setDiffuseColor(new float[]{1,1,1});
Appearance103.addChild(&Material104);

Shape102.addChild(&Appearance103);

Text& Text105 =  Text();
Text105.setString(new CString[]{CString("Something special, something more!")}, 1);
Text105.setLength(new float[]{0.408361}, 1);
CFontStyle& FontStyle106 =  CFontStyle();
FontStyle106.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle106.setStyle(CString("BOLD"));
FontStyle106.setSize(0.03);
Text105.setFontStyle(&FontStyle106);

Shape102.setGeometry(&Text105);

Transform101.addChild(&Shape102);

LayoutGroup80.addChildren(&Transform101);

Anchor& Anchor107 =  Anchor();
Anchor107.setUSE(CString("_1"));
LayoutGroup80.addChildren(Anchor107);

Transform& Transform108 =  Transform();
Transform108.setDEF(CString("License"));
Transform108.setTranslation(new float[]{0.262,0.267,1});
Shape& Shape109 =  Shape();
Appearance& Appearance110 =  Appearance();
Material& Material111 =  Material();
Material111.setDiffuseColor(new float[]{0,0,0});
Appearance110.addChild(&Material111);

Shape109.addChild(&Appearance110);

Text& Text112 =  Text();
Text112.setString(new CString[]{CString("GNU GPL v3")}, 1);
CFontStyle& FontStyle113 =  CFontStyle();
FontStyle113.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle113.setStyle(CString("BOLD"));
FontStyle113.setSize(0.03);
Text112.setFontStyle(&FontStyle113);

Shape109.setGeometry(&Text112);

Transform108.addChild(&Shape109);

LayoutGroup80.addChildren(&Transform108);

Transform& Transform114 =  Transform();
Transform114.setDEF(CString("Copyright"));
Transform114.setTranslation(new float[]{0.262,0.217,1});
Shape& Shape115 =  Shape();
Appearance& Appearance116 =  Appearance();
Material& Material117 =  Material();
Material117.setDiffuseColor(new float[]{0,0,0});
Appearance116.addChild(&Material117);

Shape115.addChild(&Appearance116);

Text& Text118 =  Text();
Text118.setString(new CString[]{CString("© 2010 - 2014")}, 1);
Text118.setLength(new float[]{0.15}, 1);
CFontStyle& FontStyle119 =  CFontStyle();
FontStyle119.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle119.setStyle(CString("BOLD"));
FontStyle119.setSize(0.03);
Text118.setFontStyle(&FontStyle119);

Shape115.setGeometry(&Text118);

Transform114.addChild(&Shape115);

LayoutGroup80.addChildren(&Transform114);

Transform& Transform120 =  Transform();
Transform120.setDEF(CString("VersionNumber"));
Transform120.setTranslation(new float[]{-0.438782,-0.385263,1});
Shape& Shape121 =  Shape();
Appearance& Appearance122 =  Appearance();
Material& Material123 =  Material();
Material123.setDiffuseColor(new float[]{1,1,1});
Appearance122.addChild(&Material123);

Shape121.addChild(&Appearance122);

Text& Text124 =  Text();
Text124.setDEF(CString("VersionNumberText"));
Text124.setString(new CString[]{CString("3.0.4")}, 1);
Text124.setMaxExtent(0.65);
CFontStyle& FontStyle125 =  CFontStyle();
FontStyle125.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle125.setStyle(CString("BOLD"));
FontStyle125.setSize(0.34);
Text124.setFontStyle(&FontStyle125);

Shape121.setGeometry(&Text124);

Transform120.addChild(&Shape121);

Script& Script126 =  Script();
Script126.setDEF(CString("VersionNumberScript"));
field& field127 =  field();
field127.setName(CString("browser"));
field127.setAccessType(CString("initializeOnly"));
field127.setType(CString("SFNode"));
Text& Text128 =  Text();
Text128.setUSE(CString("BrowserNameText"));
field127.addChild(Text128);

Script126.addChild(&field127);

field& field129 =  field();
field129.setName(CString("version"));
field129.setAccessType(CString("initializeOnly"));
field129.setType(CString("SFNode"));
Text& Text130 =  Text();
Text130.setUSE(CString("VersionNumberText"));
field129.addChild(Text130);

Script126.addChild(&field129);


Script126.setSourceCode(CString("vrmlscript:")+
_T("function initialize ()")+
_T("{")+
_T("	browser .string = new MFString (Browser .name);")+
_T("	version .string = new MFString (Browser .version);")+
_T("}"));
Transform120.addChild(&Script126);

LayoutGroup80.addChildren(&Transform120);

Transform64.addChild(&LayoutGroup80);

LayoutGroup62.addChildren(&Transform64);

LayoutLayer49.addChild(&LayoutGroup62);

LayerSet48.addChild(&LayoutLayer49);

Scene10.addChild(&LayerSet48);

Script& Script131 =  Script();
Script131.setDEF(CString("EnterWorld"));

Script131.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	Browser .setBrowserOption ('Dashboard', false);")+
_T("}"));
Scene10.addChild(&Script131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromNode(CString("LogoRotor"));
ROUTE132.setFromField(CString("rotation_changed"));
ROUTE132.setToNode(CString("Logo"));
ROUTE132.setToField(CString("set_rotation"));
Scene10.addChild(&ROUTE132);

X3D0.setScene(&Scene10);

}
