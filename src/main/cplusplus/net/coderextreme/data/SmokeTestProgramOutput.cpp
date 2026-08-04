#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setCssClass(CString("x3dModel.class"));
X3D0.setProfile(CString("Full"));
X3D0.setStyle(CString("x3dModel.style"));
X3D0.setVersion(CString("4.0"));
//X3D model top-level comment
head& head1 =  head();
//comment #1
//comment #2
//comment #3
//comment #4
component& component2 =  component();
component2.setName(CString("Navigation"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Shaders"));
component3.setLevel(1);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("CADGeometry"));
component4.setLevel(2);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("DIS"));
component5.setLevel(2);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("HAnim"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Grouping"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Layering"));
component8.setLevel(1);
head1.addChild(&component8);

unit& unit9 =  unit();
unit9.setName(CString("AngleUnitConversion"));
unit9.setCategory(CString("angle"));
unit9.setConversionFactor(1);
head1.addUnit(unit9);

unit& unit10 =  unit();
unit10.setName(CString("LengthUnitConversion"));
unit10.setCategory(CString("length"));
unit10.setConversionFactor(1);
head1.addUnit(unit10);

unit& unit11 =  unit();
unit11.setName(CString("ForceFromPoundsToNewtons"));
unit11.setCategory(CString("force"));
unit11.setConversionFactor(4.4482);
head1.addUnit(unit11);

