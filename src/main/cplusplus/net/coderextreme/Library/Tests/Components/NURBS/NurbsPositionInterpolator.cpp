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
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("NURBS"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("World of Titania"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("26 February 2003"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Charles Adams"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("Example of animating a ball along a NurbsCurve."));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Titania V4.3.10, http://titania.create3000.de"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsPositionInterpolator.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("license"));
meta9.setContent(CString("../license.html"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Wed, 16 Jan 2019 16:29:52 GMT"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://edocs.nps.edu/npspubs/scholarly/theses/2003/Jun/03Jun_Adams.pdf"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("subject"));
meta12.setContent(CString("NURBS Position Interpolator"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("title"));
meta13.setContent(CString("NurbsPositionInterpolatorExample.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("warning"));
meta14.setContent(CString("under development, needs to be upgraded to final version of X3D NURBS nodes"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("NurbsPositionInterpolatorExample"));
MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Titania"));
MetadataSet17.setDEF(CString("Titania"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("Page"));
MetadataSet18.setDEF(CString("Page"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger19 =  MetadataInteger();
MetadataInteger19.X3DNode::setName(CString("activeView"));
MetadataInteger19.setDEF(CString("activeView"));
MetadataInteger19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger19.setValue(MFInt320);
MetadataSet18.setValue((X3DNode *)&MetadataInteger19);

MetadataInteger& MetadataInteger20 =  MetadataInteger();
MetadataInteger20.X3DNode::setName(CString("multiView"));
MetadataInteger20.setDEF(CString("multiView"));
MetadataInteger20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger20.setValue(MFInt321);
MetadataSet18.setValue((X3DNode *)&MetadataInteger20);

MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet21 =  MetadataSet();
MetadataSet21.X3DNode::setName(CString("Selection"));
MetadataSet21.setDEF(CString("Selection"));
MetadataSet21.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean22 =  MetadataBoolean();
MetadataBoolean22.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean22.setDEF(CString("selectGeometry"));
MetadataBoolean22.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean22.setValue(new boolean[]{True});
MetadataSet21.setValue((X3DNode *)&MetadataBoolean22);

MetadataSet& MetadataSet23 =  MetadataSet();
MetadataSet23.X3DNode::setName(CString("nodes"));
MetadataSet23.setDEF(CString("nodes"));
MetadataSet23.X3DNode::setReference(CString("http://titania.create3000.de"));
Shape& Shape24 =  Shape();
Shape24.setDEF(CString("_1"));
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setEmissiveColor(new float[]{1,1,1});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

NurbsCurve& NurbsCurve27 =  NurbsCurve();
NurbsCurve27.setDEF(CString("nc"));
NurbsCurve27.setTessellation(30);
NurbsCurve27.setOrder(4);
Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setDEF(CString("_2"));
Coordinate28.setPoint(new float[]{4,6,0,7,12,0,11,6,0,15,2,0,20,6,0}, 15);
NurbsCurve27.setControlPoint(Coordinate28);

Shape24.setGeometry(NurbsCurve27);

MetadataSet23.setShape(Shape24);

MetadataSet21.setValue((X3DNode *)&MetadataSet23);

MetadataSet17.setValue((X3DNode *)&MetadataSet21);

WorldInfo16.setMetadata(&MetadataSet17);

Scene15.addChild(&WorldInfo16);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setDescription(CString("NurbsPositionInterpolator path"));
Viewpoint29.setPosition(new float[]{11,4.6,18});
Scene15.addChild(&Viewpoint29);

TimeSensor& TimeSensor30 =  TimeSensor();
TimeSensor30.setDEF(CString("ts"));
TimeSensor30.setCycleInterval(4);
TimeSensor30.setLoop(True);
Scene15.addChild(&TimeSensor30);

NurbsPositionInterpolator& NurbsPositionInterpolator31 =  NurbsPositionInterpolator();
NurbsPositionInterpolator31.setDEF(CString("npi"));
NurbsPositionInterpolator31.setOrder(4);
NurbsPositionInterpolator31.setKnot(new double[]{0,0.25,0.5,0.75,1}, 5);
Coordinate& Coordinate32 =  Coordinate();
Coordinate32.setDEF(CString("_3"));
Coordinate32.setPoint(new float[]{4,6,0,7,12,0,11,6,0,15,2,0,20,6,0}, 15);
NurbsPositionInterpolator31.setControlPoint(Coordinate32);

Scene15.addChild(&NurbsPositionInterpolator31);

NurbsOrientationInterpolator& NurbsOrientationInterpolator33 =  NurbsOrientationInterpolator();
NurbsOrientationInterpolator33.setDEF(CString("_4"));
NurbsOrientationInterpolator33.setOrder(4);
NurbsOrientationInterpolator33.setKnot(new double[]{0,0.25,0.5,0.75,1}, 5);
Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setUSE(CString("_3"));
NurbsOrientationInterpolator33.setControlPoint(Coordinate34);

Scene15.addChild(&NurbsOrientationInterpolator33);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("_5"));
Transform35.setTranslation(new float[]{12.6002,4.57153,0});
Transform35.setRotation(new float[]{0.68202330039387,0.731330443588842,0,1.57048490427067});
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Cone"));
Transform36.setRotation(new float[]{0.999999999993254,0.00000367320512848233,4.15024534058304e-19,1.5707963267949});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setDEF(CString("Rococo28"));
Material39.setAmbientIntensity(0.226102);
Material39.setDiffuseColor(new float[]{0.279645,0.904409,0.511589});
Material39.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material39.setShininess(0.078125);
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Cone& Cone40 =  Cone();
Shape37.setGeometry(&Cone40);

Transform36.addChild(&Shape37);

Transform35.addChild(&Transform36);

Scene15.addChild(&Transform35);

Shape& Shape41 =  Shape();
Shape41.setUSE(CString("_1"));
Scene15.addChild(&Shape41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("ts"));
ROUTE42.setFromField(CString("fraction_changed"));
ROUTE42.setToNode(CString("npi"));
ROUTE42.setToField(CString("set_fraction"));
Scene15.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("npi"));
ROUTE43.setFromField(CString("value_changed"));
ROUTE43.setToNode(CString("_5"));
ROUTE43.setToField(CString("set_translation"));
Scene15.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("ts"));
ROUTE44.setFromField(CString("fraction_changed"));
ROUTE44.setToNode(CString("_4"));
ROUTE44.setToField(CString("set_fraction"));
Scene15.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("_4"));
ROUTE45.setFromField(CString("value_changed"));
ROUTE45.setToNode(CString("_5"));
ROUTE45.setToField(CString("set_rotation"));
Scene15.addChild(&ROUTE45);

X3D0.setScene(&Scene15);

}
