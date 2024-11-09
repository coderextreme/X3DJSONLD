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
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Geometry2D"));
component2.setLevel(2);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Layering"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Layout"));
component4.setLevel(2);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Scripting"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Text"));
component6.setLevel(1);
head1.addChild(&component6);

meta& meta7 =  meta();
meta7.setName(CString("comment"));
meta7.setContent(CString("Rise and Shine"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("created"));
meta8.setContent(CString("Fri, 05 Sep 2014 01:58:48 GMT"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("creator"));
meta9.setContent(CString("Holger Seelig"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("Sunrize X3D Editor V1.1.5, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("icon"));
meta11.setContent(CString("../../ui/icons/icon-bw.svg"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/Layout/info.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("modified"));
meta13.setContent(CString("Wed, 11 Oct 2023 21:23:41 GMT"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("title"));
meta14.setContent(CString("about:info"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
ExternProtoDeclare& ExternProtoDeclare16 =  ExternProtoDeclare();
ExternProtoDeclare16.setName(CString("Rotor"));
ExternProtoDeclare16.setUrl(new CString[]{CString("library/Rotor.x3dv")}, 1);
field& field17 =  field();
field17.setName(CString("enabled"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFBool"));
ExternProtoDeclare16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("cycleInterval"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("axis"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
ExternProtoDeclare16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("angle"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFFloat"));
ExternProtoDeclare16.addChild(&field20);

field& field21 =  field();
field21.setName(CString("loop"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFBool"));
ExternProtoDeclare16.addChild(&field21);

field& field22 =  field();
field22.setName(CString("startTime"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field22);

field& field23 =  field();
field23.setName(CString("pauseTime"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field23);

field& field24 =  field();
field24.setName(CString("resumeTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field24);

field& field25 =  field();
field25.setName(CString("stopTime"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field25);

field& field26 =  field();
field26.setName(CString("isActive"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
ExternProtoDeclare16.addChild(&field26);

field& field27 =  field();
field27.setName(CString("cycleTime"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field27);

field& field28 =  field();
field28.setName(CString("rotation_changed"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFRotation"));
ExternProtoDeclare16.addChild(&field28);

Scene15.addChild(&ExternProtoDeclare16);

WorldInfo& WorldInfo29 =  WorldInfo();
WorldInfo29.setTitle(CString("info"));
MetadataSet& MetadataSet30 =  MetadataSet();
MetadataSet30.X3DNode::setName(CString("Titania"));
MetadataSet30.setDEF(CString("Titania"));
MetadataSet30.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet31 =  MetadataSet();
MetadataSet31.X3DNode::setName(CString("NavigationInfo"));
MetadataSet31.setDEF(CString("NavigationInfo"));
MetadataSet31.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString32 =  MetadataString();
MetadataString32.X3DNode::setName(CString("type"));
MetadataString32.setDEF(CString("type"));
MetadataString32.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString32.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet31.setValue((X3DNode *)&MetadataString32);

MetadataSet30.setValue((X3DNode *)&MetadataSet31);

MetadataSet& MetadataSet33 =  MetadataSet();
MetadataSet33.X3DNode::setName(CString("Viewpoint"));
MetadataSet33.setDEF(CString("Viewpoint"));
MetadataSet33.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble34 =  MetadataDouble();
MetadataDouble34.X3DNode::setName(CString("position"));
MetadataDouble34.setDEF(CString("position"));
MetadataDouble34.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble34.setValue(new double[]{-0.00152639835141599,-0.028887877240777,9.99995899200439}, 3);
MetadataSet33.setValue((X3DNode *)&MetadataDouble34);

MetadataDouble& MetadataDouble35 =  MetadataDouble();
MetadataDouble35.X3DNode::setName(CString("orientation"));
MetadataDouble35.setDEF(CString("orientation"));
MetadataDouble35.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble35.setValue(new double[]{0.992968316036784,-0.052313354198032,-0.106194332803706,0.0029296877328307}, 4);
MetadataSet33.setValue((X3DNode *)&MetadataDouble35);

MetadataDouble& MetadataDouble36 =  MetadataDouble();
MetadataDouble36.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble36.setDEF(CString("centerOfRotation"));
MetadataDouble36.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble36.setValue(new double[]{0,0,0}, 3);
MetadataSet33.setValue((X3DNode *)&MetadataDouble36);

MetadataSet30.setValue((X3DNode *)&MetadataSet33);

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

MetadataSet30.setValue((X3DNode *)&MetadataSet37);

MetadataSet& MetadataSet40 =  MetadataSet();
MetadataSet40.X3DNode::setName(CString("Selection"));
MetadataSet40.setDEF(CString("Selection"));
MetadataSet40.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean41 =  MetadataBoolean();
MetadataBoolean41.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean41.setDEF(CString("selectGeometry"));
MetadataBoolean41.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean41.setValue(new boolean[]{False});
MetadataSet40.setValue((X3DNode *)&MetadataBoolean41);

MetadataSet& MetadataSet42 =  MetadataSet();
MetadataSet42.X3DNode::setName(CString("nodes"));
MetadataSet42.setDEF(CString("nodes"));
MetadataSet42.X3DNode::setReference(CString("http://titania.create3000.de"));
Anchor& Anchor43 =  Anchor();
Anchor43.setDEF(CString("_1"));
Anchor43.setDescription(CString("http://titania.create3000.de"));
Anchor43.setUrl(new CString[]{CString("https://create3000.github.io/x_ite/")}, 1);
Transform& Transform44 =  Transform();
Transform44.setDEF(CString("Support"));
Transform44.setTranslation(new float[]{-0.421689,0.1,1});
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0,0,0});
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

Text& Text48 =  Text();
Text48.setString(new CString[]{CString(", "), CString("For additional support please visithttps://create3000.github.io/x_ite/.")}, 2);
CFontStyle& FontStyle49 =  CFontStyle();
FontStyle49.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle49.setStyle(CString("NORMAL"));
FontStyle49.setSize(0.04);
FontStyle49.setSpacing(1.2);
Text48.setFontStyle(&FontStyle49);

Shape45.setGeometry(&Text48);

Transform44.addChild(&Shape45);

Anchor43.addChild(&Transform44);

MetadataSet42.setAnchor(Anchor43);

MetadataSet40.setValue((X3DNode *)&MetadataSet42);

MetadataSet30.setValue((X3DNode *)&MetadataSet40);

MetadataSet& MetadataSet50 =  MetadataSet();
MetadataSet50.X3DNode::setName(CString("LayerSet"));
MetadataSet50.setDEF(CString("LayerSet"));
MetadataSet50.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger51 =  MetadataInteger();
MetadataInteger51.X3DNode::setName(CString("activeLayer"));
MetadataInteger51.setDEF(CString("activeLayer"));
MetadataInteger51.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger51.setValue(MFInt322);
MetadataSet50.setValue((X3DNode *)&MetadataInteger51);

MetadataSet30.setValue((X3DNode *)&MetadataSet50);

WorldInfo29.setMetadata(&MetadataSet30);

Scene15.addChild(&WorldInfo29);

NavigationInfo& NavigationInfo52 =  NavigationInfo();
NavigationInfo52.setType(new CString[]{CString("NONE")}, 1);
Scene15.addChild(&NavigationInfo52);

LayerSet& LayerSet53 =  LayerSet();
LayerSet53.setDEF(CString("about:info"));
LayerSet53.setOrder(new int32_t[]{1}, 1);
LayoutLayer& LayoutLayer54 =  LayoutLayer();
LayoutLayer54.setPickable(True);
LayoutLayer54.setObjectType(new CString[]{CString("ALL")}, 1);
Layout& Layout55 =  Layout();
LayoutLayer54.setLayout(Layout55);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("Background"));
Transform56.setTranslation(new float[]{0,0,-1});
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setDiffuseColor(new float[]{0,0,0});
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

Rectangle2D& Rectangle2D60 =  Rectangle2D();
Rectangle2D60.setSize(new float[]{1,1});
Shape57.setGeometry(Rectangle2D60);

Transform56.addChild(&Shape57);

LayoutLayer54.addChild(&Transform56);

LayoutGroup& LayoutGroup61 =  LayoutGroup();
LayoutGroup61.setDEF(CString("SupportBox"));
Layout& Layout62 =  Layout();
Layout62.setAlign(new CString[]{CString(", "), CString("CENTERTOP")}, 2);
Layout62.setOffset(new float[]{0,-0.32}, 2);
Layout62.setSize(new float[]{1,0.19}, 2);
Layout62.setScaleMode(new CString[]{CString("FRACTION")}, 1);
LayoutGroup61.setLayout(Layout62);

Shape& Shape63 =  Shape();
Shape63.setDEF(CString("HorizontalGrey"));
Appearance& Appearance64 =  Appearance();
Material& Material65 =  Material();
Material65.setDiffuseColor(new float[]{0.760784,0.760784,0.760784});
Appearance64.addChild(&Material65);

Shape63.addChild(&Appearance64);

Rectangle2D& Rectangle2D66 =  Rectangle2D();
Rectangle2D66.setSize(new float[]{1,1});
Shape63.setGeometry(Rectangle2D66);

LayoutGroup61.addChildren(Shape63);

LayoutLayer54.addChild(&LayoutGroup61);

LayoutGroup& LayoutGroup67 =  LayoutGroup();
LayoutGroup67.setDEF(CString("Page_1"));
Layout& Layout68 =  Layout();
Layout68.setScaleMode(new CString[]{CString(", "), CString("STRETCHNONE")}, 2);
LayoutGroup67.setLayout(Layout68);

Transform& Transform69 =  Transform();
Transform69.setScale(new float[]{1.01,1,1});
Switch& Switch70 =  Switch();
Switch70.setDEF(CString("Image"));
Switch70.setWhichChoice(1);
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
ImageTexture& ImageTexture73 =  ImageTexture();
ImageTexture73.setUrl(new CString[]{CString("info.png")}, 1);
ImageTexture73.setRepeatS(False);
ImageTexture73.setRepeatT(False);
Appearance72.addChild(&ImageTexture73);

Shape71.addChild(&Appearance72);

Rectangle2D& Rectangle2D74 =  Rectangle2D();
Rectangle2D74.setSize(new float[]{1,1});
Shape71.setGeometry(Rectangle2D74);

Switch70.addChild(&Shape71);

Transform69.addChild(&Switch70);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("VerticalGrey"));
Transform75.setTranslation(new float[]{0.34,0.245,0});
Transform75.setScale(new float[]{0.2,0.51,1});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Material& Material78 =  Material();
Material78.setDiffuseColor(new float[]{0.247059,0.247059,0.247059});
Appearance77.addChild(&Material78);

Shape76.addChild(&Appearance77);

Rectangle2D& Rectangle2D79 =  Rectangle2D();
Rectangle2D79.setSize(new float[]{1,1});
Shape76.setGeometry(Rectangle2D79);

Transform75.addChild(&Shape76);

Transform69.addChild(&Transform75);

Transform& Transform80 =  Transform();
Transform80.setDEF(CString("VerticalYellow"));
Transform80.setTranslation(new float[]{0.34,-0.255,0});
Transform80.setScale(new float[]{0.2,0.49,1});
Shape& Shape81 =  Shape();
Appearance& Appearance82 =  Appearance();
Material& Material83 =  Material();
Material83.setDiffuseColor(new float[]{1,0.890196,0.176471});
Appearance82.addChild(&Material83);

Shape81.addChild(&Appearance82);

Rectangle2D& Rectangle2D84 =  Rectangle2D();
Rectangle2D84.setSize(new float[]{1,1});
Shape81.setGeometry(Rectangle2D84);

Transform80.addChild(&Shape81);

Transform69.addChild(&Transform80);

LayoutGroup& LayoutGroup85 =  LayoutGroup();
LayoutGroup85.setDEF(CString("Content"));
Layout& Layout86 =  Layout();
Layout86.setSize(new float[]{0.1,1}, 2);
Layout86.setScaleMode(new CString[]{CString(", "), CString("STRETCHSTRETCH")}, 2);
LayoutGroup85.setLayout(Layout86);

Transform& Transform87 =  Transform();
Transform87.setDEF(CString("RotatingLogo"));
Transform87.setTranslation(new float[]{-0.480889,0.469111,1});
Transform87.setScale(new float[]{0.022,0.022,0.022});
ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(CString("Rotor"));
ProtoInstance88.setDEF(CString("LogoRotor"));
fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("cycleInterval"));
fieldValue89.setValue(CString("10"));
ProtoInstance88.addChild(&fieldValue89);

fieldValue& fieldValue90 =  fieldValue();
fieldValue90.setName(CString("axis"));
fieldValue90.setValue(CString("0 0 -1"));
ProtoInstance88.addChild(&fieldValue90);

fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("loop"));
fieldValue91.setValue(CString("true"));
ProtoInstance88.addChild(&fieldValue91);

Transform87.addChild(&ProtoInstance88);

Transform& Transform92 =  Transform();
Transform92.setDEF(CString("Logo"));
Transform92.setRotation(new float[]{0,0,-1,2.96629171850506});
Transform92.setCenter(new float[]{5.6,-5.9,0});
Inline& Inline93 =  Inline();
Inline93.setGlobal(True);
Inline93.setUrl(new CString[]{CString("library/logo.x3dv")}, 1);
Transform92.addChild(&Inline93);

Transform87.addChild(&Transform92);

LayoutGroup85.addChildren(&Transform87);

Transform& Transform94 =  Transform();
Transform94.setDEF(CString("Titania_1"));
Transform94.setTranslation(new float[]{-0.219,0.3611,1});
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
Material& Material97 =  Material();
Material97.setDiffuseColor(new float[]{1,1,1});
Appearance96.addChild(&Material97);

Shape95.addChild(&Appearance96);

Text& Text98 =  Text();
Text98.setDEF(CString("BrowserNameText"));
Text98.setString(new CString[]{CString("X_ITE")}, 1);
CFontStyle& FontStyle99 =  CFontStyle();
FontStyle99.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle99.setStyle(CString("BOLD"));
FontStyle99.setSize(0.12);
Text98.setFontStyle(&FontStyle99);

Shape95.setGeometry(&Text98);

Transform94.addChild(&Shape95);

LayoutGroup85.addChildren(&Transform94);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("X3D-Browser"));
Transform100.setTranslation(new float[]{-0.216884,0.26855,1});
Shape& Shape101 =  Shape();
Appearance& Appearance102 =  Appearance();
Material& Material103 =  Material();
Material103.setDiffuseColor(new float[]{1,1,1});
Appearance102.addChild(&Material103);

Shape101.addChild(&Appearance102);

Text& Text104 =  Text();
Text104.setString(new CString[]{CString("X3D Browser")}, 1);
CFontStyle& FontStyle105 =  CFontStyle();
FontStyle105.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle105.setStyle(CString("BOLD"));
FontStyle105.setSize(0.08);
Text104.setFontStyle(&FontStyle105);

Shape101.setGeometry(&Text104);

Transform100.addChild(&Shape101);

LayoutGroup85.addChildren(&Transform100);

Transform& Transform106 =  Transform();
Transform106.setDEF(CString("StayInteractive"));
Transform106.setTranslation(new float[]{-0.213525,0.219,1});
Shape& Shape107 =  Shape();
Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setDiffuseColor(new float[]{1,1,1});
Appearance108.addChild(&Material109);

Shape107.addChild(&Appearance108);

Text& Text110 =  Text();
Text110.setString(new CString[]{CString("Something special, something more!")}, 1);
Text110.setLength(new float[]{0.408361}, 1);
CFontStyle& FontStyle111 =  CFontStyle();
FontStyle111.setFamily(new CString[]{CString(", "), CString("PTN57F.ttfsans")}, 2);
FontStyle111.setStyle(CString("BOLD"));
FontStyle111.setSize(0.03);
Text110.setFontStyle(&FontStyle111);

Shape107.setGeometry(&Text110);

Transform106.addChild(&Shape107);

LayoutGroup85.addChildren(&Transform106);

Anchor& Anchor112 =  Anchor();
Anchor112.setUSE(CString("_1"));
LayoutGroup85.addChildren(Anchor112);

Transform& Transform113 =  Transform();
Transform113.setDEF(CString("License"));
Transform113.setTranslation(new float[]{0.262,0.267,1});
Shape& Shape114 =  Shape();
Appearance& Appearance115 =  Appearance();
Material& Material116 =  Material();
Material116.setDiffuseColor(new float[]{0,0,0});
Appearance115.addChild(&Material116);

Shape114.addChild(&Appearance115);

Text& Text117 =  Text();
Text117.setString(new CString[]{CString("GNU GPL v3")}, 1);
CFontStyle& FontStyle118 =  CFontStyle();
FontStyle118.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle118.setStyle(CString("BOLD"));
FontStyle118.setSize(0.03);
Text117.setFontStyle(&FontStyle118);

Shape114.setGeometry(&Text117);

Transform113.addChild(&Shape114);

LayoutGroup85.addChildren(&Transform113);

Transform& Transform119 =  Transform();
Transform119.setDEF(CString("Copyright"));
Transform119.setTranslation(new float[]{0.262,0.217,1});
Shape& Shape120 =  Shape();
Appearance& Appearance121 =  Appearance();
Material& Material122 =  Material();
Material122.setDiffuseColor(new float[]{0,0,0});
Appearance121.addChild(&Material122);

Shape120.addChild(&Appearance121);

Text& Text123 =  Text();
Text123.setString(new CString[]{CString("© 2010 - 2014")}, 1);
Text123.setLength(new float[]{0.15}, 1);
CFontStyle& FontStyle124 =  CFontStyle();
FontStyle124.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle124.setStyle(CString("BOLD"));
FontStyle124.setSize(0.03);
Text123.setFontStyle(&FontStyle124);

Shape120.setGeometry(&Text123);

Transform119.addChild(&Shape120);

LayoutGroup85.addChildren(&Transform119);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("VersionNumber"));
Transform125.setTranslation(new float[]{-0.438782,-0.385263,1});
Shape& Shape126 =  Shape();
Appearance& Appearance127 =  Appearance();
Material& Material128 =  Material();
Material128.setDiffuseColor(new float[]{1,1,1});
Appearance127.addChild(&Material128);

Shape126.addChild(&Appearance127);

Text& Text129 =  Text();
Text129.setDEF(CString("VersionNumberText"));
Text129.setString(new CString[]{CString("8.14.0")}, 1);
Text129.setMaxExtent(0.65);
CFontStyle& FontStyle130 =  CFontStyle();
FontStyle130.setFamily(new CString[]{CString(", "), CString("PTN77F.ttfsans")}, 2);
FontStyle130.setStyle(CString("BOLD"));
FontStyle130.setSize(0.34);
Text129.setFontStyle(&FontStyle130);

Shape126.setGeometry(&Text129);

Transform125.addChild(&Shape126);

Script& Script131 =  Script();
Script131.setDEF(CString("VersionNumberScript"));
field& field132 =  field();
field132.setName(CString("browser"));
field132.setAccessType(CString("initializeOnly"));
field132.setType(CString("SFNode"));
Text& Text133 =  Text();
Text133.setUSE(CString("BrowserNameText"));
field132.addChild(Text133);

Script131.addChild(&field132);

field& field134 =  field();
field134.setName(CString("version"));
field134.setAccessType(CString("initializeOnly"));
field134.setType(CString("SFNode"));
Text& Text135 =  Text();
Text135.setUSE(CString("VersionNumberText"));
field134.addChild(Text135);

Script131.addChild(&field134);


Script131.setSourceCode(CString("vrmlscript:")+
_T("function initialize ()")+
_T("{")+
_T("	browser .string = new MFString (Browser .name);")+
_T("	version .string = new MFString (Browser .version);")+
_T("}"));
Transform125.addChild(&Script131);

LayoutGroup85.addChildren(&Transform125);

Transform69.addChild(&LayoutGroup85);

LayoutGroup67.addChildren(&Transform69);

LayoutLayer54.addChild(&LayoutGroup67);

LayerSet53.addChild(&LayoutLayer54);

Scene15.addChild(&LayerSet53);

Script& Script136 =  Script();
Script136.setDEF(CString("EnterWorld"));

Script136.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	Browser .setBrowserOption ('Dashboard', false);")+
_T("}"));
Scene15.addChild(&Script136);

ROUTE& ROUTE137 =  ROUTE();
ROUTE137.setFromNode(CString("LogoRotor"));
ROUTE137.setFromField(CString("rotation_changed"));
ROUTE137.setToNode(CString("Logo"));
ROUTE137.setToField(CString("set_rotation"));
Scene15.addChild(&ROUTE137);

X3D0.setScene(&Scene15);

}