meta& meta12 =  meta();
meta12.setName(CString("title"));
meta12.setContent(CString("SmokeTestProgramOutput.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("info"));
meta13.setContent(CString("continued development and testing in progress"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("description"));
meta14.setContent(CString("Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/specifications/java/X3DJSAIL.html"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("generator"));
meta16.setContent(CString("SmokeTestProgramOutput.java"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("created"));
meta17.setContent(CString("6 September 2016"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("modified"));
meta18.setContent(CString("20 June 2026"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("generator"));
meta19.setContent(CString("X3D Java Scene Access Interface Library (X3DJSAIL)"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("generator"));
meta20.setContent(CString("https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("generator"));
meta21.setContent(CString("Netbeans https://www.netbeans.org"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("creator"));
meta22.setContent(CString("Don Brutzman"));
head1.addMeta(&meta22);

meta& meta23 =  meta();
meta23.setName(CString("reference"));
meta23.setContent(CString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d"));
head1.addMeta(&meta23);

meta& meta24 =  meta();
meta24.setName(CString("reference"));
meta24.setContent(CString("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"));
head1.addMeta(&meta24);

meta& meta25 =  meta();
meta25.setName(CString("reference"));
meta25.setContent(CString("SmokeTestProgramOutput.txt"));
head1.addMeta(&meta25);

meta& meta26 =  meta();
meta26.setName(CString("reference"));
meta26.setContent(CString("SmokeTestProgramOutput.x3dv"));
head1.addMeta(&meta26);

meta& meta27 =  meta();
meta27.setName(CString("reference"));
meta27.setContent(CString("SmokeTestProgramOutput.wrl"));
head1.addMeta(&meta27);

meta& meta28 =  meta();
meta28.setName(CString("reference"));
meta28.setContent(CString("SmokeTestProgramOutput.html"));
head1.addMeta(&meta28);

meta& meta29 =  meta();
meta29.setName(CString("reference"));
meta29.setContent(CString("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"));
head1.addMeta(&meta29);

meta& meta30 =  meta();
meta30.setName(CString("identifier"));
meta30.setContent(CString("https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"));
head1.addMeta(&meta30);

meta& meta31 =  meta();
meta31.setName(CString("license"));
meta31.setContent(CString("../license.html"));
head1.addMeta(&meta31);

X3D0.setHead(&head1);

Scene& Scene32 =  Scene();
ViewpointGroup& ViewpointGroup33 =  ViewpointGroup();
ViewpointGroup33.setDescription(CString("Available viewpoints"));
Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDEF(CString("DefaultView"));
Viewpoint34.setDescription(CString("Hello X3DJSAIL"));
NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setDEF(CString("ViewpointChildNavigationInfo"));
Viewpoint34.setNavigationInfo(&NavigationInfo35);

ViewpointGroup33.addChildren(&Viewpoint34);

Viewpoint& Viewpoint36 =  Viewpoint();
Viewpoint36.setDEF(CString("TopDownView"));
Viewpoint36.setDescription(CString("top-down view from above"));
Viewpoint36.setOrientation(new float[]{1,0,0,-1.5708});
Viewpoint36.setPosition(new float[]{0,100,0});
ViewpointGroup33.addChildren(&Viewpoint36);

Scene32.addChild(&ViewpointGroup33);

NavigationInfo& NavigationInfo37 =  NavigationInfo();
NavigationInfo37.setType(new CString[]{CString("EXAMINE"), CString("FLY"), CString("ANY")}, 3);
Scene32.addChild(&NavigationInfo37);

WorldInfo& WorldInfo38 =  WorldInfo();
WorldInfo38.setDEF(CString("WorldInfoDEF"));
WorldInfo38.setCssClass(CString("worldInfoNode.class"));
WorldInfo38.setStyle(CString("worldInfoNode.style"));
WorldInfo38.setTitle(CString("SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)"));
Scene32.addChild(&WorldInfo38);

WorldInfo& WorldInfo39 =  WorldInfo();
WorldInfo39.setUSE(CString("WorldInfoDEF"));
Scene32.addChild(&WorldInfo39);

WorldInfo& WorldInfo40 =  WorldInfo();
WorldInfo40.setUSE(CString("WorldInfoDEF"));
Scene32.addChild(&WorldInfo40);

MetadataString& MetadataString41 =  MetadataString();
MetadataString41.X3DNode::setName(CString("test"));
MetadataString41.setDEF(CString("scene.addChildMetadata"));
MetadataString41.setValue(new CString[]{CString("Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding")}, 1);
Scene32.addMetadata(MetadataString41);

LayerSet& LayerSet42 =  LayerSet();
LayerSet42.setDEF(CString("scene.addChildLayerSetTest"));
Scene32.addChild(&LayerSet42);

Transform& Transform43 =  Transform();
Transform43.setDEF(CString("LogoGeometryTransform"));
Transform43.setTranslation(new float[]{0,1.5,0});
Anchor& Anchor44 =  Anchor();
Anchor44.setDEF(CString("siteAnchor"));
Anchor44.setDescription(CString("select for X3D Java SAI Library (X3DJSAIL) description"));
Anchor44.setUrl(new CString[]{CString("../X3DJSAIL.html"), CString("https://www.web3d.org/specifications/java/X3DJSAIL.html")}, 2);
Shape& Shape45 =  Shape();
Shape45.setDEF(CString("BoxShape"));
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDEF(CString("GreenMaterial"));
Material47.setDiffuseColor(new float[]{0,1,1});
Material47.setEmissiveColor(new float[]{0.8,0,0});
Material47.setTransparency(0.1);
Appearance46.addChild(&Material47);

ImageTexture& ImageTexture48 =  ImageTexture();
ImageTexture48.setUrl(new CString[]{CString("images/X3dJavaSceneAccessInterfaceSaiLibrary.png"), CString("https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png")}, 2);
Appearance46.addChild(&ImageTexture48);

Shape45.addChild(&Appearance46);

Box& Box49 =  Box();
Box49.setDEF(CString("test-NMTOKEN_regex.0123456789"));
Box49.setCssClass(CString("untextured"));
Shape45.setGeometry(&Box49);

Anchor44.addChild(&Shape45);

Transform43.addChild(&Anchor44);

Scene32.addChild(&Transform43);

Shape& Shape50 =  Shape();
Shape50.setDEF(CString("LineShape"));
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setEmissiveColor(new float[]{0.6,0.1961,0.8});
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

IndexedLineSet& IndexedLineSet53 =  IndexedLineSet();
IndexedLineSet53.setCoordIndex(new int32_t[]{0,1,2,3,4,0}, 6);
//Coordinate 3-tuple point count: 6
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0}, 18);
IndexedLineSet53.setCoord(&Coordinate54);

Shape50.setGeometry(&IndexedLineSet53);

Scene32.addChild(&Shape50);

PositionInterpolator& PositionInterpolator55 =  PositionInterpolator();
PositionInterpolator55.setDEF(CString("BoxPathAnimator"));
PositionInterpolator55.setKey(new float[]{0,0.125,0.375,0.625,0.875,1}, 6);
PositionInterpolator55.setKeyValue(new float[]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0}, 18);
Scene32.addChild(&PositionInterpolator55);

TimeSensor& TimeSensor56 =  TimeSensor();
TimeSensor56.setDEF(CString("OrbitClock"));
TimeSensor56.setCycleInterval(8);
TimeSensor56.setLoop(True);
Scene32.addChild(&TimeSensor56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setFromNode(CString("OrbitClock"));
ROUTE57.setToField(CString("set_fraction"));
ROUTE57.setToNode(CString("BoxPathAnimator"));
Scene32.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromField(CString("value_changed"));
ROUTE58.setFromNode(CString("BoxPathAnimator"));
ROUTE58.setToField(CString("set_translation"));
ROUTE58.setToNode(CString("LogoGeometryTransform"));
Scene32.addChild(&ROUTE58);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("TextTransform"));
Transform59.setTranslation(new float[]{0,-1.5,0});
Shape& Shape60 =  Shape();
Appearance& Appearance61 =  Appearance();
Material& Material62 =  Material();
Material62.setUSE(CString("GreenMaterial"));
Appearance61.addChild(&Material62);

Shape60.addChild(&Appearance61);

Text& Text63 =  Text();
Text63.setString(new CString[]{CString("X3D Java"), CString("SAI Library"), CString("X3DJSAIL")}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet& MetadataSet64 =  MetadataSet();
MetadataSet64.X3DNode::setName(CString("EscapedQuotationMarksMetadataSet"));
MetadataString& MetadataString65 =  MetadataString();
MetadataString65.X3DNode::setName(CString("quotesTestC"));
MetadataString65.setValue(new CString[]{CString("MFString example C, backslash-escaped quotes: He said, \"Immel did it!\"")}, 1);
MetadataSet64.setValue((X3DNode *)&MetadataString65);

MetadataString& MetadataString66 =  MetadataString();
MetadataString66.X3DNode::setName(CString("extraChildTest"));
MetadataString66.setValue(new CString[]{CString("checks MetadataSet addValue() method")}, 1);
MetadataSet64.setValue((X3DNode *)&MetadataString66);

Text63.setMetadata(&MetadataSet64);

CFontStyle& FontStyle67 =  CFontStyle();
FontStyle67.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text63.setFontStyle(&FontStyle67);

Shape60.setGeometry(&Text63);

Transform59.addChild(&Shape60);

Collision& Collision68 =  Collision();
//test containerField='proxy'
Shape& Shape69 =  Shape();
Shape69.setDEF(CString("ProxyShape"));
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text& Text70 =  Text();
Text70.setString(new CString[]{CString("One, Two, Text"), CString("He said, \"Immel did it!\" \"\"")}, 2);
Shape69.setGeometry(&Text70);

Collision68.addChildren(Shape69);

Transform59.addChild(&Collision68);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
Scene32.addChild(&Transform59);

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator& OrientationInterpolator71 =  OrientationInterpolator();
OrientationInterpolator71.setDEF(CString("SpinInterpolator"));
OrientationInterpolator71.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator71.setKeyValue(new float[]{0,1,0,4.7124,0,1,0,0,0,1,0,1.5708}, 12);
Scene32.addChild(&OrientationInterpolator71);

TimeSensor& TimeSensor72 =  TimeSensor();
TimeSensor72.setDEF(CString("SpinClock"));
TimeSensor72.setCycleInterval(5);
TimeSensor72.setLoop(True);
Scene32.addChild(&TimeSensor72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromField(CString("fraction_changed"));
ROUTE73.setFromNode(CString("SpinClock"));
ROUTE73.setToField(CString("set_fraction"));
ROUTE73.setToNode(CString("SpinInterpolator"));
Scene32.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromField(CString("value_changed"));
ROUTE74.setFromNode(CString("SpinInterpolator"));
ROUTE74.setToField(CString("rotation"));
ROUTE74.setToNode(CString("TextTransform"));
Scene32.addChild(&ROUTE74);

Group& Group75 =  Group();
Group75.setDEF(CString("BackgroundGroup"));
Background& Background76 =  Background();
Background76.setDEF(CString("GradualBackground"));
Group75.addChild(&Background76);

Script& Script77 =  Script();
Script77.setDEF(CString("colorTypeConversionScript"));
field& field78 =  field();
field78.setName(CString("colorInput"));
field78.setAccessType(CString("inputOnly"));
field78.setType(CString("SFColor"));
Script77.addChild(&field78);

field& field79 =  field();
field79.setName(CString("colorsOutput"));
field79.setAccessType(CString("outputOnly"));
field79.setType(CString("MFColor"));
Script77.addChild(&field79);


Script77.setSourceCode(CString("ecmascript:")+
_T("function colorInput (eventValue) // Example source code")+
_T("{")+
_T("   colorsOutput = new MFColor(eventValue); // assigning value sends output event")+
_T("// Browser.print('colorInput=' + eventValue + ',")+
_T("//                colorsOutput=' + colorsOutput + '")+
_T("');")+
_T("// TODO check line wrapping when exporting/converting")+
_T("}"));
Group75.addChild(&Script77);

ColorInterpolator& ColorInterpolator80 =  ColorInterpolator();
ColorInterpolator80.setDEF(CString("ColorAnimator"));
ColorInterpolator80.setKey(new float[]{0,0.5,1}, 3);
ColorInterpolator80.setKeyValue(new float[]{0.9412,1,1,0.2941,0,0.5098,0.9412,1,1}, 9);
//AZURE to INDIGO and back again
Group75.addChild(&ColorInterpolator80);

TimeSensor& TimeSensor81 =  TimeSensor();
TimeSensor81.setDEF(CString("ColorClock"));
TimeSensor81.setCycleInterval(60);
TimeSensor81.setLoop(True);
Group75.addChild(&TimeSensor81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromField(CString("colorsOutput"));
ROUTE82.setFromNode(CString("colorTypeConversionScript"));
ROUTE82.setToField(CString("skyColor"));
ROUTE82.setToNode(CString("GradualBackground"));
Group75.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromField(CString("value_changed"));
ROUTE83.setFromNode(CString("ColorAnimator"));
ROUTE83.setToField(CString("colorInput"));
ROUTE83.setToNode(CString("colorTypeConversionScript"));
Group75.addChild(&ROUTE83);

ROUTE& ROUTE84 =  ROUTE();
ROUTE84.setFromField(CString("fraction_changed"));
ROUTE84.setFromNode(CString("ColorClock"));
ROUTE84.setToField(CString("set_fraction"));
ROUTE84.setToNode(CString("ColorAnimator"));
Group75.addChild(&ROUTE84);

Scene32.addChild(&Group75);

ProtoDeclare& ProtoDeclare85 =  ProtoDeclare();
ProtoDeclare85.setName(CString("ArtDeco01"));
ProtoDeclare85.setAppinfo(CString("tooltip: ArtDeco01Material prototype is a Material node"));
ProtoInterface& ProtoInterface86 =  ProtoInterface();
field& field87 =  field();
field87.setName(CString("description"));
field87.setAccessType(CString("inputOutput"));
field87.setAppinfo(CString("tooltip for descriptionField"));
field87.setType(CString("SFString"));
field87.setValue(CString("ArtDeco01Material prototype is a Material node"));
ProtoInterface86.addChild(&field87);

field& field88 =  field();
field88.setName(CString("enabled"));
field88.setAccessType(CString("inputOutput"));
field88.setType(CString("SFBool"));
field88.setValue(CString("true"));
ProtoInterface86.addChild(&field88);

ProtoDeclare85.addChild(&ProtoInterface86);

ProtoBody& ProtoBody89 =  ProtoBody();
//Initial node of ProtoBody determines prototype node type
Material& Material90 =  Material();
Material90.setAmbientIntensity(0.25);
Material90.setDiffuseColor(new float[]{0.2824,0.0852,0.1345});
Material90.setShininess(0.1273);
Material90.setSpecularColor(new float[]{0.2763,0.1143,0.1399});
ProtoBody89.addChild(&Material90);

//[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setDescription(CString("within ProtoBody"));
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(CString("description"));
connect93.setProtoField(CString("description"));
IS92.addChild(&connect93);

Connect& connect94 =  Connect();
connect94.setNodeField(CString("enabled"));
connect94.setProtoField(CString("enabled"));
IS92.addChild(&connect94);

TouchSensor91.addChild(&IS92);

ProtoBody89.addChild(&TouchSensor91);

ProtoDeclare85.addChild(&ProtoBody89);

Scene32.addChild(&ProtoDeclare85);

ExternProtoDeclare& ExternProtoDeclare95 =  ExternProtoDeclare();
ExternProtoDeclare95.setName(CString("ArtDeco02"));
ExternProtoDeclare95.setAppinfo(CString("this is a different Material node"));
ExternProtoDeclare95.setUrl(new CString[]{CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02"), CString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02")}, 2);
//[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field& field96 =  field();
field96.setName(CString("description"));
field96.setAccessType(CString("inputOutput"));
field96.setAppinfo(CString("tooltip for descriptionField"));
field96.setType(CString("SFString"));
ExternProtoDeclare95.addChild(&field96);

Scene32.addChild(&ExternProtoDeclare95);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape& Shape97 =  Shape();
Shape97.setDEF(CString("TestShape1"));
Appearance& Appearance98 =  Appearance();
Appearance98.setDEF(CString("TestAppearance1"));
//ArtDeco01Material prototype goes here...
ProtoInstance& ProtoInstance99 =  ProtoInstance();
ProtoInstance99.setName(CString("ArtDeco01"));
//[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue& fieldValue100 =  fieldValue();
fieldValue100.setName(CString("description"));
fieldValue100.setValue(CString("ArtDeco01Material can substitute for a Material node"));
ProtoInstance99.addChild(&fieldValue100);

Appearance98.addChild(&ProtoInstance99);

Shape97.addChild(&Appearance98);

Sphere& Sphere101 =  Sphere();
Sphere101.setRadius(0.001);
Shape97.setGeometry(&Sphere101);

Scene32.addChild(&Shape97);

Shape& Shape102 =  Shape();
Shape102.setDEF(CString("TestShape2"));
Appearance& Appearance103 =  Appearance();
Appearance103.setDEF(CString("TestAppearance2"));
//ArtDeco02Material ProtoInstance goes here...
ProtoInstance& ProtoInstance104 =  ProtoInstance();
ProtoInstance104.setName(CString("ArtDeco02"));
ProtoInstance104.setDEF(CString("ArtDeco02MaterialDEF"));
//[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
Appearance103.addChild(&ProtoInstance104);

Shape102.addChild(&Appearance103);

Cone& Cone105 =  Cone();
Cone105.setBottomRadius(0.001);
Cone105.setHeight(0.001);
Shape102.setGeometry(&Cone105);

Scene32.addChild(&Shape102);

Shape& Shape106 =  Shape();
Shape106.setDEF(CString("TestShape3"));
Appearance& Appearance107 =  Appearance();
Appearance107.setDEF(CString("TestAppearance3"));
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE.
ProtoInstance& ProtoInstance108 =  ProtoInstance();
ProtoInstance108.setName(CString("ArtDeco02"));
ProtoInstance108.setUSE(CString("ArtDeco02MaterialDEF"));
Appearance107.addChild(&ProtoInstance108);

Shape106.addChild(&Appearance107);

Cylinder& Cylinder109 =  Cylinder();
Cylinder109.setHeight(0.001);
Cylinder109.setRadius(0.001);
Shape106.setGeometry(&Cylinder109);

Scene32.addChild(&Shape106);

Inline& Inline110 =  Inline();
Inline110.setDEF(CString("inlineScene"));
Inline110.setUrl(new CString[]{CString("newScene.x3d"), CString("https://www.web3d.org/specifications/java/examples/newScene.x3d")}, 2);
Scene32.addChild(&Inline110);

IMPORT& IMPORT111 =  IMPORT();
IMPORT111.setAS(CString("WorldInfoDEF2"));
IMPORT111.setImportedDEF(CString("WorldInfoDEF"));
IMPORT111.setInlineDEF(CString("inlineScene"));
Scene32.addChild(&IMPORT111);

EXPORT& EXPORT112 =  EXPORT();
EXPORT112.setAS(CString("WorldInfoDEF3"));
EXPORT112.setLocalDEF(CString("WorldInfoDEF"));
Scene32.addChild(&EXPORT112);

ProtoDeclare& ProtoDeclare113 =  ProtoDeclare();
ProtoDeclare113.setName(CString("MaterialModulator"));
ProtoDeclare113.setAppinfo(CString("mimic a Material node and modulate fields as an animation effect"));
ProtoDeclare113.setDocumentation(CString("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"));
ProtoInterface& ProtoInterface114 =  ProtoInterface();
field& field115 =  field();
field115.setName(CString("enabled"));
field115.setAccessType(CString("inputOutput"));
field115.setType(CString("SFBool"));
field115.setValue(CString("true"));
ProtoInterface114.addChild(&field115);

field& field116 =  field();
field116.setName(CString("diffuseColor"));
field116.setAccessType(CString("inputOutput"));
field116.setType(CString("SFColor"));
field116.setValue(CString("0 0 0"));
ProtoInterface114.addChild(&field116);

field& field117 =  field();
field117.setName(CString("emissiveColor"));
field117.setAccessType(CString("inputOutput"));
field117.setType(CString("SFColor"));
field117.setValue(CString("0.05 0.05 0.5"));
ProtoInterface114.addChild(&field117);

field& field118 =  field();
field118.setName(CString("specularColor"));
field118.setAccessType(CString("inputOutput"));
field118.setType(CString("SFColor"));
field118.setValue(CString("0 0 0"));
ProtoInterface114.addChild(&field118);

field& field119 =  field();
field119.setName(CString("transparency"));
field119.setAccessType(CString("inputOutput"));
field119.setType(CString("SFFloat"));
field119.setValue(CString("0"));
ProtoInterface114.addChild(&field119);

field& field120 =  field();
field120.setName(CString("shininess"));
field120.setAccessType(CString("inputOutput"));
field120.setType(CString("SFFloat"));
field120.setValue(CString("0"));
ProtoInterface114.addChild(&field120);

field& field121 =  field();
field121.setName(CString("ambientIntensity"));
field121.setAccessType(CString("inputOutput"));
field121.setType(CString("SFFloat"));
field121.setValue(CString("0"));
ProtoInterface114.addChild(&field121);

ProtoDeclare113.addChild(&ProtoInterface114);

ProtoBody& ProtoBody122 =  ProtoBody();
Material& Material123 =  Material();
Material123.setDEF(CString("MaterialNode"));
IS& IS124 =  IS();
Connect& connect125 =  Connect();
connect125.setNodeField(CString("diffuseColor"));
connect125.setProtoField(CString("diffuseColor"));
IS124.addChild(&connect125);

Connect& connect126 =  Connect();
connect126.setNodeField(CString("emissiveColor"));
connect126.setProtoField(CString("emissiveColor"));
IS124.addChild(&connect126);

Connect& connect127 =  Connect();
connect127.setNodeField(CString("specularColor"));
connect127.setProtoField(CString("specularColor"));
IS124.addChild(&connect127);

Connect& connect128 =  Connect();
connect128.setNodeField(CString("transparency"));
connect128.setProtoField(CString("transparency"));
IS124.addChild(&connect128);

Connect& connect129 =  Connect();
connect129.setNodeField(CString("shininess"));
connect129.setProtoField(CString("shininess"));
IS124.addChild(&connect129);

Connect& connect130 =  Connect();
connect130.setNodeField(CString("ambientIntensity"));
connect130.setProtoField(CString("ambientIntensity"));
IS124.addChild(&connect130);

Material123.addChild(&IS124);

ProtoBody122.addChild(&Material123);

//Only first node (the node type for the prototype) is renderable, others are along for the ride
Script& Script131 =  Script();
Script131.setDEF(CString("MaterialModulatorScript"));
field& field132 =  field();
field132.setName(CString("enabled"));
field132.setAccessType(CString("inputOutput"));
field132.setType(CString("SFBool"));
Script131.addChild(&field132);

field& field133 =  field();
field133.setName(CString("diffuseColor"));
field133.setAccessType(CString("inputOutput"));
field133.setType(CString("SFColor"));
Script131.addChild(&field133);

field& field134 =  field();
field134.setName(CString("newColor"));
field134.setAccessType(CString("outputOnly"));
field134.setType(CString("SFColor"));
Script131.addChild(&field134);

field& field135 =  field();
field135.setName(CString("clockTrigger"));
field135.setAccessType(CString("inputOnly"));
field135.setType(CString("SFTime"));
Script131.addChild(&field135);

IS& IS136 =  IS();
Connect& connect137 =  Connect();
connect137.setNodeField(CString("enabled"));
connect137.setProtoField(CString("enabled"));
IS136.addChild(&connect137);

Connect& connect138 =  Connect();
connect138.setNodeField(CString("diffuseColor"));
connect138.setProtoField(CString("diffuseColor"));
IS136.addChild(&connect138);

Script131.addChild(&IS136);


Script131.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("    newColor = diffuseColor; // start with correct color")+
_T("}")+
_T("function set_enabled (newValue)")+
_T("{")+
_T("	enabled = newValue;")+
_T("}")+
_T("function clockTrigger (timeValue)")+
_T("{")+
_T("    if (!enabled) return;")+
_T("    red   = newColor.r;")+
_T("    green = newColor.g;")+
_T("    blue  = newColor.b;")+
_T("    // note different modulation rates for each color component, % is modulus operator")+
_T("    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);")+
_T("	if (enabled)")+
_T("	{")+
_T("		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');")+
_T("	}")+
_T("}"));
ProtoBody122.addChild(&Script131);

ProtoDeclare113.addChild(&ProtoBody122);

Scene32.addChild(&ProtoDeclare113);

//Test success: declarative statement createDeclarativeShapeTests()
Group& Group139 =  Group();
Group139.setDEF(CString("DeclarativeGroupExample"));
Shape& Shape140 =  Shape();
MetadataString& MetadataString141 =  MetadataString();
MetadataString141.X3DNode::setName(CString("findThisNameValue"));
MetadataString141.setDEF(CString("FindableMetadataStringTest"));
MetadataString141.setValue(new CString[]{CString("test case")}, 1);
Shape140.setValue(MetadataString141);

Appearance& Appearance142 =  Appearance();
Appearance142.setDEF(CString("DeclarativeAppearanceExample"));
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance& ProtoInstance143 =  ProtoInstance();
ProtoInstance143.setName(CString("MaterialModulator"));
ProtoInstance143.setDEF(CString("MyMaterialModulator"));
Appearance142.addChild(&ProtoInstance143);

Shape140.addChild(&Appearance142);

Cone& Cone144 =  Cone();
Cone144.setBottom(False);
Cone144.setBottomRadius(0.05);
Cone144.setHeight(0.1);
Shape140.setGeometry(&Cone144);

Group139.addChild(&Shape140);

//Test success: declarativeGroup.addChild() singleton pipeline method
Scene32.addChild(&Group139);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group& Group145 =  Group();
Group145.setDEF(CString("TestFieldObjectsGroup"));
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
Scene32.addChild(&Group145);

Sound& Sound146 =  Sound();
Sound146.setLocation(new float[]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip& AudioClip147 =  AudioClip();
AudioClip147.setDescription(CString("chimes"));
AudioClip147.setUrl(new CString[]{CString("chimes.wav"), CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav")}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound146.setSource(AudioClip147);

Scene32.addChild(&Sound146);

Sound& Sound148 =  Sound();
Sound148.setLocation(new float[]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture& MovieTexture149 =  MovieTexture();
MovieTexture149.setDescription(CString("mpgsys.mpg from ConformanceNist suite"));
MovieTexture149.setUrl(new CString[]{CString("mpgsys.mpg"), CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg")}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound148.setSource(MovieTexture149);

Scene32.addChild(&Sound148);

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape& Shape150 =  Shape();
Shape150.setDEF(CString("ExtrusionShape"));
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance& Appearance151 =  Appearance();
Appearance151.setDEF(CString("TransparentAppearance"));
Material& Material152 =  Material();
Material152.setTransparency(1);
Appearance151.addChild(&Material152);

Shape150.addChild(&Appearance151);

Extrusion& Extrusion153 =  Extrusion();
Extrusion153.setDEF(CString("ExampleExtrusion"));
Shape150.setGeometry(&Extrusion153);

Scene32.addChild(&Shape150);

Group& Group154 =  Group();
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
ProtoDeclare& ProtoDeclare155 =  ProtoDeclare();
ProtoDeclare155.setName(CString("NewWorldInfo"));
ProtoInterface& ProtoInterface156 =  ProtoInterface();
field& field157 =  field();
field157.setName(CString("description"));
field157.setAccessType(CString("initializeOnly"));
field157.setType(CString("SFString"));
ProtoInterface156.addChild(&field157);

ProtoDeclare155.addChild(&ProtoInterface156);

ProtoBody& ProtoBody158 =  ProtoBody();
WorldInfo& WorldInfo159 =  WorldInfo();
ProtoBody158.addChild(&WorldInfo159);

ProtoDeclare155.addChild(&ProtoBody158);

Group154.addChild(&ProtoDeclare155);

ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setName(CString("NewWorldInfo"));
ProtoInstance160.setDEF(CString("Proto1"));
fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("description"));
fieldValue161.setValue(CString("testing 1 2 3"));
ProtoInstance160.addChild(&fieldValue161);

Group154.addChild(&ProtoInstance160);

Group& Group162 =  Group();
Group162.setDEF(CString("Node2"));
//intentionally empty
Group154.addChild(&Group162);

ProtoInstance& ProtoInstance163 =  ProtoInstance();
ProtoInstance163.setName(CString("NewWorldInfo"));
ProtoInstance163.setDEF(CString("Proto3"));
Group154.addChild(&ProtoInstance163);

Transform& Transform164 =  Transform();
Transform164.setDEF(CString("Node4"));
//intentionally empty
Group154.addChild(&Transform164);

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
Scene32.addChild(&Group154);

ProtoDeclare& ProtoDeclare165 =  ProtoDeclare();
ProtoDeclare165.setName(CString("ShaderProto"));
ProtoBody& ProtoBody166 =  ProtoBody();
ProgramShader& ProgramShader167 =  ProgramShader();
ProtoBody166.addChild(&ProgramShader167);

ProtoDeclare165.addChild(&ProtoBody166);

Scene32.addChild(&ProtoDeclare165);

Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
ProgramShader& ProgramShader170 =  ProgramShader();
ProgramShader170.setDEF(CString("TestShader1"));
ShaderProgram& ShaderProgram171 =  ShaderProgram();
ShaderProgram171.setDEF(CString("TestShader2"));
ShaderProgram171.setType(CString("VERTEX"));
ProgramShader170.addPrograms(ShaderProgram171);

Appearance169.addChild(&ProgramShader170);

ProtoInstance& ProtoInstance172 =  ProtoInstance();
ProtoInstance172.setName(CString("ShaderProto"));
ProtoInstance172.setDEF(CString("TestShader3"));
Appearance169.addChild(&ProtoInstance172);

ComposedShader& ComposedShader173 =  ComposedShader();
ComposedShader173.setDEF(CString("TestShader4"));
ShaderPart& ShaderPart174 =  ShaderPart();
ShaderPart174.setDEF(CString("TestShader5"));
ShaderPart174.setType(CString("VERTEX"));
ComposedShader173.setParts(&ShaderPart174);

Appearance169.addChild(&ComposedShader173);

Shape168.addChild(&Appearance169);

Scene32.addChild(&Shape168);

Transform& Transform175 =  Transform();
Transform175.setDEF(CString("SpecialtyNodes"));
CADLayer& CADLayer176 =  CADLayer();
CADAssembly& CADAssembly177 =  CADAssembly();
CADPart& CADPart178 =  CADPart();
CADFace& CADFace179 =  CADFace();
CADPart178.addChildren(CADFace179);

CADAssembly177.X3DGroupingNode::addChild(static_cast<X3DGroupingNode*>(&CADPart178));

CADLayer176.addChildren(CADAssembly177);

Transform175.addChild(&CADLayer176);

EspduTransform& EspduTransform180 =  EspduTransform();
Transform175.addChild(&EspduTransform180);

ReceiverPdu& ReceiverPdu181 =  ReceiverPdu();
Transform175.addChild(&ReceiverPdu181);

SignalPdu& SignalPdu182 =  SignalPdu();
Transform175.addChild(&SignalPdu182);

TransmitterPdu& TransmitterPdu183 =  TransmitterPdu();
Transform175.addChild(&TransmitterPdu183);

DISEntityManager& DISEntityManager184 =  DISEntityManager();
DISEntityTypeMapping& DISEntityTypeMapping185 =  DISEntityTypeMapping();
DISEntityManager184.setMapping(&DISEntityTypeMapping185);

Transform175.addChild(&DISEntityManager184);

Scene32.addChild(&Transform175);

EspduTransform& EspduTransform186 =  EspduTransform();
WorldInfo& WorldInfo187 =  WorldInfo();
EspduTransform186.addChildren(&WorldInfo187);

Scene32.addChild(&EspduTransform186);

ReceiverPdu& ReceiverPdu188 =  ReceiverPdu();
Scene32.addChild(&ReceiverPdu188);

SignalPdu& SignalPdu189 =  SignalPdu();
Scene32.addChild(&SignalPdu189);

TransmitterPdu& TransmitterPdu190 =  TransmitterPdu();
Scene32.addChild(&TransmitterPdu190);

DISEntityManager& DISEntityManager191 =  DISEntityManager();
DISEntityTypeMapping& DISEntityTypeMapping192 =  DISEntityTypeMapping();
DISEntityManager191.setMapping(&DISEntityTypeMapping192);

Scene32.addChild(&DISEntityManager191);

LoadSensor& LoadSensor193 =  LoadSensor();
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
Anchor& Anchor194 =  Anchor();
Anchor194.setUSE(CString("siteAnchor"));
LoadSensor193.addChildren(Anchor194);

Inline& Inline195 =  Inline();
Inline195.setUSE(CString("inlineScene"));
LoadSensor193.addChildren(Inline195);

DISEntityTypeMapping& DISEntityTypeMapping196 =  DISEntityTypeMapping();
LoadSensor193.addChildren(DISEntityTypeMapping196);

GeoMetadata& GeoMetadata197 =  GeoMetadata();
LoadSensor193.addChildren(GeoMetadata197);

AudioClip& AudioClip198 =  AudioClip();
LoadSensor193.addChildren(AudioClip198);

ImageCubeMapTexture& ImageCubeMapTexture199 =  ImageCubeMapTexture();
LoadSensor193.addChildren(ImageCubeMapTexture199);

ImageTexture3D& ImageTexture3D200 =  ImageTexture3D();
LoadSensor193.addChildren(ImageTexture3D200);

ImageTexture& ImageTexture201 =  ImageTexture();
LoadSensor193.addChildren(ImageTexture201);

MovieTexture& MovieTexture202 =  MovieTexture();
LoadSensor193.addChildren(MovieTexture202);

Script& Script203 =  Script();
Script203.setDEF(CString("DummyScript"));

Script203.setSourceCode(CString("ecmascript:")+
_T("/* dummy test source code */"));
LoadSensor193.addChildren(&Script203);

PackagedShader& PackagedShader204 =  PackagedShader();
LoadSensor193.addChildren(PackagedShader204);

ShaderPart& ShaderPart205 =  ShaderPart();
ShaderPart205.setType(CString("VERTEX"));
LoadSensor193.addChildren(&ShaderPart205);

ShaderProgram& ShaderProgram206 =  ShaderProgram();
ShaderProgram206.setType(CString("VERTEX"));
LoadSensor193.addChildren(ShaderProgram206);

Scene32.addChild(&LoadSensor193);

OrthoViewpoint& OrthoViewpoint207 =  OrthoViewpoint();
OrthoViewpoint207.setDEF(CString("SpecialTestOrthoViewpoint"));
OrthoViewpoint207.setFieldOfView(new float[]{1,3,2,4}, 4);
Scene32.addChild(&OrthoViewpoint207);

X3D0.setScene(&Scene32);

}
