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
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.1"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Texturing"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("Rendering"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Grouping"));
component6.setLevel(3);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Core"));
component7.setLevel(1);
head1.addChild(&component7);

meta& meta8 =  meta();
meta8.setName(CString("title"));
meta8.setContent(CString("sliders.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("8 August 2025"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("description"));
meta10.setContent(CString("*Bumpy flower with prototype sliders*"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("license"));
meta13.setContent(CString("license.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("Vim, VI Improved"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
LayerSet& LayerSet16 =  LayerSet();
LayerSet16.setActiveLayer(1);
LayerSet16.setOrder(new int32_t[]{1,2,3}, 3);
Layer& Layer17 =  Layer();
Layer17.setPickable(True);
Layer17.setObjectType(new CString[]{CString("ALL")}, 1);
NavigationInfo& NavigationInfo18 =  NavigationInfo();
NavigationInfo18.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo18.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Layer17.addChild(&NavigationInfo18);

DirectionalLight& DirectionalLight19 =  DirectionalLight();
DirectionalLight19.setAmbientIntensity(0.2);
DirectionalLight19.setDirection(new float[]{0,-1,0});
Layer17.addChild(&DirectionalLight19);

DirectionalLight& DirectionalLight20 =  DirectionalLight();
DirectionalLight20.setAmbientIntensity(0.2);
DirectionalLight20.setDirection(new float[]{-1,-0.1,-1});
Layer17.addChild(&DirectionalLight20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(CString("My Overview"));
Viewpoint21.setFieldOfView(1.570796);
Viewpoint21.setPosition(new float[]{0,1.75,60});
Layer17.addChild(&Viewpoint21);

Group& Group22 =  Group();
//Arrow X
Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{25,0,0});
Transform23.setRotation(new float[]{0,0,-1,1.57});
Shape& Shape24 =  Shape();
Cylinder& Cylinder25 =  Cylinder();
Cylinder25.setDEF(CString("Shaft"));
Cylinder25.setRadius(0.35);
Cylinder25.setHeight(50);
Shape24.setGeometry(&Cylinder25);

Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDEF(CString("RED"));
Material27.setDiffuseColor(new float[]{1,0,0});
Material27.setEmissiveColor(new float[]{1,0,0});
Appearance26.addChild(&Material27);

Shape24.addChild(&Appearance26);

Transform23.addChild(&Shape24);

Group22.addChild(&Transform23);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{50,0,0});
Transform28.setRotation(new float[]{0,0,-1,1.57});
Shape& Shape29 =  Shape();
Cone& Cone30 =  Cone();
Cone30.setDEF(CString("Tip"));
Cone30.setBottomRadius(0.8);
Cone30.setHeight(3);
Shape29.setGeometry(&Cone30);

Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setUSE(CString("RED"));
Appearance31.addChild(&Material32);

Shape29.addChild(&Appearance31);

Transform28.addChild(&Shape29);

Group22.addChild(&Transform28);

//Arrow Y
Transform& Transform33 =  Transform();
Transform33.setTranslation(new float[]{0,25,0});
Shape& Shape34 =  Shape();
Cylinder& Cylinder35 =  Cylinder();
Cylinder35.setUSE(CString("Shaft"));
Shape34.setGeometry(&Cylinder35);

Appearance& Appearance36 =  Appearance();
Material& Material37 =  Material();
Material37.setDEF(CString("GREEN"));
Material37.setDiffuseColor(new float[]{0,1,0});
Material37.setEmissiveColor(new float[]{0,1,0});
Appearance36.addChild(&Material37);

Shape34.addChild(&Appearance36);

Transform33.addChild(&Shape34);

Group22.addChild(&Transform33);

Transform& Transform38 =  Transform();
Transform38.setTranslation(new float[]{0,50,0});
Shape& Shape39 =  Shape();
Cone& Cone40 =  Cone();
Cone40.setUSE(CString("Tip"));
Shape39.setGeometry(&Cone40);

Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setUSE(CString("GREEN"));
Appearance41.addChild(&Material42);

Shape39.addChild(&Appearance41);

Transform38.addChild(&Shape39);

Group22.addChild(&Transform38);

//Arrow Z
Transform& Transform43 =  Transform();
Transform43.setTranslation(new float[]{0,0,25});
Transform43.setRotation(new float[]{1,0,0,1.57});
Shape& Shape44 =  Shape();
Cylinder& Cylinder45 =  Cylinder();
Cylinder45.setUSE(CString("Shaft"));
Shape44.setGeometry(&Cylinder45);

Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDEF(CString("BLUE"));
Material47.setDiffuseColor(new float[]{0,0,1});
Material47.setEmissiveColor(new float[]{0,0,1});
Appearance46.addChild(&Material47);

Shape44.addChild(&Appearance46);

Transform43.addChild(&Shape44);

Group22.addChild(&Transform43);

Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{0,0,50});
Transform48.setRotation(new float[]{1,0,0,1.57});
Shape& Shape49 =  Shape();
Cone& Cone50 =  Cone();
Cone50.setUSE(CString("Tip"));
Shape49.setGeometry(&Cone50);

Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setUSE(CString("BLUE"));
Appearance51.addChild(&Material52);

Shape49.addChild(&Appearance51);

Transform48.addChild(&Shape49);

Group22.addChild(&Transform48);

Layer17.addChild(&Group22);

//the model that is being reviewed by the users of this scene
Transform& Transform53 =  Transform();
Transform53.setDEF(CString("FlowerTransform"));
Transform& Transform54 =  Transform();
Shape& Shape55 =  Shape();
IndexedFaceSet& IndexedFaceSet56 =  IndexedFaceSet();
IndexedFaceSet56.setConvex(False);
IndexedFaceSet56.setDEF(CString("Orbit"));
Coordinate& Coordinate57 =  Coordinate();
Coordinate57.setDEF(CString("OrbitCoordinates"));
IndexedFaceSet56.setCoord(&Coordinate57);

Shape55.setGeometry(&IndexedFaceSet56);

Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material59.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance58.addChild(&Material59);

Shape55.addChild(&Appearance58);

Transform54.addChild(&Shape55);

Transform53.addChild(&Transform54);

Layer17.addChild(&Transform53);

Script& Script60 =  Script();
Script60.setDEF(CString("OrbitScript"));
field& field61 =  field();
field61.setName(CString("coordinates"));
field61.setType(CString("MFVec3f"));
field61.setAccessType(CString("inputOutput"));
Script60.addChild(&field61);

field& field62 =  field();
field62.setName(CString("coordIndexes"));
field62.setType(CString("MFInt32"));
field62.setAccessType(CString("inputOutput"));
Script60.addChild(&field62);

field& field63 =  field();
field63.setName(CString("a"));
field63.setType(CString("SFFloat"));
field63.setAccessType(CString("inputOutput"));
field63.setValue(CString("5"));
Script60.addChild(&field63);

field& field64 =  field();
field64.setName(CString("b"));
field64.setType(CString("SFFloat"));
field64.setAccessType(CString("inputOutput"));
field64.setValue(CString("5"));
Script60.addChild(&field64);

field& field65 =  field();
field65.setName(CString("c"));
field65.setType(CString("SFFloat"));
field65.setAccessType(CString("inputOutput"));
field65.setValue(CString("5"));
Script60.addChild(&field65);

field& field66 =  field();
field66.setName(CString("d"));
field66.setType(CString("SFFloat"));
field66.setAccessType(CString("inputOutput"));
field66.setValue(CString("5"));
Script60.addChild(&field66);

field& field67 =  field();
field67.setName(CString("pdelta"));
field67.setType(CString("SFFloat"));
field67.setAccessType(CString("inputOutput"));
field67.setValue(CString("0"));
Script60.addChild(&field67);

field& field68 =  field();
field68.setName(CString("tdelta"));
field68.setType(CString("SFFloat"));
field68.setAccessType(CString("inputOutput"));
field68.setValue(CString("0"));
Script60.addChild(&field68);

field& field69 =  field();
field69.setName(CString("resolution"));
field69.setType(CString("SFInt32"));
field69.setAccessType(CString("inputOutput"));
field69.setValue(CString("50"));
Script60.addChild(&field69);


Script60.setSourceCode(CString("ecmascript:")+
_T("			function initialize() {")+
_T("			     generateCoordinates();")+
_T("			     var arrIndex = 0;")+
_T("			     for (var i = 0; i < resolution-1; i++) {")+
_T("				for (var j = 0; j < resolution-1; j++) {")+
_T("				     coordIndexes[arrIndex++] = i*resolution+j;")+
_T("				     coordIndexes[arrIndex++] = i*resolution+j+1;")+
_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;")+
_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j;")+
_T("				     coordIndexes[arrIndex++] = -1;")+
_T("				}")+
_T("			    }")+
_T("			}")+
_T("			function set_a(value) {")+
_T("				a = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function set_b(value) {")+
_T("				b = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function set_c(value) {")+
_T("				c = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function set_d(value) {")+
_T("				d = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function set_pdelta(value) {")+
_T("				pdelta = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function set_tdelta(value) {")+
_T("				tdelta = value;")+
_T("				generateCoordinates();")+
_T("			}")+
_T("			function resolution(value) {")+
_T("				resolution = value;")+
_T("				initialize();")+
_T("			}")+
_T("			function generateCoordinates() {")+
_T("			     var theta = 0.0;")+
_T("			     var phi = 0.0;")+
_T("			     var delta = (2 * 3.141592653) / (resolution-1);")+
_T("			     var arrIndex = 0;")+
_T("			     for (var i = 0; i < resolution; i++) {")+
_T("				for (var j = 0; j < resolution; j++) {")+
_T("					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
_T("					coordinates[arrIndex++] = new SFVec3f(")+
_T("						rho * Math.cos(phi) * Math.cos(theta),")+
_T("						rho * Math.cos(phi) * Math.sin(theta),")+
_T("						rho * Math.sin(phi)")+
_T("					);")+
_T("					theta += delta;")+
_T("				}")+
_T("				phi += delta;")+
_T("			     }")+
_T("			}"));
Layer17.addChild(&Script60);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromField(CString("coordIndexes"));
ROUTE70.setFromNode(CString("OrbitScript"));
ROUTE70.setToField(CString("set_coordIndex"));
ROUTE70.setToNode(CString("Orbit"));
Layer17.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(CString("coordinates"));
ROUTE71.setFromNode(CString("OrbitScript"));
ROUTE71.setToField(CString("set_point"));
ROUTE71.setToNode(CString("OrbitCoordinates"));
Layer17.addChild(&ROUTE71);

LayerSet16.addChild(&Layer17);

LayoutLayer& LayoutLayer72 =  LayoutLayer();
LayoutLayer72.setPickable(True);
LayoutLayer72.setObjectType(new CString[]{CString("ALL")}, 1);
Layout& Layout73 =  Layout();
Layout73.setAlign(new CString[]{CString("LEFT"), CString("BOTTOM")}, 2);
Layout73.setOffset(new float[]{-0.2,0.19}, 2);
Layout73.setSize(new float[]{0.4,0.6}, 2);
LayoutLayer72.setLayout(Layout73);

Viewport& Viewport74 =  Viewport();
Viewport74.setClipBoundary(new float[]{0,1,0,1}, 4);
LayoutLayer72.setViewport(Viewport74);

Transform& Transform75 =  Transform();
Transform75.setTranslation(new float[]{0,0,-3});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Material& Material78 =  Material();
Material78.setDiffuseColor(new float[]{0,0,0});
Material78.setTransparency(0.7);
Appearance77.addChild(&Material78);

Shape76.addChild(&Appearance77);

Box& Box79 =  Box();
Box79.setSize(new float[]{100,100,0.02});
Shape76.setGeometry(&Box79);

Transform75.addChild(&Shape76);

LayoutLayer72.addChild(&Transform75);

Transform& Transform80 =  Transform();
Transform80.setDEF(CString("equationTransform"));
Transform& Transform81 =  Transform();
Transform81.setTranslation(new float[]{0,0,-20});
Shape& Shape82 =  Shape();
Text& Text83 =  Text();
Text83.setDEF(CString("equation"));
Text83.setString(new CString[]{CString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
CFontStyle& FontStyle84 =  CFontStyle();
FontStyle84.setSize(0.09);
Text83.setFontStyle(&FontStyle84);

Shape82.setGeometry(&Text83);

Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setDiffuseColor(new float[]{1,1,0});
Appearance85.addChild(&Material86);

Shape82.addChild(&Appearance85);

Transform81.addChild(&Shape82);

Transform80.addChild(&Transform81);

LayoutLayer72.addChild(&Transform80);

//The slider parameters
ProtoDeclare& ProtoDeclare87 =  ProtoDeclare();
ProtoDeclare87.setName(CString("SliderProto"));
ProtoInterface& ProtoInterface88 =  ProtoInterface();
field& field89 =  field();
field89.setName(CString("sliderTranslation"));
field89.setAccessType(CString("inputOutput"));
field89.setType(CString("SFVec3f"));
field89.setValue(CString("0 0 0"));
ProtoInterface88.addChild(&field89);

field& field90 =  field();
field90.setName(CString("textString"));
field90.setAccessType(CString("inputOutput"));
field90.setType(CString("MFString"));
field90.setValue(CString("\"x=\""));
ProtoInterface88.addChild(&field90);

field& field91 =  field();
field91.setName(CString("parameterScale"));
field91.setAccessType(CString("inputOutput"));
field91.setType(CString("SFFloat"));
field91.setValue(CString("15"));
ProtoInterface88.addChild(&field91);

field& field92 =  field();
field92.setName(CString("parameterName"));
field92.setAccessType(CString("inputOutput"));
field92.setType(CString("SFString"));
field92.setValue(CString("x"));
ProtoInterface88.addChild(&field92);

field& field93 =  field();
field93.setName(CString("orbScript"));
field93.setAccessType(CString("inputOutput"));
field93.setType(CString("SFNode"));
ProtoInterface88.addChild(&field93);

ProtoDeclare87.addChild(&ProtoInterface88);

ProtoBody& ProtoBody94 =  ProtoBody();
Group& Group95 =  Group();
Transform& Transform96 =  Transform();
Transform96.setDEF(CString("protoSlider"));
Transform96.setTranslation(new float[]{0,0.7,0});
IS& IS97 =  IS();
Connect& connect98 =  Connect();
connect98.setNodeField(CString("translation"));
connect98.setProtoField(CString("sliderTranslation"));
IS97.addChild(&connect98);

Transform96.addChild(&IS97);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("protoTransform"));
Transform99.setTranslation(new float[]{0,0,0.1});
PlaneSensor& PlaneSensor100 =  PlaneSensor();
PlaneSensor100.setDEF(CString("protoSensor"));
PlaneSensor100.setDescription(CString("Grab with mouse to adjust slider"));
PlaneSensor100.setMaxPosition(new float[]{1,0});
Transform99.addChild(&PlaneSensor100);

Transform& Transform101 =  Transform();
Transform101.setTranslation(new float[]{0,0,0});
TouchSensor& TouchSensor102 =  TouchSensor();
TouchSensor102.setDescription(CString("Maybe start dragging this?"));
TouchSensor102.setDEF(CString("protoTS"));
Transform101.addChild(&TouchSensor102);

Transform99.addChild(&Transform101);

Transform& Transform103 =  Transform();
Shape& Shape104 =  Shape();
Text& Text105 =  Text();
Text105.setDEF(CString("protoText"));
Text105.setString(new CString[]{CString("a=")}, 1);
IS& IS106 =  IS();
Connect& connect107 =  Connect();
connect107.setNodeField(CString("string"));
connect107.setProtoField(CString("textString"));
IS106.addChild(&connect107);

Text105.addChild(&IS106);

CFontStyle& FontStyle108 =  CFontStyle();
FontStyle108.setStyle(CString("BOLD"));
FontStyle108.setSize(0.23);
Text105.setFontStyle(&FontStyle108);

Shape104.setGeometry(&Text105);

Appearance& Appearance109 =  Appearance();
Material& Material110 =  Material();
Appearance109.addChild(&Material110);

Shape104.addChild(&Appearance109);

Transform103.addChild(&Shape104);

Transform99.addChild(&Transform103);

Transform96.addChild(&Transform99);

Group95.addChild(&Transform96);

Script& Script111 =  Script();
Script111.setDEF(CString("protoValueTransformerScript"));
field& field112 =  field();
field112.setName(CString("protoScale"));
field112.setAccessType(CString("inputOutput"));
field112.setType(CString("SFFloat"));
Script111.addChild(&field112);

field& field113 =  field();
field113.setName(CString("protoParameterName"));
field113.setAccessType(CString("inputOutput"));
field113.setType(CString("SFString"));
Script111.addChild(&field113);

field& field114 =  field();
field114.setName(CString("newTranslation"));
field114.setAccessType(CString("inputOnly"));
field114.setType(CString("SFVec3f"));
field114.setValue(CString("1 1 1"));
Script111.addChild(&field114);

field& field115 =  field();
field115.setName(CString("protoScript"));
field115.setAccessType(CString("inputOutput"));
field115.setType(CString("SFNode"));
Script111.addChild(&field115);

field& field116 =  field();
field116.setName(CString("protoValue"));
field116.setAccessType(CString("inputOutput"));
field116.setType(CString("SFFloat"));
field116.setValue(CString("1"));
Script111.addChild(&field116);

field& field117 =  field();
field117.setName(CString("protoText"));
field117.setAccessType(CString("inputOutput"));
field117.setType(CString("MFString"));
field117.setValue(CString("\"1.0\""));
Script111.addChild(&field117);

IS& IS118 =  IS();
Connect& connect119 =  Connect();
connect119.setNodeField(CString("protoScale"));
connect119.setProtoField(CString("parameterScale"));
IS118.addChild(&connect119);

Connect& connect120 =  Connect();
connect120.setNodeField(CString("protoParameterName"));
connect120.setProtoField(CString("parameterName"));
IS118.addChild(&connect120);

Connect& connect121 =  Connect();
connect121.setNodeField(CString("protoScript"));
connect121.setProtoField(CString("orbScript"));
IS118.addChild(&connect121);

Script111.addChild(&IS118);


Script111.setSourceCode(CString("ecmascript:")+
_T("function set_protoScale(value) {")+
_T("	protoScale = value;")+
_T("}")+
_T("function set_protoParameterName(value) {")+
_T("	protoParameterName = value;")+
_T("}")+
_T("function set_protoScript(value) {")+
_T("	protoScript = value;")+
_T("}")+
_T("function set_protoValue(value) {")+
_T("	protoValue = value;")+
_T("}")+
_T("function set_protoText(value) {")+
_T("	protoText = value;")+
_T("}")+
_T("function newTranslation(value) {")+
_T("       	set_protoValue(value.x * protoScale);")+
_T("       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));")+
_T("	protoScript[protoParameterName] = protoValue;")+
_T("};"));
Group95.addChild(&Script111);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromField(CString("translation_changed"));
ROUTE122.setFromNode(CString("protoSensor"));
ROUTE122.setToField(CString("set_translation"));
ROUTE122.setToNode(CString("protoTransform"));
Group95.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromField(CString("translation_changed"));
ROUTE123.setFromNode(CString("protoSensor"));
ROUTE123.setToField(CString("newTranslation"));
ROUTE123.setToNode(CString("protoValueTransformerScript"));
Group95.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromField(CString("protoText"));
ROUTE124.setFromNode(CString("protoValueTransformerScript"));
ROUTE124.setToField(CString("string"));
ROUTE124.setToNode(CString("protoText"));
Group95.addChild(&ROUTE124);

ProtoBody94.addChild(&Group95);

ProtoDeclare87.addChild(&ProtoBody94);

LayoutLayer72.addChild(&ProtoDeclare87);

ProtoInstance& ProtoInstance125 =  ProtoInstance();
ProtoInstance125.setName(CString("SliderProto"));
ProtoInstance125.setDEF(CString("aPI"));
fieldValue& fieldValue126 =  fieldValue();
fieldValue126.setName(CString("sliderTranslation"));
fieldValue126.setValue(CString("0 0.7 0"));
ProtoInstance125.addChild(&fieldValue126);

fieldValue& fieldValue127 =  fieldValue();
fieldValue127.setName(CString("textString"));
fieldValue127.setValue(CString("\"a=\""));
ProtoInstance125.addChild(&fieldValue127);

fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(CString("parameterScale"));
fieldValue128.setValue(CString("30"));
ProtoInstance125.addChild(&fieldValue128);

fieldValue& fieldValue129 =  fieldValue();
fieldValue129.setName(CString("parameterName"));
fieldValue129.setValue(CString("a"));
ProtoInstance125.addChild(&fieldValue129);

fieldValue& fieldValue130 =  fieldValue();
fieldValue130.setName(CString("orbScript"));
Script& Script131 =  Script();
Script131.setUSE(CString("OrbitScript"));
fieldValue130.addChild(&Script131);

ProtoInstance125.addChild(&fieldValue130);

LayoutLayer72.addChild(&ProtoInstance125);

ProtoInstance& ProtoInstance132 =  ProtoInstance();
ProtoInstance132.setName(CString("SliderProto"));
ProtoInstance132.setDEF(CString("bPI"));
fieldValue& fieldValue133 =  fieldValue();
fieldValue133.setName(CString("sliderTranslation"));
fieldValue133.setValue(CString("0 0.4 0"));
ProtoInstance132.addChild(&fieldValue133);

fieldValue& fieldValue134 =  fieldValue();
fieldValue134.setName(CString("textString"));
fieldValue134.setValue(CString("\"b=\""));
ProtoInstance132.addChild(&fieldValue134);

fieldValue& fieldValue135 =  fieldValue();
fieldValue135.setName(CString("parameterScale"));
fieldValue135.setValue(CString("30"));
ProtoInstance132.addChild(&fieldValue135);

fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("parameterName"));
fieldValue136.setValue(CString("b"));
ProtoInstance132.addChild(&fieldValue136);

fieldValue& fieldValue137 =  fieldValue();
fieldValue137.setName(CString("orbScript"));
Script& Script138 =  Script();
Script138.setUSE(CString("OrbitScript"));
fieldValue137.addChild(&Script138);

ProtoInstance132.addChild(&fieldValue137);

LayoutLayer72.addChild(&ProtoInstance132);

ProtoInstance& ProtoInstance139 =  ProtoInstance();
ProtoInstance139.setName(CString("SliderProto"));
ProtoInstance139.setDEF(CString("cPI"));
fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(CString("sliderTranslation"));
fieldValue140.setValue(CString("0 0.1 0"));
ProtoInstance139.addChild(&fieldValue140);

fieldValue& fieldValue141 =  fieldValue();
fieldValue141.setName(CString("textString"));
fieldValue141.setValue(CString("\"c=\""));
ProtoInstance139.addChild(&fieldValue141);

fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(CString("parameterScale"));
fieldValue142.setValue(CString("20"));
ProtoInstance139.addChild(&fieldValue142);

fieldValue& fieldValue143 =  fieldValue();
fieldValue143.setName(CString("parameterName"));
fieldValue143.setValue(CString("c"));
ProtoInstance139.addChild(&fieldValue143);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(CString("orbScript"));
Script& Script145 =  Script();
Script145.setUSE(CString("OrbitScript"));
fieldValue144.addChild(&Script145);

ProtoInstance139.addChild(&fieldValue144);

LayoutLayer72.addChild(&ProtoInstance139);

ProtoInstance& ProtoInstance146 =  ProtoInstance();
ProtoInstance146.setName(CString("SliderProto"));
ProtoInstance146.setDEF(CString("dPI"));
fieldValue& fieldValue147 =  fieldValue();
fieldValue147.setName(CString("sliderTranslation"));
fieldValue147.setValue(CString("0 -0.2 0"));
ProtoInstance146.addChild(&fieldValue147);

fieldValue& fieldValue148 =  fieldValue();
fieldValue148.setName(CString("textString"));
fieldValue148.setValue(CString("\"d=\""));
ProtoInstance146.addChild(&fieldValue148);

fieldValue& fieldValue149 =  fieldValue();
fieldValue149.setName(CString("parameterScale"));
fieldValue149.setValue(CString("20"));
ProtoInstance146.addChild(&fieldValue149);

fieldValue& fieldValue150 =  fieldValue();
fieldValue150.setName(CString("parameterName"));
fieldValue150.setValue(CString("d"));
ProtoInstance146.addChild(&fieldValue150);

fieldValue& fieldValue151 =  fieldValue();
fieldValue151.setName(CString("orbScript"));
Script& Script152 =  Script();
Script152.setUSE(CString("OrbitScript"));
fieldValue151.addChild(&Script152);

ProtoInstance146.addChild(&fieldValue151);

LayoutLayer72.addChild(&ProtoInstance146);

ProtoInstance& ProtoInstance153 =  ProtoInstance();
ProtoInstance153.setName(CString("SliderProto"));
ProtoInstance153.setDEF(CString("tdeltaPI"));
fieldValue& fieldValue154 =  fieldValue();
fieldValue154.setName(CString("sliderTranslation"));
fieldValue154.setValue(CString("0 -0.5 0"));
ProtoInstance153.addChild(&fieldValue154);

fieldValue& fieldValue155 =  fieldValue();
fieldValue155.setName(CString("textString"));
fieldValue155.setValue(CString("\"tdelta=\""));
ProtoInstance153.addChild(&fieldValue155);

fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(CString("parameterScale"));
fieldValue156.setValue(CString("6.28"));
ProtoInstance153.addChild(&fieldValue156);

fieldValue& fieldValue157 =  fieldValue();
fieldValue157.setName(CString("parameterName"));
fieldValue157.setValue(CString("tdelta"));
ProtoInstance153.addChild(&fieldValue157);

fieldValue& fieldValue158 =  fieldValue();
fieldValue158.setName(CString("orbScript"));
Script& Script159 =  Script();
Script159.setUSE(CString("OrbitScript"));
fieldValue158.addChild(&Script159);

ProtoInstance153.addChild(&fieldValue158);

LayoutLayer72.addChild(&ProtoInstance153);

ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setName(CString("SliderProto"));
ProtoInstance160.setDEF(CString("pdeltaPI"));
fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("sliderTranslation"));
fieldValue161.setValue(CString("0 -0.8 0"));
ProtoInstance160.addChild(&fieldValue161);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(CString("textString"));
fieldValue162.setValue(CString("\"pdelta=\""));
ProtoInstance160.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("parameterScale"));
fieldValue163.setValue(CString("6.28"));
ProtoInstance160.addChild(&fieldValue163);

fieldValue& fieldValue164 =  fieldValue();
fieldValue164.setName(CString("parameterName"));
fieldValue164.setValue(CString("pdelta"));
ProtoInstance160.addChild(&fieldValue164);

fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(CString("orbScript"));
Script& Script166 =  Script();
Script166.setUSE(CString("OrbitScript"));
fieldValue165.addChild(&Script166);

ProtoInstance160.addChild(&fieldValue165);

LayoutLayer72.addChild(&ProtoInstance160);

LayerSet16.addChild(&LayoutLayer72);

Layer& Layer167 =  Layer();
Layer167.setPickable(True);
Layer167.setObjectType(new CString[]{CString("ALL")}, 1);
Viewpoint& Viewpoint168 =  Viewpoint();
Viewpoint168.setDescription(CString("My Humanoids"));
Viewpoint168.setFieldOfView(1.570796);
Viewpoint168.setPosition(new float[]{0,1.75,80});
Layer167.addChild(&Viewpoint168);

LayerSet16.addChild(&Layer167);

Scene15.addChild(&LayerSet16);

X3D0.setScene(&Scene15);

}
