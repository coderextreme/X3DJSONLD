#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(1, new int32_t[]{60});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(1, new int32_t[]{10});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(2, new int32_t[]{0, 60});
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
meta3.setContent(CString("Tue, 15 Sep 2015 04:33:10 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Tue, 15 Sep 2015 06:41:44 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Transform& Transform8 =  Transform();
Transform8.setDEF(CString("Box_1"));
Transform8.setTranslation(new float[]{4.06141,0,0});
Group& Group9 =  Group();
Group9.setDEF(CString("Anim"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Animation"));
MetadataInteger& MetadataInteger11 =  MetadataInteger();
MetadataInteger11.X3DNode::setName(CString("duration"));
MetadataInteger11.setValue(MFInt320);
MetadataSet10.setValue((X3DNode *)&MetadataInteger11);

MetadataInteger& MetadataInteger12 =  MetadataInteger();
MetadataInteger12.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger12.setValue(MFInt321);
MetadataSet10.setValue((X3DNode *)&MetadataInteger12);

Group9.setMetadata(&MetadataSet10);

TimeSensor& TimeSensor13 =  TimeSensor();
TimeSensor13.setDEF(CString("_1"));
TimeSensor13.setCycleInterval(6);
TimeSensor13.setLoop(True);
TimeSensor13.setStartTime(1442299303.32247);
TimeSensor13.setStopTime(1442299303.3224);
Group9.addChild(&TimeSensor13);

PositionInterpolator& PositionInterpolator14 =  PositionInterpolator();
PositionInterpolator14.setDEF(CString("BoxTranslationInterpolator"));
PositionInterpolator14.setKey(new float[]{0,0.0166667,0.0333333,0.05,0.0666667,0.0833333,0.1,0.116667,0.133333,0.15,0.166667,0.183333,0.2,0.216667,0.233333,0.25,0.266667,0.283333,0.3,0.316667,0.333333,0.35,0.366667,0.383333,0.4,0.416667,0.433333,0.45,0.466667,0.483333,0.5,0.516667,0.533333,0.55,0.566667,0.583333,0.6,0.616667,0.633333,0.65,0.666667,0.683333,0.7,0.716667,0.733333,0.75,0.766667,0.783333,0.8,0.816667,0.833333,0.85,0.866667,0.883333,0.9,0.916667,0.933333,0.95,0.966667,0.983333,1}, 61);
PositionInterpolator14.setKeyValue(new float[]{-4.40427,0,0,-4.39688,0,0,-4.37505,0,0,-4.33927,0,0,-4.29005,0,0,-4.22787,0,0,-4.15324,0,0,-4.06666,0,0,-3.96862,0,0,-3.85962,0,0,-3.74017,0,0,-3.61075,0,0,-3.47187,0,0,-3.32403,0,0,-3.16771,0,0,-3.00343,0,0,-2.83168,0,0,-2.65295,0,0,-2.46775,0,0,-2.27657,0,0,-2.07991,0,0,-1.87827,0,0,-1.67215,0,0,-1.46205,0,0,-1.24846,0,0,-1.03187,0,0,-0.812804,0,0,-0.591741,0,0,-0.369183,0,0,-0.14563,0,0,0.0784221,0,0,0.302474,0,0,0.526027,0,0,0.748585,0,0,0.969648,0,0,1.18872,0,0,1.4053,0,0,1.61889,0,0,1.829,0,0,2.03512,0,0,2.23676,0,0,2.43341,0,0,2.62459,0,0,2.80979,0,0,2.98852,0,0,3.16027,0,0,3.32456,0,0,3.48087,0,0,3.62872,0,0,3.7676,0,0,3.89701,0,0,4.01647,0,0,4.12546,0,0,4.2235,0,0,4.31009,0,0,4.38471,0,0,4.44689,0,0,4.49612,0,0,4.5319,0,0,4.55373,0,0,4.56112,0,0}, 183);
MetadataSet& MetadataSet15 =  MetadataSet();
MetadataSet15.X3DNode::setName(CString("Interpolator"));
MetadataInteger& MetadataInteger16 =  MetadataInteger();
MetadataInteger16.X3DNode::setName(CString("key"));
MetadataInteger16.setValue(MFInt322);
MetadataSet15.setValue((X3DNode *)&MetadataInteger16);

MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("keyValue"));
MetadataDouble17.setValue(new double[]{-4.40427207946777,0,0,4.56111621856689,0,0}, 6);
MetadataSet15.setValue((X3DNode *)&MetadataDouble17);

MetadataString& MetadataString18 =  MetadataString();
MetadataString18.X3DNode::setName(CString("keyType"));
MetadataString18.setValue(new CString[]{CString(", "), CString("SPLINESPLINE")}, 2);
MetadataSet15.setValue((X3DNode *)&MetadataString18);

PositionInterpolator14.setMetadata(&MetadataSet15);

Group9.addChild(&PositionInterpolator14);

Transform8.addChild(&Group9);

Shape& Shape19 =  Shape();
Appearance& Appearance20 =  Appearance();
Material& Material21 =  Material();
Appearance20.addChild(&Material21);

Shape19.addChild(&Appearance20);

Box& Box22 =  Box();
Shape19.setGeometry(&Box22);

Transform8.addChild(&Shape19);

Scene7.addChild(&Transform8);

Viewpoint& Viewpoint23 =  Viewpoint();
Scene7.addChild(&Viewpoint23);

Script& Script24 =  Script();
Script24.setDEF(CString("_2"));
field& field25 =  field();
field25.setName(CString("set_translation"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFVec3f"));
Script24.addChild(&field25);


Script24.setSourceCode(CString("javascript:")+
_T("var x = 0;")+
_T("function set_translation (value)")+
_T("{")+
_T("	if (value .x < x)")+
_T("		print (x, \" : \", value .x);")+
_T("	")+
_T("	x = value .x;")+
_T("}"));
Scene7.addChild(&Script24);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("_1"));
ROUTE26.setFromField(CString("fraction_changed"));
ROUTE26.setToNode(CString("BoxTranslationInterpolator"));
ROUTE26.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("BoxTranslationInterpolator"));
ROUTE27.setFromField(CString("value_changed"));
ROUTE27.setToNode(CString("Box_1"));
ROUTE27.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("Box_1"));
ROUTE28.setFromField(CString("translation_changed"));
ROUTE28.setToNode(CString("_2"));
ROUTE28.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE28);

X3D0.setScene(&Scene7);

}
